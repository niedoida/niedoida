/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_7_8(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 84 * OS1_S1 + 120) =
                prefactor_x * *(b + 84 * OS1_S1 + 84) -
                p_over_q * *(b + 120 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 84 * OS1_S1 + 56);
            *(b + 84 * OS1_S1 + 121) = prefactor_y * *(b + 84 * OS1_S1 + 84) -
                                       p_over_q * *(b + 121 * OS1_S1 + 84);
            *(b + 84 * OS1_S1 + 122) = prefactor_z * *(b + 84 * OS1_S1 + 84) -
                                       p_over_q * *(b + 122 * OS1_S1 + 84);
            *(b + 84 * OS1_S1 + 123) = prefactor_y * *(b + 84 * OS1_S1 + 85) -
                                       p_over_q * *(b + 121 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 56);
            *(b + 84 * OS1_S1 + 124) = prefactor_z * *(b + 84 * OS1_S1 + 85) -
                                       p_over_q * *(b + 122 * OS1_S1 + 85);
            *(b + 84 * OS1_S1 + 125) = prefactor_z * *(b + 84 * OS1_S1 + 86) -
                                       p_over_q * *(b + 122 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 56);
            *(b + 84 * OS1_S1 + 126) =
                prefactor_y * *(b + 84 * OS1_S1 + 87) -
                p_over_q * *(b + 121 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 57);
            *(b + 84 * OS1_S1 + 127) = prefactor_z * *(b + 84 * OS1_S1 + 87) -
                                       p_over_q * *(b + 122 * OS1_S1 + 87);
            *(b + 84 * OS1_S1 + 128) = prefactor_y * *(b + 84 * OS1_S1 + 89) -
                                       p_over_q * *(b + 121 * OS1_S1 + 89);
            *(b + 84 * OS1_S1 + 129) =
                prefactor_z * *(b + 84 * OS1_S1 + 89) -
                p_over_q * *(b + 122 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 58);
            *(b + 84 * OS1_S1 + 130) =
                prefactor_y * *(b + 84 * OS1_S1 + 90) -
                p_over_q * *(b + 121 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 84 * OS1_S1 + 59);
            *(b + 84 * OS1_S1 + 131) = prefactor_z * *(b + 84 * OS1_S1 + 90) -
                                       p_over_q * *(b + 122 * OS1_S1 + 90);
            *(b + 84 * OS1_S1 + 132) = prefactor_z * *(b + 84 * OS1_S1 + 91) -
                                       p_over_q * *(b + 122 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 59);
            *(b + 84 * OS1_S1 + 133) = prefactor_y * *(b + 84 * OS1_S1 + 93) -
                                       p_over_q * *(b + 121 * OS1_S1 + 93);
            *(b + 84 * OS1_S1 + 134) =
                prefactor_z * *(b + 84 * OS1_S1 + 93) -
                p_over_q * *(b + 122 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 84 * OS1_S1 + 61);
            *(b + 84 * OS1_S1 + 135) =
                prefactor_x * *(b + 84 * OS1_S1 + 99) -
                p_over_q * *(b + 120 * OS1_S1 + 99) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 71);
            *(b + 84 * OS1_S1 + 136) = prefactor_z * *(b + 84 * OS1_S1 + 94) -
                                       p_over_q * *(b + 122 * OS1_S1 + 94);
            *(b + 84 * OS1_S1 + 137) = prefactor_z * *(b + 84 * OS1_S1 + 95) -
                                       p_over_q * *(b + 122 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 62);
            *(b + 84 * OS1_S1 + 138) = prefactor_y * *(b + 84 * OS1_S1 + 97) -
                                       p_over_q * *(b + 121 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 65);
            *(b + 84 * OS1_S1 + 139) = prefactor_y * *(b + 84 * OS1_S1 + 98) -
                                       p_over_q * *(b + 121 * OS1_S1 + 98);
            *(b + 84 * OS1_S1 + 140) =
                prefactor_x * *(b + 84 * OS1_S1 + 104) -
                p_over_q * *(b + 120 * OS1_S1 + 104) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 76);
            *(b + 84 * OS1_S1 + 141) =
                prefactor_x * *(b + 84 * OS1_S1 + 105) -
                p_over_q * *(b + 120 * OS1_S1 + 105) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 105) +
                one_over_two_q * *(b + 84 * OS1_S1 + 77);
            *(b + 84 * OS1_S1 + 142) = prefactor_z * *(b + 84 * OS1_S1 + 99) -
                                       p_over_q * *(b + 122 * OS1_S1 + 99);
            *(b + 84 * OS1_S1 + 143) = prefactor_z * *(b + 84 * OS1_S1 + 100) -
                                       p_over_q * *(b + 122 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 66);
            *(b + 84 * OS1_S1 + 144) =
                prefactor_x * *(b + 84 * OS1_S1 + 108) -
                p_over_q * *(b + 120 * OS1_S1 + 108) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 108) +
                one_over_two_q * *(b + 84 * OS1_S1 + 80);
            *(b + 84 * OS1_S1 + 145) = prefactor_y * *(b + 84 * OS1_S1 + 103) -
                                       p_over_q * *(b + 121 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 70);
            *(b + 84 * OS1_S1 + 146) = prefactor_y * *(b + 84 * OS1_S1 + 104) -
                                       p_over_q * *(b + 121 * OS1_S1 + 104);
            *(b + 84 * OS1_S1 + 147) =
                prefactor_x * *(b + 84 * OS1_S1 + 111) -
                p_over_q * *(b + 120 * OS1_S1 + 111) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 111) +
                one_over_two_q * *(b + 84 * OS1_S1 + 83);
            *(b + 84 * OS1_S1 + 148) =
                prefactor_x * *(b + 84 * OS1_S1 + 112) -
                p_over_q * *(b + 120 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 112);
            *(b + 84 * OS1_S1 + 149) = prefactor_z * *(b + 84 * OS1_S1 + 105) -
                                       p_over_q * *(b + 122 * OS1_S1 + 105);
            *(b + 84 * OS1_S1 + 150) =
                prefactor_x * *(b + 84 * OS1_S1 + 114) -
                p_over_q * *(b + 120 * OS1_S1 + 114) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 114);
            *(b + 84 * OS1_S1 + 151) =
                prefactor_x * *(b + 84 * OS1_S1 + 115) -
                p_over_q * *(b + 120 * OS1_S1 + 115) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 115);
            *(b + 84 * OS1_S1 + 152) =
                prefactor_x * *(b + 84 * OS1_S1 + 116) -
                p_over_q * *(b + 120 * OS1_S1 + 116) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 116);
            *(b + 84 * OS1_S1 + 153) =
                prefactor_x * *(b + 84 * OS1_S1 + 117) -
                p_over_q * *(b + 120 * OS1_S1 + 117) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 117);
            *(b + 84 * OS1_S1 + 154) = prefactor_y * *(b + 84 * OS1_S1 + 111) -
                                       p_over_q * *(b + 121 * OS1_S1 + 111);
            *(b + 84 * OS1_S1 + 155) =
                prefactor_x * *(b + 84 * OS1_S1 + 119) -
                p_over_q * *(b + 120 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 56 * OS1_S1 + 119);
            *(b + 84 * OS1_S1 + 156) =
                prefactor_y * *(b + 84 * OS1_S1 + 112) -
                p_over_q * *(b + 121 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 84 * OS1_S1 + 77);
            *(b + 84 * OS1_S1 + 157) = prefactor_z * *(b + 84 * OS1_S1 + 112) -
                                       p_over_q * *(b + 122 * OS1_S1 + 112);
            *(b + 84 * OS1_S1 + 158) = prefactor_z * *(b + 84 * OS1_S1 + 113) -
                                       p_over_q * *(b + 122 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 77);
            *(b + 84 * OS1_S1 + 159) =
                prefactor_z * *(b + 84 * OS1_S1 + 114) -
                p_over_q * *(b + 122 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 78);
            *(b + 84 * OS1_S1 + 160) =
                prefactor_z * *(b + 84 * OS1_S1 + 115) -
                p_over_q * *(b + 122 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 84 * OS1_S1 + 79);
            *(b + 84 * OS1_S1 + 161) =
                prefactor_y * *(b + 84 * OS1_S1 + 117) -
                p_over_q * *(b + 121 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 84 * OS1_S1 + 82);
            *(b + 84 * OS1_S1 + 162) = prefactor_y * *(b + 84 * OS1_S1 + 118) -
                                       p_over_q * *(b + 121 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 84 * OS1_S1 + 83);
            *(b + 84 * OS1_S1 + 163) = prefactor_y * *(b + 84 * OS1_S1 + 119) -
                                       p_over_q * *(b + 121 * OS1_S1 + 119);
            *(b + 84 * OS1_S1 + 164) =
                prefactor_z * *(b + 84 * OS1_S1 + 119) -
                p_over_q * *(b + 122 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 84 * OS1_S1 + 83);
            *(b + 85 * OS1_S1 + 120) =
                prefactor_x * *(b + 85 * OS1_S1 + 84) -
                p_over_q * *(b + 121 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 56);
            *(b + 85 * OS1_S1 + 121) = prefactor_y * *(b + 85 * OS1_S1 + 84) -
                                       p_over_q * *(b + 123 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 84);
            *(b + 85 * OS1_S1 + 122) = prefactor_z * *(b + 85 * OS1_S1 + 84) -
                                       p_over_q * *(b + 124 * OS1_S1 + 84);
            *(b + 85 * OS1_S1 + 123) =
                prefactor_y * *(b + 85 * OS1_S1 + 85) -
                p_over_q * *(b + 123 * OS1_S1 + 85) +
                one_over_two_q * *(b + 56 * OS1_S1 + 85) +
                one_over_two_q * *(b + 85 * OS1_S1 + 56);
            *(b + 85 * OS1_S1 + 124) = prefactor_z * *(b + 85 * OS1_S1 + 85) -
                                       p_over_q * *(b + 124 * OS1_S1 + 85);
            *(b + 85 * OS1_S1 + 125) = prefactor_z * *(b + 85 * OS1_S1 + 86) -
                                       p_over_q * *(b + 124 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 56);
            *(b + 85 * OS1_S1 + 126) =
                prefactor_y * *(b + 85 * OS1_S1 + 87) -
                p_over_q * *(b + 123 * OS1_S1 + 87) +
                one_over_two_q * *(b + 56 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 57);
            *(b + 85 * OS1_S1 + 127) = prefactor_z * *(b + 85 * OS1_S1 + 87) -
                                       p_over_q * *(b + 124 * OS1_S1 + 87);
            *(b + 85 * OS1_S1 + 128) = prefactor_y * *(b + 85 * OS1_S1 + 89) -
                                       p_over_q * *(b + 123 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 89);
            *(b + 85 * OS1_S1 + 129) =
                prefactor_z * *(b + 85 * OS1_S1 + 89) -
                p_over_q * *(b + 124 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 58);
            *(b + 85 * OS1_S1 + 130) =
                prefactor_y * *(b + 85 * OS1_S1 + 90) -
                p_over_q * *(b + 123 * OS1_S1 + 90) +
                one_over_two_q * *(b + 56 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 85 * OS1_S1 + 59);
            *(b + 85 * OS1_S1 + 131) = prefactor_z * *(b + 85 * OS1_S1 + 90) -
                                       p_over_q * *(b + 124 * OS1_S1 + 90);
            *(b + 85 * OS1_S1 + 132) = prefactor_z * *(b + 85 * OS1_S1 + 91) -
                                       p_over_q * *(b + 124 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 59);
            *(b + 85 * OS1_S1 + 133) = prefactor_y * *(b + 85 * OS1_S1 + 93) -
                                       p_over_q * *(b + 123 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 93);
            *(b + 85 * OS1_S1 + 134) =
                prefactor_z * *(b + 85 * OS1_S1 + 93) -
                p_over_q * *(b + 124 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 85 * OS1_S1 + 61);
            *(b + 85 * OS1_S1 + 135) =
                prefactor_x * *(b + 85 * OS1_S1 + 99) -
                p_over_q * *(b + 121 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 71);
            *(b + 85 * OS1_S1 + 136) = prefactor_z * *(b + 85 * OS1_S1 + 94) -
                                       p_over_q * *(b + 124 * OS1_S1 + 94);
            *(b + 85 * OS1_S1 + 137) = prefactor_z * *(b + 85 * OS1_S1 + 95) -
                                       p_over_q * *(b + 124 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 62);
            *(b + 85 * OS1_S1 + 138) =
                prefactor_y * *(b + 85 * OS1_S1 + 97) -
                p_over_q * *(b + 123 * OS1_S1 + 97) +
                one_over_two_q * *(b + 56 * OS1_S1 + 97) +
                one_over_two_q * *(b + 85 * OS1_S1 + 65);
            *(b + 85 * OS1_S1 + 139) = prefactor_y * *(b + 85 * OS1_S1 + 98) -
                                       p_over_q * *(b + 123 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 98);
            *(b + 85 * OS1_S1 + 140) =
                prefactor_x * *(b + 85 * OS1_S1 + 104) -
                p_over_q * *(b + 121 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 76);
            *(b + 85 * OS1_S1 + 141) =
                prefactor_x * *(b + 85 * OS1_S1 + 105) -
                p_over_q * *(b + 121 * OS1_S1 + 105) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 105) +
                one_over_two_q * *(b + 85 * OS1_S1 + 77);
            *(b + 85 * OS1_S1 + 142) = prefactor_z * *(b + 85 * OS1_S1 + 99) -
                                       p_over_q * *(b + 124 * OS1_S1 + 99);
            *(b + 85 * OS1_S1 + 143) = prefactor_z * *(b + 85 * OS1_S1 + 100) -
                                       p_over_q * *(b + 124 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 66);
            *(b + 85 * OS1_S1 + 144) =
                prefactor_x * *(b + 85 * OS1_S1 + 108) -
                p_over_q * *(b + 121 * OS1_S1 + 108) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 108) +
                one_over_two_q * *(b + 85 * OS1_S1 + 80);
            *(b + 85 * OS1_S1 + 145) =
                prefactor_y * *(b + 85 * OS1_S1 + 103) -
                p_over_q * *(b + 123 * OS1_S1 + 103) +
                one_over_two_q * *(b + 56 * OS1_S1 + 103) +
                one_over_two_q * *(b + 85 * OS1_S1 + 70);
            *(b + 85 * OS1_S1 + 146) =
                prefactor_y * *(b + 85 * OS1_S1 + 104) -
                p_over_q * *(b + 123 * OS1_S1 + 104) +
                one_over_two_q * *(b + 56 * OS1_S1 + 104);
            *(b + 85 * OS1_S1 + 147) =
                prefactor_x * *(b + 85 * OS1_S1 + 111) -
                p_over_q * *(b + 121 * OS1_S1 + 111) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 111) +
                one_over_two_q * *(b + 85 * OS1_S1 + 83);
            *(b + 85 * OS1_S1 + 148) =
                prefactor_x * *(b + 85 * OS1_S1 + 112) -
                p_over_q * *(b + 121 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 112);
            *(b + 85 * OS1_S1 + 149) = prefactor_z * *(b + 85 * OS1_S1 + 105) -
                                       p_over_q * *(b + 124 * OS1_S1 + 105);
            *(b + 85 * OS1_S1 + 150) =
                prefactor_x * *(b + 85 * OS1_S1 + 114) -
                p_over_q * *(b + 121 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 114);
            *(b + 85 * OS1_S1 + 151) =
                prefactor_x * *(b + 85 * OS1_S1 + 115) -
                p_over_q * *(b + 121 * OS1_S1 + 115) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 115);
            *(b + 85 * OS1_S1 + 152) =
                prefactor_x * *(b + 85 * OS1_S1 + 116) -
                p_over_q * *(b + 121 * OS1_S1 + 116) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 116);
            *(b + 85 * OS1_S1 + 153) =
                prefactor_x * *(b + 85 * OS1_S1 + 117) -
                p_over_q * *(b + 121 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 117);
            *(b + 85 * OS1_S1 + 154) =
                prefactor_y * *(b + 85 * OS1_S1 + 111) -
                p_over_q * *(b + 123 * OS1_S1 + 111) +
                one_over_two_q * *(b + 56 * OS1_S1 + 111);
            *(b + 85 * OS1_S1 + 155) =
                prefactor_x * *(b + 85 * OS1_S1 + 119) -
                p_over_q * *(b + 121 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 57 * OS1_S1 + 119);
            *(b + 85 * OS1_S1 + 156) =
                prefactor_y * *(b + 85 * OS1_S1 + 112) -
                p_over_q * *(b + 123 * OS1_S1 + 112) +
                one_over_two_q * *(b + 56 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 77);
            *(b + 85 * OS1_S1 + 157) = prefactor_z * *(b + 85 * OS1_S1 + 112) -
                                       p_over_q * *(b + 124 * OS1_S1 + 112);
            *(b + 85 * OS1_S1 + 158) = prefactor_z * *(b + 85 * OS1_S1 + 113) -
                                       p_over_q * *(b + 124 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 85 * OS1_S1 + 77);
            *(b + 85 * OS1_S1 + 159) =
                prefactor_z * *(b + 85 * OS1_S1 + 114) -
                p_over_q * *(b + 124 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 78);
            *(b + 85 * OS1_S1 + 160) =
                prefactor_z * *(b + 85 * OS1_S1 + 115) -
                p_over_q * *(b + 124 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 85 * OS1_S1 + 79);
            *(b + 85 * OS1_S1 + 161) =
                prefactor_y * *(b + 85 * OS1_S1 + 117) -
                p_over_q * *(b + 123 * OS1_S1 + 117) +
                one_over_two_q * *(b + 56 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 85 * OS1_S1 + 82);
            *(b + 85 * OS1_S1 + 162) =
                prefactor_y * *(b + 85 * OS1_S1 + 118) -
                p_over_q * *(b + 123 * OS1_S1 + 118) +
                one_over_two_q * *(b + 56 * OS1_S1 + 118) +
                one_over_two_q * *(b + 85 * OS1_S1 + 83);
            *(b + 85 * OS1_S1 + 163) =
                prefactor_y * *(b + 85 * OS1_S1 + 119) -
                p_over_q * *(b + 123 * OS1_S1 + 119) +
                one_over_two_q * *(b + 56 * OS1_S1 + 119);
            *(b + 85 * OS1_S1 + 164) =
                prefactor_z * *(b + 85 * OS1_S1 + 119) -
                p_over_q * *(b + 124 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 85 * OS1_S1 + 83);
            *(b + 86 * OS1_S1 + 120) =
                prefactor_x * *(b + 86 * OS1_S1 + 84) -
                p_over_q * *(b + 122 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 56);
            *(b + 86 * OS1_S1 + 121) = prefactor_y * *(b + 86 * OS1_S1 + 84) -
                                       p_over_q * *(b + 124 * OS1_S1 + 84);
            *(b + 86 * OS1_S1 + 122) = prefactor_z * *(b + 86 * OS1_S1 + 84) -
                                       p_over_q * *(b + 125 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 84);
            *(b + 86 * OS1_S1 + 123) = prefactor_y * *(b + 86 * OS1_S1 + 85) -
                                       p_over_q * *(b + 124 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 56);
            *(b + 86 * OS1_S1 + 124) = prefactor_y * *(b + 86 * OS1_S1 + 86) -
                                       p_over_q * *(b + 124 * OS1_S1 + 86);
            *(b + 86 * OS1_S1 + 125) =
                prefactor_z * *(b + 86 * OS1_S1 + 86) -
                p_over_q * *(b + 125 * OS1_S1 + 86) +
                one_over_two_q * *(b + 56 * OS1_S1 + 86) +
                one_over_two_q * *(b + 86 * OS1_S1 + 56);
            *(b + 86 * OS1_S1 + 126) =
                prefactor_y * *(b + 86 * OS1_S1 + 87) -
                p_over_q * *(b + 124 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 57);
            *(b + 86 * OS1_S1 + 127) = prefactor_z * *(b + 86 * OS1_S1 + 87) -
                                       p_over_q * *(b + 125 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 87);
            *(b + 86 * OS1_S1 + 128) = prefactor_y * *(b + 86 * OS1_S1 + 89) -
                                       p_over_q * *(b + 124 * OS1_S1 + 89);
            *(b + 86 * OS1_S1 + 129) =
                prefactor_z * *(b + 86 * OS1_S1 + 89) -
                p_over_q * *(b + 125 * OS1_S1 + 89) +
                one_over_two_q * *(b + 56 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 58);
            *(b + 86 * OS1_S1 + 130) =
                prefactor_y * *(b + 86 * OS1_S1 + 90) -
                p_over_q * *(b + 124 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 86 * OS1_S1 + 59);
            *(b + 86 * OS1_S1 + 131) = prefactor_z * *(b + 86 * OS1_S1 + 90) -
                                       p_over_q * *(b + 125 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 90);
            *(b + 86 * OS1_S1 + 132) = prefactor_y * *(b + 86 * OS1_S1 + 92) -
                                       p_over_q * *(b + 124 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 61);
            *(b + 86 * OS1_S1 + 133) = prefactor_y * *(b + 86 * OS1_S1 + 93) -
                                       p_over_q * *(b + 124 * OS1_S1 + 93);
            *(b + 86 * OS1_S1 + 134) =
                prefactor_z * *(b + 86 * OS1_S1 + 93) -
                p_over_q * *(b + 125 * OS1_S1 + 93) +
                one_over_two_q * *(b + 56 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 86 * OS1_S1 + 61);
            *(b + 86 * OS1_S1 + 135) =
                prefactor_x * *(b + 86 * OS1_S1 + 99) -
                p_over_q * *(b + 122 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 71);
            *(b + 86 * OS1_S1 + 136) = prefactor_z * *(b + 86 * OS1_S1 + 94) -
                                       p_over_q * *(b + 125 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 94);
            *(b + 86 * OS1_S1 + 137) =
                prefactor_z * *(b + 86 * OS1_S1 + 95) -
                p_over_q * *(b + 125 * OS1_S1 + 95) +
                one_over_two_q * *(b + 56 * OS1_S1 + 95) +
                one_over_two_q * *(b + 86 * OS1_S1 + 62);
            *(b + 86 * OS1_S1 + 138) = prefactor_y * *(b + 86 * OS1_S1 + 97) -
                                       p_over_q * *(b + 124 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 65);
            *(b + 86 * OS1_S1 + 139) = prefactor_y * *(b + 86 * OS1_S1 + 98) -
                                       p_over_q * *(b + 124 * OS1_S1 + 98);
            *(b + 86 * OS1_S1 + 140) =
                prefactor_x * *(b + 86 * OS1_S1 + 104) -
                p_over_q * *(b + 122 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 76);
            *(b + 86 * OS1_S1 + 141) =
                prefactor_x * *(b + 86 * OS1_S1 + 105) -
                p_over_q * *(b + 122 * OS1_S1 + 105) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 105) +
                one_over_two_q * *(b + 86 * OS1_S1 + 77);
            *(b + 86 * OS1_S1 + 142) = prefactor_z * *(b + 86 * OS1_S1 + 99) -
                                       p_over_q * *(b + 125 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 56 * OS1_S1 + 99);
            *(b + 86 * OS1_S1 + 143) =
                prefactor_z * *(b + 86 * OS1_S1 + 100) -
                p_over_q * *(b + 125 * OS1_S1 + 100) +
                one_over_two_q * *(b + 56 * OS1_S1 + 100) +
                one_over_two_q * *(b + 86 * OS1_S1 + 66);
            *(b + 86 * OS1_S1 + 144) =
                prefactor_x * *(b + 86 * OS1_S1 + 108) -
                p_over_q * *(b + 122 * OS1_S1 + 108) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 108) +
                one_over_two_q * *(b + 86 * OS1_S1 + 80);
            *(b + 86 * OS1_S1 + 145) = prefactor_y * *(b + 86 * OS1_S1 + 103) -
                                       p_over_q * *(b + 124 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 70);
            *(b + 86 * OS1_S1 + 146) = prefactor_y * *(b + 86 * OS1_S1 + 104) -
                                       p_over_q * *(b + 124 * OS1_S1 + 104);
            *(b + 86 * OS1_S1 + 147) =
                prefactor_x * *(b + 86 * OS1_S1 + 111) -
                p_over_q * *(b + 122 * OS1_S1 + 111) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 111) +
                one_over_two_q * *(b + 86 * OS1_S1 + 83);
            *(b + 86 * OS1_S1 + 148) =
                prefactor_x * *(b + 86 * OS1_S1 + 112) -
                p_over_q * *(b + 122 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 112);
            *(b + 86 * OS1_S1 + 149) =
                prefactor_z * *(b + 86 * OS1_S1 + 105) -
                p_over_q * *(b + 125 * OS1_S1 + 105) +
                one_over_two_q * *(b + 56 * OS1_S1 + 105);
            *(b + 86 * OS1_S1 + 150) =
                prefactor_x * *(b + 86 * OS1_S1 + 114) -
                p_over_q * *(b + 122 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 114);
            *(b + 86 * OS1_S1 + 151) =
                prefactor_x * *(b + 86 * OS1_S1 + 115) -
                p_over_q * *(b + 122 * OS1_S1 + 115) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 115);
            *(b + 86 * OS1_S1 + 152) =
                prefactor_x * *(b + 86 * OS1_S1 + 116) -
                p_over_q * *(b + 122 * OS1_S1 + 116) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 116);
            *(b + 86 * OS1_S1 + 153) =
                prefactor_x * *(b + 86 * OS1_S1 + 117) -
                p_over_q * *(b + 122 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 117);
            *(b + 86 * OS1_S1 + 154) = prefactor_y * *(b + 86 * OS1_S1 + 111) -
                                       p_over_q * *(b + 124 * OS1_S1 + 111);
            *(b + 86 * OS1_S1 + 155) =
                prefactor_x * *(b + 86 * OS1_S1 + 119) -
                p_over_q * *(b + 122 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 58 * OS1_S1 + 119);
            *(b + 86 * OS1_S1 + 156) =
                prefactor_y * *(b + 86 * OS1_S1 + 112) -
                p_over_q * *(b + 124 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 77);
            *(b + 86 * OS1_S1 + 157) =
                prefactor_z * *(b + 86 * OS1_S1 + 112) -
                p_over_q * *(b + 125 * OS1_S1 + 112) +
                one_over_two_q * *(b + 56 * OS1_S1 + 112);
            *(b + 86 * OS1_S1 + 158) =
                prefactor_z * *(b + 86 * OS1_S1 + 113) -
                p_over_q * *(b + 125 * OS1_S1 + 113) +
                one_over_two_q * *(b + 56 * OS1_S1 + 113) +
                one_over_two_q * *(b + 86 * OS1_S1 + 77);
            *(b + 86 * OS1_S1 + 159) =
                prefactor_z * *(b + 86 * OS1_S1 + 114) -
                p_over_q * *(b + 125 * OS1_S1 + 114) +
                one_over_two_q * *(b + 56 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 78);
            *(b + 86 * OS1_S1 + 160) =
                prefactor_y * *(b + 86 * OS1_S1 + 116) -
                p_over_q * *(b + 124 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 86 * OS1_S1 + 81);
            *(b + 86 * OS1_S1 + 161) =
                prefactor_y * *(b + 86 * OS1_S1 + 117) -
                p_over_q * *(b + 124 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 86 * OS1_S1 + 82);
            *(b + 86 * OS1_S1 + 162) = prefactor_y * *(b + 86 * OS1_S1 + 118) -
                                       p_over_q * *(b + 124 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 86 * OS1_S1 + 83);
            *(b + 86 * OS1_S1 + 163) = prefactor_y * *(b + 86 * OS1_S1 + 119) -
                                       p_over_q * *(b + 124 * OS1_S1 + 119);
            *(b + 86 * OS1_S1 + 164) =
                prefactor_z * *(b + 86 * OS1_S1 + 119) -
                p_over_q * *(b + 125 * OS1_S1 + 119) +
                one_over_two_q * *(b + 56 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 86 * OS1_S1 + 83);
            *(b + 87 * OS1_S1 + 120) =
                prefactor_x * *(b + 87 * OS1_S1 + 84) -
                p_over_q * *(b + 123 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 87 * OS1_S1 + 56);
            *(b + 87 * OS1_S1 + 121) =
                prefactor_y * *(b + 87 * OS1_S1 + 84) -
                p_over_q * *(b + 126 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 84);
            *(b + 87 * OS1_S1 + 122) = prefactor_z * *(b + 87 * OS1_S1 + 84) -
                                       p_over_q * *(b + 127 * OS1_S1 + 84);
            *(b + 87 * OS1_S1 + 123) =
                prefactor_y * *(b + 87 * OS1_S1 + 85) -
                p_over_q * *(b + 126 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 85) +
                one_over_two_q * *(b + 87 * OS1_S1 + 56);
            *(b + 87 * OS1_S1 + 124) = prefactor_z * *(b + 87 * OS1_S1 + 85) -
                                       p_over_q * *(b + 127 * OS1_S1 + 85);
            *(b + 87 * OS1_S1 + 125) = prefactor_z * *(b + 87 * OS1_S1 + 86) -
                                       p_over_q * *(b + 127 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 56);
            *(b + 87 * OS1_S1 + 126) =
                prefactor_y * *(b + 87 * OS1_S1 + 87) -
                p_over_q * *(b + 126 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 57);
            *(b + 87 * OS1_S1 + 127) = prefactor_z * *(b + 87 * OS1_S1 + 87) -
                                       p_over_q * *(b + 127 * OS1_S1 + 87);
            *(b + 87 * OS1_S1 + 128) =
                prefactor_y * *(b + 87 * OS1_S1 + 89) -
                p_over_q * *(b + 126 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 89);
            *(b + 87 * OS1_S1 + 129) =
                prefactor_z * *(b + 87 * OS1_S1 + 89) -
                p_over_q * *(b + 127 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 58);
            *(b + 87 * OS1_S1 + 130) =
                prefactor_y * *(b + 87 * OS1_S1 + 90) -
                p_over_q * *(b + 126 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 59);
            *(b + 87 * OS1_S1 + 131) = prefactor_z * *(b + 87 * OS1_S1 + 90) -
                                       p_over_q * *(b + 127 * OS1_S1 + 90);
            *(b + 87 * OS1_S1 + 132) = prefactor_z * *(b + 87 * OS1_S1 + 91) -
                                       p_over_q * *(b + 127 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 59);
            *(b + 87 * OS1_S1 + 133) =
                prefactor_y * *(b + 87 * OS1_S1 + 93) -
                p_over_q * *(b + 126 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 93);
            *(b + 87 * OS1_S1 + 134) =
                prefactor_z * *(b + 87 * OS1_S1 + 93) -
                p_over_q * *(b + 127 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 61);
            *(b + 87 * OS1_S1 + 135) =
                prefactor_x * *(b + 87 * OS1_S1 + 99) -
                p_over_q * *(b + 123 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 71);
            *(b + 87 * OS1_S1 + 136) = prefactor_z * *(b + 87 * OS1_S1 + 94) -
                                       p_over_q * *(b + 127 * OS1_S1 + 94);
            *(b + 87 * OS1_S1 + 137) = prefactor_z * *(b + 87 * OS1_S1 + 95) -
                                       p_over_q * *(b + 127 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 62);
            *(b + 87 * OS1_S1 + 138) =
                prefactor_y * *(b + 87 * OS1_S1 + 97) -
                p_over_q * *(b + 126 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 97) +
                one_over_two_q * *(b + 87 * OS1_S1 + 65);
            *(b + 87 * OS1_S1 + 139) =
                prefactor_y * *(b + 87 * OS1_S1 + 98) -
                p_over_q * *(b + 126 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 98);
            *(b + 87 * OS1_S1 + 140) =
                prefactor_x * *(b + 87 * OS1_S1 + 104) -
                p_over_q * *(b + 123 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 76);
            *(b + 87 * OS1_S1 + 141) =
                prefactor_x * *(b + 87 * OS1_S1 + 105) -
                p_over_q * *(b + 123 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 105) +
                one_over_two_q * *(b + 87 * OS1_S1 + 77);
            *(b + 87 * OS1_S1 + 142) = prefactor_z * *(b + 87 * OS1_S1 + 99) -
                                       p_over_q * *(b + 127 * OS1_S1 + 99);
            *(b + 87 * OS1_S1 + 143) = prefactor_z * *(b + 87 * OS1_S1 + 100) -
                                       p_over_q * *(b + 127 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 66);
            *(b + 87 * OS1_S1 + 144) =
                prefactor_x * *(b + 87 * OS1_S1 + 108) -
                p_over_q * *(b + 123 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 108) +
                one_over_two_q * *(b + 87 * OS1_S1 + 80);
            *(b + 87 * OS1_S1 + 145) =
                prefactor_y * *(b + 87 * OS1_S1 + 103) -
                p_over_q * *(b + 126 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 103) +
                one_over_two_q * *(b + 87 * OS1_S1 + 70);
            *(b + 87 * OS1_S1 + 146) =
                prefactor_y * *(b + 87 * OS1_S1 + 104) -
                p_over_q * *(b + 126 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 104);
            *(b + 87 * OS1_S1 + 147) =
                prefactor_x * *(b + 87 * OS1_S1 + 111) -
                p_over_q * *(b + 123 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 111) +
                one_over_two_q * *(b + 87 * OS1_S1 + 83);
            *(b + 87 * OS1_S1 + 148) =
                prefactor_x * *(b + 87 * OS1_S1 + 112) -
                p_over_q * *(b + 123 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 112);
            *(b + 87 * OS1_S1 + 149) = prefactor_z * *(b + 87 * OS1_S1 + 105) -
                                       p_over_q * *(b + 127 * OS1_S1 + 105);
            *(b + 87 * OS1_S1 + 150) =
                prefactor_x * *(b + 87 * OS1_S1 + 114) -
                p_over_q * *(b + 123 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 114);
            *(b + 87 * OS1_S1 + 151) =
                prefactor_x * *(b + 87 * OS1_S1 + 115) -
                p_over_q * *(b + 123 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 115);
            *(b + 87 * OS1_S1 + 152) =
                prefactor_x * *(b + 87 * OS1_S1 + 116) -
                p_over_q * *(b + 123 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 116);
            *(b + 87 * OS1_S1 + 153) =
                prefactor_x * *(b + 87 * OS1_S1 + 117) -
                p_over_q * *(b + 123 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 117);
            *(b + 87 * OS1_S1 + 154) =
                prefactor_y * *(b + 87 * OS1_S1 + 111) -
                p_over_q * *(b + 126 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 111);
            *(b + 87 * OS1_S1 + 155) =
                prefactor_x * *(b + 87 * OS1_S1 + 119) -
                p_over_q * *(b + 123 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 59 * OS1_S1 + 119);
            *(b + 87 * OS1_S1 + 156) =
                prefactor_y * *(b + 87 * OS1_S1 + 112) -
                p_over_q * *(b + 126 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 87 * OS1_S1 + 77);
            *(b + 87 * OS1_S1 + 157) = prefactor_z * *(b + 87 * OS1_S1 + 112) -
                                       p_over_q * *(b + 127 * OS1_S1 + 112);
            *(b + 87 * OS1_S1 + 158) = prefactor_z * *(b + 87 * OS1_S1 + 113) -
                                       p_over_q * *(b + 127 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 87 * OS1_S1 + 77);
            *(b + 87 * OS1_S1 + 159) =
                prefactor_z * *(b + 87 * OS1_S1 + 114) -
                p_over_q * *(b + 127 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 78);
            *(b + 87 * OS1_S1 + 160) =
                prefactor_z * *(b + 87 * OS1_S1 + 115) -
                p_over_q * *(b + 127 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 87 * OS1_S1 + 79);
            *(b + 87 * OS1_S1 + 161) =
                prefactor_y * *(b + 87 * OS1_S1 + 117) -
                p_over_q * *(b + 126 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 87 * OS1_S1 + 82);
            *(b + 87 * OS1_S1 + 162) =
                prefactor_y * *(b + 87 * OS1_S1 + 118) -
                p_over_q * *(b + 126 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 118) +
                one_over_two_q * *(b + 87 * OS1_S1 + 83);
            *(b + 87 * OS1_S1 + 163) =
                prefactor_y * *(b + 87 * OS1_S1 + 119) -
                p_over_q * *(b + 126 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 57 * OS1_S1 + 119);
            *(b + 87 * OS1_S1 + 164) =
                prefactor_z * *(b + 87 * OS1_S1 + 119) -
                p_over_q * *(b + 127 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 87 * OS1_S1 + 83);
            *(b + 88 * OS1_S1 + 120) =
                prefactor_x * *(b + 88 * OS1_S1 + 84) -
                p_over_q * *(b + 124 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 88 * OS1_S1 + 56);
            *(b + 88 * OS1_S1 + 121) = prefactor_y * *(b + 88 * OS1_S1 + 84) -
                                       p_over_q * *(b + 127 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 84);
            *(b + 88 * OS1_S1 + 122) = prefactor_z * *(b + 88 * OS1_S1 + 84) -
                                       p_over_q * *(b + 128 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 84);
            *(b + 88 * OS1_S1 + 123) =
                prefactor_y * *(b + 88 * OS1_S1 + 85) -
                p_over_q * *(b + 127 * OS1_S1 + 85) +
                one_over_two_q * *(b + 58 * OS1_S1 + 85) +
                one_over_two_q * *(b + 88 * OS1_S1 + 56);
            *(b + 88 * OS1_S1 + 124) = prefactor_z * *(b + 88 * OS1_S1 + 85) -
                                       p_over_q * *(b + 128 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 85);
            *(b + 88 * OS1_S1 + 125) =
                prefactor_z * *(b + 88 * OS1_S1 + 86) -
                p_over_q * *(b + 128 * OS1_S1 + 86) +
                one_over_two_q * *(b + 57 * OS1_S1 + 86) +
                one_over_two_q * *(b + 88 * OS1_S1 + 56);
            *(b + 88 * OS1_S1 + 126) =
                prefactor_y * *(b + 88 * OS1_S1 + 87) -
                p_over_q * *(b + 127 * OS1_S1 + 87) +
                one_over_two_q * *(b + 58 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 57);
            *(b + 88 * OS1_S1 + 127) = prefactor_z * *(b + 88 * OS1_S1 + 87) -
                                       p_over_q * *(b + 128 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 87);
            *(b + 88 * OS1_S1 + 128) = prefactor_y * *(b + 88 * OS1_S1 + 89) -
                                       p_over_q * *(b + 127 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 89);
            *(b + 88 * OS1_S1 + 129) =
                prefactor_z * *(b + 88 * OS1_S1 + 89) -
                p_over_q * *(b + 128 * OS1_S1 + 89) +
                one_over_two_q * *(b + 57 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 58);
            *(b + 88 * OS1_S1 + 130) =
                prefactor_y * *(b + 88 * OS1_S1 + 90) -
                p_over_q * *(b + 127 * OS1_S1 + 90) +
                one_over_two_q * *(b + 58 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 88 * OS1_S1 + 59);
            *(b + 88 * OS1_S1 + 131) = prefactor_z * *(b + 88 * OS1_S1 + 90) -
                                       p_over_q * *(b + 128 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 90);
            *(b + 88 * OS1_S1 + 132) =
                prefactor_z * *(b + 88 * OS1_S1 + 91) -
                p_over_q * *(b + 128 * OS1_S1 + 91) +
                one_over_two_q * *(b + 57 * OS1_S1 + 91) +
                one_over_two_q * *(b + 88 * OS1_S1 + 59);
            *(b + 88 * OS1_S1 + 133) = prefactor_y * *(b + 88 * OS1_S1 + 93) -
                                       p_over_q * *(b + 127 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 93);
            *(b + 88 * OS1_S1 + 134) =
                prefactor_z * *(b + 88 * OS1_S1 + 93) -
                p_over_q * *(b + 128 * OS1_S1 + 93) +
                one_over_two_q * *(b + 57 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 88 * OS1_S1 + 61);
            *(b + 88 * OS1_S1 + 135) =
                prefactor_x * *(b + 88 * OS1_S1 + 99) -
                p_over_q * *(b + 124 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 71);
            *(b + 88 * OS1_S1 + 136) = prefactor_z * *(b + 88 * OS1_S1 + 94) -
                                       p_over_q * *(b + 128 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 94);
            *(b + 88 * OS1_S1 + 137) =
                prefactor_z * *(b + 88 * OS1_S1 + 95) -
                p_over_q * *(b + 128 * OS1_S1 + 95) +
                one_over_two_q * *(b + 57 * OS1_S1 + 95) +
                one_over_two_q * *(b + 88 * OS1_S1 + 62);
            *(b + 88 * OS1_S1 + 138) =
                prefactor_y * *(b + 88 * OS1_S1 + 97) -
                p_over_q * *(b + 127 * OS1_S1 + 97) +
                one_over_two_q * *(b + 58 * OS1_S1 + 97) +
                one_over_two_q * *(b + 88 * OS1_S1 + 65);
            *(b + 88 * OS1_S1 + 139) = prefactor_y * *(b + 88 * OS1_S1 + 98) -
                                       p_over_q * *(b + 127 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 58 * OS1_S1 + 98);
            *(b + 88 * OS1_S1 + 140) =
                prefactor_x * *(b + 88 * OS1_S1 + 104) -
                p_over_q * *(b + 124 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 76);
            *(b + 88 * OS1_S1 + 141) =
                prefactor_x * *(b + 88 * OS1_S1 + 105) -
                p_over_q * *(b + 124 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 105) +
                one_over_two_q * *(b + 88 * OS1_S1 + 77);
            *(b + 88 * OS1_S1 + 142) = prefactor_z * *(b + 88 * OS1_S1 + 99) -
                                       p_over_q * *(b + 128 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 57 * OS1_S1 + 99);
            *(b + 88 * OS1_S1 + 143) =
                prefactor_z * *(b + 88 * OS1_S1 + 100) -
                p_over_q * *(b + 128 * OS1_S1 + 100) +
                one_over_two_q * *(b + 57 * OS1_S1 + 100) +
                one_over_two_q * *(b + 88 * OS1_S1 + 66);
            *(b + 88 * OS1_S1 + 144) =
                prefactor_x * *(b + 88 * OS1_S1 + 108) -
                p_over_q * *(b + 124 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 108) +
                one_over_two_q * *(b + 88 * OS1_S1 + 80);
            *(b + 88 * OS1_S1 + 145) =
                prefactor_y * *(b + 88 * OS1_S1 + 103) -
                p_over_q * *(b + 127 * OS1_S1 + 103) +
                one_over_two_q * *(b + 58 * OS1_S1 + 103) +
                one_over_two_q * *(b + 88 * OS1_S1 + 70);
            *(b + 88 * OS1_S1 + 146) =
                prefactor_y * *(b + 88 * OS1_S1 + 104) -
                p_over_q * *(b + 127 * OS1_S1 + 104) +
                one_over_two_q * *(b + 58 * OS1_S1 + 104);
            *(b + 88 * OS1_S1 + 147) =
                prefactor_x * *(b + 88 * OS1_S1 + 111) -
                p_over_q * *(b + 124 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 111) +
                one_over_two_q * *(b + 88 * OS1_S1 + 83);
            *(b + 88 * OS1_S1 + 148) =
                prefactor_x * *(b + 88 * OS1_S1 + 112) -
                p_over_q * *(b + 124 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 112);
            *(b + 88 * OS1_S1 + 149) =
                prefactor_z * *(b + 88 * OS1_S1 + 105) -
                p_over_q * *(b + 128 * OS1_S1 + 105) +
                one_over_two_q * *(b + 57 * OS1_S1 + 105);
            *(b + 88 * OS1_S1 + 150) =
                prefactor_x * *(b + 88 * OS1_S1 + 114) -
                p_over_q * *(b + 124 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 114);
            *(b + 88 * OS1_S1 + 151) =
                prefactor_x * *(b + 88 * OS1_S1 + 115) -
                p_over_q * *(b + 124 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 115);
            *(b + 88 * OS1_S1 + 152) =
                prefactor_x * *(b + 88 * OS1_S1 + 116) -
                p_over_q * *(b + 124 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 116);
            *(b + 88 * OS1_S1 + 153) =
                prefactor_x * *(b + 88 * OS1_S1 + 117) -
                p_over_q * *(b + 124 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 117);
            *(b + 88 * OS1_S1 + 154) =
                prefactor_y * *(b + 88 * OS1_S1 + 111) -
                p_over_q * *(b + 127 * OS1_S1 + 111) +
                one_over_two_q * *(b + 58 * OS1_S1 + 111);
            *(b + 88 * OS1_S1 + 155) =
                prefactor_x * *(b + 88 * OS1_S1 + 119) -
                p_over_q * *(b + 124 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 60 * OS1_S1 + 119);
            *(b + 88 * OS1_S1 + 156) =
                prefactor_y * *(b + 88 * OS1_S1 + 112) -
                p_over_q * *(b + 127 * OS1_S1 + 112) +
                one_over_two_q * *(b + 58 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 88 * OS1_S1 + 77);
            *(b + 88 * OS1_S1 + 157) =
                prefactor_z * *(b + 88 * OS1_S1 + 112) -
                p_over_q * *(b + 128 * OS1_S1 + 112) +
                one_over_two_q * *(b + 57 * OS1_S1 + 112);
            *(b + 88 * OS1_S1 + 158) =
                prefactor_z * *(b + 88 * OS1_S1 + 113) -
                p_over_q * *(b + 128 * OS1_S1 + 113) +
                one_over_two_q * *(b + 57 * OS1_S1 + 113) +
                one_over_two_q * *(b + 88 * OS1_S1 + 77);
            *(b + 88 * OS1_S1 + 159) =
                prefactor_z * *(b + 88 * OS1_S1 + 114) -
                p_over_q * *(b + 128 * OS1_S1 + 114) +
                one_over_two_q * *(b + 57 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 78);
            *(b + 88 * OS1_S1 + 160) =
                prefactor_z * *(b + 88 * OS1_S1 + 115) -
                p_over_q * *(b + 128 * OS1_S1 + 115) +
                one_over_two_q * *(b + 57 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 88 * OS1_S1 + 79);
            *(b + 88 * OS1_S1 + 161) =
                prefactor_y * *(b + 88 * OS1_S1 + 117) -
                p_over_q * *(b + 127 * OS1_S1 + 117) +
                one_over_two_q * *(b + 58 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 88 * OS1_S1 + 82);
            *(b + 88 * OS1_S1 + 162) =
                prefactor_y * *(b + 88 * OS1_S1 + 118) -
                p_over_q * *(b + 127 * OS1_S1 + 118) +
                one_over_two_q * *(b + 58 * OS1_S1 + 118) +
                one_over_two_q * *(b + 88 * OS1_S1 + 83);
            *(b + 88 * OS1_S1 + 163) =
                prefactor_y * *(b + 88 * OS1_S1 + 119) -
                p_over_q * *(b + 127 * OS1_S1 + 119) +
                one_over_two_q * *(b + 58 * OS1_S1 + 119);
            *(b + 88 * OS1_S1 + 164) =
                prefactor_z * *(b + 88 * OS1_S1 + 119) -
                p_over_q * *(b + 128 * OS1_S1 + 119) +
                one_over_two_q * *(b + 57 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 88 * OS1_S1 + 83);
            *(b + 89 * OS1_S1 + 120) =
                prefactor_x * *(b + 89 * OS1_S1 + 84) -
                p_over_q * *(b + 125 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 89 * OS1_S1 + 56);
            *(b + 89 * OS1_S1 + 121) = prefactor_y * *(b + 89 * OS1_S1 + 84) -
                                       p_over_q * *(b + 128 * OS1_S1 + 84);
            *(b + 89 * OS1_S1 + 122) =
                prefactor_z * *(b + 89 * OS1_S1 + 84) -
                p_over_q * *(b + 129 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 84);
            *(b + 89 * OS1_S1 + 123) = prefactor_y * *(b + 89 * OS1_S1 + 85) -
                                       p_over_q * *(b + 128 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 56);
            *(b + 89 * OS1_S1 + 124) = prefactor_y * *(b + 89 * OS1_S1 + 86) -
                                       p_over_q * *(b + 128 * OS1_S1 + 86);
            *(b + 89 * OS1_S1 + 125) =
                prefactor_z * *(b + 89 * OS1_S1 + 86) -
                p_over_q * *(b + 129 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 86) +
                one_over_two_q * *(b + 89 * OS1_S1 + 56);
            *(b + 89 * OS1_S1 + 126) =
                prefactor_y * *(b + 89 * OS1_S1 + 87) -
                p_over_q * *(b + 128 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 57);
            *(b + 89 * OS1_S1 + 127) =
                prefactor_z * *(b + 89 * OS1_S1 + 87) -
                p_over_q * *(b + 129 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 87);
            *(b + 89 * OS1_S1 + 128) = prefactor_y * *(b + 89 * OS1_S1 + 89) -
                                       p_over_q * *(b + 128 * OS1_S1 + 89);
            *(b + 89 * OS1_S1 + 129) =
                prefactor_z * *(b + 89 * OS1_S1 + 89) -
                p_over_q * *(b + 129 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 58);
            *(b + 89 * OS1_S1 + 130) =
                prefactor_y * *(b + 89 * OS1_S1 + 90) -
                p_over_q * *(b + 128 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 59);
            *(b + 89 * OS1_S1 + 131) =
                prefactor_z * *(b + 89 * OS1_S1 + 90) -
                p_over_q * *(b + 129 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 90);
            *(b + 89 * OS1_S1 + 132) = prefactor_y * *(b + 89 * OS1_S1 + 92) -
                                       p_over_q * *(b + 128 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 61);
            *(b + 89 * OS1_S1 + 133) = prefactor_y * *(b + 89 * OS1_S1 + 93) -
                                       p_over_q * *(b + 128 * OS1_S1 + 93);
            *(b + 89 * OS1_S1 + 134) =
                prefactor_z * *(b + 89 * OS1_S1 + 93) -
                p_over_q * *(b + 129 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 61);
            *(b + 89 * OS1_S1 + 135) =
                prefactor_x * *(b + 89 * OS1_S1 + 99) -
                p_over_q * *(b + 125 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 71);
            *(b + 89 * OS1_S1 + 136) =
                prefactor_z * *(b + 89 * OS1_S1 + 94) -
                p_over_q * *(b + 129 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 94);
            *(b + 89 * OS1_S1 + 137) =
                prefactor_z * *(b + 89 * OS1_S1 + 95) -
                p_over_q * *(b + 129 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 95) +
                one_over_two_q * *(b + 89 * OS1_S1 + 62);
            *(b + 89 * OS1_S1 + 138) = prefactor_y * *(b + 89 * OS1_S1 + 97) -
                                       p_over_q * *(b + 128 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 65);
            *(b + 89 * OS1_S1 + 139) = prefactor_y * *(b + 89 * OS1_S1 + 98) -
                                       p_over_q * *(b + 128 * OS1_S1 + 98);
            *(b + 89 * OS1_S1 + 140) =
                prefactor_x * *(b + 89 * OS1_S1 + 104) -
                p_over_q * *(b + 125 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 76);
            *(b + 89 * OS1_S1 + 141) =
                prefactor_x * *(b + 89 * OS1_S1 + 105) -
                p_over_q * *(b + 125 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 105) +
                one_over_two_q * *(b + 89 * OS1_S1 + 77);
            *(b + 89 * OS1_S1 + 142) =
                prefactor_z * *(b + 89 * OS1_S1 + 99) -
                p_over_q * *(b + 129 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 99);
            *(b + 89 * OS1_S1 + 143) =
                prefactor_z * *(b + 89 * OS1_S1 + 100) -
                p_over_q * *(b + 129 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 100) +
                one_over_two_q * *(b + 89 * OS1_S1 + 66);
            *(b + 89 * OS1_S1 + 144) =
                prefactor_x * *(b + 89 * OS1_S1 + 108) -
                p_over_q * *(b + 125 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 108) +
                one_over_two_q * *(b + 89 * OS1_S1 + 80);
            *(b + 89 * OS1_S1 + 145) = prefactor_y * *(b + 89 * OS1_S1 + 103) -
                                       p_over_q * *(b + 128 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 70);
            *(b + 89 * OS1_S1 + 146) = prefactor_y * *(b + 89 * OS1_S1 + 104) -
                                       p_over_q * *(b + 128 * OS1_S1 + 104);
            *(b + 89 * OS1_S1 + 147) =
                prefactor_x * *(b + 89 * OS1_S1 + 111) -
                p_over_q * *(b + 125 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 111) +
                one_over_two_q * *(b + 89 * OS1_S1 + 83);
            *(b + 89 * OS1_S1 + 148) =
                prefactor_x * *(b + 89 * OS1_S1 + 112) -
                p_over_q * *(b + 125 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 112);
            *(b + 89 * OS1_S1 + 149) =
                prefactor_z * *(b + 89 * OS1_S1 + 105) -
                p_over_q * *(b + 129 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 105);
            *(b + 89 * OS1_S1 + 150) =
                prefactor_x * *(b + 89 * OS1_S1 + 114) -
                p_over_q * *(b + 125 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 114);
            *(b + 89 * OS1_S1 + 151) =
                prefactor_x * *(b + 89 * OS1_S1 + 115) -
                p_over_q * *(b + 125 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 115);
            *(b + 89 * OS1_S1 + 152) =
                prefactor_x * *(b + 89 * OS1_S1 + 116) -
                p_over_q * *(b + 125 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 116);
            *(b + 89 * OS1_S1 + 153) =
                prefactor_x * *(b + 89 * OS1_S1 + 117) -
                p_over_q * *(b + 125 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 117);
            *(b + 89 * OS1_S1 + 154) = prefactor_y * *(b + 89 * OS1_S1 + 111) -
                                       p_over_q * *(b + 128 * OS1_S1 + 111);
            *(b + 89 * OS1_S1 + 155) =
                prefactor_x * *(b + 89 * OS1_S1 + 119) -
                p_over_q * *(b + 125 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 61 * OS1_S1 + 119);
            *(b + 89 * OS1_S1 + 156) =
                prefactor_y * *(b + 89 * OS1_S1 + 112) -
                p_over_q * *(b + 128 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 89 * OS1_S1 + 77);
            *(b + 89 * OS1_S1 + 157) =
                prefactor_z * *(b + 89 * OS1_S1 + 112) -
                p_over_q * *(b + 129 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 112);
            *(b + 89 * OS1_S1 + 158) =
                prefactor_z * *(b + 89 * OS1_S1 + 113) -
                p_over_q * *(b + 129 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 113) +
                one_over_two_q * *(b + 89 * OS1_S1 + 77);
            *(b + 89 * OS1_S1 + 159) =
                prefactor_z * *(b + 89 * OS1_S1 + 114) -
                p_over_q * *(b + 129 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 78);
            *(b + 89 * OS1_S1 + 160) =
                prefactor_y * *(b + 89 * OS1_S1 + 116) -
                p_over_q * *(b + 128 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 89 * OS1_S1 + 81);
            *(b + 89 * OS1_S1 + 161) =
                prefactor_y * *(b + 89 * OS1_S1 + 117) -
                p_over_q * *(b + 128 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 89 * OS1_S1 + 82);
            *(b + 89 * OS1_S1 + 162) = prefactor_y * *(b + 89 * OS1_S1 + 118) -
                                       p_over_q * *(b + 128 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 89 * OS1_S1 + 83);
            *(b + 89 * OS1_S1 + 163) = prefactor_y * *(b + 89 * OS1_S1 + 119) -
                                       p_over_q * *(b + 128 * OS1_S1 + 119);
            *(b + 89 * OS1_S1 + 164) =
                prefactor_z * *(b + 89 * OS1_S1 + 119) -
                p_over_q * *(b + 129 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 58 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 89 * OS1_S1 + 83);
            *(b + 90 * OS1_S1 + 120) =
                prefactor_x * *(b + 90 * OS1_S1 + 84) -
                p_over_q * *(b + 126 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 90 * OS1_S1 + 56);
            *(b + 90 * OS1_S1 + 121) =
                prefactor_y * *(b + 90 * OS1_S1 + 84) -
                p_over_q * *(b + 130 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 84);
            *(b + 90 * OS1_S1 + 122) = prefactor_z * *(b + 90 * OS1_S1 + 84) -
                                       p_over_q * *(b + 131 * OS1_S1 + 84);
            *(b + 90 * OS1_S1 + 123) =
                prefactor_y * *(b + 90 * OS1_S1 + 85) -
                p_over_q * *(b + 130 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 85) +
                one_over_two_q * *(b + 90 * OS1_S1 + 56);
            *(b + 90 * OS1_S1 + 124) = prefactor_z * *(b + 90 * OS1_S1 + 85) -
                                       p_over_q * *(b + 131 * OS1_S1 + 85);
            *(b + 90 * OS1_S1 + 125) = prefactor_z * *(b + 90 * OS1_S1 + 86) -
                                       p_over_q * *(b + 131 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 56);
            *(b + 90 * OS1_S1 + 126) =
                prefactor_y * *(b + 90 * OS1_S1 + 87) -
                p_over_q * *(b + 130 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 57);
            *(b + 90 * OS1_S1 + 127) = prefactor_z * *(b + 90 * OS1_S1 + 87) -
                                       p_over_q * *(b + 131 * OS1_S1 + 87);
            *(b + 90 * OS1_S1 + 128) =
                prefactor_y * *(b + 90 * OS1_S1 + 89) -
                p_over_q * *(b + 130 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 89);
            *(b + 90 * OS1_S1 + 129) =
                prefactor_z * *(b + 90 * OS1_S1 + 89) -
                p_over_q * *(b + 131 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 58);
            *(b + 90 * OS1_S1 + 130) =
                prefactor_y * *(b + 90 * OS1_S1 + 90) -
                p_over_q * *(b + 130 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 90 * OS1_S1 + 59);
            *(b + 90 * OS1_S1 + 131) = prefactor_z * *(b + 90 * OS1_S1 + 90) -
                                       p_over_q * *(b + 131 * OS1_S1 + 90);
            *(b + 90 * OS1_S1 + 132) = prefactor_z * *(b + 90 * OS1_S1 + 91) -
                                       p_over_q * *(b + 131 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 59);
            *(b + 90 * OS1_S1 + 133) =
                prefactor_y * *(b + 90 * OS1_S1 + 93) -
                p_over_q * *(b + 130 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 93);
            *(b + 90 * OS1_S1 + 134) =
                prefactor_z * *(b + 90 * OS1_S1 + 93) -
                p_over_q * *(b + 131 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 90 * OS1_S1 + 61);
            *(b + 90 * OS1_S1 + 135) =
                prefactor_x * *(b + 90 * OS1_S1 + 99) -
                p_over_q * *(b + 126 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 71);
            *(b + 90 * OS1_S1 + 136) = prefactor_z * *(b + 90 * OS1_S1 + 94) -
                                       p_over_q * *(b + 131 * OS1_S1 + 94);
            *(b + 90 * OS1_S1 + 137) = prefactor_z * *(b + 90 * OS1_S1 + 95) -
                                       p_over_q * *(b + 131 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 62);
            *(b + 90 * OS1_S1 + 138) =
                prefactor_y * *(b + 90 * OS1_S1 + 97) -
                p_over_q * *(b + 130 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 97) +
                one_over_two_q * *(b + 90 * OS1_S1 + 65);
            *(b + 90 * OS1_S1 + 139) =
                prefactor_y * *(b + 90 * OS1_S1 + 98) -
                p_over_q * *(b + 130 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 98);
            *(b + 90 * OS1_S1 + 140) =
                prefactor_x * *(b + 90 * OS1_S1 + 104) -
                p_over_q * *(b + 126 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 76);
            *(b + 90 * OS1_S1 + 141) =
                prefactor_x * *(b + 90 * OS1_S1 + 105) -
                p_over_q * *(b + 126 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 105) +
                one_over_two_q * *(b + 90 * OS1_S1 + 77);
            *(b + 90 * OS1_S1 + 142) = prefactor_z * *(b + 90 * OS1_S1 + 99) -
                                       p_over_q * *(b + 131 * OS1_S1 + 99);
            *(b + 90 * OS1_S1 + 143) = prefactor_z * *(b + 90 * OS1_S1 + 100) -
                                       p_over_q * *(b + 131 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 66);
            *(b + 90 * OS1_S1 + 144) =
                prefactor_x * *(b + 90 * OS1_S1 + 108) -
                p_over_q * *(b + 126 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 108) +
                one_over_two_q * *(b + 90 * OS1_S1 + 80);
            *(b + 90 * OS1_S1 + 145) =
                prefactor_y * *(b + 90 * OS1_S1 + 103) -
                p_over_q * *(b + 130 * OS1_S1 + 103) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 103) +
                one_over_two_q * *(b + 90 * OS1_S1 + 70);
            *(b + 90 * OS1_S1 + 146) =
                prefactor_y * *(b + 90 * OS1_S1 + 104) -
                p_over_q * *(b + 130 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 104);
            *(b + 90 * OS1_S1 + 147) =
                prefactor_x * *(b + 90 * OS1_S1 + 111) -
                p_over_q * *(b + 126 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 111) +
                one_over_two_q * *(b + 90 * OS1_S1 + 83);
            *(b + 90 * OS1_S1 + 148) =
                prefactor_x * *(b + 90 * OS1_S1 + 112) -
                p_over_q * *(b + 126 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 112);
            *(b + 90 * OS1_S1 + 149) = prefactor_z * *(b + 90 * OS1_S1 + 105) -
                                       p_over_q * *(b + 131 * OS1_S1 + 105);
            *(b + 90 * OS1_S1 + 150) =
                prefactor_x * *(b + 90 * OS1_S1 + 114) -
                p_over_q * *(b + 126 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 114);
            *(b + 90 * OS1_S1 + 151) =
                prefactor_x * *(b + 90 * OS1_S1 + 115) -
                p_over_q * *(b + 126 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 115);
            *(b + 90 * OS1_S1 + 152) =
                prefactor_x * *(b + 90 * OS1_S1 + 116) -
                p_over_q * *(b + 126 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 116);
            *(b + 90 * OS1_S1 + 153) =
                prefactor_x * *(b + 90 * OS1_S1 + 117) -
                p_over_q * *(b + 126 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 117);
            *(b + 90 * OS1_S1 + 154) =
                prefactor_y * *(b + 90 * OS1_S1 + 111) -
                p_over_q * *(b + 130 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 111);
            *(b + 90 * OS1_S1 + 155) =
                prefactor_x * *(b + 90 * OS1_S1 + 119) -
                p_over_q * *(b + 126 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 119);
            *(b + 90 * OS1_S1 + 156) =
                prefactor_y * *(b + 90 * OS1_S1 + 112) -
                p_over_q * *(b + 130 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 90 * OS1_S1 + 77);
            *(b + 90 * OS1_S1 + 157) = prefactor_z * *(b + 90 * OS1_S1 + 112) -
                                       p_over_q * *(b + 131 * OS1_S1 + 112);
            *(b + 90 * OS1_S1 + 158) = prefactor_z * *(b + 90 * OS1_S1 + 113) -
                                       p_over_q * *(b + 131 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 90 * OS1_S1 + 77);
            *(b + 90 * OS1_S1 + 159) =
                prefactor_z * *(b + 90 * OS1_S1 + 114) -
                p_over_q * *(b + 131 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 78);
            *(b + 90 * OS1_S1 + 160) =
                prefactor_z * *(b + 90 * OS1_S1 + 115) -
                p_over_q * *(b + 131 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 90 * OS1_S1 + 79);
            *(b + 90 * OS1_S1 + 161) =
                prefactor_y * *(b + 90 * OS1_S1 + 117) -
                p_over_q * *(b + 130 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 90 * OS1_S1 + 82);
            *(b + 90 * OS1_S1 + 162) =
                prefactor_y * *(b + 90 * OS1_S1 + 118) -
                p_over_q * *(b + 130 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 118) +
                one_over_two_q * *(b + 90 * OS1_S1 + 83);
            *(b + 90 * OS1_S1 + 163) =
                prefactor_y * *(b + 90 * OS1_S1 + 119) -
                p_over_q * *(b + 130 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 59 * OS1_S1 + 119);
            *(b + 90 * OS1_S1 + 164) =
                prefactor_z * *(b + 90 * OS1_S1 + 119) -
                p_over_q * *(b + 131 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 90 * OS1_S1 + 83);
            *(b + 91 * OS1_S1 + 120) =
                prefactor_x * *(b + 91 * OS1_S1 + 84) -
                p_over_q * *(b + 127 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 91 * OS1_S1 + 56);
            *(b + 91 * OS1_S1 + 121) =
                prefactor_y * *(b + 91 * OS1_S1 + 84) -
                p_over_q * *(b + 131 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 84);
            *(b + 91 * OS1_S1 + 122) = prefactor_z * *(b + 91 * OS1_S1 + 84) -
                                       p_over_q * *(b + 132 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 84);
            *(b + 91 * OS1_S1 + 123) =
                prefactor_y * *(b + 91 * OS1_S1 + 85) -
                p_over_q * *(b + 131 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 85) +
                one_over_two_q * *(b + 91 * OS1_S1 + 56);
            *(b + 91 * OS1_S1 + 124) = prefactor_z * *(b + 91 * OS1_S1 + 85) -
                                       p_over_q * *(b + 132 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 85);
            *(b + 91 * OS1_S1 + 125) =
                prefactor_z * *(b + 91 * OS1_S1 + 86) -
                p_over_q * *(b + 132 * OS1_S1 + 86) +
                one_over_two_q * *(b + 59 * OS1_S1 + 86) +
                one_over_two_q * *(b + 91 * OS1_S1 + 56);
            *(b + 91 * OS1_S1 + 126) =
                prefactor_y * *(b + 91 * OS1_S1 + 87) -
                p_over_q * *(b + 131 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 57);
            *(b + 91 * OS1_S1 + 127) = prefactor_z * *(b + 91 * OS1_S1 + 87) -
                                       p_over_q * *(b + 132 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 87);
            *(b + 91 * OS1_S1 + 128) =
                prefactor_y * *(b + 91 * OS1_S1 + 89) -
                p_over_q * *(b + 131 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 89);
            *(b + 91 * OS1_S1 + 129) =
                prefactor_z * *(b + 91 * OS1_S1 + 89) -
                p_over_q * *(b + 132 * OS1_S1 + 89) +
                one_over_two_q * *(b + 59 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 58);
            *(b + 91 * OS1_S1 + 130) =
                prefactor_y * *(b + 91 * OS1_S1 + 90) -
                p_over_q * *(b + 131 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 59);
            *(b + 91 * OS1_S1 + 131) = prefactor_z * *(b + 91 * OS1_S1 + 90) -
                                       p_over_q * *(b + 132 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 90);
            *(b + 91 * OS1_S1 + 132) =
                prefactor_z * *(b + 91 * OS1_S1 + 91) -
                p_over_q * *(b + 132 * OS1_S1 + 91) +
                one_over_two_q * *(b + 59 * OS1_S1 + 91) +
                one_over_two_q * *(b + 91 * OS1_S1 + 59);
            *(b + 91 * OS1_S1 + 133) =
                prefactor_y * *(b + 91 * OS1_S1 + 93) -
                p_over_q * *(b + 131 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 93);
            *(b + 91 * OS1_S1 + 134) =
                prefactor_z * *(b + 91 * OS1_S1 + 93) -
                p_over_q * *(b + 132 * OS1_S1 + 93) +
                one_over_two_q * *(b + 59 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 61);
            *(b + 91 * OS1_S1 + 135) =
                prefactor_x * *(b + 91 * OS1_S1 + 99) -
                p_over_q * *(b + 127 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 71);
            *(b + 91 * OS1_S1 + 136) = prefactor_z * *(b + 91 * OS1_S1 + 94) -
                                       p_over_q * *(b + 132 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 94);
            *(b + 91 * OS1_S1 + 137) =
                prefactor_z * *(b + 91 * OS1_S1 + 95) -
                p_over_q * *(b + 132 * OS1_S1 + 95) +
                one_over_two_q * *(b + 59 * OS1_S1 + 95) +
                one_over_two_q * *(b + 91 * OS1_S1 + 62);
            *(b + 91 * OS1_S1 + 138) =
                prefactor_y * *(b + 91 * OS1_S1 + 97) -
                p_over_q * *(b + 131 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 97) +
                one_over_two_q * *(b + 91 * OS1_S1 + 65);
            *(b + 91 * OS1_S1 + 139) =
                prefactor_y * *(b + 91 * OS1_S1 + 98) -
                p_over_q * *(b + 131 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 98);
            *(b + 91 * OS1_S1 + 140) =
                prefactor_x * *(b + 91 * OS1_S1 + 104) -
                p_over_q * *(b + 127 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 76);
            *(b + 91 * OS1_S1 + 141) =
                prefactor_x * *(b + 91 * OS1_S1 + 105) -
                p_over_q * *(b + 127 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 105) +
                one_over_two_q * *(b + 91 * OS1_S1 + 77);
            *(b + 91 * OS1_S1 + 142) = prefactor_z * *(b + 91 * OS1_S1 + 99) -
                                       p_over_q * *(b + 132 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 59 * OS1_S1 + 99);
            *(b + 91 * OS1_S1 + 143) =
                prefactor_z * *(b + 91 * OS1_S1 + 100) -
                p_over_q * *(b + 132 * OS1_S1 + 100) +
                one_over_two_q * *(b + 59 * OS1_S1 + 100) +
                one_over_two_q * *(b + 91 * OS1_S1 + 66);
            *(b + 91 * OS1_S1 + 144) =
                prefactor_x * *(b + 91 * OS1_S1 + 108) -
                p_over_q * *(b + 127 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 108) +
                one_over_two_q * *(b + 91 * OS1_S1 + 80);
            *(b + 91 * OS1_S1 + 145) =
                prefactor_y * *(b + 91 * OS1_S1 + 103) -
                p_over_q * *(b + 131 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 103) +
                one_over_two_q * *(b + 91 * OS1_S1 + 70);
            *(b + 91 * OS1_S1 + 146) =
                prefactor_y * *(b + 91 * OS1_S1 + 104) -
                p_over_q * *(b + 131 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 104);
            *(b + 91 * OS1_S1 + 147) =
                prefactor_x * *(b + 91 * OS1_S1 + 111) -
                p_over_q * *(b + 127 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 111) +
                one_over_two_q * *(b + 91 * OS1_S1 + 83);
            *(b + 91 * OS1_S1 + 148) =
                prefactor_x * *(b + 91 * OS1_S1 + 112) -
                p_over_q * *(b + 127 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 112);
            *(b + 91 * OS1_S1 + 149) =
                prefactor_z * *(b + 91 * OS1_S1 + 105) -
                p_over_q * *(b + 132 * OS1_S1 + 105) +
                one_over_two_q * *(b + 59 * OS1_S1 + 105);
            *(b + 91 * OS1_S1 + 150) =
                prefactor_x * *(b + 91 * OS1_S1 + 114) -
                p_over_q * *(b + 127 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 114);
            *(b + 91 * OS1_S1 + 151) =
                prefactor_x * *(b + 91 * OS1_S1 + 115) -
                p_over_q * *(b + 127 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 115);
            *(b + 91 * OS1_S1 + 152) =
                prefactor_x * *(b + 91 * OS1_S1 + 116) -
                p_over_q * *(b + 127 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 116);
            *(b + 91 * OS1_S1 + 153) =
                prefactor_x * *(b + 91 * OS1_S1 + 117) -
                p_over_q * *(b + 127 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 117);
            *(b + 91 * OS1_S1 + 154) =
                prefactor_y * *(b + 91 * OS1_S1 + 111) -
                p_over_q * *(b + 131 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 111);
            *(b + 91 * OS1_S1 + 155) =
                prefactor_x * *(b + 91 * OS1_S1 + 119) -
                p_over_q * *(b + 127 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 63 * OS1_S1 + 119);
            *(b + 91 * OS1_S1 + 156) =
                prefactor_y * *(b + 91 * OS1_S1 + 112) -
                p_over_q * *(b + 131 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 91 * OS1_S1 + 77);
            *(b + 91 * OS1_S1 + 157) =
                prefactor_z * *(b + 91 * OS1_S1 + 112) -
                p_over_q * *(b + 132 * OS1_S1 + 112) +
                one_over_two_q * *(b + 59 * OS1_S1 + 112);
            *(b + 91 * OS1_S1 + 158) =
                prefactor_z * *(b + 91 * OS1_S1 + 113) -
                p_over_q * *(b + 132 * OS1_S1 + 113) +
                one_over_two_q * *(b + 59 * OS1_S1 + 113) +
                one_over_two_q * *(b + 91 * OS1_S1 + 77);
            *(b + 91 * OS1_S1 + 159) =
                prefactor_z * *(b + 91 * OS1_S1 + 114) -
                p_over_q * *(b + 132 * OS1_S1 + 114) +
                one_over_two_q * *(b + 59 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 78);
            *(b + 91 * OS1_S1 + 160) =
                prefactor_z * *(b + 91 * OS1_S1 + 115) -
                p_over_q * *(b + 132 * OS1_S1 + 115) +
                one_over_two_q * *(b + 59 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 91 * OS1_S1 + 79);
            *(b + 91 * OS1_S1 + 161) =
                prefactor_y * *(b + 91 * OS1_S1 + 117) -
                p_over_q * *(b + 131 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 91 * OS1_S1 + 82);
            *(b + 91 * OS1_S1 + 162) =
                prefactor_y * *(b + 91 * OS1_S1 + 118) -
                p_over_q * *(b + 131 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 118) +
                one_over_two_q * *(b + 91 * OS1_S1 + 83);
            *(b + 91 * OS1_S1 + 163) =
                prefactor_y * *(b + 91 * OS1_S1 + 119) -
                p_over_q * *(b + 131 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 119);
            *(b + 91 * OS1_S1 + 164) =
                prefactor_z * *(b + 91 * OS1_S1 + 119) -
                p_over_q * *(b + 132 * OS1_S1 + 119) +
                one_over_two_q * *(b + 59 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 91 * OS1_S1 + 83);
            *(b + 92 * OS1_S1 + 120) =
                prefactor_x * *(b + 92 * OS1_S1 + 84) -
                p_over_q * *(b + 128 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 92 * OS1_S1 + 56);
            *(b + 92 * OS1_S1 + 121) = prefactor_y * *(b + 92 * OS1_S1 + 84) -
                                       p_over_q * *(b + 132 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 84);
            *(b + 92 * OS1_S1 + 122) =
                prefactor_z * *(b + 92 * OS1_S1 + 84) -
                p_over_q * *(b + 133 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 84);
            *(b + 92 * OS1_S1 + 123) =
                prefactor_y * *(b + 92 * OS1_S1 + 85) -
                p_over_q * *(b + 132 * OS1_S1 + 85) +
                one_over_two_q * *(b + 61 * OS1_S1 + 85) +
                one_over_two_q * *(b + 92 * OS1_S1 + 56);
            *(b + 92 * OS1_S1 + 124) = prefactor_y * *(b + 92 * OS1_S1 + 86) -
                                       p_over_q * *(b + 132 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 86);
            *(b + 92 * OS1_S1 + 125) =
                prefactor_z * *(b + 92 * OS1_S1 + 86) -
                p_over_q * *(b + 133 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 86) +
                one_over_two_q * *(b + 92 * OS1_S1 + 56);
            *(b + 92 * OS1_S1 + 126) =
                prefactor_y * *(b + 92 * OS1_S1 + 87) -
                p_over_q * *(b + 132 * OS1_S1 + 87) +
                one_over_two_q * *(b + 61 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 57);
            *(b + 92 * OS1_S1 + 127) =
                prefactor_z * *(b + 92 * OS1_S1 + 87) -
                p_over_q * *(b + 133 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 87);
            *(b + 92 * OS1_S1 + 128) = prefactor_y * *(b + 92 * OS1_S1 + 89) -
                                       p_over_q * *(b + 132 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 89);
            *(b + 92 * OS1_S1 + 129) =
                prefactor_z * *(b + 92 * OS1_S1 + 89) -
                p_over_q * *(b + 133 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 58);
            *(b + 92 * OS1_S1 + 130) =
                prefactor_y * *(b + 92 * OS1_S1 + 90) -
                p_over_q * *(b + 132 * OS1_S1 + 90) +
                one_over_two_q * *(b + 61 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 59);
            *(b + 92 * OS1_S1 + 131) =
                prefactor_z * *(b + 92 * OS1_S1 + 90) -
                p_over_q * *(b + 133 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 90);
            *(b + 92 * OS1_S1 + 132) =
                prefactor_y * *(b + 92 * OS1_S1 + 92) -
                p_over_q * *(b + 132 * OS1_S1 + 92) +
                one_over_two_q * *(b + 61 * OS1_S1 + 92) +
                one_over_two_q * *(b + 92 * OS1_S1 + 61);
            *(b + 92 * OS1_S1 + 133) = prefactor_y * *(b + 92 * OS1_S1 + 93) -
                                       p_over_q * *(b + 132 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 93);
            *(b + 92 * OS1_S1 + 134) =
                prefactor_z * *(b + 92 * OS1_S1 + 93) -
                p_over_q * *(b + 133 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 61);
            *(b + 92 * OS1_S1 + 135) =
                prefactor_x * *(b + 92 * OS1_S1 + 99) -
                p_over_q * *(b + 128 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 71);
            *(b + 92 * OS1_S1 + 136) =
                prefactor_z * *(b + 92 * OS1_S1 + 94) -
                p_over_q * *(b + 133 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 94);
            *(b + 92 * OS1_S1 + 137) =
                prefactor_z * *(b + 92 * OS1_S1 + 95) -
                p_over_q * *(b + 133 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 95) +
                one_over_two_q * *(b + 92 * OS1_S1 + 62);
            *(b + 92 * OS1_S1 + 138) =
                prefactor_y * *(b + 92 * OS1_S1 + 97) -
                p_over_q * *(b + 132 * OS1_S1 + 97) +
                one_over_two_q * *(b + 61 * OS1_S1 + 97) +
                one_over_two_q * *(b + 92 * OS1_S1 + 65);
            *(b + 92 * OS1_S1 + 139) = prefactor_y * *(b + 92 * OS1_S1 + 98) -
                                       p_over_q * *(b + 132 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 61 * OS1_S1 + 98);
            *(b + 92 * OS1_S1 + 140) =
                prefactor_x * *(b + 92 * OS1_S1 + 104) -
                p_over_q * *(b + 128 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 76);
            *(b + 92 * OS1_S1 + 141) =
                prefactor_x * *(b + 92 * OS1_S1 + 105) -
                p_over_q * *(b + 128 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 105) +
                one_over_two_q * *(b + 92 * OS1_S1 + 77);
            *(b + 92 * OS1_S1 + 142) =
                prefactor_z * *(b + 92 * OS1_S1 + 99) -
                p_over_q * *(b + 133 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 99);
            *(b + 92 * OS1_S1 + 143) =
                prefactor_z * *(b + 92 * OS1_S1 + 100) -
                p_over_q * *(b + 133 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 100) +
                one_over_two_q * *(b + 92 * OS1_S1 + 66);
            *(b + 92 * OS1_S1 + 144) =
                prefactor_x * *(b + 92 * OS1_S1 + 108) -
                p_over_q * *(b + 128 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 108) +
                one_over_two_q * *(b + 92 * OS1_S1 + 80);
            *(b + 92 * OS1_S1 + 145) =
                prefactor_y * *(b + 92 * OS1_S1 + 103) -
                p_over_q * *(b + 132 * OS1_S1 + 103) +
                one_over_two_q * *(b + 61 * OS1_S1 + 103) +
                one_over_two_q * *(b + 92 * OS1_S1 + 70);
            *(b + 92 * OS1_S1 + 146) =
                prefactor_y * *(b + 92 * OS1_S1 + 104) -
                p_over_q * *(b + 132 * OS1_S1 + 104) +
                one_over_two_q * *(b + 61 * OS1_S1 + 104);
            *(b + 92 * OS1_S1 + 147) =
                prefactor_x * *(b + 92 * OS1_S1 + 111) -
                p_over_q * *(b + 128 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 111) +
                one_over_two_q * *(b + 92 * OS1_S1 + 83);
            *(b + 92 * OS1_S1 + 148) =
                prefactor_x * *(b + 92 * OS1_S1 + 112) -
                p_over_q * *(b + 128 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 112);
            *(b + 92 * OS1_S1 + 149) =
                prefactor_z * *(b + 92 * OS1_S1 + 105) -
                p_over_q * *(b + 133 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 105);
            *(b + 92 * OS1_S1 + 150) =
                prefactor_x * *(b + 92 * OS1_S1 + 114) -
                p_over_q * *(b + 128 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 114);
            *(b + 92 * OS1_S1 + 151) =
                prefactor_x * *(b + 92 * OS1_S1 + 115) -
                p_over_q * *(b + 128 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 115);
            *(b + 92 * OS1_S1 + 152) =
                prefactor_x * *(b + 92 * OS1_S1 + 116) -
                p_over_q * *(b + 128 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 116);
            *(b + 92 * OS1_S1 + 153) =
                prefactor_x * *(b + 92 * OS1_S1 + 117) -
                p_over_q * *(b + 128 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 117);
            *(b + 92 * OS1_S1 + 154) =
                prefactor_y * *(b + 92 * OS1_S1 + 111) -
                p_over_q * *(b + 132 * OS1_S1 + 111) +
                one_over_two_q * *(b + 61 * OS1_S1 + 111);
            *(b + 92 * OS1_S1 + 155) =
                prefactor_x * *(b + 92 * OS1_S1 + 119) -
                p_over_q * *(b + 128 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 64 * OS1_S1 + 119);
            *(b + 92 * OS1_S1 + 156) =
                prefactor_y * *(b + 92 * OS1_S1 + 112) -
                p_over_q * *(b + 132 * OS1_S1 + 112) +
                one_over_two_q * *(b + 61 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 92 * OS1_S1 + 77);
            *(b + 92 * OS1_S1 + 157) =
                prefactor_z * *(b + 92 * OS1_S1 + 112) -
                p_over_q * *(b + 133 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 112);
            *(b + 92 * OS1_S1 + 158) =
                prefactor_z * *(b + 92 * OS1_S1 + 113) -
                p_over_q * *(b + 133 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 113) +
                one_over_two_q * *(b + 92 * OS1_S1 + 77);
            *(b + 92 * OS1_S1 + 159) =
                prefactor_z * *(b + 92 * OS1_S1 + 114) -
                p_over_q * *(b + 133 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 78);
            *(b + 92 * OS1_S1 + 160) =
                prefactor_y * *(b + 92 * OS1_S1 + 116) -
                p_over_q * *(b + 132 * OS1_S1 + 116) +
                one_over_two_q * *(b + 61 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 92 * OS1_S1 + 81);
            *(b + 92 * OS1_S1 + 161) =
                prefactor_y * *(b + 92 * OS1_S1 + 117) -
                p_over_q * *(b + 132 * OS1_S1 + 117) +
                one_over_two_q * *(b + 61 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 92 * OS1_S1 + 82);
            *(b + 92 * OS1_S1 + 162) =
                prefactor_y * *(b + 92 * OS1_S1 + 118) -
                p_over_q * *(b + 132 * OS1_S1 + 118) +
                one_over_two_q * *(b + 61 * OS1_S1 + 118) +
                one_over_two_q * *(b + 92 * OS1_S1 + 83);
            *(b + 92 * OS1_S1 + 163) =
                prefactor_y * *(b + 92 * OS1_S1 + 119) -
                p_over_q * *(b + 132 * OS1_S1 + 119) +
                one_over_two_q * *(b + 61 * OS1_S1 + 119);
            *(b + 92 * OS1_S1 + 164) =
                prefactor_z * *(b + 92 * OS1_S1 + 119) -
                p_over_q * *(b + 133 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 60 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 92 * OS1_S1 + 83);
            *(b + 93 * OS1_S1 + 120) =
                prefactor_x * *(b + 93 * OS1_S1 + 84) -
                p_over_q * *(b + 129 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 93 * OS1_S1 + 56);
            *(b + 93 * OS1_S1 + 121) = prefactor_y * *(b + 93 * OS1_S1 + 84) -
                                       p_over_q * *(b + 133 * OS1_S1 + 84);
            *(b + 93 * OS1_S1 + 122) =
                prefactor_z * *(b + 93 * OS1_S1 + 84) -
                p_over_q * *(b + 134 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 84);
            *(b + 93 * OS1_S1 + 123) = prefactor_y * *(b + 93 * OS1_S1 + 85) -
                                       p_over_q * *(b + 133 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 56);
            *(b + 93 * OS1_S1 + 124) = prefactor_y * *(b + 93 * OS1_S1 + 86) -
                                       p_over_q * *(b + 133 * OS1_S1 + 86);
            *(b + 93 * OS1_S1 + 125) =
                prefactor_z * *(b + 93 * OS1_S1 + 86) -
                p_over_q * *(b + 134 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 86) +
                one_over_two_q * *(b + 93 * OS1_S1 + 56);
            *(b + 93 * OS1_S1 + 126) =
                prefactor_y * *(b + 93 * OS1_S1 + 87) -
                p_over_q * *(b + 133 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 57);
            *(b + 93 * OS1_S1 + 127) =
                prefactor_z * *(b + 93 * OS1_S1 + 87) -
                p_over_q * *(b + 134 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 87);
            *(b + 93 * OS1_S1 + 128) = prefactor_y * *(b + 93 * OS1_S1 + 89) -
                                       p_over_q * *(b + 133 * OS1_S1 + 89);
            *(b + 93 * OS1_S1 + 129) =
                prefactor_z * *(b + 93 * OS1_S1 + 89) -
                p_over_q * *(b + 134 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 58);
            *(b + 93 * OS1_S1 + 130) =
                prefactor_y * *(b + 93 * OS1_S1 + 90) -
                p_over_q * *(b + 133 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 93 * OS1_S1 + 59);
            *(b + 93 * OS1_S1 + 131) =
                prefactor_z * *(b + 93 * OS1_S1 + 90) -
                p_over_q * *(b + 134 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 90);
            *(b + 93 * OS1_S1 + 132) = prefactor_y * *(b + 93 * OS1_S1 + 92) -
                                       p_over_q * *(b + 133 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 61);
            *(b + 93 * OS1_S1 + 133) = prefactor_y * *(b + 93 * OS1_S1 + 93) -
                                       p_over_q * *(b + 133 * OS1_S1 + 93);
            *(b + 93 * OS1_S1 + 134) =
                prefactor_z * *(b + 93 * OS1_S1 + 93) -
                p_over_q * *(b + 134 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 93 * OS1_S1 + 61);
            *(b + 93 * OS1_S1 + 135) =
                prefactor_x * *(b + 93 * OS1_S1 + 99) -
                p_over_q * *(b + 129 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 71);
            *(b + 93 * OS1_S1 + 136) =
                prefactor_z * *(b + 93 * OS1_S1 + 94) -
                p_over_q * *(b + 134 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 94);
            *(b + 93 * OS1_S1 + 137) =
                prefactor_z * *(b + 93 * OS1_S1 + 95) -
                p_over_q * *(b + 134 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 95) +
                one_over_two_q * *(b + 93 * OS1_S1 + 62);
            *(b + 93 * OS1_S1 + 138) = prefactor_y * *(b + 93 * OS1_S1 + 97) -
                                       p_over_q * *(b + 133 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 65);
            *(b + 93 * OS1_S1 + 139) = prefactor_y * *(b + 93 * OS1_S1 + 98) -
                                       p_over_q * *(b + 133 * OS1_S1 + 98);
            *(b + 93 * OS1_S1 + 140) =
                prefactor_x * *(b + 93 * OS1_S1 + 104) -
                p_over_q * *(b + 129 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 76);
            *(b + 93 * OS1_S1 + 141) =
                prefactor_x * *(b + 93 * OS1_S1 + 105) -
                p_over_q * *(b + 129 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 105) +
                one_over_two_q * *(b + 93 * OS1_S1 + 77);
            *(b + 93 * OS1_S1 + 142) =
                prefactor_z * *(b + 93 * OS1_S1 + 99) -
                p_over_q * *(b + 134 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 99);
            *(b + 93 * OS1_S1 + 143) =
                prefactor_z * *(b + 93 * OS1_S1 + 100) -
                p_over_q * *(b + 134 * OS1_S1 + 100) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 100) +
                one_over_two_q * *(b + 93 * OS1_S1 + 66);
            *(b + 93 * OS1_S1 + 144) =
                prefactor_x * *(b + 93 * OS1_S1 + 108) -
                p_over_q * *(b + 129 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 108) +
                one_over_two_q * *(b + 93 * OS1_S1 + 80);
            *(b + 93 * OS1_S1 + 145) = prefactor_y * *(b + 93 * OS1_S1 + 103) -
                                       p_over_q * *(b + 133 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 70);
            *(b + 93 * OS1_S1 + 146) = prefactor_y * *(b + 93 * OS1_S1 + 104) -
                                       p_over_q * *(b + 133 * OS1_S1 + 104);
            *(b + 93 * OS1_S1 + 147) =
                prefactor_x * *(b + 93 * OS1_S1 + 111) -
                p_over_q * *(b + 129 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 111) +
                one_over_two_q * *(b + 93 * OS1_S1 + 83);
            *(b + 93 * OS1_S1 + 148) =
                prefactor_x * *(b + 93 * OS1_S1 + 112) -
                p_over_q * *(b + 129 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 112);
            *(b + 93 * OS1_S1 + 149) =
                prefactor_z * *(b + 93 * OS1_S1 + 105) -
                p_over_q * *(b + 134 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 105);
            *(b + 93 * OS1_S1 + 150) =
                prefactor_x * *(b + 93 * OS1_S1 + 114) -
                p_over_q * *(b + 129 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 114);
            *(b + 93 * OS1_S1 + 151) =
                prefactor_x * *(b + 93 * OS1_S1 + 115) -
                p_over_q * *(b + 129 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 115);
            *(b + 93 * OS1_S1 + 152) =
                prefactor_x * *(b + 93 * OS1_S1 + 116) -
                p_over_q * *(b + 129 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 116);
            *(b + 93 * OS1_S1 + 153) =
                prefactor_x * *(b + 93 * OS1_S1 + 117) -
                p_over_q * *(b + 129 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 117);
            *(b + 93 * OS1_S1 + 154) = prefactor_y * *(b + 93 * OS1_S1 + 111) -
                                       p_over_q * *(b + 133 * OS1_S1 + 111);
            *(b + 93 * OS1_S1 + 155) =
                prefactor_x * *(b + 93 * OS1_S1 + 119) -
                p_over_q * *(b + 129 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 119);
            *(b + 93 * OS1_S1 + 156) =
                prefactor_y * *(b + 93 * OS1_S1 + 112) -
                p_over_q * *(b + 133 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 93 * OS1_S1 + 77);
            *(b + 93 * OS1_S1 + 157) =
                prefactor_z * *(b + 93 * OS1_S1 + 112) -
                p_over_q * *(b + 134 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 112);
            *(b + 93 * OS1_S1 + 158) =
                prefactor_z * *(b + 93 * OS1_S1 + 113) -
                p_over_q * *(b + 134 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 113) +
                one_over_two_q * *(b + 93 * OS1_S1 + 77);
            *(b + 93 * OS1_S1 + 159) =
                prefactor_z * *(b + 93 * OS1_S1 + 114) -
                p_over_q * *(b + 134 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 78);
            *(b + 93 * OS1_S1 + 160) =
                prefactor_y * *(b + 93 * OS1_S1 + 116) -
                p_over_q * *(b + 133 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 93 * OS1_S1 + 81);
            *(b + 93 * OS1_S1 + 161) =
                prefactor_y * *(b + 93 * OS1_S1 + 117) -
                p_over_q * *(b + 133 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 93 * OS1_S1 + 82);
            *(b + 93 * OS1_S1 + 162) = prefactor_y * *(b + 93 * OS1_S1 + 118) -
                                       p_over_q * *(b + 133 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 93 * OS1_S1 + 83);
            *(b + 93 * OS1_S1 + 163) = prefactor_y * *(b + 93 * OS1_S1 + 119) -
                                       p_over_q * *(b + 133 * OS1_S1 + 119);
            *(b + 93 * OS1_S1 + 164) =
                prefactor_z * *(b + 93 * OS1_S1 + 119) -
                p_over_q * *(b + 134 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 61 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 93 * OS1_S1 + 83);
            *(b + 94 * OS1_S1 + 120) =
                prefactor_x * *(b + 94 * OS1_S1 + 84) -
                p_over_q * *(b + 130 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 94 * OS1_S1 + 56);
            *(b + 94 * OS1_S1 + 121) =
                prefactor_y * *(b + 94 * OS1_S1 + 84) -
                p_over_q * *(b + 135 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 84);
            *(b + 94 * OS1_S1 + 122) = prefactor_z * *(b + 94 * OS1_S1 + 84) -
                                       p_over_q * *(b + 136 * OS1_S1 + 84);
            *(b + 94 * OS1_S1 + 123) =
                prefactor_y * *(b + 94 * OS1_S1 + 85) -
                p_over_q * *(b + 135 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 85) +
                one_over_two_q * *(b + 94 * OS1_S1 + 56);
            *(b + 94 * OS1_S1 + 124) = prefactor_z * *(b + 94 * OS1_S1 + 85) -
                                       p_over_q * *(b + 136 * OS1_S1 + 85);
            *(b + 94 * OS1_S1 + 125) = prefactor_z * *(b + 94 * OS1_S1 + 86) -
                                       p_over_q * *(b + 136 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 56);
            *(b + 94 * OS1_S1 + 126) =
                prefactor_y * *(b + 94 * OS1_S1 + 87) -
                p_over_q * *(b + 135 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 57);
            *(b + 94 * OS1_S1 + 127) = prefactor_z * *(b + 94 * OS1_S1 + 87) -
                                       p_over_q * *(b + 136 * OS1_S1 + 87);
            *(b + 94 * OS1_S1 + 128) =
                prefactor_y * *(b + 94 * OS1_S1 + 89) -
                p_over_q * *(b + 135 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 89);
            *(b + 94 * OS1_S1 + 129) =
                prefactor_z * *(b + 94 * OS1_S1 + 89) -
                p_over_q * *(b + 136 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 58);
            *(b + 94 * OS1_S1 + 130) =
                prefactor_x * *(b + 94 * OS1_S1 + 94) -
                p_over_q * *(b + 130 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 94 * OS1_S1 + 66);
            *(b + 94 * OS1_S1 + 131) = prefactor_z * *(b + 94 * OS1_S1 + 90) -
                                       p_over_q * *(b + 136 * OS1_S1 + 90);
            *(b + 94 * OS1_S1 + 132) = prefactor_z * *(b + 94 * OS1_S1 + 91) -
                                       p_over_q * *(b + 136 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 59);
            *(b + 94 * OS1_S1 + 133) =
                prefactor_y * *(b + 94 * OS1_S1 + 93) -
                p_over_q * *(b + 135 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 93);
            *(b + 94 * OS1_S1 + 134) =
                prefactor_z * *(b + 94 * OS1_S1 + 93) -
                p_over_q * *(b + 136 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 94 * OS1_S1 + 61);
            *(b + 94 * OS1_S1 + 135) =
                prefactor_x * *(b + 94 * OS1_S1 + 99) -
                p_over_q * *(b + 130 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 71);
            *(b + 94 * OS1_S1 + 136) = prefactor_z * *(b + 94 * OS1_S1 + 94) -
                                       p_over_q * *(b + 136 * OS1_S1 + 94);
            *(b + 94 * OS1_S1 + 137) = prefactor_z * *(b + 94 * OS1_S1 + 95) -
                                       p_over_q * *(b + 136 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 62);
            *(b + 94 * OS1_S1 + 138) =
                prefactor_y * *(b + 94 * OS1_S1 + 97) -
                p_over_q * *(b + 135 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 97) +
                one_over_two_q * *(b + 94 * OS1_S1 + 65);
            *(b + 94 * OS1_S1 + 139) =
                prefactor_y * *(b + 94 * OS1_S1 + 98) -
                p_over_q * *(b + 135 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 98);
            *(b + 94 * OS1_S1 + 140) =
                prefactor_x * *(b + 94 * OS1_S1 + 104) -
                p_over_q * *(b + 130 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 76);
            *(b + 94 * OS1_S1 + 141) =
                prefactor_x * *(b + 94 * OS1_S1 + 105) -
                p_over_q * *(b + 130 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 105) +
                one_over_two_q * *(b + 94 * OS1_S1 + 77);
            *(b + 94 * OS1_S1 + 142) = prefactor_z * *(b + 94 * OS1_S1 + 99) -
                                       p_over_q * *(b + 136 * OS1_S1 + 99);
            *(b + 94 * OS1_S1 + 143) = prefactor_z * *(b + 94 * OS1_S1 + 100) -
                                       p_over_q * *(b + 136 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 66);
            *(b + 94 * OS1_S1 + 144) =
                prefactor_x * *(b + 94 * OS1_S1 + 108) -
                p_over_q * *(b + 130 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 108) +
                one_over_two_q * *(b + 94 * OS1_S1 + 80);
            *(b + 94 * OS1_S1 + 145) =
                prefactor_x * *(b + 94 * OS1_S1 + 109) -
                p_over_q * *(b + 130 * OS1_S1 + 109) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 109) +
                one_over_two_q * *(b + 94 * OS1_S1 + 81);
            *(b + 94 * OS1_S1 + 146) =
                prefactor_y * *(b + 94 * OS1_S1 + 104) -
                p_over_q * *(b + 135 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 104);
            *(b + 94 * OS1_S1 + 147) =
                prefactor_x * *(b + 94 * OS1_S1 + 111) -
                p_over_q * *(b + 130 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 111) +
                one_over_two_q * *(b + 94 * OS1_S1 + 83);
            *(b + 94 * OS1_S1 + 148) =
                prefactor_x * *(b + 94 * OS1_S1 + 112) -
                p_over_q * *(b + 130 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 112);
            *(b + 94 * OS1_S1 + 149) = prefactor_z * *(b + 94 * OS1_S1 + 105) -
                                       p_over_q * *(b + 136 * OS1_S1 + 105);
            *(b + 94 * OS1_S1 + 150) =
                prefactor_x * *(b + 94 * OS1_S1 + 114) -
                p_over_q * *(b + 130 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 114);
            *(b + 94 * OS1_S1 + 151) =
                prefactor_x * *(b + 94 * OS1_S1 + 115) -
                p_over_q * *(b + 130 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 115);
            *(b + 94 * OS1_S1 + 152) =
                prefactor_x * *(b + 94 * OS1_S1 + 116) -
                p_over_q * *(b + 130 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 116);
            *(b + 94 * OS1_S1 + 153) =
                prefactor_x * *(b + 94 * OS1_S1 + 117) -
                p_over_q * *(b + 130 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 117);
            *(b + 94 * OS1_S1 + 154) =
                prefactor_x * *(b + 94 * OS1_S1 + 118) -
                p_over_q * *(b + 130 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 118);
            *(b + 94 * OS1_S1 + 155) =
                prefactor_x * *(b + 94 * OS1_S1 + 119) -
                p_over_q * *(b + 130 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 66 * OS1_S1 + 119);
            *(b + 94 * OS1_S1 + 156) =
                prefactor_y * *(b + 94 * OS1_S1 + 112) -
                p_over_q * *(b + 135 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 94 * OS1_S1 + 77);
            *(b + 94 * OS1_S1 + 157) = prefactor_z * *(b + 94 * OS1_S1 + 112) -
                                       p_over_q * *(b + 136 * OS1_S1 + 112);
            *(b + 94 * OS1_S1 + 158) = prefactor_z * *(b + 94 * OS1_S1 + 113) -
                                       p_over_q * *(b + 136 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 94 * OS1_S1 + 77);
            *(b + 94 * OS1_S1 + 159) =
                prefactor_z * *(b + 94 * OS1_S1 + 114) -
                p_over_q * *(b + 136 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 78);
            *(b + 94 * OS1_S1 + 160) =
                prefactor_z * *(b + 94 * OS1_S1 + 115) -
                p_over_q * *(b + 136 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 94 * OS1_S1 + 79);
            *(b + 94 * OS1_S1 + 161) =
                prefactor_y * *(b + 94 * OS1_S1 + 117) -
                p_over_q * *(b + 135 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 94 * OS1_S1 + 82);
            *(b + 94 * OS1_S1 + 162) =
                prefactor_y * *(b + 94 * OS1_S1 + 118) -
                p_over_q * *(b + 135 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 118) +
                one_over_two_q * *(b + 94 * OS1_S1 + 83);
            *(b + 94 * OS1_S1 + 163) =
                prefactor_y * *(b + 94 * OS1_S1 + 119) -
                p_over_q * *(b + 135 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 62 * OS1_S1 + 119);
            *(b + 94 * OS1_S1 + 164) =
                prefactor_z * *(b + 94 * OS1_S1 + 119) -
                p_over_q * *(b + 136 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 94 * OS1_S1 + 83);
            *(b + 95 * OS1_S1 + 120) =
                prefactor_x * *(b + 95 * OS1_S1 + 84) -
                p_over_q * *(b + 131 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 95 * OS1_S1 + 56);
            *(b + 95 * OS1_S1 + 121) =
                prefactor_y * *(b + 95 * OS1_S1 + 84) -
                p_over_q * *(b + 136 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 84);
            *(b + 95 * OS1_S1 + 122) = prefactor_z * *(b + 95 * OS1_S1 + 84) -
                                       p_over_q * *(b + 137 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 84);
            *(b + 95 * OS1_S1 + 123) =
                prefactor_y * *(b + 95 * OS1_S1 + 85) -
                p_over_q * *(b + 136 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 85) +
                one_over_two_q * *(b + 95 * OS1_S1 + 56);
            *(b + 95 * OS1_S1 + 124) = prefactor_z * *(b + 95 * OS1_S1 + 85) -
                                       p_over_q * *(b + 137 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 85);
            *(b + 95 * OS1_S1 + 125) =
                prefactor_z * *(b + 95 * OS1_S1 + 86) -
                p_over_q * *(b + 137 * OS1_S1 + 86) +
                one_over_two_q * *(b + 62 * OS1_S1 + 86) +
                one_over_two_q * *(b + 95 * OS1_S1 + 56);
            *(b + 95 * OS1_S1 + 126) =
                prefactor_y * *(b + 95 * OS1_S1 + 87) -
                p_over_q * *(b + 136 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 57);
            *(b + 95 * OS1_S1 + 127) = prefactor_z * *(b + 95 * OS1_S1 + 87) -
                                       p_over_q * *(b + 137 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 87);
            *(b + 95 * OS1_S1 + 128) =
                prefactor_y * *(b + 95 * OS1_S1 + 89) -
                p_over_q * *(b + 136 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 89);
            *(b + 95 * OS1_S1 + 129) =
                prefactor_z * *(b + 95 * OS1_S1 + 89) -
                p_over_q * *(b + 137 * OS1_S1 + 89) +
                one_over_two_q * *(b + 62 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 58);
            *(b + 95 * OS1_S1 + 130) =
                prefactor_y * *(b + 95 * OS1_S1 + 90) -
                p_over_q * *(b + 136 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 95 * OS1_S1 + 59);
            *(b + 95 * OS1_S1 + 131) = prefactor_z * *(b + 95 * OS1_S1 + 90) -
                                       p_over_q * *(b + 137 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 90);
            *(b + 95 * OS1_S1 + 132) =
                prefactor_z * *(b + 95 * OS1_S1 + 91) -
                p_over_q * *(b + 137 * OS1_S1 + 91) +
                one_over_two_q * *(b + 62 * OS1_S1 + 91) +
                one_over_two_q * *(b + 95 * OS1_S1 + 59);
            *(b + 95 * OS1_S1 + 133) =
                prefactor_y * *(b + 95 * OS1_S1 + 93) -
                p_over_q * *(b + 136 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 93);
            *(b + 95 * OS1_S1 + 134) =
                prefactor_z * *(b + 95 * OS1_S1 + 93) -
                p_over_q * *(b + 137 * OS1_S1 + 93) +
                one_over_two_q * *(b + 62 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 95 * OS1_S1 + 61);
            *(b + 95 * OS1_S1 + 135) =
                prefactor_x * *(b + 95 * OS1_S1 + 99) -
                p_over_q * *(b + 131 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 71);
            *(b + 95 * OS1_S1 + 136) = prefactor_z * *(b + 95 * OS1_S1 + 94) -
                                       p_over_q * *(b + 137 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 94);
            *(b + 95 * OS1_S1 + 137) =
                prefactor_z * *(b + 95 * OS1_S1 + 95) -
                p_over_q * *(b + 137 * OS1_S1 + 95) +
                one_over_two_q * *(b + 62 * OS1_S1 + 95) +
                one_over_two_q * *(b + 95 * OS1_S1 + 62);
            *(b + 95 * OS1_S1 + 138) =
                prefactor_y * *(b + 95 * OS1_S1 + 97) -
                p_over_q * *(b + 136 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 97) +
                one_over_two_q * *(b + 95 * OS1_S1 + 65);
            *(b + 95 * OS1_S1 + 139) =
                prefactor_y * *(b + 95 * OS1_S1 + 98) -
                p_over_q * *(b + 136 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 98);
            *(b + 95 * OS1_S1 + 140) =
                prefactor_x * *(b + 95 * OS1_S1 + 104) -
                p_over_q * *(b + 131 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 76);
            *(b + 95 * OS1_S1 + 141) =
                prefactor_x * *(b + 95 * OS1_S1 + 105) -
                p_over_q * *(b + 131 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 105) +
                one_over_two_q * *(b + 95 * OS1_S1 + 77);
            *(b + 95 * OS1_S1 + 142) = prefactor_z * *(b + 95 * OS1_S1 + 99) -
                                       p_over_q * *(b + 137 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 62 * OS1_S1 + 99);
            *(b + 95 * OS1_S1 + 143) =
                prefactor_z * *(b + 95 * OS1_S1 + 100) -
                p_over_q * *(b + 137 * OS1_S1 + 100) +
                one_over_two_q * *(b + 62 * OS1_S1 + 100) +
                one_over_two_q * *(b + 95 * OS1_S1 + 66);
            *(b + 95 * OS1_S1 + 144) =
                prefactor_x * *(b + 95 * OS1_S1 + 108) -
                p_over_q * *(b + 131 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 108) +
                one_over_two_q * *(b + 95 * OS1_S1 + 80);
            *(b + 95 * OS1_S1 + 145) =
                prefactor_y * *(b + 95 * OS1_S1 + 103) -
                p_over_q * *(b + 136 * OS1_S1 + 103) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 103) +
                one_over_two_q * *(b + 95 * OS1_S1 + 70);
            *(b + 95 * OS1_S1 + 146) =
                prefactor_y * *(b + 95 * OS1_S1 + 104) -
                p_over_q * *(b + 136 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 104);
            *(b + 95 * OS1_S1 + 147) =
                prefactor_x * *(b + 95 * OS1_S1 + 111) -
                p_over_q * *(b + 131 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 111) +
                one_over_two_q * *(b + 95 * OS1_S1 + 83);
            *(b + 95 * OS1_S1 + 148) =
                prefactor_x * *(b + 95 * OS1_S1 + 112) -
                p_over_q * *(b + 131 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 112);
            *(b + 95 * OS1_S1 + 149) =
                prefactor_z * *(b + 95 * OS1_S1 + 105) -
                p_over_q * *(b + 137 * OS1_S1 + 105) +
                one_over_two_q * *(b + 62 * OS1_S1 + 105);
            *(b + 95 * OS1_S1 + 150) =
                prefactor_x * *(b + 95 * OS1_S1 + 114) -
                p_over_q * *(b + 131 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 114);
            *(b + 95 * OS1_S1 + 151) =
                prefactor_x * *(b + 95 * OS1_S1 + 115) -
                p_over_q * *(b + 131 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 115);
            *(b + 95 * OS1_S1 + 152) =
                prefactor_x * *(b + 95 * OS1_S1 + 116) -
                p_over_q * *(b + 131 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 116);
            *(b + 95 * OS1_S1 + 153) =
                prefactor_x * *(b + 95 * OS1_S1 + 117) -
                p_over_q * *(b + 131 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 117);
            *(b + 95 * OS1_S1 + 154) =
                prefactor_y * *(b + 95 * OS1_S1 + 111) -
                p_over_q * *(b + 136 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 111);
            *(b + 95 * OS1_S1 + 155) =
                prefactor_x * *(b + 95 * OS1_S1 + 119) -
                p_over_q * *(b + 131 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 67 * OS1_S1 + 119);
            *(b + 95 * OS1_S1 + 156) =
                prefactor_y * *(b + 95 * OS1_S1 + 112) -
                p_over_q * *(b + 136 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 95 * OS1_S1 + 77);
            *(b + 95 * OS1_S1 + 157) =
                prefactor_z * *(b + 95 * OS1_S1 + 112) -
                p_over_q * *(b + 137 * OS1_S1 + 112) +
                one_over_two_q * *(b + 62 * OS1_S1 + 112);
            *(b + 95 * OS1_S1 + 158) =
                prefactor_z * *(b + 95 * OS1_S1 + 113) -
                p_over_q * *(b + 137 * OS1_S1 + 113) +
                one_over_two_q * *(b + 62 * OS1_S1 + 113) +
                one_over_two_q * *(b + 95 * OS1_S1 + 77);
            *(b + 95 * OS1_S1 + 159) =
                prefactor_z * *(b + 95 * OS1_S1 + 114) -
                p_over_q * *(b + 137 * OS1_S1 + 114) +
                one_over_two_q * *(b + 62 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 78);
            *(b + 95 * OS1_S1 + 160) =
                prefactor_z * *(b + 95 * OS1_S1 + 115) -
                p_over_q * *(b + 137 * OS1_S1 + 115) +
                one_over_two_q * *(b + 62 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 95 * OS1_S1 + 79);
            *(b + 95 * OS1_S1 + 161) =
                prefactor_y * *(b + 95 * OS1_S1 + 117) -
                p_over_q * *(b + 136 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 95 * OS1_S1 + 82);
            *(b + 95 * OS1_S1 + 162) =
                prefactor_y * *(b + 95 * OS1_S1 + 118) -
                p_over_q * *(b + 136 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 118) +
                one_over_two_q * *(b + 95 * OS1_S1 + 83);
            *(b + 95 * OS1_S1 + 163) =
                prefactor_y * *(b + 95 * OS1_S1 + 119) -
                p_over_q * *(b + 136 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 63 * OS1_S1 + 119);
            *(b + 95 * OS1_S1 + 164) =
                prefactor_z * *(b + 95 * OS1_S1 + 119) -
                p_over_q * *(b + 137 * OS1_S1 + 119) +
                one_over_two_q * *(b + 62 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 95 * OS1_S1 + 83);
            *(b + 96 * OS1_S1 + 120) =
                prefactor_x * *(b + 96 * OS1_S1 + 84) -
                p_over_q * *(b + 132 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 96 * OS1_S1 + 56);
            *(b + 96 * OS1_S1 + 121) =
                prefactor_y * *(b + 96 * OS1_S1 + 84) -
                p_over_q * *(b + 137 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 84);
            *(b + 96 * OS1_S1 + 122) =
                prefactor_z * *(b + 96 * OS1_S1 + 84) -
                p_over_q * *(b + 138 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 84);
            *(b + 96 * OS1_S1 + 123) =
                prefactor_y * *(b + 96 * OS1_S1 + 85) -
                p_over_q * *(b + 137 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 85) +
                one_over_two_q * *(b + 96 * OS1_S1 + 56);
            *(b + 96 * OS1_S1 + 124) =
                prefactor_z * *(b + 96 * OS1_S1 + 85) -
                p_over_q * *(b + 138 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 85);
            *(b + 96 * OS1_S1 + 125) =
                prefactor_z * *(b + 96 * OS1_S1 + 86) -
                p_over_q * *(b + 138 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 86) +
                one_over_two_q * *(b + 96 * OS1_S1 + 56);
            *(b + 96 * OS1_S1 + 126) =
                prefactor_y * *(b + 96 * OS1_S1 + 87) -
                p_over_q * *(b + 137 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 57);
            *(b + 96 * OS1_S1 + 127) =
                prefactor_z * *(b + 96 * OS1_S1 + 87) -
                p_over_q * *(b + 138 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 87);
            *(b + 96 * OS1_S1 + 128) =
                prefactor_y * *(b + 96 * OS1_S1 + 89) -
                p_over_q * *(b + 137 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 89);
            *(b + 96 * OS1_S1 + 129) =
                prefactor_z * *(b + 96 * OS1_S1 + 89) -
                p_over_q * *(b + 138 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 58);
            *(b + 96 * OS1_S1 + 130) =
                prefactor_y * *(b + 96 * OS1_S1 + 90) -
                p_over_q * *(b + 137 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 59);
            *(b + 96 * OS1_S1 + 131) =
                prefactor_z * *(b + 96 * OS1_S1 + 90) -
                p_over_q * *(b + 138 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 90);
            *(b + 96 * OS1_S1 + 132) =
                prefactor_z * *(b + 96 * OS1_S1 + 91) -
                p_over_q * *(b + 138 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 91) +
                one_over_two_q * *(b + 96 * OS1_S1 + 59);
            *(b + 96 * OS1_S1 + 133) =
                prefactor_y * *(b + 96 * OS1_S1 + 93) -
                p_over_q * *(b + 137 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 93);
            *(b + 96 * OS1_S1 + 134) =
                prefactor_z * *(b + 96 * OS1_S1 + 93) -
                p_over_q * *(b + 138 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 61);
            *(b + 96 * OS1_S1 + 135) =
                prefactor_x * *(b + 96 * OS1_S1 + 99) -
                p_over_q * *(b + 132 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 71);
            *(b + 96 * OS1_S1 + 136) =
                prefactor_z * *(b + 96 * OS1_S1 + 94) -
                p_over_q * *(b + 138 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 94);
            *(b + 96 * OS1_S1 + 137) =
                prefactor_z * *(b + 96 * OS1_S1 + 95) -
                p_over_q * *(b + 138 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 95) +
                one_over_two_q * *(b + 96 * OS1_S1 + 62);
            *(b + 96 * OS1_S1 + 138) =
                prefactor_y * *(b + 96 * OS1_S1 + 97) -
                p_over_q * *(b + 137 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 97) +
                one_over_two_q * *(b + 96 * OS1_S1 + 65);
            *(b + 96 * OS1_S1 + 139) =
                prefactor_y * *(b + 96 * OS1_S1 + 98) -
                p_over_q * *(b + 137 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 98);
            *(b + 96 * OS1_S1 + 140) =
                prefactor_x * *(b + 96 * OS1_S1 + 104) -
                p_over_q * *(b + 132 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 76);
            *(b + 96 * OS1_S1 + 141) =
                prefactor_x * *(b + 96 * OS1_S1 + 105) -
                p_over_q * *(b + 132 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 105) +
                one_over_two_q * *(b + 96 * OS1_S1 + 77);
            *(b + 96 * OS1_S1 + 142) =
                prefactor_z * *(b + 96 * OS1_S1 + 99) -
                p_over_q * *(b + 138 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 99);
            *(b + 96 * OS1_S1 + 143) =
                prefactor_z * *(b + 96 * OS1_S1 + 100) -
                p_over_q * *(b + 138 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 100) +
                one_over_two_q * *(b + 96 * OS1_S1 + 66);
            *(b + 96 * OS1_S1 + 144) =
                prefactor_x * *(b + 96 * OS1_S1 + 108) -
                p_over_q * *(b + 132 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 108) +
                one_over_two_q * *(b + 96 * OS1_S1 + 80);
            *(b + 96 * OS1_S1 + 145) =
                prefactor_y * *(b + 96 * OS1_S1 + 103) -
                p_over_q * *(b + 137 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 103) +
                one_over_two_q * *(b + 96 * OS1_S1 + 70);
            *(b + 96 * OS1_S1 + 146) =
                prefactor_y * *(b + 96 * OS1_S1 + 104) -
                p_over_q * *(b + 137 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 104);
            *(b + 96 * OS1_S1 + 147) =
                prefactor_x * *(b + 96 * OS1_S1 + 111) -
                p_over_q * *(b + 132 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 111) +
                one_over_two_q * *(b + 96 * OS1_S1 + 83);
            *(b + 96 * OS1_S1 + 148) =
                prefactor_x * *(b + 96 * OS1_S1 + 112) -
                p_over_q * *(b + 132 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 112);
            *(b + 96 * OS1_S1 + 149) =
                prefactor_z * *(b + 96 * OS1_S1 + 105) -
                p_over_q * *(b + 138 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 105);
            *(b + 96 * OS1_S1 + 150) =
                prefactor_x * *(b + 96 * OS1_S1 + 114) -
                p_over_q * *(b + 132 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 114);
            *(b + 96 * OS1_S1 + 151) =
                prefactor_x * *(b + 96 * OS1_S1 + 115) -
                p_over_q * *(b + 132 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 115);
            *(b + 96 * OS1_S1 + 152) =
                prefactor_x * *(b + 96 * OS1_S1 + 116) -
                p_over_q * *(b + 132 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 116);
            *(b + 96 * OS1_S1 + 153) =
                prefactor_x * *(b + 96 * OS1_S1 + 117) -
                p_over_q * *(b + 132 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 117);
            *(b + 96 * OS1_S1 + 154) =
                prefactor_y * *(b + 96 * OS1_S1 + 111) -
                p_over_q * *(b + 137 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 111);
            *(b + 96 * OS1_S1 + 155) =
                prefactor_x * *(b + 96 * OS1_S1 + 119) -
                p_over_q * *(b + 132 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 119);
            *(b + 96 * OS1_S1 + 156) =
                prefactor_y * *(b + 96 * OS1_S1 + 112) -
                p_over_q * *(b + 137 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 96 * OS1_S1 + 77);
            *(b + 96 * OS1_S1 + 157) =
                prefactor_z * *(b + 96 * OS1_S1 + 112) -
                p_over_q * *(b + 138 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 112);
            *(b + 96 * OS1_S1 + 158) =
                prefactor_z * *(b + 96 * OS1_S1 + 113) -
                p_over_q * *(b + 138 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 113) +
                one_over_two_q * *(b + 96 * OS1_S1 + 77);
            *(b + 96 * OS1_S1 + 159) =
                prefactor_z * *(b + 96 * OS1_S1 + 114) -
                p_over_q * *(b + 138 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 78);
            *(b + 96 * OS1_S1 + 160) =
                prefactor_z * *(b + 96 * OS1_S1 + 115) -
                p_over_q * *(b + 138 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 96 * OS1_S1 + 79);
            *(b + 96 * OS1_S1 + 161) =
                prefactor_y * *(b + 96 * OS1_S1 + 117) -
                p_over_q * *(b + 137 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 96 * OS1_S1 + 82);
            *(b + 96 * OS1_S1 + 162) =
                prefactor_y * *(b + 96 * OS1_S1 + 118) -
                p_over_q * *(b + 137 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 118) +
                one_over_two_q * *(b + 96 * OS1_S1 + 83);
            *(b + 96 * OS1_S1 + 163) =
                prefactor_y * *(b + 96 * OS1_S1 + 119) -
                p_over_q * *(b + 137 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 64 * OS1_S1 + 119);
            *(b + 96 * OS1_S1 + 164) =
                prefactor_z * *(b + 96 * OS1_S1 + 119) -
                p_over_q * *(b + 138 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 63 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 96 * OS1_S1 + 83);
            *(b + 97 * OS1_S1 + 120) =
                prefactor_x * *(b + 97 * OS1_S1 + 84) -
                p_over_q * *(b + 133 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 97 * OS1_S1 + 56);
            *(b + 97 * OS1_S1 + 121) = prefactor_y * *(b + 97 * OS1_S1 + 84) -
                                       p_over_q * *(b + 138 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 84);
            *(b + 97 * OS1_S1 + 122) =
                prefactor_z * *(b + 97 * OS1_S1 + 84) -
                p_over_q * *(b + 139 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 84);
            *(b + 97 * OS1_S1 + 123) =
                prefactor_y * *(b + 97 * OS1_S1 + 85) -
                p_over_q * *(b + 138 * OS1_S1 + 85) +
                one_over_two_q * *(b + 65 * OS1_S1 + 85) +
                one_over_two_q * *(b + 97 * OS1_S1 + 56);
            *(b + 97 * OS1_S1 + 124) = prefactor_y * *(b + 97 * OS1_S1 + 86) -
                                       p_over_q * *(b + 138 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 86);
            *(b + 97 * OS1_S1 + 125) =
                prefactor_z * *(b + 97 * OS1_S1 + 86) -
                p_over_q * *(b + 139 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 86) +
                one_over_two_q * *(b + 97 * OS1_S1 + 56);
            *(b + 97 * OS1_S1 + 126) =
                prefactor_y * *(b + 97 * OS1_S1 + 87) -
                p_over_q * *(b + 138 * OS1_S1 + 87) +
                one_over_two_q * *(b + 65 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 57);
            *(b + 97 * OS1_S1 + 127) =
                prefactor_z * *(b + 97 * OS1_S1 + 87) -
                p_over_q * *(b + 139 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 87);
            *(b + 97 * OS1_S1 + 128) = prefactor_y * *(b + 97 * OS1_S1 + 89) -
                                       p_over_q * *(b + 138 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 89);
            *(b + 97 * OS1_S1 + 129) =
                prefactor_z * *(b + 97 * OS1_S1 + 89) -
                p_over_q * *(b + 139 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 58);
            *(b + 97 * OS1_S1 + 130) =
                prefactor_y * *(b + 97 * OS1_S1 + 90) -
                p_over_q * *(b + 138 * OS1_S1 + 90) +
                one_over_two_q * *(b + 65 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 97 * OS1_S1 + 59);
            *(b + 97 * OS1_S1 + 131) =
                prefactor_z * *(b + 97 * OS1_S1 + 90) -
                p_over_q * *(b + 139 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 90);
            *(b + 97 * OS1_S1 + 132) =
                prefactor_y * *(b + 97 * OS1_S1 + 92) -
                p_over_q * *(b + 138 * OS1_S1 + 92) +
                one_over_two_q * *(b + 65 * OS1_S1 + 92) +
                one_over_two_q * *(b + 97 * OS1_S1 + 61);
            *(b + 97 * OS1_S1 + 133) = prefactor_y * *(b + 97 * OS1_S1 + 93) -
                                       p_over_q * *(b + 138 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 93);
            *(b + 97 * OS1_S1 + 134) =
                prefactor_z * *(b + 97 * OS1_S1 + 93) -
                p_over_q * *(b + 139 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 97 * OS1_S1 + 61);
            *(b + 97 * OS1_S1 + 135) =
                prefactor_x * *(b + 97 * OS1_S1 + 99) -
                p_over_q * *(b + 133 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 71);
            *(b + 97 * OS1_S1 + 136) =
                prefactor_z * *(b + 97 * OS1_S1 + 94) -
                p_over_q * *(b + 139 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 94);
            *(b + 97 * OS1_S1 + 137) =
                prefactor_z * *(b + 97 * OS1_S1 + 95) -
                p_over_q * *(b + 139 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 95) +
                one_over_two_q * *(b + 97 * OS1_S1 + 62);
            *(b + 97 * OS1_S1 + 138) =
                prefactor_y * *(b + 97 * OS1_S1 + 97) -
                p_over_q * *(b + 138 * OS1_S1 + 97) +
                one_over_two_q * *(b + 65 * OS1_S1 + 97) +
                one_over_two_q * *(b + 97 * OS1_S1 + 65);
            *(b + 97 * OS1_S1 + 139) = prefactor_y * *(b + 97 * OS1_S1 + 98) -
                                       p_over_q * *(b + 138 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 65 * OS1_S1 + 98);
            *(b + 97 * OS1_S1 + 140) =
                prefactor_x * *(b + 97 * OS1_S1 + 104) -
                p_over_q * *(b + 133 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 76);
            *(b + 97 * OS1_S1 + 141) =
                prefactor_x * *(b + 97 * OS1_S1 + 105) -
                p_over_q * *(b + 133 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 105) +
                one_over_two_q * *(b + 97 * OS1_S1 + 77);
            *(b + 97 * OS1_S1 + 142) =
                prefactor_z * *(b + 97 * OS1_S1 + 99) -
                p_over_q * *(b + 139 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 99);
            *(b + 97 * OS1_S1 + 143) =
                prefactor_z * *(b + 97 * OS1_S1 + 100) -
                p_over_q * *(b + 139 * OS1_S1 + 100) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 100) +
                one_over_two_q * *(b + 97 * OS1_S1 + 66);
            *(b + 97 * OS1_S1 + 144) =
                prefactor_x * *(b + 97 * OS1_S1 + 108) -
                p_over_q * *(b + 133 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 108) +
                one_over_two_q * *(b + 97 * OS1_S1 + 80);
            *(b + 97 * OS1_S1 + 145) =
                prefactor_y * *(b + 97 * OS1_S1 + 103) -
                p_over_q * *(b + 138 * OS1_S1 + 103) +
                one_over_two_q * *(b + 65 * OS1_S1 + 103) +
                one_over_two_q * *(b + 97 * OS1_S1 + 70);
            *(b + 97 * OS1_S1 + 146) =
                prefactor_y * *(b + 97 * OS1_S1 + 104) -
                p_over_q * *(b + 138 * OS1_S1 + 104) +
                one_over_two_q * *(b + 65 * OS1_S1 + 104);
            *(b + 97 * OS1_S1 + 147) =
                prefactor_x * *(b + 97 * OS1_S1 + 111) -
                p_over_q * *(b + 133 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 111) +
                one_over_two_q * *(b + 97 * OS1_S1 + 83);
            *(b + 97 * OS1_S1 + 148) =
                prefactor_x * *(b + 97 * OS1_S1 + 112) -
                p_over_q * *(b + 133 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 112);
            *(b + 97 * OS1_S1 + 149) =
                prefactor_z * *(b + 97 * OS1_S1 + 105) -
                p_over_q * *(b + 139 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 105);
            *(b + 97 * OS1_S1 + 150) =
                prefactor_x * *(b + 97 * OS1_S1 + 114) -
                p_over_q * *(b + 133 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 114);
            *(b + 97 * OS1_S1 + 151) =
                prefactor_x * *(b + 97 * OS1_S1 + 115) -
                p_over_q * *(b + 133 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 115);
            *(b + 97 * OS1_S1 + 152) =
                prefactor_x * *(b + 97 * OS1_S1 + 116) -
                p_over_q * *(b + 133 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 116);
            *(b + 97 * OS1_S1 + 153) =
                prefactor_x * *(b + 97 * OS1_S1 + 117) -
                p_over_q * *(b + 133 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 117);
            *(b + 97 * OS1_S1 + 154) =
                prefactor_y * *(b + 97 * OS1_S1 + 111) -
                p_over_q * *(b + 138 * OS1_S1 + 111) +
                one_over_two_q * *(b + 65 * OS1_S1 + 111);
            *(b + 97 * OS1_S1 + 155) =
                prefactor_x * *(b + 97 * OS1_S1 + 119) -
                p_over_q * *(b + 133 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 69 * OS1_S1 + 119);
            *(b + 97 * OS1_S1 + 156) =
                prefactor_y * *(b + 97 * OS1_S1 + 112) -
                p_over_q * *(b + 138 * OS1_S1 + 112) +
                one_over_two_q * *(b + 65 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 97 * OS1_S1 + 77);
            *(b + 97 * OS1_S1 + 157) =
                prefactor_z * *(b + 97 * OS1_S1 + 112) -
                p_over_q * *(b + 139 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 112);
            *(b + 97 * OS1_S1 + 158) =
                prefactor_z * *(b + 97 * OS1_S1 + 113) -
                p_over_q * *(b + 139 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 113) +
                one_over_two_q * *(b + 97 * OS1_S1 + 77);
            *(b + 97 * OS1_S1 + 159) =
                prefactor_z * *(b + 97 * OS1_S1 + 114) -
                p_over_q * *(b + 139 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 78);
            *(b + 97 * OS1_S1 + 160) =
                prefactor_y * *(b + 97 * OS1_S1 + 116) -
                p_over_q * *(b + 138 * OS1_S1 + 116) +
                one_over_two_q * *(b + 65 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 97 * OS1_S1 + 81);
            *(b + 97 * OS1_S1 + 161) =
                prefactor_y * *(b + 97 * OS1_S1 + 117) -
                p_over_q * *(b + 138 * OS1_S1 + 117) +
                one_over_two_q * *(b + 65 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 97 * OS1_S1 + 82);
            *(b + 97 * OS1_S1 + 162) =
                prefactor_y * *(b + 97 * OS1_S1 + 118) -
                p_over_q * *(b + 138 * OS1_S1 + 118) +
                one_over_two_q * *(b + 65 * OS1_S1 + 118) +
                one_over_two_q * *(b + 97 * OS1_S1 + 83);
            *(b + 97 * OS1_S1 + 163) =
                prefactor_y * *(b + 97 * OS1_S1 + 119) -
                p_over_q * *(b + 138 * OS1_S1 + 119) +
                one_over_two_q * *(b + 65 * OS1_S1 + 119);
            *(b + 97 * OS1_S1 + 164) =
                prefactor_z * *(b + 97 * OS1_S1 + 119) -
                p_over_q * *(b + 139 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 64 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 97 * OS1_S1 + 83);
            *(b + 98 * OS1_S1 + 120) =
                prefactor_x * *(b + 98 * OS1_S1 + 84) -
                p_over_q * *(b + 134 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 98 * OS1_S1 + 56);
            *(b + 98 * OS1_S1 + 121) = prefactor_y * *(b + 98 * OS1_S1 + 84) -
                                       p_over_q * *(b + 139 * OS1_S1 + 84);
            *(b + 98 * OS1_S1 + 122) =
                prefactor_z * *(b + 98 * OS1_S1 + 84) -
                p_over_q * *(b + 140 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 84);
            *(b + 98 * OS1_S1 + 123) = prefactor_y * *(b + 98 * OS1_S1 + 85) -
                                       p_over_q * *(b + 139 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 56);
            *(b + 98 * OS1_S1 + 124) = prefactor_y * *(b + 98 * OS1_S1 + 86) -
                                       p_over_q * *(b + 139 * OS1_S1 + 86);
            *(b + 98 * OS1_S1 + 125) =
                prefactor_z * *(b + 98 * OS1_S1 + 86) -
                p_over_q * *(b + 140 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 86) +
                one_over_two_q * *(b + 98 * OS1_S1 + 56);
            *(b + 98 * OS1_S1 + 126) =
                prefactor_y * *(b + 98 * OS1_S1 + 87) -
                p_over_q * *(b + 139 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 57);
            *(b + 98 * OS1_S1 + 127) =
                prefactor_z * *(b + 98 * OS1_S1 + 87) -
                p_over_q * *(b + 140 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 87);
            *(b + 98 * OS1_S1 + 128) = prefactor_y * *(b + 98 * OS1_S1 + 89) -
                                       p_over_q * *(b + 139 * OS1_S1 + 89);
            *(b + 98 * OS1_S1 + 129) =
                prefactor_z * *(b + 98 * OS1_S1 + 89) -
                p_over_q * *(b + 140 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 58);
            *(b + 98 * OS1_S1 + 130) =
                prefactor_y * *(b + 98 * OS1_S1 + 90) -
                p_over_q * *(b + 139 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 98 * OS1_S1 + 59);
            *(b + 98 * OS1_S1 + 131) =
                prefactor_z * *(b + 98 * OS1_S1 + 90) -
                p_over_q * *(b + 140 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 90);
            *(b + 98 * OS1_S1 + 132) = prefactor_y * *(b + 98 * OS1_S1 + 92) -
                                       p_over_q * *(b + 139 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 61);
            *(b + 98 * OS1_S1 + 133) = prefactor_y * *(b + 98 * OS1_S1 + 93) -
                                       p_over_q * *(b + 139 * OS1_S1 + 93);
            *(b + 98 * OS1_S1 + 134) =
                prefactor_x * *(b + 98 * OS1_S1 + 98) -
                p_over_q * *(b + 134 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 98 * OS1_S1 + 70);
            *(b + 98 * OS1_S1 + 135) =
                prefactor_x * *(b + 98 * OS1_S1 + 99) -
                p_over_q * *(b + 134 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 71);
            *(b + 98 * OS1_S1 + 136) =
                prefactor_z * *(b + 98 * OS1_S1 + 94) -
                p_over_q * *(b + 140 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 94);
            *(b + 98 * OS1_S1 + 137) =
                prefactor_z * *(b + 98 * OS1_S1 + 95) -
                p_over_q * *(b + 140 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 95) +
                one_over_two_q * *(b + 98 * OS1_S1 + 62);
            *(b + 98 * OS1_S1 + 138) = prefactor_y * *(b + 98 * OS1_S1 + 97) -
                                       p_over_q * *(b + 139 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 65);
            *(b + 98 * OS1_S1 + 139) = prefactor_y * *(b + 98 * OS1_S1 + 98) -
                                       p_over_q * *(b + 139 * OS1_S1 + 98);
            *(b + 98 * OS1_S1 + 140) =
                prefactor_x * *(b + 98 * OS1_S1 + 104) -
                p_over_q * *(b + 134 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 76);
            *(b + 98 * OS1_S1 + 141) =
                prefactor_x * *(b + 98 * OS1_S1 + 105) -
                p_over_q * *(b + 134 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 105) +
                one_over_two_q * *(b + 98 * OS1_S1 + 77);
            *(b + 98 * OS1_S1 + 142) =
                prefactor_z * *(b + 98 * OS1_S1 + 99) -
                p_over_q * *(b + 140 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 99);
            *(b + 98 * OS1_S1 + 143) =
                prefactor_x * *(b + 98 * OS1_S1 + 107) -
                p_over_q * *(b + 134 * OS1_S1 + 107) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 107) +
                one_over_two_q * *(b + 98 * OS1_S1 + 79);
            *(b + 98 * OS1_S1 + 144) =
                prefactor_x * *(b + 98 * OS1_S1 + 108) -
                p_over_q * *(b + 134 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 108) +
                one_over_two_q * *(b + 98 * OS1_S1 + 80);
            *(b + 98 * OS1_S1 + 145) = prefactor_y * *(b + 98 * OS1_S1 + 103) -
                                       p_over_q * *(b + 139 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 70);
            *(b + 98 * OS1_S1 + 146) = prefactor_y * *(b + 98 * OS1_S1 + 104) -
                                       p_over_q * *(b + 139 * OS1_S1 + 104);
            *(b + 98 * OS1_S1 + 147) =
                prefactor_x * *(b + 98 * OS1_S1 + 111) -
                p_over_q * *(b + 134 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 111) +
                one_over_two_q * *(b + 98 * OS1_S1 + 83);
            *(b + 98 * OS1_S1 + 148) =
                prefactor_x * *(b + 98 * OS1_S1 + 112) -
                p_over_q * *(b + 134 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 112);
            *(b + 98 * OS1_S1 + 149) =
                prefactor_x * *(b + 98 * OS1_S1 + 113) -
                p_over_q * *(b + 134 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 113);
            *(b + 98 * OS1_S1 + 150) =
                prefactor_x * *(b + 98 * OS1_S1 + 114) -
                p_over_q * *(b + 134 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 114);
            *(b + 98 * OS1_S1 + 151) =
                prefactor_x * *(b + 98 * OS1_S1 + 115) -
                p_over_q * *(b + 134 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 115);
            *(b + 98 * OS1_S1 + 152) =
                prefactor_x * *(b + 98 * OS1_S1 + 116) -
                p_over_q * *(b + 134 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 116);
            *(b + 98 * OS1_S1 + 153) =
                prefactor_x * *(b + 98 * OS1_S1 + 117) -
                p_over_q * *(b + 134 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 117);
            *(b + 98 * OS1_S1 + 154) = prefactor_y * *(b + 98 * OS1_S1 + 111) -
                                       p_over_q * *(b + 139 * OS1_S1 + 111);
            *(b + 98 * OS1_S1 + 155) =
                prefactor_x * *(b + 98 * OS1_S1 + 119) -
                p_over_q * *(b + 134 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 70 * OS1_S1 + 119);
            *(b + 98 * OS1_S1 + 156) =
                prefactor_y * *(b + 98 * OS1_S1 + 112) -
                p_over_q * *(b + 139 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 98 * OS1_S1 + 77);
            *(b + 98 * OS1_S1 + 157) =
                prefactor_z * *(b + 98 * OS1_S1 + 112) -
                p_over_q * *(b + 140 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 112);
            *(b + 98 * OS1_S1 + 158) =
                prefactor_z * *(b + 98 * OS1_S1 + 113) -
                p_over_q * *(b + 140 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 113) +
                one_over_two_q * *(b + 98 * OS1_S1 + 77);
            *(b + 98 * OS1_S1 + 159) =
                prefactor_z * *(b + 98 * OS1_S1 + 114) -
                p_over_q * *(b + 140 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 78);
            *(b + 98 * OS1_S1 + 160) =
                prefactor_y * *(b + 98 * OS1_S1 + 116) -
                p_over_q * *(b + 139 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 98 * OS1_S1 + 81);
            *(b + 98 * OS1_S1 + 161) =
                prefactor_y * *(b + 98 * OS1_S1 + 117) -
                p_over_q * *(b + 139 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 98 * OS1_S1 + 82);
            *(b + 98 * OS1_S1 + 162) = prefactor_y * *(b + 98 * OS1_S1 + 118) -
                                       p_over_q * *(b + 139 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 98 * OS1_S1 + 83);
            *(b + 98 * OS1_S1 + 163) = prefactor_y * *(b + 98 * OS1_S1 + 119) -
                                       p_over_q * *(b + 139 * OS1_S1 + 119);
            *(b + 98 * OS1_S1 + 164) =
                prefactor_z * *(b + 98 * OS1_S1 + 119) -
                p_over_q * *(b + 140 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 65 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 98 * OS1_S1 + 83);
            *(b + 99 * OS1_S1 + 120) =
                prefactor_x * *(b + 99 * OS1_S1 + 84) -
                p_over_q * *(b + 135 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 99 * OS1_S1 + 56);
            *(b + 99 * OS1_S1 + 121) =
                prefactor_y * *(b + 99 * OS1_S1 + 84) -
                p_over_q * *(b + 141 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 84);
            *(b + 99 * OS1_S1 + 122) = prefactor_z * *(b + 99 * OS1_S1 + 84) -
                                       p_over_q * *(b + 142 * OS1_S1 + 84);
            *(b + 99 * OS1_S1 + 123) =
                prefactor_y * *(b + 99 * OS1_S1 + 85) -
                p_over_q * *(b + 141 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 85) +
                one_over_two_q * *(b + 99 * OS1_S1 + 56);
            *(b + 99 * OS1_S1 + 124) = prefactor_z * *(b + 99 * OS1_S1 + 85) -
                                       p_over_q * *(b + 142 * OS1_S1 + 85);
            *(b + 99 * OS1_S1 + 125) = prefactor_z * *(b + 99 * OS1_S1 + 86) -
                                       p_over_q * *(b + 142 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 56);
            *(b + 99 * OS1_S1 + 126) =
                prefactor_y * *(b + 99 * OS1_S1 + 87) -
                p_over_q * *(b + 141 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 57);
            *(b + 99 * OS1_S1 + 127) = prefactor_z * *(b + 99 * OS1_S1 + 87) -
                                       p_over_q * *(b + 142 * OS1_S1 + 87);
            *(b + 99 * OS1_S1 + 128) =
                prefactor_y * *(b + 99 * OS1_S1 + 89) -
                p_over_q * *(b + 141 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 89);
            *(b + 99 * OS1_S1 + 129) =
                prefactor_z * *(b + 99 * OS1_S1 + 89) -
                p_over_q * *(b + 142 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 58);
            *(b + 99 * OS1_S1 + 130) =
                prefactor_x * *(b + 99 * OS1_S1 + 94) -
                p_over_q * *(b + 135 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 66);
            *(b + 99 * OS1_S1 + 131) = prefactor_z * *(b + 99 * OS1_S1 + 90) -
                                       p_over_q * *(b + 142 * OS1_S1 + 90);
            *(b + 99 * OS1_S1 + 132) = prefactor_z * *(b + 99 * OS1_S1 + 91) -
                                       p_over_q * *(b + 142 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 59);
            *(b + 99 * OS1_S1 + 133) =
                prefactor_y * *(b + 99 * OS1_S1 + 93) -
                p_over_q * *(b + 141 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 93);
            *(b + 99 * OS1_S1 + 134) =
                prefactor_z * *(b + 99 * OS1_S1 + 93) -
                p_over_q * *(b + 142 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 61);
            *(b + 99 * OS1_S1 + 135) =
                prefactor_x * *(b + 99 * OS1_S1 + 99) -
                p_over_q * *(b + 135 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 71);
            *(b + 99 * OS1_S1 + 136) = prefactor_z * *(b + 99 * OS1_S1 + 94) -
                                       p_over_q * *(b + 142 * OS1_S1 + 94);
            *(b + 99 * OS1_S1 + 137) = prefactor_z * *(b + 99 * OS1_S1 + 95) -
                                       p_over_q * *(b + 142 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 62);
            *(b + 99 * OS1_S1 + 138) =
                prefactor_y * *(b + 99 * OS1_S1 + 97) -
                p_over_q * *(b + 141 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 97) +
                one_over_two_q * *(b + 99 * OS1_S1 + 65);
            *(b + 99 * OS1_S1 + 139) =
                prefactor_y * *(b + 99 * OS1_S1 + 98) -
                p_over_q * *(b + 141 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 98);
            *(b + 99 * OS1_S1 + 140) =
                prefactor_x * *(b + 99 * OS1_S1 + 104) -
                p_over_q * *(b + 135 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 76);
            *(b + 99 * OS1_S1 + 141) =
                prefactor_x * *(b + 99 * OS1_S1 + 105) -
                p_over_q * *(b + 135 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 105) +
                one_over_two_q * *(b + 99 * OS1_S1 + 77);
            *(b + 99 * OS1_S1 + 142) = prefactor_z * *(b + 99 * OS1_S1 + 99) -
                                       p_over_q * *(b + 142 * OS1_S1 + 99);
            *(b + 99 * OS1_S1 + 143) = prefactor_z * *(b + 99 * OS1_S1 + 100) -
                                       p_over_q * *(b + 142 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 66);
            *(b + 99 * OS1_S1 + 144) =
                prefactor_x * *(b + 99 * OS1_S1 + 108) -
                p_over_q * *(b + 135 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 108) +
                one_over_two_q * *(b + 99 * OS1_S1 + 80);
            *(b + 99 * OS1_S1 + 145) =
                prefactor_x * *(b + 99 * OS1_S1 + 109) -
                p_over_q * *(b + 135 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 109) +
                one_over_two_q * *(b + 99 * OS1_S1 + 81);
            *(b + 99 * OS1_S1 + 146) =
                prefactor_y * *(b + 99 * OS1_S1 + 104) -
                p_over_q * *(b + 141 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 104);
            *(b + 99 * OS1_S1 + 147) =
                prefactor_x * *(b + 99 * OS1_S1 + 111) -
                p_over_q * *(b + 135 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 111) +
                one_over_two_q * *(b + 99 * OS1_S1 + 83);
            *(b + 99 * OS1_S1 + 148) =
                prefactor_x * *(b + 99 * OS1_S1 + 112) -
                p_over_q * *(b + 135 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 112);
            *(b + 99 * OS1_S1 + 149) = prefactor_z * *(b + 99 * OS1_S1 + 105) -
                                       p_over_q * *(b + 142 * OS1_S1 + 105);
            *(b + 99 * OS1_S1 + 150) =
                prefactor_x * *(b + 99 * OS1_S1 + 114) -
                p_over_q * *(b + 135 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 114);
            *(b + 99 * OS1_S1 + 151) =
                prefactor_x * *(b + 99 * OS1_S1 + 115) -
                p_over_q * *(b + 135 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 115);
            *(b + 99 * OS1_S1 + 152) =
                prefactor_x * *(b + 99 * OS1_S1 + 116) -
                p_over_q * *(b + 135 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 116);
            *(b + 99 * OS1_S1 + 153) =
                prefactor_x * *(b + 99 * OS1_S1 + 117) -
                p_over_q * *(b + 135 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 117);
            *(b + 99 * OS1_S1 + 154) =
                prefactor_x * *(b + 99 * OS1_S1 + 118) -
                p_over_q * *(b + 135 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 118);
            *(b + 99 * OS1_S1 + 155) =
                prefactor_x * *(b + 99 * OS1_S1 + 119) -
                p_over_q * *(b + 135 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 71 * OS1_S1 + 119);
            *(b + 99 * OS1_S1 + 156) =
                prefactor_y * *(b + 99 * OS1_S1 + 112) -
                p_over_q * *(b + 141 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 99 * OS1_S1 + 77);
            *(b + 99 * OS1_S1 + 157) = prefactor_z * *(b + 99 * OS1_S1 + 112) -
                                       p_over_q * *(b + 142 * OS1_S1 + 112);
            *(b + 99 * OS1_S1 + 158) = prefactor_z * *(b + 99 * OS1_S1 + 113) -
                                       p_over_q * *(b + 142 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 99 * OS1_S1 + 77);
            *(b + 99 * OS1_S1 + 159) =
                prefactor_z * *(b + 99 * OS1_S1 + 114) -
                p_over_q * *(b + 142 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 78);
            *(b + 99 * OS1_S1 + 160) =
                prefactor_z * *(b + 99 * OS1_S1 + 115) -
                p_over_q * *(b + 142 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 99 * OS1_S1 + 79);
            *(b + 99 * OS1_S1 + 161) =
                prefactor_y * *(b + 99 * OS1_S1 + 117) -
                p_over_q * *(b + 141 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 99 * OS1_S1 + 82);
            *(b + 99 * OS1_S1 + 162) =
                prefactor_y * *(b + 99 * OS1_S1 + 118) -
                p_over_q * *(b + 141 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 118) +
                one_over_two_q * *(b + 99 * OS1_S1 + 83);
            *(b + 99 * OS1_S1 + 163) =
                prefactor_y * *(b + 99 * OS1_S1 + 119) -
                p_over_q * *(b + 141 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 66 * OS1_S1 + 119);
            *(b + 99 * OS1_S1 + 164) =
                prefactor_z * *(b + 99 * OS1_S1 + 119) -
                p_over_q * *(b + 142 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 99 * OS1_S1 + 83);
            *(b + 100 * OS1_S1 + 120) =
                prefactor_x * *(b + 100 * OS1_S1 + 84) -
                p_over_q * *(b + 136 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 100 * OS1_S1 + 56);
            *(b + 100 * OS1_S1 + 121) =
                prefactor_y * *(b + 100 * OS1_S1 + 84) -
                p_over_q * *(b + 142 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 84);
            *(b + 100 * OS1_S1 + 122) =
                prefactor_z * *(b + 100 * OS1_S1 + 84) -
                p_over_q * *(b + 143 * OS1_S1 + 84) +
                one_over_two_q * *(b + 66 * OS1_S1 + 84);
            *(b + 100 * OS1_S1 + 123) =
                prefactor_y * *(b + 100 * OS1_S1 + 85) -
                p_over_q * *(b + 142 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 85) +
                one_over_two_q * *(b + 100 * OS1_S1 + 56);
            *(b + 100 * OS1_S1 + 124) =
                prefactor_z * *(b + 100 * OS1_S1 + 85) -
                p_over_q * *(b + 143 * OS1_S1 + 85) +
                one_over_two_q * *(b + 66 * OS1_S1 + 85);
            *(b + 100 * OS1_S1 + 125) =
                prefactor_z * *(b + 100 * OS1_S1 + 86) -
                p_over_q * *(b + 143 * OS1_S1 + 86) +
                one_over_two_q * *(b + 66 * OS1_S1 + 86) +
                one_over_two_q * *(b + 100 * OS1_S1 + 56);
            *(b + 100 * OS1_S1 + 126) =
                prefactor_y * *(b + 100 * OS1_S1 + 87) -
                p_over_q * *(b + 142 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 57);
            *(b + 100 * OS1_S1 + 127) =
                prefactor_z * *(b + 100 * OS1_S1 + 87) -
                p_over_q * *(b + 143 * OS1_S1 + 87) +
                one_over_two_q * *(b + 66 * OS1_S1 + 87);
            *(b + 100 * OS1_S1 + 128) =
                prefactor_y * *(b + 100 * OS1_S1 + 89) -
                p_over_q * *(b + 142 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 89);
            *(b + 100 * OS1_S1 + 129) =
                prefactor_z * *(b + 100 * OS1_S1 + 89) -
                p_over_q * *(b + 143 * OS1_S1 + 89) +
                one_over_two_q * *(b + 66 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 58);
            *(b + 100 * OS1_S1 + 130) =
                prefactor_x * *(b + 100 * OS1_S1 + 94) -
                p_over_q * *(b + 136 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 66);
            *(b + 100 * OS1_S1 + 131) =
                prefactor_z * *(b + 100 * OS1_S1 + 90) -
                p_over_q * *(b + 143 * OS1_S1 + 90) +
                one_over_two_q * *(b + 66 * OS1_S1 + 90);
            *(b + 100 * OS1_S1 + 132) =
                prefactor_z * *(b + 100 * OS1_S1 + 91) -
                p_over_q * *(b + 143 * OS1_S1 + 91) +
                one_over_two_q * *(b + 66 * OS1_S1 + 91) +
                one_over_two_q * *(b + 100 * OS1_S1 + 59);
            *(b + 100 * OS1_S1 + 133) =
                prefactor_y * *(b + 100 * OS1_S1 + 93) -
                p_over_q * *(b + 142 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 93);
            *(b + 100 * OS1_S1 + 134) =
                prefactor_z * *(b + 100 * OS1_S1 + 93) -
                p_over_q * *(b + 143 * OS1_S1 + 93) +
                one_over_two_q * *(b + 66 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 61);
            *(b + 100 * OS1_S1 + 135) =
                prefactor_x * *(b + 100 * OS1_S1 + 99) -
                p_over_q * *(b + 136 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 71);
            *(b + 100 * OS1_S1 + 136) =
                prefactor_z * *(b + 100 * OS1_S1 + 94) -
                p_over_q * *(b + 143 * OS1_S1 + 94) +
                one_over_two_q * *(b + 66 * OS1_S1 + 94);
            *(b + 100 * OS1_S1 + 137) =
                prefactor_z * *(b + 100 * OS1_S1 + 95) -
                p_over_q * *(b + 143 * OS1_S1 + 95) +
                one_over_two_q * *(b + 66 * OS1_S1 + 95) +
                one_over_two_q * *(b + 100 * OS1_S1 + 62);
            *(b + 100 * OS1_S1 + 138) =
                prefactor_y * *(b + 100 * OS1_S1 + 97) -
                p_over_q * *(b + 142 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 97) +
                one_over_two_q * *(b + 100 * OS1_S1 + 65);
            *(b + 100 * OS1_S1 + 139) =
                prefactor_y * *(b + 100 * OS1_S1 + 98) -
                p_over_q * *(b + 142 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 98);
            *(b + 100 * OS1_S1 + 140) =
                prefactor_x * *(b + 100 * OS1_S1 + 104) -
                p_over_q * *(b + 136 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 76);
            *(b + 100 * OS1_S1 + 141) =
                prefactor_x * *(b + 100 * OS1_S1 + 105) -
                p_over_q * *(b + 136 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 105) +
                one_over_two_q * *(b + 100 * OS1_S1 + 77);
            *(b + 100 * OS1_S1 + 142) =
                prefactor_z * *(b + 100 * OS1_S1 + 99) -
                p_over_q * *(b + 143 * OS1_S1 + 99) +
                one_over_two_q * *(b + 66 * OS1_S1 + 99);
            *(b + 100 * OS1_S1 + 143) =
                prefactor_z * *(b + 100 * OS1_S1 + 100) -
                p_over_q * *(b + 143 * OS1_S1 + 100) +
                one_over_two_q * *(b + 66 * OS1_S1 + 100) +
                one_over_two_q * *(b + 100 * OS1_S1 + 66);
            *(b + 100 * OS1_S1 + 144) =
                prefactor_x * *(b + 100 * OS1_S1 + 108) -
                p_over_q * *(b + 136 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 108) +
                one_over_two_q * *(b + 100 * OS1_S1 + 80);
            *(b + 100 * OS1_S1 + 145) =
                prefactor_x * *(b + 100 * OS1_S1 + 109) -
                p_over_q * *(b + 136 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 109) +
                one_over_two_q * *(b + 100 * OS1_S1 + 81);
            *(b + 100 * OS1_S1 + 146) =
                prefactor_y * *(b + 100 * OS1_S1 + 104) -
                p_over_q * *(b + 142 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 104);
            *(b + 100 * OS1_S1 + 147) =
                prefactor_x * *(b + 100 * OS1_S1 + 111) -
                p_over_q * *(b + 136 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 111) +
                one_over_two_q * *(b + 100 * OS1_S1 + 83);
            *(b + 100 * OS1_S1 + 148) =
                prefactor_x * *(b + 100 * OS1_S1 + 112) -
                p_over_q * *(b + 136 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 112);
            *(b + 100 * OS1_S1 + 149) =
                prefactor_z * *(b + 100 * OS1_S1 + 105) -
                p_over_q * *(b + 143 * OS1_S1 + 105) +
                one_over_two_q * *(b + 66 * OS1_S1 + 105);
            *(b + 100 * OS1_S1 + 150) =
                prefactor_x * *(b + 100 * OS1_S1 + 114) -
                p_over_q * *(b + 136 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 114);
            *(b + 100 * OS1_S1 + 151) =
                prefactor_x * *(b + 100 * OS1_S1 + 115) -
                p_over_q * *(b + 136 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 115);
            *(b + 100 * OS1_S1 + 152) =
                prefactor_x * *(b + 100 * OS1_S1 + 116) -
                p_over_q * *(b + 136 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 116);
            *(b + 100 * OS1_S1 + 153) =
                prefactor_x * *(b + 100 * OS1_S1 + 117) -
                p_over_q * *(b + 136 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 117);
            *(b + 100 * OS1_S1 + 154) =
                prefactor_x * *(b + 100 * OS1_S1 + 118) -
                p_over_q * *(b + 136 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 118);
            *(b + 100 * OS1_S1 + 155) =
                prefactor_x * *(b + 100 * OS1_S1 + 119) -
                p_over_q * *(b + 136 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 119);
            *(b + 100 * OS1_S1 + 156) =
                prefactor_y * *(b + 100 * OS1_S1 + 112) -
                p_over_q * *(b + 142 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 100 * OS1_S1 + 77);
            *(b + 100 * OS1_S1 + 157) =
                prefactor_z * *(b + 100 * OS1_S1 + 112) -
                p_over_q * *(b + 143 * OS1_S1 + 112) +
                one_over_two_q * *(b + 66 * OS1_S1 + 112);
            *(b + 100 * OS1_S1 + 158) =
                prefactor_z * *(b + 100 * OS1_S1 + 113) -
                p_over_q * *(b + 143 * OS1_S1 + 113) +
                one_over_two_q * *(b + 66 * OS1_S1 + 113) +
                one_over_two_q * *(b + 100 * OS1_S1 + 77);
            *(b + 100 * OS1_S1 + 159) =
                prefactor_z * *(b + 100 * OS1_S1 + 114) -
                p_over_q * *(b + 143 * OS1_S1 + 114) +
                one_over_two_q * *(b + 66 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 78);
            *(b + 100 * OS1_S1 + 160) =
                prefactor_z * *(b + 100 * OS1_S1 + 115) -
                p_over_q * *(b + 143 * OS1_S1 + 115) +
                one_over_two_q * *(b + 66 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 100 * OS1_S1 + 79);
            *(b + 100 * OS1_S1 + 161) =
                prefactor_y * *(b + 100 * OS1_S1 + 117) -
                p_over_q * *(b + 142 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 100 * OS1_S1 + 82);
            *(b + 100 * OS1_S1 + 162) =
                prefactor_y * *(b + 100 * OS1_S1 + 118) -
                p_over_q * *(b + 142 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 118) +
                one_over_two_q * *(b + 100 * OS1_S1 + 83);
            *(b + 100 * OS1_S1 + 163) =
                prefactor_y * *(b + 100 * OS1_S1 + 119) -
                p_over_q * *(b + 142 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 67 * OS1_S1 + 119);
            *(b + 100 * OS1_S1 + 164) =
                prefactor_z * *(b + 100 * OS1_S1 + 119) -
                p_over_q * *(b + 143 * OS1_S1 + 119) +
                one_over_two_q * *(b + 66 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 100 * OS1_S1 + 83);
            *(b + 101 * OS1_S1 + 120) =
                prefactor_x * *(b + 101 * OS1_S1 + 84) -
                p_over_q * *(b + 137 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 101 * OS1_S1 + 56);
            *(b + 101 * OS1_S1 + 121) =
                prefactor_y * *(b + 101 * OS1_S1 + 84) -
                p_over_q * *(b + 143 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 84);
            *(b + 101 * OS1_S1 + 122) =
                prefactor_z * *(b + 101 * OS1_S1 + 84) -
                p_over_q * *(b + 144 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 84);
            *(b + 101 * OS1_S1 + 123) =
                prefactor_y * *(b + 101 * OS1_S1 + 85) -
                p_over_q * *(b + 143 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 85) +
                one_over_two_q * *(b + 101 * OS1_S1 + 56);
            *(b + 101 * OS1_S1 + 124) =
                prefactor_z * *(b + 101 * OS1_S1 + 85) -
                p_over_q * *(b + 144 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 85);
            *(b + 101 * OS1_S1 + 125) =
                prefactor_z * *(b + 101 * OS1_S1 + 86) -
                p_over_q * *(b + 144 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 86) +
                one_over_two_q * *(b + 101 * OS1_S1 + 56);
            *(b + 101 * OS1_S1 + 126) =
                prefactor_y * *(b + 101 * OS1_S1 + 87) -
                p_over_q * *(b + 143 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 57);
            *(b + 101 * OS1_S1 + 127) =
                prefactor_z * *(b + 101 * OS1_S1 + 87) -
                p_over_q * *(b + 144 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 87);
            *(b + 101 * OS1_S1 + 128) =
                prefactor_y * *(b + 101 * OS1_S1 + 89) -
                p_over_q * *(b + 143 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 89);
            *(b + 101 * OS1_S1 + 129) =
                prefactor_z * *(b + 101 * OS1_S1 + 89) -
                p_over_q * *(b + 144 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 58);
            *(b + 101 * OS1_S1 + 130) =
                prefactor_x * *(b + 101 * OS1_S1 + 94) -
                p_over_q * *(b + 137 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 66);
            *(b + 101 * OS1_S1 + 131) =
                prefactor_z * *(b + 101 * OS1_S1 + 90) -
                p_over_q * *(b + 144 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 90);
            *(b + 101 * OS1_S1 + 132) =
                prefactor_z * *(b + 101 * OS1_S1 + 91) -
                p_over_q * *(b + 144 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 91) +
                one_over_two_q * *(b + 101 * OS1_S1 + 59);
            *(b + 101 * OS1_S1 + 133) =
                prefactor_y * *(b + 101 * OS1_S1 + 93) -
                p_over_q * *(b + 143 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 93);
            *(b + 101 * OS1_S1 + 134) =
                prefactor_z * *(b + 101 * OS1_S1 + 93) -
                p_over_q * *(b + 144 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 61);
            *(b + 101 * OS1_S1 + 135) =
                prefactor_x * *(b + 101 * OS1_S1 + 99) -
                p_over_q * *(b + 137 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 71);
            *(b + 101 * OS1_S1 + 136) =
                prefactor_z * *(b + 101 * OS1_S1 + 94) -
                p_over_q * *(b + 144 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 94);
            *(b + 101 * OS1_S1 + 137) =
                prefactor_z * *(b + 101 * OS1_S1 + 95) -
                p_over_q * *(b + 144 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 95) +
                one_over_two_q * *(b + 101 * OS1_S1 + 62);
            *(b + 101 * OS1_S1 + 138) =
                prefactor_y * *(b + 101 * OS1_S1 + 97) -
                p_over_q * *(b + 143 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 97) +
                one_over_two_q * *(b + 101 * OS1_S1 + 65);
            *(b + 101 * OS1_S1 + 139) =
                prefactor_y * *(b + 101 * OS1_S1 + 98) -
                p_over_q * *(b + 143 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 98);
            *(b + 101 * OS1_S1 + 140) =
                prefactor_x * *(b + 101 * OS1_S1 + 104) -
                p_over_q * *(b + 137 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 76);
            *(b + 101 * OS1_S1 + 141) =
                prefactor_x * *(b + 101 * OS1_S1 + 105) -
                p_over_q * *(b + 137 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 105) +
                one_over_two_q * *(b + 101 * OS1_S1 + 77);
            *(b + 101 * OS1_S1 + 142) =
                prefactor_z * *(b + 101 * OS1_S1 + 99) -
                p_over_q * *(b + 144 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 99);
            *(b + 101 * OS1_S1 + 143) =
                prefactor_z * *(b + 101 * OS1_S1 + 100) -
                p_over_q * *(b + 144 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 100) +
                one_over_two_q * *(b + 101 * OS1_S1 + 66);
            *(b + 101 * OS1_S1 + 144) =
                prefactor_x * *(b + 101 * OS1_S1 + 108) -
                p_over_q * *(b + 137 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 108) +
                one_over_two_q * *(b + 101 * OS1_S1 + 80);
            *(b + 101 * OS1_S1 + 145) =
                prefactor_x * *(b + 101 * OS1_S1 + 109) -
                p_over_q * *(b + 137 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 109) +
                one_over_two_q * *(b + 101 * OS1_S1 + 81);
            *(b + 101 * OS1_S1 + 146) =
                prefactor_y * *(b + 101 * OS1_S1 + 104) -
                p_over_q * *(b + 143 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 104);
            *(b + 101 * OS1_S1 + 147) =
                prefactor_x * *(b + 101 * OS1_S1 + 111) -
                p_over_q * *(b + 137 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 111) +
                one_over_two_q * *(b + 101 * OS1_S1 + 83);
            *(b + 101 * OS1_S1 + 148) =
                prefactor_x * *(b + 101 * OS1_S1 + 112) -
                p_over_q * *(b + 137 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 112);
            *(b + 101 * OS1_S1 + 149) =
                prefactor_z * *(b + 101 * OS1_S1 + 105) -
                p_over_q * *(b + 144 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 105);
            *(b + 101 * OS1_S1 + 150) =
                prefactor_x * *(b + 101 * OS1_S1 + 114) -
                p_over_q * *(b + 137 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 114);
            *(b + 101 * OS1_S1 + 151) =
                prefactor_x * *(b + 101 * OS1_S1 + 115) -
                p_over_q * *(b + 137 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 115);
            *(b + 101 * OS1_S1 + 152) =
                prefactor_x * *(b + 101 * OS1_S1 + 116) -
                p_over_q * *(b + 137 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 116);
            *(b + 101 * OS1_S1 + 153) =
                prefactor_x * *(b + 101 * OS1_S1 + 117) -
                p_over_q * *(b + 137 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 117);
            *(b + 101 * OS1_S1 + 154) =
                prefactor_x * *(b + 101 * OS1_S1 + 118) -
                p_over_q * *(b + 137 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 118);
            *(b + 101 * OS1_S1 + 155) =
                prefactor_x * *(b + 101 * OS1_S1 + 119) -
                p_over_q * *(b + 137 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 73 * OS1_S1 + 119);
            *(b + 101 * OS1_S1 + 156) =
                prefactor_y * *(b + 101 * OS1_S1 + 112) -
                p_over_q * *(b + 143 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 101 * OS1_S1 + 77);
            *(b + 101 * OS1_S1 + 157) =
                prefactor_z * *(b + 101 * OS1_S1 + 112) -
                p_over_q * *(b + 144 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 112);
            *(b + 101 * OS1_S1 + 158) =
                prefactor_z * *(b + 101 * OS1_S1 + 113) -
                p_over_q * *(b + 144 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 113) +
                one_over_two_q * *(b + 101 * OS1_S1 + 77);
            *(b + 101 * OS1_S1 + 159) =
                prefactor_z * *(b + 101 * OS1_S1 + 114) -
                p_over_q * *(b + 144 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 78);
            *(b + 101 * OS1_S1 + 160) =
                prefactor_z * *(b + 101 * OS1_S1 + 115) -
                p_over_q * *(b + 144 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 101 * OS1_S1 + 79);
            *(b + 101 * OS1_S1 + 161) =
                prefactor_y * *(b + 101 * OS1_S1 + 117) -
                p_over_q * *(b + 143 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 101 * OS1_S1 + 82);
            *(b + 101 * OS1_S1 + 162) =
                prefactor_y * *(b + 101 * OS1_S1 + 118) -
                p_over_q * *(b + 143 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 118) +
                one_over_two_q * *(b + 101 * OS1_S1 + 83);
            *(b + 101 * OS1_S1 + 163) =
                prefactor_y * *(b + 101 * OS1_S1 + 119) -
                p_over_q * *(b + 143 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 119);
            *(b + 101 * OS1_S1 + 164) =
                prefactor_z * *(b + 101 * OS1_S1 + 119) -
                p_over_q * *(b + 144 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 67 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 101 * OS1_S1 + 83);
            *(b + 102 * OS1_S1 + 120) =
                prefactor_x * *(b + 102 * OS1_S1 + 84) -
                p_over_q * *(b + 138 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 102 * OS1_S1 + 56);
            *(b + 102 * OS1_S1 + 121) =
                prefactor_y * *(b + 102 * OS1_S1 + 84) -
                p_over_q * *(b + 144 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 84);
            *(b + 102 * OS1_S1 + 122) =
                prefactor_z * *(b + 102 * OS1_S1 + 84) -
                p_over_q * *(b + 145 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 84);
            *(b + 102 * OS1_S1 + 123) =
                prefactor_y * *(b + 102 * OS1_S1 + 85) -
                p_over_q * *(b + 144 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 85) +
                one_over_two_q * *(b + 102 * OS1_S1 + 56);
            *(b + 102 * OS1_S1 + 124) =
                prefactor_y * *(b + 102 * OS1_S1 + 86) -
                p_over_q * *(b + 144 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 86);
            *(b + 102 * OS1_S1 + 125) =
                prefactor_z * *(b + 102 * OS1_S1 + 86) -
                p_over_q * *(b + 145 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 86) +
                one_over_two_q * *(b + 102 * OS1_S1 + 56);
            *(b + 102 * OS1_S1 + 126) =
                prefactor_y * *(b + 102 * OS1_S1 + 87) -
                p_over_q * *(b + 144 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 57);
            *(b + 102 * OS1_S1 + 127) =
                prefactor_z * *(b + 102 * OS1_S1 + 87) -
                p_over_q * *(b + 145 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 87);
            *(b + 102 * OS1_S1 + 128) =
                prefactor_y * *(b + 102 * OS1_S1 + 89) -
                p_over_q * *(b + 144 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 89);
            *(b + 102 * OS1_S1 + 129) =
                prefactor_z * *(b + 102 * OS1_S1 + 89) -
                p_over_q * *(b + 145 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 58);
            *(b + 102 * OS1_S1 + 130) =
                prefactor_y * *(b + 102 * OS1_S1 + 90) -
                p_over_q * *(b + 144 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 59);
            *(b + 102 * OS1_S1 + 131) =
                prefactor_z * *(b + 102 * OS1_S1 + 90) -
                p_over_q * *(b + 145 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 90);
            *(b + 102 * OS1_S1 + 132) =
                prefactor_y * *(b + 102 * OS1_S1 + 92) -
                p_over_q * *(b + 144 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 92) +
                one_over_two_q * *(b + 102 * OS1_S1 + 61);
            *(b + 102 * OS1_S1 + 133) =
                prefactor_y * *(b + 102 * OS1_S1 + 93) -
                p_over_q * *(b + 144 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 93);
            *(b + 102 * OS1_S1 + 134) =
                prefactor_x * *(b + 102 * OS1_S1 + 98) -
                p_over_q * *(b + 138 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 70);
            *(b + 102 * OS1_S1 + 135) =
                prefactor_x * *(b + 102 * OS1_S1 + 99) -
                p_over_q * *(b + 138 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 71);
            *(b + 102 * OS1_S1 + 136) =
                prefactor_z * *(b + 102 * OS1_S1 + 94) -
                p_over_q * *(b + 145 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 94);
            *(b + 102 * OS1_S1 + 137) =
                prefactor_z * *(b + 102 * OS1_S1 + 95) -
                p_over_q * *(b + 145 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 95) +
                one_over_two_q * *(b + 102 * OS1_S1 + 62);
            *(b + 102 * OS1_S1 + 138) =
                prefactor_y * *(b + 102 * OS1_S1 + 97) -
                p_over_q * *(b + 144 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 97) +
                one_over_two_q * *(b + 102 * OS1_S1 + 65);
            *(b + 102 * OS1_S1 + 139) =
                prefactor_y * *(b + 102 * OS1_S1 + 98) -
                p_over_q * *(b + 144 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 98);
            *(b + 102 * OS1_S1 + 140) =
                prefactor_x * *(b + 102 * OS1_S1 + 104) -
                p_over_q * *(b + 138 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 76);
            *(b + 102 * OS1_S1 + 141) =
                prefactor_x * *(b + 102 * OS1_S1 + 105) -
                p_over_q * *(b + 138 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 105) +
                one_over_two_q * *(b + 102 * OS1_S1 + 77);
            *(b + 102 * OS1_S1 + 142) =
                prefactor_z * *(b + 102 * OS1_S1 + 99) -
                p_over_q * *(b + 145 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 99);
            *(b + 102 * OS1_S1 + 143) =
                prefactor_x * *(b + 102 * OS1_S1 + 107) -
                p_over_q * *(b + 138 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 107) +
                one_over_two_q * *(b + 102 * OS1_S1 + 79);
            *(b + 102 * OS1_S1 + 144) =
                prefactor_x * *(b + 102 * OS1_S1 + 108) -
                p_over_q * *(b + 138 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 108) +
                one_over_two_q * *(b + 102 * OS1_S1 + 80);
            *(b + 102 * OS1_S1 + 145) =
                prefactor_y * *(b + 102 * OS1_S1 + 103) -
                p_over_q * *(b + 144 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 103) +
                one_over_two_q * *(b + 102 * OS1_S1 + 70);
            *(b + 102 * OS1_S1 + 146) =
                prefactor_y * *(b + 102 * OS1_S1 + 104) -
                p_over_q * *(b + 144 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 104);
            *(b + 102 * OS1_S1 + 147) =
                prefactor_x * *(b + 102 * OS1_S1 + 111) -
                p_over_q * *(b + 138 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 111) +
                one_over_two_q * *(b + 102 * OS1_S1 + 83);
            *(b + 102 * OS1_S1 + 148) =
                prefactor_x * *(b + 102 * OS1_S1 + 112) -
                p_over_q * *(b + 138 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 112);
            *(b + 102 * OS1_S1 + 149) =
                prefactor_x * *(b + 102 * OS1_S1 + 113) -
                p_over_q * *(b + 138 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 113);
            *(b + 102 * OS1_S1 + 150) =
                prefactor_x * *(b + 102 * OS1_S1 + 114) -
                p_over_q * *(b + 138 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 114);
            *(b + 102 * OS1_S1 + 151) =
                prefactor_x * *(b + 102 * OS1_S1 + 115) -
                p_over_q * *(b + 138 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 115);
            *(b + 102 * OS1_S1 + 152) =
                prefactor_x * *(b + 102 * OS1_S1 + 116) -
                p_over_q * *(b + 138 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 116);
            *(b + 102 * OS1_S1 + 153) =
                prefactor_x * *(b + 102 * OS1_S1 + 117) -
                p_over_q * *(b + 138 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 117);
            *(b + 102 * OS1_S1 + 154) =
                prefactor_y * *(b + 102 * OS1_S1 + 111) -
                p_over_q * *(b + 144 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 111);
            *(b + 102 * OS1_S1 + 155) =
                prefactor_x * *(b + 102 * OS1_S1 + 119) -
                p_over_q * *(b + 138 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 74 * OS1_S1 + 119);
            *(b + 102 * OS1_S1 + 156) =
                prefactor_y * *(b + 102 * OS1_S1 + 112) -
                p_over_q * *(b + 144 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 102 * OS1_S1 + 77);
            *(b + 102 * OS1_S1 + 157) =
                prefactor_z * *(b + 102 * OS1_S1 + 112) -
                p_over_q * *(b + 145 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 112);
            *(b + 102 * OS1_S1 + 158) =
                prefactor_z * *(b + 102 * OS1_S1 + 113) -
                p_over_q * *(b + 145 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 113) +
                one_over_two_q * *(b + 102 * OS1_S1 + 77);
            *(b + 102 * OS1_S1 + 159) =
                prefactor_z * *(b + 102 * OS1_S1 + 114) -
                p_over_q * *(b + 145 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 78);
            *(b + 102 * OS1_S1 + 160) =
                prefactor_y * *(b + 102 * OS1_S1 + 116) -
                p_over_q * *(b + 144 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 102 * OS1_S1 + 81);
            *(b + 102 * OS1_S1 + 161) =
                prefactor_y * *(b + 102 * OS1_S1 + 117) -
                p_over_q * *(b + 144 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 102 * OS1_S1 + 82);
            *(b + 102 * OS1_S1 + 162) =
                prefactor_y * *(b + 102 * OS1_S1 + 118) -
                p_over_q * *(b + 144 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 118) +
                one_over_two_q * *(b + 102 * OS1_S1 + 83);
            *(b + 102 * OS1_S1 + 163) =
                prefactor_y * *(b + 102 * OS1_S1 + 119) -
                p_over_q * *(b + 144 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 69 * OS1_S1 + 119);
            *(b + 102 * OS1_S1 + 164) =
                prefactor_z * *(b + 102 * OS1_S1 + 119) -
                p_over_q * *(b + 145 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 68 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 102 * OS1_S1 + 83);
            *(b + 103 * OS1_S1 + 120) =
                prefactor_x * *(b + 103 * OS1_S1 + 84) -
                p_over_q * *(b + 139 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 103 * OS1_S1 + 56);
            *(b + 103 * OS1_S1 + 121) =
                prefactor_y * *(b + 103 * OS1_S1 + 84) -
                p_over_q * *(b + 145 * OS1_S1 + 84) +
                one_over_two_q * *(b + 70 * OS1_S1 + 84);
            *(b + 103 * OS1_S1 + 122) =
                prefactor_z * *(b + 103 * OS1_S1 + 84) -
                p_over_q * *(b + 146 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 84);
            *(b + 103 * OS1_S1 + 123) =
                prefactor_y * *(b + 103 * OS1_S1 + 85) -
                p_over_q * *(b + 145 * OS1_S1 + 85) +
                one_over_two_q * *(b + 70 * OS1_S1 + 85) +
                one_over_two_q * *(b + 103 * OS1_S1 + 56);
            *(b + 103 * OS1_S1 + 124) =
                prefactor_y * *(b + 103 * OS1_S1 + 86) -
                p_over_q * *(b + 145 * OS1_S1 + 86) +
                one_over_two_q * *(b + 70 * OS1_S1 + 86);
            *(b + 103 * OS1_S1 + 125) =
                prefactor_z * *(b + 103 * OS1_S1 + 86) -
                p_over_q * *(b + 146 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 86) +
                one_over_two_q * *(b + 103 * OS1_S1 + 56);
            *(b + 103 * OS1_S1 + 126) =
                prefactor_y * *(b + 103 * OS1_S1 + 87) -
                p_over_q * *(b + 145 * OS1_S1 + 87) +
                one_over_two_q * *(b + 70 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 57);
            *(b + 103 * OS1_S1 + 127) =
                prefactor_z * *(b + 103 * OS1_S1 + 87) -
                p_over_q * *(b + 146 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 87);
            *(b + 103 * OS1_S1 + 128) =
                prefactor_y * *(b + 103 * OS1_S1 + 89) -
                p_over_q * *(b + 145 * OS1_S1 + 89) +
                one_over_two_q * *(b + 70 * OS1_S1 + 89);
            *(b + 103 * OS1_S1 + 129) =
                prefactor_z * *(b + 103 * OS1_S1 + 89) -
                p_over_q * *(b + 146 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 58);
            *(b + 103 * OS1_S1 + 130) =
                prefactor_y * *(b + 103 * OS1_S1 + 90) -
                p_over_q * *(b + 145 * OS1_S1 + 90) +
                one_over_two_q * *(b + 70 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 59);
            *(b + 103 * OS1_S1 + 131) =
                prefactor_z * *(b + 103 * OS1_S1 + 90) -
                p_over_q * *(b + 146 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 90);
            *(b + 103 * OS1_S1 + 132) =
                prefactor_y * *(b + 103 * OS1_S1 + 92) -
                p_over_q * *(b + 145 * OS1_S1 + 92) +
                one_over_two_q * *(b + 70 * OS1_S1 + 92) +
                one_over_two_q * *(b + 103 * OS1_S1 + 61);
            *(b + 103 * OS1_S1 + 133) =
                prefactor_y * *(b + 103 * OS1_S1 + 93) -
                p_over_q * *(b + 145 * OS1_S1 + 93) +
                one_over_two_q * *(b + 70 * OS1_S1 + 93);
            *(b + 103 * OS1_S1 + 134) =
                prefactor_x * *(b + 103 * OS1_S1 + 98) -
                p_over_q * *(b + 139 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 70);
            *(b + 103 * OS1_S1 + 135) =
                prefactor_x * *(b + 103 * OS1_S1 + 99) -
                p_over_q * *(b + 139 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 71);
            *(b + 103 * OS1_S1 + 136) =
                prefactor_z * *(b + 103 * OS1_S1 + 94) -
                p_over_q * *(b + 146 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 94);
            *(b + 103 * OS1_S1 + 137) =
                prefactor_z * *(b + 103 * OS1_S1 + 95) -
                p_over_q * *(b + 146 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 95) +
                one_over_two_q * *(b + 103 * OS1_S1 + 62);
            *(b + 103 * OS1_S1 + 138) =
                prefactor_y * *(b + 103 * OS1_S1 + 97) -
                p_over_q * *(b + 145 * OS1_S1 + 97) +
                one_over_two_q * *(b + 70 * OS1_S1 + 97) +
                one_over_two_q * *(b + 103 * OS1_S1 + 65);
            *(b + 103 * OS1_S1 + 139) =
                prefactor_y * *(b + 103 * OS1_S1 + 98) -
                p_over_q * *(b + 145 * OS1_S1 + 98) +
                one_over_two_q * *(b + 70 * OS1_S1 + 98);
            *(b + 103 * OS1_S1 + 140) =
                prefactor_x * *(b + 103 * OS1_S1 + 104) -
                p_over_q * *(b + 139 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 76);
            *(b + 103 * OS1_S1 + 141) =
                prefactor_x * *(b + 103 * OS1_S1 + 105) -
                p_over_q * *(b + 139 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 105) +
                one_over_two_q * *(b + 103 * OS1_S1 + 77);
            *(b + 103 * OS1_S1 + 142) =
                prefactor_z * *(b + 103 * OS1_S1 + 99) -
                p_over_q * *(b + 146 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 99);
            *(b + 103 * OS1_S1 + 143) =
                prefactor_x * *(b + 103 * OS1_S1 + 107) -
                p_over_q * *(b + 139 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 107) +
                one_over_two_q * *(b + 103 * OS1_S1 + 79);
            *(b + 103 * OS1_S1 + 144) =
                prefactor_x * *(b + 103 * OS1_S1 + 108) -
                p_over_q * *(b + 139 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 108) +
                one_over_two_q * *(b + 103 * OS1_S1 + 80);
            *(b + 103 * OS1_S1 + 145) =
                prefactor_y * *(b + 103 * OS1_S1 + 103) -
                p_over_q * *(b + 145 * OS1_S1 + 103) +
                one_over_two_q * *(b + 70 * OS1_S1 + 103) +
                one_over_two_q * *(b + 103 * OS1_S1 + 70);
            *(b + 103 * OS1_S1 + 146) =
                prefactor_y * *(b + 103 * OS1_S1 + 104) -
                p_over_q * *(b + 145 * OS1_S1 + 104) +
                one_over_two_q * *(b + 70 * OS1_S1 + 104);
            *(b + 103 * OS1_S1 + 147) =
                prefactor_x * *(b + 103 * OS1_S1 + 111) -
                p_over_q * *(b + 139 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 111) +
                one_over_two_q * *(b + 103 * OS1_S1 + 83);
            *(b + 103 * OS1_S1 + 148) =
                prefactor_x * *(b + 103 * OS1_S1 + 112) -
                p_over_q * *(b + 139 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 112);
            *(b + 103 * OS1_S1 + 149) =
                prefactor_x * *(b + 103 * OS1_S1 + 113) -
                p_over_q * *(b + 139 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 113);
            *(b + 103 * OS1_S1 + 150) =
                prefactor_x * *(b + 103 * OS1_S1 + 114) -
                p_over_q * *(b + 139 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 114);
            *(b + 103 * OS1_S1 + 151) =
                prefactor_x * *(b + 103 * OS1_S1 + 115) -
                p_over_q * *(b + 139 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 115);
            *(b + 103 * OS1_S1 + 152) =
                prefactor_x * *(b + 103 * OS1_S1 + 116) -
                p_over_q * *(b + 139 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 116);
            *(b + 103 * OS1_S1 + 153) =
                prefactor_x * *(b + 103 * OS1_S1 + 117) -
                p_over_q * *(b + 139 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 117);
            *(b + 103 * OS1_S1 + 154) =
                prefactor_y * *(b + 103 * OS1_S1 + 111) -
                p_over_q * *(b + 145 * OS1_S1 + 111) +
                one_over_two_q * *(b + 70 * OS1_S1 + 111);
            *(b + 103 * OS1_S1 + 155) =
                prefactor_x * *(b + 103 * OS1_S1 + 119) -
                p_over_q * *(b + 139 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 119);
            *(b + 103 * OS1_S1 + 156) =
                prefactor_y * *(b + 103 * OS1_S1 + 112) -
                p_over_q * *(b + 145 * OS1_S1 + 112) +
                one_over_two_q * *(b + 70 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 103 * OS1_S1 + 77);
            *(b + 103 * OS1_S1 + 157) =
                prefactor_z * *(b + 103 * OS1_S1 + 112) -
                p_over_q * *(b + 146 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 112);
            *(b + 103 * OS1_S1 + 158) =
                prefactor_z * *(b + 103 * OS1_S1 + 113) -
                p_over_q * *(b + 146 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 113) +
                one_over_two_q * *(b + 103 * OS1_S1 + 77);
            *(b + 103 * OS1_S1 + 159) =
                prefactor_z * *(b + 103 * OS1_S1 + 114) -
                p_over_q * *(b + 146 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 78);
            *(b + 103 * OS1_S1 + 160) =
                prefactor_y * *(b + 103 * OS1_S1 + 116) -
                p_over_q * *(b + 145 * OS1_S1 + 116) +
                one_over_two_q * *(b + 70 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 103 * OS1_S1 + 81);
            *(b + 103 * OS1_S1 + 161) =
                prefactor_y * *(b + 103 * OS1_S1 + 117) -
                p_over_q * *(b + 145 * OS1_S1 + 117) +
                one_over_two_q * *(b + 70 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 103 * OS1_S1 + 82);
            *(b + 103 * OS1_S1 + 162) =
                prefactor_y * *(b + 103 * OS1_S1 + 118) -
                p_over_q * *(b + 145 * OS1_S1 + 118) +
                one_over_two_q * *(b + 70 * OS1_S1 + 118) +
                one_over_two_q * *(b + 103 * OS1_S1 + 83);
            *(b + 103 * OS1_S1 + 163) =
                prefactor_y * *(b + 103 * OS1_S1 + 119) -
                p_over_q * *(b + 145 * OS1_S1 + 119) +
                one_over_two_q * *(b + 70 * OS1_S1 + 119);
            *(b + 103 * OS1_S1 + 164) =
                prefactor_z * *(b + 103 * OS1_S1 + 119) -
                p_over_q * *(b + 146 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 69 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 103 * OS1_S1 + 83);
            *(b + 104 * OS1_S1 + 120) =
                prefactor_x * *(b + 104 * OS1_S1 + 84) -
                p_over_q * *(b + 140 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 104 * OS1_S1 + 56);
            *(b + 104 * OS1_S1 + 121) = prefactor_y * *(b + 104 * OS1_S1 + 84) -
                                        p_over_q * *(b + 146 * OS1_S1 + 84);
            *(b + 104 * OS1_S1 + 122) =
                prefactor_z * *(b + 104 * OS1_S1 + 84) -
                p_over_q * *(b + 147 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 84);
            *(b + 104 * OS1_S1 + 123) =
                prefactor_y * *(b + 104 * OS1_S1 + 85) -
                p_over_q * *(b + 146 * OS1_S1 + 85) +
                one_over_two_q * *(b + 104 * OS1_S1 + 56);
            *(b + 104 * OS1_S1 + 124) = prefactor_y * *(b + 104 * OS1_S1 + 86) -
                                        p_over_q * *(b + 146 * OS1_S1 + 86);
            *(b + 104 * OS1_S1 + 125) =
                prefactor_z * *(b + 104 * OS1_S1 + 86) -
                p_over_q * *(b + 147 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 86) +
                one_over_two_q * *(b + 104 * OS1_S1 + 56);
            *(b + 104 * OS1_S1 + 126) =
                prefactor_y * *(b + 104 * OS1_S1 + 87) -
                p_over_q * *(b + 146 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 57);
            *(b + 104 * OS1_S1 + 127) =
                prefactor_z * *(b + 104 * OS1_S1 + 87) -
                p_over_q * *(b + 147 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 87);
            *(b + 104 * OS1_S1 + 128) = prefactor_y * *(b + 104 * OS1_S1 + 89) -
                                        p_over_q * *(b + 146 * OS1_S1 + 89);
            *(b + 104 * OS1_S1 + 129) =
                prefactor_z * *(b + 104 * OS1_S1 + 89) -
                p_over_q * *(b + 147 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 58);
            *(b + 104 * OS1_S1 + 130) =
                prefactor_y * *(b + 104 * OS1_S1 + 90) -
                p_over_q * *(b + 146 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 59);
            *(b + 104 * OS1_S1 + 131) =
                prefactor_z * *(b + 104 * OS1_S1 + 90) -
                p_over_q * *(b + 147 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 90);
            *(b + 104 * OS1_S1 + 132) =
                prefactor_y * *(b + 104 * OS1_S1 + 92) -
                p_over_q * *(b + 146 * OS1_S1 + 92) +
                one_over_two_q * *(b + 104 * OS1_S1 + 61);
            *(b + 104 * OS1_S1 + 133) = prefactor_y * *(b + 104 * OS1_S1 + 93) -
                                        p_over_q * *(b + 146 * OS1_S1 + 93);
            *(b + 104 * OS1_S1 + 134) =
                prefactor_x * *(b + 104 * OS1_S1 + 98) -
                p_over_q * *(b + 140 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 70);
            *(b + 104 * OS1_S1 + 135) =
                prefactor_x * *(b + 104 * OS1_S1 + 99) -
                p_over_q * *(b + 140 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 71);
            *(b + 104 * OS1_S1 + 136) =
                prefactor_z * *(b + 104 * OS1_S1 + 94) -
                p_over_q * *(b + 147 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 94);
            *(b + 104 * OS1_S1 + 137) =
                prefactor_z * *(b + 104 * OS1_S1 + 95) -
                p_over_q * *(b + 147 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 95) +
                one_over_two_q * *(b + 104 * OS1_S1 + 62);
            *(b + 104 * OS1_S1 + 138) =
                prefactor_y * *(b + 104 * OS1_S1 + 97) -
                p_over_q * *(b + 146 * OS1_S1 + 97) +
                one_over_two_q * *(b + 104 * OS1_S1 + 65);
            *(b + 104 * OS1_S1 + 139) = prefactor_y * *(b + 104 * OS1_S1 + 98) -
                                        p_over_q * *(b + 146 * OS1_S1 + 98);
            *(b + 104 * OS1_S1 + 140) =
                prefactor_x * *(b + 104 * OS1_S1 + 104) -
                p_over_q * *(b + 140 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 76);
            *(b + 104 * OS1_S1 + 141) =
                prefactor_x * *(b + 104 * OS1_S1 + 105) -
                p_over_q * *(b + 140 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 105) +
                one_over_two_q * *(b + 104 * OS1_S1 + 77);
            *(b + 104 * OS1_S1 + 142) =
                prefactor_z * *(b + 104 * OS1_S1 + 99) -
                p_over_q * *(b + 147 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 99);
            *(b + 104 * OS1_S1 + 143) =
                prefactor_x * *(b + 104 * OS1_S1 + 107) -
                p_over_q * *(b + 140 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 107) +
                one_over_two_q * *(b + 104 * OS1_S1 + 79);
            *(b + 104 * OS1_S1 + 144) =
                prefactor_x * *(b + 104 * OS1_S1 + 108) -
                p_over_q * *(b + 140 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 108) +
                one_over_two_q * *(b + 104 * OS1_S1 + 80);
            *(b + 104 * OS1_S1 + 145) =
                prefactor_y * *(b + 104 * OS1_S1 + 103) -
                p_over_q * *(b + 146 * OS1_S1 + 103) +
                one_over_two_q * *(b + 104 * OS1_S1 + 70);
            *(b + 104 * OS1_S1 + 146) =
                prefactor_y * *(b + 104 * OS1_S1 + 104) -
                p_over_q * *(b + 146 * OS1_S1 + 104);
            *(b + 104 * OS1_S1 + 147) =
                prefactor_x * *(b + 104 * OS1_S1 + 111) -
                p_over_q * *(b + 140 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 111) +
                one_over_two_q * *(b + 104 * OS1_S1 + 83);
            *(b + 104 * OS1_S1 + 148) =
                prefactor_x * *(b + 104 * OS1_S1 + 112) -
                p_over_q * *(b + 140 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 112);
            *(b + 104 * OS1_S1 + 149) =
                prefactor_x * *(b + 104 * OS1_S1 + 113) -
                p_over_q * *(b + 140 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 113);
            *(b + 104 * OS1_S1 + 150) =
                prefactor_x * *(b + 104 * OS1_S1 + 114) -
                p_over_q * *(b + 140 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 114);
            *(b + 104 * OS1_S1 + 151) =
                prefactor_x * *(b + 104 * OS1_S1 + 115) -
                p_over_q * *(b + 140 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 115);
            *(b + 104 * OS1_S1 + 152) =
                prefactor_x * *(b + 104 * OS1_S1 + 116) -
                p_over_q * *(b + 140 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 116);
            *(b + 104 * OS1_S1 + 153) =
                prefactor_x * *(b + 104 * OS1_S1 + 117) -
                p_over_q * *(b + 140 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 117);
            *(b + 104 * OS1_S1 + 154) =
                prefactor_y * *(b + 104 * OS1_S1 + 111) -
                p_over_q * *(b + 146 * OS1_S1 + 111);
            *(b + 104 * OS1_S1 + 155) =
                prefactor_x * *(b + 104 * OS1_S1 + 119) -
                p_over_q * *(b + 140 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 76 * OS1_S1 + 119);
            *(b + 104 * OS1_S1 + 156) =
                prefactor_y * *(b + 104 * OS1_S1 + 112) -
                p_over_q * *(b + 146 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 104 * OS1_S1 + 77);
            *(b + 104 * OS1_S1 + 157) =
                prefactor_z * *(b + 104 * OS1_S1 + 112) -
                p_over_q * *(b + 147 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 112);
            *(b + 104 * OS1_S1 + 158) =
                prefactor_z * *(b + 104 * OS1_S1 + 113) -
                p_over_q * *(b + 147 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 113) +
                one_over_two_q * *(b + 104 * OS1_S1 + 77);
            *(b + 104 * OS1_S1 + 159) =
                prefactor_z * *(b + 104 * OS1_S1 + 114) -
                p_over_q * *(b + 147 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 78);
            *(b + 104 * OS1_S1 + 160) =
                prefactor_y * *(b + 104 * OS1_S1 + 116) -
                p_over_q * *(b + 146 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 104 * OS1_S1 + 81);
            *(b + 104 * OS1_S1 + 161) =
                prefactor_y * *(b + 104 * OS1_S1 + 117) -
                p_over_q * *(b + 146 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 104 * OS1_S1 + 82);
            *(b + 104 * OS1_S1 + 162) =
                prefactor_y * *(b + 104 * OS1_S1 + 118) -
                p_over_q * *(b + 146 * OS1_S1 + 118) +
                one_over_two_q * *(b + 104 * OS1_S1 + 83);
            *(b + 104 * OS1_S1 + 163) =
                prefactor_y * *(b + 104 * OS1_S1 + 119) -
                p_over_q * *(b + 146 * OS1_S1 + 119);
            *(b + 104 * OS1_S1 + 164) =
                prefactor_z * *(b + 104 * OS1_S1 + 119) -
                p_over_q * *(b + 147 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 70 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 104 * OS1_S1 + 83);
            *(b + 105 * OS1_S1 + 120) =
                prefactor_x * *(b + 105 * OS1_S1 + 84) -
                p_over_q * *(b + 141 * OS1_S1 + 84) +
                one_over_two_q * *(b + 77 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 56);
            *(b + 105 * OS1_S1 + 121) =
                prefactor_y * *(b + 105 * OS1_S1 + 84) -
                p_over_q * *(b + 148 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 84);
            *(b + 105 * OS1_S1 + 122) = prefactor_z * *(b + 105 * OS1_S1 + 84) -
                                        p_over_q * *(b + 149 * OS1_S1 + 84);
            *(b + 105 * OS1_S1 + 123) =
                prefactor_y * *(b + 105 * OS1_S1 + 85) -
                p_over_q * *(b + 148 * OS1_S1 + 85) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 85) +
                one_over_two_q * *(b + 105 * OS1_S1 + 56);
            *(b + 105 * OS1_S1 + 124) = prefactor_z * *(b + 105 * OS1_S1 + 85) -
                                        p_over_q * *(b + 149 * OS1_S1 + 85);
            *(b + 105 * OS1_S1 + 125) =
                prefactor_z * *(b + 105 * OS1_S1 + 86) -
                p_over_q * *(b + 149 * OS1_S1 + 86) +
                one_over_two_q * *(b + 105 * OS1_S1 + 56);
            *(b + 105 * OS1_S1 + 126) =
                prefactor_y * *(b + 105 * OS1_S1 + 87) -
                p_over_q * *(b + 148 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 57);
            *(b + 105 * OS1_S1 + 127) = prefactor_z * *(b + 105 * OS1_S1 + 87) -
                                        p_over_q * *(b + 149 * OS1_S1 + 87);
            *(b + 105 * OS1_S1 + 128) =
                prefactor_y * *(b + 105 * OS1_S1 + 89) -
                p_over_q * *(b + 148 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 89);
            *(b + 105 * OS1_S1 + 129) =
                prefactor_z * *(b + 105 * OS1_S1 + 89) -
                p_over_q * *(b + 149 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 58);
            *(b + 105 * OS1_S1 + 130) =
                prefactor_x * *(b + 105 * OS1_S1 + 94) -
                p_over_q * *(b + 141 * OS1_S1 + 94) +
                one_over_two_q * *(b + 77 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 105 * OS1_S1 + 66);
            *(b + 105 * OS1_S1 + 131) = prefactor_z * *(b + 105 * OS1_S1 + 90) -
                                        p_over_q * *(b + 149 * OS1_S1 + 90);
            *(b + 105 * OS1_S1 + 132) =
                prefactor_z * *(b + 105 * OS1_S1 + 91) -
                p_over_q * *(b + 149 * OS1_S1 + 91) +
                one_over_two_q * *(b + 105 * OS1_S1 + 59);
            *(b + 105 * OS1_S1 + 133) =
                prefactor_y * *(b + 105 * OS1_S1 + 93) -
                p_over_q * *(b + 148 * OS1_S1 + 93) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 93);
            *(b + 105 * OS1_S1 + 134) =
                prefactor_z * *(b + 105 * OS1_S1 + 93) -
                p_over_q * *(b + 149 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 105 * OS1_S1 + 61);
            *(b + 105 * OS1_S1 + 135) =
                prefactor_x * *(b + 105 * OS1_S1 + 99) -
                p_over_q * *(b + 141 * OS1_S1 + 99) +
                one_over_two_q * *(b + 77 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 71);
            *(b + 105 * OS1_S1 + 136) = prefactor_z * *(b + 105 * OS1_S1 + 94) -
                                        p_over_q * *(b + 149 * OS1_S1 + 94);
            *(b + 105 * OS1_S1 + 137) =
                prefactor_z * *(b + 105 * OS1_S1 + 95) -
                p_over_q * *(b + 149 * OS1_S1 + 95) +
                one_over_two_q * *(b + 105 * OS1_S1 + 62);
            *(b + 105 * OS1_S1 + 138) =
                prefactor_y * *(b + 105 * OS1_S1 + 97) -
                p_over_q * *(b + 148 * OS1_S1 + 97) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 97) +
                one_over_two_q * *(b + 105 * OS1_S1 + 65);
            *(b + 105 * OS1_S1 + 139) =
                prefactor_y * *(b + 105 * OS1_S1 + 98) -
                p_over_q * *(b + 148 * OS1_S1 + 98) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 98);
            *(b + 105 * OS1_S1 + 140) =
                prefactor_x * *(b + 105 * OS1_S1 + 104) -
                p_over_q * *(b + 141 * OS1_S1 + 104) +
                one_over_two_q * *(b + 77 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 76);
            *(b + 105 * OS1_S1 + 141) =
                prefactor_x * *(b + 105 * OS1_S1 + 105) -
                p_over_q * *(b + 141 * OS1_S1 + 105) +
                one_over_two_q * *(b + 77 * OS1_S1 + 105) +
                one_over_two_q * *(b + 105 * OS1_S1 + 77);
            *(b + 105 * OS1_S1 + 142) = prefactor_z * *(b + 105 * OS1_S1 + 99) -
                                        p_over_q * *(b + 149 * OS1_S1 + 99);
            *(b + 105 * OS1_S1 + 143) =
                prefactor_z * *(b + 105 * OS1_S1 + 100) -
                p_over_q * *(b + 149 * OS1_S1 + 100) +
                one_over_two_q * *(b + 105 * OS1_S1 + 66);
            *(b + 105 * OS1_S1 + 144) =
                prefactor_x * *(b + 105 * OS1_S1 + 108) -
                p_over_q * *(b + 141 * OS1_S1 + 108) +
                one_over_two_q * *(b + 77 * OS1_S1 + 108) +
                one_over_two_q * *(b + 105 * OS1_S1 + 80);
            *(b + 105 * OS1_S1 + 145) =
                prefactor_x * *(b + 105 * OS1_S1 + 109) -
                p_over_q * *(b + 141 * OS1_S1 + 109) +
                one_over_two_q * *(b + 77 * OS1_S1 + 109) +
                one_over_two_q * *(b + 105 * OS1_S1 + 81);
            *(b + 105 * OS1_S1 + 146) =
                prefactor_y * *(b + 105 * OS1_S1 + 104) -
                p_over_q * *(b + 148 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 104);
            *(b + 105 * OS1_S1 + 147) =
                prefactor_x * *(b + 105 * OS1_S1 + 111) -
                p_over_q * *(b + 141 * OS1_S1 + 111) +
                one_over_two_q * *(b + 77 * OS1_S1 + 111) +
                one_over_two_q * *(b + 105 * OS1_S1 + 83);
            *(b + 105 * OS1_S1 + 148) =
                prefactor_x * *(b + 105 * OS1_S1 + 112) -
                p_over_q * *(b + 141 * OS1_S1 + 112) +
                one_over_two_q * *(b + 77 * OS1_S1 + 112);
            *(b + 105 * OS1_S1 + 149) =
                prefactor_z * *(b + 105 * OS1_S1 + 105) -
                p_over_q * *(b + 149 * OS1_S1 + 105);
            *(b + 105 * OS1_S1 + 150) =
                prefactor_x * *(b + 105 * OS1_S1 + 114) -
                p_over_q * *(b + 141 * OS1_S1 + 114) +
                one_over_two_q * *(b + 77 * OS1_S1 + 114);
            *(b + 105 * OS1_S1 + 151) =
                prefactor_x * *(b + 105 * OS1_S1 + 115) -
                p_over_q * *(b + 141 * OS1_S1 + 115) +
                one_over_two_q * *(b + 77 * OS1_S1 + 115);
            *(b + 105 * OS1_S1 + 152) =
                prefactor_x * *(b + 105 * OS1_S1 + 116) -
                p_over_q * *(b + 141 * OS1_S1 + 116) +
                one_over_two_q * *(b + 77 * OS1_S1 + 116);
            *(b + 105 * OS1_S1 + 153) =
                prefactor_x * *(b + 105 * OS1_S1 + 117) -
                p_over_q * *(b + 141 * OS1_S1 + 117) +
                one_over_two_q * *(b + 77 * OS1_S1 + 117);
            *(b + 105 * OS1_S1 + 154) =
                prefactor_x * *(b + 105 * OS1_S1 + 118) -
                p_over_q * *(b + 141 * OS1_S1 + 118) +
                one_over_two_q * *(b + 77 * OS1_S1 + 118);
            *(b + 105 * OS1_S1 + 155) =
                prefactor_x * *(b + 105 * OS1_S1 + 119) -
                p_over_q * *(b + 141 * OS1_S1 + 119) +
                one_over_two_q * *(b + 77 * OS1_S1 + 119);
            *(b + 105 * OS1_S1 + 156) =
                prefactor_y * *(b + 105 * OS1_S1 + 112) -
                p_over_q * *(b + 148 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 77);
            *(b + 105 * OS1_S1 + 157) =
                prefactor_z * *(b + 105 * OS1_S1 + 112) -
                p_over_q * *(b + 149 * OS1_S1 + 112);
            *(b + 105 * OS1_S1 + 158) =
                prefactor_z * *(b + 105 * OS1_S1 + 113) -
                p_over_q * *(b + 149 * OS1_S1 + 113) +
                one_over_two_q * *(b + 105 * OS1_S1 + 77);
            *(b + 105 * OS1_S1 + 159) =
                prefactor_z * *(b + 105 * OS1_S1 + 114) -
                p_over_q * *(b + 149 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 78);
            *(b + 105 * OS1_S1 + 160) =
                prefactor_z * *(b + 105 * OS1_S1 + 115) -
                p_over_q * *(b + 149 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 105 * OS1_S1 + 79);
            *(b + 105 * OS1_S1 + 161) =
                prefactor_y * *(b + 105 * OS1_S1 + 117) -
                p_over_q * *(b + 148 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 105 * OS1_S1 + 82);
            *(b + 105 * OS1_S1 + 162) =
                prefactor_y * *(b + 105 * OS1_S1 + 118) -
                p_over_q * *(b + 148 * OS1_S1 + 118) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 118) +
                one_over_two_q * *(b + 105 * OS1_S1 + 83);
            *(b + 105 * OS1_S1 + 163) =
                prefactor_y * *(b + 105 * OS1_S1 + 119) -
                p_over_q * *(b + 148 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 71 * OS1_S1 + 119);
            *(b + 105 * OS1_S1 + 164) =
                prefactor_z * *(b + 105 * OS1_S1 + 119) -
                p_over_q * *(b + 149 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 105 * OS1_S1 + 83);
            *(b + 106 * OS1_S1 + 120) =
                prefactor_x * *(b + 106 * OS1_S1 + 84) -
                p_over_q * *(b + 142 * OS1_S1 + 84) +
                one_over_two_q * *(b + 78 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 106 * OS1_S1 + 56);
            *(b + 106 * OS1_S1 + 121) =
                prefactor_y * *(b + 106 * OS1_S1 + 84) -
                p_over_q * *(b + 149 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 84);
            *(b + 106 * OS1_S1 + 122) =
                prefactor_z * *(b + 106 * OS1_S1 + 84) -
                p_over_q * *(b + 150 * OS1_S1 + 84) +
                one_over_two_q * *(b + 71 * OS1_S1 + 84);
            *(b + 106 * OS1_S1 + 123) =
                prefactor_y * *(b + 106 * OS1_S1 + 85) -
                p_over_q * *(b + 149 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 85) +
                one_over_two_q * *(b + 106 * OS1_S1 + 56);
            *(b + 106 * OS1_S1 + 124) =
                prefactor_z * *(b + 106 * OS1_S1 + 85) -
                p_over_q * *(b + 150 * OS1_S1 + 85) +
                one_over_two_q * *(b + 71 * OS1_S1 + 85);
            *(b + 106 * OS1_S1 + 125) =
                prefactor_z * *(b + 106 * OS1_S1 + 86) -
                p_over_q * *(b + 150 * OS1_S1 + 86) +
                one_over_two_q * *(b + 71 * OS1_S1 + 86) +
                one_over_two_q * *(b + 106 * OS1_S1 + 56);
            *(b + 106 * OS1_S1 + 126) =
                prefactor_y * *(b + 106 * OS1_S1 + 87) -
                p_over_q * *(b + 149 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 57);
            *(b + 106 * OS1_S1 + 127) =
                prefactor_z * *(b + 106 * OS1_S1 + 87) -
                p_over_q * *(b + 150 * OS1_S1 + 87) +
                one_over_two_q * *(b + 71 * OS1_S1 + 87);
            *(b + 106 * OS1_S1 + 128) =
                prefactor_y * *(b + 106 * OS1_S1 + 89) -
                p_over_q * *(b + 149 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 89);
            *(b + 106 * OS1_S1 + 129) =
                prefactor_z * *(b + 106 * OS1_S1 + 89) -
                p_over_q * *(b + 150 * OS1_S1 + 89) +
                one_over_two_q * *(b + 71 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 58);
            *(b + 106 * OS1_S1 + 130) =
                prefactor_x * *(b + 106 * OS1_S1 + 94) -
                p_over_q * *(b + 142 * OS1_S1 + 94) +
                one_over_two_q * *(b + 78 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 106 * OS1_S1 + 66);
            *(b + 106 * OS1_S1 + 131) =
                prefactor_z * *(b + 106 * OS1_S1 + 90) -
                p_over_q * *(b + 150 * OS1_S1 + 90) +
                one_over_two_q * *(b + 71 * OS1_S1 + 90);
            *(b + 106 * OS1_S1 + 132) =
                prefactor_z * *(b + 106 * OS1_S1 + 91) -
                p_over_q * *(b + 150 * OS1_S1 + 91) +
                one_over_two_q * *(b + 71 * OS1_S1 + 91) +
                one_over_two_q * *(b + 106 * OS1_S1 + 59);
            *(b + 106 * OS1_S1 + 133) =
                prefactor_y * *(b + 106 * OS1_S1 + 93) -
                p_over_q * *(b + 149 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 93);
            *(b + 106 * OS1_S1 + 134) =
                prefactor_z * *(b + 106 * OS1_S1 + 93) -
                p_over_q * *(b + 150 * OS1_S1 + 93) +
                one_over_two_q * *(b + 71 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 106 * OS1_S1 + 61);
            *(b + 106 * OS1_S1 + 135) =
                prefactor_x * *(b + 106 * OS1_S1 + 99) -
                p_over_q * *(b + 142 * OS1_S1 + 99) +
                one_over_two_q * *(b + 78 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 71);
            *(b + 106 * OS1_S1 + 136) =
                prefactor_z * *(b + 106 * OS1_S1 + 94) -
                p_over_q * *(b + 150 * OS1_S1 + 94) +
                one_over_two_q * *(b + 71 * OS1_S1 + 94);
            *(b + 106 * OS1_S1 + 137) =
                prefactor_z * *(b + 106 * OS1_S1 + 95) -
                p_over_q * *(b + 150 * OS1_S1 + 95) +
                one_over_two_q * *(b + 71 * OS1_S1 + 95) +
                one_over_two_q * *(b + 106 * OS1_S1 + 62);
            *(b + 106 * OS1_S1 + 138) =
                prefactor_y * *(b + 106 * OS1_S1 + 97) -
                p_over_q * *(b + 149 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 97) +
                one_over_two_q * *(b + 106 * OS1_S1 + 65);
            *(b + 106 * OS1_S1 + 139) =
                prefactor_y * *(b + 106 * OS1_S1 + 98) -
                p_over_q * *(b + 149 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 98);
            *(b + 106 * OS1_S1 + 140) =
                prefactor_x * *(b + 106 * OS1_S1 + 104) -
                p_over_q * *(b + 142 * OS1_S1 + 104) +
                one_over_two_q * *(b + 78 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 76);
            *(b + 106 * OS1_S1 + 141) =
                prefactor_x * *(b + 106 * OS1_S1 + 105) -
                p_over_q * *(b + 142 * OS1_S1 + 105) +
                one_over_two_q * *(b + 78 * OS1_S1 + 105) +
                one_over_two_q * *(b + 106 * OS1_S1 + 77);
            *(b + 106 * OS1_S1 + 142) =
                prefactor_z * *(b + 106 * OS1_S1 + 99) -
                p_over_q * *(b + 150 * OS1_S1 + 99) +
                one_over_two_q * *(b + 71 * OS1_S1 + 99);
            *(b + 106 * OS1_S1 + 143) =
                prefactor_z * *(b + 106 * OS1_S1 + 100) -
                p_over_q * *(b + 150 * OS1_S1 + 100) +
                one_over_two_q * *(b + 71 * OS1_S1 + 100) +
                one_over_two_q * *(b + 106 * OS1_S1 + 66);
            *(b + 106 * OS1_S1 + 144) =
                prefactor_x * *(b + 106 * OS1_S1 + 108) -
                p_over_q * *(b + 142 * OS1_S1 + 108) +
                one_over_two_q * *(b + 78 * OS1_S1 + 108) +
                one_over_two_q * *(b + 106 * OS1_S1 + 80);
            *(b + 106 * OS1_S1 + 145) =
                prefactor_x * *(b + 106 * OS1_S1 + 109) -
                p_over_q * *(b + 142 * OS1_S1 + 109) +
                one_over_two_q * *(b + 78 * OS1_S1 + 109) +
                one_over_two_q * *(b + 106 * OS1_S1 + 81);
            *(b + 106 * OS1_S1 + 146) =
                prefactor_y * *(b + 106 * OS1_S1 + 104) -
                p_over_q * *(b + 149 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 104);
            *(b + 106 * OS1_S1 + 147) =
                prefactor_x * *(b + 106 * OS1_S1 + 111) -
                p_over_q * *(b + 142 * OS1_S1 + 111) +
                one_over_two_q * *(b + 78 * OS1_S1 + 111) +
                one_over_two_q * *(b + 106 * OS1_S1 + 83);
            *(b + 106 * OS1_S1 + 148) =
                prefactor_x * *(b + 106 * OS1_S1 + 112) -
                p_over_q * *(b + 142 * OS1_S1 + 112) +
                one_over_two_q * *(b + 78 * OS1_S1 + 112);
            *(b + 106 * OS1_S1 + 149) =
                prefactor_z * *(b + 106 * OS1_S1 + 105) -
                p_over_q * *(b + 150 * OS1_S1 + 105) +
                one_over_two_q * *(b + 71 * OS1_S1 + 105);
            *(b + 106 * OS1_S1 + 150) =
                prefactor_x * *(b + 106 * OS1_S1 + 114) -
                p_over_q * *(b + 142 * OS1_S1 + 114) +
                one_over_two_q * *(b + 78 * OS1_S1 + 114);
            *(b + 106 * OS1_S1 + 151) =
                prefactor_x * *(b + 106 * OS1_S1 + 115) -
                p_over_q * *(b + 142 * OS1_S1 + 115) +
                one_over_two_q * *(b + 78 * OS1_S1 + 115);
            *(b + 106 * OS1_S1 + 152) =
                prefactor_x * *(b + 106 * OS1_S1 + 116) -
                p_over_q * *(b + 142 * OS1_S1 + 116) +
                one_over_two_q * *(b + 78 * OS1_S1 + 116);
            *(b + 106 * OS1_S1 + 153) =
                prefactor_x * *(b + 106 * OS1_S1 + 117) -
                p_over_q * *(b + 142 * OS1_S1 + 117) +
                one_over_two_q * *(b + 78 * OS1_S1 + 117);
            *(b + 106 * OS1_S1 + 154) =
                prefactor_x * *(b + 106 * OS1_S1 + 118) -
                p_over_q * *(b + 142 * OS1_S1 + 118) +
                one_over_two_q * *(b + 78 * OS1_S1 + 118);
            *(b + 106 * OS1_S1 + 155) =
                prefactor_x * *(b + 106 * OS1_S1 + 119) -
                p_over_q * *(b + 142 * OS1_S1 + 119) +
                one_over_two_q * *(b + 78 * OS1_S1 + 119);
            *(b + 106 * OS1_S1 + 156) =
                prefactor_y * *(b + 106 * OS1_S1 + 112) -
                p_over_q * *(b + 149 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 106 * OS1_S1 + 77);
            *(b + 106 * OS1_S1 + 157) =
                prefactor_z * *(b + 106 * OS1_S1 + 112) -
                p_over_q * *(b + 150 * OS1_S1 + 112) +
                one_over_two_q * *(b + 71 * OS1_S1 + 112);
            *(b + 106 * OS1_S1 + 158) =
                prefactor_z * *(b + 106 * OS1_S1 + 113) -
                p_over_q * *(b + 150 * OS1_S1 + 113) +
                one_over_two_q * *(b + 71 * OS1_S1 + 113) +
                one_over_two_q * *(b + 106 * OS1_S1 + 77);
            *(b + 106 * OS1_S1 + 159) =
                prefactor_z * *(b + 106 * OS1_S1 + 114) -
                p_over_q * *(b + 150 * OS1_S1 + 114) +
                one_over_two_q * *(b + 71 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 78);
            *(b + 106 * OS1_S1 + 160) =
                prefactor_z * *(b + 106 * OS1_S1 + 115) -
                p_over_q * *(b + 150 * OS1_S1 + 115) +
                one_over_two_q * *(b + 71 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 106 * OS1_S1 + 79);
            *(b + 106 * OS1_S1 + 161) =
                prefactor_y * *(b + 106 * OS1_S1 + 117) -
                p_over_q * *(b + 149 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 106 * OS1_S1 + 82);
            *(b + 106 * OS1_S1 + 162) =
                prefactor_y * *(b + 106 * OS1_S1 + 118) -
                p_over_q * *(b + 149 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 118) +
                one_over_two_q * *(b + 106 * OS1_S1 + 83);
            *(b + 106 * OS1_S1 + 163) =
                prefactor_y * *(b + 106 * OS1_S1 + 119) -
                p_over_q * *(b + 149 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 72 * OS1_S1 + 119);
            *(b + 106 * OS1_S1 + 164) =
                prefactor_z * *(b + 106 * OS1_S1 + 119) -
                p_over_q * *(b + 150 * OS1_S1 + 119) +
                one_over_two_q * *(b + 71 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 106 * OS1_S1 + 83);
            *(b + 107 * OS1_S1 + 120) =
                prefactor_x * *(b + 107 * OS1_S1 + 84) -
                p_over_q * *(b + 143 * OS1_S1 + 84) +
                one_over_two_q * *(b + 79 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 107 * OS1_S1 + 56);
            *(b + 107 * OS1_S1 + 121) =
                prefactor_y * *(b + 107 * OS1_S1 + 84) -
                p_over_q * *(b + 150 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 84);
            *(b + 107 * OS1_S1 + 122) =
                prefactor_z * *(b + 107 * OS1_S1 + 84) -
                p_over_q * *(b + 151 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 84);
            *(b + 107 * OS1_S1 + 123) =
                prefactor_y * *(b + 107 * OS1_S1 + 85) -
                p_over_q * *(b + 150 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 85) +
                one_over_two_q * *(b + 107 * OS1_S1 + 56);
            *(b + 107 * OS1_S1 + 124) =
                prefactor_z * *(b + 107 * OS1_S1 + 85) -
                p_over_q * *(b + 151 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 85);
            *(b + 107 * OS1_S1 + 125) =
                prefactor_z * *(b + 107 * OS1_S1 + 86) -
                p_over_q * *(b + 151 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 86) +
                one_over_two_q * *(b + 107 * OS1_S1 + 56);
            *(b + 107 * OS1_S1 + 126) =
                prefactor_y * *(b + 107 * OS1_S1 + 87) -
                p_over_q * *(b + 150 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 57);
            *(b + 107 * OS1_S1 + 127) =
                prefactor_z * *(b + 107 * OS1_S1 + 87) -
                p_over_q * *(b + 151 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 87);
            *(b + 107 * OS1_S1 + 128) =
                prefactor_y * *(b + 107 * OS1_S1 + 89) -
                p_over_q * *(b + 150 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 89);
            *(b + 107 * OS1_S1 + 129) =
                prefactor_z * *(b + 107 * OS1_S1 + 89) -
                p_over_q * *(b + 151 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 58);
            *(b + 107 * OS1_S1 + 130) =
                prefactor_x * *(b + 107 * OS1_S1 + 94) -
                p_over_q * *(b + 143 * OS1_S1 + 94) +
                one_over_two_q * *(b + 79 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 66);
            *(b + 107 * OS1_S1 + 131) =
                prefactor_z * *(b + 107 * OS1_S1 + 90) -
                p_over_q * *(b + 151 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 90);
            *(b + 107 * OS1_S1 + 132) =
                prefactor_z * *(b + 107 * OS1_S1 + 91) -
                p_over_q * *(b + 151 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 91) +
                one_over_two_q * *(b + 107 * OS1_S1 + 59);
            *(b + 107 * OS1_S1 + 133) =
                prefactor_y * *(b + 107 * OS1_S1 + 93) -
                p_over_q * *(b + 150 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 93);
            *(b + 107 * OS1_S1 + 134) =
                prefactor_x * *(b + 107 * OS1_S1 + 98) -
                p_over_q * *(b + 143 * OS1_S1 + 98) +
                one_over_two_q * *(b + 79 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 70);
            *(b + 107 * OS1_S1 + 135) =
                prefactor_x * *(b + 107 * OS1_S1 + 99) -
                p_over_q * *(b + 143 * OS1_S1 + 99) +
                one_over_two_q * *(b + 79 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 71);
            *(b + 107 * OS1_S1 + 136) =
                prefactor_z * *(b + 107 * OS1_S1 + 94) -
                p_over_q * *(b + 151 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 94);
            *(b + 107 * OS1_S1 + 137) =
                prefactor_z * *(b + 107 * OS1_S1 + 95) -
                p_over_q * *(b + 151 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 95) +
                one_over_two_q * *(b + 107 * OS1_S1 + 62);
            *(b + 107 * OS1_S1 + 138) =
                prefactor_y * *(b + 107 * OS1_S1 + 97) -
                p_over_q * *(b + 150 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 97) +
                one_over_two_q * *(b + 107 * OS1_S1 + 65);
            *(b + 107 * OS1_S1 + 139) =
                prefactor_y * *(b + 107 * OS1_S1 + 98) -
                p_over_q * *(b + 150 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 98);
            *(b + 107 * OS1_S1 + 140) =
                prefactor_x * *(b + 107 * OS1_S1 + 104) -
                p_over_q * *(b + 143 * OS1_S1 + 104) +
                one_over_two_q * *(b + 79 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 76);
            *(b + 107 * OS1_S1 + 141) =
                prefactor_x * *(b + 107 * OS1_S1 + 105) -
                p_over_q * *(b + 143 * OS1_S1 + 105) +
                one_over_two_q * *(b + 79 * OS1_S1 + 105) +
                one_over_two_q * *(b + 107 * OS1_S1 + 77);
            *(b + 107 * OS1_S1 + 142) =
                prefactor_z * *(b + 107 * OS1_S1 + 99) -
                p_over_q * *(b + 151 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 99);
            *(b + 107 * OS1_S1 + 143) =
                prefactor_x * *(b + 107 * OS1_S1 + 107) -
                p_over_q * *(b + 143 * OS1_S1 + 107) +
                one_over_two_q * *(b + 79 * OS1_S1 + 107) +
                one_over_two_q * *(b + 107 * OS1_S1 + 79);
            *(b + 107 * OS1_S1 + 144) =
                prefactor_x * *(b + 107 * OS1_S1 + 108) -
                p_over_q * *(b + 143 * OS1_S1 + 108) +
                one_over_two_q * *(b + 79 * OS1_S1 + 108) +
                one_over_two_q * *(b + 107 * OS1_S1 + 80);
            *(b + 107 * OS1_S1 + 145) =
                prefactor_x * *(b + 107 * OS1_S1 + 109) -
                p_over_q * *(b + 143 * OS1_S1 + 109) +
                one_over_two_q * *(b + 79 * OS1_S1 + 109) +
                one_over_two_q * *(b + 107 * OS1_S1 + 81);
            *(b + 107 * OS1_S1 + 146) =
                prefactor_y * *(b + 107 * OS1_S1 + 104) -
                p_over_q * *(b + 150 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 104);
            *(b + 107 * OS1_S1 + 147) =
                prefactor_x * *(b + 107 * OS1_S1 + 111) -
                p_over_q * *(b + 143 * OS1_S1 + 111) +
                one_over_two_q * *(b + 79 * OS1_S1 + 111) +
                one_over_two_q * *(b + 107 * OS1_S1 + 83);
            *(b + 107 * OS1_S1 + 148) =
                prefactor_x * *(b + 107 * OS1_S1 + 112) -
                p_over_q * *(b + 143 * OS1_S1 + 112) +
                one_over_two_q * *(b + 79 * OS1_S1 + 112);
            *(b + 107 * OS1_S1 + 149) =
                prefactor_x * *(b + 107 * OS1_S1 + 113) -
                p_over_q * *(b + 143 * OS1_S1 + 113) +
                one_over_two_q * *(b + 79 * OS1_S1 + 113);
            *(b + 107 * OS1_S1 + 150) =
                prefactor_x * *(b + 107 * OS1_S1 + 114) -
                p_over_q * *(b + 143 * OS1_S1 + 114) +
                one_over_two_q * *(b + 79 * OS1_S1 + 114);
            *(b + 107 * OS1_S1 + 151) =
                prefactor_x * *(b + 107 * OS1_S1 + 115) -
                p_over_q * *(b + 143 * OS1_S1 + 115) +
                one_over_two_q * *(b + 79 * OS1_S1 + 115);
            *(b + 107 * OS1_S1 + 152) =
                prefactor_x * *(b + 107 * OS1_S1 + 116) -
                p_over_q * *(b + 143 * OS1_S1 + 116) +
                one_over_two_q * *(b + 79 * OS1_S1 + 116);
            *(b + 107 * OS1_S1 + 153) =
                prefactor_x * *(b + 107 * OS1_S1 + 117) -
                p_over_q * *(b + 143 * OS1_S1 + 117) +
                one_over_two_q * *(b + 79 * OS1_S1 + 117);
            *(b + 107 * OS1_S1 + 154) =
                prefactor_x * *(b + 107 * OS1_S1 + 118) -
                p_over_q * *(b + 143 * OS1_S1 + 118) +
                one_over_two_q * *(b + 79 * OS1_S1 + 118);
            *(b + 107 * OS1_S1 + 155) =
                prefactor_x * *(b + 107 * OS1_S1 + 119) -
                p_over_q * *(b + 143 * OS1_S1 + 119) +
                one_over_two_q * *(b + 79 * OS1_S1 + 119);
            *(b + 107 * OS1_S1 + 156) =
                prefactor_y * *(b + 107 * OS1_S1 + 112) -
                p_over_q * *(b + 150 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 107 * OS1_S1 + 77);
            *(b + 107 * OS1_S1 + 157) =
                prefactor_z * *(b + 107 * OS1_S1 + 112) -
                p_over_q * *(b + 151 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 112);
            *(b + 107 * OS1_S1 + 158) =
                prefactor_z * *(b + 107 * OS1_S1 + 113) -
                p_over_q * *(b + 151 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 113) +
                one_over_two_q * *(b + 107 * OS1_S1 + 77);
            *(b + 107 * OS1_S1 + 159) =
                prefactor_z * *(b + 107 * OS1_S1 + 114) -
                p_over_q * *(b + 151 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 78);
            *(b + 107 * OS1_S1 + 160) =
                prefactor_z * *(b + 107 * OS1_S1 + 115) -
                p_over_q * *(b + 151 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 107 * OS1_S1 + 79);
            *(b + 107 * OS1_S1 + 161) =
                prefactor_y * *(b + 107 * OS1_S1 + 117) -
                p_over_q * *(b + 150 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 107 * OS1_S1 + 82);
            *(b + 107 * OS1_S1 + 162) =
                prefactor_y * *(b + 107 * OS1_S1 + 118) -
                p_over_q * *(b + 150 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 118) +
                one_over_two_q * *(b + 107 * OS1_S1 + 83);
            *(b + 107 * OS1_S1 + 163) =
                prefactor_y * *(b + 107 * OS1_S1 + 119) -
                p_over_q * *(b + 150 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 73 * OS1_S1 + 119);
            *(b + 107 * OS1_S1 + 164) =
                prefactor_z * *(b + 107 * OS1_S1 + 119) -
                p_over_q * *(b + 151 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 72 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 107 * OS1_S1 + 83);
            *(b + 108 * OS1_S1 + 120) =
                prefactor_x * *(b + 108 * OS1_S1 + 84) -
                p_over_q * *(b + 144 * OS1_S1 + 84) +
                one_over_two_q * *(b + 80 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 108 * OS1_S1 + 56);
            *(b + 108 * OS1_S1 + 121) =
                prefactor_y * *(b + 108 * OS1_S1 + 84) -
                p_over_q * *(b + 151 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 84);
            *(b + 108 * OS1_S1 + 122) =
                prefactor_z * *(b + 108 * OS1_S1 + 84) -
                p_over_q * *(b + 152 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 84);
            *(b + 108 * OS1_S1 + 123) =
                prefactor_y * *(b + 108 * OS1_S1 + 85) -
                p_over_q * *(b + 151 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 85) +
                one_over_two_q * *(b + 108 * OS1_S1 + 56);
            *(b + 108 * OS1_S1 + 124) =
                prefactor_z * *(b + 108 * OS1_S1 + 85) -
                p_over_q * *(b + 152 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 85);
            *(b + 108 * OS1_S1 + 125) =
                prefactor_z * *(b + 108 * OS1_S1 + 86) -
                p_over_q * *(b + 152 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 86) +
                one_over_two_q * *(b + 108 * OS1_S1 + 56);
            *(b + 108 * OS1_S1 + 126) =
                prefactor_y * *(b + 108 * OS1_S1 + 87) -
                p_over_q * *(b + 151 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 57);
            *(b + 108 * OS1_S1 + 127) =
                prefactor_z * *(b + 108 * OS1_S1 + 87) -
                p_over_q * *(b + 152 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 87);
            *(b + 108 * OS1_S1 + 128) =
                prefactor_y * *(b + 108 * OS1_S1 + 89) -
                p_over_q * *(b + 151 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 89);
            *(b + 108 * OS1_S1 + 129) =
                prefactor_z * *(b + 108 * OS1_S1 + 89) -
                p_over_q * *(b + 152 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 58);
            *(b + 108 * OS1_S1 + 130) =
                prefactor_x * *(b + 108 * OS1_S1 + 94) -
                p_over_q * *(b + 144 * OS1_S1 + 94) +
                one_over_two_q * *(b + 80 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 108 * OS1_S1 + 66);
            *(b + 108 * OS1_S1 + 131) =
                prefactor_z * *(b + 108 * OS1_S1 + 90) -
                p_over_q * *(b + 152 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 90);
            *(b + 108 * OS1_S1 + 132) =
                prefactor_z * *(b + 108 * OS1_S1 + 91) -
                p_over_q * *(b + 152 * OS1_S1 + 91) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 91) +
                one_over_two_q * *(b + 108 * OS1_S1 + 59);
            *(b + 108 * OS1_S1 + 133) =
                prefactor_y * *(b + 108 * OS1_S1 + 93) -
                p_over_q * *(b + 151 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 93);
            *(b + 108 * OS1_S1 + 134) =
                prefactor_x * *(b + 108 * OS1_S1 + 98) -
                p_over_q * *(b + 144 * OS1_S1 + 98) +
                one_over_two_q * *(b + 80 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 108 * OS1_S1 + 70);
            *(b + 108 * OS1_S1 + 135) =
                prefactor_x * *(b + 108 * OS1_S1 + 99) -
                p_over_q * *(b + 144 * OS1_S1 + 99) +
                one_over_two_q * *(b + 80 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 71);
            *(b + 108 * OS1_S1 + 136) =
                prefactor_z * *(b + 108 * OS1_S1 + 94) -
                p_over_q * *(b + 152 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 94);
            *(b + 108 * OS1_S1 + 137) =
                prefactor_z * *(b + 108 * OS1_S1 + 95) -
                p_over_q * *(b + 152 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 95) +
                one_over_two_q * *(b + 108 * OS1_S1 + 62);
            *(b + 108 * OS1_S1 + 138) =
                prefactor_y * *(b + 108 * OS1_S1 + 97) -
                p_over_q * *(b + 151 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 97) +
                one_over_two_q * *(b + 108 * OS1_S1 + 65);
            *(b + 108 * OS1_S1 + 139) =
                prefactor_y * *(b + 108 * OS1_S1 + 98) -
                p_over_q * *(b + 151 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 98);
            *(b + 108 * OS1_S1 + 140) =
                prefactor_x * *(b + 108 * OS1_S1 + 104) -
                p_over_q * *(b + 144 * OS1_S1 + 104) +
                one_over_two_q * *(b + 80 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 76);
            *(b + 108 * OS1_S1 + 141) =
                prefactor_x * *(b + 108 * OS1_S1 + 105) -
                p_over_q * *(b + 144 * OS1_S1 + 105) +
                one_over_two_q * *(b + 80 * OS1_S1 + 105) +
                one_over_two_q * *(b + 108 * OS1_S1 + 77);
            *(b + 108 * OS1_S1 + 142) =
                prefactor_z * *(b + 108 * OS1_S1 + 99) -
                p_over_q * *(b + 152 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 99);
            *(b + 108 * OS1_S1 + 143) =
                prefactor_x * *(b + 108 * OS1_S1 + 107) -
                p_over_q * *(b + 144 * OS1_S1 + 107) +
                one_over_two_q * *(b + 80 * OS1_S1 + 107) +
                one_over_two_q * *(b + 108 * OS1_S1 + 79);
            *(b + 108 * OS1_S1 + 144) =
                prefactor_x * *(b + 108 * OS1_S1 + 108) -
                p_over_q * *(b + 144 * OS1_S1 + 108) +
                one_over_two_q * *(b + 80 * OS1_S1 + 108) +
                one_over_two_q * *(b + 108 * OS1_S1 + 80);
            *(b + 108 * OS1_S1 + 145) =
                prefactor_x * *(b + 108 * OS1_S1 + 109) -
                p_over_q * *(b + 144 * OS1_S1 + 109) +
                one_over_two_q * *(b + 80 * OS1_S1 + 109) +
                one_over_two_q * *(b + 108 * OS1_S1 + 81);
            *(b + 108 * OS1_S1 + 146) =
                prefactor_y * *(b + 108 * OS1_S1 + 104) -
                p_over_q * *(b + 151 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 104);
            *(b + 108 * OS1_S1 + 147) =
                prefactor_x * *(b + 108 * OS1_S1 + 111) -
                p_over_q * *(b + 144 * OS1_S1 + 111) +
                one_over_two_q * *(b + 80 * OS1_S1 + 111) +
                one_over_two_q * *(b + 108 * OS1_S1 + 83);
            *(b + 108 * OS1_S1 + 148) =
                prefactor_x * *(b + 108 * OS1_S1 + 112) -
                p_over_q * *(b + 144 * OS1_S1 + 112) +
                one_over_two_q * *(b + 80 * OS1_S1 + 112);
            *(b + 108 * OS1_S1 + 149) =
                prefactor_x * *(b + 108 * OS1_S1 + 113) -
                p_over_q * *(b + 144 * OS1_S1 + 113) +
                one_over_two_q * *(b + 80 * OS1_S1 + 113);
            *(b + 108 * OS1_S1 + 150) =
                prefactor_x * *(b + 108 * OS1_S1 + 114) -
                p_over_q * *(b + 144 * OS1_S1 + 114) +
                one_over_two_q * *(b + 80 * OS1_S1 + 114);
            *(b + 108 * OS1_S1 + 151) =
                prefactor_x * *(b + 108 * OS1_S1 + 115) -
                p_over_q * *(b + 144 * OS1_S1 + 115) +
                one_over_two_q * *(b + 80 * OS1_S1 + 115);
            *(b + 108 * OS1_S1 + 152) =
                prefactor_x * *(b + 108 * OS1_S1 + 116) -
                p_over_q * *(b + 144 * OS1_S1 + 116) +
                one_over_two_q * *(b + 80 * OS1_S1 + 116);
            *(b + 108 * OS1_S1 + 153) =
                prefactor_x * *(b + 108 * OS1_S1 + 117) -
                p_over_q * *(b + 144 * OS1_S1 + 117) +
                one_over_two_q * *(b + 80 * OS1_S1 + 117);
            *(b + 108 * OS1_S1 + 154) =
                prefactor_x * *(b + 108 * OS1_S1 + 118) -
                p_over_q * *(b + 144 * OS1_S1 + 118) +
                one_over_two_q * *(b + 80 * OS1_S1 + 118);
            *(b + 108 * OS1_S1 + 155) =
                prefactor_x * *(b + 108 * OS1_S1 + 119) -
                p_over_q * *(b + 144 * OS1_S1 + 119) +
                one_over_two_q * *(b + 80 * OS1_S1 + 119);
            *(b + 108 * OS1_S1 + 156) =
                prefactor_y * *(b + 108 * OS1_S1 + 112) -
                p_over_q * *(b + 151 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 108 * OS1_S1 + 77);
            *(b + 108 * OS1_S1 + 157) =
                prefactor_z * *(b + 108 * OS1_S1 + 112) -
                p_over_q * *(b + 152 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 112);
            *(b + 108 * OS1_S1 + 158) =
                prefactor_z * *(b + 108 * OS1_S1 + 113) -
                p_over_q * *(b + 152 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 113) +
                one_over_two_q * *(b + 108 * OS1_S1 + 77);
            *(b + 108 * OS1_S1 + 159) =
                prefactor_z * *(b + 108 * OS1_S1 + 114) -
                p_over_q * *(b + 152 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 78);
            *(b + 108 * OS1_S1 + 160) =
                prefactor_z * *(b + 108 * OS1_S1 + 115) -
                p_over_q * *(b + 152 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 108 * OS1_S1 + 79);
            *(b + 108 * OS1_S1 + 161) =
                prefactor_y * *(b + 108 * OS1_S1 + 117) -
                p_over_q * *(b + 151 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 108 * OS1_S1 + 82);
            *(b + 108 * OS1_S1 + 162) =
                prefactor_y * *(b + 108 * OS1_S1 + 118) -
                p_over_q * *(b + 151 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 118) +
                one_over_two_q * *(b + 108 * OS1_S1 + 83);
            *(b + 108 * OS1_S1 + 163) =
                prefactor_y * *(b + 108 * OS1_S1 + 119) -
                p_over_q * *(b + 151 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 74 * OS1_S1 + 119);
            *(b + 108 * OS1_S1 + 164) =
                prefactor_z * *(b + 108 * OS1_S1 + 119) -
                p_over_q * *(b + 152 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 73 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 108 * OS1_S1 + 83);
            *(b + 109 * OS1_S1 + 120) =
                prefactor_x * *(b + 109 * OS1_S1 + 84) -
                p_over_q * *(b + 145 * OS1_S1 + 84) +
                one_over_two_q * *(b + 81 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 109 * OS1_S1 + 56);
            *(b + 109 * OS1_S1 + 121) =
                prefactor_y * *(b + 109 * OS1_S1 + 84) -
                p_over_q * *(b + 152 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 84);
            *(b + 109 * OS1_S1 + 122) =
                prefactor_z * *(b + 109 * OS1_S1 + 84) -
                p_over_q * *(b + 153 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 84);
            *(b + 109 * OS1_S1 + 123) =
                prefactor_y * *(b + 109 * OS1_S1 + 85) -
                p_over_q * *(b + 152 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 85) +
                one_over_two_q * *(b + 109 * OS1_S1 + 56);
            *(b + 109 * OS1_S1 + 124) =
                prefactor_y * *(b + 109 * OS1_S1 + 86) -
                p_over_q * *(b + 152 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 86);
            *(b + 109 * OS1_S1 + 125) =
                prefactor_z * *(b + 109 * OS1_S1 + 86) -
                p_over_q * *(b + 153 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 86) +
                one_over_two_q * *(b + 109 * OS1_S1 + 56);
            *(b + 109 * OS1_S1 + 126) =
                prefactor_y * *(b + 109 * OS1_S1 + 87) -
                p_over_q * *(b + 152 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 57);
            *(b + 109 * OS1_S1 + 127) =
                prefactor_z * *(b + 109 * OS1_S1 + 87) -
                p_over_q * *(b + 153 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 87);
            *(b + 109 * OS1_S1 + 128) =
                prefactor_y * *(b + 109 * OS1_S1 + 89) -
                p_over_q * *(b + 152 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 89);
            *(b + 109 * OS1_S1 + 129) =
                prefactor_z * *(b + 109 * OS1_S1 + 89) -
                p_over_q * *(b + 153 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 58);
            *(b + 109 * OS1_S1 + 130) =
                prefactor_x * *(b + 109 * OS1_S1 + 94) -
                p_over_q * *(b + 145 * OS1_S1 + 94) +
                one_over_two_q * *(b + 81 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 66);
            *(b + 109 * OS1_S1 + 131) =
                prefactor_z * *(b + 109 * OS1_S1 + 90) -
                p_over_q * *(b + 153 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 90);
            *(b + 109 * OS1_S1 + 132) =
                prefactor_y * *(b + 109 * OS1_S1 + 92) -
                p_over_q * *(b + 152 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 92) +
                one_over_two_q * *(b + 109 * OS1_S1 + 61);
            *(b + 109 * OS1_S1 + 133) =
                prefactor_y * *(b + 109 * OS1_S1 + 93) -
                p_over_q * *(b + 152 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 93);
            *(b + 109 * OS1_S1 + 134) =
                prefactor_x * *(b + 109 * OS1_S1 + 98) -
                p_over_q * *(b + 145 * OS1_S1 + 98) +
                one_over_two_q * *(b + 81 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 70);
            *(b + 109 * OS1_S1 + 135) =
                prefactor_x * *(b + 109 * OS1_S1 + 99) -
                p_over_q * *(b + 145 * OS1_S1 + 99) +
                one_over_two_q * *(b + 81 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 71);
            *(b + 109 * OS1_S1 + 136) =
                prefactor_z * *(b + 109 * OS1_S1 + 94) -
                p_over_q * *(b + 153 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 94);
            *(b + 109 * OS1_S1 + 137) =
                prefactor_z * *(b + 109 * OS1_S1 + 95) -
                p_over_q * *(b + 153 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 95) +
                one_over_two_q * *(b + 109 * OS1_S1 + 62);
            *(b + 109 * OS1_S1 + 138) =
                prefactor_y * *(b + 109 * OS1_S1 + 97) -
                p_over_q * *(b + 152 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 97) +
                one_over_two_q * *(b + 109 * OS1_S1 + 65);
            *(b + 109 * OS1_S1 + 139) =
                prefactor_y * *(b + 109 * OS1_S1 + 98) -
                p_over_q * *(b + 152 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 98);
            *(b + 109 * OS1_S1 + 140) =
                prefactor_x * *(b + 109 * OS1_S1 + 104) -
                p_over_q * *(b + 145 * OS1_S1 + 104) +
                one_over_two_q * *(b + 81 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 76);
            *(b + 109 * OS1_S1 + 141) =
                prefactor_x * *(b + 109 * OS1_S1 + 105) -
                p_over_q * *(b + 145 * OS1_S1 + 105) +
                one_over_two_q * *(b + 81 * OS1_S1 + 105) +
                one_over_two_q * *(b + 109 * OS1_S1 + 77);
            *(b + 109 * OS1_S1 + 142) =
                prefactor_z * *(b + 109 * OS1_S1 + 99) -
                p_over_q * *(b + 153 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 99);
            *(b + 109 * OS1_S1 + 143) =
                prefactor_x * *(b + 109 * OS1_S1 + 107) -
                p_over_q * *(b + 145 * OS1_S1 + 107) +
                one_over_two_q * *(b + 81 * OS1_S1 + 107) +
                one_over_two_q * *(b + 109 * OS1_S1 + 79);
            *(b + 109 * OS1_S1 + 144) =
                prefactor_x * *(b + 109 * OS1_S1 + 108) -
                p_over_q * *(b + 145 * OS1_S1 + 108) +
                one_over_two_q * *(b + 81 * OS1_S1 + 108) +
                one_over_two_q * *(b + 109 * OS1_S1 + 80);
            *(b + 109 * OS1_S1 + 145) =
                prefactor_x * *(b + 109 * OS1_S1 + 109) -
                p_over_q * *(b + 145 * OS1_S1 + 109) +
                one_over_two_q * *(b + 81 * OS1_S1 + 109) +
                one_over_two_q * *(b + 109 * OS1_S1 + 81);
            *(b + 109 * OS1_S1 + 146) =
                prefactor_y * *(b + 109 * OS1_S1 + 104) -
                p_over_q * *(b + 152 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 104);
            *(b + 109 * OS1_S1 + 147) =
                prefactor_x * *(b + 109 * OS1_S1 + 111) -
                p_over_q * *(b + 145 * OS1_S1 + 111) +
                one_over_two_q * *(b + 81 * OS1_S1 + 111) +
                one_over_two_q * *(b + 109 * OS1_S1 + 83);
            *(b + 109 * OS1_S1 + 148) =
                prefactor_x * *(b + 109 * OS1_S1 + 112) -
                p_over_q * *(b + 145 * OS1_S1 + 112) +
                one_over_two_q * *(b + 81 * OS1_S1 + 112);
            *(b + 109 * OS1_S1 + 149) =
                prefactor_x * *(b + 109 * OS1_S1 + 113) -
                p_over_q * *(b + 145 * OS1_S1 + 113) +
                one_over_two_q * *(b + 81 * OS1_S1 + 113);
            *(b + 109 * OS1_S1 + 150) =
                prefactor_x * *(b + 109 * OS1_S1 + 114) -
                p_over_q * *(b + 145 * OS1_S1 + 114) +
                one_over_two_q * *(b + 81 * OS1_S1 + 114);
            *(b + 109 * OS1_S1 + 151) =
                prefactor_x * *(b + 109 * OS1_S1 + 115) -
                p_over_q * *(b + 145 * OS1_S1 + 115) +
                one_over_two_q * *(b + 81 * OS1_S1 + 115);
            *(b + 109 * OS1_S1 + 152) =
                prefactor_x * *(b + 109 * OS1_S1 + 116) -
                p_over_q * *(b + 145 * OS1_S1 + 116) +
                one_over_two_q * *(b + 81 * OS1_S1 + 116);
            *(b + 109 * OS1_S1 + 153) =
                prefactor_x * *(b + 109 * OS1_S1 + 117) -
                p_over_q * *(b + 145 * OS1_S1 + 117) +
                one_over_two_q * *(b + 81 * OS1_S1 + 117);
            *(b + 109 * OS1_S1 + 154) =
                prefactor_x * *(b + 109 * OS1_S1 + 118) -
                p_over_q * *(b + 145 * OS1_S1 + 118) +
                one_over_two_q * *(b + 81 * OS1_S1 + 118);
            *(b + 109 * OS1_S1 + 155) =
                prefactor_x * *(b + 109 * OS1_S1 + 119) -
                p_over_q * *(b + 145 * OS1_S1 + 119) +
                one_over_two_q * *(b + 81 * OS1_S1 + 119);
            *(b + 109 * OS1_S1 + 156) =
                prefactor_y * *(b + 109 * OS1_S1 + 112) -
                p_over_q * *(b + 152 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 109 * OS1_S1 + 77);
            *(b + 109 * OS1_S1 + 157) =
                prefactor_z * *(b + 109 * OS1_S1 + 112) -
                p_over_q * *(b + 153 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 112);
            *(b + 109 * OS1_S1 + 158) =
                prefactor_z * *(b + 109 * OS1_S1 + 113) -
                p_over_q * *(b + 153 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 113) +
                one_over_two_q * *(b + 109 * OS1_S1 + 77);
            *(b + 109 * OS1_S1 + 159) =
                prefactor_z * *(b + 109 * OS1_S1 + 114) -
                p_over_q * *(b + 153 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 78);
            *(b + 109 * OS1_S1 + 160) =
                prefactor_y * *(b + 109 * OS1_S1 + 116) -
                p_over_q * *(b + 152 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 109 * OS1_S1 + 81);
            *(b + 109 * OS1_S1 + 161) =
                prefactor_y * *(b + 109 * OS1_S1 + 117) -
                p_over_q * *(b + 152 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 109 * OS1_S1 + 82);
            *(b + 109 * OS1_S1 + 162) =
                prefactor_y * *(b + 109 * OS1_S1 + 118) -
                p_over_q * *(b + 152 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 118) +
                one_over_two_q * *(b + 109 * OS1_S1 + 83);
            *(b + 109 * OS1_S1 + 163) =
                prefactor_y * *(b + 109 * OS1_S1 + 119) -
                p_over_q * *(b + 152 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 75 * OS1_S1 + 119);
            *(b + 109 * OS1_S1 + 164) =
                prefactor_z * *(b + 109 * OS1_S1 + 119) -
                p_over_q * *(b + 153 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 74 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 109 * OS1_S1 + 83);
            *(b + 110 * OS1_S1 + 120) =
                prefactor_x * *(b + 110 * OS1_S1 + 84) -
                p_over_q * *(b + 146 * OS1_S1 + 84) +
                one_over_two_q * *(b + 82 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 110 * OS1_S1 + 56);
            *(b + 110 * OS1_S1 + 121) =
                prefactor_y * *(b + 110 * OS1_S1 + 84) -
                p_over_q * *(b + 153 * OS1_S1 + 84) +
                one_over_two_q * *(b + 76 * OS1_S1 + 84);
            *(b + 110 * OS1_S1 + 122) =
                prefactor_z * *(b + 110 * OS1_S1 + 84) -
                p_over_q * *(b + 154 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 84);
            *(b + 110 * OS1_S1 + 123) =
                prefactor_y * *(b + 110 * OS1_S1 + 85) -
                p_over_q * *(b + 153 * OS1_S1 + 85) +
                one_over_two_q * *(b + 76 * OS1_S1 + 85) +
                one_over_two_q * *(b + 110 * OS1_S1 + 56);
            *(b + 110 * OS1_S1 + 124) =
                prefactor_y * *(b + 110 * OS1_S1 + 86) -
                p_over_q * *(b + 153 * OS1_S1 + 86) +
                one_over_two_q * *(b + 76 * OS1_S1 + 86);
            *(b + 110 * OS1_S1 + 125) =
                prefactor_z * *(b + 110 * OS1_S1 + 86) -
                p_over_q * *(b + 154 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 86) +
                one_over_two_q * *(b + 110 * OS1_S1 + 56);
            *(b + 110 * OS1_S1 + 126) =
                prefactor_y * *(b + 110 * OS1_S1 + 87) -
                p_over_q * *(b + 153 * OS1_S1 + 87) +
                one_over_two_q * *(b + 76 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 57);
            *(b + 110 * OS1_S1 + 127) =
                prefactor_z * *(b + 110 * OS1_S1 + 87) -
                p_over_q * *(b + 154 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 87);
            *(b + 110 * OS1_S1 + 128) =
                prefactor_y * *(b + 110 * OS1_S1 + 89) -
                p_over_q * *(b + 153 * OS1_S1 + 89) +
                one_over_two_q * *(b + 76 * OS1_S1 + 89);
            *(b + 110 * OS1_S1 + 129) =
                prefactor_z * *(b + 110 * OS1_S1 + 89) -
                p_over_q * *(b + 154 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 58);
            *(b + 110 * OS1_S1 + 130) =
                prefactor_y * *(b + 110 * OS1_S1 + 90) -
                p_over_q * *(b + 153 * OS1_S1 + 90) +
                one_over_two_q * *(b + 76 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 110 * OS1_S1 + 59);
            *(b + 110 * OS1_S1 + 131) =
                prefactor_z * *(b + 110 * OS1_S1 + 90) -
                p_over_q * *(b + 154 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 90);
            *(b + 110 * OS1_S1 + 132) =
                prefactor_y * *(b + 110 * OS1_S1 + 92) -
                p_over_q * *(b + 153 * OS1_S1 + 92) +
                one_over_two_q * *(b + 76 * OS1_S1 + 92) +
                one_over_two_q * *(b + 110 * OS1_S1 + 61);
            *(b + 110 * OS1_S1 + 133) =
                prefactor_y * *(b + 110 * OS1_S1 + 93) -
                p_over_q * *(b + 153 * OS1_S1 + 93) +
                one_over_two_q * *(b + 76 * OS1_S1 + 93);
            *(b + 110 * OS1_S1 + 134) =
                prefactor_x * *(b + 110 * OS1_S1 + 98) -
                p_over_q * *(b + 146 * OS1_S1 + 98) +
                one_over_two_q * *(b + 82 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 110 * OS1_S1 + 70);
            *(b + 110 * OS1_S1 + 135) =
                prefactor_x * *(b + 110 * OS1_S1 + 99) -
                p_over_q * *(b + 146 * OS1_S1 + 99) +
                one_over_two_q * *(b + 82 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 71);
            *(b + 110 * OS1_S1 + 136) =
                prefactor_z * *(b + 110 * OS1_S1 + 94) -
                p_over_q * *(b + 154 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 94);
            *(b + 110 * OS1_S1 + 137) =
                prefactor_z * *(b + 110 * OS1_S1 + 95) -
                p_over_q * *(b + 154 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 95) +
                one_over_two_q * *(b + 110 * OS1_S1 + 62);
            *(b + 110 * OS1_S1 + 138) =
                prefactor_y * *(b + 110 * OS1_S1 + 97) -
                p_over_q * *(b + 153 * OS1_S1 + 97) +
                one_over_two_q * *(b + 76 * OS1_S1 + 97) +
                one_over_two_q * *(b + 110 * OS1_S1 + 65);
            *(b + 110 * OS1_S1 + 139) =
                prefactor_y * *(b + 110 * OS1_S1 + 98) -
                p_over_q * *(b + 153 * OS1_S1 + 98) +
                one_over_two_q * *(b + 76 * OS1_S1 + 98);
            *(b + 110 * OS1_S1 + 140) =
                prefactor_x * *(b + 110 * OS1_S1 + 104) -
                p_over_q * *(b + 146 * OS1_S1 + 104) +
                one_over_two_q * *(b + 82 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 76);
            *(b + 110 * OS1_S1 + 141) =
                prefactor_x * *(b + 110 * OS1_S1 + 105) -
                p_over_q * *(b + 146 * OS1_S1 + 105) +
                one_over_two_q * *(b + 82 * OS1_S1 + 105) +
                one_over_two_q * *(b + 110 * OS1_S1 + 77);
            *(b + 110 * OS1_S1 + 142) =
                prefactor_z * *(b + 110 * OS1_S1 + 99) -
                p_over_q * *(b + 154 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 99);
            *(b + 110 * OS1_S1 + 143) =
                prefactor_x * *(b + 110 * OS1_S1 + 107) -
                p_over_q * *(b + 146 * OS1_S1 + 107) +
                one_over_two_q * *(b + 82 * OS1_S1 + 107) +
                one_over_two_q * *(b + 110 * OS1_S1 + 79);
            *(b + 110 * OS1_S1 + 144) =
                prefactor_x * *(b + 110 * OS1_S1 + 108) -
                p_over_q * *(b + 146 * OS1_S1 + 108) +
                one_over_two_q * *(b + 82 * OS1_S1 + 108) +
                one_over_two_q * *(b + 110 * OS1_S1 + 80);
            *(b + 110 * OS1_S1 + 145) =
                prefactor_y * *(b + 110 * OS1_S1 + 103) -
                p_over_q * *(b + 153 * OS1_S1 + 103) +
                one_over_two_q * *(b + 76 * OS1_S1 + 103) +
                one_over_two_q * *(b + 110 * OS1_S1 + 70);
            *(b + 110 * OS1_S1 + 146) =
                prefactor_y * *(b + 110 * OS1_S1 + 104) -
                p_over_q * *(b + 153 * OS1_S1 + 104) +
                one_over_two_q * *(b + 76 * OS1_S1 + 104);
            *(b + 110 * OS1_S1 + 147) =
                prefactor_x * *(b + 110 * OS1_S1 + 111) -
                p_over_q * *(b + 146 * OS1_S1 + 111) +
                one_over_two_q * *(b + 82 * OS1_S1 + 111) +
                one_over_two_q * *(b + 110 * OS1_S1 + 83);
            *(b + 110 * OS1_S1 + 148) =
                prefactor_x * *(b + 110 * OS1_S1 + 112) -
                p_over_q * *(b + 146 * OS1_S1 + 112) +
                one_over_two_q * *(b + 82 * OS1_S1 + 112);
            *(b + 110 * OS1_S1 + 149) =
                prefactor_x * *(b + 110 * OS1_S1 + 113) -
                p_over_q * *(b + 146 * OS1_S1 + 113) +
                one_over_two_q * *(b + 82 * OS1_S1 + 113);
            *(b + 110 * OS1_S1 + 150) =
                prefactor_x * *(b + 110 * OS1_S1 + 114) -
                p_over_q * *(b + 146 * OS1_S1 + 114) +
                one_over_two_q * *(b + 82 * OS1_S1 + 114);
            *(b + 110 * OS1_S1 + 151) =
                prefactor_x * *(b + 110 * OS1_S1 + 115) -
                p_over_q * *(b + 146 * OS1_S1 + 115) +
                one_over_two_q * *(b + 82 * OS1_S1 + 115);
            *(b + 110 * OS1_S1 + 152) =
                prefactor_x * *(b + 110 * OS1_S1 + 116) -
                p_over_q * *(b + 146 * OS1_S1 + 116) +
                one_over_two_q * *(b + 82 * OS1_S1 + 116);
            *(b + 110 * OS1_S1 + 153) =
                prefactor_x * *(b + 110 * OS1_S1 + 117) -
                p_over_q * *(b + 146 * OS1_S1 + 117) +
                one_over_two_q * *(b + 82 * OS1_S1 + 117);
            *(b + 110 * OS1_S1 + 154) =
                prefactor_y * *(b + 110 * OS1_S1 + 111) -
                p_over_q * *(b + 153 * OS1_S1 + 111) +
                one_over_two_q * *(b + 76 * OS1_S1 + 111);
            *(b + 110 * OS1_S1 + 155) =
                prefactor_x * *(b + 110 * OS1_S1 + 119) -
                p_over_q * *(b + 146 * OS1_S1 + 119) +
                one_over_two_q * *(b + 82 * OS1_S1 + 119);
            *(b + 110 * OS1_S1 + 156) =
                prefactor_y * *(b + 110 * OS1_S1 + 112) -
                p_over_q * *(b + 153 * OS1_S1 + 112) +
                one_over_two_q * *(b + 76 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 110 * OS1_S1 + 77);
            *(b + 110 * OS1_S1 + 157) =
                prefactor_z * *(b + 110 * OS1_S1 + 112) -
                p_over_q * *(b + 154 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 112);
            *(b + 110 * OS1_S1 + 158) =
                prefactor_z * *(b + 110 * OS1_S1 + 113) -
                p_over_q * *(b + 154 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 113) +
                one_over_two_q * *(b + 110 * OS1_S1 + 77);
            *(b + 110 * OS1_S1 + 159) =
                prefactor_z * *(b + 110 * OS1_S1 + 114) -
                p_over_q * *(b + 154 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 78);
            *(b + 110 * OS1_S1 + 160) =
                prefactor_y * *(b + 110 * OS1_S1 + 116) -
                p_over_q * *(b + 153 * OS1_S1 + 116) +
                one_over_two_q * *(b + 76 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 110 * OS1_S1 + 81);
            *(b + 110 * OS1_S1 + 161) =
                prefactor_y * *(b + 110 * OS1_S1 + 117) -
                p_over_q * *(b + 153 * OS1_S1 + 117) +
                one_over_two_q * *(b + 76 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 110 * OS1_S1 + 82);
            *(b + 110 * OS1_S1 + 162) =
                prefactor_y * *(b + 110 * OS1_S1 + 118) -
                p_over_q * *(b + 153 * OS1_S1 + 118) +
                one_over_two_q * *(b + 76 * OS1_S1 + 118) +
                one_over_two_q * *(b + 110 * OS1_S1 + 83);
            *(b + 110 * OS1_S1 + 163) =
                prefactor_y * *(b + 110 * OS1_S1 + 119) -
                p_over_q * *(b + 153 * OS1_S1 + 119) +
                one_over_two_q * *(b + 76 * OS1_S1 + 119);
            *(b + 110 * OS1_S1 + 164) =
                prefactor_z * *(b + 110 * OS1_S1 + 119) -
                p_over_q * *(b + 154 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 75 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 110 * OS1_S1 + 83);
            *(b + 111 * OS1_S1 + 120) =
                prefactor_x * *(b + 111 * OS1_S1 + 84) -
                p_over_q * *(b + 147 * OS1_S1 + 84) +
                one_over_two_q * *(b + 83 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 56);
            *(b + 111 * OS1_S1 + 121) = prefactor_y * *(b + 111 * OS1_S1 + 84) -
                                        p_over_q * *(b + 154 * OS1_S1 + 84);
            *(b + 111 * OS1_S1 + 122) =
                prefactor_z * *(b + 111 * OS1_S1 + 84) -
                p_over_q * *(b + 155 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 84);
            *(b + 111 * OS1_S1 + 123) =
                prefactor_y * *(b + 111 * OS1_S1 + 85) -
                p_over_q * *(b + 154 * OS1_S1 + 85) +
                one_over_two_q * *(b + 111 * OS1_S1 + 56);
            *(b + 111 * OS1_S1 + 124) = prefactor_y * *(b + 111 * OS1_S1 + 86) -
                                        p_over_q * *(b + 154 * OS1_S1 + 86);
            *(b + 111 * OS1_S1 + 125) =
                prefactor_z * *(b + 111 * OS1_S1 + 86) -
                p_over_q * *(b + 155 * OS1_S1 + 86) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 86) +
                one_over_two_q * *(b + 111 * OS1_S1 + 56);
            *(b + 111 * OS1_S1 + 126) =
                prefactor_y * *(b + 111 * OS1_S1 + 87) -
                p_over_q * *(b + 154 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 57);
            *(b + 111 * OS1_S1 + 127) =
                prefactor_z * *(b + 111 * OS1_S1 + 87) -
                p_over_q * *(b + 155 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 87);
            *(b + 111 * OS1_S1 + 128) = prefactor_y * *(b + 111 * OS1_S1 + 89) -
                                        p_over_q * *(b + 154 * OS1_S1 + 89);
            *(b + 111 * OS1_S1 + 129) =
                prefactor_z * *(b + 111 * OS1_S1 + 89) -
                p_over_q * *(b + 155 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 58);
            *(b + 111 * OS1_S1 + 130) =
                prefactor_y * *(b + 111 * OS1_S1 + 90) -
                p_over_q * *(b + 154 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 111 * OS1_S1 + 59);
            *(b + 111 * OS1_S1 + 131) =
                prefactor_z * *(b + 111 * OS1_S1 + 90) -
                p_over_q * *(b + 155 * OS1_S1 + 90) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 90);
            *(b + 111 * OS1_S1 + 132) =
                prefactor_y * *(b + 111 * OS1_S1 + 92) -
                p_over_q * *(b + 154 * OS1_S1 + 92) +
                one_over_two_q * *(b + 111 * OS1_S1 + 61);
            *(b + 111 * OS1_S1 + 133) = prefactor_y * *(b + 111 * OS1_S1 + 93) -
                                        p_over_q * *(b + 154 * OS1_S1 + 93);
            *(b + 111 * OS1_S1 + 134) =
                prefactor_x * *(b + 111 * OS1_S1 + 98) -
                p_over_q * *(b + 147 * OS1_S1 + 98) +
                one_over_two_q * *(b + 83 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 111 * OS1_S1 + 70);
            *(b + 111 * OS1_S1 + 135) =
                prefactor_x * *(b + 111 * OS1_S1 + 99) -
                p_over_q * *(b + 147 * OS1_S1 + 99) +
                one_over_two_q * *(b + 83 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 71);
            *(b + 111 * OS1_S1 + 136) =
                prefactor_z * *(b + 111 * OS1_S1 + 94) -
                p_over_q * *(b + 155 * OS1_S1 + 94) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 94);
            *(b + 111 * OS1_S1 + 137) =
                prefactor_z * *(b + 111 * OS1_S1 + 95) -
                p_over_q * *(b + 155 * OS1_S1 + 95) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 95) +
                one_over_two_q * *(b + 111 * OS1_S1 + 62);
            *(b + 111 * OS1_S1 + 138) =
                prefactor_y * *(b + 111 * OS1_S1 + 97) -
                p_over_q * *(b + 154 * OS1_S1 + 97) +
                one_over_two_q * *(b + 111 * OS1_S1 + 65);
            *(b + 111 * OS1_S1 + 139) = prefactor_y * *(b + 111 * OS1_S1 + 98) -
                                        p_over_q * *(b + 154 * OS1_S1 + 98);
            *(b + 111 * OS1_S1 + 140) =
                prefactor_x * *(b + 111 * OS1_S1 + 104) -
                p_over_q * *(b + 147 * OS1_S1 + 104) +
                one_over_two_q * *(b + 83 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 76);
            *(b + 111 * OS1_S1 + 141) =
                prefactor_x * *(b + 111 * OS1_S1 + 105) -
                p_over_q * *(b + 147 * OS1_S1 + 105) +
                one_over_two_q * *(b + 83 * OS1_S1 + 105) +
                one_over_two_q * *(b + 111 * OS1_S1 + 77);
            *(b + 111 * OS1_S1 + 142) =
                prefactor_z * *(b + 111 * OS1_S1 + 99) -
                p_over_q * *(b + 155 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 99);
            *(b + 111 * OS1_S1 + 143) =
                prefactor_x * *(b + 111 * OS1_S1 + 107) -
                p_over_q * *(b + 147 * OS1_S1 + 107) +
                one_over_two_q * *(b + 83 * OS1_S1 + 107) +
                one_over_two_q * *(b + 111 * OS1_S1 + 79);
            *(b + 111 * OS1_S1 + 144) =
                prefactor_x * *(b + 111 * OS1_S1 + 108) -
                p_over_q * *(b + 147 * OS1_S1 + 108) +
                one_over_two_q * *(b + 83 * OS1_S1 + 108) +
                one_over_two_q * *(b + 111 * OS1_S1 + 80);
            *(b + 111 * OS1_S1 + 145) =
                prefactor_y * *(b + 111 * OS1_S1 + 103) -
                p_over_q * *(b + 154 * OS1_S1 + 103) +
                one_over_two_q * *(b + 111 * OS1_S1 + 70);
            *(b + 111 * OS1_S1 + 146) =
                prefactor_y * *(b + 111 * OS1_S1 + 104) -
                p_over_q * *(b + 154 * OS1_S1 + 104);
            *(b + 111 * OS1_S1 + 147) =
                prefactor_x * *(b + 111 * OS1_S1 + 111) -
                p_over_q * *(b + 147 * OS1_S1 + 111) +
                one_over_two_q * *(b + 83 * OS1_S1 + 111) +
                one_over_two_q * *(b + 111 * OS1_S1 + 83);
            *(b + 111 * OS1_S1 + 148) =
                prefactor_x * *(b + 111 * OS1_S1 + 112) -
                p_over_q * *(b + 147 * OS1_S1 + 112) +
                one_over_two_q * *(b + 83 * OS1_S1 + 112);
            *(b + 111 * OS1_S1 + 149) =
                prefactor_x * *(b + 111 * OS1_S1 + 113) -
                p_over_q * *(b + 147 * OS1_S1 + 113) +
                one_over_two_q * *(b + 83 * OS1_S1 + 113);
            *(b + 111 * OS1_S1 + 150) =
                prefactor_x * *(b + 111 * OS1_S1 + 114) -
                p_over_q * *(b + 147 * OS1_S1 + 114) +
                one_over_two_q * *(b + 83 * OS1_S1 + 114);
            *(b + 111 * OS1_S1 + 151) =
                prefactor_x * *(b + 111 * OS1_S1 + 115) -
                p_over_q * *(b + 147 * OS1_S1 + 115) +
                one_over_two_q * *(b + 83 * OS1_S1 + 115);
            *(b + 111 * OS1_S1 + 152) =
                prefactor_x * *(b + 111 * OS1_S1 + 116) -
                p_over_q * *(b + 147 * OS1_S1 + 116) +
                one_over_two_q * *(b + 83 * OS1_S1 + 116);
            *(b + 111 * OS1_S1 + 153) =
                prefactor_x * *(b + 111 * OS1_S1 + 117) -
                p_over_q * *(b + 147 * OS1_S1 + 117) +
                one_over_two_q * *(b + 83 * OS1_S1 + 117);
            *(b + 111 * OS1_S1 + 154) =
                prefactor_y * *(b + 111 * OS1_S1 + 111) -
                p_over_q * *(b + 154 * OS1_S1 + 111);
            *(b + 111 * OS1_S1 + 155) =
                prefactor_x * *(b + 111 * OS1_S1 + 119) -
                p_over_q * *(b + 147 * OS1_S1 + 119) +
                one_over_two_q * *(b + 83 * OS1_S1 + 119);
            *(b + 111 * OS1_S1 + 156) =
                prefactor_y * *(b + 111 * OS1_S1 + 112) -
                p_over_q * *(b + 154 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 77);
            *(b + 111 * OS1_S1 + 157) =
                prefactor_z * *(b + 111 * OS1_S1 + 112) -
                p_over_q * *(b + 155 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 112);
            *(b + 111 * OS1_S1 + 158) =
                prefactor_z * *(b + 111 * OS1_S1 + 113) -
                p_over_q * *(b + 155 * OS1_S1 + 113) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 113) +
                one_over_two_q * *(b + 111 * OS1_S1 + 77);
            *(b + 111 * OS1_S1 + 159) =
                prefactor_z * *(b + 111 * OS1_S1 + 114) -
                p_over_q * *(b + 155 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 78);
            *(b + 111 * OS1_S1 + 160) =
                prefactor_y * *(b + 111 * OS1_S1 + 116) -
                p_over_q * *(b + 154 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 111 * OS1_S1 + 81);
            *(b + 111 * OS1_S1 + 161) =
                prefactor_y * *(b + 111 * OS1_S1 + 117) -
                p_over_q * *(b + 154 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 111 * OS1_S1 + 82);
            *(b + 111 * OS1_S1 + 162) =
                prefactor_y * *(b + 111 * OS1_S1 + 118) -
                p_over_q * *(b + 154 * OS1_S1 + 118) +
                one_over_two_q * *(b + 111 * OS1_S1 + 83);
            *(b + 111 * OS1_S1 + 163) =
                prefactor_y * *(b + 111 * OS1_S1 + 119) -
                p_over_q * *(b + 154 * OS1_S1 + 119);
            *(b + 111 * OS1_S1 + 164) =
                prefactor_z * *(b + 111 * OS1_S1 + 119) -
                p_over_q * *(b + 155 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 76 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 111 * OS1_S1 + 83);
            *(b + 112 * OS1_S1 + 120) =
                prefactor_x * *(b + 112 * OS1_S1 + 84) -
                p_over_q * *(b + 148 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 112 * OS1_S1 + 56);
            *(b + 112 * OS1_S1 + 121) =
                prefactor_y * *(b + 112 * OS1_S1 + 84) -
                p_over_q * *(b + 156 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 84);
            *(b + 112 * OS1_S1 + 122) = prefactor_z * *(b + 112 * OS1_S1 + 84) -
                                        p_over_q * *(b + 157 * OS1_S1 + 84);
            *(b + 112 * OS1_S1 + 123) =
                prefactor_y * *(b + 112 * OS1_S1 + 85) -
                p_over_q * *(b + 156 * OS1_S1 + 85) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 85) +
                one_over_two_q * *(b + 112 * OS1_S1 + 56);
            *(b + 112 * OS1_S1 + 124) = prefactor_z * *(b + 112 * OS1_S1 + 85) -
                                        p_over_q * *(b + 157 * OS1_S1 + 85);
            *(b + 112 * OS1_S1 + 125) =
                prefactor_z * *(b + 112 * OS1_S1 + 86) -
                p_over_q * *(b + 157 * OS1_S1 + 86) +
                one_over_two_q * *(b + 112 * OS1_S1 + 56);
            *(b + 112 * OS1_S1 + 126) =
                prefactor_y * *(b + 112 * OS1_S1 + 87) -
                p_over_q * *(b + 156 * OS1_S1 + 87) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 57);
            *(b + 112 * OS1_S1 + 127) = prefactor_z * *(b + 112 * OS1_S1 + 87) -
                                        p_over_q * *(b + 157 * OS1_S1 + 87);
            *(b + 112 * OS1_S1 + 128) =
                prefactor_y * *(b + 112 * OS1_S1 + 89) -
                p_over_q * *(b + 156 * OS1_S1 + 89) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 89);
            *(b + 112 * OS1_S1 + 129) =
                prefactor_z * *(b + 112 * OS1_S1 + 89) -
                p_over_q * *(b + 157 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 58);
            *(b + 112 * OS1_S1 + 130) =
                prefactor_x * *(b + 112 * OS1_S1 + 94) -
                p_over_q * *(b + 148 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 112 * OS1_S1 + 66);
            *(b + 112 * OS1_S1 + 131) = prefactor_z * *(b + 112 * OS1_S1 + 90) -
                                        p_over_q * *(b + 157 * OS1_S1 + 90);
            *(b + 112 * OS1_S1 + 132) =
                prefactor_z * *(b + 112 * OS1_S1 + 91) -
                p_over_q * *(b + 157 * OS1_S1 + 91) +
                one_over_two_q * *(b + 112 * OS1_S1 + 59);
            *(b + 112 * OS1_S1 + 133) =
                prefactor_y * *(b + 112 * OS1_S1 + 93) -
                p_over_q * *(b + 156 * OS1_S1 + 93) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 93);
            *(b + 112 * OS1_S1 + 134) =
                prefactor_z * *(b + 112 * OS1_S1 + 93) -
                p_over_q * *(b + 157 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 112 * OS1_S1 + 61);
            *(b + 112 * OS1_S1 + 135) =
                prefactor_x * *(b + 112 * OS1_S1 + 99) -
                p_over_q * *(b + 148 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 71);
            *(b + 112 * OS1_S1 + 136) = prefactor_z * *(b + 112 * OS1_S1 + 94) -
                                        p_over_q * *(b + 157 * OS1_S1 + 94);
            *(b + 112 * OS1_S1 + 137) =
                prefactor_z * *(b + 112 * OS1_S1 + 95) -
                p_over_q * *(b + 157 * OS1_S1 + 95) +
                one_over_two_q * *(b + 112 * OS1_S1 + 62);
            *(b + 112 * OS1_S1 + 138) =
                prefactor_y * *(b + 112 * OS1_S1 + 97) -
                p_over_q * *(b + 156 * OS1_S1 + 97) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 97) +
                one_over_two_q * *(b + 112 * OS1_S1 + 65);
            *(b + 112 * OS1_S1 + 139) =
                prefactor_y * *(b + 112 * OS1_S1 + 98) -
                p_over_q * *(b + 156 * OS1_S1 + 98) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 98);
            *(b + 112 * OS1_S1 + 140) =
                prefactor_x * *(b + 112 * OS1_S1 + 104) -
                p_over_q * *(b + 148 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 76);
            *(b + 112 * OS1_S1 + 141) =
                prefactor_x * *(b + 112 * OS1_S1 + 105) -
                p_over_q * *(b + 148 * OS1_S1 + 105) +
                one_over_two_q * *(b + 112 * OS1_S1 + 77);
            *(b + 112 * OS1_S1 + 142) = prefactor_z * *(b + 112 * OS1_S1 + 99) -
                                        p_over_q * *(b + 157 * OS1_S1 + 99);
            *(b + 112 * OS1_S1 + 143) =
                prefactor_z * *(b + 112 * OS1_S1 + 100) -
                p_over_q * *(b + 157 * OS1_S1 + 100) +
                one_over_two_q * *(b + 112 * OS1_S1 + 66);
            *(b + 112 * OS1_S1 + 144) =
                prefactor_x * *(b + 112 * OS1_S1 + 108) -
                p_over_q * *(b + 148 * OS1_S1 + 108) +
                one_over_two_q * *(b + 112 * OS1_S1 + 80);
            *(b + 112 * OS1_S1 + 145) =
                prefactor_x * *(b + 112 * OS1_S1 + 109) -
                p_over_q * *(b + 148 * OS1_S1 + 109) +
                one_over_two_q * *(b + 112 * OS1_S1 + 81);
            *(b + 112 * OS1_S1 + 146) =
                prefactor_y * *(b + 112 * OS1_S1 + 104) -
                p_over_q * *(b + 156 * OS1_S1 + 104) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 104);
            *(b + 112 * OS1_S1 + 147) =
                prefactor_x * *(b + 112 * OS1_S1 + 111) -
                p_over_q * *(b + 148 * OS1_S1 + 111) +
                one_over_two_q * *(b + 112 * OS1_S1 + 83);
            *(b + 112 * OS1_S1 + 148) =
                prefactor_x * *(b + 112 * OS1_S1 + 112) -
                p_over_q * *(b + 148 * OS1_S1 + 112);
            *(b + 112 * OS1_S1 + 149) =
                prefactor_z * *(b + 112 * OS1_S1 + 105) -
                p_over_q * *(b + 157 * OS1_S1 + 105);
            *(b + 112 * OS1_S1 + 150) =
                prefactor_x * *(b + 112 * OS1_S1 + 114) -
                p_over_q * *(b + 148 * OS1_S1 + 114);
            *(b + 112 * OS1_S1 + 151) =
                prefactor_x * *(b + 112 * OS1_S1 + 115) -
                p_over_q * *(b + 148 * OS1_S1 + 115);
            *(b + 112 * OS1_S1 + 152) =
                prefactor_x * *(b + 112 * OS1_S1 + 116) -
                p_over_q * *(b + 148 * OS1_S1 + 116);
            *(b + 112 * OS1_S1 + 153) =
                prefactor_x * *(b + 112 * OS1_S1 + 117) -
                p_over_q * *(b + 148 * OS1_S1 + 117);
            *(b + 112 * OS1_S1 + 154) =
                prefactor_x * *(b + 112 * OS1_S1 + 118) -
                p_over_q * *(b + 148 * OS1_S1 + 118);
            *(b + 112 * OS1_S1 + 155) =
                prefactor_x * *(b + 112 * OS1_S1 + 119) -
                p_over_q * *(b + 148 * OS1_S1 + 119);
            *(b + 112 * OS1_S1 + 156) =
                prefactor_y * *(b + 112 * OS1_S1 + 112) -
                p_over_q * *(b + 156 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 112 * OS1_S1 + 77);
            *(b + 112 * OS1_S1 + 157) =
                prefactor_z * *(b + 112 * OS1_S1 + 112) -
                p_over_q * *(b + 157 * OS1_S1 + 112);
            *(b + 112 * OS1_S1 + 158) =
                prefactor_z * *(b + 112 * OS1_S1 + 113) -
                p_over_q * *(b + 157 * OS1_S1 + 113) +
                one_over_two_q * *(b + 112 * OS1_S1 + 77);
            *(b + 112 * OS1_S1 + 159) =
                prefactor_z * *(b + 112 * OS1_S1 + 114) -
                p_over_q * *(b + 157 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 78);
            *(b + 112 * OS1_S1 + 160) =
                prefactor_z * *(b + 112 * OS1_S1 + 115) -
                p_over_q * *(b + 157 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 112 * OS1_S1 + 79);
            *(b + 112 * OS1_S1 + 161) =
                prefactor_y * *(b + 112 * OS1_S1 + 117) -
                p_over_q * *(b + 156 * OS1_S1 + 117) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 112 * OS1_S1 + 82);
            *(b + 112 * OS1_S1 + 162) =
                prefactor_y * *(b + 112 * OS1_S1 + 118) -
                p_over_q * *(b + 156 * OS1_S1 + 118) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 118) +
                one_over_two_q * *(b + 112 * OS1_S1 + 83);
            *(b + 112 * OS1_S1 + 163) =
                prefactor_y * *(b + 112 * OS1_S1 + 119) -
                p_over_q * *(b + 156 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 77 * OS1_S1 + 119);
            *(b + 112 * OS1_S1 + 164) =
                prefactor_z * *(b + 112 * OS1_S1 + 119) -
                p_over_q * *(b + 157 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 112 * OS1_S1 + 83);
            *(b + 113 * OS1_S1 + 120) =
                prefactor_x * *(b + 113 * OS1_S1 + 84) -
                p_over_q * *(b + 149 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 56);
            *(b + 113 * OS1_S1 + 121) =
                prefactor_y * *(b + 113 * OS1_S1 + 84) -
                p_over_q * *(b + 157 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 84);
            *(b + 113 * OS1_S1 + 122) =
                prefactor_z * *(b + 113 * OS1_S1 + 84) -
                p_over_q * *(b + 158 * OS1_S1 + 84) +
                one_over_two_q * *(b + 77 * OS1_S1 + 84);
            *(b + 113 * OS1_S1 + 123) =
                prefactor_y * *(b + 113 * OS1_S1 + 85) -
                p_over_q * *(b + 157 * OS1_S1 + 85) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 85) +
                one_over_two_q * *(b + 113 * OS1_S1 + 56);
            *(b + 113 * OS1_S1 + 124) =
                prefactor_z * *(b + 113 * OS1_S1 + 85) -
                p_over_q * *(b + 158 * OS1_S1 + 85) +
                one_over_two_q * *(b + 77 * OS1_S1 + 85);
            *(b + 113 * OS1_S1 + 125) =
                prefactor_z * *(b + 113 * OS1_S1 + 86) -
                p_over_q * *(b + 158 * OS1_S1 + 86) +
                one_over_two_q * *(b + 77 * OS1_S1 + 86) +
                one_over_two_q * *(b + 113 * OS1_S1 + 56);
            *(b + 113 * OS1_S1 + 126) =
                prefactor_y * *(b + 113 * OS1_S1 + 87) -
                p_over_q * *(b + 157 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 57);
            *(b + 113 * OS1_S1 + 127) =
                prefactor_z * *(b + 113 * OS1_S1 + 87) -
                p_over_q * *(b + 158 * OS1_S1 + 87) +
                one_over_two_q * *(b + 77 * OS1_S1 + 87);
            *(b + 113 * OS1_S1 + 128) =
                prefactor_y * *(b + 113 * OS1_S1 + 89) -
                p_over_q * *(b + 157 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 89);
            *(b + 113 * OS1_S1 + 129) =
                prefactor_z * *(b + 113 * OS1_S1 + 89) -
                p_over_q * *(b + 158 * OS1_S1 + 89) +
                one_over_two_q * *(b + 77 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 58);
            *(b + 113 * OS1_S1 + 130) =
                prefactor_x * *(b + 113 * OS1_S1 + 94) -
                p_over_q * *(b + 149 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 113 * OS1_S1 + 66);
            *(b + 113 * OS1_S1 + 131) =
                prefactor_z * *(b + 113 * OS1_S1 + 90) -
                p_over_q * *(b + 158 * OS1_S1 + 90) +
                one_over_two_q * *(b + 77 * OS1_S1 + 90);
            *(b + 113 * OS1_S1 + 132) =
                prefactor_z * *(b + 113 * OS1_S1 + 91) -
                p_over_q * *(b + 158 * OS1_S1 + 91) +
                one_over_two_q * *(b + 77 * OS1_S1 + 91) +
                one_over_two_q * *(b + 113 * OS1_S1 + 59);
            *(b + 113 * OS1_S1 + 133) =
                prefactor_y * *(b + 113 * OS1_S1 + 93) -
                p_over_q * *(b + 157 * OS1_S1 + 93) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 93);
            *(b + 113 * OS1_S1 + 134) =
                prefactor_x * *(b + 113 * OS1_S1 + 98) -
                p_over_q * *(b + 149 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 113 * OS1_S1 + 70);
            *(b + 113 * OS1_S1 + 135) =
                prefactor_x * *(b + 113 * OS1_S1 + 99) -
                p_over_q * *(b + 149 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 71);
            *(b + 113 * OS1_S1 + 136) =
                prefactor_z * *(b + 113 * OS1_S1 + 94) -
                p_over_q * *(b + 158 * OS1_S1 + 94) +
                one_over_two_q * *(b + 77 * OS1_S1 + 94);
            *(b + 113 * OS1_S1 + 137) =
                prefactor_z * *(b + 113 * OS1_S1 + 95) -
                p_over_q * *(b + 158 * OS1_S1 + 95) +
                one_over_two_q * *(b + 77 * OS1_S1 + 95) +
                one_over_two_q * *(b + 113 * OS1_S1 + 62);
            *(b + 113 * OS1_S1 + 138) =
                prefactor_y * *(b + 113 * OS1_S1 + 97) -
                p_over_q * *(b + 157 * OS1_S1 + 97) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 97) +
                one_over_two_q * *(b + 113 * OS1_S1 + 65);
            *(b + 113 * OS1_S1 + 139) =
                prefactor_y * *(b + 113 * OS1_S1 + 98) -
                p_over_q * *(b + 157 * OS1_S1 + 98) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 98);
            *(b + 113 * OS1_S1 + 140) =
                prefactor_x * *(b + 113 * OS1_S1 + 104) -
                p_over_q * *(b + 149 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 76);
            *(b + 113 * OS1_S1 + 141) =
                prefactor_x * *(b + 113 * OS1_S1 + 105) -
                p_over_q * *(b + 149 * OS1_S1 + 105) +
                one_over_two_q * *(b + 113 * OS1_S1 + 77);
            *(b + 113 * OS1_S1 + 142) =
                prefactor_z * *(b + 113 * OS1_S1 + 99) -
                p_over_q * *(b + 158 * OS1_S1 + 99) +
                one_over_two_q * *(b + 77 * OS1_S1 + 99);
            *(b + 113 * OS1_S1 + 143) =
                prefactor_x * *(b + 113 * OS1_S1 + 107) -
                p_over_q * *(b + 149 * OS1_S1 + 107) +
                one_over_two_q * *(b + 113 * OS1_S1 + 79);
            *(b + 113 * OS1_S1 + 144) =
                prefactor_x * *(b + 113 * OS1_S1 + 108) -
                p_over_q * *(b + 149 * OS1_S1 + 108) +
                one_over_two_q * *(b + 113 * OS1_S1 + 80);
            *(b + 113 * OS1_S1 + 145) =
                prefactor_x * *(b + 113 * OS1_S1 + 109) -
                p_over_q * *(b + 149 * OS1_S1 + 109) +
                one_over_two_q * *(b + 113 * OS1_S1 + 81);
            *(b + 113 * OS1_S1 + 146) =
                prefactor_y * *(b + 113 * OS1_S1 + 104) -
                p_over_q * *(b + 157 * OS1_S1 + 104) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 104);
            *(b + 113 * OS1_S1 + 147) =
                prefactor_x * *(b + 113 * OS1_S1 + 111) -
                p_over_q * *(b + 149 * OS1_S1 + 111) +
                one_over_two_q * *(b + 113 * OS1_S1 + 83);
            *(b + 113 * OS1_S1 + 148) =
                prefactor_x * *(b + 113 * OS1_S1 + 112) -
                p_over_q * *(b + 149 * OS1_S1 + 112);
            *(b + 113 * OS1_S1 + 149) =
                prefactor_x * *(b + 113 * OS1_S1 + 113) -
                p_over_q * *(b + 149 * OS1_S1 + 113);
            *(b + 113 * OS1_S1 + 150) =
                prefactor_x * *(b + 113 * OS1_S1 + 114) -
                p_over_q * *(b + 149 * OS1_S1 + 114);
            *(b + 113 * OS1_S1 + 151) =
                prefactor_x * *(b + 113 * OS1_S1 + 115) -
                p_over_q * *(b + 149 * OS1_S1 + 115);
            *(b + 113 * OS1_S1 + 152) =
                prefactor_x * *(b + 113 * OS1_S1 + 116) -
                p_over_q * *(b + 149 * OS1_S1 + 116);
            *(b + 113 * OS1_S1 + 153) =
                prefactor_x * *(b + 113 * OS1_S1 + 117) -
                p_over_q * *(b + 149 * OS1_S1 + 117);
            *(b + 113 * OS1_S1 + 154) =
                prefactor_x * *(b + 113 * OS1_S1 + 118) -
                p_over_q * *(b + 149 * OS1_S1 + 118);
            *(b + 113 * OS1_S1 + 155) =
                prefactor_x * *(b + 113 * OS1_S1 + 119) -
                p_over_q * *(b + 149 * OS1_S1 + 119);
            *(b + 113 * OS1_S1 + 156) =
                prefactor_y * *(b + 113 * OS1_S1 + 112) -
                p_over_q * *(b + 157 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 77);
            *(b + 113 * OS1_S1 + 157) =
                prefactor_z * *(b + 113 * OS1_S1 + 112) -
                p_over_q * *(b + 158 * OS1_S1 + 112) +
                one_over_two_q * *(b + 77 * OS1_S1 + 112);
            *(b + 113 * OS1_S1 + 158) =
                prefactor_z * *(b + 113 * OS1_S1 + 113) -
                p_over_q * *(b + 158 * OS1_S1 + 113) +
                one_over_two_q * *(b + 77 * OS1_S1 + 113) +
                one_over_two_q * *(b + 113 * OS1_S1 + 77);
            *(b + 113 * OS1_S1 + 159) =
                prefactor_z * *(b + 113 * OS1_S1 + 114) -
                p_over_q * *(b + 158 * OS1_S1 + 114) +
                one_over_two_q * *(b + 77 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 78);
            *(b + 113 * OS1_S1 + 160) =
                prefactor_z * *(b + 113 * OS1_S1 + 115) -
                p_over_q * *(b + 158 * OS1_S1 + 115) +
                one_over_two_q * *(b + 77 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 113 * OS1_S1 + 79);
            *(b + 113 * OS1_S1 + 161) =
                prefactor_y * *(b + 113 * OS1_S1 + 117) -
                p_over_q * *(b + 157 * OS1_S1 + 117) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 113 * OS1_S1 + 82);
            *(b + 113 * OS1_S1 + 162) =
                prefactor_y * *(b + 113 * OS1_S1 + 118) -
                p_over_q * *(b + 157 * OS1_S1 + 118) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 118) +
                one_over_two_q * *(b + 113 * OS1_S1 + 83);
            *(b + 113 * OS1_S1 + 163) =
                prefactor_y * *(b + 113 * OS1_S1 + 119) -
                p_over_q * *(b + 157 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 78 * OS1_S1 + 119);
            *(b + 113 * OS1_S1 + 164) =
                prefactor_z * *(b + 113 * OS1_S1 + 119) -
                p_over_q * *(b + 158 * OS1_S1 + 119) +
                one_over_two_q * *(b + 77 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 113 * OS1_S1 + 83);
            *(b + 114 * OS1_S1 + 120) =
                prefactor_x * *(b + 114 * OS1_S1 + 84) -
                p_over_q * *(b + 150 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 114 * OS1_S1 + 56);
            *(b + 114 * OS1_S1 + 121) =
                prefactor_y * *(b + 114 * OS1_S1 + 84) -
                p_over_q * *(b + 158 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 84);
            *(b + 114 * OS1_S1 + 122) =
                prefactor_z * *(b + 114 * OS1_S1 + 84) -
                p_over_q * *(b + 159 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 84);
            *(b + 114 * OS1_S1 + 123) =
                prefactor_y * *(b + 114 * OS1_S1 + 85) -
                p_over_q * *(b + 158 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 85) +
                one_over_two_q * *(b + 114 * OS1_S1 + 56);
            *(b + 114 * OS1_S1 + 124) =
                prefactor_z * *(b + 114 * OS1_S1 + 85) -
                p_over_q * *(b + 159 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 85);
            *(b + 114 * OS1_S1 + 125) =
                prefactor_z * *(b + 114 * OS1_S1 + 86) -
                p_over_q * *(b + 159 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 86) +
                one_over_two_q * *(b + 114 * OS1_S1 + 56);
            *(b + 114 * OS1_S1 + 126) =
                prefactor_y * *(b + 114 * OS1_S1 + 87) -
                p_over_q * *(b + 158 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 57);
            *(b + 114 * OS1_S1 + 127) =
                prefactor_z * *(b + 114 * OS1_S1 + 87) -
                p_over_q * *(b + 159 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 87);
            *(b + 114 * OS1_S1 + 128) =
                prefactor_y * *(b + 114 * OS1_S1 + 89) -
                p_over_q * *(b + 158 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 89);
            *(b + 114 * OS1_S1 + 129) =
                prefactor_z * *(b + 114 * OS1_S1 + 89) -
                p_over_q * *(b + 159 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 58);
            *(b + 114 * OS1_S1 + 130) =
                prefactor_x * *(b + 114 * OS1_S1 + 94) -
                p_over_q * *(b + 150 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 66);
            *(b + 114 * OS1_S1 + 131) =
                prefactor_z * *(b + 114 * OS1_S1 + 90) -
                p_over_q * *(b + 159 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 90);
            *(b + 114 * OS1_S1 + 132) =
                prefactor_z * *(b + 114 * OS1_S1 + 91) -
                p_over_q * *(b + 159 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 91) +
                one_over_two_q * *(b + 114 * OS1_S1 + 59);
            *(b + 114 * OS1_S1 + 133) =
                prefactor_y * *(b + 114 * OS1_S1 + 93) -
                p_over_q * *(b + 158 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 93);
            *(b + 114 * OS1_S1 + 134) =
                prefactor_x * *(b + 114 * OS1_S1 + 98) -
                p_over_q * *(b + 150 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 70);
            *(b + 114 * OS1_S1 + 135) =
                prefactor_x * *(b + 114 * OS1_S1 + 99) -
                p_over_q * *(b + 150 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 71);
            *(b + 114 * OS1_S1 + 136) =
                prefactor_z * *(b + 114 * OS1_S1 + 94) -
                p_over_q * *(b + 159 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 94);
            *(b + 114 * OS1_S1 + 137) =
                prefactor_z * *(b + 114 * OS1_S1 + 95) -
                p_over_q * *(b + 159 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 95) +
                one_over_two_q * *(b + 114 * OS1_S1 + 62);
            *(b + 114 * OS1_S1 + 138) =
                prefactor_y * *(b + 114 * OS1_S1 + 97) -
                p_over_q * *(b + 158 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 97) +
                one_over_two_q * *(b + 114 * OS1_S1 + 65);
            *(b + 114 * OS1_S1 + 139) =
                prefactor_y * *(b + 114 * OS1_S1 + 98) -
                p_over_q * *(b + 158 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 98);
            *(b + 114 * OS1_S1 + 140) =
                prefactor_x * *(b + 114 * OS1_S1 + 104) -
                p_over_q * *(b + 150 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 76);
            *(b + 114 * OS1_S1 + 141) =
                prefactor_x * *(b + 114 * OS1_S1 + 105) -
                p_over_q * *(b + 150 * OS1_S1 + 105) +
                one_over_two_q * *(b + 114 * OS1_S1 + 77);
            *(b + 114 * OS1_S1 + 142) =
                prefactor_z * *(b + 114 * OS1_S1 + 99) -
                p_over_q * *(b + 159 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 99);
            *(b + 114 * OS1_S1 + 143) =
                prefactor_x * *(b + 114 * OS1_S1 + 107) -
                p_over_q * *(b + 150 * OS1_S1 + 107) +
                one_over_two_q * *(b + 114 * OS1_S1 + 79);
            *(b + 114 * OS1_S1 + 144) =
                prefactor_x * *(b + 114 * OS1_S1 + 108) -
                p_over_q * *(b + 150 * OS1_S1 + 108) +
                one_over_two_q * *(b + 114 * OS1_S1 + 80);
            *(b + 114 * OS1_S1 + 145) =
                prefactor_x * *(b + 114 * OS1_S1 + 109) -
                p_over_q * *(b + 150 * OS1_S1 + 109) +
                one_over_two_q * *(b + 114 * OS1_S1 + 81);
            *(b + 114 * OS1_S1 + 146) =
                prefactor_y * *(b + 114 * OS1_S1 + 104) -
                p_over_q * *(b + 158 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 104);
            *(b + 114 * OS1_S1 + 147) =
                prefactor_x * *(b + 114 * OS1_S1 + 111) -
                p_over_q * *(b + 150 * OS1_S1 + 111) +
                one_over_two_q * *(b + 114 * OS1_S1 + 83);
            *(b + 114 * OS1_S1 + 148) =
                prefactor_x * *(b + 114 * OS1_S1 + 112) -
                p_over_q * *(b + 150 * OS1_S1 + 112);
            *(b + 114 * OS1_S1 + 149) =
                prefactor_x * *(b + 114 * OS1_S1 + 113) -
                p_over_q * *(b + 150 * OS1_S1 + 113);
            *(b + 114 * OS1_S1 + 150) =
                prefactor_x * *(b + 114 * OS1_S1 + 114) -
                p_over_q * *(b + 150 * OS1_S1 + 114);
            *(b + 114 * OS1_S1 + 151) =
                prefactor_x * *(b + 114 * OS1_S1 + 115) -
                p_over_q * *(b + 150 * OS1_S1 + 115);
            *(b + 114 * OS1_S1 + 152) =
                prefactor_x * *(b + 114 * OS1_S1 + 116) -
                p_over_q * *(b + 150 * OS1_S1 + 116);
            *(b + 114 * OS1_S1 + 153) =
                prefactor_x * *(b + 114 * OS1_S1 + 117) -
                p_over_q * *(b + 150 * OS1_S1 + 117);
            *(b + 114 * OS1_S1 + 154) =
                prefactor_x * *(b + 114 * OS1_S1 + 118) -
                p_over_q * *(b + 150 * OS1_S1 + 118);
            *(b + 114 * OS1_S1 + 155) =
                prefactor_x * *(b + 114 * OS1_S1 + 119) -
                p_over_q * *(b + 150 * OS1_S1 + 119);
            *(b + 114 * OS1_S1 + 156) =
                prefactor_y * *(b + 114 * OS1_S1 + 112) -
                p_over_q * *(b + 158 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 114 * OS1_S1 + 77);
            *(b + 114 * OS1_S1 + 157) =
                prefactor_z * *(b + 114 * OS1_S1 + 112) -
                p_over_q * *(b + 159 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 112);
            *(b + 114 * OS1_S1 + 158) =
                prefactor_z * *(b + 114 * OS1_S1 + 113) -
                p_over_q * *(b + 159 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 113) +
                one_over_two_q * *(b + 114 * OS1_S1 + 77);
            *(b + 114 * OS1_S1 + 159) =
                prefactor_z * *(b + 114 * OS1_S1 + 114) -
                p_over_q * *(b + 159 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 78);
            *(b + 114 * OS1_S1 + 160) =
                prefactor_z * *(b + 114 * OS1_S1 + 115) -
                p_over_q * *(b + 159 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 114 * OS1_S1 + 79);
            *(b + 114 * OS1_S1 + 161) =
                prefactor_y * *(b + 114 * OS1_S1 + 117) -
                p_over_q * *(b + 158 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 114 * OS1_S1 + 82);
            *(b + 114 * OS1_S1 + 162) =
                prefactor_y * *(b + 114 * OS1_S1 + 118) -
                p_over_q * *(b + 158 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 118) +
                one_over_two_q * *(b + 114 * OS1_S1 + 83);
            *(b + 114 * OS1_S1 + 163) =
                prefactor_y * *(b + 114 * OS1_S1 + 119) -
                p_over_q * *(b + 158 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 79 * OS1_S1 + 119);
            *(b + 114 * OS1_S1 + 164) =
                prefactor_z * *(b + 114 * OS1_S1 + 119) -
                p_over_q * *(b + 159 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 78 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 114 * OS1_S1 + 83);
            *(b + 115 * OS1_S1 + 120) =
                prefactor_x * *(b + 115 * OS1_S1 + 84) -
                p_over_q * *(b + 151 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 115 * OS1_S1 + 56);
            *(b + 115 * OS1_S1 + 121) =
                prefactor_y * *(b + 115 * OS1_S1 + 84) -
                p_over_q * *(b + 159 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 84);
            *(b + 115 * OS1_S1 + 122) =
                prefactor_z * *(b + 115 * OS1_S1 + 84) -
                p_over_q * *(b + 160 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 84);
            *(b + 115 * OS1_S1 + 123) =
                prefactor_y * *(b + 115 * OS1_S1 + 85) -
                p_over_q * *(b + 159 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 85) +
                one_over_two_q * *(b + 115 * OS1_S1 + 56);
            *(b + 115 * OS1_S1 + 124) =
                prefactor_z * *(b + 115 * OS1_S1 + 85) -
                p_over_q * *(b + 160 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 85);
            *(b + 115 * OS1_S1 + 125) =
                prefactor_z * *(b + 115 * OS1_S1 + 86) -
                p_over_q * *(b + 160 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 86) +
                one_over_two_q * *(b + 115 * OS1_S1 + 56);
            *(b + 115 * OS1_S1 + 126) =
                prefactor_y * *(b + 115 * OS1_S1 + 87) -
                p_over_q * *(b + 159 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 57);
            *(b + 115 * OS1_S1 + 127) =
                prefactor_z * *(b + 115 * OS1_S1 + 87) -
                p_over_q * *(b + 160 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 87);
            *(b + 115 * OS1_S1 + 128) =
                prefactor_y * *(b + 115 * OS1_S1 + 89) -
                p_over_q * *(b + 159 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 89);
            *(b + 115 * OS1_S1 + 129) =
                prefactor_z * *(b + 115 * OS1_S1 + 89) -
                p_over_q * *(b + 160 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 58);
            *(b + 115 * OS1_S1 + 130) =
                prefactor_x * *(b + 115 * OS1_S1 + 94) -
                p_over_q * *(b + 151 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 115 * OS1_S1 + 66);
            *(b + 115 * OS1_S1 + 131) =
                prefactor_z * *(b + 115 * OS1_S1 + 90) -
                p_over_q * *(b + 160 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 90);
            *(b + 115 * OS1_S1 + 132) =
                prefactor_z * *(b + 115 * OS1_S1 + 91) -
                p_over_q * *(b + 160 * OS1_S1 + 91) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 91) +
                one_over_two_q * *(b + 115 * OS1_S1 + 59);
            *(b + 115 * OS1_S1 + 133) =
                prefactor_y * *(b + 115 * OS1_S1 + 93) -
                p_over_q * *(b + 159 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 93);
            *(b + 115 * OS1_S1 + 134) =
                prefactor_x * *(b + 115 * OS1_S1 + 98) -
                p_over_q * *(b + 151 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 115 * OS1_S1 + 70);
            *(b + 115 * OS1_S1 + 135) =
                prefactor_x * *(b + 115 * OS1_S1 + 99) -
                p_over_q * *(b + 151 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 71);
            *(b + 115 * OS1_S1 + 136) =
                prefactor_z * *(b + 115 * OS1_S1 + 94) -
                p_over_q * *(b + 160 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 94);
            *(b + 115 * OS1_S1 + 137) =
                prefactor_z * *(b + 115 * OS1_S1 + 95) -
                p_over_q * *(b + 160 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 95) +
                one_over_two_q * *(b + 115 * OS1_S1 + 62);
            *(b + 115 * OS1_S1 + 138) =
                prefactor_y * *(b + 115 * OS1_S1 + 97) -
                p_over_q * *(b + 159 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 97) +
                one_over_two_q * *(b + 115 * OS1_S1 + 65);
            *(b + 115 * OS1_S1 + 139) =
                prefactor_y * *(b + 115 * OS1_S1 + 98) -
                p_over_q * *(b + 159 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 98);
            *(b + 115 * OS1_S1 + 140) =
                prefactor_x * *(b + 115 * OS1_S1 + 104) -
                p_over_q * *(b + 151 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 76);
            *(b + 115 * OS1_S1 + 141) =
                prefactor_x * *(b + 115 * OS1_S1 + 105) -
                p_over_q * *(b + 151 * OS1_S1 + 105) +
                one_over_two_q * *(b + 115 * OS1_S1 + 77);
            *(b + 115 * OS1_S1 + 142) =
                prefactor_z * *(b + 115 * OS1_S1 + 99) -
                p_over_q * *(b + 160 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 99);
            *(b + 115 * OS1_S1 + 143) =
                prefactor_x * *(b + 115 * OS1_S1 + 107) -
                p_over_q * *(b + 151 * OS1_S1 + 107) +
                one_over_two_q * *(b + 115 * OS1_S1 + 79);
            *(b + 115 * OS1_S1 + 144) =
                prefactor_x * *(b + 115 * OS1_S1 + 108) -
                p_over_q * *(b + 151 * OS1_S1 + 108) +
                one_over_two_q * *(b + 115 * OS1_S1 + 80);
            *(b + 115 * OS1_S1 + 145) =
                prefactor_x * *(b + 115 * OS1_S1 + 109) -
                p_over_q * *(b + 151 * OS1_S1 + 109) +
                one_over_two_q * *(b + 115 * OS1_S1 + 81);
            *(b + 115 * OS1_S1 + 146) =
                prefactor_y * *(b + 115 * OS1_S1 + 104) -
                p_over_q * *(b + 159 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 104);
            *(b + 115 * OS1_S1 + 147) =
                prefactor_x * *(b + 115 * OS1_S1 + 111) -
                p_over_q * *(b + 151 * OS1_S1 + 111) +
                one_over_two_q * *(b + 115 * OS1_S1 + 83);
            *(b + 115 * OS1_S1 + 148) =
                prefactor_x * *(b + 115 * OS1_S1 + 112) -
                p_over_q * *(b + 151 * OS1_S1 + 112);
            *(b + 115 * OS1_S1 + 149) =
                prefactor_x * *(b + 115 * OS1_S1 + 113) -
                p_over_q * *(b + 151 * OS1_S1 + 113);
            *(b + 115 * OS1_S1 + 150) =
                prefactor_x * *(b + 115 * OS1_S1 + 114) -
                p_over_q * *(b + 151 * OS1_S1 + 114);
            *(b + 115 * OS1_S1 + 151) =
                prefactor_x * *(b + 115 * OS1_S1 + 115) -
                p_over_q * *(b + 151 * OS1_S1 + 115);
            *(b + 115 * OS1_S1 + 152) =
                prefactor_x * *(b + 115 * OS1_S1 + 116) -
                p_over_q * *(b + 151 * OS1_S1 + 116);
            *(b + 115 * OS1_S1 + 153) =
                prefactor_x * *(b + 115 * OS1_S1 + 117) -
                p_over_q * *(b + 151 * OS1_S1 + 117);
            *(b + 115 * OS1_S1 + 154) =
                prefactor_x * *(b + 115 * OS1_S1 + 118) -
                p_over_q * *(b + 151 * OS1_S1 + 118);
            *(b + 115 * OS1_S1 + 155) =
                prefactor_x * *(b + 115 * OS1_S1 + 119) -
                p_over_q * *(b + 151 * OS1_S1 + 119);
            *(b + 115 * OS1_S1 + 156) =
                prefactor_y * *(b + 115 * OS1_S1 + 112) -
                p_over_q * *(b + 159 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 115 * OS1_S1 + 77);
            *(b + 115 * OS1_S1 + 157) =
                prefactor_z * *(b + 115 * OS1_S1 + 112) -
                p_over_q * *(b + 160 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 112);
            *(b + 115 * OS1_S1 + 158) =
                prefactor_z * *(b + 115 * OS1_S1 + 113) -
                p_over_q * *(b + 160 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 113) +
                one_over_two_q * *(b + 115 * OS1_S1 + 77);
            *(b + 115 * OS1_S1 + 159) =
                prefactor_z * *(b + 115 * OS1_S1 + 114) -
                p_over_q * *(b + 160 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 78);
            *(b + 115 * OS1_S1 + 160) =
                prefactor_z * *(b + 115 * OS1_S1 + 115) -
                p_over_q * *(b + 160 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 115 * OS1_S1 + 79);
            *(b + 115 * OS1_S1 + 161) =
                prefactor_y * *(b + 115 * OS1_S1 + 117) -
                p_over_q * *(b + 159 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 115 * OS1_S1 + 82);
            *(b + 115 * OS1_S1 + 162) =
                prefactor_y * *(b + 115 * OS1_S1 + 118) -
                p_over_q * *(b + 159 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 118) +
                one_over_two_q * *(b + 115 * OS1_S1 + 83);
            *(b + 115 * OS1_S1 + 163) =
                prefactor_y * *(b + 115 * OS1_S1 + 119) -
                p_over_q * *(b + 159 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 119);
            *(b + 115 * OS1_S1 + 164) =
                prefactor_z * *(b + 115 * OS1_S1 + 119) -
                p_over_q * *(b + 160 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 79 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 115 * OS1_S1 + 83);
            *(b + 116 * OS1_S1 + 120) =
                prefactor_x * *(b + 116 * OS1_S1 + 84) -
                p_over_q * *(b + 152 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 116 * OS1_S1 + 56);
            *(b + 116 * OS1_S1 + 121) =
                prefactor_y * *(b + 116 * OS1_S1 + 84) -
                p_over_q * *(b + 160 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 84);
            *(b + 116 * OS1_S1 + 122) =
                prefactor_z * *(b + 116 * OS1_S1 + 84) -
                p_over_q * *(b + 161 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 84);
            *(b + 116 * OS1_S1 + 123) =
                prefactor_y * *(b + 116 * OS1_S1 + 85) -
                p_over_q * *(b + 160 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 85) +
                one_over_two_q * *(b + 116 * OS1_S1 + 56);
            *(b + 116 * OS1_S1 + 124) =
                prefactor_y * *(b + 116 * OS1_S1 + 86) -
                p_over_q * *(b + 160 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 86);
            *(b + 116 * OS1_S1 + 125) =
                prefactor_z * *(b + 116 * OS1_S1 + 86) -
                p_over_q * *(b + 161 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 86) +
                one_over_two_q * *(b + 116 * OS1_S1 + 56);
            *(b + 116 * OS1_S1 + 126) =
                prefactor_y * *(b + 116 * OS1_S1 + 87) -
                p_over_q * *(b + 160 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 57);
            *(b + 116 * OS1_S1 + 127) =
                prefactor_z * *(b + 116 * OS1_S1 + 87) -
                p_over_q * *(b + 161 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 87);
            *(b + 116 * OS1_S1 + 128) =
                prefactor_y * *(b + 116 * OS1_S1 + 89) -
                p_over_q * *(b + 160 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 89);
            *(b + 116 * OS1_S1 + 129) =
                prefactor_z * *(b + 116 * OS1_S1 + 89) -
                p_over_q * *(b + 161 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 58);
            *(b + 116 * OS1_S1 + 130) =
                prefactor_x * *(b + 116 * OS1_S1 + 94) -
                p_over_q * *(b + 152 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 116 * OS1_S1 + 66);
            *(b + 116 * OS1_S1 + 131) =
                prefactor_z * *(b + 116 * OS1_S1 + 90) -
                p_over_q * *(b + 161 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 90);
            *(b + 116 * OS1_S1 + 132) =
                prefactor_y * *(b + 116 * OS1_S1 + 92) -
                p_over_q * *(b + 160 * OS1_S1 + 92) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 92) +
                one_over_two_q * *(b + 116 * OS1_S1 + 61);
            *(b + 116 * OS1_S1 + 133) =
                prefactor_y * *(b + 116 * OS1_S1 + 93) -
                p_over_q * *(b + 160 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 93);
            *(b + 116 * OS1_S1 + 134) =
                prefactor_x * *(b + 116 * OS1_S1 + 98) -
                p_over_q * *(b + 152 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 116 * OS1_S1 + 70);
            *(b + 116 * OS1_S1 + 135) =
                prefactor_x * *(b + 116 * OS1_S1 + 99) -
                p_over_q * *(b + 152 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 71);
            *(b + 116 * OS1_S1 + 136) =
                prefactor_z * *(b + 116 * OS1_S1 + 94) -
                p_over_q * *(b + 161 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 94);
            *(b + 116 * OS1_S1 + 137) =
                prefactor_z * *(b + 116 * OS1_S1 + 95) -
                p_over_q * *(b + 161 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 95) +
                one_over_two_q * *(b + 116 * OS1_S1 + 62);
            *(b + 116 * OS1_S1 + 138) =
                prefactor_y * *(b + 116 * OS1_S1 + 97) -
                p_over_q * *(b + 160 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 97) +
                one_over_two_q * *(b + 116 * OS1_S1 + 65);
            *(b + 116 * OS1_S1 + 139) =
                prefactor_y * *(b + 116 * OS1_S1 + 98) -
                p_over_q * *(b + 160 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 98);
            *(b + 116 * OS1_S1 + 140) =
                prefactor_x * *(b + 116 * OS1_S1 + 104) -
                p_over_q * *(b + 152 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 76);
            *(b + 116 * OS1_S1 + 141) =
                prefactor_x * *(b + 116 * OS1_S1 + 105) -
                p_over_q * *(b + 152 * OS1_S1 + 105) +
                one_over_two_q * *(b + 116 * OS1_S1 + 77);
            *(b + 116 * OS1_S1 + 142) =
                prefactor_z * *(b + 116 * OS1_S1 + 99) -
                p_over_q * *(b + 161 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 99);
            *(b + 116 * OS1_S1 + 143) =
                prefactor_x * *(b + 116 * OS1_S1 + 107) -
                p_over_q * *(b + 152 * OS1_S1 + 107) +
                one_over_two_q * *(b + 116 * OS1_S1 + 79);
            *(b + 116 * OS1_S1 + 144) =
                prefactor_x * *(b + 116 * OS1_S1 + 108) -
                p_over_q * *(b + 152 * OS1_S1 + 108) +
                one_over_two_q * *(b + 116 * OS1_S1 + 80);
            *(b + 116 * OS1_S1 + 145) =
                prefactor_x * *(b + 116 * OS1_S1 + 109) -
                p_over_q * *(b + 152 * OS1_S1 + 109) +
                one_over_two_q * *(b + 116 * OS1_S1 + 81);
            *(b + 116 * OS1_S1 + 146) =
                prefactor_y * *(b + 116 * OS1_S1 + 104) -
                p_over_q * *(b + 160 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 104);
            *(b + 116 * OS1_S1 + 147) =
                prefactor_x * *(b + 116 * OS1_S1 + 111) -
                p_over_q * *(b + 152 * OS1_S1 + 111) +
                one_over_two_q * *(b + 116 * OS1_S1 + 83);
            *(b + 116 * OS1_S1 + 148) =
                prefactor_x * *(b + 116 * OS1_S1 + 112) -
                p_over_q * *(b + 152 * OS1_S1 + 112);
            *(b + 116 * OS1_S1 + 149) =
                prefactor_x * *(b + 116 * OS1_S1 + 113) -
                p_over_q * *(b + 152 * OS1_S1 + 113);
            *(b + 116 * OS1_S1 + 150) =
                prefactor_x * *(b + 116 * OS1_S1 + 114) -
                p_over_q * *(b + 152 * OS1_S1 + 114);
            *(b + 116 * OS1_S1 + 151) =
                prefactor_x * *(b + 116 * OS1_S1 + 115) -
                p_over_q * *(b + 152 * OS1_S1 + 115);
            *(b + 116 * OS1_S1 + 152) =
                prefactor_x * *(b + 116 * OS1_S1 + 116) -
                p_over_q * *(b + 152 * OS1_S1 + 116);
            *(b + 116 * OS1_S1 + 153) =
                prefactor_x * *(b + 116 * OS1_S1 + 117) -
                p_over_q * *(b + 152 * OS1_S1 + 117);
            *(b + 116 * OS1_S1 + 154) =
                prefactor_x * *(b + 116 * OS1_S1 + 118) -
                p_over_q * *(b + 152 * OS1_S1 + 118);
            *(b + 116 * OS1_S1 + 155) =
                prefactor_x * *(b + 116 * OS1_S1 + 119) -
                p_over_q * *(b + 152 * OS1_S1 + 119);
            *(b + 116 * OS1_S1 + 156) =
                prefactor_y * *(b + 116 * OS1_S1 + 112) -
                p_over_q * *(b + 160 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 116 * OS1_S1 + 77);
            *(b + 116 * OS1_S1 + 157) =
                prefactor_z * *(b + 116 * OS1_S1 + 112) -
                p_over_q * *(b + 161 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 112);
            *(b + 116 * OS1_S1 + 158) =
                prefactor_z * *(b + 116 * OS1_S1 + 113) -
                p_over_q * *(b + 161 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 113) +
                one_over_two_q * *(b + 116 * OS1_S1 + 77);
            *(b + 116 * OS1_S1 + 159) =
                prefactor_z * *(b + 116 * OS1_S1 + 114) -
                p_over_q * *(b + 161 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 78);
            *(b + 116 * OS1_S1 + 160) =
                prefactor_y * *(b + 116 * OS1_S1 + 116) -
                p_over_q * *(b + 160 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 116 * OS1_S1 + 81);
            *(b + 116 * OS1_S1 + 161) =
                prefactor_y * *(b + 116 * OS1_S1 + 117) -
                p_over_q * *(b + 160 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 116 * OS1_S1 + 82);
            *(b + 116 * OS1_S1 + 162) =
                prefactor_y * *(b + 116 * OS1_S1 + 118) -
                p_over_q * *(b + 160 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 118) +
                one_over_two_q * *(b + 116 * OS1_S1 + 83);
            *(b + 116 * OS1_S1 + 163) =
                prefactor_y * *(b + 116 * OS1_S1 + 119) -
                p_over_q * *(b + 160 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 81 * OS1_S1 + 119);
            *(b + 116 * OS1_S1 + 164) =
                prefactor_z * *(b + 116 * OS1_S1 + 119) -
                p_over_q * *(b + 161 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 80 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 116 * OS1_S1 + 83);
            *(b + 117 * OS1_S1 + 120) =
                prefactor_x * *(b + 117 * OS1_S1 + 84) -
                p_over_q * *(b + 153 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 117 * OS1_S1 + 56);
            *(b + 117 * OS1_S1 + 121) =
                prefactor_y * *(b + 117 * OS1_S1 + 84) -
                p_over_q * *(b + 161 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 84);
            *(b + 117 * OS1_S1 + 122) =
                prefactor_z * *(b + 117 * OS1_S1 + 84) -
                p_over_q * *(b + 162 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 84);
            *(b + 117 * OS1_S1 + 123) =
                prefactor_y * *(b + 117 * OS1_S1 + 85) -
                p_over_q * *(b + 161 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 85) +
                one_over_two_q * *(b + 117 * OS1_S1 + 56);
            *(b + 117 * OS1_S1 + 124) =
                prefactor_y * *(b + 117 * OS1_S1 + 86) -
                p_over_q * *(b + 161 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 86);
            *(b + 117 * OS1_S1 + 125) =
                prefactor_z * *(b + 117 * OS1_S1 + 86) -
                p_over_q * *(b + 162 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 86) +
                one_over_two_q * *(b + 117 * OS1_S1 + 56);
            *(b + 117 * OS1_S1 + 126) =
                prefactor_y * *(b + 117 * OS1_S1 + 87) -
                p_over_q * *(b + 161 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 57);
            *(b + 117 * OS1_S1 + 127) =
                prefactor_z * *(b + 117 * OS1_S1 + 87) -
                p_over_q * *(b + 162 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 87);
            *(b + 117 * OS1_S1 + 128) =
                prefactor_y * *(b + 117 * OS1_S1 + 89) -
                p_over_q * *(b + 161 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 89);
            *(b + 117 * OS1_S1 + 129) =
                prefactor_z * *(b + 117 * OS1_S1 + 89) -
                p_over_q * *(b + 162 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 58);
            *(b + 117 * OS1_S1 + 130) =
                prefactor_x * *(b + 117 * OS1_S1 + 94) -
                p_over_q * *(b + 153 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 66);
            *(b + 117 * OS1_S1 + 131) =
                prefactor_z * *(b + 117 * OS1_S1 + 90) -
                p_over_q * *(b + 162 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 90);
            *(b + 117 * OS1_S1 + 132) =
                prefactor_y * *(b + 117 * OS1_S1 + 92) -
                p_over_q * *(b + 161 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 92) +
                one_over_two_q * *(b + 117 * OS1_S1 + 61);
            *(b + 117 * OS1_S1 + 133) =
                prefactor_y * *(b + 117 * OS1_S1 + 93) -
                p_over_q * *(b + 161 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 93);
            *(b + 117 * OS1_S1 + 134) =
                prefactor_x * *(b + 117 * OS1_S1 + 98) -
                p_over_q * *(b + 153 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 70);
            *(b + 117 * OS1_S1 + 135) =
                prefactor_x * *(b + 117 * OS1_S1 + 99) -
                p_over_q * *(b + 153 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 71);
            *(b + 117 * OS1_S1 + 136) =
                prefactor_z * *(b + 117 * OS1_S1 + 94) -
                p_over_q * *(b + 162 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 94);
            *(b + 117 * OS1_S1 + 137) =
                prefactor_z * *(b + 117 * OS1_S1 + 95) -
                p_over_q * *(b + 162 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 95) +
                one_over_two_q * *(b + 117 * OS1_S1 + 62);
            *(b + 117 * OS1_S1 + 138) =
                prefactor_y * *(b + 117 * OS1_S1 + 97) -
                p_over_q * *(b + 161 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 97) +
                one_over_two_q * *(b + 117 * OS1_S1 + 65);
            *(b + 117 * OS1_S1 + 139) =
                prefactor_y * *(b + 117 * OS1_S1 + 98) -
                p_over_q * *(b + 161 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 98);
            *(b + 117 * OS1_S1 + 140) =
                prefactor_x * *(b + 117 * OS1_S1 + 104) -
                p_over_q * *(b + 153 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 76);
            *(b + 117 * OS1_S1 + 141) =
                prefactor_x * *(b + 117 * OS1_S1 + 105) -
                p_over_q * *(b + 153 * OS1_S1 + 105) +
                one_over_two_q * *(b + 117 * OS1_S1 + 77);
            *(b + 117 * OS1_S1 + 142) =
                prefactor_z * *(b + 117 * OS1_S1 + 99) -
                p_over_q * *(b + 162 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 99);
            *(b + 117 * OS1_S1 + 143) =
                prefactor_x * *(b + 117 * OS1_S1 + 107) -
                p_over_q * *(b + 153 * OS1_S1 + 107) +
                one_over_two_q * *(b + 117 * OS1_S1 + 79);
            *(b + 117 * OS1_S1 + 144) =
                prefactor_x * *(b + 117 * OS1_S1 + 108) -
                p_over_q * *(b + 153 * OS1_S1 + 108) +
                one_over_two_q * *(b + 117 * OS1_S1 + 80);
            *(b + 117 * OS1_S1 + 145) =
                prefactor_x * *(b + 117 * OS1_S1 + 109) -
                p_over_q * *(b + 153 * OS1_S1 + 109) +
                one_over_two_q * *(b + 117 * OS1_S1 + 81);
            *(b + 117 * OS1_S1 + 146) =
                prefactor_y * *(b + 117 * OS1_S1 + 104) -
                p_over_q * *(b + 161 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 104);
            *(b + 117 * OS1_S1 + 147) =
                prefactor_x * *(b + 117 * OS1_S1 + 111) -
                p_over_q * *(b + 153 * OS1_S1 + 111) +
                one_over_two_q * *(b + 117 * OS1_S1 + 83);
            *(b + 117 * OS1_S1 + 148) =
                prefactor_x * *(b + 117 * OS1_S1 + 112) -
                p_over_q * *(b + 153 * OS1_S1 + 112);
            *(b + 117 * OS1_S1 + 149) =
                prefactor_x * *(b + 117 * OS1_S1 + 113) -
                p_over_q * *(b + 153 * OS1_S1 + 113);
            *(b + 117 * OS1_S1 + 150) =
                prefactor_x * *(b + 117 * OS1_S1 + 114) -
                p_over_q * *(b + 153 * OS1_S1 + 114);
            *(b + 117 * OS1_S1 + 151) =
                prefactor_x * *(b + 117 * OS1_S1 + 115) -
                p_over_q * *(b + 153 * OS1_S1 + 115);
            *(b + 117 * OS1_S1 + 152) =
                prefactor_x * *(b + 117 * OS1_S1 + 116) -
                p_over_q * *(b + 153 * OS1_S1 + 116);
            *(b + 117 * OS1_S1 + 153) =
                prefactor_x * *(b + 117 * OS1_S1 + 117) -
                p_over_q * *(b + 153 * OS1_S1 + 117);
            *(b + 117 * OS1_S1 + 154) =
                prefactor_x * *(b + 117 * OS1_S1 + 118) -
                p_over_q * *(b + 153 * OS1_S1 + 118);
            *(b + 117 * OS1_S1 + 155) =
                prefactor_x * *(b + 117 * OS1_S1 + 119) -
                p_over_q * *(b + 153 * OS1_S1 + 119);
            *(b + 117 * OS1_S1 + 156) =
                prefactor_y * *(b + 117 * OS1_S1 + 112) -
                p_over_q * *(b + 161 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 117 * OS1_S1 + 77);
            *(b + 117 * OS1_S1 + 157) =
                prefactor_z * *(b + 117 * OS1_S1 + 112) -
                p_over_q * *(b + 162 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 112);
            *(b + 117 * OS1_S1 + 158) =
                prefactor_z * *(b + 117 * OS1_S1 + 113) -
                p_over_q * *(b + 162 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 113) +
                one_over_two_q * *(b + 117 * OS1_S1 + 77);
            *(b + 117 * OS1_S1 + 159) =
                prefactor_z * *(b + 117 * OS1_S1 + 114) -
                p_over_q * *(b + 162 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 78);
            *(b + 117 * OS1_S1 + 160) =
                prefactor_y * *(b + 117 * OS1_S1 + 116) -
                p_over_q * *(b + 161 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 117 * OS1_S1 + 81);
            *(b + 117 * OS1_S1 + 161) =
                prefactor_y * *(b + 117 * OS1_S1 + 117) -
                p_over_q * *(b + 161 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 117 * OS1_S1 + 82);
            *(b + 117 * OS1_S1 + 162) =
                prefactor_y * *(b + 117 * OS1_S1 + 118) -
                p_over_q * *(b + 161 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 118) +
                one_over_two_q * *(b + 117 * OS1_S1 + 83);
            *(b + 117 * OS1_S1 + 163) =
                prefactor_y * *(b + 117 * OS1_S1 + 119) -
                p_over_q * *(b + 161 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 82 * OS1_S1 + 119);
            *(b + 117 * OS1_S1 + 164) =
                prefactor_z * *(b + 117 * OS1_S1 + 119) -
                p_over_q * *(b + 162 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 81 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 117 * OS1_S1 + 83);
            *(b + 118 * OS1_S1 + 120) =
                prefactor_x * *(b + 118 * OS1_S1 + 84) -
                p_over_q * *(b + 154 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 56);
            *(b + 118 * OS1_S1 + 121) =
                prefactor_y * *(b + 118 * OS1_S1 + 84) -
                p_over_q * *(b + 162 * OS1_S1 + 84) +
                one_over_two_q * *(b + 83 * OS1_S1 + 84);
            *(b + 118 * OS1_S1 + 122) =
                prefactor_z * *(b + 118 * OS1_S1 + 84) -
                p_over_q * *(b + 163 * OS1_S1 + 84) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 84);
            *(b + 118 * OS1_S1 + 123) =
                prefactor_y * *(b + 118 * OS1_S1 + 85) -
                p_over_q * *(b + 162 * OS1_S1 + 85) +
                one_over_two_q * *(b + 83 * OS1_S1 + 85) +
                one_over_two_q * *(b + 118 * OS1_S1 + 56);
            *(b + 118 * OS1_S1 + 124) =
                prefactor_y * *(b + 118 * OS1_S1 + 86) -
                p_over_q * *(b + 162 * OS1_S1 + 86) +
                one_over_two_q * *(b + 83 * OS1_S1 + 86);
            *(b + 118 * OS1_S1 + 125) =
                prefactor_z * *(b + 118 * OS1_S1 + 86) -
                p_over_q * *(b + 163 * OS1_S1 + 86) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 86) +
                one_over_two_q * *(b + 118 * OS1_S1 + 56);
            *(b + 118 * OS1_S1 + 126) =
                prefactor_y * *(b + 118 * OS1_S1 + 87) -
                p_over_q * *(b + 162 * OS1_S1 + 87) +
                one_over_two_q * *(b + 83 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 57);
            *(b + 118 * OS1_S1 + 127) =
                prefactor_z * *(b + 118 * OS1_S1 + 87) -
                p_over_q * *(b + 163 * OS1_S1 + 87) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 87);
            *(b + 118 * OS1_S1 + 128) =
                prefactor_y * *(b + 118 * OS1_S1 + 89) -
                p_over_q * *(b + 162 * OS1_S1 + 89) +
                one_over_two_q * *(b + 83 * OS1_S1 + 89);
            *(b + 118 * OS1_S1 + 129) =
                prefactor_z * *(b + 118 * OS1_S1 + 89) -
                p_over_q * *(b + 163 * OS1_S1 + 89) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 58);
            *(b + 118 * OS1_S1 + 130) =
                prefactor_x * *(b + 118 * OS1_S1 + 94) -
                p_over_q * *(b + 154 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 118 * OS1_S1 + 66);
            *(b + 118 * OS1_S1 + 131) =
                prefactor_z * *(b + 118 * OS1_S1 + 90) -
                p_over_q * *(b + 163 * OS1_S1 + 90) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 90);
            *(b + 118 * OS1_S1 + 132) =
                prefactor_y * *(b + 118 * OS1_S1 + 92) -
                p_over_q * *(b + 162 * OS1_S1 + 92) +
                one_over_two_q * *(b + 83 * OS1_S1 + 92) +
                one_over_two_q * *(b + 118 * OS1_S1 + 61);
            *(b + 118 * OS1_S1 + 133) =
                prefactor_y * *(b + 118 * OS1_S1 + 93) -
                p_over_q * *(b + 162 * OS1_S1 + 93) +
                one_over_two_q * *(b + 83 * OS1_S1 + 93);
            *(b + 118 * OS1_S1 + 134) =
                prefactor_x * *(b + 118 * OS1_S1 + 98) -
                p_over_q * *(b + 154 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 118 * OS1_S1 + 70);
            *(b + 118 * OS1_S1 + 135) =
                prefactor_x * *(b + 118 * OS1_S1 + 99) -
                p_over_q * *(b + 154 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 71);
            *(b + 118 * OS1_S1 + 136) =
                prefactor_z * *(b + 118 * OS1_S1 + 94) -
                p_over_q * *(b + 163 * OS1_S1 + 94) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 94);
            *(b + 118 * OS1_S1 + 137) =
                prefactor_z * *(b + 118 * OS1_S1 + 95) -
                p_over_q * *(b + 163 * OS1_S1 + 95) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 95) +
                one_over_two_q * *(b + 118 * OS1_S1 + 62);
            *(b + 118 * OS1_S1 + 138) =
                prefactor_y * *(b + 118 * OS1_S1 + 97) -
                p_over_q * *(b + 162 * OS1_S1 + 97) +
                one_over_two_q * *(b + 83 * OS1_S1 + 97) +
                one_over_two_q * *(b + 118 * OS1_S1 + 65);
            *(b + 118 * OS1_S1 + 139) =
                prefactor_y * *(b + 118 * OS1_S1 + 98) -
                p_over_q * *(b + 162 * OS1_S1 + 98) +
                one_over_two_q * *(b + 83 * OS1_S1 + 98);
            *(b + 118 * OS1_S1 + 140) =
                prefactor_x * *(b + 118 * OS1_S1 + 104) -
                p_over_q * *(b + 154 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 76);
            *(b + 118 * OS1_S1 + 141) =
                prefactor_x * *(b + 118 * OS1_S1 + 105) -
                p_over_q * *(b + 154 * OS1_S1 + 105) +
                one_over_two_q * *(b + 118 * OS1_S1 + 77);
            *(b + 118 * OS1_S1 + 142) =
                prefactor_z * *(b + 118 * OS1_S1 + 99) -
                p_over_q * *(b + 163 * OS1_S1 + 99) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 99);
            *(b + 118 * OS1_S1 + 143) =
                prefactor_x * *(b + 118 * OS1_S1 + 107) -
                p_over_q * *(b + 154 * OS1_S1 + 107) +
                one_over_two_q * *(b + 118 * OS1_S1 + 79);
            *(b + 118 * OS1_S1 + 144) =
                prefactor_x * *(b + 118 * OS1_S1 + 108) -
                p_over_q * *(b + 154 * OS1_S1 + 108) +
                one_over_two_q * *(b + 118 * OS1_S1 + 80);
            *(b + 118 * OS1_S1 + 145) =
                prefactor_x * *(b + 118 * OS1_S1 + 109) -
                p_over_q * *(b + 154 * OS1_S1 + 109) +
                one_over_two_q * *(b + 118 * OS1_S1 + 81);
            *(b + 118 * OS1_S1 + 146) =
                prefactor_y * *(b + 118 * OS1_S1 + 104) -
                p_over_q * *(b + 162 * OS1_S1 + 104) +
                one_over_two_q * *(b + 83 * OS1_S1 + 104);
            *(b + 118 * OS1_S1 + 147) =
                prefactor_x * *(b + 118 * OS1_S1 + 111) -
                p_over_q * *(b + 154 * OS1_S1 + 111) +
                one_over_two_q * *(b + 118 * OS1_S1 + 83);
            *(b + 118 * OS1_S1 + 148) =
                prefactor_x * *(b + 118 * OS1_S1 + 112) -
                p_over_q * *(b + 154 * OS1_S1 + 112);
            *(b + 118 * OS1_S1 + 149) =
                prefactor_x * *(b + 118 * OS1_S1 + 113) -
                p_over_q * *(b + 154 * OS1_S1 + 113);
            *(b + 118 * OS1_S1 + 150) =
                prefactor_x * *(b + 118 * OS1_S1 + 114) -
                p_over_q * *(b + 154 * OS1_S1 + 114);
            *(b + 118 * OS1_S1 + 151) =
                prefactor_x * *(b + 118 * OS1_S1 + 115) -
                p_over_q * *(b + 154 * OS1_S1 + 115);
            *(b + 118 * OS1_S1 + 152) =
                prefactor_x * *(b + 118 * OS1_S1 + 116) -
                p_over_q * *(b + 154 * OS1_S1 + 116);
            *(b + 118 * OS1_S1 + 153) =
                prefactor_x * *(b + 118 * OS1_S1 + 117) -
                p_over_q * *(b + 154 * OS1_S1 + 117);
            *(b + 118 * OS1_S1 + 154) =
                prefactor_x * *(b + 118 * OS1_S1 + 118) -
                p_over_q * *(b + 154 * OS1_S1 + 118);
            *(b + 118 * OS1_S1 + 155) =
                prefactor_x * *(b + 118 * OS1_S1 + 119) -
                p_over_q * *(b + 154 * OS1_S1 + 119);
            *(b + 118 * OS1_S1 + 156) =
                prefactor_y * *(b + 118 * OS1_S1 + 112) -
                p_over_q * *(b + 162 * OS1_S1 + 112) +
                one_over_two_q * *(b + 83 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 77);
            *(b + 118 * OS1_S1 + 157) =
                prefactor_z * *(b + 118 * OS1_S1 + 112) -
                p_over_q * *(b + 163 * OS1_S1 + 112) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 112);
            *(b + 118 * OS1_S1 + 158) =
                prefactor_z * *(b + 118 * OS1_S1 + 113) -
                p_over_q * *(b + 163 * OS1_S1 + 113) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 113) +
                one_over_two_q * *(b + 118 * OS1_S1 + 77);
            *(b + 118 * OS1_S1 + 159) =
                prefactor_z * *(b + 118 * OS1_S1 + 114) -
                p_over_q * *(b + 163 * OS1_S1 + 114) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 78);
            *(b + 118 * OS1_S1 + 160) =
                prefactor_y * *(b + 118 * OS1_S1 + 116) -
                p_over_q * *(b + 162 * OS1_S1 + 116) +
                one_over_two_q * *(b + 83 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 118 * OS1_S1 + 81);
            *(b + 118 * OS1_S1 + 161) =
                prefactor_y * *(b + 118 * OS1_S1 + 117) -
                p_over_q * *(b + 162 * OS1_S1 + 117) +
                one_over_two_q * *(b + 83 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 118 * OS1_S1 + 82);
            *(b + 118 * OS1_S1 + 162) =
                prefactor_y * *(b + 118 * OS1_S1 + 118) -
                p_over_q * *(b + 162 * OS1_S1 + 118) +
                one_over_two_q * *(b + 83 * OS1_S1 + 118) +
                one_over_two_q * *(b + 118 * OS1_S1 + 83);
            *(b + 118 * OS1_S1 + 163) =
                prefactor_y * *(b + 118 * OS1_S1 + 119) -
                p_over_q * *(b + 162 * OS1_S1 + 119) +
                one_over_two_q * *(b + 83 * OS1_S1 + 119);
            *(b + 118 * OS1_S1 + 164) =
                prefactor_z * *(b + 118 * OS1_S1 + 119) -
                p_over_q * *(b + 163 * OS1_S1 + 119) +
                6 * one_over_two_q * *(b + 82 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 118 * OS1_S1 + 83);
            *(b + 119 * OS1_S1 + 120) =
                prefactor_x * *(b + 119 * OS1_S1 + 84) -
                p_over_q * *(b + 155 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 119 * OS1_S1 + 56);
            *(b + 119 * OS1_S1 + 121) = prefactor_y * *(b + 119 * OS1_S1 + 84) -
                                        p_over_q * *(b + 163 * OS1_S1 + 84);
            *(b + 119 * OS1_S1 + 122) =
                prefactor_z * *(b + 119 * OS1_S1 + 84) -
                p_over_q * *(b + 164 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 84);
            *(b + 119 * OS1_S1 + 123) =
                prefactor_y * *(b + 119 * OS1_S1 + 85) -
                p_over_q * *(b + 163 * OS1_S1 + 85) +
                one_over_two_q * *(b + 119 * OS1_S1 + 56);
            *(b + 119 * OS1_S1 + 124) = prefactor_y * *(b + 119 * OS1_S1 + 86) -
                                        p_over_q * *(b + 163 * OS1_S1 + 86);
            *(b + 119 * OS1_S1 + 125) =
                prefactor_z * *(b + 119 * OS1_S1 + 86) -
                p_over_q * *(b + 164 * OS1_S1 + 86) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 86) +
                one_over_two_q * *(b + 119 * OS1_S1 + 56);
            *(b + 119 * OS1_S1 + 126) =
                prefactor_y * *(b + 119 * OS1_S1 + 87) -
                p_over_q * *(b + 163 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 57);
            *(b + 119 * OS1_S1 + 127) =
                prefactor_z * *(b + 119 * OS1_S1 + 87) -
                p_over_q * *(b + 164 * OS1_S1 + 87) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 87);
            *(b + 119 * OS1_S1 + 128) = prefactor_y * *(b + 119 * OS1_S1 + 89) -
                                        p_over_q * *(b + 163 * OS1_S1 + 89);
            *(b + 119 * OS1_S1 + 129) =
                prefactor_z * *(b + 119 * OS1_S1 + 89) -
                p_over_q * *(b + 164 * OS1_S1 + 89) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 58);
            *(b + 119 * OS1_S1 + 130) =
                prefactor_y * *(b + 119 * OS1_S1 + 90) -
                p_over_q * *(b + 163 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 119 * OS1_S1 + 59);
            *(b + 119 * OS1_S1 + 131) =
                prefactor_z * *(b + 119 * OS1_S1 + 90) -
                p_over_q * *(b + 164 * OS1_S1 + 90) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 90);
            *(b + 119 * OS1_S1 + 132) =
                prefactor_y * *(b + 119 * OS1_S1 + 92) -
                p_over_q * *(b + 163 * OS1_S1 + 92) +
                one_over_two_q * *(b + 119 * OS1_S1 + 61);
            *(b + 119 * OS1_S1 + 133) = prefactor_y * *(b + 119 * OS1_S1 + 93) -
                                        p_over_q * *(b + 163 * OS1_S1 + 93);
            *(b + 119 * OS1_S1 + 134) =
                prefactor_x * *(b + 119 * OS1_S1 + 98) -
                p_over_q * *(b + 155 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 119 * OS1_S1 + 70);
            *(b + 119 * OS1_S1 + 135) =
                prefactor_x * *(b + 119 * OS1_S1 + 99) -
                p_over_q * *(b + 155 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 71);
            *(b + 119 * OS1_S1 + 136) =
                prefactor_z * *(b + 119 * OS1_S1 + 94) -
                p_over_q * *(b + 164 * OS1_S1 + 94) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 94);
            *(b + 119 * OS1_S1 + 137) =
                prefactor_z * *(b + 119 * OS1_S1 + 95) -
                p_over_q * *(b + 164 * OS1_S1 + 95) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 95) +
                one_over_two_q * *(b + 119 * OS1_S1 + 62);
            *(b + 119 * OS1_S1 + 138) =
                prefactor_y * *(b + 119 * OS1_S1 + 97) -
                p_over_q * *(b + 163 * OS1_S1 + 97) +
                one_over_two_q * *(b + 119 * OS1_S1 + 65);
            *(b + 119 * OS1_S1 + 139) = prefactor_y * *(b + 119 * OS1_S1 + 98) -
                                        p_over_q * *(b + 163 * OS1_S1 + 98);
            *(b + 119 * OS1_S1 + 140) =
                prefactor_x * *(b + 119 * OS1_S1 + 104) -
                p_over_q * *(b + 155 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 76);
            *(b + 119 * OS1_S1 + 141) =
                prefactor_x * *(b + 119 * OS1_S1 + 105) -
                p_over_q * *(b + 155 * OS1_S1 + 105) +
                one_over_two_q * *(b + 119 * OS1_S1 + 77);
            *(b + 119 * OS1_S1 + 142) =
                prefactor_z * *(b + 119 * OS1_S1 + 99) -
                p_over_q * *(b + 164 * OS1_S1 + 99) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 99);
            *(b + 119 * OS1_S1 + 143) =
                prefactor_x * *(b + 119 * OS1_S1 + 107) -
                p_over_q * *(b + 155 * OS1_S1 + 107) +
                one_over_two_q * *(b + 119 * OS1_S1 + 79);
            *(b + 119 * OS1_S1 + 144) =
                prefactor_x * *(b + 119 * OS1_S1 + 108) -
                p_over_q * *(b + 155 * OS1_S1 + 108) +
                one_over_two_q * *(b + 119 * OS1_S1 + 80);
            *(b + 119 * OS1_S1 + 145) =
                prefactor_y * *(b + 119 * OS1_S1 + 103) -
                p_over_q * *(b + 163 * OS1_S1 + 103) +
                one_over_two_q * *(b + 119 * OS1_S1 + 70);
            *(b + 119 * OS1_S1 + 146) =
                prefactor_y * *(b + 119 * OS1_S1 + 104) -
                p_over_q * *(b + 163 * OS1_S1 + 104);
            *(b + 119 * OS1_S1 + 147) =
                prefactor_x * *(b + 119 * OS1_S1 + 111) -
                p_over_q * *(b + 155 * OS1_S1 + 111) +
                one_over_two_q * *(b + 119 * OS1_S1 + 83);
            *(b + 119 * OS1_S1 + 148) =
                prefactor_x * *(b + 119 * OS1_S1 + 112) -
                p_over_q * *(b + 155 * OS1_S1 + 112);
            *(b + 119 * OS1_S1 + 149) =
                prefactor_x * *(b + 119 * OS1_S1 + 113) -
                p_over_q * *(b + 155 * OS1_S1 + 113);
            *(b + 119 * OS1_S1 + 150) =
                prefactor_x * *(b + 119 * OS1_S1 + 114) -
                p_over_q * *(b + 155 * OS1_S1 + 114);
            *(b + 119 * OS1_S1 + 151) =
                prefactor_x * *(b + 119 * OS1_S1 + 115) -
                p_over_q * *(b + 155 * OS1_S1 + 115);
            *(b + 119 * OS1_S1 + 152) =
                prefactor_x * *(b + 119 * OS1_S1 + 116) -
                p_over_q * *(b + 155 * OS1_S1 + 116);
            *(b + 119 * OS1_S1 + 153) =
                prefactor_x * *(b + 119 * OS1_S1 + 117) -
                p_over_q * *(b + 155 * OS1_S1 + 117);
            *(b + 119 * OS1_S1 + 154) =
                prefactor_y * *(b + 119 * OS1_S1 + 111) -
                p_over_q * *(b + 163 * OS1_S1 + 111);
            *(b + 119 * OS1_S1 + 155) =
                prefactor_x * *(b + 119 * OS1_S1 + 119) -
                p_over_q * *(b + 155 * OS1_S1 + 119);
            *(b + 119 * OS1_S1 + 156) =
                prefactor_y * *(b + 119 * OS1_S1 + 112) -
                p_over_q * *(b + 163 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 119 * OS1_S1 + 77);
            *(b + 119 * OS1_S1 + 157) =
                prefactor_z * *(b + 119 * OS1_S1 + 112) -
                p_over_q * *(b + 164 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 112);
            *(b + 119 * OS1_S1 + 158) =
                prefactor_z * *(b + 119 * OS1_S1 + 113) -
                p_over_q * *(b + 164 * OS1_S1 + 113) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 113) +
                one_over_two_q * *(b + 119 * OS1_S1 + 77);
            *(b + 119 * OS1_S1 + 159) =
                prefactor_z * *(b + 119 * OS1_S1 + 114) -
                p_over_q * *(b + 164 * OS1_S1 + 114) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 78);
            *(b + 119 * OS1_S1 + 160) =
                prefactor_y * *(b + 119 * OS1_S1 + 116) -
                p_over_q * *(b + 163 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 119 * OS1_S1 + 81);
            *(b + 119 * OS1_S1 + 161) =
                prefactor_y * *(b + 119 * OS1_S1 + 117) -
                p_over_q * *(b + 163 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 119 * OS1_S1 + 82);
            *(b + 119 * OS1_S1 + 162) =
                prefactor_y * *(b + 119 * OS1_S1 + 118) -
                p_over_q * *(b + 163 * OS1_S1 + 118) +
                one_over_two_q * *(b + 119 * OS1_S1 + 83);
            *(b + 119 * OS1_S1 + 163) =
                prefactor_y * *(b + 119 * OS1_S1 + 119) -
                p_over_q * *(b + 163 * OS1_S1 + 119);
            *(b + 119 * OS1_S1 + 164) =
                prefactor_z * *(b + 119 * OS1_S1 + 119) -
                p_over_q * *(b + 164 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 83 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 119 * OS1_S1 + 83);
            return;
        }
    }
}
