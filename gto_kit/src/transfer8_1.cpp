/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_4_8(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 20 * OS1_S1 + 120) =
                prefactor_x * *(b + 20 * OS1_S1 + 84) -
                p_over_q * *(b + 35 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 20 * OS1_S1 + 56);
            *(b + 20 * OS1_S1 + 121) = prefactor_y * *(b + 20 * OS1_S1 + 84) -
                                       p_over_q * *(b + 36 * OS1_S1 + 84);
            *(b + 20 * OS1_S1 + 122) = prefactor_z * *(b + 20 * OS1_S1 + 84) -
                                       p_over_q * *(b + 37 * OS1_S1 + 84);
            *(b + 20 * OS1_S1 + 123) = prefactor_y * *(b + 20 * OS1_S1 + 85) -
                                       p_over_q * *(b + 36 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 56);
            *(b + 20 * OS1_S1 + 124) = prefactor_z * *(b + 20 * OS1_S1 + 85) -
                                       p_over_q * *(b + 37 * OS1_S1 + 85);
            *(b + 20 * OS1_S1 + 125) = prefactor_z * *(b + 20 * OS1_S1 + 86) -
                                       p_over_q * *(b + 37 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 56);
            *(b + 20 * OS1_S1 + 126) =
                prefactor_y * *(b + 20 * OS1_S1 + 87) -
                p_over_q * *(b + 36 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 57);
            *(b + 20 * OS1_S1 + 127) = prefactor_z * *(b + 20 * OS1_S1 + 87) -
                                       p_over_q * *(b + 37 * OS1_S1 + 87);
            *(b + 20 * OS1_S1 + 128) = prefactor_y * *(b + 20 * OS1_S1 + 89) -
                                       p_over_q * *(b + 36 * OS1_S1 + 89);
            *(b + 20 * OS1_S1 + 129) =
                prefactor_z * *(b + 20 * OS1_S1 + 89) -
                p_over_q * *(b + 37 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 58);
            *(b + 20 * OS1_S1 + 130) =
                prefactor_y * *(b + 20 * OS1_S1 + 90) -
                p_over_q * *(b + 36 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 20 * OS1_S1 + 59);
            *(b + 20 * OS1_S1 + 131) = prefactor_z * *(b + 20 * OS1_S1 + 90) -
                                       p_over_q * *(b + 37 * OS1_S1 + 90);
            *(b + 20 * OS1_S1 + 132) = prefactor_z * *(b + 20 * OS1_S1 + 91) -
                                       p_over_q * *(b + 37 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 59);
            *(b + 20 * OS1_S1 + 133) = prefactor_y * *(b + 20 * OS1_S1 + 93) -
                                       p_over_q * *(b + 36 * OS1_S1 + 93);
            *(b + 20 * OS1_S1 + 134) =
                prefactor_z * *(b + 20 * OS1_S1 + 93) -
                p_over_q * *(b + 37 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 20 * OS1_S1 + 61);
            *(b + 20 * OS1_S1 + 135) =
                prefactor_x * *(b + 20 * OS1_S1 + 99) -
                p_over_q * *(b + 35 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 71);
            *(b + 20 * OS1_S1 + 136) = prefactor_z * *(b + 20 * OS1_S1 + 94) -
                                       p_over_q * *(b + 37 * OS1_S1 + 94);
            *(b + 20 * OS1_S1 + 137) = prefactor_z * *(b + 20 * OS1_S1 + 95) -
                                       p_over_q * *(b + 37 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 62);
            *(b + 20 * OS1_S1 + 138) = prefactor_y * *(b + 20 * OS1_S1 + 97) -
                                       p_over_q * *(b + 36 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 65);
            *(b + 20 * OS1_S1 + 139) = prefactor_y * *(b + 20 * OS1_S1 + 98) -
                                       p_over_q * *(b + 36 * OS1_S1 + 98);
            *(b + 20 * OS1_S1 + 140) =
                prefactor_x * *(b + 20 * OS1_S1 + 104) -
                p_over_q * *(b + 35 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 76);
            *(b + 20 * OS1_S1 + 141) =
                prefactor_x * *(b + 20 * OS1_S1 + 105) -
                p_over_q * *(b + 35 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 105) +
                one_over_two_q * *(b + 20 * OS1_S1 + 77);
            *(b + 20 * OS1_S1 + 142) = prefactor_z * *(b + 20 * OS1_S1 + 99) -
                                       p_over_q * *(b + 37 * OS1_S1 + 99);
            *(b + 20 * OS1_S1 + 143) = prefactor_z * *(b + 20 * OS1_S1 + 100) -
                                       p_over_q * *(b + 37 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 66);
            *(b + 20 * OS1_S1 + 144) =
                prefactor_x * *(b + 20 * OS1_S1 + 108) -
                p_over_q * *(b + 35 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 108) +
                one_over_two_q * *(b + 20 * OS1_S1 + 80);
            *(b + 20 * OS1_S1 + 145) = prefactor_y * *(b + 20 * OS1_S1 + 103) -
                                       p_over_q * *(b + 36 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 70);
            *(b + 20 * OS1_S1 + 146) = prefactor_y * *(b + 20 * OS1_S1 + 104) -
                                       p_over_q * *(b + 36 * OS1_S1 + 104);
            *(b + 20 * OS1_S1 + 147) =
                prefactor_x * *(b + 20 * OS1_S1 + 111) -
                p_over_q * *(b + 35 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 111) +
                one_over_two_q * *(b + 20 * OS1_S1 + 83);
            *(b + 20 * OS1_S1 + 148) =
                prefactor_x * *(b + 20 * OS1_S1 + 112) -
                p_over_q * *(b + 35 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 112);
            *(b + 20 * OS1_S1 + 149) = prefactor_z * *(b + 20 * OS1_S1 + 105) -
                                       p_over_q * *(b + 37 * OS1_S1 + 105);
            *(b + 20 * OS1_S1 + 150) =
                prefactor_x * *(b + 20 * OS1_S1 + 114) -
                p_over_q * *(b + 35 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 114);
            *(b + 20 * OS1_S1 + 151) =
                prefactor_x * *(b + 20 * OS1_S1 + 115) -
                p_over_q * *(b + 35 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 115);
            *(b + 20 * OS1_S1 + 152) =
                prefactor_x * *(b + 20 * OS1_S1 + 116) -
                p_over_q * *(b + 35 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 116);
            *(b + 20 * OS1_S1 + 153) =
                prefactor_x * *(b + 20 * OS1_S1 + 117) -
                p_over_q * *(b + 35 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 117);
            *(b + 20 * OS1_S1 + 154) = prefactor_y * *(b + 20 * OS1_S1 + 111) -
                                       p_over_q * *(b + 36 * OS1_S1 + 111);
            *(b + 20 * OS1_S1 + 155) =
                prefactor_x * *(b + 20 * OS1_S1 + 119) -
                p_over_q * *(b + 35 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 10 * OS1_S1 + 119);
            *(b + 20 * OS1_S1 + 156) =
                prefactor_y * *(b + 20 * OS1_S1 + 112) -
                p_over_q * *(b + 36 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 20 * OS1_S1 + 77);
            *(b + 20 * OS1_S1 + 157) = prefactor_z * *(b + 20 * OS1_S1 + 112) -
                                       p_over_q * *(b + 37 * OS1_S1 + 112);
            *(b + 20 * OS1_S1 + 158) = prefactor_z * *(b + 20 * OS1_S1 + 113) -
                                       p_over_q * *(b + 37 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 77);
            *(b + 20 * OS1_S1 + 159) =
                prefactor_z * *(b + 20 * OS1_S1 + 114) -
                p_over_q * *(b + 37 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 78);
            *(b + 20 * OS1_S1 + 160) =
                prefactor_z * *(b + 20 * OS1_S1 + 115) -
                p_over_q * *(b + 37 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 20 * OS1_S1 + 79);
            *(b + 20 * OS1_S1 + 161) =
                prefactor_y * *(b + 20 * OS1_S1 + 117) -
                p_over_q * *(b + 36 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 20 * OS1_S1 + 82);
            *(b + 20 * OS1_S1 + 162) = prefactor_y * *(b + 20 * OS1_S1 + 118) -
                                       p_over_q * *(b + 36 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 83);
            *(b + 20 * OS1_S1 + 163) = prefactor_y * *(b + 20 * OS1_S1 + 119) -
                                       p_over_q * *(b + 36 * OS1_S1 + 119);
            *(b + 20 * OS1_S1 + 164) =
                prefactor_z * *(b + 20 * OS1_S1 + 119) -
                p_over_q * *(b + 37 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 20 * OS1_S1 + 83);
            *(b + 21 * OS1_S1 + 120) =
                prefactor_x * *(b + 21 * OS1_S1 + 84) -
                p_over_q * *(b + 36 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 21 * OS1_S1 + 56);
            *(b + 21 * OS1_S1 + 121) = prefactor_y * *(b + 21 * OS1_S1 + 84) -
                                       p_over_q * *(b + 38 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 84);
            *(b + 21 * OS1_S1 + 122) = prefactor_z * *(b + 21 * OS1_S1 + 84) -
                                       p_over_q * *(b + 39 * OS1_S1 + 84);
            *(b + 21 * OS1_S1 + 123) =
                prefactor_y * *(b + 21 * OS1_S1 + 85) -
                p_over_q * *(b + 38 * OS1_S1 + 85) +
                one_over_two_q * *(b + 10 * OS1_S1 + 85) +
                one_over_two_q * *(b + 21 * OS1_S1 + 56);
            *(b + 21 * OS1_S1 + 124) = prefactor_z * *(b + 21 * OS1_S1 + 85) -
                                       p_over_q * *(b + 39 * OS1_S1 + 85);
            *(b + 21 * OS1_S1 + 125) = prefactor_z * *(b + 21 * OS1_S1 + 86) -
                                       p_over_q * *(b + 39 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 56);
            *(b + 21 * OS1_S1 + 126) =
                prefactor_y * *(b + 21 * OS1_S1 + 87) -
                p_over_q * *(b + 38 * OS1_S1 + 87) +
                one_over_two_q * *(b + 10 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 57);
            *(b + 21 * OS1_S1 + 127) = prefactor_z * *(b + 21 * OS1_S1 + 87) -
                                       p_over_q * *(b + 39 * OS1_S1 + 87);
            *(b + 21 * OS1_S1 + 128) = prefactor_y * *(b + 21 * OS1_S1 + 89) -
                                       p_over_q * *(b + 38 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 89);
            *(b + 21 * OS1_S1 + 129) =
                prefactor_z * *(b + 21 * OS1_S1 + 89) -
                p_over_q * *(b + 39 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 58);
            *(b + 21 * OS1_S1 + 130) =
                prefactor_y * *(b + 21 * OS1_S1 + 90) -
                p_over_q * *(b + 38 * OS1_S1 + 90) +
                one_over_two_q * *(b + 10 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 21 * OS1_S1 + 59);
            *(b + 21 * OS1_S1 + 131) = prefactor_z * *(b + 21 * OS1_S1 + 90) -
                                       p_over_q * *(b + 39 * OS1_S1 + 90);
            *(b + 21 * OS1_S1 + 132) = prefactor_z * *(b + 21 * OS1_S1 + 91) -
                                       p_over_q * *(b + 39 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 59);
            *(b + 21 * OS1_S1 + 133) = prefactor_y * *(b + 21 * OS1_S1 + 93) -
                                       p_over_q * *(b + 38 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 93);
            *(b + 21 * OS1_S1 + 134) =
                prefactor_z * *(b + 21 * OS1_S1 + 93) -
                p_over_q * *(b + 39 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 21 * OS1_S1 + 61);
            *(b + 21 * OS1_S1 + 135) =
                prefactor_x * *(b + 21 * OS1_S1 + 99) -
                p_over_q * *(b + 36 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 71);
            *(b + 21 * OS1_S1 + 136) = prefactor_z * *(b + 21 * OS1_S1 + 94) -
                                       p_over_q * *(b + 39 * OS1_S1 + 94);
            *(b + 21 * OS1_S1 + 137) = prefactor_z * *(b + 21 * OS1_S1 + 95) -
                                       p_over_q * *(b + 39 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 62);
            *(b + 21 * OS1_S1 + 138) =
                prefactor_y * *(b + 21 * OS1_S1 + 97) -
                p_over_q * *(b + 38 * OS1_S1 + 97) +
                one_over_two_q * *(b + 10 * OS1_S1 + 97) +
                one_over_two_q * *(b + 21 * OS1_S1 + 65);
            *(b + 21 * OS1_S1 + 139) = prefactor_y * *(b + 21 * OS1_S1 + 98) -
                                       p_over_q * *(b + 38 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 98);
            *(b + 21 * OS1_S1 + 140) =
                prefactor_x * *(b + 21 * OS1_S1 + 104) -
                p_over_q * *(b + 36 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 76);
            *(b + 21 * OS1_S1 + 141) =
                prefactor_x * *(b + 21 * OS1_S1 + 105) -
                p_over_q * *(b + 36 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 105) +
                one_over_two_q * *(b + 21 * OS1_S1 + 77);
            *(b + 21 * OS1_S1 + 142) = prefactor_z * *(b + 21 * OS1_S1 + 99) -
                                       p_over_q * *(b + 39 * OS1_S1 + 99);
            *(b + 21 * OS1_S1 + 143) = prefactor_z * *(b + 21 * OS1_S1 + 100) -
                                       p_over_q * *(b + 39 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 66);
            *(b + 21 * OS1_S1 + 144) =
                prefactor_x * *(b + 21 * OS1_S1 + 108) -
                p_over_q * *(b + 36 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 108) +
                one_over_two_q * *(b + 21 * OS1_S1 + 80);
            *(b + 21 * OS1_S1 + 145) =
                prefactor_y * *(b + 21 * OS1_S1 + 103) -
                p_over_q * *(b + 38 * OS1_S1 + 103) +
                one_over_two_q * *(b + 10 * OS1_S1 + 103) +
                one_over_two_q * *(b + 21 * OS1_S1 + 70);
            *(b + 21 * OS1_S1 + 146) =
                prefactor_y * *(b + 21 * OS1_S1 + 104) -
                p_over_q * *(b + 38 * OS1_S1 + 104) +
                one_over_two_q * *(b + 10 * OS1_S1 + 104);
            *(b + 21 * OS1_S1 + 147) =
                prefactor_x * *(b + 21 * OS1_S1 + 111) -
                p_over_q * *(b + 36 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 111) +
                one_over_two_q * *(b + 21 * OS1_S1 + 83);
            *(b + 21 * OS1_S1 + 148) =
                prefactor_x * *(b + 21 * OS1_S1 + 112) -
                p_over_q * *(b + 36 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 112);
            *(b + 21 * OS1_S1 + 149) = prefactor_z * *(b + 21 * OS1_S1 + 105) -
                                       p_over_q * *(b + 39 * OS1_S1 + 105);
            *(b + 21 * OS1_S1 + 150) =
                prefactor_x * *(b + 21 * OS1_S1 + 114) -
                p_over_q * *(b + 36 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 114);
            *(b + 21 * OS1_S1 + 151) =
                prefactor_x * *(b + 21 * OS1_S1 + 115) -
                p_over_q * *(b + 36 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 115);
            *(b + 21 * OS1_S1 + 152) =
                prefactor_x * *(b + 21 * OS1_S1 + 116) -
                p_over_q * *(b + 36 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 116);
            *(b + 21 * OS1_S1 + 153) =
                prefactor_x * *(b + 21 * OS1_S1 + 117) -
                p_over_q * *(b + 36 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 117);
            *(b + 21 * OS1_S1 + 154) =
                prefactor_y * *(b + 21 * OS1_S1 + 111) -
                p_over_q * *(b + 38 * OS1_S1 + 111) +
                one_over_two_q * *(b + 10 * OS1_S1 + 111);
            *(b + 21 * OS1_S1 + 155) =
                prefactor_x * *(b + 21 * OS1_S1 + 119) -
                p_over_q * *(b + 36 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 119);
            *(b + 21 * OS1_S1 + 156) =
                prefactor_y * *(b + 21 * OS1_S1 + 112) -
                p_over_q * *(b + 38 * OS1_S1 + 112) +
                one_over_two_q * *(b + 10 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 21 * OS1_S1 + 77);
            *(b + 21 * OS1_S1 + 157) = prefactor_z * *(b + 21 * OS1_S1 + 112) -
                                       p_over_q * *(b + 39 * OS1_S1 + 112);
            *(b + 21 * OS1_S1 + 158) = prefactor_z * *(b + 21 * OS1_S1 + 113) -
                                       p_over_q * *(b + 39 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 77);
            *(b + 21 * OS1_S1 + 159) =
                prefactor_z * *(b + 21 * OS1_S1 + 114) -
                p_over_q * *(b + 39 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 78);
            *(b + 21 * OS1_S1 + 160) =
                prefactor_z * *(b + 21 * OS1_S1 + 115) -
                p_over_q * *(b + 39 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 21 * OS1_S1 + 79);
            *(b + 21 * OS1_S1 + 161) =
                prefactor_y * *(b + 21 * OS1_S1 + 117) -
                p_over_q * *(b + 38 * OS1_S1 + 117) +
                one_over_two_q * *(b + 10 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 82);
            *(b + 21 * OS1_S1 + 162) =
                prefactor_y * *(b + 21 * OS1_S1 + 118) -
                p_over_q * *(b + 38 * OS1_S1 + 118) +
                one_over_two_q * *(b + 10 * OS1_S1 + 118) +
                one_over_two_q * *(b + 21 * OS1_S1 + 83);
            *(b + 21 * OS1_S1 + 163) =
                prefactor_y * *(b + 21 * OS1_S1 + 119) -
                p_over_q * *(b + 38 * OS1_S1 + 119) +
                one_over_two_q * *(b + 10 * OS1_S1 + 119);
            *(b + 21 * OS1_S1 + 164) =
                prefactor_z * *(b + 21 * OS1_S1 + 119) -
                p_over_q * *(b + 39 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 21 * OS1_S1 + 83);
            *(b + 22 * OS1_S1 + 120) =
                prefactor_x * *(b + 22 * OS1_S1 + 84) -
                p_over_q * *(b + 37 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 22 * OS1_S1 + 56);
            *(b + 22 * OS1_S1 + 121) = prefactor_y * *(b + 22 * OS1_S1 + 84) -
                                       p_over_q * *(b + 39 * OS1_S1 + 84);
            *(b + 22 * OS1_S1 + 122) = prefactor_z * *(b + 22 * OS1_S1 + 84) -
                                       p_over_q * *(b + 40 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 84);
            *(b + 22 * OS1_S1 + 123) = prefactor_y * *(b + 22 * OS1_S1 + 85) -
                                       p_over_q * *(b + 39 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 56);
            *(b + 22 * OS1_S1 + 124) = prefactor_y * *(b + 22 * OS1_S1 + 86) -
                                       p_over_q * *(b + 39 * OS1_S1 + 86);
            *(b + 22 * OS1_S1 + 125) =
                prefactor_z * *(b + 22 * OS1_S1 + 86) -
                p_over_q * *(b + 40 * OS1_S1 + 86) +
                one_over_two_q * *(b + 10 * OS1_S1 + 86) +
                one_over_two_q * *(b + 22 * OS1_S1 + 56);
            *(b + 22 * OS1_S1 + 126) =
                prefactor_y * *(b + 22 * OS1_S1 + 87) -
                p_over_q * *(b + 39 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 57);
            *(b + 22 * OS1_S1 + 127) = prefactor_z * *(b + 22 * OS1_S1 + 87) -
                                       p_over_q * *(b + 40 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 87);
            *(b + 22 * OS1_S1 + 128) = prefactor_y * *(b + 22 * OS1_S1 + 89) -
                                       p_over_q * *(b + 39 * OS1_S1 + 89);
            *(b + 22 * OS1_S1 + 129) =
                prefactor_z * *(b + 22 * OS1_S1 + 89) -
                p_over_q * *(b + 40 * OS1_S1 + 89) +
                one_over_two_q * *(b + 10 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 58);
            *(b + 22 * OS1_S1 + 130) =
                prefactor_y * *(b + 22 * OS1_S1 + 90) -
                p_over_q * *(b + 39 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 22 * OS1_S1 + 59);
            *(b + 22 * OS1_S1 + 131) = prefactor_z * *(b + 22 * OS1_S1 + 90) -
                                       p_over_q * *(b + 40 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 90);
            *(b + 22 * OS1_S1 + 132) = prefactor_y * *(b + 22 * OS1_S1 + 92) -
                                       p_over_q * *(b + 39 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 61);
            *(b + 22 * OS1_S1 + 133) = prefactor_y * *(b + 22 * OS1_S1 + 93) -
                                       p_over_q * *(b + 39 * OS1_S1 + 93);
            *(b + 22 * OS1_S1 + 134) =
                prefactor_z * *(b + 22 * OS1_S1 + 93) -
                p_over_q * *(b + 40 * OS1_S1 + 93) +
                one_over_two_q * *(b + 10 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 22 * OS1_S1 + 61);
            *(b + 22 * OS1_S1 + 135) =
                prefactor_x * *(b + 22 * OS1_S1 + 99) -
                p_over_q * *(b + 37 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 71);
            *(b + 22 * OS1_S1 + 136) = prefactor_z * *(b + 22 * OS1_S1 + 94) -
                                       p_over_q * *(b + 40 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 94);
            *(b + 22 * OS1_S1 + 137) =
                prefactor_z * *(b + 22 * OS1_S1 + 95) -
                p_over_q * *(b + 40 * OS1_S1 + 95) +
                one_over_two_q * *(b + 10 * OS1_S1 + 95) +
                one_over_two_q * *(b + 22 * OS1_S1 + 62);
            *(b + 22 * OS1_S1 + 138) = prefactor_y * *(b + 22 * OS1_S1 + 97) -
                                       p_over_q * *(b + 39 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 65);
            *(b + 22 * OS1_S1 + 139) = prefactor_y * *(b + 22 * OS1_S1 + 98) -
                                       p_over_q * *(b + 39 * OS1_S1 + 98);
            *(b + 22 * OS1_S1 + 140) =
                prefactor_x * *(b + 22 * OS1_S1 + 104) -
                p_over_q * *(b + 37 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 76);
            *(b + 22 * OS1_S1 + 141) =
                prefactor_x * *(b + 22 * OS1_S1 + 105) -
                p_over_q * *(b + 37 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 105) +
                one_over_two_q * *(b + 22 * OS1_S1 + 77);
            *(b + 22 * OS1_S1 + 142) = prefactor_z * *(b + 22 * OS1_S1 + 99) -
                                       p_over_q * *(b + 40 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 99);
            *(b + 22 * OS1_S1 + 143) =
                prefactor_z * *(b + 22 * OS1_S1 + 100) -
                p_over_q * *(b + 40 * OS1_S1 + 100) +
                one_over_two_q * *(b + 10 * OS1_S1 + 100) +
                one_over_two_q * *(b + 22 * OS1_S1 + 66);
            *(b + 22 * OS1_S1 + 144) =
                prefactor_x * *(b + 22 * OS1_S1 + 108) -
                p_over_q * *(b + 37 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 108) +
                one_over_two_q * *(b + 22 * OS1_S1 + 80);
            *(b + 22 * OS1_S1 + 145) = prefactor_y * *(b + 22 * OS1_S1 + 103) -
                                       p_over_q * *(b + 39 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 70);
            *(b + 22 * OS1_S1 + 146) = prefactor_y * *(b + 22 * OS1_S1 + 104) -
                                       p_over_q * *(b + 39 * OS1_S1 + 104);
            *(b + 22 * OS1_S1 + 147) =
                prefactor_x * *(b + 22 * OS1_S1 + 111) -
                p_over_q * *(b + 37 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 111) +
                one_over_two_q * *(b + 22 * OS1_S1 + 83);
            *(b + 22 * OS1_S1 + 148) =
                prefactor_x * *(b + 22 * OS1_S1 + 112) -
                p_over_q * *(b + 37 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 112);
            *(b + 22 * OS1_S1 + 149) =
                prefactor_z * *(b + 22 * OS1_S1 + 105) -
                p_over_q * *(b + 40 * OS1_S1 + 105) +
                one_over_two_q * *(b + 10 * OS1_S1 + 105);
            *(b + 22 * OS1_S1 + 150) =
                prefactor_x * *(b + 22 * OS1_S1 + 114) -
                p_over_q * *(b + 37 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 114);
            *(b + 22 * OS1_S1 + 151) =
                prefactor_x * *(b + 22 * OS1_S1 + 115) -
                p_over_q * *(b + 37 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 115);
            *(b + 22 * OS1_S1 + 152) =
                prefactor_x * *(b + 22 * OS1_S1 + 116) -
                p_over_q * *(b + 37 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 116);
            *(b + 22 * OS1_S1 + 153) =
                prefactor_x * *(b + 22 * OS1_S1 + 117) -
                p_over_q * *(b + 37 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 117);
            *(b + 22 * OS1_S1 + 154) = prefactor_y * *(b + 22 * OS1_S1 + 111) -
                                       p_over_q * *(b + 39 * OS1_S1 + 111);
            *(b + 22 * OS1_S1 + 155) =
                prefactor_x * *(b + 22 * OS1_S1 + 119) -
                p_over_q * *(b + 37 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 119);
            *(b + 22 * OS1_S1 + 156) =
                prefactor_y * *(b + 22 * OS1_S1 + 112) -
                p_over_q * *(b + 39 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 22 * OS1_S1 + 77);
            *(b + 22 * OS1_S1 + 157) =
                prefactor_z * *(b + 22 * OS1_S1 + 112) -
                p_over_q * *(b + 40 * OS1_S1 + 112) +
                one_over_two_q * *(b + 10 * OS1_S1 + 112);
            *(b + 22 * OS1_S1 + 158) =
                prefactor_z * *(b + 22 * OS1_S1 + 113) -
                p_over_q * *(b + 40 * OS1_S1 + 113) +
                one_over_two_q * *(b + 10 * OS1_S1 + 113) +
                one_over_two_q * *(b + 22 * OS1_S1 + 77);
            *(b + 22 * OS1_S1 + 159) =
                prefactor_z * *(b + 22 * OS1_S1 + 114) -
                p_over_q * *(b + 40 * OS1_S1 + 114) +
                one_over_two_q * *(b + 10 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 78);
            *(b + 22 * OS1_S1 + 160) =
                prefactor_y * *(b + 22 * OS1_S1 + 116) -
                p_over_q * *(b + 39 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 22 * OS1_S1 + 81);
            *(b + 22 * OS1_S1 + 161) =
                prefactor_y * *(b + 22 * OS1_S1 + 117) -
                p_over_q * *(b + 39 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 82);
            *(b + 22 * OS1_S1 + 162) = prefactor_y * *(b + 22 * OS1_S1 + 118) -
                                       p_over_q * *(b + 39 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 83);
            *(b + 22 * OS1_S1 + 163) = prefactor_y * *(b + 22 * OS1_S1 + 119) -
                                       p_over_q * *(b + 39 * OS1_S1 + 119);
            *(b + 22 * OS1_S1 + 164) =
                prefactor_z * *(b + 22 * OS1_S1 + 119) -
                p_over_q * *(b + 40 * OS1_S1 + 119) +
                one_over_two_q * *(b + 10 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 22 * OS1_S1 + 83);
            *(b + 23 * OS1_S1 + 120) =
                prefactor_x * *(b + 23 * OS1_S1 + 84) -
                p_over_q * *(b + 38 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 23 * OS1_S1 + 56);
            *(b + 23 * OS1_S1 + 121) =
                prefactor_y * *(b + 23 * OS1_S1 + 84) -
                p_over_q * *(b + 41 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 84);
            *(b + 23 * OS1_S1 + 122) = prefactor_z * *(b + 23 * OS1_S1 + 84) -
                                       p_over_q * *(b + 42 * OS1_S1 + 84);
            *(b + 23 * OS1_S1 + 123) =
                prefactor_y * *(b + 23 * OS1_S1 + 85) -
                p_over_q * *(b + 41 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 85) +
                one_over_two_q * *(b + 23 * OS1_S1 + 56);
            *(b + 23 * OS1_S1 + 124) = prefactor_z * *(b + 23 * OS1_S1 + 85) -
                                       p_over_q * *(b + 42 * OS1_S1 + 85);
            *(b + 23 * OS1_S1 + 125) = prefactor_z * *(b + 23 * OS1_S1 + 86) -
                                       p_over_q * *(b + 42 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 56);
            *(b + 23 * OS1_S1 + 126) =
                prefactor_y * *(b + 23 * OS1_S1 + 87) -
                p_over_q * *(b + 41 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 57);
            *(b + 23 * OS1_S1 + 127) = prefactor_z * *(b + 23 * OS1_S1 + 87) -
                                       p_over_q * *(b + 42 * OS1_S1 + 87);
            *(b + 23 * OS1_S1 + 128) =
                prefactor_y * *(b + 23 * OS1_S1 + 89) -
                p_over_q * *(b + 41 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 89);
            *(b + 23 * OS1_S1 + 129) =
                prefactor_z * *(b + 23 * OS1_S1 + 89) -
                p_over_q * *(b + 42 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 58);
            *(b + 23 * OS1_S1 + 130) =
                prefactor_y * *(b + 23 * OS1_S1 + 90) -
                p_over_q * *(b + 41 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 59);
            *(b + 23 * OS1_S1 + 131) = prefactor_z * *(b + 23 * OS1_S1 + 90) -
                                       p_over_q * *(b + 42 * OS1_S1 + 90);
            *(b + 23 * OS1_S1 + 132) = prefactor_z * *(b + 23 * OS1_S1 + 91) -
                                       p_over_q * *(b + 42 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 59);
            *(b + 23 * OS1_S1 + 133) =
                prefactor_y * *(b + 23 * OS1_S1 + 93) -
                p_over_q * *(b + 41 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 93);
            *(b + 23 * OS1_S1 + 134) =
                prefactor_z * *(b + 23 * OS1_S1 + 93) -
                p_over_q * *(b + 42 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 61);
            *(b + 23 * OS1_S1 + 135) =
                prefactor_x * *(b + 23 * OS1_S1 + 99) -
                p_over_q * *(b + 38 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 71);
            *(b + 23 * OS1_S1 + 136) = prefactor_z * *(b + 23 * OS1_S1 + 94) -
                                       p_over_q * *(b + 42 * OS1_S1 + 94);
            *(b + 23 * OS1_S1 + 137) = prefactor_z * *(b + 23 * OS1_S1 + 95) -
                                       p_over_q * *(b + 42 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 62);
            *(b + 23 * OS1_S1 + 138) =
                prefactor_y * *(b + 23 * OS1_S1 + 97) -
                p_over_q * *(b + 41 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 97) +
                one_over_two_q * *(b + 23 * OS1_S1 + 65);
            *(b + 23 * OS1_S1 + 139) =
                prefactor_y * *(b + 23 * OS1_S1 + 98) -
                p_over_q * *(b + 41 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 98);
            *(b + 23 * OS1_S1 + 140) =
                prefactor_x * *(b + 23 * OS1_S1 + 104) -
                p_over_q * *(b + 38 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 76);
            *(b + 23 * OS1_S1 + 141) =
                prefactor_x * *(b + 23 * OS1_S1 + 105) -
                p_over_q * *(b + 38 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 105) +
                one_over_two_q * *(b + 23 * OS1_S1 + 77);
            *(b + 23 * OS1_S1 + 142) = prefactor_z * *(b + 23 * OS1_S1 + 99) -
                                       p_over_q * *(b + 42 * OS1_S1 + 99);
            *(b + 23 * OS1_S1 + 143) = prefactor_z * *(b + 23 * OS1_S1 + 100) -
                                       p_over_q * *(b + 42 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 66);
            *(b + 23 * OS1_S1 + 144) =
                prefactor_x * *(b + 23 * OS1_S1 + 108) -
                p_over_q * *(b + 38 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 108) +
                one_over_two_q * *(b + 23 * OS1_S1 + 80);
            *(b + 23 * OS1_S1 + 145) =
                prefactor_y * *(b + 23 * OS1_S1 + 103) -
                p_over_q * *(b + 41 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 103) +
                one_over_two_q * *(b + 23 * OS1_S1 + 70);
            *(b + 23 * OS1_S1 + 146) =
                prefactor_y * *(b + 23 * OS1_S1 + 104) -
                p_over_q * *(b + 41 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 104);
            *(b + 23 * OS1_S1 + 147) =
                prefactor_x * *(b + 23 * OS1_S1 + 111) -
                p_over_q * *(b + 38 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 111) +
                one_over_two_q * *(b + 23 * OS1_S1 + 83);
            *(b + 23 * OS1_S1 + 148) =
                prefactor_x * *(b + 23 * OS1_S1 + 112) -
                p_over_q * *(b + 38 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 112);
            *(b + 23 * OS1_S1 + 149) = prefactor_z * *(b + 23 * OS1_S1 + 105) -
                                       p_over_q * *(b + 42 * OS1_S1 + 105);
            *(b + 23 * OS1_S1 + 150) =
                prefactor_x * *(b + 23 * OS1_S1 + 114) -
                p_over_q * *(b + 38 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 114);
            *(b + 23 * OS1_S1 + 151) =
                prefactor_x * *(b + 23 * OS1_S1 + 115) -
                p_over_q * *(b + 38 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 115);
            *(b + 23 * OS1_S1 + 152) =
                prefactor_x * *(b + 23 * OS1_S1 + 116) -
                p_over_q * *(b + 38 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 116);
            *(b + 23 * OS1_S1 + 153) =
                prefactor_x * *(b + 23 * OS1_S1 + 117) -
                p_over_q * *(b + 38 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 117);
            *(b + 23 * OS1_S1 + 154) =
                prefactor_y * *(b + 23 * OS1_S1 + 111) -
                p_over_q * *(b + 41 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 111);
            *(b + 23 * OS1_S1 + 155) =
                prefactor_x * *(b + 23 * OS1_S1 + 119) -
                p_over_q * *(b + 38 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 119);
            *(b + 23 * OS1_S1 + 156) =
                prefactor_y * *(b + 23 * OS1_S1 + 112) -
                p_over_q * *(b + 41 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 23 * OS1_S1 + 77);
            *(b + 23 * OS1_S1 + 157) = prefactor_z * *(b + 23 * OS1_S1 + 112) -
                                       p_over_q * *(b + 42 * OS1_S1 + 112);
            *(b + 23 * OS1_S1 + 158) = prefactor_z * *(b + 23 * OS1_S1 + 113) -
                                       p_over_q * *(b + 42 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 77);
            *(b + 23 * OS1_S1 + 159) =
                prefactor_z * *(b + 23 * OS1_S1 + 114) -
                p_over_q * *(b + 42 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 78);
            *(b + 23 * OS1_S1 + 160) =
                prefactor_z * *(b + 23 * OS1_S1 + 115) -
                p_over_q * *(b + 42 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 79);
            *(b + 23 * OS1_S1 + 161) =
                prefactor_y * *(b + 23 * OS1_S1 + 117) -
                p_over_q * *(b + 41 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 23 * OS1_S1 + 82);
            *(b + 23 * OS1_S1 + 162) =
                prefactor_y * *(b + 23 * OS1_S1 + 118) -
                p_over_q * *(b + 41 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 118) +
                one_over_two_q * *(b + 23 * OS1_S1 + 83);
            *(b + 23 * OS1_S1 + 163) =
                prefactor_y * *(b + 23 * OS1_S1 + 119) -
                p_over_q * *(b + 41 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 119);
            *(b + 23 * OS1_S1 + 164) =
                prefactor_z * *(b + 23 * OS1_S1 + 119) -
                p_over_q * *(b + 42 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 23 * OS1_S1 + 83);
            *(b + 24 * OS1_S1 + 120) =
                prefactor_x * *(b + 24 * OS1_S1 + 84) -
                p_over_q * *(b + 39 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 24 * OS1_S1 + 56);
            *(b + 24 * OS1_S1 + 121) = prefactor_y * *(b + 24 * OS1_S1 + 84) -
                                       p_over_q * *(b + 42 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 84);
            *(b + 24 * OS1_S1 + 122) = prefactor_z * *(b + 24 * OS1_S1 + 84) -
                                       p_over_q * *(b + 43 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 84);
            *(b + 24 * OS1_S1 + 123) =
                prefactor_y * *(b + 24 * OS1_S1 + 85) -
                p_over_q * *(b + 42 * OS1_S1 + 85) +
                one_over_two_q * *(b + 12 * OS1_S1 + 85) +
                one_over_two_q * *(b + 24 * OS1_S1 + 56);
            *(b + 24 * OS1_S1 + 124) = prefactor_z * *(b + 24 * OS1_S1 + 85) -
                                       p_over_q * *(b + 43 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 85);
            *(b + 24 * OS1_S1 + 125) =
                prefactor_z * *(b + 24 * OS1_S1 + 86) -
                p_over_q * *(b + 43 * OS1_S1 + 86) +
                one_over_two_q * *(b + 11 * OS1_S1 + 86) +
                one_over_two_q * *(b + 24 * OS1_S1 + 56);
            *(b + 24 * OS1_S1 + 126) =
                prefactor_y * *(b + 24 * OS1_S1 + 87) -
                p_over_q * *(b + 42 * OS1_S1 + 87) +
                one_over_two_q * *(b + 12 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 57);
            *(b + 24 * OS1_S1 + 127) = prefactor_z * *(b + 24 * OS1_S1 + 87) -
                                       p_over_q * *(b + 43 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 87);
            *(b + 24 * OS1_S1 + 128) = prefactor_y * *(b + 24 * OS1_S1 + 89) -
                                       p_over_q * *(b + 42 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 89);
            *(b + 24 * OS1_S1 + 129) =
                prefactor_z * *(b + 24 * OS1_S1 + 89) -
                p_over_q * *(b + 43 * OS1_S1 + 89) +
                one_over_two_q * *(b + 11 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 58);
            *(b + 24 * OS1_S1 + 130) =
                prefactor_y * *(b + 24 * OS1_S1 + 90) -
                p_over_q * *(b + 42 * OS1_S1 + 90) +
                one_over_two_q * *(b + 12 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 59);
            *(b + 24 * OS1_S1 + 131) = prefactor_z * *(b + 24 * OS1_S1 + 90) -
                                       p_over_q * *(b + 43 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 90);
            *(b + 24 * OS1_S1 + 132) =
                prefactor_z * *(b + 24 * OS1_S1 + 91) -
                p_over_q * *(b + 43 * OS1_S1 + 91) +
                one_over_two_q * *(b + 11 * OS1_S1 + 91) +
                one_over_two_q * *(b + 24 * OS1_S1 + 59);
            *(b + 24 * OS1_S1 + 133) = prefactor_y * *(b + 24 * OS1_S1 + 93) -
                                       p_over_q * *(b + 42 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 93);
            *(b + 24 * OS1_S1 + 134) =
                prefactor_z * *(b + 24 * OS1_S1 + 93) -
                p_over_q * *(b + 43 * OS1_S1 + 93) +
                one_over_two_q * *(b + 11 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 61);
            *(b + 24 * OS1_S1 + 135) =
                prefactor_x * *(b + 24 * OS1_S1 + 99) -
                p_over_q * *(b + 39 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 71);
            *(b + 24 * OS1_S1 + 136) = prefactor_z * *(b + 24 * OS1_S1 + 94) -
                                       p_over_q * *(b + 43 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 94);
            *(b + 24 * OS1_S1 + 137) =
                prefactor_z * *(b + 24 * OS1_S1 + 95) -
                p_over_q * *(b + 43 * OS1_S1 + 95) +
                one_over_two_q * *(b + 11 * OS1_S1 + 95) +
                one_over_two_q * *(b + 24 * OS1_S1 + 62);
            *(b + 24 * OS1_S1 + 138) =
                prefactor_y * *(b + 24 * OS1_S1 + 97) -
                p_over_q * *(b + 42 * OS1_S1 + 97) +
                one_over_two_q * *(b + 12 * OS1_S1 + 97) +
                one_over_two_q * *(b + 24 * OS1_S1 + 65);
            *(b + 24 * OS1_S1 + 139) = prefactor_y * *(b + 24 * OS1_S1 + 98) -
                                       p_over_q * *(b + 42 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 98);
            *(b + 24 * OS1_S1 + 140) =
                prefactor_x * *(b + 24 * OS1_S1 + 104) -
                p_over_q * *(b + 39 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 76);
            *(b + 24 * OS1_S1 + 141) =
                prefactor_x * *(b + 24 * OS1_S1 + 105) -
                p_over_q * *(b + 39 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 105) +
                one_over_two_q * *(b + 24 * OS1_S1 + 77);
            *(b + 24 * OS1_S1 + 142) = prefactor_z * *(b + 24 * OS1_S1 + 99) -
                                       p_over_q * *(b + 43 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 99);
            *(b + 24 * OS1_S1 + 143) =
                prefactor_z * *(b + 24 * OS1_S1 + 100) -
                p_over_q * *(b + 43 * OS1_S1 + 100) +
                one_over_two_q * *(b + 11 * OS1_S1 + 100) +
                one_over_two_q * *(b + 24 * OS1_S1 + 66);
            *(b + 24 * OS1_S1 + 144) =
                prefactor_x * *(b + 24 * OS1_S1 + 108) -
                p_over_q * *(b + 39 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 108) +
                one_over_two_q * *(b + 24 * OS1_S1 + 80);
            *(b + 24 * OS1_S1 + 145) =
                prefactor_y * *(b + 24 * OS1_S1 + 103) -
                p_over_q * *(b + 42 * OS1_S1 + 103) +
                one_over_two_q * *(b + 12 * OS1_S1 + 103) +
                one_over_two_q * *(b + 24 * OS1_S1 + 70);
            *(b + 24 * OS1_S1 + 146) =
                prefactor_y * *(b + 24 * OS1_S1 + 104) -
                p_over_q * *(b + 42 * OS1_S1 + 104) +
                one_over_two_q * *(b + 12 * OS1_S1 + 104);
            *(b + 24 * OS1_S1 + 147) =
                prefactor_x * *(b + 24 * OS1_S1 + 111) -
                p_over_q * *(b + 39 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 111) +
                one_over_two_q * *(b + 24 * OS1_S1 + 83);
            *(b + 24 * OS1_S1 + 148) =
                prefactor_x * *(b + 24 * OS1_S1 + 112) -
                p_over_q * *(b + 39 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 112);
            *(b + 24 * OS1_S1 + 149) =
                prefactor_z * *(b + 24 * OS1_S1 + 105) -
                p_over_q * *(b + 43 * OS1_S1 + 105) +
                one_over_two_q * *(b + 11 * OS1_S1 + 105);
            *(b + 24 * OS1_S1 + 150) =
                prefactor_x * *(b + 24 * OS1_S1 + 114) -
                p_over_q * *(b + 39 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 114);
            *(b + 24 * OS1_S1 + 151) =
                prefactor_x * *(b + 24 * OS1_S1 + 115) -
                p_over_q * *(b + 39 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 115);
            *(b + 24 * OS1_S1 + 152) =
                prefactor_x * *(b + 24 * OS1_S1 + 116) -
                p_over_q * *(b + 39 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 116);
            *(b + 24 * OS1_S1 + 153) =
                prefactor_x * *(b + 24 * OS1_S1 + 117) -
                p_over_q * *(b + 39 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 117);
            *(b + 24 * OS1_S1 + 154) =
                prefactor_y * *(b + 24 * OS1_S1 + 111) -
                p_over_q * *(b + 42 * OS1_S1 + 111) +
                one_over_two_q * *(b + 12 * OS1_S1 + 111);
            *(b + 24 * OS1_S1 + 155) =
                prefactor_x * *(b + 24 * OS1_S1 + 119) -
                p_over_q * *(b + 39 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 119);
            *(b + 24 * OS1_S1 + 156) =
                prefactor_y * *(b + 24 * OS1_S1 + 112) -
                p_over_q * *(b + 42 * OS1_S1 + 112) +
                one_over_two_q * *(b + 12 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 24 * OS1_S1 + 77);
            *(b + 24 * OS1_S1 + 157) =
                prefactor_z * *(b + 24 * OS1_S1 + 112) -
                p_over_q * *(b + 43 * OS1_S1 + 112) +
                one_over_two_q * *(b + 11 * OS1_S1 + 112);
            *(b + 24 * OS1_S1 + 158) =
                prefactor_z * *(b + 24 * OS1_S1 + 113) -
                p_over_q * *(b + 43 * OS1_S1 + 113) +
                one_over_two_q * *(b + 11 * OS1_S1 + 113) +
                one_over_two_q * *(b + 24 * OS1_S1 + 77);
            *(b + 24 * OS1_S1 + 159) =
                prefactor_z * *(b + 24 * OS1_S1 + 114) -
                p_over_q * *(b + 43 * OS1_S1 + 114) +
                one_over_two_q * *(b + 11 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 78);
            *(b + 24 * OS1_S1 + 160) =
                prefactor_z * *(b + 24 * OS1_S1 + 115) -
                p_over_q * *(b + 43 * OS1_S1 + 115) +
                one_over_two_q * *(b + 11 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 79);
            *(b + 24 * OS1_S1 + 161) =
                prefactor_y * *(b + 24 * OS1_S1 + 117) -
                p_over_q * *(b + 42 * OS1_S1 + 117) +
                one_over_two_q * *(b + 12 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 82);
            *(b + 24 * OS1_S1 + 162) =
                prefactor_y * *(b + 24 * OS1_S1 + 118) -
                p_over_q * *(b + 42 * OS1_S1 + 118) +
                one_over_two_q * *(b + 12 * OS1_S1 + 118) +
                one_over_two_q * *(b + 24 * OS1_S1 + 83);
            *(b + 24 * OS1_S1 + 163) =
                prefactor_y * *(b + 24 * OS1_S1 + 119) -
                p_over_q * *(b + 42 * OS1_S1 + 119) +
                one_over_two_q * *(b + 12 * OS1_S1 + 119);
            *(b + 24 * OS1_S1 + 164) =
                prefactor_z * *(b + 24 * OS1_S1 + 119) -
                p_over_q * *(b + 43 * OS1_S1 + 119) +
                one_over_two_q * *(b + 11 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 24 * OS1_S1 + 83);
            *(b + 25 * OS1_S1 + 120) =
                prefactor_x * *(b + 25 * OS1_S1 + 84) -
                p_over_q * *(b + 40 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 25 * OS1_S1 + 56);
            *(b + 25 * OS1_S1 + 121) = prefactor_y * *(b + 25 * OS1_S1 + 84) -
                                       p_over_q * *(b + 43 * OS1_S1 + 84);
            *(b + 25 * OS1_S1 + 122) =
                prefactor_z * *(b + 25 * OS1_S1 + 84) -
                p_over_q * *(b + 44 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 84);
            *(b + 25 * OS1_S1 + 123) = prefactor_y * *(b + 25 * OS1_S1 + 85) -
                                       p_over_q * *(b + 43 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 56);
            *(b + 25 * OS1_S1 + 124) = prefactor_y * *(b + 25 * OS1_S1 + 86) -
                                       p_over_q * *(b + 43 * OS1_S1 + 86);
            *(b + 25 * OS1_S1 + 125) =
                prefactor_z * *(b + 25 * OS1_S1 + 86) -
                p_over_q * *(b + 44 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 86) +
                one_over_two_q * *(b + 25 * OS1_S1 + 56);
            *(b + 25 * OS1_S1 + 126) =
                prefactor_y * *(b + 25 * OS1_S1 + 87) -
                p_over_q * *(b + 43 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 57);
            *(b + 25 * OS1_S1 + 127) =
                prefactor_z * *(b + 25 * OS1_S1 + 87) -
                p_over_q * *(b + 44 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 87);
            *(b + 25 * OS1_S1 + 128) = prefactor_y * *(b + 25 * OS1_S1 + 89) -
                                       p_over_q * *(b + 43 * OS1_S1 + 89);
            *(b + 25 * OS1_S1 + 129) =
                prefactor_z * *(b + 25 * OS1_S1 + 89) -
                p_over_q * *(b + 44 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 58);
            *(b + 25 * OS1_S1 + 130) =
                prefactor_y * *(b + 25 * OS1_S1 + 90) -
                p_over_q * *(b + 43 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 59);
            *(b + 25 * OS1_S1 + 131) =
                prefactor_z * *(b + 25 * OS1_S1 + 90) -
                p_over_q * *(b + 44 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 90);
            *(b + 25 * OS1_S1 + 132) = prefactor_y * *(b + 25 * OS1_S1 + 92) -
                                       p_over_q * *(b + 43 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 61);
            *(b + 25 * OS1_S1 + 133) = prefactor_y * *(b + 25 * OS1_S1 + 93) -
                                       p_over_q * *(b + 43 * OS1_S1 + 93);
            *(b + 25 * OS1_S1 + 134) =
                prefactor_z * *(b + 25 * OS1_S1 + 93) -
                p_over_q * *(b + 44 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 61);
            *(b + 25 * OS1_S1 + 135) =
                prefactor_x * *(b + 25 * OS1_S1 + 99) -
                p_over_q * *(b + 40 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 71);
            *(b + 25 * OS1_S1 + 136) =
                prefactor_z * *(b + 25 * OS1_S1 + 94) -
                p_over_q * *(b + 44 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 94);
            *(b + 25 * OS1_S1 + 137) =
                prefactor_z * *(b + 25 * OS1_S1 + 95) -
                p_over_q * *(b + 44 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 95) +
                one_over_two_q * *(b + 25 * OS1_S1 + 62);
            *(b + 25 * OS1_S1 + 138) = prefactor_y * *(b + 25 * OS1_S1 + 97) -
                                       p_over_q * *(b + 43 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 65);
            *(b + 25 * OS1_S1 + 139) = prefactor_y * *(b + 25 * OS1_S1 + 98) -
                                       p_over_q * *(b + 43 * OS1_S1 + 98);
            *(b + 25 * OS1_S1 + 140) =
                prefactor_x * *(b + 25 * OS1_S1 + 104) -
                p_over_q * *(b + 40 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 76);
            *(b + 25 * OS1_S1 + 141) =
                prefactor_x * *(b + 25 * OS1_S1 + 105) -
                p_over_q * *(b + 40 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 105) +
                one_over_two_q * *(b + 25 * OS1_S1 + 77);
            *(b + 25 * OS1_S1 + 142) =
                prefactor_z * *(b + 25 * OS1_S1 + 99) -
                p_over_q * *(b + 44 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 99);
            *(b + 25 * OS1_S1 + 143) =
                prefactor_z * *(b + 25 * OS1_S1 + 100) -
                p_over_q * *(b + 44 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 100) +
                one_over_two_q * *(b + 25 * OS1_S1 + 66);
            *(b + 25 * OS1_S1 + 144) =
                prefactor_x * *(b + 25 * OS1_S1 + 108) -
                p_over_q * *(b + 40 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 108) +
                one_over_two_q * *(b + 25 * OS1_S1 + 80);
            *(b + 25 * OS1_S1 + 145) = prefactor_y * *(b + 25 * OS1_S1 + 103) -
                                       p_over_q * *(b + 43 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 70);
            *(b + 25 * OS1_S1 + 146) = prefactor_y * *(b + 25 * OS1_S1 + 104) -
                                       p_over_q * *(b + 43 * OS1_S1 + 104);
            *(b + 25 * OS1_S1 + 147) =
                prefactor_x * *(b + 25 * OS1_S1 + 111) -
                p_over_q * *(b + 40 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 111) +
                one_over_two_q * *(b + 25 * OS1_S1 + 83);
            *(b + 25 * OS1_S1 + 148) =
                prefactor_x * *(b + 25 * OS1_S1 + 112) -
                p_over_q * *(b + 40 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 112);
            *(b + 25 * OS1_S1 + 149) =
                prefactor_z * *(b + 25 * OS1_S1 + 105) -
                p_over_q * *(b + 44 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 105);
            *(b + 25 * OS1_S1 + 150) =
                prefactor_x * *(b + 25 * OS1_S1 + 114) -
                p_over_q * *(b + 40 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 114);
            *(b + 25 * OS1_S1 + 151) =
                prefactor_x * *(b + 25 * OS1_S1 + 115) -
                p_over_q * *(b + 40 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 115);
            *(b + 25 * OS1_S1 + 152) =
                prefactor_x * *(b + 25 * OS1_S1 + 116) -
                p_over_q * *(b + 40 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 116);
            *(b + 25 * OS1_S1 + 153) =
                prefactor_x * *(b + 25 * OS1_S1 + 117) -
                p_over_q * *(b + 40 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 117);
            *(b + 25 * OS1_S1 + 154) = prefactor_y * *(b + 25 * OS1_S1 + 111) -
                                       p_over_q * *(b + 43 * OS1_S1 + 111);
            *(b + 25 * OS1_S1 + 155) =
                prefactor_x * *(b + 25 * OS1_S1 + 119) -
                p_over_q * *(b + 40 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 119);
            *(b + 25 * OS1_S1 + 156) =
                prefactor_y * *(b + 25 * OS1_S1 + 112) -
                p_over_q * *(b + 43 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 25 * OS1_S1 + 77);
            *(b + 25 * OS1_S1 + 157) =
                prefactor_z * *(b + 25 * OS1_S1 + 112) -
                p_over_q * *(b + 44 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 112);
            *(b + 25 * OS1_S1 + 158) =
                prefactor_z * *(b + 25 * OS1_S1 + 113) -
                p_over_q * *(b + 44 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 113) +
                one_over_two_q * *(b + 25 * OS1_S1 + 77);
            *(b + 25 * OS1_S1 + 159) =
                prefactor_z * *(b + 25 * OS1_S1 + 114) -
                p_over_q * *(b + 44 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 78);
            *(b + 25 * OS1_S1 + 160) =
                prefactor_y * *(b + 25 * OS1_S1 + 116) -
                p_over_q * *(b + 43 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 81);
            *(b + 25 * OS1_S1 + 161) =
                prefactor_y * *(b + 25 * OS1_S1 + 117) -
                p_over_q * *(b + 43 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 25 * OS1_S1 + 82);
            *(b + 25 * OS1_S1 + 162) = prefactor_y * *(b + 25 * OS1_S1 + 118) -
                                       p_over_q * *(b + 43 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 83);
            *(b + 25 * OS1_S1 + 163) = prefactor_y * *(b + 25 * OS1_S1 + 119) -
                                       p_over_q * *(b + 43 * OS1_S1 + 119);
            *(b + 25 * OS1_S1 + 164) =
                prefactor_z * *(b + 25 * OS1_S1 + 119) -
                p_over_q * *(b + 44 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 25 * OS1_S1 + 83);
            *(b + 26 * OS1_S1 + 120) =
                prefactor_x * *(b + 26 * OS1_S1 + 84) -
                p_over_q * *(b + 41 * OS1_S1 + 84) +
                one_over_two_q * *(b + 16 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 26 * OS1_S1 + 56);
            *(b + 26 * OS1_S1 + 121) =
                prefactor_y * *(b + 26 * OS1_S1 + 84) -
                p_over_q * *(b + 45 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 84);
            *(b + 26 * OS1_S1 + 122) = prefactor_z * *(b + 26 * OS1_S1 + 84) -
                                       p_over_q * *(b + 46 * OS1_S1 + 84);
            *(b + 26 * OS1_S1 + 123) =
                prefactor_y * *(b + 26 * OS1_S1 + 85) -
                p_over_q * *(b + 45 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 85) +
                one_over_two_q * *(b + 26 * OS1_S1 + 56);
            *(b + 26 * OS1_S1 + 124) = prefactor_z * *(b + 26 * OS1_S1 + 85) -
                                       p_over_q * *(b + 46 * OS1_S1 + 85);
            *(b + 26 * OS1_S1 + 125) = prefactor_z * *(b + 26 * OS1_S1 + 86) -
                                       p_over_q * *(b + 46 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 56);
            *(b + 26 * OS1_S1 + 126) =
                prefactor_y * *(b + 26 * OS1_S1 + 87) -
                p_over_q * *(b + 45 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 57);
            *(b + 26 * OS1_S1 + 127) = prefactor_z * *(b + 26 * OS1_S1 + 87) -
                                       p_over_q * *(b + 46 * OS1_S1 + 87);
            *(b + 26 * OS1_S1 + 128) =
                prefactor_y * *(b + 26 * OS1_S1 + 89) -
                p_over_q * *(b + 45 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 89);
            *(b + 26 * OS1_S1 + 129) =
                prefactor_z * *(b + 26 * OS1_S1 + 89) -
                p_over_q * *(b + 46 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 58);
            *(b + 26 * OS1_S1 + 130) =
                prefactor_x * *(b + 26 * OS1_S1 + 94) -
                p_over_q * *(b + 41 * OS1_S1 + 94) +
                one_over_two_q * *(b + 16 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 26 * OS1_S1 + 66);
            *(b + 26 * OS1_S1 + 131) = prefactor_z * *(b + 26 * OS1_S1 + 90) -
                                       p_over_q * *(b + 46 * OS1_S1 + 90);
            *(b + 26 * OS1_S1 + 132) = prefactor_z * *(b + 26 * OS1_S1 + 91) -
                                       p_over_q * *(b + 46 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 59);
            *(b + 26 * OS1_S1 + 133) =
                prefactor_y * *(b + 26 * OS1_S1 + 93) -
                p_over_q * *(b + 45 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 93);
            *(b + 26 * OS1_S1 + 134) =
                prefactor_z * *(b + 26 * OS1_S1 + 93) -
                p_over_q * *(b + 46 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 26 * OS1_S1 + 61);
            *(b + 26 * OS1_S1 + 135) =
                prefactor_x * *(b + 26 * OS1_S1 + 99) -
                p_over_q * *(b + 41 * OS1_S1 + 99) +
                one_over_two_q * *(b + 16 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 71);
            *(b + 26 * OS1_S1 + 136) = prefactor_z * *(b + 26 * OS1_S1 + 94) -
                                       p_over_q * *(b + 46 * OS1_S1 + 94);
            *(b + 26 * OS1_S1 + 137) = prefactor_z * *(b + 26 * OS1_S1 + 95) -
                                       p_over_q * *(b + 46 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 62);
            *(b + 26 * OS1_S1 + 138) =
                prefactor_y * *(b + 26 * OS1_S1 + 97) -
                p_over_q * *(b + 45 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 97) +
                one_over_two_q * *(b + 26 * OS1_S1 + 65);
            *(b + 26 * OS1_S1 + 139) =
                prefactor_y * *(b + 26 * OS1_S1 + 98) -
                p_over_q * *(b + 45 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 98);
            *(b + 26 * OS1_S1 + 140) =
                prefactor_x * *(b + 26 * OS1_S1 + 104) -
                p_over_q * *(b + 41 * OS1_S1 + 104) +
                one_over_two_q * *(b + 16 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 76);
            *(b + 26 * OS1_S1 + 141) =
                prefactor_x * *(b + 26 * OS1_S1 + 105) -
                p_over_q * *(b + 41 * OS1_S1 + 105) +
                one_over_two_q * *(b + 16 * OS1_S1 + 105) +
                one_over_two_q * *(b + 26 * OS1_S1 + 77);
            *(b + 26 * OS1_S1 + 142) = prefactor_z * *(b + 26 * OS1_S1 + 99) -
                                       p_over_q * *(b + 46 * OS1_S1 + 99);
            *(b + 26 * OS1_S1 + 143) = prefactor_z * *(b + 26 * OS1_S1 + 100) -
                                       p_over_q * *(b + 46 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 66);
            *(b + 26 * OS1_S1 + 144) =
                prefactor_x * *(b + 26 * OS1_S1 + 108) -
                p_over_q * *(b + 41 * OS1_S1 + 108) +
                one_over_two_q * *(b + 16 * OS1_S1 + 108) +
                one_over_two_q * *(b + 26 * OS1_S1 + 80);
            *(b + 26 * OS1_S1 + 145) =
                prefactor_x * *(b + 26 * OS1_S1 + 109) -
                p_over_q * *(b + 41 * OS1_S1 + 109) +
                one_over_two_q * *(b + 16 * OS1_S1 + 109) +
                one_over_two_q * *(b + 26 * OS1_S1 + 81);
            *(b + 26 * OS1_S1 + 146) =
                prefactor_y * *(b + 26 * OS1_S1 + 104) -
                p_over_q * *(b + 45 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 104);
            *(b + 26 * OS1_S1 + 147) =
                prefactor_x * *(b + 26 * OS1_S1 + 111) -
                p_over_q * *(b + 41 * OS1_S1 + 111) +
                one_over_two_q * *(b + 16 * OS1_S1 + 111) +
                one_over_two_q * *(b + 26 * OS1_S1 + 83);
            *(b + 26 * OS1_S1 + 148) =
                prefactor_x * *(b + 26 * OS1_S1 + 112) -
                p_over_q * *(b + 41 * OS1_S1 + 112) +
                one_over_two_q * *(b + 16 * OS1_S1 + 112);
            *(b + 26 * OS1_S1 + 149) = prefactor_z * *(b + 26 * OS1_S1 + 105) -
                                       p_over_q * *(b + 46 * OS1_S1 + 105);
            *(b + 26 * OS1_S1 + 150) =
                prefactor_x * *(b + 26 * OS1_S1 + 114) -
                p_over_q * *(b + 41 * OS1_S1 + 114) +
                one_over_two_q * *(b + 16 * OS1_S1 + 114);
            *(b + 26 * OS1_S1 + 151) =
                prefactor_x * *(b + 26 * OS1_S1 + 115) -
                p_over_q * *(b + 41 * OS1_S1 + 115) +
                one_over_two_q * *(b + 16 * OS1_S1 + 115);
            *(b + 26 * OS1_S1 + 152) =
                prefactor_x * *(b + 26 * OS1_S1 + 116) -
                p_over_q * *(b + 41 * OS1_S1 + 116) +
                one_over_two_q * *(b + 16 * OS1_S1 + 116);
            *(b + 26 * OS1_S1 + 153) =
                prefactor_x * *(b + 26 * OS1_S1 + 117) -
                p_over_q * *(b + 41 * OS1_S1 + 117) +
                one_over_two_q * *(b + 16 * OS1_S1 + 117);
            *(b + 26 * OS1_S1 + 154) =
                prefactor_x * *(b + 26 * OS1_S1 + 118) -
                p_over_q * *(b + 41 * OS1_S1 + 118) +
                one_over_two_q * *(b + 16 * OS1_S1 + 118);
            *(b + 26 * OS1_S1 + 155) =
                prefactor_x * *(b + 26 * OS1_S1 + 119) -
                p_over_q * *(b + 41 * OS1_S1 + 119) +
                one_over_two_q * *(b + 16 * OS1_S1 + 119);
            *(b + 26 * OS1_S1 + 156) =
                prefactor_y * *(b + 26 * OS1_S1 + 112) -
                p_over_q * *(b + 45 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 26 * OS1_S1 + 77);
            *(b + 26 * OS1_S1 + 157) = prefactor_z * *(b + 26 * OS1_S1 + 112) -
                                       p_over_q * *(b + 46 * OS1_S1 + 112);
            *(b + 26 * OS1_S1 + 158) = prefactor_z * *(b + 26 * OS1_S1 + 113) -
                                       p_over_q * *(b + 46 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 77);
            *(b + 26 * OS1_S1 + 159) =
                prefactor_z * *(b + 26 * OS1_S1 + 114) -
                p_over_q * *(b + 46 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 78);
            *(b + 26 * OS1_S1 + 160) =
                prefactor_z * *(b + 26 * OS1_S1 + 115) -
                p_over_q * *(b + 46 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 26 * OS1_S1 + 79);
            *(b + 26 * OS1_S1 + 161) =
                prefactor_y * *(b + 26 * OS1_S1 + 117) -
                p_over_q * *(b + 45 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 82);
            *(b + 26 * OS1_S1 + 162) =
                prefactor_y * *(b + 26 * OS1_S1 + 118) -
                p_over_q * *(b + 45 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 118) +
                one_over_two_q * *(b + 26 * OS1_S1 + 83);
            *(b + 26 * OS1_S1 + 163) =
                prefactor_y * *(b + 26 * OS1_S1 + 119) -
                p_over_q * *(b + 45 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 119);
            *(b + 26 * OS1_S1 + 164) =
                prefactor_z * *(b + 26 * OS1_S1 + 119) -
                p_over_q * *(b + 46 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 26 * OS1_S1 + 83);
            *(b + 27 * OS1_S1 + 120) =
                prefactor_x * *(b + 27 * OS1_S1 + 84) -
                p_over_q * *(b + 42 * OS1_S1 + 84) +
                one_over_two_q * *(b + 17 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 27 * OS1_S1 + 56);
            *(b + 27 * OS1_S1 + 121) =
                prefactor_y * *(b + 27 * OS1_S1 + 84) -
                p_over_q * *(b + 46 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 84);
            *(b + 27 * OS1_S1 + 122) = prefactor_z * *(b + 27 * OS1_S1 + 84) -
                                       p_over_q * *(b + 47 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 84);
            *(b + 27 * OS1_S1 + 123) =
                prefactor_y * *(b + 27 * OS1_S1 + 85) -
                p_over_q * *(b + 46 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 85) +
                one_over_two_q * *(b + 27 * OS1_S1 + 56);
            *(b + 27 * OS1_S1 + 124) = prefactor_z * *(b + 27 * OS1_S1 + 85) -
                                       p_over_q * *(b + 47 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 85);
            *(b + 27 * OS1_S1 + 125) =
                prefactor_z * *(b + 27 * OS1_S1 + 86) -
                p_over_q * *(b + 47 * OS1_S1 + 86) +
                one_over_two_q * *(b + 13 * OS1_S1 + 86) +
                one_over_two_q * *(b + 27 * OS1_S1 + 56);
            *(b + 27 * OS1_S1 + 126) =
                prefactor_y * *(b + 27 * OS1_S1 + 87) -
                p_over_q * *(b + 46 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 57);
            *(b + 27 * OS1_S1 + 127) = prefactor_z * *(b + 27 * OS1_S1 + 87) -
                                       p_over_q * *(b + 47 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 87);
            *(b + 27 * OS1_S1 + 128) =
                prefactor_y * *(b + 27 * OS1_S1 + 89) -
                p_over_q * *(b + 46 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 89);
            *(b + 27 * OS1_S1 + 129) =
                prefactor_z * *(b + 27 * OS1_S1 + 89) -
                p_over_q * *(b + 47 * OS1_S1 + 89) +
                one_over_two_q * *(b + 13 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 58);
            *(b + 27 * OS1_S1 + 130) =
                prefactor_x * *(b + 27 * OS1_S1 + 94) -
                p_over_q * *(b + 42 * OS1_S1 + 94) +
                one_over_two_q * *(b + 17 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 66);
            *(b + 27 * OS1_S1 + 131) = prefactor_z * *(b + 27 * OS1_S1 + 90) -
                                       p_over_q * *(b + 47 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 90);
            *(b + 27 * OS1_S1 + 132) =
                prefactor_z * *(b + 27 * OS1_S1 + 91) -
                p_over_q * *(b + 47 * OS1_S1 + 91) +
                one_over_two_q * *(b + 13 * OS1_S1 + 91) +
                one_over_two_q * *(b + 27 * OS1_S1 + 59);
            *(b + 27 * OS1_S1 + 133) =
                prefactor_y * *(b + 27 * OS1_S1 + 93) -
                p_over_q * *(b + 46 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 93);
            *(b + 27 * OS1_S1 + 134) =
                prefactor_z * *(b + 27 * OS1_S1 + 93) -
                p_over_q * *(b + 47 * OS1_S1 + 93) +
                one_over_two_q * *(b + 13 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 61);
            *(b + 27 * OS1_S1 + 135) =
                prefactor_x * *(b + 27 * OS1_S1 + 99) -
                p_over_q * *(b + 42 * OS1_S1 + 99) +
                one_over_two_q * *(b + 17 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 71);
            *(b + 27 * OS1_S1 + 136) = prefactor_z * *(b + 27 * OS1_S1 + 94) -
                                       p_over_q * *(b + 47 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 94);
            *(b + 27 * OS1_S1 + 137) =
                prefactor_z * *(b + 27 * OS1_S1 + 95) -
                p_over_q * *(b + 47 * OS1_S1 + 95) +
                one_over_two_q * *(b + 13 * OS1_S1 + 95) +
                one_over_two_q * *(b + 27 * OS1_S1 + 62);
            *(b + 27 * OS1_S1 + 138) =
                prefactor_y * *(b + 27 * OS1_S1 + 97) -
                p_over_q * *(b + 46 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 97) +
                one_over_two_q * *(b + 27 * OS1_S1 + 65);
            *(b + 27 * OS1_S1 + 139) =
                prefactor_y * *(b + 27 * OS1_S1 + 98) -
                p_over_q * *(b + 46 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 98);
            *(b + 27 * OS1_S1 + 140) =
                prefactor_x * *(b + 27 * OS1_S1 + 104) -
                p_over_q * *(b + 42 * OS1_S1 + 104) +
                one_over_two_q * *(b + 17 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 76);
            *(b + 27 * OS1_S1 + 141) =
                prefactor_x * *(b + 27 * OS1_S1 + 105) -
                p_over_q * *(b + 42 * OS1_S1 + 105) +
                one_over_two_q * *(b + 17 * OS1_S1 + 105) +
                one_over_two_q * *(b + 27 * OS1_S1 + 77);
            *(b + 27 * OS1_S1 + 142) = prefactor_z * *(b + 27 * OS1_S1 + 99) -
                                       p_over_q * *(b + 47 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 99);
            *(b + 27 * OS1_S1 + 143) =
                prefactor_z * *(b + 27 * OS1_S1 + 100) -
                p_over_q * *(b + 47 * OS1_S1 + 100) +
                one_over_two_q * *(b + 13 * OS1_S1 + 100) +
                one_over_two_q * *(b + 27 * OS1_S1 + 66);
            *(b + 27 * OS1_S1 + 144) =
                prefactor_x * *(b + 27 * OS1_S1 + 108) -
                p_over_q * *(b + 42 * OS1_S1 + 108) +
                one_over_two_q * *(b + 17 * OS1_S1 + 108) +
                one_over_two_q * *(b + 27 * OS1_S1 + 80);
            *(b + 27 * OS1_S1 + 145) =
                prefactor_x * *(b + 27 * OS1_S1 + 109) -
                p_over_q * *(b + 42 * OS1_S1 + 109) +
                one_over_two_q * *(b + 17 * OS1_S1 + 109) +
                one_over_two_q * *(b + 27 * OS1_S1 + 81);
            *(b + 27 * OS1_S1 + 146) =
                prefactor_y * *(b + 27 * OS1_S1 + 104) -
                p_over_q * *(b + 46 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 104);
            *(b + 27 * OS1_S1 + 147) =
                prefactor_x * *(b + 27 * OS1_S1 + 111) -
                p_over_q * *(b + 42 * OS1_S1 + 111) +
                one_over_two_q * *(b + 17 * OS1_S1 + 111) +
                one_over_two_q * *(b + 27 * OS1_S1 + 83);
            *(b + 27 * OS1_S1 + 148) =
                prefactor_x * *(b + 27 * OS1_S1 + 112) -
                p_over_q * *(b + 42 * OS1_S1 + 112) +
                one_over_two_q * *(b + 17 * OS1_S1 + 112);
            *(b + 27 * OS1_S1 + 149) =
                prefactor_z * *(b + 27 * OS1_S1 + 105) -
                p_over_q * *(b + 47 * OS1_S1 + 105) +
                one_over_two_q * *(b + 13 * OS1_S1 + 105);
            *(b + 27 * OS1_S1 + 150) =
                prefactor_x * *(b + 27 * OS1_S1 + 114) -
                p_over_q * *(b + 42 * OS1_S1 + 114) +
                one_over_two_q * *(b + 17 * OS1_S1 + 114);
            *(b + 27 * OS1_S1 + 151) =
                prefactor_x * *(b + 27 * OS1_S1 + 115) -
                p_over_q * *(b + 42 * OS1_S1 + 115) +
                one_over_two_q * *(b + 17 * OS1_S1 + 115);
            *(b + 27 * OS1_S1 + 152) =
                prefactor_x * *(b + 27 * OS1_S1 + 116) -
                p_over_q * *(b + 42 * OS1_S1 + 116) +
                one_over_two_q * *(b + 17 * OS1_S1 + 116);
            *(b + 27 * OS1_S1 + 153) =
                prefactor_x * *(b + 27 * OS1_S1 + 117) -
                p_over_q * *(b + 42 * OS1_S1 + 117) +
                one_over_two_q * *(b + 17 * OS1_S1 + 117);
            *(b + 27 * OS1_S1 + 154) =
                prefactor_x * *(b + 27 * OS1_S1 + 118) -
                p_over_q * *(b + 42 * OS1_S1 + 118) +
                one_over_two_q * *(b + 17 * OS1_S1 + 118);
            *(b + 27 * OS1_S1 + 155) =
                prefactor_x * *(b + 27 * OS1_S1 + 119) -
                p_over_q * *(b + 42 * OS1_S1 + 119) +
                one_over_two_q * *(b + 17 * OS1_S1 + 119);
            *(b + 27 * OS1_S1 + 156) =
                prefactor_y * *(b + 27 * OS1_S1 + 112) -
                p_over_q * *(b + 46 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 27 * OS1_S1 + 77);
            *(b + 27 * OS1_S1 + 157) =
                prefactor_z * *(b + 27 * OS1_S1 + 112) -
                p_over_q * *(b + 47 * OS1_S1 + 112) +
                one_over_two_q * *(b + 13 * OS1_S1 + 112);
            *(b + 27 * OS1_S1 + 158) =
                prefactor_z * *(b + 27 * OS1_S1 + 113) -
                p_over_q * *(b + 47 * OS1_S1 + 113) +
                one_over_two_q * *(b + 13 * OS1_S1 + 113) +
                one_over_two_q * *(b + 27 * OS1_S1 + 77);
            *(b + 27 * OS1_S1 + 159) =
                prefactor_z * *(b + 27 * OS1_S1 + 114) -
                p_over_q * *(b + 47 * OS1_S1 + 114) +
                one_over_two_q * *(b + 13 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 78);
            *(b + 27 * OS1_S1 + 160) =
                prefactor_z * *(b + 27 * OS1_S1 + 115) -
                p_over_q * *(b + 47 * OS1_S1 + 115) +
                one_over_two_q * *(b + 13 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 79);
            *(b + 27 * OS1_S1 + 161) =
                prefactor_y * *(b + 27 * OS1_S1 + 117) -
                p_over_q * *(b + 46 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 82);
            *(b + 27 * OS1_S1 + 162) =
                prefactor_y * *(b + 27 * OS1_S1 + 118) -
                p_over_q * *(b + 46 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 118) +
                one_over_two_q * *(b + 27 * OS1_S1 + 83);
            *(b + 27 * OS1_S1 + 163) =
                prefactor_y * *(b + 27 * OS1_S1 + 119) -
                p_over_q * *(b + 46 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 119);
            *(b + 27 * OS1_S1 + 164) =
                prefactor_z * *(b + 27 * OS1_S1 + 119) -
                p_over_q * *(b + 47 * OS1_S1 + 119) +
                one_over_two_q * *(b + 13 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 27 * OS1_S1 + 83);
            *(b + 28 * OS1_S1 + 120) =
                prefactor_x * *(b + 28 * OS1_S1 + 84) -
                p_over_q * *(b + 43 * OS1_S1 + 84) +
                one_over_two_q * *(b + 18 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 28 * OS1_S1 + 56);
            *(b + 28 * OS1_S1 + 121) = prefactor_y * *(b + 28 * OS1_S1 + 84) -
                                       p_over_q * *(b + 47 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 84);
            *(b + 28 * OS1_S1 + 122) =
                prefactor_z * *(b + 28 * OS1_S1 + 84) -
                p_over_q * *(b + 48 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 84);
            *(b + 28 * OS1_S1 + 123) =
                prefactor_y * *(b + 28 * OS1_S1 + 85) -
                p_over_q * *(b + 47 * OS1_S1 + 85) +
                one_over_two_q * *(b + 15 * OS1_S1 + 85) +
                one_over_two_q * *(b + 28 * OS1_S1 + 56);
            *(b + 28 * OS1_S1 + 124) = prefactor_y * *(b + 28 * OS1_S1 + 86) -
                                       p_over_q * *(b + 47 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 86);
            *(b + 28 * OS1_S1 + 125) =
                prefactor_z * *(b + 28 * OS1_S1 + 86) -
                p_over_q * *(b + 48 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 86) +
                one_over_two_q * *(b + 28 * OS1_S1 + 56);
            *(b + 28 * OS1_S1 + 126) =
                prefactor_y * *(b + 28 * OS1_S1 + 87) -
                p_over_q * *(b + 47 * OS1_S1 + 87) +
                one_over_two_q * *(b + 15 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 57);
            *(b + 28 * OS1_S1 + 127) =
                prefactor_z * *(b + 28 * OS1_S1 + 87) -
                p_over_q * *(b + 48 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 87);
            *(b + 28 * OS1_S1 + 128) = prefactor_y * *(b + 28 * OS1_S1 + 89) -
                                       p_over_q * *(b + 47 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 89);
            *(b + 28 * OS1_S1 + 129) =
                prefactor_z * *(b + 28 * OS1_S1 + 89) -
                p_over_q * *(b + 48 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 58);
            *(b + 28 * OS1_S1 + 130) =
                prefactor_y * *(b + 28 * OS1_S1 + 90) -
                p_over_q * *(b + 47 * OS1_S1 + 90) +
                one_over_two_q * *(b + 15 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 59);
            *(b + 28 * OS1_S1 + 131) =
                prefactor_z * *(b + 28 * OS1_S1 + 90) -
                p_over_q * *(b + 48 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 90);
            *(b + 28 * OS1_S1 + 132) =
                prefactor_y * *(b + 28 * OS1_S1 + 92) -
                p_over_q * *(b + 47 * OS1_S1 + 92) +
                one_over_two_q * *(b + 15 * OS1_S1 + 92) +
                one_over_two_q * *(b + 28 * OS1_S1 + 61);
            *(b + 28 * OS1_S1 + 133) = prefactor_y * *(b + 28 * OS1_S1 + 93) -
                                       p_over_q * *(b + 47 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 93);
            *(b + 28 * OS1_S1 + 134) =
                prefactor_x * *(b + 28 * OS1_S1 + 98) -
                p_over_q * *(b + 43 * OS1_S1 + 98) +
                one_over_two_q * *(b + 18 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 70);
            *(b + 28 * OS1_S1 + 135) =
                prefactor_x * *(b + 28 * OS1_S1 + 99) -
                p_over_q * *(b + 43 * OS1_S1 + 99) +
                one_over_two_q * *(b + 18 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 71);
            *(b + 28 * OS1_S1 + 136) =
                prefactor_z * *(b + 28 * OS1_S1 + 94) -
                p_over_q * *(b + 48 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 94);
            *(b + 28 * OS1_S1 + 137) =
                prefactor_z * *(b + 28 * OS1_S1 + 95) -
                p_over_q * *(b + 48 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 95) +
                one_over_two_q * *(b + 28 * OS1_S1 + 62);
            *(b + 28 * OS1_S1 + 138) =
                prefactor_y * *(b + 28 * OS1_S1 + 97) -
                p_over_q * *(b + 47 * OS1_S1 + 97) +
                one_over_two_q * *(b + 15 * OS1_S1 + 97) +
                one_over_two_q * *(b + 28 * OS1_S1 + 65);
            *(b + 28 * OS1_S1 + 139) = prefactor_y * *(b + 28 * OS1_S1 + 98) -
                                       p_over_q * *(b + 47 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 98);
            *(b + 28 * OS1_S1 + 140) =
                prefactor_x * *(b + 28 * OS1_S1 + 104) -
                p_over_q * *(b + 43 * OS1_S1 + 104) +
                one_over_two_q * *(b + 18 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 76);
            *(b + 28 * OS1_S1 + 141) =
                prefactor_x * *(b + 28 * OS1_S1 + 105) -
                p_over_q * *(b + 43 * OS1_S1 + 105) +
                one_over_two_q * *(b + 18 * OS1_S1 + 105) +
                one_over_two_q * *(b + 28 * OS1_S1 + 77);
            *(b + 28 * OS1_S1 + 142) =
                prefactor_z * *(b + 28 * OS1_S1 + 99) -
                p_over_q * *(b + 48 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 99);
            *(b + 28 * OS1_S1 + 143) =
                prefactor_x * *(b + 28 * OS1_S1 + 107) -
                p_over_q * *(b + 43 * OS1_S1 + 107) +
                one_over_two_q * *(b + 18 * OS1_S1 + 107) +
                one_over_two_q * *(b + 28 * OS1_S1 + 79);
            *(b + 28 * OS1_S1 + 144) =
                prefactor_x * *(b + 28 * OS1_S1 + 108) -
                p_over_q * *(b + 43 * OS1_S1 + 108) +
                one_over_two_q * *(b + 18 * OS1_S1 + 108) +
                one_over_two_q * *(b + 28 * OS1_S1 + 80);
            *(b + 28 * OS1_S1 + 145) =
                prefactor_y * *(b + 28 * OS1_S1 + 103) -
                p_over_q * *(b + 47 * OS1_S1 + 103) +
                one_over_two_q * *(b + 15 * OS1_S1 + 103) +
                one_over_two_q * *(b + 28 * OS1_S1 + 70);
            *(b + 28 * OS1_S1 + 146) =
                prefactor_y * *(b + 28 * OS1_S1 + 104) -
                p_over_q * *(b + 47 * OS1_S1 + 104) +
                one_over_two_q * *(b + 15 * OS1_S1 + 104);
            *(b + 28 * OS1_S1 + 147) =
                prefactor_x * *(b + 28 * OS1_S1 + 111) -
                p_over_q * *(b + 43 * OS1_S1 + 111) +
                one_over_two_q * *(b + 18 * OS1_S1 + 111) +
                one_over_two_q * *(b + 28 * OS1_S1 + 83);
            *(b + 28 * OS1_S1 + 148) =
                prefactor_x * *(b + 28 * OS1_S1 + 112) -
                p_over_q * *(b + 43 * OS1_S1 + 112) +
                one_over_two_q * *(b + 18 * OS1_S1 + 112);
            *(b + 28 * OS1_S1 + 149) =
                prefactor_x * *(b + 28 * OS1_S1 + 113) -
                p_over_q * *(b + 43 * OS1_S1 + 113) +
                one_over_two_q * *(b + 18 * OS1_S1 + 113);
            *(b + 28 * OS1_S1 + 150) =
                prefactor_x * *(b + 28 * OS1_S1 + 114) -
                p_over_q * *(b + 43 * OS1_S1 + 114) +
                one_over_two_q * *(b + 18 * OS1_S1 + 114);
            *(b + 28 * OS1_S1 + 151) =
                prefactor_x * *(b + 28 * OS1_S1 + 115) -
                p_over_q * *(b + 43 * OS1_S1 + 115) +
                one_over_two_q * *(b + 18 * OS1_S1 + 115);
            *(b + 28 * OS1_S1 + 152) =
                prefactor_x * *(b + 28 * OS1_S1 + 116) -
                p_over_q * *(b + 43 * OS1_S1 + 116) +
                one_over_two_q * *(b + 18 * OS1_S1 + 116);
            *(b + 28 * OS1_S1 + 153) =
                prefactor_x * *(b + 28 * OS1_S1 + 117) -
                p_over_q * *(b + 43 * OS1_S1 + 117) +
                one_over_two_q * *(b + 18 * OS1_S1 + 117);
            *(b + 28 * OS1_S1 + 154) =
                prefactor_y * *(b + 28 * OS1_S1 + 111) -
                p_over_q * *(b + 47 * OS1_S1 + 111) +
                one_over_two_q * *(b + 15 * OS1_S1 + 111);
            *(b + 28 * OS1_S1 + 155) =
                prefactor_x * *(b + 28 * OS1_S1 + 119) -
                p_over_q * *(b + 43 * OS1_S1 + 119) +
                one_over_two_q * *(b + 18 * OS1_S1 + 119);
            *(b + 28 * OS1_S1 + 156) =
                prefactor_y * *(b + 28 * OS1_S1 + 112) -
                p_over_q * *(b + 47 * OS1_S1 + 112) +
                one_over_two_q * *(b + 15 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 28 * OS1_S1 + 77);
            *(b + 28 * OS1_S1 + 157) =
                prefactor_z * *(b + 28 * OS1_S1 + 112) -
                p_over_q * *(b + 48 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 112);
            *(b + 28 * OS1_S1 + 158) =
                prefactor_z * *(b + 28 * OS1_S1 + 113) -
                p_over_q * *(b + 48 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 113) +
                one_over_two_q * *(b + 28 * OS1_S1 + 77);
            *(b + 28 * OS1_S1 + 159) =
                prefactor_z * *(b + 28 * OS1_S1 + 114) -
                p_over_q * *(b + 48 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 78);
            *(b + 28 * OS1_S1 + 160) =
                prefactor_y * *(b + 28 * OS1_S1 + 116) -
                p_over_q * *(b + 47 * OS1_S1 + 116) +
                one_over_two_q * *(b + 15 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 81);
            *(b + 28 * OS1_S1 + 161) =
                prefactor_y * *(b + 28 * OS1_S1 + 117) -
                p_over_q * *(b + 47 * OS1_S1 + 117) +
                one_over_two_q * *(b + 15 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 82);
            *(b + 28 * OS1_S1 + 162) =
                prefactor_y * *(b + 28 * OS1_S1 + 118) -
                p_over_q * *(b + 47 * OS1_S1 + 118) +
                one_over_two_q * *(b + 15 * OS1_S1 + 118) +
                one_over_two_q * *(b + 28 * OS1_S1 + 83);
            *(b + 28 * OS1_S1 + 163) =
                prefactor_y * *(b + 28 * OS1_S1 + 119) -
                p_over_q * *(b + 47 * OS1_S1 + 119) +
                one_over_two_q * *(b + 15 * OS1_S1 + 119);
            *(b + 28 * OS1_S1 + 164) =
                prefactor_z * *(b + 28 * OS1_S1 + 119) -
                p_over_q * *(b + 48 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 28 * OS1_S1 + 83);
            *(b + 29 * OS1_S1 + 120) =
                prefactor_x * *(b + 29 * OS1_S1 + 84) -
                p_over_q * *(b + 44 * OS1_S1 + 84) +
                one_over_two_q * *(b + 19 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 29 * OS1_S1 + 56);
            *(b + 29 * OS1_S1 + 121) = prefactor_y * *(b + 29 * OS1_S1 + 84) -
                                       p_over_q * *(b + 48 * OS1_S1 + 84);
            *(b + 29 * OS1_S1 + 122) =
                prefactor_z * *(b + 29 * OS1_S1 + 84) -
                p_over_q * *(b + 49 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 84);
            *(b + 29 * OS1_S1 + 123) = prefactor_y * *(b + 29 * OS1_S1 + 85) -
                                       p_over_q * *(b + 48 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 56);
            *(b + 29 * OS1_S1 + 124) = prefactor_y * *(b + 29 * OS1_S1 + 86) -
                                       p_over_q * *(b + 48 * OS1_S1 + 86);
            *(b + 29 * OS1_S1 + 125) =
                prefactor_z * *(b + 29 * OS1_S1 + 86) -
                p_over_q * *(b + 49 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 86) +
                one_over_two_q * *(b + 29 * OS1_S1 + 56);
            *(b + 29 * OS1_S1 + 126) =
                prefactor_y * *(b + 29 * OS1_S1 + 87) -
                p_over_q * *(b + 48 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 57);
            *(b + 29 * OS1_S1 + 127) =
                prefactor_z * *(b + 29 * OS1_S1 + 87) -
                p_over_q * *(b + 49 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 87);
            *(b + 29 * OS1_S1 + 128) = prefactor_y * *(b + 29 * OS1_S1 + 89) -
                                       p_over_q * *(b + 48 * OS1_S1 + 89);
            *(b + 29 * OS1_S1 + 129) =
                prefactor_z * *(b + 29 * OS1_S1 + 89) -
                p_over_q * *(b + 49 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 58);
            *(b + 29 * OS1_S1 + 130) =
                prefactor_y * *(b + 29 * OS1_S1 + 90) -
                p_over_q * *(b + 48 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 29 * OS1_S1 + 59);
            *(b + 29 * OS1_S1 + 131) =
                prefactor_z * *(b + 29 * OS1_S1 + 90) -
                p_over_q * *(b + 49 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 90);
            *(b + 29 * OS1_S1 + 132) = prefactor_y * *(b + 29 * OS1_S1 + 92) -
                                       p_over_q * *(b + 48 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 61);
            *(b + 29 * OS1_S1 + 133) = prefactor_y * *(b + 29 * OS1_S1 + 93) -
                                       p_over_q * *(b + 48 * OS1_S1 + 93);
            *(b + 29 * OS1_S1 + 134) =
                prefactor_x * *(b + 29 * OS1_S1 + 98) -
                p_over_q * *(b + 44 * OS1_S1 + 98) +
                one_over_two_q * *(b + 19 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 29 * OS1_S1 + 70);
            *(b + 29 * OS1_S1 + 135) =
                prefactor_x * *(b + 29 * OS1_S1 + 99) -
                p_over_q * *(b + 44 * OS1_S1 + 99) +
                one_over_two_q * *(b + 19 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 71);
            *(b + 29 * OS1_S1 + 136) =
                prefactor_z * *(b + 29 * OS1_S1 + 94) -
                p_over_q * *(b + 49 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 94);
            *(b + 29 * OS1_S1 + 137) =
                prefactor_z * *(b + 29 * OS1_S1 + 95) -
                p_over_q * *(b + 49 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 95) +
                one_over_two_q * *(b + 29 * OS1_S1 + 62);
            *(b + 29 * OS1_S1 + 138) = prefactor_y * *(b + 29 * OS1_S1 + 97) -
                                       p_over_q * *(b + 48 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 65);
            *(b + 29 * OS1_S1 + 139) = prefactor_y * *(b + 29 * OS1_S1 + 98) -
                                       p_over_q * *(b + 48 * OS1_S1 + 98);
            *(b + 29 * OS1_S1 + 140) =
                prefactor_x * *(b + 29 * OS1_S1 + 104) -
                p_over_q * *(b + 44 * OS1_S1 + 104) +
                one_over_two_q * *(b + 19 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 76);
            *(b + 29 * OS1_S1 + 141) =
                prefactor_x * *(b + 29 * OS1_S1 + 105) -
                p_over_q * *(b + 44 * OS1_S1 + 105) +
                one_over_two_q * *(b + 19 * OS1_S1 + 105) +
                one_over_two_q * *(b + 29 * OS1_S1 + 77);
            *(b + 29 * OS1_S1 + 142) =
                prefactor_z * *(b + 29 * OS1_S1 + 99) -
                p_over_q * *(b + 49 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 99);
            *(b + 29 * OS1_S1 + 143) =
                prefactor_x * *(b + 29 * OS1_S1 + 107) -
                p_over_q * *(b + 44 * OS1_S1 + 107) +
                one_over_two_q * *(b + 19 * OS1_S1 + 107) +
                one_over_two_q * *(b + 29 * OS1_S1 + 79);
            *(b + 29 * OS1_S1 + 144) =
                prefactor_x * *(b + 29 * OS1_S1 + 108) -
                p_over_q * *(b + 44 * OS1_S1 + 108) +
                one_over_two_q * *(b + 19 * OS1_S1 + 108) +
                one_over_two_q * *(b + 29 * OS1_S1 + 80);
            *(b + 29 * OS1_S1 + 145) = prefactor_y * *(b + 29 * OS1_S1 + 103) -
                                       p_over_q * *(b + 48 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 70);
            *(b + 29 * OS1_S1 + 146) = prefactor_y * *(b + 29 * OS1_S1 + 104) -
                                       p_over_q * *(b + 48 * OS1_S1 + 104);
            *(b + 29 * OS1_S1 + 147) =
                prefactor_x * *(b + 29 * OS1_S1 + 111) -
                p_over_q * *(b + 44 * OS1_S1 + 111) +
                one_over_two_q * *(b + 19 * OS1_S1 + 111) +
                one_over_two_q * *(b + 29 * OS1_S1 + 83);
            *(b + 29 * OS1_S1 + 148) =
                prefactor_x * *(b + 29 * OS1_S1 + 112) -
                p_over_q * *(b + 44 * OS1_S1 + 112) +
                one_over_two_q * *(b + 19 * OS1_S1 + 112);
            *(b + 29 * OS1_S1 + 149) =
                prefactor_x * *(b + 29 * OS1_S1 + 113) -
                p_over_q * *(b + 44 * OS1_S1 + 113) +
                one_over_two_q * *(b + 19 * OS1_S1 + 113);
            *(b + 29 * OS1_S1 + 150) =
                prefactor_x * *(b + 29 * OS1_S1 + 114) -
                p_over_q * *(b + 44 * OS1_S1 + 114) +
                one_over_two_q * *(b + 19 * OS1_S1 + 114);
            *(b + 29 * OS1_S1 + 151) =
                prefactor_x * *(b + 29 * OS1_S1 + 115) -
                p_over_q * *(b + 44 * OS1_S1 + 115) +
                one_over_two_q * *(b + 19 * OS1_S1 + 115);
            *(b + 29 * OS1_S1 + 152) =
                prefactor_x * *(b + 29 * OS1_S1 + 116) -
                p_over_q * *(b + 44 * OS1_S1 + 116) +
                one_over_two_q * *(b + 19 * OS1_S1 + 116);
            *(b + 29 * OS1_S1 + 153) =
                prefactor_x * *(b + 29 * OS1_S1 + 117) -
                p_over_q * *(b + 44 * OS1_S1 + 117) +
                one_over_two_q * *(b + 19 * OS1_S1 + 117);
            *(b + 29 * OS1_S1 + 154) = prefactor_y * *(b + 29 * OS1_S1 + 111) -
                                       p_over_q * *(b + 48 * OS1_S1 + 111);
            *(b + 29 * OS1_S1 + 155) =
                prefactor_x * *(b + 29 * OS1_S1 + 119) -
                p_over_q * *(b + 44 * OS1_S1 + 119) +
                one_over_two_q * *(b + 19 * OS1_S1 + 119);
            *(b + 29 * OS1_S1 + 156) =
                prefactor_y * *(b + 29 * OS1_S1 + 112) -
                p_over_q * *(b + 48 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 29 * OS1_S1 + 77);
            *(b + 29 * OS1_S1 + 157) =
                prefactor_z * *(b + 29 * OS1_S1 + 112) -
                p_over_q * *(b + 49 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 112);
            *(b + 29 * OS1_S1 + 158) =
                prefactor_z * *(b + 29 * OS1_S1 + 113) -
                p_over_q * *(b + 49 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 113) +
                one_over_two_q * *(b + 29 * OS1_S1 + 77);
            *(b + 29 * OS1_S1 + 159) =
                prefactor_z * *(b + 29 * OS1_S1 + 114) -
                p_over_q * *(b + 49 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 78);
            *(b + 29 * OS1_S1 + 160) =
                prefactor_y * *(b + 29 * OS1_S1 + 116) -
                p_over_q * *(b + 48 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 29 * OS1_S1 + 81);
            *(b + 29 * OS1_S1 + 161) =
                prefactor_y * *(b + 29 * OS1_S1 + 117) -
                p_over_q * *(b + 48 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 82);
            *(b + 29 * OS1_S1 + 162) = prefactor_y * *(b + 29 * OS1_S1 + 118) -
                                       p_over_q * *(b + 48 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 83);
            *(b + 29 * OS1_S1 + 163) = prefactor_y * *(b + 29 * OS1_S1 + 119) -
                                       p_over_q * *(b + 48 * OS1_S1 + 119);
            *(b + 29 * OS1_S1 + 164) =
                prefactor_z * *(b + 29 * OS1_S1 + 119) -
                p_over_q * *(b + 49 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 29 * OS1_S1 + 83);
            *(b + 30 * OS1_S1 + 120) =
                prefactor_x * *(b + 30 * OS1_S1 + 84) -
                p_over_q * *(b + 45 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 30 * OS1_S1 + 56);
            *(b + 30 * OS1_S1 + 121) =
                prefactor_y * *(b + 30 * OS1_S1 + 84) -
                p_over_q * *(b + 50 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 84);
            *(b + 30 * OS1_S1 + 122) = prefactor_z * *(b + 30 * OS1_S1 + 84) -
                                       p_over_q * *(b + 51 * OS1_S1 + 84);
            *(b + 30 * OS1_S1 + 123) =
                prefactor_y * *(b + 30 * OS1_S1 + 85) -
                p_over_q * *(b + 50 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 85) +
                one_over_two_q * *(b + 30 * OS1_S1 + 56);
            *(b + 30 * OS1_S1 + 124) = prefactor_z * *(b + 30 * OS1_S1 + 85) -
                                       p_over_q * *(b + 51 * OS1_S1 + 85);
            *(b + 30 * OS1_S1 + 125) = prefactor_z * *(b + 30 * OS1_S1 + 86) -
                                       p_over_q * *(b + 51 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 56);
            *(b + 30 * OS1_S1 + 126) =
                prefactor_y * *(b + 30 * OS1_S1 + 87) -
                p_over_q * *(b + 50 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 57);
            *(b + 30 * OS1_S1 + 127) = prefactor_z * *(b + 30 * OS1_S1 + 87) -
                                       p_over_q * *(b + 51 * OS1_S1 + 87);
            *(b + 30 * OS1_S1 + 128) =
                prefactor_y * *(b + 30 * OS1_S1 + 89) -
                p_over_q * *(b + 50 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 89);
            *(b + 30 * OS1_S1 + 129) =
                prefactor_z * *(b + 30 * OS1_S1 + 89) -
                p_over_q * *(b + 51 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 58);
            *(b + 30 * OS1_S1 + 130) =
                prefactor_x * *(b + 30 * OS1_S1 + 94) -
                p_over_q * *(b + 45 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 30 * OS1_S1 + 66);
            *(b + 30 * OS1_S1 + 131) = prefactor_z * *(b + 30 * OS1_S1 + 90) -
                                       p_over_q * *(b + 51 * OS1_S1 + 90);
            *(b + 30 * OS1_S1 + 132) = prefactor_z * *(b + 30 * OS1_S1 + 91) -
                                       p_over_q * *(b + 51 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 59);
            *(b + 30 * OS1_S1 + 133) =
                prefactor_y * *(b + 30 * OS1_S1 + 93) -
                p_over_q * *(b + 50 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 93);
            *(b + 30 * OS1_S1 + 134) =
                prefactor_z * *(b + 30 * OS1_S1 + 93) -
                p_over_q * *(b + 51 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 30 * OS1_S1 + 61);
            *(b + 30 * OS1_S1 + 135) =
                prefactor_x * *(b + 30 * OS1_S1 + 99) -
                p_over_q * *(b + 45 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 71);
            *(b + 30 * OS1_S1 + 136) = prefactor_z * *(b + 30 * OS1_S1 + 94) -
                                       p_over_q * *(b + 51 * OS1_S1 + 94);
            *(b + 30 * OS1_S1 + 137) = prefactor_z * *(b + 30 * OS1_S1 + 95) -
                                       p_over_q * *(b + 51 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 62);
            *(b + 30 * OS1_S1 + 138) =
                prefactor_y * *(b + 30 * OS1_S1 + 97) -
                p_over_q * *(b + 50 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 97) +
                one_over_two_q * *(b + 30 * OS1_S1 + 65);
            *(b + 30 * OS1_S1 + 139) =
                prefactor_y * *(b + 30 * OS1_S1 + 98) -
                p_over_q * *(b + 50 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 98);
            *(b + 30 * OS1_S1 + 140) =
                prefactor_x * *(b + 30 * OS1_S1 + 104) -
                p_over_q * *(b + 45 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 76);
            *(b + 30 * OS1_S1 + 141) = prefactor_x * *(b + 30 * OS1_S1 + 105) -
                                       p_over_q * *(b + 45 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 77);
            *(b + 30 * OS1_S1 + 142) = prefactor_z * *(b + 30 * OS1_S1 + 99) -
                                       p_over_q * *(b + 51 * OS1_S1 + 99);
            *(b + 30 * OS1_S1 + 143) = prefactor_z * *(b + 30 * OS1_S1 + 100) -
                                       p_over_q * *(b + 51 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 66);
            *(b + 30 * OS1_S1 + 144) = prefactor_x * *(b + 30 * OS1_S1 + 108) -
                                       p_over_q * *(b + 45 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 80);
            *(b + 30 * OS1_S1 + 145) = prefactor_x * *(b + 30 * OS1_S1 + 109) -
                                       p_over_q * *(b + 45 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 81);
            *(b + 30 * OS1_S1 + 146) =
                prefactor_y * *(b + 30 * OS1_S1 + 104) -
                p_over_q * *(b + 50 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 104);
            *(b + 30 * OS1_S1 + 147) = prefactor_x * *(b + 30 * OS1_S1 + 111) -
                                       p_over_q * *(b + 45 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 83);
            *(b + 30 * OS1_S1 + 148) = prefactor_x * *(b + 30 * OS1_S1 + 112) -
                                       p_over_q * *(b + 45 * OS1_S1 + 112);
            *(b + 30 * OS1_S1 + 149) = prefactor_z * *(b + 30 * OS1_S1 + 105) -
                                       p_over_q * *(b + 51 * OS1_S1 + 105);
            *(b + 30 * OS1_S1 + 150) = prefactor_x * *(b + 30 * OS1_S1 + 114) -
                                       p_over_q * *(b + 45 * OS1_S1 + 114);
            *(b + 30 * OS1_S1 + 151) = prefactor_x * *(b + 30 * OS1_S1 + 115) -
                                       p_over_q * *(b + 45 * OS1_S1 + 115);
            *(b + 30 * OS1_S1 + 152) = prefactor_x * *(b + 30 * OS1_S1 + 116) -
                                       p_over_q * *(b + 45 * OS1_S1 + 116);
            *(b + 30 * OS1_S1 + 153) = prefactor_x * *(b + 30 * OS1_S1 + 117) -
                                       p_over_q * *(b + 45 * OS1_S1 + 117);
            *(b + 30 * OS1_S1 + 154) = prefactor_x * *(b + 30 * OS1_S1 + 118) -
                                       p_over_q * *(b + 45 * OS1_S1 + 118);
            *(b + 30 * OS1_S1 + 155) = prefactor_x * *(b + 30 * OS1_S1 + 119) -
                                       p_over_q * *(b + 45 * OS1_S1 + 119);
            *(b + 30 * OS1_S1 + 156) =
                prefactor_y * *(b + 30 * OS1_S1 + 112) -
                p_over_q * *(b + 50 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 30 * OS1_S1 + 77);
            *(b + 30 * OS1_S1 + 157) = prefactor_z * *(b + 30 * OS1_S1 + 112) -
                                       p_over_q * *(b + 51 * OS1_S1 + 112);
            *(b + 30 * OS1_S1 + 158) = prefactor_z * *(b + 30 * OS1_S1 + 113) -
                                       p_over_q * *(b + 51 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 77);
            *(b + 30 * OS1_S1 + 159) =
                prefactor_z * *(b + 30 * OS1_S1 + 114) -
                p_over_q * *(b + 51 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 78);
            *(b + 30 * OS1_S1 + 160) =
                prefactor_z * *(b + 30 * OS1_S1 + 115) -
                p_over_q * *(b + 51 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 30 * OS1_S1 + 79);
            *(b + 30 * OS1_S1 + 161) =
                prefactor_y * *(b + 30 * OS1_S1 + 117) -
                p_over_q * *(b + 50 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 30 * OS1_S1 + 82);
            *(b + 30 * OS1_S1 + 162) =
                prefactor_y * *(b + 30 * OS1_S1 + 118) -
                p_over_q * *(b + 50 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 118) +
                one_over_two_q * *(b + 30 * OS1_S1 + 83);
            *(b + 30 * OS1_S1 + 163) =
                prefactor_y * *(b + 30 * OS1_S1 + 119) -
                p_over_q * *(b + 50 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 16 * OS1_S1 + 119);
            *(b + 30 * OS1_S1 + 164) =
                prefactor_z * *(b + 30 * OS1_S1 + 119) -
                p_over_q * *(b + 51 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 30 * OS1_S1 + 83);
            *(b + 31 * OS1_S1 + 120) =
                prefactor_x * *(b + 31 * OS1_S1 + 84) -
                p_over_q * *(b + 46 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 31 * OS1_S1 + 56);
            *(b + 31 * OS1_S1 + 121) =
                prefactor_y * *(b + 31 * OS1_S1 + 84) -
                p_over_q * *(b + 51 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 84);
            *(b + 31 * OS1_S1 + 122) = prefactor_z * *(b + 31 * OS1_S1 + 84) -
                                       p_over_q * *(b + 52 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 84);
            *(b + 31 * OS1_S1 + 123) =
                prefactor_y * *(b + 31 * OS1_S1 + 85) -
                p_over_q * *(b + 51 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 85) +
                one_over_two_q * *(b + 31 * OS1_S1 + 56);
            *(b + 31 * OS1_S1 + 124) = prefactor_z * *(b + 31 * OS1_S1 + 85) -
                                       p_over_q * *(b + 52 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 85);
            *(b + 31 * OS1_S1 + 125) =
                prefactor_z * *(b + 31 * OS1_S1 + 86) -
                p_over_q * *(b + 52 * OS1_S1 + 86) +
                one_over_two_q * *(b + 16 * OS1_S1 + 86) +
                one_over_two_q * *(b + 31 * OS1_S1 + 56);
            *(b + 31 * OS1_S1 + 126) =
                prefactor_y * *(b + 31 * OS1_S1 + 87) -
                p_over_q * *(b + 51 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 57);
            *(b + 31 * OS1_S1 + 127) = prefactor_z * *(b + 31 * OS1_S1 + 87) -
                                       p_over_q * *(b + 52 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 87);
            *(b + 31 * OS1_S1 + 128) =
                prefactor_y * *(b + 31 * OS1_S1 + 89) -
                p_over_q * *(b + 51 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 89);
            *(b + 31 * OS1_S1 + 129) =
                prefactor_z * *(b + 31 * OS1_S1 + 89) -
                p_over_q * *(b + 52 * OS1_S1 + 89) +
                one_over_two_q * *(b + 16 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 58);
            *(b + 31 * OS1_S1 + 130) =
                prefactor_x * *(b + 31 * OS1_S1 + 94) -
                p_over_q * *(b + 46 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 31 * OS1_S1 + 66);
            *(b + 31 * OS1_S1 + 131) = prefactor_z * *(b + 31 * OS1_S1 + 90) -
                                       p_over_q * *(b + 52 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 90);
            *(b + 31 * OS1_S1 + 132) =
                prefactor_z * *(b + 31 * OS1_S1 + 91) -
                p_over_q * *(b + 52 * OS1_S1 + 91) +
                one_over_two_q * *(b + 16 * OS1_S1 + 91) +
                one_over_two_q * *(b + 31 * OS1_S1 + 59);
            *(b + 31 * OS1_S1 + 133) =
                prefactor_y * *(b + 31 * OS1_S1 + 93) -
                p_over_q * *(b + 51 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 93);
            *(b + 31 * OS1_S1 + 134) =
                prefactor_x * *(b + 31 * OS1_S1 + 98) -
                p_over_q * *(b + 46 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 31 * OS1_S1 + 70);
            *(b + 31 * OS1_S1 + 135) =
                prefactor_x * *(b + 31 * OS1_S1 + 99) -
                p_over_q * *(b + 46 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 71);
            *(b + 31 * OS1_S1 + 136) = prefactor_z * *(b + 31 * OS1_S1 + 94) -
                                       p_over_q * *(b + 52 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 94);
            *(b + 31 * OS1_S1 + 137) =
                prefactor_z * *(b + 31 * OS1_S1 + 95) -
                p_over_q * *(b + 52 * OS1_S1 + 95) +
                one_over_two_q * *(b + 16 * OS1_S1 + 95) +
                one_over_two_q * *(b + 31 * OS1_S1 + 62);
            *(b + 31 * OS1_S1 + 138) =
                prefactor_y * *(b + 31 * OS1_S1 + 97) -
                p_over_q * *(b + 51 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 97) +
                one_over_two_q * *(b + 31 * OS1_S1 + 65);
            *(b + 31 * OS1_S1 + 139) =
                prefactor_y * *(b + 31 * OS1_S1 + 98) -
                p_over_q * *(b + 51 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 98);
            *(b + 31 * OS1_S1 + 140) =
                prefactor_x * *(b + 31 * OS1_S1 + 104) -
                p_over_q * *(b + 46 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 76);
            *(b + 31 * OS1_S1 + 141) = prefactor_x * *(b + 31 * OS1_S1 + 105) -
                                       p_over_q * *(b + 46 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 77);
            *(b + 31 * OS1_S1 + 142) = prefactor_z * *(b + 31 * OS1_S1 + 99) -
                                       p_over_q * *(b + 52 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 99);
            *(b + 31 * OS1_S1 + 143) = prefactor_x * *(b + 31 * OS1_S1 + 107) -
                                       p_over_q * *(b + 46 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 79);
            *(b + 31 * OS1_S1 + 144) = prefactor_x * *(b + 31 * OS1_S1 + 108) -
                                       p_over_q * *(b + 46 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 80);
            *(b + 31 * OS1_S1 + 145) = prefactor_x * *(b + 31 * OS1_S1 + 109) -
                                       p_over_q * *(b + 46 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 81);
            *(b + 31 * OS1_S1 + 146) =
                prefactor_y * *(b + 31 * OS1_S1 + 104) -
                p_over_q * *(b + 51 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 104);
            *(b + 31 * OS1_S1 + 147) = prefactor_x * *(b + 31 * OS1_S1 + 111) -
                                       p_over_q * *(b + 46 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 31 * OS1_S1 + 83);
            *(b + 31 * OS1_S1 + 148) = prefactor_x * *(b + 31 * OS1_S1 + 112) -
                                       p_over_q * *(b + 46 * OS1_S1 + 112);
            *(b + 31 * OS1_S1 + 149) = prefactor_x * *(b + 31 * OS1_S1 + 113) -
                                       p_over_q * *(b + 46 * OS1_S1 + 113);
            *(b + 31 * OS1_S1 + 150) = prefactor_x * *(b + 31 * OS1_S1 + 114) -
                                       p_over_q * *(b + 46 * OS1_S1 + 114);
            *(b + 31 * OS1_S1 + 151) = prefactor_x * *(b + 31 * OS1_S1 + 115) -
                                       p_over_q * *(b + 46 * OS1_S1 + 115);
            *(b + 31 * OS1_S1 + 152) = prefactor_x * *(b + 31 * OS1_S1 + 116) -
                                       p_over_q * *(b + 46 * OS1_S1 + 116);
            *(b + 31 * OS1_S1 + 153) = prefactor_x * *(b + 31 * OS1_S1 + 117) -
                                       p_over_q * *(b + 46 * OS1_S1 + 117);
            *(b + 31 * OS1_S1 + 154) = prefactor_x * *(b + 31 * OS1_S1 + 118) -
                                       p_over_q * *(b + 46 * OS1_S1 + 118);
            *(b + 31 * OS1_S1 + 155) = prefactor_x * *(b + 31 * OS1_S1 + 119) -
                                       p_over_q * *(b + 46 * OS1_S1 + 119);
            *(b + 31 * OS1_S1 + 156) =
                prefactor_y * *(b + 31 * OS1_S1 + 112) -
                p_over_q * *(b + 51 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 31 * OS1_S1 + 77);
            *(b + 31 * OS1_S1 + 157) =
                prefactor_z * *(b + 31 * OS1_S1 + 112) -
                p_over_q * *(b + 52 * OS1_S1 + 112) +
                one_over_two_q * *(b + 16 * OS1_S1 + 112);
            *(b + 31 * OS1_S1 + 158) =
                prefactor_z * *(b + 31 * OS1_S1 + 113) -
                p_over_q * *(b + 52 * OS1_S1 + 113) +
                one_over_two_q * *(b + 16 * OS1_S1 + 113) +
                one_over_two_q * *(b + 31 * OS1_S1 + 77);
            *(b + 31 * OS1_S1 + 159) =
                prefactor_z * *(b + 31 * OS1_S1 + 114) -
                p_over_q * *(b + 52 * OS1_S1 + 114) +
                one_over_two_q * *(b + 16 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 78);
            *(b + 31 * OS1_S1 + 160) =
                prefactor_z * *(b + 31 * OS1_S1 + 115) -
                p_over_q * *(b + 52 * OS1_S1 + 115) +
                one_over_two_q * *(b + 16 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 31 * OS1_S1 + 79);
            *(b + 31 * OS1_S1 + 161) =
                prefactor_y * *(b + 31 * OS1_S1 + 117) -
                p_over_q * *(b + 51 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 82);
            *(b + 31 * OS1_S1 + 162) =
                prefactor_y * *(b + 31 * OS1_S1 + 118) -
                p_over_q * *(b + 51 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 118) +
                one_over_two_q * *(b + 31 * OS1_S1 + 83);
            *(b + 31 * OS1_S1 + 163) =
                prefactor_y * *(b + 31 * OS1_S1 + 119) -
                p_over_q * *(b + 51 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 119);
            *(b + 31 * OS1_S1 + 164) =
                prefactor_z * *(b + 31 * OS1_S1 + 119) -
                p_over_q * *(b + 52 * OS1_S1 + 119) +
                one_over_two_q * *(b + 16 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 31 * OS1_S1 + 83);
            *(b + 32 * OS1_S1 + 120) =
                prefactor_x * *(b + 32 * OS1_S1 + 84) -
                p_over_q * *(b + 47 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 32 * OS1_S1 + 56);
            *(b + 32 * OS1_S1 + 121) =
                prefactor_y * *(b + 32 * OS1_S1 + 84) -
                p_over_q * *(b + 52 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 84);
            *(b + 32 * OS1_S1 + 122) =
                prefactor_z * *(b + 32 * OS1_S1 + 84) -
                p_over_q * *(b + 53 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 84);
            *(b + 32 * OS1_S1 + 123) =
                prefactor_y * *(b + 32 * OS1_S1 + 85) -
                p_over_q * *(b + 52 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 85) +
                one_over_two_q * *(b + 32 * OS1_S1 + 56);
            *(b + 32 * OS1_S1 + 124) =
                prefactor_z * *(b + 32 * OS1_S1 + 85) -
                p_over_q * *(b + 53 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 85);
            *(b + 32 * OS1_S1 + 125) =
                prefactor_z * *(b + 32 * OS1_S1 + 86) -
                p_over_q * *(b + 53 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 86) +
                one_over_two_q * *(b + 32 * OS1_S1 + 56);
            *(b + 32 * OS1_S1 + 126) =
                prefactor_y * *(b + 32 * OS1_S1 + 87) -
                p_over_q * *(b + 52 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 57);
            *(b + 32 * OS1_S1 + 127) =
                prefactor_z * *(b + 32 * OS1_S1 + 87) -
                p_over_q * *(b + 53 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 87);
            *(b + 32 * OS1_S1 + 128) =
                prefactor_y * *(b + 32 * OS1_S1 + 89) -
                p_over_q * *(b + 52 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 89);
            *(b + 32 * OS1_S1 + 129) =
                prefactor_z * *(b + 32 * OS1_S1 + 89) -
                p_over_q * *(b + 53 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 58);
            *(b + 32 * OS1_S1 + 130) =
                prefactor_x * *(b + 32 * OS1_S1 + 94) -
                p_over_q * *(b + 47 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 66);
            *(b + 32 * OS1_S1 + 131) =
                prefactor_z * *(b + 32 * OS1_S1 + 90) -
                p_over_q * *(b + 53 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 90);
            *(b + 32 * OS1_S1 + 132) =
                prefactor_z * *(b + 32 * OS1_S1 + 91) -
                p_over_q * *(b + 53 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 91) +
                one_over_two_q * *(b + 32 * OS1_S1 + 59);
            *(b + 32 * OS1_S1 + 133) =
                prefactor_y * *(b + 32 * OS1_S1 + 93) -
                p_over_q * *(b + 52 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 93);
            *(b + 32 * OS1_S1 + 134) =
                prefactor_x * *(b + 32 * OS1_S1 + 98) -
                p_over_q * *(b + 47 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 70);
            *(b + 32 * OS1_S1 + 135) =
                prefactor_x * *(b + 32 * OS1_S1 + 99) -
                p_over_q * *(b + 47 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 71);
            *(b + 32 * OS1_S1 + 136) =
                prefactor_z * *(b + 32 * OS1_S1 + 94) -
                p_over_q * *(b + 53 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 94);
            *(b + 32 * OS1_S1 + 137) =
                prefactor_z * *(b + 32 * OS1_S1 + 95) -
                p_over_q * *(b + 53 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 95) +
                one_over_two_q * *(b + 32 * OS1_S1 + 62);
            *(b + 32 * OS1_S1 + 138) =
                prefactor_y * *(b + 32 * OS1_S1 + 97) -
                p_over_q * *(b + 52 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 97) +
                one_over_two_q * *(b + 32 * OS1_S1 + 65);
            *(b + 32 * OS1_S1 + 139) =
                prefactor_y * *(b + 32 * OS1_S1 + 98) -
                p_over_q * *(b + 52 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 98);
            *(b + 32 * OS1_S1 + 140) =
                prefactor_x * *(b + 32 * OS1_S1 + 104) -
                p_over_q * *(b + 47 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 76);
            *(b + 32 * OS1_S1 + 141) = prefactor_x * *(b + 32 * OS1_S1 + 105) -
                                       p_over_q * *(b + 47 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 77);
            *(b + 32 * OS1_S1 + 142) =
                prefactor_z * *(b + 32 * OS1_S1 + 99) -
                p_over_q * *(b + 53 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 99);
            *(b + 32 * OS1_S1 + 143) = prefactor_x * *(b + 32 * OS1_S1 + 107) -
                                       p_over_q * *(b + 47 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 79);
            *(b + 32 * OS1_S1 + 144) = prefactor_x * *(b + 32 * OS1_S1 + 108) -
                                       p_over_q * *(b + 47 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 80);
            *(b + 32 * OS1_S1 + 145) = prefactor_x * *(b + 32 * OS1_S1 + 109) -
                                       p_over_q * *(b + 47 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 81);
            *(b + 32 * OS1_S1 + 146) =
                prefactor_y * *(b + 32 * OS1_S1 + 104) -
                p_over_q * *(b + 52 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 104);
            *(b + 32 * OS1_S1 + 147) = prefactor_x * *(b + 32 * OS1_S1 + 111) -
                                       p_over_q * *(b + 47 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 32 * OS1_S1 + 83);
            *(b + 32 * OS1_S1 + 148) = prefactor_x * *(b + 32 * OS1_S1 + 112) -
                                       p_over_q * *(b + 47 * OS1_S1 + 112);
            *(b + 32 * OS1_S1 + 149) = prefactor_x * *(b + 32 * OS1_S1 + 113) -
                                       p_over_q * *(b + 47 * OS1_S1 + 113);
            *(b + 32 * OS1_S1 + 150) = prefactor_x * *(b + 32 * OS1_S1 + 114) -
                                       p_over_q * *(b + 47 * OS1_S1 + 114);
            *(b + 32 * OS1_S1 + 151) = prefactor_x * *(b + 32 * OS1_S1 + 115) -
                                       p_over_q * *(b + 47 * OS1_S1 + 115);
            *(b + 32 * OS1_S1 + 152) = prefactor_x * *(b + 32 * OS1_S1 + 116) -
                                       p_over_q * *(b + 47 * OS1_S1 + 116);
            *(b + 32 * OS1_S1 + 153) = prefactor_x * *(b + 32 * OS1_S1 + 117) -
                                       p_over_q * *(b + 47 * OS1_S1 + 117);
            *(b + 32 * OS1_S1 + 154) = prefactor_x * *(b + 32 * OS1_S1 + 118) -
                                       p_over_q * *(b + 47 * OS1_S1 + 118);
            *(b + 32 * OS1_S1 + 155) = prefactor_x * *(b + 32 * OS1_S1 + 119) -
                                       p_over_q * *(b + 47 * OS1_S1 + 119);
            *(b + 32 * OS1_S1 + 156) =
                prefactor_y * *(b + 32 * OS1_S1 + 112) -
                p_over_q * *(b + 52 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 32 * OS1_S1 + 77);
            *(b + 32 * OS1_S1 + 157) =
                prefactor_z * *(b + 32 * OS1_S1 + 112) -
                p_over_q * *(b + 53 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 112);
            *(b + 32 * OS1_S1 + 158) =
                prefactor_z * *(b + 32 * OS1_S1 + 113) -
                p_over_q * *(b + 53 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 113) +
                one_over_two_q * *(b + 32 * OS1_S1 + 77);
            *(b + 32 * OS1_S1 + 159) =
                prefactor_z * *(b + 32 * OS1_S1 + 114) -
                p_over_q * *(b + 53 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 78);
            *(b + 32 * OS1_S1 + 160) =
                prefactor_z * *(b + 32 * OS1_S1 + 115) -
                p_over_q * *(b + 53 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 79);
            *(b + 32 * OS1_S1 + 161) =
                prefactor_y * *(b + 32 * OS1_S1 + 117) -
                p_over_q * *(b + 52 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 32 * OS1_S1 + 82);
            *(b + 32 * OS1_S1 + 162) =
                prefactor_y * *(b + 32 * OS1_S1 + 118) -
                p_over_q * *(b + 52 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 118) +
                one_over_two_q * *(b + 32 * OS1_S1 + 83);
            *(b + 32 * OS1_S1 + 163) =
                prefactor_y * *(b + 32 * OS1_S1 + 119) -
                p_over_q * *(b + 52 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 119);
            *(b + 32 * OS1_S1 + 164) =
                prefactor_z * *(b + 32 * OS1_S1 + 119) -
                p_over_q * *(b + 53 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 32 * OS1_S1 + 83);
            *(b + 33 * OS1_S1 + 120) =
                prefactor_x * *(b + 33 * OS1_S1 + 84) -
                p_over_q * *(b + 48 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 33 * OS1_S1 + 56);
            *(b + 33 * OS1_S1 + 121) = prefactor_y * *(b + 33 * OS1_S1 + 84) -
                                       p_over_q * *(b + 53 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 84);
            *(b + 33 * OS1_S1 + 122) =
                prefactor_z * *(b + 33 * OS1_S1 + 84) -
                p_over_q * *(b + 54 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 84);
            *(b + 33 * OS1_S1 + 123) =
                prefactor_y * *(b + 33 * OS1_S1 + 85) -
                p_over_q * *(b + 53 * OS1_S1 + 85) +
                one_over_two_q * *(b + 19 * OS1_S1 + 85) +
                one_over_two_q * *(b + 33 * OS1_S1 + 56);
            *(b + 33 * OS1_S1 + 124) = prefactor_y * *(b + 33 * OS1_S1 + 86) -
                                       p_over_q * *(b + 53 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 86);
            *(b + 33 * OS1_S1 + 125) =
                prefactor_z * *(b + 33 * OS1_S1 + 86) -
                p_over_q * *(b + 54 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 86) +
                one_over_two_q * *(b + 33 * OS1_S1 + 56);
            *(b + 33 * OS1_S1 + 126) =
                prefactor_y * *(b + 33 * OS1_S1 + 87) -
                p_over_q * *(b + 53 * OS1_S1 + 87) +
                one_over_two_q * *(b + 19 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 57);
            *(b + 33 * OS1_S1 + 127) =
                prefactor_z * *(b + 33 * OS1_S1 + 87) -
                p_over_q * *(b + 54 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 87);
            *(b + 33 * OS1_S1 + 128) = prefactor_y * *(b + 33 * OS1_S1 + 89) -
                                       p_over_q * *(b + 53 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 89);
            *(b + 33 * OS1_S1 + 129) =
                prefactor_z * *(b + 33 * OS1_S1 + 89) -
                p_over_q * *(b + 54 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 58);
            *(b + 33 * OS1_S1 + 130) =
                prefactor_x * *(b + 33 * OS1_S1 + 94) -
                p_over_q * *(b + 48 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 33 * OS1_S1 + 66);
            *(b + 33 * OS1_S1 + 131) =
                prefactor_z * *(b + 33 * OS1_S1 + 90) -
                p_over_q * *(b + 54 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 90);
            *(b + 33 * OS1_S1 + 132) =
                prefactor_y * *(b + 33 * OS1_S1 + 92) -
                p_over_q * *(b + 53 * OS1_S1 + 92) +
                one_over_two_q * *(b + 19 * OS1_S1 + 92) +
                one_over_two_q * *(b + 33 * OS1_S1 + 61);
            *(b + 33 * OS1_S1 + 133) = prefactor_y * *(b + 33 * OS1_S1 + 93) -
                                       p_over_q * *(b + 53 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 93);
            *(b + 33 * OS1_S1 + 134) =
                prefactor_x * *(b + 33 * OS1_S1 + 98) -
                p_over_q * *(b + 48 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 33 * OS1_S1 + 70);
            *(b + 33 * OS1_S1 + 135) =
                prefactor_x * *(b + 33 * OS1_S1 + 99) -
                p_over_q * *(b + 48 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 71);
            *(b + 33 * OS1_S1 + 136) =
                prefactor_z * *(b + 33 * OS1_S1 + 94) -
                p_over_q * *(b + 54 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 94);
            *(b + 33 * OS1_S1 + 137) =
                prefactor_z * *(b + 33 * OS1_S1 + 95) -
                p_over_q * *(b + 54 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 95) +
                one_over_two_q * *(b + 33 * OS1_S1 + 62);
            *(b + 33 * OS1_S1 + 138) =
                prefactor_y * *(b + 33 * OS1_S1 + 97) -
                p_over_q * *(b + 53 * OS1_S1 + 97) +
                one_over_two_q * *(b + 19 * OS1_S1 + 97) +
                one_over_two_q * *(b + 33 * OS1_S1 + 65);
            *(b + 33 * OS1_S1 + 139) = prefactor_y * *(b + 33 * OS1_S1 + 98) -
                                       p_over_q * *(b + 53 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 98);
            *(b + 33 * OS1_S1 + 140) =
                prefactor_x * *(b + 33 * OS1_S1 + 104) -
                p_over_q * *(b + 48 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 76);
            *(b + 33 * OS1_S1 + 141) = prefactor_x * *(b + 33 * OS1_S1 + 105) -
                                       p_over_q * *(b + 48 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 77);
            *(b + 33 * OS1_S1 + 142) =
                prefactor_z * *(b + 33 * OS1_S1 + 99) -
                p_over_q * *(b + 54 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 99);
            *(b + 33 * OS1_S1 + 143) = prefactor_x * *(b + 33 * OS1_S1 + 107) -
                                       p_over_q * *(b + 48 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 79);
            *(b + 33 * OS1_S1 + 144) = prefactor_x * *(b + 33 * OS1_S1 + 108) -
                                       p_over_q * *(b + 48 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 80);
            *(b + 33 * OS1_S1 + 145) = prefactor_x * *(b + 33 * OS1_S1 + 109) -
                                       p_over_q * *(b + 48 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 81);
            *(b + 33 * OS1_S1 + 146) =
                prefactor_y * *(b + 33 * OS1_S1 + 104) -
                p_over_q * *(b + 53 * OS1_S1 + 104) +
                one_over_two_q * *(b + 19 * OS1_S1 + 104);
            *(b + 33 * OS1_S1 + 147) = prefactor_x * *(b + 33 * OS1_S1 + 111) -
                                       p_over_q * *(b + 48 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 33 * OS1_S1 + 83);
            *(b + 33 * OS1_S1 + 148) = prefactor_x * *(b + 33 * OS1_S1 + 112) -
                                       p_over_q * *(b + 48 * OS1_S1 + 112);
            *(b + 33 * OS1_S1 + 149) = prefactor_x * *(b + 33 * OS1_S1 + 113) -
                                       p_over_q * *(b + 48 * OS1_S1 + 113);
            *(b + 33 * OS1_S1 + 150) = prefactor_x * *(b + 33 * OS1_S1 + 114) -
                                       p_over_q * *(b + 48 * OS1_S1 + 114);
            *(b + 33 * OS1_S1 + 151) = prefactor_x * *(b + 33 * OS1_S1 + 115) -
                                       p_over_q * *(b + 48 * OS1_S1 + 115);
            *(b + 33 * OS1_S1 + 152) = prefactor_x * *(b + 33 * OS1_S1 + 116) -
                                       p_over_q * *(b + 48 * OS1_S1 + 116);
            *(b + 33 * OS1_S1 + 153) = prefactor_x * *(b + 33 * OS1_S1 + 117) -
                                       p_over_q * *(b + 48 * OS1_S1 + 117);
            *(b + 33 * OS1_S1 + 154) = prefactor_x * *(b + 33 * OS1_S1 + 118) -
                                       p_over_q * *(b + 48 * OS1_S1 + 118);
            *(b + 33 * OS1_S1 + 155) = prefactor_x * *(b + 33 * OS1_S1 + 119) -
                                       p_over_q * *(b + 48 * OS1_S1 + 119);
            *(b + 33 * OS1_S1 + 156) =
                prefactor_y * *(b + 33 * OS1_S1 + 112) -
                p_over_q * *(b + 53 * OS1_S1 + 112) +
                one_over_two_q * *(b + 19 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 33 * OS1_S1 + 77);
            *(b + 33 * OS1_S1 + 157) =
                prefactor_z * *(b + 33 * OS1_S1 + 112) -
                p_over_q * *(b + 54 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 112);
            *(b + 33 * OS1_S1 + 158) =
                prefactor_z * *(b + 33 * OS1_S1 + 113) -
                p_over_q * *(b + 54 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 113) +
                one_over_two_q * *(b + 33 * OS1_S1 + 77);
            *(b + 33 * OS1_S1 + 159) =
                prefactor_z * *(b + 33 * OS1_S1 + 114) -
                p_over_q * *(b + 54 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 78);
            *(b + 33 * OS1_S1 + 160) =
                prefactor_y * *(b + 33 * OS1_S1 + 116) -
                p_over_q * *(b + 53 * OS1_S1 + 116) +
                one_over_two_q * *(b + 19 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 33 * OS1_S1 + 81);
            *(b + 33 * OS1_S1 + 161) =
                prefactor_y * *(b + 33 * OS1_S1 + 117) -
                p_over_q * *(b + 53 * OS1_S1 + 117) +
                one_over_two_q * *(b + 19 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 82);
            *(b + 33 * OS1_S1 + 162) =
                prefactor_y * *(b + 33 * OS1_S1 + 118) -
                p_over_q * *(b + 53 * OS1_S1 + 118) +
                one_over_two_q * *(b + 19 * OS1_S1 + 118) +
                one_over_two_q * *(b + 33 * OS1_S1 + 83);
            *(b + 33 * OS1_S1 + 163) =
                prefactor_y * *(b + 33 * OS1_S1 + 119) -
                p_over_q * *(b + 53 * OS1_S1 + 119) +
                one_over_two_q * *(b + 19 * OS1_S1 + 119);
            *(b + 33 * OS1_S1 + 164) =
                prefactor_z * *(b + 33 * OS1_S1 + 119) -
                p_over_q * *(b + 54 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 33 * OS1_S1 + 83);
            *(b + 34 * OS1_S1 + 120) =
                prefactor_x * *(b + 34 * OS1_S1 + 84) -
                p_over_q * *(b + 49 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 34 * OS1_S1 + 56);
            *(b + 34 * OS1_S1 + 121) = prefactor_y * *(b + 34 * OS1_S1 + 84) -
                                       p_over_q * *(b + 54 * OS1_S1 + 84);
            *(b + 34 * OS1_S1 + 122) =
                prefactor_z * *(b + 34 * OS1_S1 + 84) -
                p_over_q * *(b + 55 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 84);
            *(b + 34 * OS1_S1 + 123) = prefactor_y * *(b + 34 * OS1_S1 + 85) -
                                       p_over_q * *(b + 54 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 56);
            *(b + 34 * OS1_S1 + 124) = prefactor_y * *(b + 34 * OS1_S1 + 86) -
                                       p_over_q * *(b + 54 * OS1_S1 + 86);
            *(b + 34 * OS1_S1 + 125) =
                prefactor_z * *(b + 34 * OS1_S1 + 86) -
                p_over_q * *(b + 55 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 86) +
                one_over_two_q * *(b + 34 * OS1_S1 + 56);
            *(b + 34 * OS1_S1 + 126) =
                prefactor_y * *(b + 34 * OS1_S1 + 87) -
                p_over_q * *(b + 54 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 57);
            *(b + 34 * OS1_S1 + 127) =
                prefactor_z * *(b + 34 * OS1_S1 + 87) -
                p_over_q * *(b + 55 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 87);
            *(b + 34 * OS1_S1 + 128) = prefactor_y * *(b + 34 * OS1_S1 + 89) -
                                       p_over_q * *(b + 54 * OS1_S1 + 89);
            *(b + 34 * OS1_S1 + 129) =
                prefactor_z * *(b + 34 * OS1_S1 + 89) -
                p_over_q * *(b + 55 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 58);
            *(b + 34 * OS1_S1 + 130) =
                prefactor_y * *(b + 34 * OS1_S1 + 90) -
                p_over_q * *(b + 54 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 34 * OS1_S1 + 59);
            *(b + 34 * OS1_S1 + 131) =
                prefactor_z * *(b + 34 * OS1_S1 + 90) -
                p_over_q * *(b + 55 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 90);
            *(b + 34 * OS1_S1 + 132) = prefactor_y * *(b + 34 * OS1_S1 + 92) -
                                       p_over_q * *(b + 54 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 61);
            *(b + 34 * OS1_S1 + 133) = prefactor_y * *(b + 34 * OS1_S1 + 93) -
                                       p_over_q * *(b + 54 * OS1_S1 + 93);
            *(b + 34 * OS1_S1 + 134) =
                prefactor_x * *(b + 34 * OS1_S1 + 98) -
                p_over_q * *(b + 49 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 34 * OS1_S1 + 70);
            *(b + 34 * OS1_S1 + 135) =
                prefactor_x * *(b + 34 * OS1_S1 + 99) -
                p_over_q * *(b + 49 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 71);
            *(b + 34 * OS1_S1 + 136) =
                prefactor_z * *(b + 34 * OS1_S1 + 94) -
                p_over_q * *(b + 55 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 94);
            *(b + 34 * OS1_S1 + 137) =
                prefactor_z * *(b + 34 * OS1_S1 + 95) -
                p_over_q * *(b + 55 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 95) +
                one_over_two_q * *(b + 34 * OS1_S1 + 62);
            *(b + 34 * OS1_S1 + 138) = prefactor_y * *(b + 34 * OS1_S1 + 97) -
                                       p_over_q * *(b + 54 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 65);
            *(b + 34 * OS1_S1 + 139) = prefactor_y * *(b + 34 * OS1_S1 + 98) -
                                       p_over_q * *(b + 54 * OS1_S1 + 98);
            *(b + 34 * OS1_S1 + 140) =
                prefactor_x * *(b + 34 * OS1_S1 + 104) -
                p_over_q * *(b + 49 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 76);
            *(b + 34 * OS1_S1 + 141) = prefactor_x * *(b + 34 * OS1_S1 + 105) -
                                       p_over_q * *(b + 49 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 77);
            *(b + 34 * OS1_S1 + 142) =
                prefactor_z * *(b + 34 * OS1_S1 + 99) -
                p_over_q * *(b + 55 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 99);
            *(b + 34 * OS1_S1 + 143) = prefactor_x * *(b + 34 * OS1_S1 + 107) -
                                       p_over_q * *(b + 49 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 79);
            *(b + 34 * OS1_S1 + 144) = prefactor_x * *(b + 34 * OS1_S1 + 108) -
                                       p_over_q * *(b + 49 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 80);
            *(b + 34 * OS1_S1 + 145) = prefactor_y * *(b + 34 * OS1_S1 + 103) -
                                       p_over_q * *(b + 54 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 70);
            *(b + 34 * OS1_S1 + 146) = prefactor_y * *(b + 34 * OS1_S1 + 104) -
                                       p_over_q * *(b + 54 * OS1_S1 + 104);
            *(b + 34 * OS1_S1 + 147) = prefactor_x * *(b + 34 * OS1_S1 + 111) -
                                       p_over_q * *(b + 49 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 83);
            *(b + 34 * OS1_S1 + 148) = prefactor_x * *(b + 34 * OS1_S1 + 112) -
                                       p_over_q * *(b + 49 * OS1_S1 + 112);
            *(b + 34 * OS1_S1 + 149) = prefactor_x * *(b + 34 * OS1_S1 + 113) -
                                       p_over_q * *(b + 49 * OS1_S1 + 113);
            *(b + 34 * OS1_S1 + 150) = prefactor_x * *(b + 34 * OS1_S1 + 114) -
                                       p_over_q * *(b + 49 * OS1_S1 + 114);
            *(b + 34 * OS1_S1 + 151) = prefactor_x * *(b + 34 * OS1_S1 + 115) -
                                       p_over_q * *(b + 49 * OS1_S1 + 115);
            *(b + 34 * OS1_S1 + 152) = prefactor_x * *(b + 34 * OS1_S1 + 116) -
                                       p_over_q * *(b + 49 * OS1_S1 + 116);
            *(b + 34 * OS1_S1 + 153) = prefactor_x * *(b + 34 * OS1_S1 + 117) -
                                       p_over_q * *(b + 49 * OS1_S1 + 117);
            *(b + 34 * OS1_S1 + 154) = prefactor_y * *(b + 34 * OS1_S1 + 111) -
                                       p_over_q * *(b + 54 * OS1_S1 + 111);
            *(b + 34 * OS1_S1 + 155) = prefactor_x * *(b + 34 * OS1_S1 + 119) -
                                       p_over_q * *(b + 49 * OS1_S1 + 119);
            *(b + 34 * OS1_S1 + 156) =
                prefactor_y * *(b + 34 * OS1_S1 + 112) -
                p_over_q * *(b + 54 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 34 * OS1_S1 + 77);
            *(b + 34 * OS1_S1 + 157) =
                prefactor_z * *(b + 34 * OS1_S1 + 112) -
                p_over_q * *(b + 55 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 112);
            *(b + 34 * OS1_S1 + 158) =
                prefactor_z * *(b + 34 * OS1_S1 + 113) -
                p_over_q * *(b + 55 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 113) +
                one_over_two_q * *(b + 34 * OS1_S1 + 77);
            *(b + 34 * OS1_S1 + 159) =
                prefactor_z * *(b + 34 * OS1_S1 + 114) -
                p_over_q * *(b + 55 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 78);
            *(b + 34 * OS1_S1 + 160) =
                prefactor_y * *(b + 34 * OS1_S1 + 116) -
                p_over_q * *(b + 54 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 34 * OS1_S1 + 81);
            *(b + 34 * OS1_S1 + 161) =
                prefactor_y * *(b + 34 * OS1_S1 + 117) -
                p_over_q * *(b + 54 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 34 * OS1_S1 + 82);
            *(b + 34 * OS1_S1 + 162) = prefactor_y * *(b + 34 * OS1_S1 + 118) -
                                       p_over_q * *(b + 54 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 83);
            *(b + 34 * OS1_S1 + 163) = prefactor_y * *(b + 34 * OS1_S1 + 119) -
                                       p_over_q * *(b + 54 * OS1_S1 + 119);
            *(b + 34 * OS1_S1 + 164) =
                prefactor_z * *(b + 34 * OS1_S1 + 119) -
                p_over_q * *(b + 55 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 19 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 34 * OS1_S1 + 83);
            return;
        }
        void transfer_5_8(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 35 * OS1_S1 + 120) =
                prefactor_x * *(b + 35 * OS1_S1 + 84) -
                p_over_q * *(b + 56 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 35 * OS1_S1 + 56);
            *(b + 35 * OS1_S1 + 121) = prefactor_y * *(b + 35 * OS1_S1 + 84) -
                                       p_over_q * *(b + 57 * OS1_S1 + 84);
            *(b + 35 * OS1_S1 + 122) = prefactor_z * *(b + 35 * OS1_S1 + 84) -
                                       p_over_q * *(b + 58 * OS1_S1 + 84);
            *(b + 35 * OS1_S1 + 123) = prefactor_y * *(b + 35 * OS1_S1 + 85) -
                                       p_over_q * *(b + 57 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 56);
            *(b + 35 * OS1_S1 + 124) = prefactor_z * *(b + 35 * OS1_S1 + 85) -
                                       p_over_q * *(b + 58 * OS1_S1 + 85);
            *(b + 35 * OS1_S1 + 125) = prefactor_z * *(b + 35 * OS1_S1 + 86) -
                                       p_over_q * *(b + 58 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 56);
            *(b + 35 * OS1_S1 + 126) =
                prefactor_y * *(b + 35 * OS1_S1 + 87) -
                p_over_q * *(b + 57 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 57);
            *(b + 35 * OS1_S1 + 127) = prefactor_z * *(b + 35 * OS1_S1 + 87) -
                                       p_over_q * *(b + 58 * OS1_S1 + 87);
            *(b + 35 * OS1_S1 + 128) = prefactor_y * *(b + 35 * OS1_S1 + 89) -
                                       p_over_q * *(b + 57 * OS1_S1 + 89);
            *(b + 35 * OS1_S1 + 129) =
                prefactor_z * *(b + 35 * OS1_S1 + 89) -
                p_over_q * *(b + 58 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 58);
            *(b + 35 * OS1_S1 + 130) =
                prefactor_y * *(b + 35 * OS1_S1 + 90) -
                p_over_q * *(b + 57 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 35 * OS1_S1 + 59);
            *(b + 35 * OS1_S1 + 131) = prefactor_z * *(b + 35 * OS1_S1 + 90) -
                                       p_over_q * *(b + 58 * OS1_S1 + 90);
            *(b + 35 * OS1_S1 + 132) = prefactor_z * *(b + 35 * OS1_S1 + 91) -
                                       p_over_q * *(b + 58 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 59);
            *(b + 35 * OS1_S1 + 133) = prefactor_y * *(b + 35 * OS1_S1 + 93) -
                                       p_over_q * *(b + 57 * OS1_S1 + 93);
            *(b + 35 * OS1_S1 + 134) =
                prefactor_z * *(b + 35 * OS1_S1 + 93) -
                p_over_q * *(b + 58 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 35 * OS1_S1 + 61);
            *(b + 35 * OS1_S1 + 135) =
                prefactor_x * *(b + 35 * OS1_S1 + 99) -
                p_over_q * *(b + 56 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 71);
            *(b + 35 * OS1_S1 + 136) = prefactor_z * *(b + 35 * OS1_S1 + 94) -
                                       p_over_q * *(b + 58 * OS1_S1 + 94);
            *(b + 35 * OS1_S1 + 137) = prefactor_z * *(b + 35 * OS1_S1 + 95) -
                                       p_over_q * *(b + 58 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 62);
            *(b + 35 * OS1_S1 + 138) = prefactor_y * *(b + 35 * OS1_S1 + 97) -
                                       p_over_q * *(b + 57 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 65);
            *(b + 35 * OS1_S1 + 139) = prefactor_y * *(b + 35 * OS1_S1 + 98) -
                                       p_over_q * *(b + 57 * OS1_S1 + 98);
            *(b + 35 * OS1_S1 + 140) =
                prefactor_x * *(b + 35 * OS1_S1 + 104) -
                p_over_q * *(b + 56 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 76);
            *(b + 35 * OS1_S1 + 141) =
                prefactor_x * *(b + 35 * OS1_S1 + 105) -
                p_over_q * *(b + 56 * OS1_S1 + 105) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 105) +
                one_over_two_q * *(b + 35 * OS1_S1 + 77);
            *(b + 35 * OS1_S1 + 142) = prefactor_z * *(b + 35 * OS1_S1 + 99) -
                                       p_over_q * *(b + 58 * OS1_S1 + 99);
            *(b + 35 * OS1_S1 + 143) = prefactor_z * *(b + 35 * OS1_S1 + 100) -
                                       p_over_q * *(b + 58 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 66);
            *(b + 35 * OS1_S1 + 144) =
                prefactor_x * *(b + 35 * OS1_S1 + 108) -
                p_over_q * *(b + 56 * OS1_S1 + 108) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 108) +
                one_over_two_q * *(b + 35 * OS1_S1 + 80);
            *(b + 35 * OS1_S1 + 145) = prefactor_y * *(b + 35 * OS1_S1 + 103) -
                                       p_over_q * *(b + 57 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 70);
            *(b + 35 * OS1_S1 + 146) = prefactor_y * *(b + 35 * OS1_S1 + 104) -
                                       p_over_q * *(b + 57 * OS1_S1 + 104);
            *(b + 35 * OS1_S1 + 147) =
                prefactor_x * *(b + 35 * OS1_S1 + 111) -
                p_over_q * *(b + 56 * OS1_S1 + 111) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 111) +
                one_over_two_q * *(b + 35 * OS1_S1 + 83);
            *(b + 35 * OS1_S1 + 148) =
                prefactor_x * *(b + 35 * OS1_S1 + 112) -
                p_over_q * *(b + 56 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 112);
            *(b + 35 * OS1_S1 + 149) = prefactor_z * *(b + 35 * OS1_S1 + 105) -
                                       p_over_q * *(b + 58 * OS1_S1 + 105);
            *(b + 35 * OS1_S1 + 150) =
                prefactor_x * *(b + 35 * OS1_S1 + 114) -
                p_over_q * *(b + 56 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 114);
            *(b + 35 * OS1_S1 + 151) =
                prefactor_x * *(b + 35 * OS1_S1 + 115) -
                p_over_q * *(b + 56 * OS1_S1 + 115) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 115);
            *(b + 35 * OS1_S1 + 152) =
                prefactor_x * *(b + 35 * OS1_S1 + 116) -
                p_over_q * *(b + 56 * OS1_S1 + 116) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 116);
            *(b + 35 * OS1_S1 + 153) =
                prefactor_x * *(b + 35 * OS1_S1 + 117) -
                p_over_q * *(b + 56 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 117);
            *(b + 35 * OS1_S1 + 154) = prefactor_y * *(b + 35 * OS1_S1 + 111) -
                                       p_over_q * *(b + 57 * OS1_S1 + 111);
            *(b + 35 * OS1_S1 + 155) =
                prefactor_x * *(b + 35 * OS1_S1 + 119) -
                p_over_q * *(b + 56 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 20 * OS1_S1 + 119);
            *(b + 35 * OS1_S1 + 156) =
                prefactor_y * *(b + 35 * OS1_S1 + 112) -
                p_over_q * *(b + 57 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 35 * OS1_S1 + 77);
            *(b + 35 * OS1_S1 + 157) = prefactor_z * *(b + 35 * OS1_S1 + 112) -
                                       p_over_q * *(b + 58 * OS1_S1 + 112);
            *(b + 35 * OS1_S1 + 158) = prefactor_z * *(b + 35 * OS1_S1 + 113) -
                                       p_over_q * *(b + 58 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 77);
            *(b + 35 * OS1_S1 + 159) =
                prefactor_z * *(b + 35 * OS1_S1 + 114) -
                p_over_q * *(b + 58 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 78);
            *(b + 35 * OS1_S1 + 160) =
                prefactor_z * *(b + 35 * OS1_S1 + 115) -
                p_over_q * *(b + 58 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 35 * OS1_S1 + 79);
            *(b + 35 * OS1_S1 + 161) =
                prefactor_y * *(b + 35 * OS1_S1 + 117) -
                p_over_q * *(b + 57 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 35 * OS1_S1 + 82);
            *(b + 35 * OS1_S1 + 162) = prefactor_y * *(b + 35 * OS1_S1 + 118) -
                                       p_over_q * *(b + 57 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 35 * OS1_S1 + 83);
            *(b + 35 * OS1_S1 + 163) = prefactor_y * *(b + 35 * OS1_S1 + 119) -
                                       p_over_q * *(b + 57 * OS1_S1 + 119);
            *(b + 35 * OS1_S1 + 164) =
                prefactor_z * *(b + 35 * OS1_S1 + 119) -
                p_over_q * *(b + 58 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 35 * OS1_S1 + 83);
            *(b + 36 * OS1_S1 + 120) =
                prefactor_x * *(b + 36 * OS1_S1 + 84) -
                p_over_q * *(b + 57 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 36 * OS1_S1 + 56);
            *(b + 36 * OS1_S1 + 121) = prefactor_y * *(b + 36 * OS1_S1 + 84) -
                                       p_over_q * *(b + 59 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 84);
            *(b + 36 * OS1_S1 + 122) = prefactor_z * *(b + 36 * OS1_S1 + 84) -
                                       p_over_q * *(b + 60 * OS1_S1 + 84);
            *(b + 36 * OS1_S1 + 123) =
                prefactor_y * *(b + 36 * OS1_S1 + 85) -
                p_over_q * *(b + 59 * OS1_S1 + 85) +
                one_over_two_q * *(b + 20 * OS1_S1 + 85) +
                one_over_two_q * *(b + 36 * OS1_S1 + 56);
            *(b + 36 * OS1_S1 + 124) = prefactor_z * *(b + 36 * OS1_S1 + 85) -
                                       p_over_q * *(b + 60 * OS1_S1 + 85);
            *(b + 36 * OS1_S1 + 125) = prefactor_z * *(b + 36 * OS1_S1 + 86) -
                                       p_over_q * *(b + 60 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 56);
            *(b + 36 * OS1_S1 + 126) =
                prefactor_y * *(b + 36 * OS1_S1 + 87) -
                p_over_q * *(b + 59 * OS1_S1 + 87) +
                one_over_two_q * *(b + 20 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 57);
            *(b + 36 * OS1_S1 + 127) = prefactor_z * *(b + 36 * OS1_S1 + 87) -
                                       p_over_q * *(b + 60 * OS1_S1 + 87);
            *(b + 36 * OS1_S1 + 128) = prefactor_y * *(b + 36 * OS1_S1 + 89) -
                                       p_over_q * *(b + 59 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 89);
            *(b + 36 * OS1_S1 + 129) =
                prefactor_z * *(b + 36 * OS1_S1 + 89) -
                p_over_q * *(b + 60 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 58);
            *(b + 36 * OS1_S1 + 130) =
                prefactor_y * *(b + 36 * OS1_S1 + 90) -
                p_over_q * *(b + 59 * OS1_S1 + 90) +
                one_over_two_q * *(b + 20 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 36 * OS1_S1 + 59);
            *(b + 36 * OS1_S1 + 131) = prefactor_z * *(b + 36 * OS1_S1 + 90) -
                                       p_over_q * *(b + 60 * OS1_S1 + 90);
            *(b + 36 * OS1_S1 + 132) = prefactor_z * *(b + 36 * OS1_S1 + 91) -
                                       p_over_q * *(b + 60 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 59);
            *(b + 36 * OS1_S1 + 133) = prefactor_y * *(b + 36 * OS1_S1 + 93) -
                                       p_over_q * *(b + 59 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 93);
            *(b + 36 * OS1_S1 + 134) =
                prefactor_z * *(b + 36 * OS1_S1 + 93) -
                p_over_q * *(b + 60 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 36 * OS1_S1 + 61);
            *(b + 36 * OS1_S1 + 135) =
                prefactor_x * *(b + 36 * OS1_S1 + 99) -
                p_over_q * *(b + 57 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 71);
            *(b + 36 * OS1_S1 + 136) = prefactor_z * *(b + 36 * OS1_S1 + 94) -
                                       p_over_q * *(b + 60 * OS1_S1 + 94);
            *(b + 36 * OS1_S1 + 137) = prefactor_z * *(b + 36 * OS1_S1 + 95) -
                                       p_over_q * *(b + 60 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 62);
            *(b + 36 * OS1_S1 + 138) =
                prefactor_y * *(b + 36 * OS1_S1 + 97) -
                p_over_q * *(b + 59 * OS1_S1 + 97) +
                one_over_two_q * *(b + 20 * OS1_S1 + 97) +
                one_over_two_q * *(b + 36 * OS1_S1 + 65);
            *(b + 36 * OS1_S1 + 139) = prefactor_y * *(b + 36 * OS1_S1 + 98) -
                                       p_over_q * *(b + 59 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 98);
            *(b + 36 * OS1_S1 + 140) =
                prefactor_x * *(b + 36 * OS1_S1 + 104) -
                p_over_q * *(b + 57 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 76);
            *(b + 36 * OS1_S1 + 141) =
                prefactor_x * *(b + 36 * OS1_S1 + 105) -
                p_over_q * *(b + 57 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 105) +
                one_over_two_q * *(b + 36 * OS1_S1 + 77);
            *(b + 36 * OS1_S1 + 142) = prefactor_z * *(b + 36 * OS1_S1 + 99) -
                                       p_over_q * *(b + 60 * OS1_S1 + 99);
            *(b + 36 * OS1_S1 + 143) = prefactor_z * *(b + 36 * OS1_S1 + 100) -
                                       p_over_q * *(b + 60 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 66);
            *(b + 36 * OS1_S1 + 144) =
                prefactor_x * *(b + 36 * OS1_S1 + 108) -
                p_over_q * *(b + 57 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 108) +
                one_over_two_q * *(b + 36 * OS1_S1 + 80);
            *(b + 36 * OS1_S1 + 145) =
                prefactor_y * *(b + 36 * OS1_S1 + 103) -
                p_over_q * *(b + 59 * OS1_S1 + 103) +
                one_over_two_q * *(b + 20 * OS1_S1 + 103) +
                one_over_two_q * *(b + 36 * OS1_S1 + 70);
            *(b + 36 * OS1_S1 + 146) =
                prefactor_y * *(b + 36 * OS1_S1 + 104) -
                p_over_q * *(b + 59 * OS1_S1 + 104) +
                one_over_two_q * *(b + 20 * OS1_S1 + 104);
            *(b + 36 * OS1_S1 + 147) =
                prefactor_x * *(b + 36 * OS1_S1 + 111) -
                p_over_q * *(b + 57 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 111) +
                one_over_two_q * *(b + 36 * OS1_S1 + 83);
            *(b + 36 * OS1_S1 + 148) =
                prefactor_x * *(b + 36 * OS1_S1 + 112) -
                p_over_q * *(b + 57 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 112);
            *(b + 36 * OS1_S1 + 149) = prefactor_z * *(b + 36 * OS1_S1 + 105) -
                                       p_over_q * *(b + 60 * OS1_S1 + 105);
            *(b + 36 * OS1_S1 + 150) =
                prefactor_x * *(b + 36 * OS1_S1 + 114) -
                p_over_q * *(b + 57 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 114);
            *(b + 36 * OS1_S1 + 151) =
                prefactor_x * *(b + 36 * OS1_S1 + 115) -
                p_over_q * *(b + 57 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 115);
            *(b + 36 * OS1_S1 + 152) =
                prefactor_x * *(b + 36 * OS1_S1 + 116) -
                p_over_q * *(b + 57 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 116);
            *(b + 36 * OS1_S1 + 153) =
                prefactor_x * *(b + 36 * OS1_S1 + 117) -
                p_over_q * *(b + 57 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 117);
            *(b + 36 * OS1_S1 + 154) =
                prefactor_y * *(b + 36 * OS1_S1 + 111) -
                p_over_q * *(b + 59 * OS1_S1 + 111) +
                one_over_two_q * *(b + 20 * OS1_S1 + 111);
            *(b + 36 * OS1_S1 + 155) =
                prefactor_x * *(b + 36 * OS1_S1 + 119) -
                p_over_q * *(b + 57 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 21 * OS1_S1 + 119);
            *(b + 36 * OS1_S1 + 156) =
                prefactor_y * *(b + 36 * OS1_S1 + 112) -
                p_over_q * *(b + 59 * OS1_S1 + 112) +
                one_over_two_q * *(b + 20 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 36 * OS1_S1 + 77);
            *(b + 36 * OS1_S1 + 157) = prefactor_z * *(b + 36 * OS1_S1 + 112) -
                                       p_over_q * *(b + 60 * OS1_S1 + 112);
            *(b + 36 * OS1_S1 + 158) = prefactor_z * *(b + 36 * OS1_S1 + 113) -
                                       p_over_q * *(b + 60 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 36 * OS1_S1 + 77);
            *(b + 36 * OS1_S1 + 159) =
                prefactor_z * *(b + 36 * OS1_S1 + 114) -
                p_over_q * *(b + 60 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 78);
            *(b + 36 * OS1_S1 + 160) =
                prefactor_z * *(b + 36 * OS1_S1 + 115) -
                p_over_q * *(b + 60 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 36 * OS1_S1 + 79);
            *(b + 36 * OS1_S1 + 161) =
                prefactor_y * *(b + 36 * OS1_S1 + 117) -
                p_over_q * *(b + 59 * OS1_S1 + 117) +
                one_over_two_q * *(b + 20 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 36 * OS1_S1 + 82);
            *(b + 36 * OS1_S1 + 162) =
                prefactor_y * *(b + 36 * OS1_S1 + 118) -
                p_over_q * *(b + 59 * OS1_S1 + 118) +
                one_over_two_q * *(b + 20 * OS1_S1 + 118) +
                one_over_two_q * *(b + 36 * OS1_S1 + 83);
            *(b + 36 * OS1_S1 + 163) =
                prefactor_y * *(b + 36 * OS1_S1 + 119) -
                p_over_q * *(b + 59 * OS1_S1 + 119) +
                one_over_two_q * *(b + 20 * OS1_S1 + 119);
            *(b + 36 * OS1_S1 + 164) =
                prefactor_z * *(b + 36 * OS1_S1 + 119) -
                p_over_q * *(b + 60 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 36 * OS1_S1 + 83);
            *(b + 37 * OS1_S1 + 120) =
                prefactor_x * *(b + 37 * OS1_S1 + 84) -
                p_over_q * *(b + 58 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 37 * OS1_S1 + 56);
            *(b + 37 * OS1_S1 + 121) = prefactor_y * *(b + 37 * OS1_S1 + 84) -
                                       p_over_q * *(b + 60 * OS1_S1 + 84);
            *(b + 37 * OS1_S1 + 122) = prefactor_z * *(b + 37 * OS1_S1 + 84) -
                                       p_over_q * *(b + 61 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 84);
            *(b + 37 * OS1_S1 + 123) = prefactor_y * *(b + 37 * OS1_S1 + 85) -
                                       p_over_q * *(b + 60 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 56);
            *(b + 37 * OS1_S1 + 124) = prefactor_y * *(b + 37 * OS1_S1 + 86) -
                                       p_over_q * *(b + 60 * OS1_S1 + 86);
            *(b + 37 * OS1_S1 + 125) =
                prefactor_z * *(b + 37 * OS1_S1 + 86) -
                p_over_q * *(b + 61 * OS1_S1 + 86) +
                one_over_two_q * *(b + 20 * OS1_S1 + 86) +
                one_over_two_q * *(b + 37 * OS1_S1 + 56);
            *(b + 37 * OS1_S1 + 126) =
                prefactor_y * *(b + 37 * OS1_S1 + 87) -
                p_over_q * *(b + 60 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 57);
            *(b + 37 * OS1_S1 + 127) = prefactor_z * *(b + 37 * OS1_S1 + 87) -
                                       p_over_q * *(b + 61 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 87);
            *(b + 37 * OS1_S1 + 128) = prefactor_y * *(b + 37 * OS1_S1 + 89) -
                                       p_over_q * *(b + 60 * OS1_S1 + 89);
            *(b + 37 * OS1_S1 + 129) =
                prefactor_z * *(b + 37 * OS1_S1 + 89) -
                p_over_q * *(b + 61 * OS1_S1 + 89) +
                one_over_two_q * *(b + 20 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 58);
            *(b + 37 * OS1_S1 + 130) =
                prefactor_y * *(b + 37 * OS1_S1 + 90) -
                p_over_q * *(b + 60 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 37 * OS1_S1 + 59);
            *(b + 37 * OS1_S1 + 131) = prefactor_z * *(b + 37 * OS1_S1 + 90) -
                                       p_over_q * *(b + 61 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 90);
            *(b + 37 * OS1_S1 + 132) = prefactor_y * *(b + 37 * OS1_S1 + 92) -
                                       p_over_q * *(b + 60 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 61);
            *(b + 37 * OS1_S1 + 133) = prefactor_y * *(b + 37 * OS1_S1 + 93) -
                                       p_over_q * *(b + 60 * OS1_S1 + 93);
            *(b + 37 * OS1_S1 + 134) =
                prefactor_z * *(b + 37 * OS1_S1 + 93) -
                p_over_q * *(b + 61 * OS1_S1 + 93) +
                one_over_two_q * *(b + 20 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 37 * OS1_S1 + 61);
            *(b + 37 * OS1_S1 + 135) =
                prefactor_x * *(b + 37 * OS1_S1 + 99) -
                p_over_q * *(b + 58 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 71);
            *(b + 37 * OS1_S1 + 136) = prefactor_z * *(b + 37 * OS1_S1 + 94) -
                                       p_over_q * *(b + 61 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 94);
            *(b + 37 * OS1_S1 + 137) =
                prefactor_z * *(b + 37 * OS1_S1 + 95) -
                p_over_q * *(b + 61 * OS1_S1 + 95) +
                one_over_two_q * *(b + 20 * OS1_S1 + 95) +
                one_over_two_q * *(b + 37 * OS1_S1 + 62);
            *(b + 37 * OS1_S1 + 138) = prefactor_y * *(b + 37 * OS1_S1 + 97) -
                                       p_over_q * *(b + 60 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 65);
            *(b + 37 * OS1_S1 + 139) = prefactor_y * *(b + 37 * OS1_S1 + 98) -
                                       p_over_q * *(b + 60 * OS1_S1 + 98);
            *(b + 37 * OS1_S1 + 140) =
                prefactor_x * *(b + 37 * OS1_S1 + 104) -
                p_over_q * *(b + 58 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 76);
            *(b + 37 * OS1_S1 + 141) =
                prefactor_x * *(b + 37 * OS1_S1 + 105) -
                p_over_q * *(b + 58 * OS1_S1 + 105) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 105) +
                one_over_two_q * *(b + 37 * OS1_S1 + 77);
            *(b + 37 * OS1_S1 + 142) = prefactor_z * *(b + 37 * OS1_S1 + 99) -
                                       p_over_q * *(b + 61 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 20 * OS1_S1 + 99);
            *(b + 37 * OS1_S1 + 143) =
                prefactor_z * *(b + 37 * OS1_S1 + 100) -
                p_over_q * *(b + 61 * OS1_S1 + 100) +
                one_over_two_q * *(b + 20 * OS1_S1 + 100) +
                one_over_two_q * *(b + 37 * OS1_S1 + 66);
            *(b + 37 * OS1_S1 + 144) =
                prefactor_x * *(b + 37 * OS1_S1 + 108) -
                p_over_q * *(b + 58 * OS1_S1 + 108) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 108) +
                one_over_two_q * *(b + 37 * OS1_S1 + 80);
            *(b + 37 * OS1_S1 + 145) = prefactor_y * *(b + 37 * OS1_S1 + 103) -
                                       p_over_q * *(b + 60 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 70);
            *(b + 37 * OS1_S1 + 146) = prefactor_y * *(b + 37 * OS1_S1 + 104) -
                                       p_over_q * *(b + 60 * OS1_S1 + 104);
            *(b + 37 * OS1_S1 + 147) =
                prefactor_x * *(b + 37 * OS1_S1 + 111) -
                p_over_q * *(b + 58 * OS1_S1 + 111) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 111) +
                one_over_two_q * *(b + 37 * OS1_S1 + 83);
            *(b + 37 * OS1_S1 + 148) =
                prefactor_x * *(b + 37 * OS1_S1 + 112) -
                p_over_q * *(b + 58 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 112);
            *(b + 37 * OS1_S1 + 149) =
                prefactor_z * *(b + 37 * OS1_S1 + 105) -
                p_over_q * *(b + 61 * OS1_S1 + 105) +
                one_over_two_q * *(b + 20 * OS1_S1 + 105);
            *(b + 37 * OS1_S1 + 150) =
                prefactor_x * *(b + 37 * OS1_S1 + 114) -
                p_over_q * *(b + 58 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 114);
            *(b + 37 * OS1_S1 + 151) =
                prefactor_x * *(b + 37 * OS1_S1 + 115) -
                p_over_q * *(b + 58 * OS1_S1 + 115) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 115);
            *(b + 37 * OS1_S1 + 152) =
                prefactor_x * *(b + 37 * OS1_S1 + 116) -
                p_over_q * *(b + 58 * OS1_S1 + 116) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 116);
            *(b + 37 * OS1_S1 + 153) =
                prefactor_x * *(b + 37 * OS1_S1 + 117) -
                p_over_q * *(b + 58 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 117);
            *(b + 37 * OS1_S1 + 154) = prefactor_y * *(b + 37 * OS1_S1 + 111) -
                                       p_over_q * *(b + 60 * OS1_S1 + 111);
            *(b + 37 * OS1_S1 + 155) =
                prefactor_x * *(b + 37 * OS1_S1 + 119) -
                p_over_q * *(b + 58 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 22 * OS1_S1 + 119);
            *(b + 37 * OS1_S1 + 156) =
                prefactor_y * *(b + 37 * OS1_S1 + 112) -
                p_over_q * *(b + 60 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 37 * OS1_S1 + 77);
            *(b + 37 * OS1_S1 + 157) =
                prefactor_z * *(b + 37 * OS1_S1 + 112) -
                p_over_q * *(b + 61 * OS1_S1 + 112) +
                one_over_two_q * *(b + 20 * OS1_S1 + 112);
            *(b + 37 * OS1_S1 + 158) =
                prefactor_z * *(b + 37 * OS1_S1 + 113) -
                p_over_q * *(b + 61 * OS1_S1 + 113) +
                one_over_two_q * *(b + 20 * OS1_S1 + 113) +
                one_over_two_q * *(b + 37 * OS1_S1 + 77);
            *(b + 37 * OS1_S1 + 159) =
                prefactor_z * *(b + 37 * OS1_S1 + 114) -
                p_over_q * *(b + 61 * OS1_S1 + 114) +
                one_over_two_q * *(b + 20 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 78);
            *(b + 37 * OS1_S1 + 160) =
                prefactor_y * *(b + 37 * OS1_S1 + 116) -
                p_over_q * *(b + 60 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 37 * OS1_S1 + 81);
            *(b + 37 * OS1_S1 + 161) =
                prefactor_y * *(b + 37 * OS1_S1 + 117) -
                p_over_q * *(b + 60 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 37 * OS1_S1 + 82);
            *(b + 37 * OS1_S1 + 162) = prefactor_y * *(b + 37 * OS1_S1 + 118) -
                                       p_over_q * *(b + 60 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 37 * OS1_S1 + 83);
            *(b + 37 * OS1_S1 + 163) = prefactor_y * *(b + 37 * OS1_S1 + 119) -
                                       p_over_q * *(b + 60 * OS1_S1 + 119);
            *(b + 37 * OS1_S1 + 164) =
                prefactor_z * *(b + 37 * OS1_S1 + 119) -
                p_over_q * *(b + 61 * OS1_S1 + 119) +
                one_over_two_q * *(b + 20 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 37 * OS1_S1 + 83);
            *(b + 38 * OS1_S1 + 120) =
                prefactor_x * *(b + 38 * OS1_S1 + 84) -
                p_over_q * *(b + 59 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 38 * OS1_S1 + 56);
            *(b + 38 * OS1_S1 + 121) =
                prefactor_y * *(b + 38 * OS1_S1 + 84) -
                p_over_q * *(b + 62 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 84);
            *(b + 38 * OS1_S1 + 122) = prefactor_z * *(b + 38 * OS1_S1 + 84) -
                                       p_over_q * *(b + 63 * OS1_S1 + 84);
            *(b + 38 * OS1_S1 + 123) =
                prefactor_y * *(b + 38 * OS1_S1 + 85) -
                p_over_q * *(b + 62 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 85) +
                one_over_two_q * *(b + 38 * OS1_S1 + 56);
            *(b + 38 * OS1_S1 + 124) = prefactor_z * *(b + 38 * OS1_S1 + 85) -
                                       p_over_q * *(b + 63 * OS1_S1 + 85);
            *(b + 38 * OS1_S1 + 125) = prefactor_z * *(b + 38 * OS1_S1 + 86) -
                                       p_over_q * *(b + 63 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 56);
            *(b + 38 * OS1_S1 + 126) =
                prefactor_y * *(b + 38 * OS1_S1 + 87) -
                p_over_q * *(b + 62 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 57);
            *(b + 38 * OS1_S1 + 127) = prefactor_z * *(b + 38 * OS1_S1 + 87) -
                                       p_over_q * *(b + 63 * OS1_S1 + 87);
            *(b + 38 * OS1_S1 + 128) =
                prefactor_y * *(b + 38 * OS1_S1 + 89) -
                p_over_q * *(b + 62 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 89);
            *(b + 38 * OS1_S1 + 129) =
                prefactor_z * *(b + 38 * OS1_S1 + 89) -
                p_over_q * *(b + 63 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 58);
            *(b + 38 * OS1_S1 + 130) =
                prefactor_y * *(b + 38 * OS1_S1 + 90) -
                p_over_q * *(b + 62 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 59);
            *(b + 38 * OS1_S1 + 131) = prefactor_z * *(b + 38 * OS1_S1 + 90) -
                                       p_over_q * *(b + 63 * OS1_S1 + 90);
            *(b + 38 * OS1_S1 + 132) = prefactor_z * *(b + 38 * OS1_S1 + 91) -
                                       p_over_q * *(b + 63 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 59);
            *(b + 38 * OS1_S1 + 133) =
                prefactor_y * *(b + 38 * OS1_S1 + 93) -
                p_over_q * *(b + 62 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 93);
            *(b + 38 * OS1_S1 + 134) =
                prefactor_z * *(b + 38 * OS1_S1 + 93) -
                p_over_q * *(b + 63 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 61);
            *(b + 38 * OS1_S1 + 135) =
                prefactor_x * *(b + 38 * OS1_S1 + 99) -
                p_over_q * *(b + 59 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 71);
            *(b + 38 * OS1_S1 + 136) = prefactor_z * *(b + 38 * OS1_S1 + 94) -
                                       p_over_q * *(b + 63 * OS1_S1 + 94);
            *(b + 38 * OS1_S1 + 137) = prefactor_z * *(b + 38 * OS1_S1 + 95) -
                                       p_over_q * *(b + 63 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 62);
            *(b + 38 * OS1_S1 + 138) =
                prefactor_y * *(b + 38 * OS1_S1 + 97) -
                p_over_q * *(b + 62 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 97) +
                one_over_two_q * *(b + 38 * OS1_S1 + 65);
            *(b + 38 * OS1_S1 + 139) =
                prefactor_y * *(b + 38 * OS1_S1 + 98) -
                p_over_q * *(b + 62 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 98);
            *(b + 38 * OS1_S1 + 140) =
                prefactor_x * *(b + 38 * OS1_S1 + 104) -
                p_over_q * *(b + 59 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 76);
            *(b + 38 * OS1_S1 + 141) =
                prefactor_x * *(b + 38 * OS1_S1 + 105) -
                p_over_q * *(b + 59 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 105) +
                one_over_two_q * *(b + 38 * OS1_S1 + 77);
            *(b + 38 * OS1_S1 + 142) = prefactor_z * *(b + 38 * OS1_S1 + 99) -
                                       p_over_q * *(b + 63 * OS1_S1 + 99);
            *(b + 38 * OS1_S1 + 143) = prefactor_z * *(b + 38 * OS1_S1 + 100) -
                                       p_over_q * *(b + 63 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 66);
            *(b + 38 * OS1_S1 + 144) =
                prefactor_x * *(b + 38 * OS1_S1 + 108) -
                p_over_q * *(b + 59 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 108) +
                one_over_two_q * *(b + 38 * OS1_S1 + 80);
            *(b + 38 * OS1_S1 + 145) =
                prefactor_y * *(b + 38 * OS1_S1 + 103) -
                p_over_q * *(b + 62 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 103) +
                one_over_two_q * *(b + 38 * OS1_S1 + 70);
            *(b + 38 * OS1_S1 + 146) =
                prefactor_y * *(b + 38 * OS1_S1 + 104) -
                p_over_q * *(b + 62 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 104);
            *(b + 38 * OS1_S1 + 147) =
                prefactor_x * *(b + 38 * OS1_S1 + 111) -
                p_over_q * *(b + 59 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 111) +
                one_over_two_q * *(b + 38 * OS1_S1 + 83);
            *(b + 38 * OS1_S1 + 148) =
                prefactor_x * *(b + 38 * OS1_S1 + 112) -
                p_over_q * *(b + 59 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 112);
            *(b + 38 * OS1_S1 + 149) = prefactor_z * *(b + 38 * OS1_S1 + 105) -
                                       p_over_q * *(b + 63 * OS1_S1 + 105);
            *(b + 38 * OS1_S1 + 150) =
                prefactor_x * *(b + 38 * OS1_S1 + 114) -
                p_over_q * *(b + 59 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 114);
            *(b + 38 * OS1_S1 + 151) =
                prefactor_x * *(b + 38 * OS1_S1 + 115) -
                p_over_q * *(b + 59 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 115);
            *(b + 38 * OS1_S1 + 152) =
                prefactor_x * *(b + 38 * OS1_S1 + 116) -
                p_over_q * *(b + 59 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 116);
            *(b + 38 * OS1_S1 + 153) =
                prefactor_x * *(b + 38 * OS1_S1 + 117) -
                p_over_q * *(b + 59 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 117);
            *(b + 38 * OS1_S1 + 154) =
                prefactor_y * *(b + 38 * OS1_S1 + 111) -
                p_over_q * *(b + 62 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 111);
            *(b + 38 * OS1_S1 + 155) =
                prefactor_x * *(b + 38 * OS1_S1 + 119) -
                p_over_q * *(b + 59 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 119);
            *(b + 38 * OS1_S1 + 156) =
                prefactor_y * *(b + 38 * OS1_S1 + 112) -
                p_over_q * *(b + 62 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 38 * OS1_S1 + 77);
            *(b + 38 * OS1_S1 + 157) = prefactor_z * *(b + 38 * OS1_S1 + 112) -
                                       p_over_q * *(b + 63 * OS1_S1 + 112);
            *(b + 38 * OS1_S1 + 158) = prefactor_z * *(b + 38 * OS1_S1 + 113) -
                                       p_over_q * *(b + 63 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 38 * OS1_S1 + 77);
            *(b + 38 * OS1_S1 + 159) =
                prefactor_z * *(b + 38 * OS1_S1 + 114) -
                p_over_q * *(b + 63 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 78);
            *(b + 38 * OS1_S1 + 160) =
                prefactor_z * *(b + 38 * OS1_S1 + 115) -
                p_over_q * *(b + 63 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 38 * OS1_S1 + 79);
            *(b + 38 * OS1_S1 + 161) =
                prefactor_y * *(b + 38 * OS1_S1 + 117) -
                p_over_q * *(b + 62 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 38 * OS1_S1 + 82);
            *(b + 38 * OS1_S1 + 162) =
                prefactor_y * *(b + 38 * OS1_S1 + 118) -
                p_over_q * *(b + 62 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 118) +
                one_over_two_q * *(b + 38 * OS1_S1 + 83);
            *(b + 38 * OS1_S1 + 163) =
                prefactor_y * *(b + 38 * OS1_S1 + 119) -
                p_over_q * *(b + 62 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 21 * OS1_S1 + 119);
            *(b + 38 * OS1_S1 + 164) =
                prefactor_z * *(b + 38 * OS1_S1 + 119) -
                p_over_q * *(b + 63 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 38 * OS1_S1 + 83);
            *(b + 39 * OS1_S1 + 120) =
                prefactor_x * *(b + 39 * OS1_S1 + 84) -
                p_over_q * *(b + 60 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 39 * OS1_S1 + 56);
            *(b + 39 * OS1_S1 + 121) = prefactor_y * *(b + 39 * OS1_S1 + 84) -
                                       p_over_q * *(b + 63 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 84);
            *(b + 39 * OS1_S1 + 122) = prefactor_z * *(b + 39 * OS1_S1 + 84) -
                                       p_over_q * *(b + 64 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 84);
            *(b + 39 * OS1_S1 + 123) =
                prefactor_y * *(b + 39 * OS1_S1 + 85) -
                p_over_q * *(b + 63 * OS1_S1 + 85) +
                one_over_two_q * *(b + 22 * OS1_S1 + 85) +
                one_over_two_q * *(b + 39 * OS1_S1 + 56);
            *(b + 39 * OS1_S1 + 124) = prefactor_z * *(b + 39 * OS1_S1 + 85) -
                                       p_over_q * *(b + 64 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 85);
            *(b + 39 * OS1_S1 + 125) =
                prefactor_z * *(b + 39 * OS1_S1 + 86) -
                p_over_q * *(b + 64 * OS1_S1 + 86) +
                one_over_two_q * *(b + 21 * OS1_S1 + 86) +
                one_over_two_q * *(b + 39 * OS1_S1 + 56);
            *(b + 39 * OS1_S1 + 126) =
                prefactor_y * *(b + 39 * OS1_S1 + 87) -
                p_over_q * *(b + 63 * OS1_S1 + 87) +
                one_over_two_q * *(b + 22 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 57);
            *(b + 39 * OS1_S1 + 127) = prefactor_z * *(b + 39 * OS1_S1 + 87) -
                                       p_over_q * *(b + 64 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 87);
            *(b + 39 * OS1_S1 + 128) = prefactor_y * *(b + 39 * OS1_S1 + 89) -
                                       p_over_q * *(b + 63 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 89);
            *(b + 39 * OS1_S1 + 129) =
                prefactor_z * *(b + 39 * OS1_S1 + 89) -
                p_over_q * *(b + 64 * OS1_S1 + 89) +
                one_over_two_q * *(b + 21 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 58);
            *(b + 39 * OS1_S1 + 130) =
                prefactor_y * *(b + 39 * OS1_S1 + 90) -
                p_over_q * *(b + 63 * OS1_S1 + 90) +
                one_over_two_q * *(b + 22 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 39 * OS1_S1 + 59);
            *(b + 39 * OS1_S1 + 131) = prefactor_z * *(b + 39 * OS1_S1 + 90) -
                                       p_over_q * *(b + 64 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 90);
            *(b + 39 * OS1_S1 + 132) =
                prefactor_z * *(b + 39 * OS1_S1 + 91) -
                p_over_q * *(b + 64 * OS1_S1 + 91) +
                one_over_two_q * *(b + 21 * OS1_S1 + 91) +
                one_over_two_q * *(b + 39 * OS1_S1 + 59);
            *(b + 39 * OS1_S1 + 133) = prefactor_y * *(b + 39 * OS1_S1 + 93) -
                                       p_over_q * *(b + 63 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 93);
            *(b + 39 * OS1_S1 + 134) =
                prefactor_z * *(b + 39 * OS1_S1 + 93) -
                p_over_q * *(b + 64 * OS1_S1 + 93) +
                one_over_two_q * *(b + 21 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 39 * OS1_S1 + 61);
            *(b + 39 * OS1_S1 + 135) =
                prefactor_x * *(b + 39 * OS1_S1 + 99) -
                p_over_q * *(b + 60 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 71);
            *(b + 39 * OS1_S1 + 136) = prefactor_z * *(b + 39 * OS1_S1 + 94) -
                                       p_over_q * *(b + 64 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 94);
            *(b + 39 * OS1_S1 + 137) =
                prefactor_z * *(b + 39 * OS1_S1 + 95) -
                p_over_q * *(b + 64 * OS1_S1 + 95) +
                one_over_two_q * *(b + 21 * OS1_S1 + 95) +
                one_over_two_q * *(b + 39 * OS1_S1 + 62);
            *(b + 39 * OS1_S1 + 138) =
                prefactor_y * *(b + 39 * OS1_S1 + 97) -
                p_over_q * *(b + 63 * OS1_S1 + 97) +
                one_over_two_q * *(b + 22 * OS1_S1 + 97) +
                one_over_two_q * *(b + 39 * OS1_S1 + 65);
            *(b + 39 * OS1_S1 + 139) = prefactor_y * *(b + 39 * OS1_S1 + 98) -
                                       p_over_q * *(b + 63 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 22 * OS1_S1 + 98);
            *(b + 39 * OS1_S1 + 140) =
                prefactor_x * *(b + 39 * OS1_S1 + 104) -
                p_over_q * *(b + 60 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 76);
            *(b + 39 * OS1_S1 + 141) =
                prefactor_x * *(b + 39 * OS1_S1 + 105) -
                p_over_q * *(b + 60 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 105) +
                one_over_two_q * *(b + 39 * OS1_S1 + 77);
            *(b + 39 * OS1_S1 + 142) = prefactor_z * *(b + 39 * OS1_S1 + 99) -
                                       p_over_q * *(b + 64 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 21 * OS1_S1 + 99);
            *(b + 39 * OS1_S1 + 143) =
                prefactor_z * *(b + 39 * OS1_S1 + 100) -
                p_over_q * *(b + 64 * OS1_S1 + 100) +
                one_over_two_q * *(b + 21 * OS1_S1 + 100) +
                one_over_two_q * *(b + 39 * OS1_S1 + 66);
            *(b + 39 * OS1_S1 + 144) =
                prefactor_x * *(b + 39 * OS1_S1 + 108) -
                p_over_q * *(b + 60 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 108) +
                one_over_two_q * *(b + 39 * OS1_S1 + 80);
            *(b + 39 * OS1_S1 + 145) =
                prefactor_y * *(b + 39 * OS1_S1 + 103) -
                p_over_q * *(b + 63 * OS1_S1 + 103) +
                one_over_two_q * *(b + 22 * OS1_S1 + 103) +
                one_over_two_q * *(b + 39 * OS1_S1 + 70);
            *(b + 39 * OS1_S1 + 146) =
                prefactor_y * *(b + 39 * OS1_S1 + 104) -
                p_over_q * *(b + 63 * OS1_S1 + 104) +
                one_over_two_q * *(b + 22 * OS1_S1 + 104);
            *(b + 39 * OS1_S1 + 147) =
                prefactor_x * *(b + 39 * OS1_S1 + 111) -
                p_over_q * *(b + 60 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 111) +
                one_over_two_q * *(b + 39 * OS1_S1 + 83);
            *(b + 39 * OS1_S1 + 148) =
                prefactor_x * *(b + 39 * OS1_S1 + 112) -
                p_over_q * *(b + 60 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 112);
            *(b + 39 * OS1_S1 + 149) =
                prefactor_z * *(b + 39 * OS1_S1 + 105) -
                p_over_q * *(b + 64 * OS1_S1 + 105) +
                one_over_two_q * *(b + 21 * OS1_S1 + 105);
            *(b + 39 * OS1_S1 + 150) =
                prefactor_x * *(b + 39 * OS1_S1 + 114) -
                p_over_q * *(b + 60 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 114);
            *(b + 39 * OS1_S1 + 151) =
                prefactor_x * *(b + 39 * OS1_S1 + 115) -
                p_over_q * *(b + 60 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 115);
            *(b + 39 * OS1_S1 + 152) =
                prefactor_x * *(b + 39 * OS1_S1 + 116) -
                p_over_q * *(b + 60 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 116);
            *(b + 39 * OS1_S1 + 153) =
                prefactor_x * *(b + 39 * OS1_S1 + 117) -
                p_over_q * *(b + 60 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 117);
            *(b + 39 * OS1_S1 + 154) =
                prefactor_y * *(b + 39 * OS1_S1 + 111) -
                p_over_q * *(b + 63 * OS1_S1 + 111) +
                one_over_two_q * *(b + 22 * OS1_S1 + 111);
            *(b + 39 * OS1_S1 + 155) =
                prefactor_x * *(b + 39 * OS1_S1 + 119) -
                p_over_q * *(b + 60 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 24 * OS1_S1 + 119);
            *(b + 39 * OS1_S1 + 156) =
                prefactor_y * *(b + 39 * OS1_S1 + 112) -
                p_over_q * *(b + 63 * OS1_S1 + 112) +
                one_over_two_q * *(b + 22 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 39 * OS1_S1 + 77);
            *(b + 39 * OS1_S1 + 157) =
                prefactor_z * *(b + 39 * OS1_S1 + 112) -
                p_over_q * *(b + 64 * OS1_S1 + 112) +
                one_over_two_q * *(b + 21 * OS1_S1 + 112);
            *(b + 39 * OS1_S1 + 158) =
                prefactor_z * *(b + 39 * OS1_S1 + 113) -
                p_over_q * *(b + 64 * OS1_S1 + 113) +
                one_over_two_q * *(b + 21 * OS1_S1 + 113) +
                one_over_two_q * *(b + 39 * OS1_S1 + 77);
            *(b + 39 * OS1_S1 + 159) =
                prefactor_z * *(b + 39 * OS1_S1 + 114) -
                p_over_q * *(b + 64 * OS1_S1 + 114) +
                one_over_two_q * *(b + 21 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 78);
            *(b + 39 * OS1_S1 + 160) =
                prefactor_z * *(b + 39 * OS1_S1 + 115) -
                p_over_q * *(b + 64 * OS1_S1 + 115) +
                one_over_two_q * *(b + 21 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 39 * OS1_S1 + 79);
            *(b + 39 * OS1_S1 + 161) =
                prefactor_y * *(b + 39 * OS1_S1 + 117) -
                p_over_q * *(b + 63 * OS1_S1 + 117) +
                one_over_two_q * *(b + 22 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 39 * OS1_S1 + 82);
            *(b + 39 * OS1_S1 + 162) =
                prefactor_y * *(b + 39 * OS1_S1 + 118) -
                p_over_q * *(b + 63 * OS1_S1 + 118) +
                one_over_two_q * *(b + 22 * OS1_S1 + 118) +
                one_over_two_q * *(b + 39 * OS1_S1 + 83);
            *(b + 39 * OS1_S1 + 163) =
                prefactor_y * *(b + 39 * OS1_S1 + 119) -
                p_over_q * *(b + 63 * OS1_S1 + 119) +
                one_over_two_q * *(b + 22 * OS1_S1 + 119);
            *(b + 39 * OS1_S1 + 164) =
                prefactor_z * *(b + 39 * OS1_S1 + 119) -
                p_over_q * *(b + 64 * OS1_S1 + 119) +
                one_over_two_q * *(b + 21 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 39 * OS1_S1 + 83);
            *(b + 40 * OS1_S1 + 120) =
                prefactor_x * *(b + 40 * OS1_S1 + 84) -
                p_over_q * *(b + 61 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 40 * OS1_S1 + 56);
            *(b + 40 * OS1_S1 + 121) = prefactor_y * *(b + 40 * OS1_S1 + 84) -
                                       p_over_q * *(b + 64 * OS1_S1 + 84);
            *(b + 40 * OS1_S1 + 122) =
                prefactor_z * *(b + 40 * OS1_S1 + 84) -
                p_over_q * *(b + 65 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 84);
            *(b + 40 * OS1_S1 + 123) = prefactor_y * *(b + 40 * OS1_S1 + 85) -
                                       p_over_q * *(b + 64 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 56);
            *(b + 40 * OS1_S1 + 124) = prefactor_y * *(b + 40 * OS1_S1 + 86) -
                                       p_over_q * *(b + 64 * OS1_S1 + 86);
            *(b + 40 * OS1_S1 + 125) =
                prefactor_z * *(b + 40 * OS1_S1 + 86) -
                p_over_q * *(b + 65 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 86) +
                one_over_two_q * *(b + 40 * OS1_S1 + 56);
            *(b + 40 * OS1_S1 + 126) =
                prefactor_y * *(b + 40 * OS1_S1 + 87) -
                p_over_q * *(b + 64 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 57);
            *(b + 40 * OS1_S1 + 127) =
                prefactor_z * *(b + 40 * OS1_S1 + 87) -
                p_over_q * *(b + 65 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 87);
            *(b + 40 * OS1_S1 + 128) = prefactor_y * *(b + 40 * OS1_S1 + 89) -
                                       p_over_q * *(b + 64 * OS1_S1 + 89);
            *(b + 40 * OS1_S1 + 129) =
                prefactor_z * *(b + 40 * OS1_S1 + 89) -
                p_over_q * *(b + 65 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 58);
            *(b + 40 * OS1_S1 + 130) =
                prefactor_y * *(b + 40 * OS1_S1 + 90) -
                p_over_q * *(b + 64 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 59);
            *(b + 40 * OS1_S1 + 131) =
                prefactor_z * *(b + 40 * OS1_S1 + 90) -
                p_over_q * *(b + 65 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 90);
            *(b + 40 * OS1_S1 + 132) = prefactor_y * *(b + 40 * OS1_S1 + 92) -
                                       p_over_q * *(b + 64 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 61);
            *(b + 40 * OS1_S1 + 133) = prefactor_y * *(b + 40 * OS1_S1 + 93) -
                                       p_over_q * *(b + 64 * OS1_S1 + 93);
            *(b + 40 * OS1_S1 + 134) =
                prefactor_z * *(b + 40 * OS1_S1 + 93) -
                p_over_q * *(b + 65 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 61);
            *(b + 40 * OS1_S1 + 135) =
                prefactor_x * *(b + 40 * OS1_S1 + 99) -
                p_over_q * *(b + 61 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 71);
            *(b + 40 * OS1_S1 + 136) =
                prefactor_z * *(b + 40 * OS1_S1 + 94) -
                p_over_q * *(b + 65 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 94);
            *(b + 40 * OS1_S1 + 137) =
                prefactor_z * *(b + 40 * OS1_S1 + 95) -
                p_over_q * *(b + 65 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 95) +
                one_over_two_q * *(b + 40 * OS1_S1 + 62);
            *(b + 40 * OS1_S1 + 138) = prefactor_y * *(b + 40 * OS1_S1 + 97) -
                                       p_over_q * *(b + 64 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 65);
            *(b + 40 * OS1_S1 + 139) = prefactor_y * *(b + 40 * OS1_S1 + 98) -
                                       p_over_q * *(b + 64 * OS1_S1 + 98);
            *(b + 40 * OS1_S1 + 140) =
                prefactor_x * *(b + 40 * OS1_S1 + 104) -
                p_over_q * *(b + 61 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 76);
            *(b + 40 * OS1_S1 + 141) =
                prefactor_x * *(b + 40 * OS1_S1 + 105) -
                p_over_q * *(b + 61 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 105) +
                one_over_two_q * *(b + 40 * OS1_S1 + 77);
            *(b + 40 * OS1_S1 + 142) =
                prefactor_z * *(b + 40 * OS1_S1 + 99) -
                p_over_q * *(b + 65 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 99);
            *(b + 40 * OS1_S1 + 143) =
                prefactor_z * *(b + 40 * OS1_S1 + 100) -
                p_over_q * *(b + 65 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 100) +
                one_over_two_q * *(b + 40 * OS1_S1 + 66);
            *(b + 40 * OS1_S1 + 144) =
                prefactor_x * *(b + 40 * OS1_S1 + 108) -
                p_over_q * *(b + 61 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 108) +
                one_over_two_q * *(b + 40 * OS1_S1 + 80);
            *(b + 40 * OS1_S1 + 145) = prefactor_y * *(b + 40 * OS1_S1 + 103) -
                                       p_over_q * *(b + 64 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 70);
            *(b + 40 * OS1_S1 + 146) = prefactor_y * *(b + 40 * OS1_S1 + 104) -
                                       p_over_q * *(b + 64 * OS1_S1 + 104);
            *(b + 40 * OS1_S1 + 147) =
                prefactor_x * *(b + 40 * OS1_S1 + 111) -
                p_over_q * *(b + 61 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 111) +
                one_over_two_q * *(b + 40 * OS1_S1 + 83);
            *(b + 40 * OS1_S1 + 148) =
                prefactor_x * *(b + 40 * OS1_S1 + 112) -
                p_over_q * *(b + 61 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 112);
            *(b + 40 * OS1_S1 + 149) =
                prefactor_z * *(b + 40 * OS1_S1 + 105) -
                p_over_q * *(b + 65 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 105);
            *(b + 40 * OS1_S1 + 150) =
                prefactor_x * *(b + 40 * OS1_S1 + 114) -
                p_over_q * *(b + 61 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 114);
            *(b + 40 * OS1_S1 + 151) =
                prefactor_x * *(b + 40 * OS1_S1 + 115) -
                p_over_q * *(b + 61 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 115);
            *(b + 40 * OS1_S1 + 152) =
                prefactor_x * *(b + 40 * OS1_S1 + 116) -
                p_over_q * *(b + 61 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 116);
            *(b + 40 * OS1_S1 + 153) =
                prefactor_x * *(b + 40 * OS1_S1 + 117) -
                p_over_q * *(b + 61 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 117);
            *(b + 40 * OS1_S1 + 154) = prefactor_y * *(b + 40 * OS1_S1 + 111) -
                                       p_over_q * *(b + 64 * OS1_S1 + 111);
            *(b + 40 * OS1_S1 + 155) =
                prefactor_x * *(b + 40 * OS1_S1 + 119) -
                p_over_q * *(b + 61 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 119);
            *(b + 40 * OS1_S1 + 156) =
                prefactor_y * *(b + 40 * OS1_S1 + 112) -
                p_over_q * *(b + 64 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 40 * OS1_S1 + 77);
            *(b + 40 * OS1_S1 + 157) =
                prefactor_z * *(b + 40 * OS1_S1 + 112) -
                p_over_q * *(b + 65 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 112);
            *(b + 40 * OS1_S1 + 158) =
                prefactor_z * *(b + 40 * OS1_S1 + 113) -
                p_over_q * *(b + 65 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 113) +
                one_over_two_q * *(b + 40 * OS1_S1 + 77);
            *(b + 40 * OS1_S1 + 159) =
                prefactor_z * *(b + 40 * OS1_S1 + 114) -
                p_over_q * *(b + 65 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 78);
            *(b + 40 * OS1_S1 + 160) =
                prefactor_y * *(b + 40 * OS1_S1 + 116) -
                p_over_q * *(b + 64 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 40 * OS1_S1 + 81);
            *(b + 40 * OS1_S1 + 161) =
                prefactor_y * *(b + 40 * OS1_S1 + 117) -
                p_over_q * *(b + 64 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 40 * OS1_S1 + 82);
            *(b + 40 * OS1_S1 + 162) = prefactor_y * *(b + 40 * OS1_S1 + 118) -
                                       p_over_q * *(b + 64 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 40 * OS1_S1 + 83);
            *(b + 40 * OS1_S1 + 163) = prefactor_y * *(b + 40 * OS1_S1 + 119) -
                                       p_over_q * *(b + 64 * OS1_S1 + 119);
            *(b + 40 * OS1_S1 + 164) =
                prefactor_z * *(b + 40 * OS1_S1 + 119) -
                p_over_q * *(b + 65 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 22 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 40 * OS1_S1 + 83);
            *(b + 41 * OS1_S1 + 120) =
                prefactor_x * *(b + 41 * OS1_S1 + 84) -
                p_over_q * *(b + 62 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 41 * OS1_S1 + 56);
            *(b + 41 * OS1_S1 + 121) =
                prefactor_y * *(b + 41 * OS1_S1 + 84) -
                p_over_q * *(b + 66 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 84);
            *(b + 41 * OS1_S1 + 122) = prefactor_z * *(b + 41 * OS1_S1 + 84) -
                                       p_over_q * *(b + 67 * OS1_S1 + 84);
            *(b + 41 * OS1_S1 + 123) =
                prefactor_y * *(b + 41 * OS1_S1 + 85) -
                p_over_q * *(b + 66 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 85) +
                one_over_two_q * *(b + 41 * OS1_S1 + 56);
            *(b + 41 * OS1_S1 + 124) = prefactor_z * *(b + 41 * OS1_S1 + 85) -
                                       p_over_q * *(b + 67 * OS1_S1 + 85);
            *(b + 41 * OS1_S1 + 125) = prefactor_z * *(b + 41 * OS1_S1 + 86) -
                                       p_over_q * *(b + 67 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 56);
            *(b + 41 * OS1_S1 + 126) =
                prefactor_y * *(b + 41 * OS1_S1 + 87) -
                p_over_q * *(b + 66 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 57);
            *(b + 41 * OS1_S1 + 127) = prefactor_z * *(b + 41 * OS1_S1 + 87) -
                                       p_over_q * *(b + 67 * OS1_S1 + 87);
            *(b + 41 * OS1_S1 + 128) =
                prefactor_y * *(b + 41 * OS1_S1 + 89) -
                p_over_q * *(b + 66 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 89);
            *(b + 41 * OS1_S1 + 129) =
                prefactor_z * *(b + 41 * OS1_S1 + 89) -
                p_over_q * *(b + 67 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 58);
            *(b + 41 * OS1_S1 + 130) =
                prefactor_x * *(b + 41 * OS1_S1 + 94) -
                p_over_q * *(b + 62 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 66);
            *(b + 41 * OS1_S1 + 131) = prefactor_z * *(b + 41 * OS1_S1 + 90) -
                                       p_over_q * *(b + 67 * OS1_S1 + 90);
            *(b + 41 * OS1_S1 + 132) = prefactor_z * *(b + 41 * OS1_S1 + 91) -
                                       p_over_q * *(b + 67 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 59);
            *(b + 41 * OS1_S1 + 133) =
                prefactor_y * *(b + 41 * OS1_S1 + 93) -
                p_over_q * *(b + 66 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 93);
            *(b + 41 * OS1_S1 + 134) =
                prefactor_z * *(b + 41 * OS1_S1 + 93) -
                p_over_q * *(b + 67 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 61);
            *(b + 41 * OS1_S1 + 135) =
                prefactor_x * *(b + 41 * OS1_S1 + 99) -
                p_over_q * *(b + 62 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 71);
            *(b + 41 * OS1_S1 + 136) = prefactor_z * *(b + 41 * OS1_S1 + 94) -
                                       p_over_q * *(b + 67 * OS1_S1 + 94);
            *(b + 41 * OS1_S1 + 137) = prefactor_z * *(b + 41 * OS1_S1 + 95) -
                                       p_over_q * *(b + 67 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 62);
            *(b + 41 * OS1_S1 + 138) =
                prefactor_y * *(b + 41 * OS1_S1 + 97) -
                p_over_q * *(b + 66 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 97) +
                one_over_two_q * *(b + 41 * OS1_S1 + 65);
            *(b + 41 * OS1_S1 + 139) =
                prefactor_y * *(b + 41 * OS1_S1 + 98) -
                p_over_q * *(b + 66 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 98);
            *(b + 41 * OS1_S1 + 140) =
                prefactor_x * *(b + 41 * OS1_S1 + 104) -
                p_over_q * *(b + 62 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 76);
            *(b + 41 * OS1_S1 + 141) =
                prefactor_x * *(b + 41 * OS1_S1 + 105) -
                p_over_q * *(b + 62 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 105) +
                one_over_two_q * *(b + 41 * OS1_S1 + 77);
            *(b + 41 * OS1_S1 + 142) = prefactor_z * *(b + 41 * OS1_S1 + 99) -
                                       p_over_q * *(b + 67 * OS1_S1 + 99);
            *(b + 41 * OS1_S1 + 143) = prefactor_z * *(b + 41 * OS1_S1 + 100) -
                                       p_over_q * *(b + 67 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 66);
            *(b + 41 * OS1_S1 + 144) =
                prefactor_x * *(b + 41 * OS1_S1 + 108) -
                p_over_q * *(b + 62 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 108) +
                one_over_two_q * *(b + 41 * OS1_S1 + 80);
            *(b + 41 * OS1_S1 + 145) =
                prefactor_x * *(b + 41 * OS1_S1 + 109) -
                p_over_q * *(b + 62 * OS1_S1 + 109) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 109) +
                one_over_two_q * *(b + 41 * OS1_S1 + 81);
            *(b + 41 * OS1_S1 + 146) =
                prefactor_y * *(b + 41 * OS1_S1 + 104) -
                p_over_q * *(b + 66 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 104);
            *(b + 41 * OS1_S1 + 147) =
                prefactor_x * *(b + 41 * OS1_S1 + 111) -
                p_over_q * *(b + 62 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 111) +
                one_over_two_q * *(b + 41 * OS1_S1 + 83);
            *(b + 41 * OS1_S1 + 148) =
                prefactor_x * *(b + 41 * OS1_S1 + 112) -
                p_over_q * *(b + 62 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 112);
            *(b + 41 * OS1_S1 + 149) = prefactor_z * *(b + 41 * OS1_S1 + 105) -
                                       p_over_q * *(b + 67 * OS1_S1 + 105);
            *(b + 41 * OS1_S1 + 150) =
                prefactor_x * *(b + 41 * OS1_S1 + 114) -
                p_over_q * *(b + 62 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 114);
            *(b + 41 * OS1_S1 + 151) =
                prefactor_x * *(b + 41 * OS1_S1 + 115) -
                p_over_q * *(b + 62 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 115);
            *(b + 41 * OS1_S1 + 152) =
                prefactor_x * *(b + 41 * OS1_S1 + 116) -
                p_over_q * *(b + 62 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 116);
            *(b + 41 * OS1_S1 + 153) =
                prefactor_x * *(b + 41 * OS1_S1 + 117) -
                p_over_q * *(b + 62 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 117);
            *(b + 41 * OS1_S1 + 154) =
                prefactor_x * *(b + 41 * OS1_S1 + 118) -
                p_over_q * *(b + 62 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 118);
            *(b + 41 * OS1_S1 + 155) =
                prefactor_x * *(b + 41 * OS1_S1 + 119) -
                p_over_q * *(b + 62 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 26 * OS1_S1 + 119);
            *(b + 41 * OS1_S1 + 156) =
                prefactor_y * *(b + 41 * OS1_S1 + 112) -
                p_over_q * *(b + 66 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 41 * OS1_S1 + 77);
            *(b + 41 * OS1_S1 + 157) = prefactor_z * *(b + 41 * OS1_S1 + 112) -
                                       p_over_q * *(b + 67 * OS1_S1 + 112);
            *(b + 41 * OS1_S1 + 158) = prefactor_z * *(b + 41 * OS1_S1 + 113) -
                                       p_over_q * *(b + 67 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 41 * OS1_S1 + 77);
            *(b + 41 * OS1_S1 + 159) =
                prefactor_z * *(b + 41 * OS1_S1 + 114) -
                p_over_q * *(b + 67 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 78);
            *(b + 41 * OS1_S1 + 160) =
                prefactor_z * *(b + 41 * OS1_S1 + 115) -
                p_over_q * *(b + 67 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 41 * OS1_S1 + 79);
            *(b + 41 * OS1_S1 + 161) =
                prefactor_y * *(b + 41 * OS1_S1 + 117) -
                p_over_q * *(b + 66 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 41 * OS1_S1 + 82);
            *(b + 41 * OS1_S1 + 162) =
                prefactor_y * *(b + 41 * OS1_S1 + 118) -
                p_over_q * *(b + 66 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 118) +
                one_over_two_q * *(b + 41 * OS1_S1 + 83);
            *(b + 41 * OS1_S1 + 163) =
                prefactor_y * *(b + 41 * OS1_S1 + 119) -
                p_over_q * *(b + 66 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 23 * OS1_S1 + 119);
            *(b + 41 * OS1_S1 + 164) =
                prefactor_z * *(b + 41 * OS1_S1 + 119) -
                p_over_q * *(b + 67 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 41 * OS1_S1 + 83);
            *(b + 42 * OS1_S1 + 120) =
                prefactor_x * *(b + 42 * OS1_S1 + 84) -
                p_over_q * *(b + 63 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 42 * OS1_S1 + 56);
            *(b + 42 * OS1_S1 + 121) =
                prefactor_y * *(b + 42 * OS1_S1 + 84) -
                p_over_q * *(b + 67 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 84);
            *(b + 42 * OS1_S1 + 122) = prefactor_z * *(b + 42 * OS1_S1 + 84) -
                                       p_over_q * *(b + 68 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 84);
            *(b + 42 * OS1_S1 + 123) =
                prefactor_y * *(b + 42 * OS1_S1 + 85) -
                p_over_q * *(b + 67 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 85) +
                one_over_two_q * *(b + 42 * OS1_S1 + 56);
            *(b + 42 * OS1_S1 + 124) = prefactor_z * *(b + 42 * OS1_S1 + 85) -
                                       p_over_q * *(b + 68 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 85);
            *(b + 42 * OS1_S1 + 125) =
                prefactor_z * *(b + 42 * OS1_S1 + 86) -
                p_over_q * *(b + 68 * OS1_S1 + 86) +
                one_over_two_q * *(b + 23 * OS1_S1 + 86) +
                one_over_two_q * *(b + 42 * OS1_S1 + 56);
            *(b + 42 * OS1_S1 + 126) =
                prefactor_y * *(b + 42 * OS1_S1 + 87) -
                p_over_q * *(b + 67 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 57);
            *(b + 42 * OS1_S1 + 127) = prefactor_z * *(b + 42 * OS1_S1 + 87) -
                                       p_over_q * *(b + 68 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 87);
            *(b + 42 * OS1_S1 + 128) =
                prefactor_y * *(b + 42 * OS1_S1 + 89) -
                p_over_q * *(b + 67 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 89);
            *(b + 42 * OS1_S1 + 129) =
                prefactor_z * *(b + 42 * OS1_S1 + 89) -
                p_over_q * *(b + 68 * OS1_S1 + 89) +
                one_over_two_q * *(b + 23 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 58);
            *(b + 42 * OS1_S1 + 130) =
                prefactor_y * *(b + 42 * OS1_S1 + 90) -
                p_over_q * *(b + 67 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 59);
            *(b + 42 * OS1_S1 + 131) = prefactor_z * *(b + 42 * OS1_S1 + 90) -
                                       p_over_q * *(b + 68 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 90);
            *(b + 42 * OS1_S1 + 132) =
                prefactor_z * *(b + 42 * OS1_S1 + 91) -
                p_over_q * *(b + 68 * OS1_S1 + 91) +
                one_over_two_q * *(b + 23 * OS1_S1 + 91) +
                one_over_two_q * *(b + 42 * OS1_S1 + 59);
            *(b + 42 * OS1_S1 + 133) =
                prefactor_y * *(b + 42 * OS1_S1 + 93) -
                p_over_q * *(b + 67 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 93);
            *(b + 42 * OS1_S1 + 134) =
                prefactor_z * *(b + 42 * OS1_S1 + 93) -
                p_over_q * *(b + 68 * OS1_S1 + 93) +
                one_over_two_q * *(b + 23 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 61);
            *(b + 42 * OS1_S1 + 135) =
                prefactor_x * *(b + 42 * OS1_S1 + 99) -
                p_over_q * *(b + 63 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 71);
            *(b + 42 * OS1_S1 + 136) = prefactor_z * *(b + 42 * OS1_S1 + 94) -
                                       p_over_q * *(b + 68 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 94);
            *(b + 42 * OS1_S1 + 137) =
                prefactor_z * *(b + 42 * OS1_S1 + 95) -
                p_over_q * *(b + 68 * OS1_S1 + 95) +
                one_over_two_q * *(b + 23 * OS1_S1 + 95) +
                one_over_two_q * *(b + 42 * OS1_S1 + 62);
            *(b + 42 * OS1_S1 + 138) =
                prefactor_y * *(b + 42 * OS1_S1 + 97) -
                p_over_q * *(b + 67 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 97) +
                one_over_two_q * *(b + 42 * OS1_S1 + 65);
            *(b + 42 * OS1_S1 + 139) =
                prefactor_y * *(b + 42 * OS1_S1 + 98) -
                p_over_q * *(b + 67 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 98);
            *(b + 42 * OS1_S1 + 140) =
                prefactor_x * *(b + 42 * OS1_S1 + 104) -
                p_over_q * *(b + 63 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 76);
            *(b + 42 * OS1_S1 + 141) =
                prefactor_x * *(b + 42 * OS1_S1 + 105) -
                p_over_q * *(b + 63 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 105) +
                one_over_two_q * *(b + 42 * OS1_S1 + 77);
            *(b + 42 * OS1_S1 + 142) = prefactor_z * *(b + 42 * OS1_S1 + 99) -
                                       p_over_q * *(b + 68 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 23 * OS1_S1 + 99);
            *(b + 42 * OS1_S1 + 143) =
                prefactor_z * *(b + 42 * OS1_S1 + 100) -
                p_over_q * *(b + 68 * OS1_S1 + 100) +
                one_over_two_q * *(b + 23 * OS1_S1 + 100) +
                one_over_two_q * *(b + 42 * OS1_S1 + 66);
            *(b + 42 * OS1_S1 + 144) =
                prefactor_x * *(b + 42 * OS1_S1 + 108) -
                p_over_q * *(b + 63 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 108) +
                one_over_two_q * *(b + 42 * OS1_S1 + 80);
            *(b + 42 * OS1_S1 + 145) =
                prefactor_y * *(b + 42 * OS1_S1 + 103) -
                p_over_q * *(b + 67 * OS1_S1 + 103) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 103) +
                one_over_two_q * *(b + 42 * OS1_S1 + 70);
            *(b + 42 * OS1_S1 + 146) =
                prefactor_y * *(b + 42 * OS1_S1 + 104) -
                p_over_q * *(b + 67 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 104);
            *(b + 42 * OS1_S1 + 147) =
                prefactor_x * *(b + 42 * OS1_S1 + 111) -
                p_over_q * *(b + 63 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 111) +
                one_over_two_q * *(b + 42 * OS1_S1 + 83);
            *(b + 42 * OS1_S1 + 148) =
                prefactor_x * *(b + 42 * OS1_S1 + 112) -
                p_over_q * *(b + 63 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 112);
            *(b + 42 * OS1_S1 + 149) =
                prefactor_z * *(b + 42 * OS1_S1 + 105) -
                p_over_q * *(b + 68 * OS1_S1 + 105) +
                one_over_two_q * *(b + 23 * OS1_S1 + 105);
            *(b + 42 * OS1_S1 + 150) =
                prefactor_x * *(b + 42 * OS1_S1 + 114) -
                p_over_q * *(b + 63 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 114);
            *(b + 42 * OS1_S1 + 151) =
                prefactor_x * *(b + 42 * OS1_S1 + 115) -
                p_over_q * *(b + 63 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 115);
            *(b + 42 * OS1_S1 + 152) =
                prefactor_x * *(b + 42 * OS1_S1 + 116) -
                p_over_q * *(b + 63 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 116);
            *(b + 42 * OS1_S1 + 153) =
                prefactor_x * *(b + 42 * OS1_S1 + 117) -
                p_over_q * *(b + 63 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 117);
            *(b + 42 * OS1_S1 + 154) =
                prefactor_y * *(b + 42 * OS1_S1 + 111) -
                p_over_q * *(b + 67 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 111);
            *(b + 42 * OS1_S1 + 155) =
                prefactor_x * *(b + 42 * OS1_S1 + 119) -
                p_over_q * *(b + 63 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 119);
            *(b + 42 * OS1_S1 + 156) =
                prefactor_y * *(b + 42 * OS1_S1 + 112) -
                p_over_q * *(b + 67 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 42 * OS1_S1 + 77);
            *(b + 42 * OS1_S1 + 157) =
                prefactor_z * *(b + 42 * OS1_S1 + 112) -
                p_over_q * *(b + 68 * OS1_S1 + 112) +
                one_over_two_q * *(b + 23 * OS1_S1 + 112);
            *(b + 42 * OS1_S1 + 158) =
                prefactor_z * *(b + 42 * OS1_S1 + 113) -
                p_over_q * *(b + 68 * OS1_S1 + 113) +
                one_over_two_q * *(b + 23 * OS1_S1 + 113) +
                one_over_two_q * *(b + 42 * OS1_S1 + 77);
            *(b + 42 * OS1_S1 + 159) =
                prefactor_z * *(b + 42 * OS1_S1 + 114) -
                p_over_q * *(b + 68 * OS1_S1 + 114) +
                one_over_two_q * *(b + 23 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 78);
            *(b + 42 * OS1_S1 + 160) =
                prefactor_z * *(b + 42 * OS1_S1 + 115) -
                p_over_q * *(b + 68 * OS1_S1 + 115) +
                one_over_two_q * *(b + 23 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 42 * OS1_S1 + 79);
            *(b + 42 * OS1_S1 + 161) =
                prefactor_y * *(b + 42 * OS1_S1 + 117) -
                p_over_q * *(b + 67 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 42 * OS1_S1 + 82);
            *(b + 42 * OS1_S1 + 162) =
                prefactor_y * *(b + 42 * OS1_S1 + 118) -
                p_over_q * *(b + 67 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 118) +
                one_over_two_q * *(b + 42 * OS1_S1 + 83);
            *(b + 42 * OS1_S1 + 163) =
                prefactor_y * *(b + 42 * OS1_S1 + 119) -
                p_over_q * *(b + 67 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 119);
            *(b + 42 * OS1_S1 + 164) =
                prefactor_z * *(b + 42 * OS1_S1 + 119) -
                p_over_q * *(b + 68 * OS1_S1 + 119) +
                one_over_two_q * *(b + 23 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 42 * OS1_S1 + 83);
            *(b + 43 * OS1_S1 + 120) =
                prefactor_x * *(b + 43 * OS1_S1 + 84) -
                p_over_q * *(b + 64 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 43 * OS1_S1 + 56);
            *(b + 43 * OS1_S1 + 121) = prefactor_y * *(b + 43 * OS1_S1 + 84) -
                                       p_over_q * *(b + 68 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 84);
            *(b + 43 * OS1_S1 + 122) =
                prefactor_z * *(b + 43 * OS1_S1 + 84) -
                p_over_q * *(b + 69 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 84);
            *(b + 43 * OS1_S1 + 123) =
                prefactor_y * *(b + 43 * OS1_S1 + 85) -
                p_over_q * *(b + 68 * OS1_S1 + 85) +
                one_over_two_q * *(b + 25 * OS1_S1 + 85) +
                one_over_two_q * *(b + 43 * OS1_S1 + 56);
            *(b + 43 * OS1_S1 + 124) = prefactor_y * *(b + 43 * OS1_S1 + 86) -
                                       p_over_q * *(b + 68 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 86);
            *(b + 43 * OS1_S1 + 125) =
                prefactor_z * *(b + 43 * OS1_S1 + 86) -
                p_over_q * *(b + 69 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 86) +
                one_over_two_q * *(b + 43 * OS1_S1 + 56);
            *(b + 43 * OS1_S1 + 126) =
                prefactor_y * *(b + 43 * OS1_S1 + 87) -
                p_over_q * *(b + 68 * OS1_S1 + 87) +
                one_over_two_q * *(b + 25 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 57);
            *(b + 43 * OS1_S1 + 127) =
                prefactor_z * *(b + 43 * OS1_S1 + 87) -
                p_over_q * *(b + 69 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 87);
            *(b + 43 * OS1_S1 + 128) = prefactor_y * *(b + 43 * OS1_S1 + 89) -
                                       p_over_q * *(b + 68 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 89);
            *(b + 43 * OS1_S1 + 129) =
                prefactor_z * *(b + 43 * OS1_S1 + 89) -
                p_over_q * *(b + 69 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 58);
            *(b + 43 * OS1_S1 + 130) =
                prefactor_y * *(b + 43 * OS1_S1 + 90) -
                p_over_q * *(b + 68 * OS1_S1 + 90) +
                one_over_two_q * *(b + 25 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 59);
            *(b + 43 * OS1_S1 + 131) =
                prefactor_z * *(b + 43 * OS1_S1 + 90) -
                p_over_q * *(b + 69 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 90);
            *(b + 43 * OS1_S1 + 132) =
                prefactor_y * *(b + 43 * OS1_S1 + 92) -
                p_over_q * *(b + 68 * OS1_S1 + 92) +
                one_over_two_q * *(b + 25 * OS1_S1 + 92) +
                one_over_two_q * *(b + 43 * OS1_S1 + 61);
            *(b + 43 * OS1_S1 + 133) = prefactor_y * *(b + 43 * OS1_S1 + 93) -
                                       p_over_q * *(b + 68 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 93);
            *(b + 43 * OS1_S1 + 134) =
                prefactor_z * *(b + 43 * OS1_S1 + 93) -
                p_over_q * *(b + 69 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 61);
            *(b + 43 * OS1_S1 + 135) =
                prefactor_x * *(b + 43 * OS1_S1 + 99) -
                p_over_q * *(b + 64 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 71);
            *(b + 43 * OS1_S1 + 136) =
                prefactor_z * *(b + 43 * OS1_S1 + 94) -
                p_over_q * *(b + 69 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 94);
            *(b + 43 * OS1_S1 + 137) =
                prefactor_z * *(b + 43 * OS1_S1 + 95) -
                p_over_q * *(b + 69 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 95) +
                one_over_two_q * *(b + 43 * OS1_S1 + 62);
            *(b + 43 * OS1_S1 + 138) =
                prefactor_y * *(b + 43 * OS1_S1 + 97) -
                p_over_q * *(b + 68 * OS1_S1 + 97) +
                one_over_two_q * *(b + 25 * OS1_S1 + 97) +
                one_over_two_q * *(b + 43 * OS1_S1 + 65);
            *(b + 43 * OS1_S1 + 139) = prefactor_y * *(b + 43 * OS1_S1 + 98) -
                                       p_over_q * *(b + 68 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 25 * OS1_S1 + 98);
            *(b + 43 * OS1_S1 + 140) =
                prefactor_x * *(b + 43 * OS1_S1 + 104) -
                p_over_q * *(b + 64 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 76);
            *(b + 43 * OS1_S1 + 141) =
                prefactor_x * *(b + 43 * OS1_S1 + 105) -
                p_over_q * *(b + 64 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 105) +
                one_over_two_q * *(b + 43 * OS1_S1 + 77);
            *(b + 43 * OS1_S1 + 142) =
                prefactor_z * *(b + 43 * OS1_S1 + 99) -
                p_over_q * *(b + 69 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 99);
            *(b + 43 * OS1_S1 + 143) =
                prefactor_z * *(b + 43 * OS1_S1 + 100) -
                p_over_q * *(b + 69 * OS1_S1 + 100) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 100) +
                one_over_two_q * *(b + 43 * OS1_S1 + 66);
            *(b + 43 * OS1_S1 + 144) =
                prefactor_x * *(b + 43 * OS1_S1 + 108) -
                p_over_q * *(b + 64 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 108) +
                one_over_two_q * *(b + 43 * OS1_S1 + 80);
            *(b + 43 * OS1_S1 + 145) =
                prefactor_y * *(b + 43 * OS1_S1 + 103) -
                p_over_q * *(b + 68 * OS1_S1 + 103) +
                one_over_two_q * *(b + 25 * OS1_S1 + 103) +
                one_over_two_q * *(b + 43 * OS1_S1 + 70);
            *(b + 43 * OS1_S1 + 146) =
                prefactor_y * *(b + 43 * OS1_S1 + 104) -
                p_over_q * *(b + 68 * OS1_S1 + 104) +
                one_over_two_q * *(b + 25 * OS1_S1 + 104);
            *(b + 43 * OS1_S1 + 147) =
                prefactor_x * *(b + 43 * OS1_S1 + 111) -
                p_over_q * *(b + 64 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 111) +
                one_over_two_q * *(b + 43 * OS1_S1 + 83);
            *(b + 43 * OS1_S1 + 148) =
                prefactor_x * *(b + 43 * OS1_S1 + 112) -
                p_over_q * *(b + 64 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 112);
            *(b + 43 * OS1_S1 + 149) =
                prefactor_z * *(b + 43 * OS1_S1 + 105) -
                p_over_q * *(b + 69 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 105);
            *(b + 43 * OS1_S1 + 150) =
                prefactor_x * *(b + 43 * OS1_S1 + 114) -
                p_over_q * *(b + 64 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 114);
            *(b + 43 * OS1_S1 + 151) =
                prefactor_x * *(b + 43 * OS1_S1 + 115) -
                p_over_q * *(b + 64 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 115);
            *(b + 43 * OS1_S1 + 152) =
                prefactor_x * *(b + 43 * OS1_S1 + 116) -
                p_over_q * *(b + 64 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 116);
            *(b + 43 * OS1_S1 + 153) =
                prefactor_x * *(b + 43 * OS1_S1 + 117) -
                p_over_q * *(b + 64 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 117);
            *(b + 43 * OS1_S1 + 154) =
                prefactor_y * *(b + 43 * OS1_S1 + 111) -
                p_over_q * *(b + 68 * OS1_S1 + 111) +
                one_over_two_q * *(b + 25 * OS1_S1 + 111);
            *(b + 43 * OS1_S1 + 155) =
                prefactor_x * *(b + 43 * OS1_S1 + 119) -
                p_over_q * *(b + 64 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 119);
            *(b + 43 * OS1_S1 + 156) =
                prefactor_y * *(b + 43 * OS1_S1 + 112) -
                p_over_q * *(b + 68 * OS1_S1 + 112) +
                one_over_two_q * *(b + 25 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 43 * OS1_S1 + 77);
            *(b + 43 * OS1_S1 + 157) =
                prefactor_z * *(b + 43 * OS1_S1 + 112) -
                p_over_q * *(b + 69 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 112);
            *(b + 43 * OS1_S1 + 158) =
                prefactor_z * *(b + 43 * OS1_S1 + 113) -
                p_over_q * *(b + 69 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 113) +
                one_over_two_q * *(b + 43 * OS1_S1 + 77);
            *(b + 43 * OS1_S1 + 159) =
                prefactor_z * *(b + 43 * OS1_S1 + 114) -
                p_over_q * *(b + 69 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 78);
            *(b + 43 * OS1_S1 + 160) =
                prefactor_y * *(b + 43 * OS1_S1 + 116) -
                p_over_q * *(b + 68 * OS1_S1 + 116) +
                one_over_two_q * *(b + 25 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 43 * OS1_S1 + 81);
            *(b + 43 * OS1_S1 + 161) =
                prefactor_y * *(b + 43 * OS1_S1 + 117) -
                p_over_q * *(b + 68 * OS1_S1 + 117) +
                one_over_two_q * *(b + 25 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 43 * OS1_S1 + 82);
            *(b + 43 * OS1_S1 + 162) =
                prefactor_y * *(b + 43 * OS1_S1 + 118) -
                p_over_q * *(b + 68 * OS1_S1 + 118) +
                one_over_two_q * *(b + 25 * OS1_S1 + 118) +
                one_over_two_q * *(b + 43 * OS1_S1 + 83);
            *(b + 43 * OS1_S1 + 163) =
                prefactor_y * *(b + 43 * OS1_S1 + 119) -
                p_over_q * *(b + 68 * OS1_S1 + 119) +
                one_over_two_q * *(b + 25 * OS1_S1 + 119);
            *(b + 43 * OS1_S1 + 164) =
                prefactor_z * *(b + 43 * OS1_S1 + 119) -
                p_over_q * *(b + 69 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 24 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 43 * OS1_S1 + 83);
            *(b + 44 * OS1_S1 + 120) =
                prefactor_x * *(b + 44 * OS1_S1 + 84) -
                p_over_q * *(b + 65 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 44 * OS1_S1 + 56);
            *(b + 44 * OS1_S1 + 121) = prefactor_y * *(b + 44 * OS1_S1 + 84) -
                                       p_over_q * *(b + 69 * OS1_S1 + 84);
            *(b + 44 * OS1_S1 + 122) =
                prefactor_z * *(b + 44 * OS1_S1 + 84) -
                p_over_q * *(b + 70 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 84);
            *(b + 44 * OS1_S1 + 123) = prefactor_y * *(b + 44 * OS1_S1 + 85) -
                                       p_over_q * *(b + 69 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 56);
            *(b + 44 * OS1_S1 + 124) = prefactor_y * *(b + 44 * OS1_S1 + 86) -
                                       p_over_q * *(b + 69 * OS1_S1 + 86);
            *(b + 44 * OS1_S1 + 125) =
                prefactor_z * *(b + 44 * OS1_S1 + 86) -
                p_over_q * *(b + 70 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 86) +
                one_over_two_q * *(b + 44 * OS1_S1 + 56);
            *(b + 44 * OS1_S1 + 126) =
                prefactor_y * *(b + 44 * OS1_S1 + 87) -
                p_over_q * *(b + 69 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 57);
            *(b + 44 * OS1_S1 + 127) =
                prefactor_z * *(b + 44 * OS1_S1 + 87) -
                p_over_q * *(b + 70 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 87);
            *(b + 44 * OS1_S1 + 128) = prefactor_y * *(b + 44 * OS1_S1 + 89) -
                                       p_over_q * *(b + 69 * OS1_S1 + 89);
            *(b + 44 * OS1_S1 + 129) =
                prefactor_z * *(b + 44 * OS1_S1 + 89) -
                p_over_q * *(b + 70 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 58);
            *(b + 44 * OS1_S1 + 130) =
                prefactor_y * *(b + 44 * OS1_S1 + 90) -
                p_over_q * *(b + 69 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 59);
            *(b + 44 * OS1_S1 + 131) =
                prefactor_z * *(b + 44 * OS1_S1 + 90) -
                p_over_q * *(b + 70 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 90);
            *(b + 44 * OS1_S1 + 132) = prefactor_y * *(b + 44 * OS1_S1 + 92) -
                                       p_over_q * *(b + 69 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 61);
            *(b + 44 * OS1_S1 + 133) = prefactor_y * *(b + 44 * OS1_S1 + 93) -
                                       p_over_q * *(b + 69 * OS1_S1 + 93);
            *(b + 44 * OS1_S1 + 134) =
                prefactor_x * *(b + 44 * OS1_S1 + 98) -
                p_over_q * *(b + 65 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 70);
            *(b + 44 * OS1_S1 + 135) =
                prefactor_x * *(b + 44 * OS1_S1 + 99) -
                p_over_q * *(b + 65 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 71);
            *(b + 44 * OS1_S1 + 136) =
                prefactor_z * *(b + 44 * OS1_S1 + 94) -
                p_over_q * *(b + 70 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 94);
            *(b + 44 * OS1_S1 + 137) =
                prefactor_z * *(b + 44 * OS1_S1 + 95) -
                p_over_q * *(b + 70 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 95) +
                one_over_two_q * *(b + 44 * OS1_S1 + 62);
            *(b + 44 * OS1_S1 + 138) = prefactor_y * *(b + 44 * OS1_S1 + 97) -
                                       p_over_q * *(b + 69 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 65);
            *(b + 44 * OS1_S1 + 139) = prefactor_y * *(b + 44 * OS1_S1 + 98) -
                                       p_over_q * *(b + 69 * OS1_S1 + 98);
            *(b + 44 * OS1_S1 + 140) =
                prefactor_x * *(b + 44 * OS1_S1 + 104) -
                p_over_q * *(b + 65 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 76);
            *(b + 44 * OS1_S1 + 141) =
                prefactor_x * *(b + 44 * OS1_S1 + 105) -
                p_over_q * *(b + 65 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 105) +
                one_over_two_q * *(b + 44 * OS1_S1 + 77);
            *(b + 44 * OS1_S1 + 142) =
                prefactor_z * *(b + 44 * OS1_S1 + 99) -
                p_over_q * *(b + 70 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 99);
            *(b + 44 * OS1_S1 + 143) =
                prefactor_x * *(b + 44 * OS1_S1 + 107) -
                p_over_q * *(b + 65 * OS1_S1 + 107) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 107) +
                one_over_two_q * *(b + 44 * OS1_S1 + 79);
            *(b + 44 * OS1_S1 + 144) =
                prefactor_x * *(b + 44 * OS1_S1 + 108) -
                p_over_q * *(b + 65 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 108) +
                one_over_two_q * *(b + 44 * OS1_S1 + 80);
            *(b + 44 * OS1_S1 + 145) = prefactor_y * *(b + 44 * OS1_S1 + 103) -
                                       p_over_q * *(b + 69 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 70);
            *(b + 44 * OS1_S1 + 146) = prefactor_y * *(b + 44 * OS1_S1 + 104) -
                                       p_over_q * *(b + 69 * OS1_S1 + 104);
            *(b + 44 * OS1_S1 + 147) =
                prefactor_x * *(b + 44 * OS1_S1 + 111) -
                p_over_q * *(b + 65 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 111) +
                one_over_two_q * *(b + 44 * OS1_S1 + 83);
            *(b + 44 * OS1_S1 + 148) =
                prefactor_x * *(b + 44 * OS1_S1 + 112) -
                p_over_q * *(b + 65 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 112);
            *(b + 44 * OS1_S1 + 149) =
                prefactor_x * *(b + 44 * OS1_S1 + 113) -
                p_over_q * *(b + 65 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 113);
            *(b + 44 * OS1_S1 + 150) =
                prefactor_x * *(b + 44 * OS1_S1 + 114) -
                p_over_q * *(b + 65 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 114);
            *(b + 44 * OS1_S1 + 151) =
                prefactor_x * *(b + 44 * OS1_S1 + 115) -
                p_over_q * *(b + 65 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 115);
            *(b + 44 * OS1_S1 + 152) =
                prefactor_x * *(b + 44 * OS1_S1 + 116) -
                p_over_q * *(b + 65 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 116);
            *(b + 44 * OS1_S1 + 153) =
                prefactor_x * *(b + 44 * OS1_S1 + 117) -
                p_over_q * *(b + 65 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 117);
            *(b + 44 * OS1_S1 + 154) = prefactor_y * *(b + 44 * OS1_S1 + 111) -
                                       p_over_q * *(b + 69 * OS1_S1 + 111);
            *(b + 44 * OS1_S1 + 155) =
                prefactor_x * *(b + 44 * OS1_S1 + 119) -
                p_over_q * *(b + 65 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 29 * OS1_S1 + 119);
            *(b + 44 * OS1_S1 + 156) =
                prefactor_y * *(b + 44 * OS1_S1 + 112) -
                p_over_q * *(b + 69 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 44 * OS1_S1 + 77);
            *(b + 44 * OS1_S1 + 157) =
                prefactor_z * *(b + 44 * OS1_S1 + 112) -
                p_over_q * *(b + 70 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 112);
            *(b + 44 * OS1_S1 + 158) =
                prefactor_z * *(b + 44 * OS1_S1 + 113) -
                p_over_q * *(b + 70 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 113) +
                one_over_two_q * *(b + 44 * OS1_S1 + 77);
            *(b + 44 * OS1_S1 + 159) =
                prefactor_z * *(b + 44 * OS1_S1 + 114) -
                p_over_q * *(b + 70 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 78);
            *(b + 44 * OS1_S1 + 160) =
                prefactor_y * *(b + 44 * OS1_S1 + 116) -
                p_over_q * *(b + 69 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 44 * OS1_S1 + 81);
            *(b + 44 * OS1_S1 + 161) =
                prefactor_y * *(b + 44 * OS1_S1 + 117) -
                p_over_q * *(b + 69 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 44 * OS1_S1 + 82);
            *(b + 44 * OS1_S1 + 162) = prefactor_y * *(b + 44 * OS1_S1 + 118) -
                                       p_over_q * *(b + 69 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 44 * OS1_S1 + 83);
            *(b + 44 * OS1_S1 + 163) = prefactor_y * *(b + 44 * OS1_S1 + 119) -
                                       p_over_q * *(b + 69 * OS1_S1 + 119);
            *(b + 44 * OS1_S1 + 164) =
                prefactor_z * *(b + 44 * OS1_S1 + 119) -
                p_over_q * *(b + 70 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 25 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 44 * OS1_S1 + 83);
            *(b + 45 * OS1_S1 + 120) =
                prefactor_x * *(b + 45 * OS1_S1 + 84) -
                p_over_q * *(b + 66 * OS1_S1 + 84) +
                one_over_two_q * *(b + 30 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 45 * OS1_S1 + 56);
            *(b + 45 * OS1_S1 + 121) =
                prefactor_y * *(b + 45 * OS1_S1 + 84) -
                p_over_q * *(b + 71 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 84);
            *(b + 45 * OS1_S1 + 122) = prefactor_z * *(b + 45 * OS1_S1 + 84) -
                                       p_over_q * *(b + 72 * OS1_S1 + 84);
            *(b + 45 * OS1_S1 + 123) =
                prefactor_y * *(b + 45 * OS1_S1 + 85) -
                p_over_q * *(b + 71 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 85) +
                one_over_two_q * *(b + 45 * OS1_S1 + 56);
            *(b + 45 * OS1_S1 + 124) = prefactor_z * *(b + 45 * OS1_S1 + 85) -
                                       p_over_q * *(b + 72 * OS1_S1 + 85);
            *(b + 45 * OS1_S1 + 125) = prefactor_z * *(b + 45 * OS1_S1 + 86) -
                                       p_over_q * *(b + 72 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 56);
            *(b + 45 * OS1_S1 + 126) =
                prefactor_y * *(b + 45 * OS1_S1 + 87) -
                p_over_q * *(b + 71 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 57);
            *(b + 45 * OS1_S1 + 127) = prefactor_z * *(b + 45 * OS1_S1 + 87) -
                                       p_over_q * *(b + 72 * OS1_S1 + 87);
            *(b + 45 * OS1_S1 + 128) =
                prefactor_y * *(b + 45 * OS1_S1 + 89) -
                p_over_q * *(b + 71 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 89);
            *(b + 45 * OS1_S1 + 129) =
                prefactor_z * *(b + 45 * OS1_S1 + 89) -
                p_over_q * *(b + 72 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 58);
            *(b + 45 * OS1_S1 + 130) =
                prefactor_x * *(b + 45 * OS1_S1 + 94) -
                p_over_q * *(b + 66 * OS1_S1 + 94) +
                one_over_two_q * *(b + 30 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 45 * OS1_S1 + 66);
            *(b + 45 * OS1_S1 + 131) = prefactor_z * *(b + 45 * OS1_S1 + 90) -
                                       p_over_q * *(b + 72 * OS1_S1 + 90);
            *(b + 45 * OS1_S1 + 132) = prefactor_z * *(b + 45 * OS1_S1 + 91) -
                                       p_over_q * *(b + 72 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 59);
            *(b + 45 * OS1_S1 + 133) =
                prefactor_y * *(b + 45 * OS1_S1 + 93) -
                p_over_q * *(b + 71 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 93);
            *(b + 45 * OS1_S1 + 134) =
                prefactor_z * *(b + 45 * OS1_S1 + 93) -
                p_over_q * *(b + 72 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 45 * OS1_S1 + 61);
            *(b + 45 * OS1_S1 + 135) =
                prefactor_x * *(b + 45 * OS1_S1 + 99) -
                p_over_q * *(b + 66 * OS1_S1 + 99) +
                one_over_two_q * *(b + 30 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 71);
            *(b + 45 * OS1_S1 + 136) = prefactor_z * *(b + 45 * OS1_S1 + 94) -
                                       p_over_q * *(b + 72 * OS1_S1 + 94);
            *(b + 45 * OS1_S1 + 137) = prefactor_z * *(b + 45 * OS1_S1 + 95) -
                                       p_over_q * *(b + 72 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 62);
            *(b + 45 * OS1_S1 + 138) =
                prefactor_y * *(b + 45 * OS1_S1 + 97) -
                p_over_q * *(b + 71 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 97) +
                one_over_two_q * *(b + 45 * OS1_S1 + 65);
            *(b + 45 * OS1_S1 + 139) =
                prefactor_y * *(b + 45 * OS1_S1 + 98) -
                p_over_q * *(b + 71 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 98);
            *(b + 45 * OS1_S1 + 140) =
                prefactor_x * *(b + 45 * OS1_S1 + 104) -
                p_over_q * *(b + 66 * OS1_S1 + 104) +
                one_over_two_q * *(b + 30 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 76);
            *(b + 45 * OS1_S1 + 141) =
                prefactor_x * *(b + 45 * OS1_S1 + 105) -
                p_over_q * *(b + 66 * OS1_S1 + 105) +
                one_over_two_q * *(b + 30 * OS1_S1 + 105) +
                one_over_two_q * *(b + 45 * OS1_S1 + 77);
            *(b + 45 * OS1_S1 + 142) = prefactor_z * *(b + 45 * OS1_S1 + 99) -
                                       p_over_q * *(b + 72 * OS1_S1 + 99);
            *(b + 45 * OS1_S1 + 143) = prefactor_z * *(b + 45 * OS1_S1 + 100) -
                                       p_over_q * *(b + 72 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 66);
            *(b + 45 * OS1_S1 + 144) =
                prefactor_x * *(b + 45 * OS1_S1 + 108) -
                p_over_q * *(b + 66 * OS1_S1 + 108) +
                one_over_two_q * *(b + 30 * OS1_S1 + 108) +
                one_over_two_q * *(b + 45 * OS1_S1 + 80);
            *(b + 45 * OS1_S1 + 145) =
                prefactor_x * *(b + 45 * OS1_S1 + 109) -
                p_over_q * *(b + 66 * OS1_S1 + 109) +
                one_over_two_q * *(b + 30 * OS1_S1 + 109) +
                one_over_two_q * *(b + 45 * OS1_S1 + 81);
            *(b + 45 * OS1_S1 + 146) =
                prefactor_y * *(b + 45 * OS1_S1 + 104) -
                p_over_q * *(b + 71 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 104);
            *(b + 45 * OS1_S1 + 147) =
                prefactor_x * *(b + 45 * OS1_S1 + 111) -
                p_over_q * *(b + 66 * OS1_S1 + 111) +
                one_over_two_q * *(b + 30 * OS1_S1 + 111) +
                one_over_two_q * *(b + 45 * OS1_S1 + 83);
            *(b + 45 * OS1_S1 + 148) =
                prefactor_x * *(b + 45 * OS1_S1 + 112) -
                p_over_q * *(b + 66 * OS1_S1 + 112) +
                one_over_two_q * *(b + 30 * OS1_S1 + 112);
            *(b + 45 * OS1_S1 + 149) = prefactor_z * *(b + 45 * OS1_S1 + 105) -
                                       p_over_q * *(b + 72 * OS1_S1 + 105);
            *(b + 45 * OS1_S1 + 150) =
                prefactor_x * *(b + 45 * OS1_S1 + 114) -
                p_over_q * *(b + 66 * OS1_S1 + 114) +
                one_over_two_q * *(b + 30 * OS1_S1 + 114);
            *(b + 45 * OS1_S1 + 151) =
                prefactor_x * *(b + 45 * OS1_S1 + 115) -
                p_over_q * *(b + 66 * OS1_S1 + 115) +
                one_over_two_q * *(b + 30 * OS1_S1 + 115);
            *(b + 45 * OS1_S1 + 152) =
                prefactor_x * *(b + 45 * OS1_S1 + 116) -
                p_over_q * *(b + 66 * OS1_S1 + 116) +
                one_over_two_q * *(b + 30 * OS1_S1 + 116);
            *(b + 45 * OS1_S1 + 153) =
                prefactor_x * *(b + 45 * OS1_S1 + 117) -
                p_over_q * *(b + 66 * OS1_S1 + 117) +
                one_over_two_q * *(b + 30 * OS1_S1 + 117);
            *(b + 45 * OS1_S1 + 154) =
                prefactor_x * *(b + 45 * OS1_S1 + 118) -
                p_over_q * *(b + 66 * OS1_S1 + 118) +
                one_over_two_q * *(b + 30 * OS1_S1 + 118);
            *(b + 45 * OS1_S1 + 155) =
                prefactor_x * *(b + 45 * OS1_S1 + 119) -
                p_over_q * *(b + 66 * OS1_S1 + 119) +
                one_over_two_q * *(b + 30 * OS1_S1 + 119);
            *(b + 45 * OS1_S1 + 156) =
                prefactor_y * *(b + 45 * OS1_S1 + 112) -
                p_over_q * *(b + 71 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 45 * OS1_S1 + 77);
            *(b + 45 * OS1_S1 + 157) = prefactor_z * *(b + 45 * OS1_S1 + 112) -
                                       p_over_q * *(b + 72 * OS1_S1 + 112);
            *(b + 45 * OS1_S1 + 158) = prefactor_z * *(b + 45 * OS1_S1 + 113) -
                                       p_over_q * *(b + 72 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 45 * OS1_S1 + 77);
            *(b + 45 * OS1_S1 + 159) =
                prefactor_z * *(b + 45 * OS1_S1 + 114) -
                p_over_q * *(b + 72 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 78);
            *(b + 45 * OS1_S1 + 160) =
                prefactor_z * *(b + 45 * OS1_S1 + 115) -
                p_over_q * *(b + 72 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 45 * OS1_S1 + 79);
            *(b + 45 * OS1_S1 + 161) =
                prefactor_y * *(b + 45 * OS1_S1 + 117) -
                p_over_q * *(b + 71 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 45 * OS1_S1 + 82);
            *(b + 45 * OS1_S1 + 162) =
                prefactor_y * *(b + 45 * OS1_S1 + 118) -
                p_over_q * *(b + 71 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 118) +
                one_over_two_q * *(b + 45 * OS1_S1 + 83);
            *(b + 45 * OS1_S1 + 163) =
                prefactor_y * *(b + 45 * OS1_S1 + 119) -
                p_over_q * *(b + 71 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 26 * OS1_S1 + 119);
            *(b + 45 * OS1_S1 + 164) =
                prefactor_z * *(b + 45 * OS1_S1 + 119) -
                p_over_q * *(b + 72 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 45 * OS1_S1 + 83);
            *(b + 46 * OS1_S1 + 120) =
                prefactor_x * *(b + 46 * OS1_S1 + 84) -
                p_over_q * *(b + 67 * OS1_S1 + 84) +
                one_over_two_q * *(b + 31 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 46 * OS1_S1 + 56);
            *(b + 46 * OS1_S1 + 121) =
                prefactor_y * *(b + 46 * OS1_S1 + 84) -
                p_over_q * *(b + 72 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 84);
            *(b + 46 * OS1_S1 + 122) = prefactor_z * *(b + 46 * OS1_S1 + 84) -
                                       p_over_q * *(b + 73 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 84);
            *(b + 46 * OS1_S1 + 123) =
                prefactor_y * *(b + 46 * OS1_S1 + 85) -
                p_over_q * *(b + 72 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 85) +
                one_over_two_q * *(b + 46 * OS1_S1 + 56);
            *(b + 46 * OS1_S1 + 124) = prefactor_z * *(b + 46 * OS1_S1 + 85) -
                                       p_over_q * *(b + 73 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 85);
            *(b + 46 * OS1_S1 + 125) =
                prefactor_z * *(b + 46 * OS1_S1 + 86) -
                p_over_q * *(b + 73 * OS1_S1 + 86) +
                one_over_two_q * *(b + 26 * OS1_S1 + 86) +
                one_over_two_q * *(b + 46 * OS1_S1 + 56);
            *(b + 46 * OS1_S1 + 126) =
                prefactor_y * *(b + 46 * OS1_S1 + 87) -
                p_over_q * *(b + 72 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 57);
            *(b + 46 * OS1_S1 + 127) = prefactor_z * *(b + 46 * OS1_S1 + 87) -
                                       p_over_q * *(b + 73 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 87);
            *(b + 46 * OS1_S1 + 128) =
                prefactor_y * *(b + 46 * OS1_S1 + 89) -
                p_over_q * *(b + 72 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 89);
            *(b + 46 * OS1_S1 + 129) =
                prefactor_z * *(b + 46 * OS1_S1 + 89) -
                p_over_q * *(b + 73 * OS1_S1 + 89) +
                one_over_two_q * *(b + 26 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 58);
            *(b + 46 * OS1_S1 + 130) =
                prefactor_x * *(b + 46 * OS1_S1 + 94) -
                p_over_q * *(b + 67 * OS1_S1 + 94) +
                one_over_two_q * *(b + 31 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 46 * OS1_S1 + 66);
            *(b + 46 * OS1_S1 + 131) = prefactor_z * *(b + 46 * OS1_S1 + 90) -
                                       p_over_q * *(b + 73 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 90);
            *(b + 46 * OS1_S1 + 132) =
                prefactor_z * *(b + 46 * OS1_S1 + 91) -
                p_over_q * *(b + 73 * OS1_S1 + 91) +
                one_over_two_q * *(b + 26 * OS1_S1 + 91) +
                one_over_two_q * *(b + 46 * OS1_S1 + 59);
            *(b + 46 * OS1_S1 + 133) =
                prefactor_y * *(b + 46 * OS1_S1 + 93) -
                p_over_q * *(b + 72 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 93);
            *(b + 46 * OS1_S1 + 134) =
                prefactor_z * *(b + 46 * OS1_S1 + 93) -
                p_over_q * *(b + 73 * OS1_S1 + 93) +
                one_over_two_q * *(b + 26 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 46 * OS1_S1 + 61);
            *(b + 46 * OS1_S1 + 135) =
                prefactor_x * *(b + 46 * OS1_S1 + 99) -
                p_over_q * *(b + 67 * OS1_S1 + 99) +
                one_over_two_q * *(b + 31 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 71);
            *(b + 46 * OS1_S1 + 136) = prefactor_z * *(b + 46 * OS1_S1 + 94) -
                                       p_over_q * *(b + 73 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 94);
            *(b + 46 * OS1_S1 + 137) =
                prefactor_z * *(b + 46 * OS1_S1 + 95) -
                p_over_q * *(b + 73 * OS1_S1 + 95) +
                one_over_two_q * *(b + 26 * OS1_S1 + 95) +
                one_over_two_q * *(b + 46 * OS1_S1 + 62);
            *(b + 46 * OS1_S1 + 138) =
                prefactor_y * *(b + 46 * OS1_S1 + 97) -
                p_over_q * *(b + 72 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 97) +
                one_over_two_q * *(b + 46 * OS1_S1 + 65);
            *(b + 46 * OS1_S1 + 139) =
                prefactor_y * *(b + 46 * OS1_S1 + 98) -
                p_over_q * *(b + 72 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 98);
            *(b + 46 * OS1_S1 + 140) =
                prefactor_x * *(b + 46 * OS1_S1 + 104) -
                p_over_q * *(b + 67 * OS1_S1 + 104) +
                one_over_two_q * *(b + 31 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 76);
            *(b + 46 * OS1_S1 + 141) =
                prefactor_x * *(b + 46 * OS1_S1 + 105) -
                p_over_q * *(b + 67 * OS1_S1 + 105) +
                one_over_two_q * *(b + 31 * OS1_S1 + 105) +
                one_over_two_q * *(b + 46 * OS1_S1 + 77);
            *(b + 46 * OS1_S1 + 142) = prefactor_z * *(b + 46 * OS1_S1 + 99) -
                                       p_over_q * *(b + 73 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 26 * OS1_S1 + 99);
            *(b + 46 * OS1_S1 + 143) =
                prefactor_z * *(b + 46 * OS1_S1 + 100) -
                p_over_q * *(b + 73 * OS1_S1 + 100) +
                one_over_two_q * *(b + 26 * OS1_S1 + 100) +
                one_over_two_q * *(b + 46 * OS1_S1 + 66);
            *(b + 46 * OS1_S1 + 144) =
                prefactor_x * *(b + 46 * OS1_S1 + 108) -
                p_over_q * *(b + 67 * OS1_S1 + 108) +
                one_over_two_q * *(b + 31 * OS1_S1 + 108) +
                one_over_two_q * *(b + 46 * OS1_S1 + 80);
            *(b + 46 * OS1_S1 + 145) =
                prefactor_x * *(b + 46 * OS1_S1 + 109) -
                p_over_q * *(b + 67 * OS1_S1 + 109) +
                one_over_two_q * *(b + 31 * OS1_S1 + 109) +
                one_over_two_q * *(b + 46 * OS1_S1 + 81);
            *(b + 46 * OS1_S1 + 146) =
                prefactor_y * *(b + 46 * OS1_S1 + 104) -
                p_over_q * *(b + 72 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 104);
            *(b + 46 * OS1_S1 + 147) =
                prefactor_x * *(b + 46 * OS1_S1 + 111) -
                p_over_q * *(b + 67 * OS1_S1 + 111) +
                one_over_two_q * *(b + 31 * OS1_S1 + 111) +
                one_over_two_q * *(b + 46 * OS1_S1 + 83);
            *(b + 46 * OS1_S1 + 148) =
                prefactor_x * *(b + 46 * OS1_S1 + 112) -
                p_over_q * *(b + 67 * OS1_S1 + 112) +
                one_over_two_q * *(b + 31 * OS1_S1 + 112);
            *(b + 46 * OS1_S1 + 149) =
                prefactor_z * *(b + 46 * OS1_S1 + 105) -
                p_over_q * *(b + 73 * OS1_S1 + 105) +
                one_over_two_q * *(b + 26 * OS1_S1 + 105);
            *(b + 46 * OS1_S1 + 150) =
                prefactor_x * *(b + 46 * OS1_S1 + 114) -
                p_over_q * *(b + 67 * OS1_S1 + 114) +
                one_over_two_q * *(b + 31 * OS1_S1 + 114);
            *(b + 46 * OS1_S1 + 151) =
                prefactor_x * *(b + 46 * OS1_S1 + 115) -
                p_over_q * *(b + 67 * OS1_S1 + 115) +
                one_over_two_q * *(b + 31 * OS1_S1 + 115);
            *(b + 46 * OS1_S1 + 152) =
                prefactor_x * *(b + 46 * OS1_S1 + 116) -
                p_over_q * *(b + 67 * OS1_S1 + 116) +
                one_over_two_q * *(b + 31 * OS1_S1 + 116);
            *(b + 46 * OS1_S1 + 153) =
                prefactor_x * *(b + 46 * OS1_S1 + 117) -
                p_over_q * *(b + 67 * OS1_S1 + 117) +
                one_over_two_q * *(b + 31 * OS1_S1 + 117);
            *(b + 46 * OS1_S1 + 154) =
                prefactor_x * *(b + 46 * OS1_S1 + 118) -
                p_over_q * *(b + 67 * OS1_S1 + 118) +
                one_over_two_q * *(b + 31 * OS1_S1 + 118);
            *(b + 46 * OS1_S1 + 155) =
                prefactor_x * *(b + 46 * OS1_S1 + 119) -
                p_over_q * *(b + 67 * OS1_S1 + 119) +
                one_over_two_q * *(b + 31 * OS1_S1 + 119);
            *(b + 46 * OS1_S1 + 156) =
                prefactor_y * *(b + 46 * OS1_S1 + 112) -
                p_over_q * *(b + 72 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 46 * OS1_S1 + 77);
            *(b + 46 * OS1_S1 + 157) =
                prefactor_z * *(b + 46 * OS1_S1 + 112) -
                p_over_q * *(b + 73 * OS1_S1 + 112) +
                one_over_two_q * *(b + 26 * OS1_S1 + 112);
            *(b + 46 * OS1_S1 + 158) =
                prefactor_z * *(b + 46 * OS1_S1 + 113) -
                p_over_q * *(b + 73 * OS1_S1 + 113) +
                one_over_two_q * *(b + 26 * OS1_S1 + 113) +
                one_over_two_q * *(b + 46 * OS1_S1 + 77);
            *(b + 46 * OS1_S1 + 159) =
                prefactor_z * *(b + 46 * OS1_S1 + 114) -
                p_over_q * *(b + 73 * OS1_S1 + 114) +
                one_over_two_q * *(b + 26 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 78);
            *(b + 46 * OS1_S1 + 160) =
                prefactor_z * *(b + 46 * OS1_S1 + 115) -
                p_over_q * *(b + 73 * OS1_S1 + 115) +
                one_over_two_q * *(b + 26 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 46 * OS1_S1 + 79);
            *(b + 46 * OS1_S1 + 161) =
                prefactor_y * *(b + 46 * OS1_S1 + 117) -
                p_over_q * *(b + 72 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 46 * OS1_S1 + 82);
            *(b + 46 * OS1_S1 + 162) =
                prefactor_y * *(b + 46 * OS1_S1 + 118) -
                p_over_q * *(b + 72 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 118) +
                one_over_two_q * *(b + 46 * OS1_S1 + 83);
            *(b + 46 * OS1_S1 + 163) =
                prefactor_y * *(b + 46 * OS1_S1 + 119) -
                p_over_q * *(b + 72 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 27 * OS1_S1 + 119);
            *(b + 46 * OS1_S1 + 164) =
                prefactor_z * *(b + 46 * OS1_S1 + 119) -
                p_over_q * *(b + 73 * OS1_S1 + 119) +
                one_over_two_q * *(b + 26 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 46 * OS1_S1 + 83);
            *(b + 47 * OS1_S1 + 120) =
                prefactor_x * *(b + 47 * OS1_S1 + 84) -
                p_over_q * *(b + 68 * OS1_S1 + 84) +
                one_over_two_q * *(b + 32 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 47 * OS1_S1 + 56);
            *(b + 47 * OS1_S1 + 121) =
                prefactor_y * *(b + 47 * OS1_S1 + 84) -
                p_over_q * *(b + 73 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 84);
            *(b + 47 * OS1_S1 + 122) =
                prefactor_z * *(b + 47 * OS1_S1 + 84) -
                p_over_q * *(b + 74 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 84);
            *(b + 47 * OS1_S1 + 123) =
                prefactor_y * *(b + 47 * OS1_S1 + 85) -
                p_over_q * *(b + 73 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 85) +
                one_over_two_q * *(b + 47 * OS1_S1 + 56);
            *(b + 47 * OS1_S1 + 124) =
                prefactor_z * *(b + 47 * OS1_S1 + 85) -
                p_over_q * *(b + 74 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 85);
            *(b + 47 * OS1_S1 + 125) =
                prefactor_z * *(b + 47 * OS1_S1 + 86) -
                p_over_q * *(b + 74 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 86) +
                one_over_two_q * *(b + 47 * OS1_S1 + 56);
            *(b + 47 * OS1_S1 + 126) =
                prefactor_y * *(b + 47 * OS1_S1 + 87) -
                p_over_q * *(b + 73 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 57);
            *(b + 47 * OS1_S1 + 127) =
                prefactor_z * *(b + 47 * OS1_S1 + 87) -
                p_over_q * *(b + 74 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 87);
            *(b + 47 * OS1_S1 + 128) =
                prefactor_y * *(b + 47 * OS1_S1 + 89) -
                p_over_q * *(b + 73 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 89);
            *(b + 47 * OS1_S1 + 129) =
                prefactor_z * *(b + 47 * OS1_S1 + 89) -
                p_over_q * *(b + 74 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 58);
            *(b + 47 * OS1_S1 + 130) =
                prefactor_x * *(b + 47 * OS1_S1 + 94) -
                p_over_q * *(b + 68 * OS1_S1 + 94) +
                one_over_two_q * *(b + 32 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 66);
            *(b + 47 * OS1_S1 + 131) =
                prefactor_z * *(b + 47 * OS1_S1 + 90) -
                p_over_q * *(b + 74 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 90);
            *(b + 47 * OS1_S1 + 132) =
                prefactor_z * *(b + 47 * OS1_S1 + 91) -
                p_over_q * *(b + 74 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 91) +
                one_over_two_q * *(b + 47 * OS1_S1 + 59);
            *(b + 47 * OS1_S1 + 133) =
                prefactor_y * *(b + 47 * OS1_S1 + 93) -
                p_over_q * *(b + 73 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 93);
            *(b + 47 * OS1_S1 + 134) =
                prefactor_x * *(b + 47 * OS1_S1 + 98) -
                p_over_q * *(b + 68 * OS1_S1 + 98) +
                one_over_two_q * *(b + 32 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 70);
            *(b + 47 * OS1_S1 + 135) =
                prefactor_x * *(b + 47 * OS1_S1 + 99) -
                p_over_q * *(b + 68 * OS1_S1 + 99) +
                one_over_two_q * *(b + 32 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 71);
            *(b + 47 * OS1_S1 + 136) =
                prefactor_z * *(b + 47 * OS1_S1 + 94) -
                p_over_q * *(b + 74 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 94);
            *(b + 47 * OS1_S1 + 137) =
                prefactor_z * *(b + 47 * OS1_S1 + 95) -
                p_over_q * *(b + 74 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 95) +
                one_over_two_q * *(b + 47 * OS1_S1 + 62);
            *(b + 47 * OS1_S1 + 138) =
                prefactor_y * *(b + 47 * OS1_S1 + 97) -
                p_over_q * *(b + 73 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 97) +
                one_over_two_q * *(b + 47 * OS1_S1 + 65);
            *(b + 47 * OS1_S1 + 139) =
                prefactor_y * *(b + 47 * OS1_S1 + 98) -
                p_over_q * *(b + 73 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 98);
            *(b + 47 * OS1_S1 + 140) =
                prefactor_x * *(b + 47 * OS1_S1 + 104) -
                p_over_q * *(b + 68 * OS1_S1 + 104) +
                one_over_two_q * *(b + 32 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 76);
            *(b + 47 * OS1_S1 + 141) =
                prefactor_x * *(b + 47 * OS1_S1 + 105) -
                p_over_q * *(b + 68 * OS1_S1 + 105) +
                one_over_two_q * *(b + 32 * OS1_S1 + 105) +
                one_over_two_q * *(b + 47 * OS1_S1 + 77);
            *(b + 47 * OS1_S1 + 142) =
                prefactor_z * *(b + 47 * OS1_S1 + 99) -
                p_over_q * *(b + 74 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 99);
            *(b + 47 * OS1_S1 + 143) =
                prefactor_x * *(b + 47 * OS1_S1 + 107) -
                p_over_q * *(b + 68 * OS1_S1 + 107) +
                one_over_two_q * *(b + 32 * OS1_S1 + 107) +
                one_over_two_q * *(b + 47 * OS1_S1 + 79);
            *(b + 47 * OS1_S1 + 144) =
                prefactor_x * *(b + 47 * OS1_S1 + 108) -
                p_over_q * *(b + 68 * OS1_S1 + 108) +
                one_over_two_q * *(b + 32 * OS1_S1 + 108) +
                one_over_two_q * *(b + 47 * OS1_S1 + 80);
            *(b + 47 * OS1_S1 + 145) =
                prefactor_x * *(b + 47 * OS1_S1 + 109) -
                p_over_q * *(b + 68 * OS1_S1 + 109) +
                one_over_two_q * *(b + 32 * OS1_S1 + 109) +
                one_over_two_q * *(b + 47 * OS1_S1 + 81);
            *(b + 47 * OS1_S1 + 146) =
                prefactor_y * *(b + 47 * OS1_S1 + 104) -
                p_over_q * *(b + 73 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 104);
            *(b + 47 * OS1_S1 + 147) =
                prefactor_x * *(b + 47 * OS1_S1 + 111) -
                p_over_q * *(b + 68 * OS1_S1 + 111) +
                one_over_two_q * *(b + 32 * OS1_S1 + 111) +
                one_over_two_q * *(b + 47 * OS1_S1 + 83);
            *(b + 47 * OS1_S1 + 148) =
                prefactor_x * *(b + 47 * OS1_S1 + 112) -
                p_over_q * *(b + 68 * OS1_S1 + 112) +
                one_over_two_q * *(b + 32 * OS1_S1 + 112);
            *(b + 47 * OS1_S1 + 149) =
                prefactor_x * *(b + 47 * OS1_S1 + 113) -
                p_over_q * *(b + 68 * OS1_S1 + 113) +
                one_over_two_q * *(b + 32 * OS1_S1 + 113);
            *(b + 47 * OS1_S1 + 150) =
                prefactor_x * *(b + 47 * OS1_S1 + 114) -
                p_over_q * *(b + 68 * OS1_S1 + 114) +
                one_over_two_q * *(b + 32 * OS1_S1 + 114);
            *(b + 47 * OS1_S1 + 151) =
                prefactor_x * *(b + 47 * OS1_S1 + 115) -
                p_over_q * *(b + 68 * OS1_S1 + 115) +
                one_over_two_q * *(b + 32 * OS1_S1 + 115);
            *(b + 47 * OS1_S1 + 152) =
                prefactor_x * *(b + 47 * OS1_S1 + 116) -
                p_over_q * *(b + 68 * OS1_S1 + 116) +
                one_over_two_q * *(b + 32 * OS1_S1 + 116);
            *(b + 47 * OS1_S1 + 153) =
                prefactor_x * *(b + 47 * OS1_S1 + 117) -
                p_over_q * *(b + 68 * OS1_S1 + 117) +
                one_over_two_q * *(b + 32 * OS1_S1 + 117);
            *(b + 47 * OS1_S1 + 154) =
                prefactor_x * *(b + 47 * OS1_S1 + 118) -
                p_over_q * *(b + 68 * OS1_S1 + 118) +
                one_over_two_q * *(b + 32 * OS1_S1 + 118);
            *(b + 47 * OS1_S1 + 155) =
                prefactor_x * *(b + 47 * OS1_S1 + 119) -
                p_over_q * *(b + 68 * OS1_S1 + 119) +
                one_over_two_q * *(b + 32 * OS1_S1 + 119);
            *(b + 47 * OS1_S1 + 156) =
                prefactor_y * *(b + 47 * OS1_S1 + 112) -
                p_over_q * *(b + 73 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 47 * OS1_S1 + 77);
            *(b + 47 * OS1_S1 + 157) =
                prefactor_z * *(b + 47 * OS1_S1 + 112) -
                p_over_q * *(b + 74 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 112);
            *(b + 47 * OS1_S1 + 158) =
                prefactor_z * *(b + 47 * OS1_S1 + 113) -
                p_over_q * *(b + 74 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 113) +
                one_over_two_q * *(b + 47 * OS1_S1 + 77);
            *(b + 47 * OS1_S1 + 159) =
                prefactor_z * *(b + 47 * OS1_S1 + 114) -
                p_over_q * *(b + 74 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 78);
            *(b + 47 * OS1_S1 + 160) =
                prefactor_z * *(b + 47 * OS1_S1 + 115) -
                p_over_q * *(b + 74 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 47 * OS1_S1 + 79);
            *(b + 47 * OS1_S1 + 161) =
                prefactor_y * *(b + 47 * OS1_S1 + 117) -
                p_over_q * *(b + 73 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 47 * OS1_S1 + 82);
            *(b + 47 * OS1_S1 + 162) =
                prefactor_y * *(b + 47 * OS1_S1 + 118) -
                p_over_q * *(b + 73 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 118) +
                one_over_two_q * *(b + 47 * OS1_S1 + 83);
            *(b + 47 * OS1_S1 + 163) =
                prefactor_y * *(b + 47 * OS1_S1 + 119) -
                p_over_q * *(b + 73 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 28 * OS1_S1 + 119);
            *(b + 47 * OS1_S1 + 164) =
                prefactor_z * *(b + 47 * OS1_S1 + 119) -
                p_over_q * *(b + 74 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 27 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 47 * OS1_S1 + 83);
            *(b + 48 * OS1_S1 + 120) =
                prefactor_x * *(b + 48 * OS1_S1 + 84) -
                p_over_q * *(b + 69 * OS1_S1 + 84) +
                one_over_two_q * *(b + 33 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 48 * OS1_S1 + 56);
            *(b + 48 * OS1_S1 + 121) = prefactor_y * *(b + 48 * OS1_S1 + 84) -
                                       p_over_q * *(b + 74 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 84);
            *(b + 48 * OS1_S1 + 122) =
                prefactor_z * *(b + 48 * OS1_S1 + 84) -
                p_over_q * *(b + 75 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 84);
            *(b + 48 * OS1_S1 + 123) =
                prefactor_y * *(b + 48 * OS1_S1 + 85) -
                p_over_q * *(b + 74 * OS1_S1 + 85) +
                one_over_two_q * *(b + 29 * OS1_S1 + 85) +
                one_over_two_q * *(b + 48 * OS1_S1 + 56);
            *(b + 48 * OS1_S1 + 124) = prefactor_y * *(b + 48 * OS1_S1 + 86) -
                                       p_over_q * *(b + 74 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 86);
            *(b + 48 * OS1_S1 + 125) =
                prefactor_z * *(b + 48 * OS1_S1 + 86) -
                p_over_q * *(b + 75 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 86) +
                one_over_two_q * *(b + 48 * OS1_S1 + 56);
            *(b + 48 * OS1_S1 + 126) =
                prefactor_y * *(b + 48 * OS1_S1 + 87) -
                p_over_q * *(b + 74 * OS1_S1 + 87) +
                one_over_two_q * *(b + 29 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 57);
            *(b + 48 * OS1_S1 + 127) =
                prefactor_z * *(b + 48 * OS1_S1 + 87) -
                p_over_q * *(b + 75 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 87);
            *(b + 48 * OS1_S1 + 128) = prefactor_y * *(b + 48 * OS1_S1 + 89) -
                                       p_over_q * *(b + 74 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 89);
            *(b + 48 * OS1_S1 + 129) =
                prefactor_z * *(b + 48 * OS1_S1 + 89) -
                p_over_q * *(b + 75 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 58);
            *(b + 48 * OS1_S1 + 130) =
                prefactor_y * *(b + 48 * OS1_S1 + 90) -
                p_over_q * *(b + 74 * OS1_S1 + 90) +
                one_over_two_q * *(b + 29 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 48 * OS1_S1 + 59);
            *(b + 48 * OS1_S1 + 131) =
                prefactor_z * *(b + 48 * OS1_S1 + 90) -
                p_over_q * *(b + 75 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 90);
            *(b + 48 * OS1_S1 + 132) =
                prefactor_y * *(b + 48 * OS1_S1 + 92) -
                p_over_q * *(b + 74 * OS1_S1 + 92) +
                one_over_two_q * *(b + 29 * OS1_S1 + 92) +
                one_over_two_q * *(b + 48 * OS1_S1 + 61);
            *(b + 48 * OS1_S1 + 133) = prefactor_y * *(b + 48 * OS1_S1 + 93) -
                                       p_over_q * *(b + 74 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 93);
            *(b + 48 * OS1_S1 + 134) =
                prefactor_x * *(b + 48 * OS1_S1 + 98) -
                p_over_q * *(b + 69 * OS1_S1 + 98) +
                one_over_two_q * *(b + 33 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 48 * OS1_S1 + 70);
            *(b + 48 * OS1_S1 + 135) =
                prefactor_x * *(b + 48 * OS1_S1 + 99) -
                p_over_q * *(b + 69 * OS1_S1 + 99) +
                one_over_two_q * *(b + 33 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 71);
            *(b + 48 * OS1_S1 + 136) =
                prefactor_z * *(b + 48 * OS1_S1 + 94) -
                p_over_q * *(b + 75 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 94);
            *(b + 48 * OS1_S1 + 137) =
                prefactor_z * *(b + 48 * OS1_S1 + 95) -
                p_over_q * *(b + 75 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 95) +
                one_over_two_q * *(b + 48 * OS1_S1 + 62);
            *(b + 48 * OS1_S1 + 138) =
                prefactor_y * *(b + 48 * OS1_S1 + 97) -
                p_over_q * *(b + 74 * OS1_S1 + 97) +
                one_over_two_q * *(b + 29 * OS1_S1 + 97) +
                one_over_two_q * *(b + 48 * OS1_S1 + 65);
            *(b + 48 * OS1_S1 + 139) = prefactor_y * *(b + 48 * OS1_S1 + 98) -
                                       p_over_q * *(b + 74 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 29 * OS1_S1 + 98);
            *(b + 48 * OS1_S1 + 140) =
                prefactor_x * *(b + 48 * OS1_S1 + 104) -
                p_over_q * *(b + 69 * OS1_S1 + 104) +
                one_over_two_q * *(b + 33 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 76);
            *(b + 48 * OS1_S1 + 141) =
                prefactor_x * *(b + 48 * OS1_S1 + 105) -
                p_over_q * *(b + 69 * OS1_S1 + 105) +
                one_over_two_q * *(b + 33 * OS1_S1 + 105) +
                one_over_two_q * *(b + 48 * OS1_S1 + 77);
            *(b + 48 * OS1_S1 + 142) =
                prefactor_z * *(b + 48 * OS1_S1 + 99) -
                p_over_q * *(b + 75 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 99);
            *(b + 48 * OS1_S1 + 143) =
                prefactor_x * *(b + 48 * OS1_S1 + 107) -
                p_over_q * *(b + 69 * OS1_S1 + 107) +
                one_over_two_q * *(b + 33 * OS1_S1 + 107) +
                one_over_two_q * *(b + 48 * OS1_S1 + 79);
            *(b + 48 * OS1_S1 + 144) =
                prefactor_x * *(b + 48 * OS1_S1 + 108) -
                p_over_q * *(b + 69 * OS1_S1 + 108) +
                one_over_two_q * *(b + 33 * OS1_S1 + 108) +
                one_over_two_q * *(b + 48 * OS1_S1 + 80);
            *(b + 48 * OS1_S1 + 145) =
                prefactor_y * *(b + 48 * OS1_S1 + 103) -
                p_over_q * *(b + 74 * OS1_S1 + 103) +
                one_over_two_q * *(b + 29 * OS1_S1 + 103) +
                one_over_two_q * *(b + 48 * OS1_S1 + 70);
            *(b + 48 * OS1_S1 + 146) =
                prefactor_y * *(b + 48 * OS1_S1 + 104) -
                p_over_q * *(b + 74 * OS1_S1 + 104) +
                one_over_two_q * *(b + 29 * OS1_S1 + 104);
            *(b + 48 * OS1_S1 + 147) =
                prefactor_x * *(b + 48 * OS1_S1 + 111) -
                p_over_q * *(b + 69 * OS1_S1 + 111) +
                one_over_two_q * *(b + 33 * OS1_S1 + 111) +
                one_over_two_q * *(b + 48 * OS1_S1 + 83);
            *(b + 48 * OS1_S1 + 148) =
                prefactor_x * *(b + 48 * OS1_S1 + 112) -
                p_over_q * *(b + 69 * OS1_S1 + 112) +
                one_over_two_q * *(b + 33 * OS1_S1 + 112);
            *(b + 48 * OS1_S1 + 149) =
                prefactor_x * *(b + 48 * OS1_S1 + 113) -
                p_over_q * *(b + 69 * OS1_S1 + 113) +
                one_over_two_q * *(b + 33 * OS1_S1 + 113);
            *(b + 48 * OS1_S1 + 150) =
                prefactor_x * *(b + 48 * OS1_S1 + 114) -
                p_over_q * *(b + 69 * OS1_S1 + 114) +
                one_over_two_q * *(b + 33 * OS1_S1 + 114);
            *(b + 48 * OS1_S1 + 151) =
                prefactor_x * *(b + 48 * OS1_S1 + 115) -
                p_over_q * *(b + 69 * OS1_S1 + 115) +
                one_over_two_q * *(b + 33 * OS1_S1 + 115);
            *(b + 48 * OS1_S1 + 152) =
                prefactor_x * *(b + 48 * OS1_S1 + 116) -
                p_over_q * *(b + 69 * OS1_S1 + 116) +
                one_over_two_q * *(b + 33 * OS1_S1 + 116);
            *(b + 48 * OS1_S1 + 153) =
                prefactor_x * *(b + 48 * OS1_S1 + 117) -
                p_over_q * *(b + 69 * OS1_S1 + 117) +
                one_over_two_q * *(b + 33 * OS1_S1 + 117);
            *(b + 48 * OS1_S1 + 154) =
                prefactor_y * *(b + 48 * OS1_S1 + 111) -
                p_over_q * *(b + 74 * OS1_S1 + 111) +
                one_over_two_q * *(b + 29 * OS1_S1 + 111);
            *(b + 48 * OS1_S1 + 155) =
                prefactor_x * *(b + 48 * OS1_S1 + 119) -
                p_over_q * *(b + 69 * OS1_S1 + 119) +
                one_over_two_q * *(b + 33 * OS1_S1 + 119);
            *(b + 48 * OS1_S1 + 156) =
                prefactor_y * *(b + 48 * OS1_S1 + 112) -
                p_over_q * *(b + 74 * OS1_S1 + 112) +
                one_over_two_q * *(b + 29 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 48 * OS1_S1 + 77);
            *(b + 48 * OS1_S1 + 157) =
                prefactor_z * *(b + 48 * OS1_S1 + 112) -
                p_over_q * *(b + 75 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 112);
            *(b + 48 * OS1_S1 + 158) =
                prefactor_z * *(b + 48 * OS1_S1 + 113) -
                p_over_q * *(b + 75 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 113) +
                one_over_two_q * *(b + 48 * OS1_S1 + 77);
            *(b + 48 * OS1_S1 + 159) =
                prefactor_z * *(b + 48 * OS1_S1 + 114) -
                p_over_q * *(b + 75 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 78);
            *(b + 48 * OS1_S1 + 160) =
                prefactor_y * *(b + 48 * OS1_S1 + 116) -
                p_over_q * *(b + 74 * OS1_S1 + 116) +
                one_over_two_q * *(b + 29 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 48 * OS1_S1 + 81);
            *(b + 48 * OS1_S1 + 161) =
                prefactor_y * *(b + 48 * OS1_S1 + 117) -
                p_over_q * *(b + 74 * OS1_S1 + 117) +
                one_over_two_q * *(b + 29 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 48 * OS1_S1 + 82);
            *(b + 48 * OS1_S1 + 162) =
                prefactor_y * *(b + 48 * OS1_S1 + 118) -
                p_over_q * *(b + 74 * OS1_S1 + 118) +
                one_over_two_q * *(b + 29 * OS1_S1 + 118) +
                one_over_two_q * *(b + 48 * OS1_S1 + 83);
            *(b + 48 * OS1_S1 + 163) =
                prefactor_y * *(b + 48 * OS1_S1 + 119) -
                p_over_q * *(b + 74 * OS1_S1 + 119) +
                one_over_two_q * *(b + 29 * OS1_S1 + 119);
            *(b + 48 * OS1_S1 + 164) =
                prefactor_z * *(b + 48 * OS1_S1 + 119) -
                p_over_q * *(b + 75 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 28 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 48 * OS1_S1 + 83);
            *(b + 49 * OS1_S1 + 120) =
                prefactor_x * *(b + 49 * OS1_S1 + 84) -
                p_over_q * *(b + 70 * OS1_S1 + 84) +
                one_over_two_q * *(b + 34 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 49 * OS1_S1 + 56);
            *(b + 49 * OS1_S1 + 121) = prefactor_y * *(b + 49 * OS1_S1 + 84) -
                                       p_over_q * *(b + 75 * OS1_S1 + 84);
            *(b + 49 * OS1_S1 + 122) =
                prefactor_z * *(b + 49 * OS1_S1 + 84) -
                p_over_q * *(b + 76 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 84);
            *(b + 49 * OS1_S1 + 123) = prefactor_y * *(b + 49 * OS1_S1 + 85) -
                                       p_over_q * *(b + 75 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 56);
            *(b + 49 * OS1_S1 + 124) = prefactor_y * *(b + 49 * OS1_S1 + 86) -
                                       p_over_q * *(b + 75 * OS1_S1 + 86);
            *(b + 49 * OS1_S1 + 125) =
                prefactor_z * *(b + 49 * OS1_S1 + 86) -
                p_over_q * *(b + 76 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 86) +
                one_over_two_q * *(b + 49 * OS1_S1 + 56);
            *(b + 49 * OS1_S1 + 126) =
                prefactor_y * *(b + 49 * OS1_S1 + 87) -
                p_over_q * *(b + 75 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 57);
            *(b + 49 * OS1_S1 + 127) =
                prefactor_z * *(b + 49 * OS1_S1 + 87) -
                p_over_q * *(b + 76 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 87);
            *(b + 49 * OS1_S1 + 128) = prefactor_y * *(b + 49 * OS1_S1 + 89) -
                                       p_over_q * *(b + 75 * OS1_S1 + 89);
            *(b + 49 * OS1_S1 + 129) =
                prefactor_z * *(b + 49 * OS1_S1 + 89) -
                p_over_q * *(b + 76 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 58);
            *(b + 49 * OS1_S1 + 130) =
                prefactor_y * *(b + 49 * OS1_S1 + 90) -
                p_over_q * *(b + 75 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 49 * OS1_S1 + 59);
            *(b + 49 * OS1_S1 + 131) =
                prefactor_z * *(b + 49 * OS1_S1 + 90) -
                p_over_q * *(b + 76 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 90);
            *(b + 49 * OS1_S1 + 132) = prefactor_y * *(b + 49 * OS1_S1 + 92) -
                                       p_over_q * *(b + 75 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 61);
            *(b + 49 * OS1_S1 + 133) = prefactor_y * *(b + 49 * OS1_S1 + 93) -
                                       p_over_q * *(b + 75 * OS1_S1 + 93);
            *(b + 49 * OS1_S1 + 134) =
                prefactor_x * *(b + 49 * OS1_S1 + 98) -
                p_over_q * *(b + 70 * OS1_S1 + 98) +
                one_over_two_q * *(b + 34 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 49 * OS1_S1 + 70);
            *(b + 49 * OS1_S1 + 135) =
                prefactor_x * *(b + 49 * OS1_S1 + 99) -
                p_over_q * *(b + 70 * OS1_S1 + 99) +
                one_over_two_q * *(b + 34 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 71);
            *(b + 49 * OS1_S1 + 136) =
                prefactor_z * *(b + 49 * OS1_S1 + 94) -
                p_over_q * *(b + 76 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 94);
            *(b + 49 * OS1_S1 + 137) =
                prefactor_z * *(b + 49 * OS1_S1 + 95) -
                p_over_q * *(b + 76 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 95) +
                one_over_two_q * *(b + 49 * OS1_S1 + 62);
            *(b + 49 * OS1_S1 + 138) = prefactor_y * *(b + 49 * OS1_S1 + 97) -
                                       p_over_q * *(b + 75 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 65);
            *(b + 49 * OS1_S1 + 139) = prefactor_y * *(b + 49 * OS1_S1 + 98) -
                                       p_over_q * *(b + 75 * OS1_S1 + 98);
            *(b + 49 * OS1_S1 + 140) =
                prefactor_x * *(b + 49 * OS1_S1 + 104) -
                p_over_q * *(b + 70 * OS1_S1 + 104) +
                one_over_two_q * *(b + 34 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 76);
            *(b + 49 * OS1_S1 + 141) =
                prefactor_x * *(b + 49 * OS1_S1 + 105) -
                p_over_q * *(b + 70 * OS1_S1 + 105) +
                one_over_two_q * *(b + 34 * OS1_S1 + 105) +
                one_over_two_q * *(b + 49 * OS1_S1 + 77);
            *(b + 49 * OS1_S1 + 142) =
                prefactor_z * *(b + 49 * OS1_S1 + 99) -
                p_over_q * *(b + 76 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 99);
            *(b + 49 * OS1_S1 + 143) =
                prefactor_x * *(b + 49 * OS1_S1 + 107) -
                p_over_q * *(b + 70 * OS1_S1 + 107) +
                one_over_two_q * *(b + 34 * OS1_S1 + 107) +
                one_over_two_q * *(b + 49 * OS1_S1 + 79);
            *(b + 49 * OS1_S1 + 144) =
                prefactor_x * *(b + 49 * OS1_S1 + 108) -
                p_over_q * *(b + 70 * OS1_S1 + 108) +
                one_over_two_q * *(b + 34 * OS1_S1 + 108) +
                one_over_two_q * *(b + 49 * OS1_S1 + 80);
            *(b + 49 * OS1_S1 + 145) = prefactor_y * *(b + 49 * OS1_S1 + 103) -
                                       p_over_q * *(b + 75 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 70);
            *(b + 49 * OS1_S1 + 146) = prefactor_y * *(b + 49 * OS1_S1 + 104) -
                                       p_over_q * *(b + 75 * OS1_S1 + 104);
            *(b + 49 * OS1_S1 + 147) =
                prefactor_x * *(b + 49 * OS1_S1 + 111) -
                p_over_q * *(b + 70 * OS1_S1 + 111) +
                one_over_two_q * *(b + 34 * OS1_S1 + 111) +
                one_over_two_q * *(b + 49 * OS1_S1 + 83);
            *(b + 49 * OS1_S1 + 148) =
                prefactor_x * *(b + 49 * OS1_S1 + 112) -
                p_over_q * *(b + 70 * OS1_S1 + 112) +
                one_over_two_q * *(b + 34 * OS1_S1 + 112);
            *(b + 49 * OS1_S1 + 149) =
                prefactor_x * *(b + 49 * OS1_S1 + 113) -
                p_over_q * *(b + 70 * OS1_S1 + 113) +
                one_over_two_q * *(b + 34 * OS1_S1 + 113);
            *(b + 49 * OS1_S1 + 150) =
                prefactor_x * *(b + 49 * OS1_S1 + 114) -
                p_over_q * *(b + 70 * OS1_S1 + 114) +
                one_over_two_q * *(b + 34 * OS1_S1 + 114);
            *(b + 49 * OS1_S1 + 151) =
                prefactor_x * *(b + 49 * OS1_S1 + 115) -
                p_over_q * *(b + 70 * OS1_S1 + 115) +
                one_over_two_q * *(b + 34 * OS1_S1 + 115);
            *(b + 49 * OS1_S1 + 152) =
                prefactor_x * *(b + 49 * OS1_S1 + 116) -
                p_over_q * *(b + 70 * OS1_S1 + 116) +
                one_over_two_q * *(b + 34 * OS1_S1 + 116);
            *(b + 49 * OS1_S1 + 153) =
                prefactor_x * *(b + 49 * OS1_S1 + 117) -
                p_over_q * *(b + 70 * OS1_S1 + 117) +
                one_over_two_q * *(b + 34 * OS1_S1 + 117);
            *(b + 49 * OS1_S1 + 154) = prefactor_y * *(b + 49 * OS1_S1 + 111) -
                                       p_over_q * *(b + 75 * OS1_S1 + 111);
            *(b + 49 * OS1_S1 + 155) =
                prefactor_x * *(b + 49 * OS1_S1 + 119) -
                p_over_q * *(b + 70 * OS1_S1 + 119) +
                one_over_two_q * *(b + 34 * OS1_S1 + 119);
            *(b + 49 * OS1_S1 + 156) =
                prefactor_y * *(b + 49 * OS1_S1 + 112) -
                p_over_q * *(b + 75 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 49 * OS1_S1 + 77);
            *(b + 49 * OS1_S1 + 157) =
                prefactor_z * *(b + 49 * OS1_S1 + 112) -
                p_over_q * *(b + 76 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 112);
            *(b + 49 * OS1_S1 + 158) =
                prefactor_z * *(b + 49 * OS1_S1 + 113) -
                p_over_q * *(b + 76 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 113) +
                one_over_two_q * *(b + 49 * OS1_S1 + 77);
            *(b + 49 * OS1_S1 + 159) =
                prefactor_z * *(b + 49 * OS1_S1 + 114) -
                p_over_q * *(b + 76 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 78);
            *(b + 49 * OS1_S1 + 160) =
                prefactor_y * *(b + 49 * OS1_S1 + 116) -
                p_over_q * *(b + 75 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 49 * OS1_S1 + 81);
            *(b + 49 * OS1_S1 + 161) =
                prefactor_y * *(b + 49 * OS1_S1 + 117) -
                p_over_q * *(b + 75 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 49 * OS1_S1 + 82);
            *(b + 49 * OS1_S1 + 162) = prefactor_y * *(b + 49 * OS1_S1 + 118) -
                                       p_over_q * *(b + 75 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 49 * OS1_S1 + 83);
            *(b + 49 * OS1_S1 + 163) = prefactor_y * *(b + 49 * OS1_S1 + 119) -
                                       p_over_q * *(b + 75 * OS1_S1 + 119);
            *(b + 49 * OS1_S1 + 164) =
                prefactor_z * *(b + 49 * OS1_S1 + 119) -
                p_over_q * *(b + 76 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 29 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 49 * OS1_S1 + 83);
            *(b + 50 * OS1_S1 + 120) =
                prefactor_x * *(b + 50 * OS1_S1 + 84) -
                p_over_q * *(b + 71 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 50 * OS1_S1 + 56);
            *(b + 50 * OS1_S1 + 121) =
                prefactor_y * *(b + 50 * OS1_S1 + 84) -
                p_over_q * *(b + 77 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 84);
            *(b + 50 * OS1_S1 + 122) = prefactor_z * *(b + 50 * OS1_S1 + 84) -
                                       p_over_q * *(b + 78 * OS1_S1 + 84);
            *(b + 50 * OS1_S1 + 123) =
                prefactor_y * *(b + 50 * OS1_S1 + 85) -
                p_over_q * *(b + 77 * OS1_S1 + 85) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 85) +
                one_over_two_q * *(b + 50 * OS1_S1 + 56);
            *(b + 50 * OS1_S1 + 124) = prefactor_z * *(b + 50 * OS1_S1 + 85) -
                                       p_over_q * *(b + 78 * OS1_S1 + 85);
            *(b + 50 * OS1_S1 + 125) = prefactor_z * *(b + 50 * OS1_S1 + 86) -
                                       p_over_q * *(b + 78 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 56);
            *(b + 50 * OS1_S1 + 126) =
                prefactor_y * *(b + 50 * OS1_S1 + 87) -
                p_over_q * *(b + 77 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 57);
            *(b + 50 * OS1_S1 + 127) = prefactor_z * *(b + 50 * OS1_S1 + 87) -
                                       p_over_q * *(b + 78 * OS1_S1 + 87);
            *(b + 50 * OS1_S1 + 128) =
                prefactor_y * *(b + 50 * OS1_S1 + 89) -
                p_over_q * *(b + 77 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 89);
            *(b + 50 * OS1_S1 + 129) =
                prefactor_z * *(b + 50 * OS1_S1 + 89) -
                p_over_q * *(b + 78 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 58);
            *(b + 50 * OS1_S1 + 130) =
                prefactor_x * *(b + 50 * OS1_S1 + 94) -
                p_over_q * *(b + 71 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 50 * OS1_S1 + 66);
            *(b + 50 * OS1_S1 + 131) = prefactor_z * *(b + 50 * OS1_S1 + 90) -
                                       p_over_q * *(b + 78 * OS1_S1 + 90);
            *(b + 50 * OS1_S1 + 132) = prefactor_z * *(b + 50 * OS1_S1 + 91) -
                                       p_over_q * *(b + 78 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 59);
            *(b + 50 * OS1_S1 + 133) =
                prefactor_y * *(b + 50 * OS1_S1 + 93) -
                p_over_q * *(b + 77 * OS1_S1 + 93) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 93);
            *(b + 50 * OS1_S1 + 134) =
                prefactor_z * *(b + 50 * OS1_S1 + 93) -
                p_over_q * *(b + 78 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 50 * OS1_S1 + 61);
            *(b + 50 * OS1_S1 + 135) =
                prefactor_x * *(b + 50 * OS1_S1 + 99) -
                p_over_q * *(b + 71 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 71);
            *(b + 50 * OS1_S1 + 136) = prefactor_z * *(b + 50 * OS1_S1 + 94) -
                                       p_over_q * *(b + 78 * OS1_S1 + 94);
            *(b + 50 * OS1_S1 + 137) = prefactor_z * *(b + 50 * OS1_S1 + 95) -
                                       p_over_q * *(b + 78 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 62);
            *(b + 50 * OS1_S1 + 138) =
                prefactor_y * *(b + 50 * OS1_S1 + 97) -
                p_over_q * *(b + 77 * OS1_S1 + 97) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 97) +
                one_over_two_q * *(b + 50 * OS1_S1 + 65);
            *(b + 50 * OS1_S1 + 139) =
                prefactor_y * *(b + 50 * OS1_S1 + 98) -
                p_over_q * *(b + 77 * OS1_S1 + 98) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 98);
            *(b + 50 * OS1_S1 + 140) =
                prefactor_x * *(b + 50 * OS1_S1 + 104) -
                p_over_q * *(b + 71 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 76);
            *(b + 50 * OS1_S1 + 141) = prefactor_x * *(b + 50 * OS1_S1 + 105) -
                                       p_over_q * *(b + 71 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 77);
            *(b + 50 * OS1_S1 + 142) = prefactor_z * *(b + 50 * OS1_S1 + 99) -
                                       p_over_q * *(b + 78 * OS1_S1 + 99);
            *(b + 50 * OS1_S1 + 143) = prefactor_z * *(b + 50 * OS1_S1 + 100) -
                                       p_over_q * *(b + 78 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 66);
            *(b + 50 * OS1_S1 + 144) = prefactor_x * *(b + 50 * OS1_S1 + 108) -
                                       p_over_q * *(b + 71 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 80);
            *(b + 50 * OS1_S1 + 145) = prefactor_x * *(b + 50 * OS1_S1 + 109) -
                                       p_over_q * *(b + 71 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 81);
            *(b + 50 * OS1_S1 + 146) =
                prefactor_y * *(b + 50 * OS1_S1 + 104) -
                p_over_q * *(b + 77 * OS1_S1 + 104) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 104);
            *(b + 50 * OS1_S1 + 147) = prefactor_x * *(b + 50 * OS1_S1 + 111) -
                                       p_over_q * *(b + 71 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 83);
            *(b + 50 * OS1_S1 + 148) = prefactor_x * *(b + 50 * OS1_S1 + 112) -
                                       p_over_q * *(b + 71 * OS1_S1 + 112);
            *(b + 50 * OS1_S1 + 149) = prefactor_z * *(b + 50 * OS1_S1 + 105) -
                                       p_over_q * *(b + 78 * OS1_S1 + 105);
            *(b + 50 * OS1_S1 + 150) = prefactor_x * *(b + 50 * OS1_S1 + 114) -
                                       p_over_q * *(b + 71 * OS1_S1 + 114);
            *(b + 50 * OS1_S1 + 151) = prefactor_x * *(b + 50 * OS1_S1 + 115) -
                                       p_over_q * *(b + 71 * OS1_S1 + 115);
            *(b + 50 * OS1_S1 + 152) = prefactor_x * *(b + 50 * OS1_S1 + 116) -
                                       p_over_q * *(b + 71 * OS1_S1 + 116);
            *(b + 50 * OS1_S1 + 153) = prefactor_x * *(b + 50 * OS1_S1 + 117) -
                                       p_over_q * *(b + 71 * OS1_S1 + 117);
            *(b + 50 * OS1_S1 + 154) = prefactor_x * *(b + 50 * OS1_S1 + 118) -
                                       p_over_q * *(b + 71 * OS1_S1 + 118);
            *(b + 50 * OS1_S1 + 155) = prefactor_x * *(b + 50 * OS1_S1 + 119) -
                                       p_over_q * *(b + 71 * OS1_S1 + 119);
            *(b + 50 * OS1_S1 + 156) =
                prefactor_y * *(b + 50 * OS1_S1 + 112) -
                p_over_q * *(b + 77 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 50 * OS1_S1 + 77);
            *(b + 50 * OS1_S1 + 157) = prefactor_z * *(b + 50 * OS1_S1 + 112) -
                                       p_over_q * *(b + 78 * OS1_S1 + 112);
            *(b + 50 * OS1_S1 + 158) = prefactor_z * *(b + 50 * OS1_S1 + 113) -
                                       p_over_q * *(b + 78 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 50 * OS1_S1 + 77);
            *(b + 50 * OS1_S1 + 159) =
                prefactor_z * *(b + 50 * OS1_S1 + 114) -
                p_over_q * *(b + 78 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 78);
            *(b + 50 * OS1_S1 + 160) =
                prefactor_z * *(b + 50 * OS1_S1 + 115) -
                p_over_q * *(b + 78 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 50 * OS1_S1 + 79);
            *(b + 50 * OS1_S1 + 161) =
                prefactor_y * *(b + 50 * OS1_S1 + 117) -
                p_over_q * *(b + 77 * OS1_S1 + 117) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 50 * OS1_S1 + 82);
            *(b + 50 * OS1_S1 + 162) =
                prefactor_y * *(b + 50 * OS1_S1 + 118) -
                p_over_q * *(b + 77 * OS1_S1 + 118) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 118) +
                one_over_two_q * *(b + 50 * OS1_S1 + 83);
            *(b + 50 * OS1_S1 + 163) =
                prefactor_y * *(b + 50 * OS1_S1 + 119) -
                p_over_q * *(b + 77 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 30 * OS1_S1 + 119);
            *(b + 50 * OS1_S1 + 164) =
                prefactor_z * *(b + 50 * OS1_S1 + 119) -
                p_over_q * *(b + 78 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 50 * OS1_S1 + 83);
            *(b + 51 * OS1_S1 + 120) =
                prefactor_x * *(b + 51 * OS1_S1 + 84) -
                p_over_q * *(b + 72 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 51 * OS1_S1 + 56);
            *(b + 51 * OS1_S1 + 121) =
                prefactor_y * *(b + 51 * OS1_S1 + 84) -
                p_over_q * *(b + 78 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 84);
            *(b + 51 * OS1_S1 + 122) = prefactor_z * *(b + 51 * OS1_S1 + 84) -
                                       p_over_q * *(b + 79 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 84);
            *(b + 51 * OS1_S1 + 123) =
                prefactor_y * *(b + 51 * OS1_S1 + 85) -
                p_over_q * *(b + 78 * OS1_S1 + 85) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 85) +
                one_over_two_q * *(b + 51 * OS1_S1 + 56);
            *(b + 51 * OS1_S1 + 124) = prefactor_z * *(b + 51 * OS1_S1 + 85) -
                                       p_over_q * *(b + 79 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 85);
            *(b + 51 * OS1_S1 + 125) =
                prefactor_z * *(b + 51 * OS1_S1 + 86) -
                p_over_q * *(b + 79 * OS1_S1 + 86) +
                one_over_two_q * *(b + 30 * OS1_S1 + 86) +
                one_over_two_q * *(b + 51 * OS1_S1 + 56);
            *(b + 51 * OS1_S1 + 126) =
                prefactor_y * *(b + 51 * OS1_S1 + 87) -
                p_over_q * *(b + 78 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 57);
            *(b + 51 * OS1_S1 + 127) = prefactor_z * *(b + 51 * OS1_S1 + 87) -
                                       p_over_q * *(b + 79 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 87);
            *(b + 51 * OS1_S1 + 128) =
                prefactor_y * *(b + 51 * OS1_S1 + 89) -
                p_over_q * *(b + 78 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 89);
            *(b + 51 * OS1_S1 + 129) =
                prefactor_z * *(b + 51 * OS1_S1 + 89) -
                p_over_q * *(b + 79 * OS1_S1 + 89) +
                one_over_two_q * *(b + 30 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 58);
            *(b + 51 * OS1_S1 + 130) =
                prefactor_x * *(b + 51 * OS1_S1 + 94) -
                p_over_q * *(b + 72 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 51 * OS1_S1 + 66);
            *(b + 51 * OS1_S1 + 131) = prefactor_z * *(b + 51 * OS1_S1 + 90) -
                                       p_over_q * *(b + 79 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 90);
            *(b + 51 * OS1_S1 + 132) =
                prefactor_z * *(b + 51 * OS1_S1 + 91) -
                p_over_q * *(b + 79 * OS1_S1 + 91) +
                one_over_two_q * *(b + 30 * OS1_S1 + 91) +
                one_over_two_q * *(b + 51 * OS1_S1 + 59);
            *(b + 51 * OS1_S1 + 133) =
                prefactor_y * *(b + 51 * OS1_S1 + 93) -
                p_over_q * *(b + 78 * OS1_S1 + 93) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 93);
            *(b + 51 * OS1_S1 + 134) =
                prefactor_x * *(b + 51 * OS1_S1 + 98) -
                p_over_q * *(b + 72 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 51 * OS1_S1 + 70);
            *(b + 51 * OS1_S1 + 135) =
                prefactor_x * *(b + 51 * OS1_S1 + 99) -
                p_over_q * *(b + 72 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 71);
            *(b + 51 * OS1_S1 + 136) = prefactor_z * *(b + 51 * OS1_S1 + 94) -
                                       p_over_q * *(b + 79 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 94);
            *(b + 51 * OS1_S1 + 137) =
                prefactor_z * *(b + 51 * OS1_S1 + 95) -
                p_over_q * *(b + 79 * OS1_S1 + 95) +
                one_over_two_q * *(b + 30 * OS1_S1 + 95) +
                one_over_two_q * *(b + 51 * OS1_S1 + 62);
            *(b + 51 * OS1_S1 + 138) =
                prefactor_y * *(b + 51 * OS1_S1 + 97) -
                p_over_q * *(b + 78 * OS1_S1 + 97) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 97) +
                one_over_two_q * *(b + 51 * OS1_S1 + 65);
            *(b + 51 * OS1_S1 + 139) =
                prefactor_y * *(b + 51 * OS1_S1 + 98) -
                p_over_q * *(b + 78 * OS1_S1 + 98) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 98);
            *(b + 51 * OS1_S1 + 140) =
                prefactor_x * *(b + 51 * OS1_S1 + 104) -
                p_over_q * *(b + 72 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 76);
            *(b + 51 * OS1_S1 + 141) = prefactor_x * *(b + 51 * OS1_S1 + 105) -
                                       p_over_q * *(b + 72 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 77);
            *(b + 51 * OS1_S1 + 142) = prefactor_z * *(b + 51 * OS1_S1 + 99) -
                                       p_over_q * *(b + 79 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 30 * OS1_S1 + 99);
            *(b + 51 * OS1_S1 + 143) = prefactor_x * *(b + 51 * OS1_S1 + 107) -
                                       p_over_q * *(b + 72 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 79);
            *(b + 51 * OS1_S1 + 144) = prefactor_x * *(b + 51 * OS1_S1 + 108) -
                                       p_over_q * *(b + 72 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 80);
            *(b + 51 * OS1_S1 + 145) = prefactor_x * *(b + 51 * OS1_S1 + 109) -
                                       p_over_q * *(b + 72 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 81);
            *(b + 51 * OS1_S1 + 146) =
                prefactor_y * *(b + 51 * OS1_S1 + 104) -
                p_over_q * *(b + 78 * OS1_S1 + 104) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 104);
            *(b + 51 * OS1_S1 + 147) = prefactor_x * *(b + 51 * OS1_S1 + 111) -
                                       p_over_q * *(b + 72 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 51 * OS1_S1 + 83);
            *(b + 51 * OS1_S1 + 148) = prefactor_x * *(b + 51 * OS1_S1 + 112) -
                                       p_over_q * *(b + 72 * OS1_S1 + 112);
            *(b + 51 * OS1_S1 + 149) = prefactor_x * *(b + 51 * OS1_S1 + 113) -
                                       p_over_q * *(b + 72 * OS1_S1 + 113);
            *(b + 51 * OS1_S1 + 150) = prefactor_x * *(b + 51 * OS1_S1 + 114) -
                                       p_over_q * *(b + 72 * OS1_S1 + 114);
            *(b + 51 * OS1_S1 + 151) = prefactor_x * *(b + 51 * OS1_S1 + 115) -
                                       p_over_q * *(b + 72 * OS1_S1 + 115);
            *(b + 51 * OS1_S1 + 152) = prefactor_x * *(b + 51 * OS1_S1 + 116) -
                                       p_over_q * *(b + 72 * OS1_S1 + 116);
            *(b + 51 * OS1_S1 + 153) = prefactor_x * *(b + 51 * OS1_S1 + 117) -
                                       p_over_q * *(b + 72 * OS1_S1 + 117);
            *(b + 51 * OS1_S1 + 154) = prefactor_x * *(b + 51 * OS1_S1 + 118) -
                                       p_over_q * *(b + 72 * OS1_S1 + 118);
            *(b + 51 * OS1_S1 + 155) = prefactor_x * *(b + 51 * OS1_S1 + 119) -
                                       p_over_q * *(b + 72 * OS1_S1 + 119);
            *(b + 51 * OS1_S1 + 156) =
                prefactor_y * *(b + 51 * OS1_S1 + 112) -
                p_over_q * *(b + 78 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 51 * OS1_S1 + 77);
            *(b + 51 * OS1_S1 + 157) =
                prefactor_z * *(b + 51 * OS1_S1 + 112) -
                p_over_q * *(b + 79 * OS1_S1 + 112) +
                one_over_two_q * *(b + 30 * OS1_S1 + 112);
            *(b + 51 * OS1_S1 + 158) =
                prefactor_z * *(b + 51 * OS1_S1 + 113) -
                p_over_q * *(b + 79 * OS1_S1 + 113) +
                one_over_two_q * *(b + 30 * OS1_S1 + 113) +
                one_over_two_q * *(b + 51 * OS1_S1 + 77);
            *(b + 51 * OS1_S1 + 159) =
                prefactor_z * *(b + 51 * OS1_S1 + 114) -
                p_over_q * *(b + 79 * OS1_S1 + 114) +
                one_over_two_q * *(b + 30 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 78);
            *(b + 51 * OS1_S1 + 160) =
                prefactor_z * *(b + 51 * OS1_S1 + 115) -
                p_over_q * *(b + 79 * OS1_S1 + 115) +
                one_over_two_q * *(b + 30 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 51 * OS1_S1 + 79);
            *(b + 51 * OS1_S1 + 161) =
                prefactor_y * *(b + 51 * OS1_S1 + 117) -
                p_over_q * *(b + 78 * OS1_S1 + 117) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 51 * OS1_S1 + 82);
            *(b + 51 * OS1_S1 + 162) =
                prefactor_y * *(b + 51 * OS1_S1 + 118) -
                p_over_q * *(b + 78 * OS1_S1 + 118) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 118) +
                one_over_two_q * *(b + 51 * OS1_S1 + 83);
            *(b + 51 * OS1_S1 + 163) =
                prefactor_y * *(b + 51 * OS1_S1 + 119) -
                p_over_q * *(b + 78 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 31 * OS1_S1 + 119);
            *(b + 51 * OS1_S1 + 164) =
                prefactor_z * *(b + 51 * OS1_S1 + 119) -
                p_over_q * *(b + 79 * OS1_S1 + 119) +
                one_over_two_q * *(b + 30 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 51 * OS1_S1 + 83);
            *(b + 52 * OS1_S1 + 120) =
                prefactor_x * *(b + 52 * OS1_S1 + 84) -
                p_over_q * *(b + 73 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 52 * OS1_S1 + 56);
            *(b + 52 * OS1_S1 + 121) =
                prefactor_y * *(b + 52 * OS1_S1 + 84) -
                p_over_q * *(b + 79 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 84);
            *(b + 52 * OS1_S1 + 122) =
                prefactor_z * *(b + 52 * OS1_S1 + 84) -
                p_over_q * *(b + 80 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 84);
            *(b + 52 * OS1_S1 + 123) =
                prefactor_y * *(b + 52 * OS1_S1 + 85) -
                p_over_q * *(b + 79 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 85) +
                one_over_two_q * *(b + 52 * OS1_S1 + 56);
            *(b + 52 * OS1_S1 + 124) =
                prefactor_z * *(b + 52 * OS1_S1 + 85) -
                p_over_q * *(b + 80 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 85);
            *(b + 52 * OS1_S1 + 125) =
                prefactor_z * *(b + 52 * OS1_S1 + 86) -
                p_over_q * *(b + 80 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 86) +
                one_over_two_q * *(b + 52 * OS1_S1 + 56);
            *(b + 52 * OS1_S1 + 126) =
                prefactor_y * *(b + 52 * OS1_S1 + 87) -
                p_over_q * *(b + 79 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 57);
            *(b + 52 * OS1_S1 + 127) =
                prefactor_z * *(b + 52 * OS1_S1 + 87) -
                p_over_q * *(b + 80 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 87);
            *(b + 52 * OS1_S1 + 128) =
                prefactor_y * *(b + 52 * OS1_S1 + 89) -
                p_over_q * *(b + 79 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 89);
            *(b + 52 * OS1_S1 + 129) =
                prefactor_z * *(b + 52 * OS1_S1 + 89) -
                p_over_q * *(b + 80 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 58);
            *(b + 52 * OS1_S1 + 130) =
                prefactor_x * *(b + 52 * OS1_S1 + 94) -
                p_over_q * *(b + 73 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 66);
            *(b + 52 * OS1_S1 + 131) =
                prefactor_z * *(b + 52 * OS1_S1 + 90) -
                p_over_q * *(b + 80 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 90);
            *(b + 52 * OS1_S1 + 132) =
                prefactor_z * *(b + 52 * OS1_S1 + 91) -
                p_over_q * *(b + 80 * OS1_S1 + 91) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 91) +
                one_over_two_q * *(b + 52 * OS1_S1 + 59);
            *(b + 52 * OS1_S1 + 133) =
                prefactor_y * *(b + 52 * OS1_S1 + 93) -
                p_over_q * *(b + 79 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 93);
            *(b + 52 * OS1_S1 + 134) =
                prefactor_x * *(b + 52 * OS1_S1 + 98) -
                p_over_q * *(b + 73 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 70);
            *(b + 52 * OS1_S1 + 135) =
                prefactor_x * *(b + 52 * OS1_S1 + 99) -
                p_over_q * *(b + 73 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 71);
            *(b + 52 * OS1_S1 + 136) =
                prefactor_z * *(b + 52 * OS1_S1 + 94) -
                p_over_q * *(b + 80 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 94);
            *(b + 52 * OS1_S1 + 137) =
                prefactor_z * *(b + 52 * OS1_S1 + 95) -
                p_over_q * *(b + 80 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 95) +
                one_over_two_q * *(b + 52 * OS1_S1 + 62);
            *(b + 52 * OS1_S1 + 138) =
                prefactor_y * *(b + 52 * OS1_S1 + 97) -
                p_over_q * *(b + 79 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 97) +
                one_over_two_q * *(b + 52 * OS1_S1 + 65);
            *(b + 52 * OS1_S1 + 139) =
                prefactor_y * *(b + 52 * OS1_S1 + 98) -
                p_over_q * *(b + 79 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 98);
            *(b + 52 * OS1_S1 + 140) =
                prefactor_x * *(b + 52 * OS1_S1 + 104) -
                p_over_q * *(b + 73 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 76);
            *(b + 52 * OS1_S1 + 141) = prefactor_x * *(b + 52 * OS1_S1 + 105) -
                                       p_over_q * *(b + 73 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 77);
            *(b + 52 * OS1_S1 + 142) =
                prefactor_z * *(b + 52 * OS1_S1 + 99) -
                p_over_q * *(b + 80 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 99);
            *(b + 52 * OS1_S1 + 143) = prefactor_x * *(b + 52 * OS1_S1 + 107) -
                                       p_over_q * *(b + 73 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 79);
            *(b + 52 * OS1_S1 + 144) = prefactor_x * *(b + 52 * OS1_S1 + 108) -
                                       p_over_q * *(b + 73 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 80);
            *(b + 52 * OS1_S1 + 145) = prefactor_x * *(b + 52 * OS1_S1 + 109) -
                                       p_over_q * *(b + 73 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 81);
            *(b + 52 * OS1_S1 + 146) =
                prefactor_y * *(b + 52 * OS1_S1 + 104) -
                p_over_q * *(b + 79 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 104);
            *(b + 52 * OS1_S1 + 147) = prefactor_x * *(b + 52 * OS1_S1 + 111) -
                                       p_over_q * *(b + 73 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 52 * OS1_S1 + 83);
            *(b + 52 * OS1_S1 + 148) = prefactor_x * *(b + 52 * OS1_S1 + 112) -
                                       p_over_q * *(b + 73 * OS1_S1 + 112);
            *(b + 52 * OS1_S1 + 149) = prefactor_x * *(b + 52 * OS1_S1 + 113) -
                                       p_over_q * *(b + 73 * OS1_S1 + 113);
            *(b + 52 * OS1_S1 + 150) = prefactor_x * *(b + 52 * OS1_S1 + 114) -
                                       p_over_q * *(b + 73 * OS1_S1 + 114);
            *(b + 52 * OS1_S1 + 151) = prefactor_x * *(b + 52 * OS1_S1 + 115) -
                                       p_over_q * *(b + 73 * OS1_S1 + 115);
            *(b + 52 * OS1_S1 + 152) = prefactor_x * *(b + 52 * OS1_S1 + 116) -
                                       p_over_q * *(b + 73 * OS1_S1 + 116);
            *(b + 52 * OS1_S1 + 153) = prefactor_x * *(b + 52 * OS1_S1 + 117) -
                                       p_over_q * *(b + 73 * OS1_S1 + 117);
            *(b + 52 * OS1_S1 + 154) = prefactor_x * *(b + 52 * OS1_S1 + 118) -
                                       p_over_q * *(b + 73 * OS1_S1 + 118);
            *(b + 52 * OS1_S1 + 155) = prefactor_x * *(b + 52 * OS1_S1 + 119) -
                                       p_over_q * *(b + 73 * OS1_S1 + 119);
            *(b + 52 * OS1_S1 + 156) =
                prefactor_y * *(b + 52 * OS1_S1 + 112) -
                p_over_q * *(b + 79 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 52 * OS1_S1 + 77);
            *(b + 52 * OS1_S1 + 157) =
                prefactor_z * *(b + 52 * OS1_S1 + 112) -
                p_over_q * *(b + 80 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 112);
            *(b + 52 * OS1_S1 + 158) =
                prefactor_z * *(b + 52 * OS1_S1 + 113) -
                p_over_q * *(b + 80 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 113) +
                one_over_two_q * *(b + 52 * OS1_S1 + 77);
            *(b + 52 * OS1_S1 + 159) =
                prefactor_z * *(b + 52 * OS1_S1 + 114) -
                p_over_q * *(b + 80 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 78);
            *(b + 52 * OS1_S1 + 160) =
                prefactor_z * *(b + 52 * OS1_S1 + 115) -
                p_over_q * *(b + 80 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 52 * OS1_S1 + 79);
            *(b + 52 * OS1_S1 + 161) =
                prefactor_y * *(b + 52 * OS1_S1 + 117) -
                p_over_q * *(b + 79 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 52 * OS1_S1 + 82);
            *(b + 52 * OS1_S1 + 162) =
                prefactor_y * *(b + 52 * OS1_S1 + 118) -
                p_over_q * *(b + 79 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 118) +
                one_over_two_q * *(b + 52 * OS1_S1 + 83);
            *(b + 52 * OS1_S1 + 163) =
                prefactor_y * *(b + 52 * OS1_S1 + 119) -
                p_over_q * *(b + 79 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 119);
            *(b + 52 * OS1_S1 + 164) =
                prefactor_z * *(b + 52 * OS1_S1 + 119) -
                p_over_q * *(b + 80 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 31 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 52 * OS1_S1 + 83);
            *(b + 53 * OS1_S1 + 120) =
                prefactor_x * *(b + 53 * OS1_S1 + 84) -
                p_over_q * *(b + 74 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 53 * OS1_S1 + 56);
            *(b + 53 * OS1_S1 + 121) =
                prefactor_y * *(b + 53 * OS1_S1 + 84) -
                p_over_q * *(b + 80 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 84);
            *(b + 53 * OS1_S1 + 122) =
                prefactor_z * *(b + 53 * OS1_S1 + 84) -
                p_over_q * *(b + 81 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 84);
            *(b + 53 * OS1_S1 + 123) =
                prefactor_y * *(b + 53 * OS1_S1 + 85) -
                p_over_q * *(b + 80 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 85) +
                one_over_two_q * *(b + 53 * OS1_S1 + 56);
            *(b + 53 * OS1_S1 + 124) =
                prefactor_y * *(b + 53 * OS1_S1 + 86) -
                p_over_q * *(b + 80 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 86);
            *(b + 53 * OS1_S1 + 125) =
                prefactor_z * *(b + 53 * OS1_S1 + 86) -
                p_over_q * *(b + 81 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 86) +
                one_over_two_q * *(b + 53 * OS1_S1 + 56);
            *(b + 53 * OS1_S1 + 126) =
                prefactor_y * *(b + 53 * OS1_S1 + 87) -
                p_over_q * *(b + 80 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 57);
            *(b + 53 * OS1_S1 + 127) =
                prefactor_z * *(b + 53 * OS1_S1 + 87) -
                p_over_q * *(b + 81 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 87);
            *(b + 53 * OS1_S1 + 128) =
                prefactor_y * *(b + 53 * OS1_S1 + 89) -
                p_over_q * *(b + 80 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 89);
            *(b + 53 * OS1_S1 + 129) =
                prefactor_z * *(b + 53 * OS1_S1 + 89) -
                p_over_q * *(b + 81 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 58);
            *(b + 53 * OS1_S1 + 130) =
                prefactor_x * *(b + 53 * OS1_S1 + 94) -
                p_over_q * *(b + 74 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 66);
            *(b + 53 * OS1_S1 + 131) =
                prefactor_z * *(b + 53 * OS1_S1 + 90) -
                p_over_q * *(b + 81 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 90);
            *(b + 53 * OS1_S1 + 132) =
                prefactor_y * *(b + 53 * OS1_S1 + 92) -
                p_over_q * *(b + 80 * OS1_S1 + 92) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 92) +
                one_over_two_q * *(b + 53 * OS1_S1 + 61);
            *(b + 53 * OS1_S1 + 133) =
                prefactor_y * *(b + 53 * OS1_S1 + 93) -
                p_over_q * *(b + 80 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 93);
            *(b + 53 * OS1_S1 + 134) =
                prefactor_x * *(b + 53 * OS1_S1 + 98) -
                p_over_q * *(b + 74 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 70);
            *(b + 53 * OS1_S1 + 135) =
                prefactor_x * *(b + 53 * OS1_S1 + 99) -
                p_over_q * *(b + 74 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 71);
            *(b + 53 * OS1_S1 + 136) =
                prefactor_z * *(b + 53 * OS1_S1 + 94) -
                p_over_q * *(b + 81 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 94);
            *(b + 53 * OS1_S1 + 137) =
                prefactor_z * *(b + 53 * OS1_S1 + 95) -
                p_over_q * *(b + 81 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 95) +
                one_over_two_q * *(b + 53 * OS1_S1 + 62);
            *(b + 53 * OS1_S1 + 138) =
                prefactor_y * *(b + 53 * OS1_S1 + 97) -
                p_over_q * *(b + 80 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 97) +
                one_over_two_q * *(b + 53 * OS1_S1 + 65);
            *(b + 53 * OS1_S1 + 139) =
                prefactor_y * *(b + 53 * OS1_S1 + 98) -
                p_over_q * *(b + 80 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 98);
            *(b + 53 * OS1_S1 + 140) =
                prefactor_x * *(b + 53 * OS1_S1 + 104) -
                p_over_q * *(b + 74 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 76);
            *(b + 53 * OS1_S1 + 141) = prefactor_x * *(b + 53 * OS1_S1 + 105) -
                                       p_over_q * *(b + 74 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 77);
            *(b + 53 * OS1_S1 + 142) =
                prefactor_z * *(b + 53 * OS1_S1 + 99) -
                p_over_q * *(b + 81 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 99);
            *(b + 53 * OS1_S1 + 143) = prefactor_x * *(b + 53 * OS1_S1 + 107) -
                                       p_over_q * *(b + 74 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 79);
            *(b + 53 * OS1_S1 + 144) = prefactor_x * *(b + 53 * OS1_S1 + 108) -
                                       p_over_q * *(b + 74 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 80);
            *(b + 53 * OS1_S1 + 145) = prefactor_x * *(b + 53 * OS1_S1 + 109) -
                                       p_over_q * *(b + 74 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 81);
            *(b + 53 * OS1_S1 + 146) =
                prefactor_y * *(b + 53 * OS1_S1 + 104) -
                p_over_q * *(b + 80 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 104);
            *(b + 53 * OS1_S1 + 147) = prefactor_x * *(b + 53 * OS1_S1 + 111) -
                                       p_over_q * *(b + 74 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 53 * OS1_S1 + 83);
            *(b + 53 * OS1_S1 + 148) = prefactor_x * *(b + 53 * OS1_S1 + 112) -
                                       p_over_q * *(b + 74 * OS1_S1 + 112);
            *(b + 53 * OS1_S1 + 149) = prefactor_x * *(b + 53 * OS1_S1 + 113) -
                                       p_over_q * *(b + 74 * OS1_S1 + 113);
            *(b + 53 * OS1_S1 + 150) = prefactor_x * *(b + 53 * OS1_S1 + 114) -
                                       p_over_q * *(b + 74 * OS1_S1 + 114);
            *(b + 53 * OS1_S1 + 151) = prefactor_x * *(b + 53 * OS1_S1 + 115) -
                                       p_over_q * *(b + 74 * OS1_S1 + 115);
            *(b + 53 * OS1_S1 + 152) = prefactor_x * *(b + 53 * OS1_S1 + 116) -
                                       p_over_q * *(b + 74 * OS1_S1 + 116);
            *(b + 53 * OS1_S1 + 153) = prefactor_x * *(b + 53 * OS1_S1 + 117) -
                                       p_over_q * *(b + 74 * OS1_S1 + 117);
            *(b + 53 * OS1_S1 + 154) = prefactor_x * *(b + 53 * OS1_S1 + 118) -
                                       p_over_q * *(b + 74 * OS1_S1 + 118);
            *(b + 53 * OS1_S1 + 155) = prefactor_x * *(b + 53 * OS1_S1 + 119) -
                                       p_over_q * *(b + 74 * OS1_S1 + 119);
            *(b + 53 * OS1_S1 + 156) =
                prefactor_y * *(b + 53 * OS1_S1 + 112) -
                p_over_q * *(b + 80 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 53 * OS1_S1 + 77);
            *(b + 53 * OS1_S1 + 157) =
                prefactor_z * *(b + 53 * OS1_S1 + 112) -
                p_over_q * *(b + 81 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 112);
            *(b + 53 * OS1_S1 + 158) =
                prefactor_z * *(b + 53 * OS1_S1 + 113) -
                p_over_q * *(b + 81 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 113) +
                one_over_two_q * *(b + 53 * OS1_S1 + 77);
            *(b + 53 * OS1_S1 + 159) =
                prefactor_z * *(b + 53 * OS1_S1 + 114) -
                p_over_q * *(b + 81 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 78);
            *(b + 53 * OS1_S1 + 160) =
                prefactor_y * *(b + 53 * OS1_S1 + 116) -
                p_over_q * *(b + 80 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 53 * OS1_S1 + 81);
            *(b + 53 * OS1_S1 + 161) =
                prefactor_y * *(b + 53 * OS1_S1 + 117) -
                p_over_q * *(b + 80 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 53 * OS1_S1 + 82);
            *(b + 53 * OS1_S1 + 162) =
                prefactor_y * *(b + 53 * OS1_S1 + 118) -
                p_over_q * *(b + 80 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 118) +
                one_over_two_q * *(b + 53 * OS1_S1 + 83);
            *(b + 53 * OS1_S1 + 163) =
                prefactor_y * *(b + 53 * OS1_S1 + 119) -
                p_over_q * *(b + 80 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 33 * OS1_S1 + 119);
            *(b + 53 * OS1_S1 + 164) =
                prefactor_z * *(b + 53 * OS1_S1 + 119) -
                p_over_q * *(b + 81 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 32 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 53 * OS1_S1 + 83);
            *(b + 54 * OS1_S1 + 120) =
                prefactor_x * *(b + 54 * OS1_S1 + 84) -
                p_over_q * *(b + 75 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 54 * OS1_S1 + 56);
            *(b + 54 * OS1_S1 + 121) = prefactor_y * *(b + 54 * OS1_S1 + 84) -
                                       p_over_q * *(b + 81 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 84);
            *(b + 54 * OS1_S1 + 122) =
                prefactor_z * *(b + 54 * OS1_S1 + 84) -
                p_over_q * *(b + 82 * OS1_S1 + 84) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 84);
            *(b + 54 * OS1_S1 + 123) =
                prefactor_y * *(b + 54 * OS1_S1 + 85) -
                p_over_q * *(b + 81 * OS1_S1 + 85) +
                one_over_two_q * *(b + 34 * OS1_S1 + 85) +
                one_over_two_q * *(b + 54 * OS1_S1 + 56);
            *(b + 54 * OS1_S1 + 124) = prefactor_y * *(b + 54 * OS1_S1 + 86) -
                                       p_over_q * *(b + 81 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 86);
            *(b + 54 * OS1_S1 + 125) =
                prefactor_z * *(b + 54 * OS1_S1 + 86) -
                p_over_q * *(b + 82 * OS1_S1 + 86) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 86) +
                one_over_two_q * *(b + 54 * OS1_S1 + 56);
            *(b + 54 * OS1_S1 + 126) =
                prefactor_y * *(b + 54 * OS1_S1 + 87) -
                p_over_q * *(b + 81 * OS1_S1 + 87) +
                one_over_two_q * *(b + 34 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 57);
            *(b + 54 * OS1_S1 + 127) =
                prefactor_z * *(b + 54 * OS1_S1 + 87) -
                p_over_q * *(b + 82 * OS1_S1 + 87) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 87);
            *(b + 54 * OS1_S1 + 128) = prefactor_y * *(b + 54 * OS1_S1 + 89) -
                                       p_over_q * *(b + 81 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 89);
            *(b + 54 * OS1_S1 + 129) =
                prefactor_z * *(b + 54 * OS1_S1 + 89) -
                p_over_q * *(b + 82 * OS1_S1 + 89) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 58);
            *(b + 54 * OS1_S1 + 130) =
                prefactor_x * *(b + 54 * OS1_S1 + 94) -
                p_over_q * *(b + 75 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 54 * OS1_S1 + 66);
            *(b + 54 * OS1_S1 + 131) =
                prefactor_z * *(b + 54 * OS1_S1 + 90) -
                p_over_q * *(b + 82 * OS1_S1 + 90) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 90);
            *(b + 54 * OS1_S1 + 132) =
                prefactor_y * *(b + 54 * OS1_S1 + 92) -
                p_over_q * *(b + 81 * OS1_S1 + 92) +
                one_over_two_q * *(b + 34 * OS1_S1 + 92) +
                one_over_two_q * *(b + 54 * OS1_S1 + 61);
            *(b + 54 * OS1_S1 + 133) = prefactor_y * *(b + 54 * OS1_S1 + 93) -
                                       p_over_q * *(b + 81 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 93);
            *(b + 54 * OS1_S1 + 134) =
                prefactor_x * *(b + 54 * OS1_S1 + 98) -
                p_over_q * *(b + 75 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 54 * OS1_S1 + 70);
            *(b + 54 * OS1_S1 + 135) =
                prefactor_x * *(b + 54 * OS1_S1 + 99) -
                p_over_q * *(b + 75 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 71);
            *(b + 54 * OS1_S1 + 136) =
                prefactor_z * *(b + 54 * OS1_S1 + 94) -
                p_over_q * *(b + 82 * OS1_S1 + 94) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 94);
            *(b + 54 * OS1_S1 + 137) =
                prefactor_z * *(b + 54 * OS1_S1 + 95) -
                p_over_q * *(b + 82 * OS1_S1 + 95) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 95) +
                one_over_two_q * *(b + 54 * OS1_S1 + 62);
            *(b + 54 * OS1_S1 + 138) =
                prefactor_y * *(b + 54 * OS1_S1 + 97) -
                p_over_q * *(b + 81 * OS1_S1 + 97) +
                one_over_two_q * *(b + 34 * OS1_S1 + 97) +
                one_over_two_q * *(b + 54 * OS1_S1 + 65);
            *(b + 54 * OS1_S1 + 139) = prefactor_y * *(b + 54 * OS1_S1 + 98) -
                                       p_over_q * *(b + 81 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 34 * OS1_S1 + 98);
            *(b + 54 * OS1_S1 + 140) =
                prefactor_x * *(b + 54 * OS1_S1 + 104) -
                p_over_q * *(b + 75 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 76);
            *(b + 54 * OS1_S1 + 141) = prefactor_x * *(b + 54 * OS1_S1 + 105) -
                                       p_over_q * *(b + 75 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 77);
            *(b + 54 * OS1_S1 + 142) =
                prefactor_z * *(b + 54 * OS1_S1 + 99) -
                p_over_q * *(b + 82 * OS1_S1 + 99) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 99);
            *(b + 54 * OS1_S1 + 143) = prefactor_x * *(b + 54 * OS1_S1 + 107) -
                                       p_over_q * *(b + 75 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 79);
            *(b + 54 * OS1_S1 + 144) = prefactor_x * *(b + 54 * OS1_S1 + 108) -
                                       p_over_q * *(b + 75 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 80);
            *(b + 54 * OS1_S1 + 145) = prefactor_x * *(b + 54 * OS1_S1 + 109) -
                                       p_over_q * *(b + 75 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 81);
            *(b + 54 * OS1_S1 + 146) =
                prefactor_y * *(b + 54 * OS1_S1 + 104) -
                p_over_q * *(b + 81 * OS1_S1 + 104) +
                one_over_two_q * *(b + 34 * OS1_S1 + 104);
            *(b + 54 * OS1_S1 + 147) = prefactor_x * *(b + 54 * OS1_S1 + 111) -
                                       p_over_q * *(b + 75 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 54 * OS1_S1 + 83);
            *(b + 54 * OS1_S1 + 148) = prefactor_x * *(b + 54 * OS1_S1 + 112) -
                                       p_over_q * *(b + 75 * OS1_S1 + 112);
            *(b + 54 * OS1_S1 + 149) = prefactor_x * *(b + 54 * OS1_S1 + 113) -
                                       p_over_q * *(b + 75 * OS1_S1 + 113);
            *(b + 54 * OS1_S1 + 150) = prefactor_x * *(b + 54 * OS1_S1 + 114) -
                                       p_over_q * *(b + 75 * OS1_S1 + 114);
            *(b + 54 * OS1_S1 + 151) = prefactor_x * *(b + 54 * OS1_S1 + 115) -
                                       p_over_q * *(b + 75 * OS1_S1 + 115);
            *(b + 54 * OS1_S1 + 152) = prefactor_x * *(b + 54 * OS1_S1 + 116) -
                                       p_over_q * *(b + 75 * OS1_S1 + 116);
            *(b + 54 * OS1_S1 + 153) = prefactor_x * *(b + 54 * OS1_S1 + 117) -
                                       p_over_q * *(b + 75 * OS1_S1 + 117);
            *(b + 54 * OS1_S1 + 154) = prefactor_x * *(b + 54 * OS1_S1 + 118) -
                                       p_over_q * *(b + 75 * OS1_S1 + 118);
            *(b + 54 * OS1_S1 + 155) = prefactor_x * *(b + 54 * OS1_S1 + 119) -
                                       p_over_q * *(b + 75 * OS1_S1 + 119);
            *(b + 54 * OS1_S1 + 156) =
                prefactor_y * *(b + 54 * OS1_S1 + 112) -
                p_over_q * *(b + 81 * OS1_S1 + 112) +
                one_over_two_q * *(b + 34 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 54 * OS1_S1 + 77);
            *(b + 54 * OS1_S1 + 157) =
                prefactor_z * *(b + 54 * OS1_S1 + 112) -
                p_over_q * *(b + 82 * OS1_S1 + 112) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 112);
            *(b + 54 * OS1_S1 + 158) =
                prefactor_z * *(b + 54 * OS1_S1 + 113) -
                p_over_q * *(b + 82 * OS1_S1 + 113) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 113) +
                one_over_two_q * *(b + 54 * OS1_S1 + 77);
            *(b + 54 * OS1_S1 + 159) =
                prefactor_z * *(b + 54 * OS1_S1 + 114) -
                p_over_q * *(b + 82 * OS1_S1 + 114) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 78);
            *(b + 54 * OS1_S1 + 160) =
                prefactor_y * *(b + 54 * OS1_S1 + 116) -
                p_over_q * *(b + 81 * OS1_S1 + 116) +
                one_over_two_q * *(b + 34 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 54 * OS1_S1 + 81);
            *(b + 54 * OS1_S1 + 161) =
                prefactor_y * *(b + 54 * OS1_S1 + 117) -
                p_over_q * *(b + 81 * OS1_S1 + 117) +
                one_over_two_q * *(b + 34 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 54 * OS1_S1 + 82);
            *(b + 54 * OS1_S1 + 162) =
                prefactor_y * *(b + 54 * OS1_S1 + 118) -
                p_over_q * *(b + 81 * OS1_S1 + 118) +
                one_over_two_q * *(b + 34 * OS1_S1 + 118) +
                one_over_two_q * *(b + 54 * OS1_S1 + 83);
            *(b + 54 * OS1_S1 + 163) =
                prefactor_y * *(b + 54 * OS1_S1 + 119) -
                p_over_q * *(b + 81 * OS1_S1 + 119) +
                one_over_two_q * *(b + 34 * OS1_S1 + 119);
            *(b + 54 * OS1_S1 + 164) =
                prefactor_z * *(b + 54 * OS1_S1 + 119) -
                p_over_q * *(b + 82 * OS1_S1 + 119) +
                4 * one_over_two_q * *(b + 33 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 54 * OS1_S1 + 83);
            *(b + 55 * OS1_S1 + 120) =
                prefactor_x * *(b + 55 * OS1_S1 + 84) -
                p_over_q * *(b + 76 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 55 * OS1_S1 + 56);
            *(b + 55 * OS1_S1 + 121) = prefactor_y * *(b + 55 * OS1_S1 + 84) -
                                       p_over_q * *(b + 82 * OS1_S1 + 84);
            *(b + 55 * OS1_S1 + 122) =
                prefactor_z * *(b + 55 * OS1_S1 + 84) -
                p_over_q * *(b + 83 * OS1_S1 + 84) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 84);
            *(b + 55 * OS1_S1 + 123) = prefactor_y * *(b + 55 * OS1_S1 + 85) -
                                       p_over_q * *(b + 82 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 56);
            *(b + 55 * OS1_S1 + 124) = prefactor_y * *(b + 55 * OS1_S1 + 86) -
                                       p_over_q * *(b + 82 * OS1_S1 + 86);
            *(b + 55 * OS1_S1 + 125) =
                prefactor_z * *(b + 55 * OS1_S1 + 86) -
                p_over_q * *(b + 83 * OS1_S1 + 86) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 86) +
                one_over_two_q * *(b + 55 * OS1_S1 + 56);
            *(b + 55 * OS1_S1 + 126) =
                prefactor_y * *(b + 55 * OS1_S1 + 87) -
                p_over_q * *(b + 82 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 57);
            *(b + 55 * OS1_S1 + 127) =
                prefactor_z * *(b + 55 * OS1_S1 + 87) -
                p_over_q * *(b + 83 * OS1_S1 + 87) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 87);
            *(b + 55 * OS1_S1 + 128) = prefactor_y * *(b + 55 * OS1_S1 + 89) -
                                       p_over_q * *(b + 82 * OS1_S1 + 89);
            *(b + 55 * OS1_S1 + 129) =
                prefactor_z * *(b + 55 * OS1_S1 + 89) -
                p_over_q * *(b + 83 * OS1_S1 + 89) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 58);
            *(b + 55 * OS1_S1 + 130) =
                prefactor_y * *(b + 55 * OS1_S1 + 90) -
                p_over_q * *(b + 82 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 55 * OS1_S1 + 59);
            *(b + 55 * OS1_S1 + 131) =
                prefactor_z * *(b + 55 * OS1_S1 + 90) -
                p_over_q * *(b + 83 * OS1_S1 + 90) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 90);
            *(b + 55 * OS1_S1 + 132) = prefactor_y * *(b + 55 * OS1_S1 + 92) -
                                       p_over_q * *(b + 82 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 61);
            *(b + 55 * OS1_S1 + 133) = prefactor_y * *(b + 55 * OS1_S1 + 93) -
                                       p_over_q * *(b + 82 * OS1_S1 + 93);
            *(b + 55 * OS1_S1 + 134) =
                prefactor_x * *(b + 55 * OS1_S1 + 98) -
                p_over_q * *(b + 76 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 55 * OS1_S1 + 70);
            *(b + 55 * OS1_S1 + 135) =
                prefactor_x * *(b + 55 * OS1_S1 + 99) -
                p_over_q * *(b + 76 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 71);
            *(b + 55 * OS1_S1 + 136) =
                prefactor_z * *(b + 55 * OS1_S1 + 94) -
                p_over_q * *(b + 83 * OS1_S1 + 94) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 94);
            *(b + 55 * OS1_S1 + 137) =
                prefactor_z * *(b + 55 * OS1_S1 + 95) -
                p_over_q * *(b + 83 * OS1_S1 + 95) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 95) +
                one_over_two_q * *(b + 55 * OS1_S1 + 62);
            *(b + 55 * OS1_S1 + 138) = prefactor_y * *(b + 55 * OS1_S1 + 97) -
                                       p_over_q * *(b + 82 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 65);
            *(b + 55 * OS1_S1 + 139) = prefactor_y * *(b + 55 * OS1_S1 + 98) -
                                       p_over_q * *(b + 82 * OS1_S1 + 98);
            *(b + 55 * OS1_S1 + 140) =
                prefactor_x * *(b + 55 * OS1_S1 + 104) -
                p_over_q * *(b + 76 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 76);
            *(b + 55 * OS1_S1 + 141) = prefactor_x * *(b + 55 * OS1_S1 + 105) -
                                       p_over_q * *(b + 76 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 77);
            *(b + 55 * OS1_S1 + 142) =
                prefactor_z * *(b + 55 * OS1_S1 + 99) -
                p_over_q * *(b + 83 * OS1_S1 + 99) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 99);
            *(b + 55 * OS1_S1 + 143) = prefactor_x * *(b + 55 * OS1_S1 + 107) -
                                       p_over_q * *(b + 76 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 79);
            *(b + 55 * OS1_S1 + 144) = prefactor_x * *(b + 55 * OS1_S1 + 108) -
                                       p_over_q * *(b + 76 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 80);
            *(b + 55 * OS1_S1 + 145) = prefactor_y * *(b + 55 * OS1_S1 + 103) -
                                       p_over_q * *(b + 82 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 70);
            *(b + 55 * OS1_S1 + 146) = prefactor_y * *(b + 55 * OS1_S1 + 104) -
                                       p_over_q * *(b + 82 * OS1_S1 + 104);
            *(b + 55 * OS1_S1 + 147) = prefactor_x * *(b + 55 * OS1_S1 + 111) -
                                       p_over_q * *(b + 76 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 83);
            *(b + 55 * OS1_S1 + 148) = prefactor_x * *(b + 55 * OS1_S1 + 112) -
                                       p_over_q * *(b + 76 * OS1_S1 + 112);
            *(b + 55 * OS1_S1 + 149) = prefactor_x * *(b + 55 * OS1_S1 + 113) -
                                       p_over_q * *(b + 76 * OS1_S1 + 113);
            *(b + 55 * OS1_S1 + 150) = prefactor_x * *(b + 55 * OS1_S1 + 114) -
                                       p_over_q * *(b + 76 * OS1_S1 + 114);
            *(b + 55 * OS1_S1 + 151) = prefactor_x * *(b + 55 * OS1_S1 + 115) -
                                       p_over_q * *(b + 76 * OS1_S1 + 115);
            *(b + 55 * OS1_S1 + 152) = prefactor_x * *(b + 55 * OS1_S1 + 116) -
                                       p_over_q * *(b + 76 * OS1_S1 + 116);
            *(b + 55 * OS1_S1 + 153) = prefactor_x * *(b + 55 * OS1_S1 + 117) -
                                       p_over_q * *(b + 76 * OS1_S1 + 117);
            *(b + 55 * OS1_S1 + 154) = prefactor_y * *(b + 55 * OS1_S1 + 111) -
                                       p_over_q * *(b + 82 * OS1_S1 + 111);
            *(b + 55 * OS1_S1 + 155) = prefactor_x * *(b + 55 * OS1_S1 + 119) -
                                       p_over_q * *(b + 76 * OS1_S1 + 119);
            *(b + 55 * OS1_S1 + 156) =
                prefactor_y * *(b + 55 * OS1_S1 + 112) -
                p_over_q * *(b + 82 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 55 * OS1_S1 + 77);
            *(b + 55 * OS1_S1 + 157) =
                prefactor_z * *(b + 55 * OS1_S1 + 112) -
                p_over_q * *(b + 83 * OS1_S1 + 112) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 112);
            *(b + 55 * OS1_S1 + 158) =
                prefactor_z * *(b + 55 * OS1_S1 + 113) -
                p_over_q * *(b + 83 * OS1_S1 + 113) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 113) +
                one_over_two_q * *(b + 55 * OS1_S1 + 77);
            *(b + 55 * OS1_S1 + 159) =
                prefactor_z * *(b + 55 * OS1_S1 + 114) -
                p_over_q * *(b + 83 * OS1_S1 + 114) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 78);
            *(b + 55 * OS1_S1 + 160) =
                prefactor_y * *(b + 55 * OS1_S1 + 116) -
                p_over_q * *(b + 82 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 55 * OS1_S1 + 81);
            *(b + 55 * OS1_S1 + 161) =
                prefactor_y * *(b + 55 * OS1_S1 + 117) -
                p_over_q * *(b + 82 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 55 * OS1_S1 + 82);
            *(b + 55 * OS1_S1 + 162) = prefactor_y * *(b + 55 * OS1_S1 + 118) -
                                       p_over_q * *(b + 82 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 55 * OS1_S1 + 83);
            *(b + 55 * OS1_S1 + 163) = prefactor_y * *(b + 55 * OS1_S1 + 119) -
                                       p_over_q * *(b + 82 * OS1_S1 + 119);
            *(b + 55 * OS1_S1 + 164) =
                prefactor_z * *(b + 55 * OS1_S1 + 119) -
                p_over_q * *(b + 83 * OS1_S1 + 119) +
                5 * one_over_two_q * *(b + 34 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 55 * OS1_S1 + 83);
            return;
        }
    }
}
