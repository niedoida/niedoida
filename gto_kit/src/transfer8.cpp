/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_0_8(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 0 * OS1_S1 + 120) =
                prefactor_x * *(b + 0 * OS1_S1 + 84) -
                p_over_q * *(b + 1 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 0 * OS1_S1 + 56);
            *(b + 0 * OS1_S1 + 121) = prefactor_y * *(b + 0 * OS1_S1 + 84) -
                                      p_over_q * *(b + 2 * OS1_S1 + 84);
            *(b + 0 * OS1_S1 + 122) = prefactor_z * *(b + 0 * OS1_S1 + 84) -
                                      p_over_q * *(b + 3 * OS1_S1 + 84);
            *(b + 0 * OS1_S1 + 123) = prefactor_y * *(b + 0 * OS1_S1 + 85) -
                                      p_over_q * *(b + 2 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 56);
            *(b + 0 * OS1_S1 + 124) = prefactor_z * *(b + 0 * OS1_S1 + 85) -
                                      p_over_q * *(b + 3 * OS1_S1 + 85);
            *(b + 0 * OS1_S1 + 125) = prefactor_z * *(b + 0 * OS1_S1 + 86) -
                                      p_over_q * *(b + 3 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 56);
            *(b + 0 * OS1_S1 + 126) =
                prefactor_y * *(b + 0 * OS1_S1 + 87) -
                p_over_q * *(b + 2 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 57);
            *(b + 0 * OS1_S1 + 127) = prefactor_z * *(b + 0 * OS1_S1 + 87) -
                                      p_over_q * *(b + 3 * OS1_S1 + 87);
            *(b + 0 * OS1_S1 + 128) = prefactor_y * *(b + 0 * OS1_S1 + 89) -
                                      p_over_q * *(b + 2 * OS1_S1 + 89);
            *(b + 0 * OS1_S1 + 129) =
                prefactor_z * *(b + 0 * OS1_S1 + 89) -
                p_over_q * *(b + 3 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 58);
            *(b + 0 * OS1_S1 + 130) =
                prefactor_y * *(b + 0 * OS1_S1 + 90) -
                p_over_q * *(b + 2 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 0 * OS1_S1 + 59);
            *(b + 0 * OS1_S1 + 131) = prefactor_z * *(b + 0 * OS1_S1 + 90) -
                                      p_over_q * *(b + 3 * OS1_S1 + 90);
            *(b + 0 * OS1_S1 + 132) = prefactor_z * *(b + 0 * OS1_S1 + 91) -
                                      p_over_q * *(b + 3 * OS1_S1 + 91) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 59);
            *(b + 0 * OS1_S1 + 133) = prefactor_y * *(b + 0 * OS1_S1 + 93) -
                                      p_over_q * *(b + 2 * OS1_S1 + 93);
            *(b + 0 * OS1_S1 + 134) =
                prefactor_z * *(b + 0 * OS1_S1 + 93) -
                p_over_q * *(b + 3 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 0 * OS1_S1 + 61);
            *(b + 0 * OS1_S1 + 135) =
                prefactor_x * *(b + 0 * OS1_S1 + 99) -
                p_over_q * *(b + 1 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 71);
            *(b + 0 * OS1_S1 + 136) = prefactor_z * *(b + 0 * OS1_S1 + 94) -
                                      p_over_q * *(b + 3 * OS1_S1 + 94);
            *(b + 0 * OS1_S1 + 137) = prefactor_z * *(b + 0 * OS1_S1 + 95) -
                                      p_over_q * *(b + 3 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 62);
            *(b + 0 * OS1_S1 + 138) = prefactor_y * *(b + 0 * OS1_S1 + 97) -
                                      p_over_q * *(b + 2 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 65);
            *(b + 0 * OS1_S1 + 139) = prefactor_y * *(b + 0 * OS1_S1 + 98) -
                                      p_over_q * *(b + 2 * OS1_S1 + 98);
            *(b + 0 * OS1_S1 + 140) =
                prefactor_x * *(b + 0 * OS1_S1 + 104) -
                p_over_q * *(b + 1 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 76);
            *(b + 0 * OS1_S1 + 141) = prefactor_x * *(b + 0 * OS1_S1 + 105) -
                                      p_over_q * *(b + 1 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 77);
            *(b + 0 * OS1_S1 + 142) = prefactor_z * *(b + 0 * OS1_S1 + 99) -
                                      p_over_q * *(b + 3 * OS1_S1 + 99);
            *(b + 0 * OS1_S1 + 143) = prefactor_z * *(b + 0 * OS1_S1 + 100) -
                                      p_over_q * *(b + 3 * OS1_S1 + 100) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 66);
            *(b + 0 * OS1_S1 + 144) = prefactor_x * *(b + 0 * OS1_S1 + 108) -
                                      p_over_q * *(b + 1 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 80);
            *(b + 0 * OS1_S1 + 145) = prefactor_y * *(b + 0 * OS1_S1 + 103) -
                                      p_over_q * *(b + 2 * OS1_S1 + 103) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 70);
            *(b + 0 * OS1_S1 + 146) = prefactor_y * *(b + 0 * OS1_S1 + 104) -
                                      p_over_q * *(b + 2 * OS1_S1 + 104);
            *(b + 0 * OS1_S1 + 147) = prefactor_x * *(b + 0 * OS1_S1 + 111) -
                                      p_over_q * *(b + 1 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 83);
            *(b + 0 * OS1_S1 + 148) = prefactor_x * *(b + 0 * OS1_S1 + 112) -
                                      p_over_q * *(b + 1 * OS1_S1 + 112);
            *(b + 0 * OS1_S1 + 149) = prefactor_z * *(b + 0 * OS1_S1 + 105) -
                                      p_over_q * *(b + 3 * OS1_S1 + 105);
            *(b + 0 * OS1_S1 + 150) = prefactor_x * *(b + 0 * OS1_S1 + 114) -
                                      p_over_q * *(b + 1 * OS1_S1 + 114);
            *(b + 0 * OS1_S1 + 151) = prefactor_x * *(b + 0 * OS1_S1 + 115) -
                                      p_over_q * *(b + 1 * OS1_S1 + 115);
            *(b + 0 * OS1_S1 + 152) = prefactor_x * *(b + 0 * OS1_S1 + 116) -
                                      p_over_q * *(b + 1 * OS1_S1 + 116);
            *(b + 0 * OS1_S1 + 153) = prefactor_x * *(b + 0 * OS1_S1 + 117) -
                                      p_over_q * *(b + 1 * OS1_S1 + 117);
            *(b + 0 * OS1_S1 + 154) = prefactor_y * *(b + 0 * OS1_S1 + 111) -
                                      p_over_q * *(b + 2 * OS1_S1 + 111);
            *(b + 0 * OS1_S1 + 155) = prefactor_x * *(b + 0 * OS1_S1 + 119) -
                                      p_over_q * *(b + 1 * OS1_S1 + 119);
            *(b + 0 * OS1_S1 + 156) =
                prefactor_y * *(b + 0 * OS1_S1 + 112) -
                p_over_q * *(b + 2 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 0 * OS1_S1 + 77);
            *(b + 0 * OS1_S1 + 157) = prefactor_z * *(b + 0 * OS1_S1 + 112) -
                                      p_over_q * *(b + 3 * OS1_S1 + 112);
            *(b + 0 * OS1_S1 + 158) = prefactor_z * *(b + 0 * OS1_S1 + 113) -
                                      p_over_q * *(b + 3 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 77);
            *(b + 0 * OS1_S1 + 159) =
                prefactor_z * *(b + 0 * OS1_S1 + 114) -
                p_over_q * *(b + 3 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 78);
            *(b + 0 * OS1_S1 + 160) =
                prefactor_z * *(b + 0 * OS1_S1 + 115) -
                p_over_q * *(b + 3 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 0 * OS1_S1 + 79);
            *(b + 0 * OS1_S1 + 161) =
                prefactor_y * *(b + 0 * OS1_S1 + 117) -
                p_over_q * *(b + 2 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 0 * OS1_S1 + 82);
            *(b + 0 * OS1_S1 + 162) = prefactor_y * *(b + 0 * OS1_S1 + 118) -
                                      p_over_q * *(b + 2 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 83);
            *(b + 0 * OS1_S1 + 163) = prefactor_y * *(b + 0 * OS1_S1 + 119) -
                                      p_over_q * *(b + 2 * OS1_S1 + 119);
            *(b + 0 * OS1_S1 + 164) =
                prefactor_z * *(b + 0 * OS1_S1 + 119) -
                p_over_q * *(b + 3 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 0 * OS1_S1 + 83);
            return;
        }
        void transfer_1_8(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 1 * OS1_S1 + 120) =
                prefactor_x * *(b + 1 * OS1_S1 + 84) -
                p_over_q * *(b + 4 * OS1_S1 + 84) +
                one_over_two_q * *(b + 0 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 1 * OS1_S1 + 56);
            *(b + 1 * OS1_S1 + 121) = prefactor_y * *(b + 1 * OS1_S1 + 84) -
                                      p_over_q * *(b + 5 * OS1_S1 + 84);
            *(b + 1 * OS1_S1 + 122) = prefactor_z * *(b + 1 * OS1_S1 + 84) -
                                      p_over_q * *(b + 6 * OS1_S1 + 84);
            *(b + 1 * OS1_S1 + 123) = prefactor_y * *(b + 1 * OS1_S1 + 85) -
                                      p_over_q * *(b + 5 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 56);
            *(b + 1 * OS1_S1 + 124) = prefactor_z * *(b + 1 * OS1_S1 + 85) -
                                      p_over_q * *(b + 6 * OS1_S1 + 85);
            *(b + 1 * OS1_S1 + 125) = prefactor_z * *(b + 1 * OS1_S1 + 86) -
                                      p_over_q * *(b + 6 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 56);
            *(b + 1 * OS1_S1 + 126) =
                prefactor_y * *(b + 1 * OS1_S1 + 87) -
                p_over_q * *(b + 5 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 57);
            *(b + 1 * OS1_S1 + 127) = prefactor_z * *(b + 1 * OS1_S1 + 87) -
                                      p_over_q * *(b + 6 * OS1_S1 + 87);
            *(b + 1 * OS1_S1 + 128) = prefactor_y * *(b + 1 * OS1_S1 + 89) -
                                      p_over_q * *(b + 5 * OS1_S1 + 89);
            *(b + 1 * OS1_S1 + 129) =
                prefactor_z * *(b + 1 * OS1_S1 + 89) -
                p_over_q * *(b + 6 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 58);
            *(b + 1 * OS1_S1 + 130) =
                prefactor_y * *(b + 1 * OS1_S1 + 90) -
                p_over_q * *(b + 5 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 1 * OS1_S1 + 59);
            *(b + 1 * OS1_S1 + 131) = prefactor_z * *(b + 1 * OS1_S1 + 90) -
                                      p_over_q * *(b + 6 * OS1_S1 + 90);
            *(b + 1 * OS1_S1 + 132) = prefactor_z * *(b + 1 * OS1_S1 + 91) -
                                      p_over_q * *(b + 6 * OS1_S1 + 91) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 59);
            *(b + 1 * OS1_S1 + 133) = prefactor_y * *(b + 1 * OS1_S1 + 93) -
                                      p_over_q * *(b + 5 * OS1_S1 + 93);
            *(b + 1 * OS1_S1 + 134) =
                prefactor_z * *(b + 1 * OS1_S1 + 93) -
                p_over_q * *(b + 6 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 1 * OS1_S1 + 61);
            *(b + 1 * OS1_S1 + 135) =
                prefactor_x * *(b + 1 * OS1_S1 + 99) -
                p_over_q * *(b + 4 * OS1_S1 + 99) +
                one_over_two_q * *(b + 0 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 71);
            *(b + 1 * OS1_S1 + 136) = prefactor_z * *(b + 1 * OS1_S1 + 94) -
                                      p_over_q * *(b + 6 * OS1_S1 + 94);
            *(b + 1 * OS1_S1 + 137) = prefactor_z * *(b + 1 * OS1_S1 + 95) -
                                      p_over_q * *(b + 6 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 62);
            *(b + 1 * OS1_S1 + 138) = prefactor_y * *(b + 1 * OS1_S1 + 97) -
                                      p_over_q * *(b + 5 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 65);
            *(b + 1 * OS1_S1 + 139) = prefactor_y * *(b + 1 * OS1_S1 + 98) -
                                      p_over_q * *(b + 5 * OS1_S1 + 98);
            *(b + 1 * OS1_S1 + 140) =
                prefactor_x * *(b + 1 * OS1_S1 + 104) -
                p_over_q * *(b + 4 * OS1_S1 + 104) +
                one_over_two_q * *(b + 0 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 76);
            *(b + 1 * OS1_S1 + 141) = prefactor_x * *(b + 1 * OS1_S1 + 105) -
                                      p_over_q * *(b + 4 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 77);
            *(b + 1 * OS1_S1 + 142) = prefactor_z * *(b + 1 * OS1_S1 + 99) -
                                      p_over_q * *(b + 6 * OS1_S1 + 99);
            *(b + 1 * OS1_S1 + 143) = prefactor_z * *(b + 1 * OS1_S1 + 100) -
                                      p_over_q * *(b + 6 * OS1_S1 + 100) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 66);
            *(b + 1 * OS1_S1 + 144) = prefactor_x * *(b + 1 * OS1_S1 + 108) -
                                      p_over_q * *(b + 4 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 80);
            *(b + 1 * OS1_S1 + 145) = prefactor_y * *(b + 1 * OS1_S1 + 103) -
                                      p_over_q * *(b + 5 * OS1_S1 + 103) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 70);
            *(b + 1 * OS1_S1 + 146) = prefactor_y * *(b + 1 * OS1_S1 + 104) -
                                      p_over_q * *(b + 5 * OS1_S1 + 104);
            *(b + 1 * OS1_S1 + 147) = prefactor_x * *(b + 1 * OS1_S1 + 111) -
                                      p_over_q * *(b + 4 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 83);
            *(b + 1 * OS1_S1 + 148) = prefactor_x * *(b + 1 * OS1_S1 + 112) -
                                      p_over_q * *(b + 4 * OS1_S1 + 112) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 112);
            *(b + 1 * OS1_S1 + 149) = prefactor_z * *(b + 1 * OS1_S1 + 105) -
                                      p_over_q * *(b + 6 * OS1_S1 + 105);
            *(b + 1 * OS1_S1 + 150) = prefactor_x * *(b + 1 * OS1_S1 + 114) -
                                      p_over_q * *(b + 4 * OS1_S1 + 114) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 114);
            *(b + 1 * OS1_S1 + 151) = prefactor_x * *(b + 1 * OS1_S1 + 115) -
                                      p_over_q * *(b + 4 * OS1_S1 + 115) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 115);
            *(b + 1 * OS1_S1 + 152) = prefactor_x * *(b + 1 * OS1_S1 + 116) -
                                      p_over_q * *(b + 4 * OS1_S1 + 116) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 116);
            *(b + 1 * OS1_S1 + 153) = prefactor_x * *(b + 1 * OS1_S1 + 117) -
                                      p_over_q * *(b + 4 * OS1_S1 + 117) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 117);
            *(b + 1 * OS1_S1 + 154) = prefactor_y * *(b + 1 * OS1_S1 + 111) -
                                      p_over_q * *(b + 5 * OS1_S1 + 111);
            *(b + 1 * OS1_S1 + 155) = prefactor_x * *(b + 1 * OS1_S1 + 119) -
                                      p_over_q * *(b + 4 * OS1_S1 + 119) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 119);
            *(b + 1 * OS1_S1 + 156) =
                prefactor_y * *(b + 1 * OS1_S1 + 112) -
                p_over_q * *(b + 5 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 1 * OS1_S1 + 77);
            *(b + 1 * OS1_S1 + 157) = prefactor_z * *(b + 1 * OS1_S1 + 112) -
                                      p_over_q * *(b + 6 * OS1_S1 + 112);
            *(b + 1 * OS1_S1 + 158) = prefactor_z * *(b + 1 * OS1_S1 + 113) -
                                      p_over_q * *(b + 6 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 77);
            *(b + 1 * OS1_S1 + 159) =
                prefactor_z * *(b + 1 * OS1_S1 + 114) -
                p_over_q * *(b + 6 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 78);
            *(b + 1 * OS1_S1 + 160) =
                prefactor_z * *(b + 1 * OS1_S1 + 115) -
                p_over_q * *(b + 6 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 1 * OS1_S1 + 79);
            *(b + 1 * OS1_S1 + 161) =
                prefactor_y * *(b + 1 * OS1_S1 + 117) -
                p_over_q * *(b + 5 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 82);
            *(b + 1 * OS1_S1 + 162) = prefactor_y * *(b + 1 * OS1_S1 + 118) -
                                      p_over_q * *(b + 5 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 83);
            *(b + 1 * OS1_S1 + 163) = prefactor_y * *(b + 1 * OS1_S1 + 119) -
                                      p_over_q * *(b + 5 * OS1_S1 + 119);
            *(b + 1 * OS1_S1 + 164) =
                prefactor_z * *(b + 1 * OS1_S1 + 119) -
                p_over_q * *(b + 6 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 1 * OS1_S1 + 83);
            *(b + 2 * OS1_S1 + 120) =
                prefactor_x * *(b + 2 * OS1_S1 + 84) -
                p_over_q * *(b + 5 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 2 * OS1_S1 + 56);
            *(b + 2 * OS1_S1 + 121) = prefactor_y * *(b + 2 * OS1_S1 + 84) -
                                      p_over_q * *(b + 7 * OS1_S1 + 84) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 84);
            *(b + 2 * OS1_S1 + 122) = prefactor_z * *(b + 2 * OS1_S1 + 84) -
                                      p_over_q * *(b + 8 * OS1_S1 + 84);
            *(b + 2 * OS1_S1 + 123) = prefactor_y * *(b + 2 * OS1_S1 + 85) -
                                      p_over_q * *(b + 7 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 56);
            *(b + 2 * OS1_S1 + 124) = prefactor_z * *(b + 2 * OS1_S1 + 85) -
                                      p_over_q * *(b + 8 * OS1_S1 + 85);
            *(b + 2 * OS1_S1 + 125) = prefactor_z * *(b + 2 * OS1_S1 + 86) -
                                      p_over_q * *(b + 8 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 56);
            *(b + 2 * OS1_S1 + 126) =
                prefactor_y * *(b + 2 * OS1_S1 + 87) -
                p_over_q * *(b + 7 * OS1_S1 + 87) +
                one_over_two_q * *(b + 0 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 57);
            *(b + 2 * OS1_S1 + 127) = prefactor_z * *(b + 2 * OS1_S1 + 87) -
                                      p_over_q * *(b + 8 * OS1_S1 + 87);
            *(b + 2 * OS1_S1 + 128) = prefactor_y * *(b + 2 * OS1_S1 + 89) -
                                      p_over_q * *(b + 7 * OS1_S1 + 89) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 89);
            *(b + 2 * OS1_S1 + 129) =
                prefactor_z * *(b + 2 * OS1_S1 + 89) -
                p_over_q * *(b + 8 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 58);
            *(b + 2 * OS1_S1 + 130) =
                prefactor_x * *(b + 2 * OS1_S1 + 94) -
                p_over_q * *(b + 5 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 2 * OS1_S1 + 66);
            *(b + 2 * OS1_S1 + 131) = prefactor_z * *(b + 2 * OS1_S1 + 90) -
                                      p_over_q * *(b + 8 * OS1_S1 + 90);
            *(b + 2 * OS1_S1 + 132) = prefactor_z * *(b + 2 * OS1_S1 + 91) -
                                      p_over_q * *(b + 8 * OS1_S1 + 91) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 59);
            *(b + 2 * OS1_S1 + 133) = prefactor_y * *(b + 2 * OS1_S1 + 93) -
                                      p_over_q * *(b + 7 * OS1_S1 + 93) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 93);
            *(b + 2 * OS1_S1 + 134) =
                prefactor_z * *(b + 2 * OS1_S1 + 93) -
                p_over_q * *(b + 8 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 2 * OS1_S1 + 61);
            *(b + 2 * OS1_S1 + 135) =
                prefactor_x * *(b + 2 * OS1_S1 + 99) -
                p_over_q * *(b + 5 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 71);
            *(b + 2 * OS1_S1 + 136) = prefactor_z * *(b + 2 * OS1_S1 + 94) -
                                      p_over_q * *(b + 8 * OS1_S1 + 94);
            *(b + 2 * OS1_S1 + 137) = prefactor_z * *(b + 2 * OS1_S1 + 95) -
                                      p_over_q * *(b + 8 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 62);
            *(b + 2 * OS1_S1 + 138) = prefactor_y * *(b + 2 * OS1_S1 + 97) -
                                      p_over_q * *(b + 7 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 65);
            *(b + 2 * OS1_S1 + 139) = prefactor_y * *(b + 2 * OS1_S1 + 98) -
                                      p_over_q * *(b + 7 * OS1_S1 + 98) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 98);
            *(b + 2 * OS1_S1 + 140) =
                prefactor_x * *(b + 2 * OS1_S1 + 104) -
                p_over_q * *(b + 5 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 76);
            *(b + 2 * OS1_S1 + 141) = prefactor_x * *(b + 2 * OS1_S1 + 105) -
                                      p_over_q * *(b + 5 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 77);
            *(b + 2 * OS1_S1 + 142) = prefactor_z * *(b + 2 * OS1_S1 + 99) -
                                      p_over_q * *(b + 8 * OS1_S1 + 99);
            *(b + 2 * OS1_S1 + 143) = prefactor_z * *(b + 2 * OS1_S1 + 100) -
                                      p_over_q * *(b + 8 * OS1_S1 + 100) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 66);
            *(b + 2 * OS1_S1 + 144) = prefactor_x * *(b + 2 * OS1_S1 + 108) -
                                      p_over_q * *(b + 5 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 80);
            *(b + 2 * OS1_S1 + 145) = prefactor_x * *(b + 2 * OS1_S1 + 109) -
                                      p_over_q * *(b + 5 * OS1_S1 + 109) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 81);
            *(b + 2 * OS1_S1 + 146) = prefactor_y * *(b + 2 * OS1_S1 + 104) -
                                      p_over_q * *(b + 7 * OS1_S1 + 104) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 104);
            *(b + 2 * OS1_S1 + 147) = prefactor_x * *(b + 2 * OS1_S1 + 111) -
                                      p_over_q * *(b + 5 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 83);
            *(b + 2 * OS1_S1 + 148) = prefactor_x * *(b + 2 * OS1_S1 + 112) -
                                      p_over_q * *(b + 5 * OS1_S1 + 112);
            *(b + 2 * OS1_S1 + 149) = prefactor_z * *(b + 2 * OS1_S1 + 105) -
                                      p_over_q * *(b + 8 * OS1_S1 + 105);
            *(b + 2 * OS1_S1 + 150) = prefactor_x * *(b + 2 * OS1_S1 + 114) -
                                      p_over_q * *(b + 5 * OS1_S1 + 114);
            *(b + 2 * OS1_S1 + 151) = prefactor_x * *(b + 2 * OS1_S1 + 115) -
                                      p_over_q * *(b + 5 * OS1_S1 + 115);
            *(b + 2 * OS1_S1 + 152) = prefactor_x * *(b + 2 * OS1_S1 + 116) -
                                      p_over_q * *(b + 5 * OS1_S1 + 116);
            *(b + 2 * OS1_S1 + 153) = prefactor_x * *(b + 2 * OS1_S1 + 117) -
                                      p_over_q * *(b + 5 * OS1_S1 + 117);
            *(b + 2 * OS1_S1 + 154) = prefactor_x * *(b + 2 * OS1_S1 + 118) -
                                      p_over_q * *(b + 5 * OS1_S1 + 118);
            *(b + 2 * OS1_S1 + 155) = prefactor_x * *(b + 2 * OS1_S1 + 119) -
                                      p_over_q * *(b + 5 * OS1_S1 + 119);
            *(b + 2 * OS1_S1 + 156) =
                prefactor_y * *(b + 2 * OS1_S1 + 112) -
                p_over_q * *(b + 7 * OS1_S1 + 112) +
                one_over_two_q * *(b + 0 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 2 * OS1_S1 + 77);
            *(b + 2 * OS1_S1 + 157) = prefactor_z * *(b + 2 * OS1_S1 + 112) -
                                      p_over_q * *(b + 8 * OS1_S1 + 112);
            *(b + 2 * OS1_S1 + 158) = prefactor_z * *(b + 2 * OS1_S1 + 113) -
                                      p_over_q * *(b + 8 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 77);
            *(b + 2 * OS1_S1 + 159) =
                prefactor_z * *(b + 2 * OS1_S1 + 114) -
                p_over_q * *(b + 8 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 78);
            *(b + 2 * OS1_S1 + 160) =
                prefactor_z * *(b + 2 * OS1_S1 + 115) -
                p_over_q * *(b + 8 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 2 * OS1_S1 + 79);
            *(b + 2 * OS1_S1 + 161) =
                prefactor_y * *(b + 2 * OS1_S1 + 117) -
                p_over_q * *(b + 7 * OS1_S1 + 117) +
                one_over_two_q * *(b + 0 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 82);
            *(b + 2 * OS1_S1 + 162) = prefactor_y * *(b + 2 * OS1_S1 + 118) -
                                      p_over_q * *(b + 7 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 83);
            *(b + 2 * OS1_S1 + 163) = prefactor_y * *(b + 2 * OS1_S1 + 119) -
                                      p_over_q * *(b + 7 * OS1_S1 + 119) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 119);
            *(b + 2 * OS1_S1 + 164) =
                prefactor_z * *(b + 2 * OS1_S1 + 119) -
                p_over_q * *(b + 8 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 2 * OS1_S1 + 83);
            *(b + 3 * OS1_S1 + 120) =
                prefactor_x * *(b + 3 * OS1_S1 + 84) -
                p_over_q * *(b + 6 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 3 * OS1_S1 + 56);
            *(b + 3 * OS1_S1 + 121) = prefactor_y * *(b + 3 * OS1_S1 + 84) -
                                      p_over_q * *(b + 8 * OS1_S1 + 84);
            *(b + 3 * OS1_S1 + 122) = prefactor_z * *(b + 3 * OS1_S1 + 84) -
                                      p_over_q * *(b + 9 * OS1_S1 + 84) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 84);
            *(b + 3 * OS1_S1 + 123) = prefactor_y * *(b + 3 * OS1_S1 + 85) -
                                      p_over_q * *(b + 8 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 56);
            *(b + 3 * OS1_S1 + 124) = prefactor_y * *(b + 3 * OS1_S1 + 86) -
                                      p_over_q * *(b + 8 * OS1_S1 + 86);
            *(b + 3 * OS1_S1 + 125) = prefactor_z * *(b + 3 * OS1_S1 + 86) -
                                      p_over_q * *(b + 9 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 56);
            *(b + 3 * OS1_S1 + 126) =
                prefactor_y * *(b + 3 * OS1_S1 + 87) -
                p_over_q * *(b + 8 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 57);
            *(b + 3 * OS1_S1 + 127) = prefactor_z * *(b + 3 * OS1_S1 + 87) -
                                      p_over_q * *(b + 9 * OS1_S1 + 87) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 87);
            *(b + 3 * OS1_S1 + 128) = prefactor_y * *(b + 3 * OS1_S1 + 89) -
                                      p_over_q * *(b + 8 * OS1_S1 + 89);
            *(b + 3 * OS1_S1 + 129) =
                prefactor_z * *(b + 3 * OS1_S1 + 89) -
                p_over_q * *(b + 9 * OS1_S1 + 89) +
                one_over_two_q * *(b + 0 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 58);
            *(b + 3 * OS1_S1 + 130) =
                prefactor_y * *(b + 3 * OS1_S1 + 90) -
                p_over_q * *(b + 8 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 3 * OS1_S1 + 59);
            *(b + 3 * OS1_S1 + 131) = prefactor_z * *(b + 3 * OS1_S1 + 90) -
                                      p_over_q * *(b + 9 * OS1_S1 + 90) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 90);
            *(b + 3 * OS1_S1 + 132) = prefactor_y * *(b + 3 * OS1_S1 + 92) -
                                      p_over_q * *(b + 8 * OS1_S1 + 92) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 61);
            *(b + 3 * OS1_S1 + 133) = prefactor_y * *(b + 3 * OS1_S1 + 93) -
                                      p_over_q * *(b + 8 * OS1_S1 + 93);
            *(b + 3 * OS1_S1 + 134) =
                prefactor_x * *(b + 3 * OS1_S1 + 98) -
                p_over_q * *(b + 6 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 3 * OS1_S1 + 70);
            *(b + 3 * OS1_S1 + 135) =
                prefactor_x * *(b + 3 * OS1_S1 + 99) -
                p_over_q * *(b + 6 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 71);
            *(b + 3 * OS1_S1 + 136) = prefactor_z * *(b + 3 * OS1_S1 + 94) -
                                      p_over_q * *(b + 9 * OS1_S1 + 94) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 94);
            *(b + 3 * OS1_S1 + 137) = prefactor_z * *(b + 3 * OS1_S1 + 95) -
                                      p_over_q * *(b + 9 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 62);
            *(b + 3 * OS1_S1 + 138) = prefactor_y * *(b + 3 * OS1_S1 + 97) -
                                      p_over_q * *(b + 8 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 65);
            *(b + 3 * OS1_S1 + 139) = prefactor_y * *(b + 3 * OS1_S1 + 98) -
                                      p_over_q * *(b + 8 * OS1_S1 + 98);
            *(b + 3 * OS1_S1 + 140) =
                prefactor_x * *(b + 3 * OS1_S1 + 104) -
                p_over_q * *(b + 6 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 76);
            *(b + 3 * OS1_S1 + 141) = prefactor_x * *(b + 3 * OS1_S1 + 105) -
                                      p_over_q * *(b + 6 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 77);
            *(b + 3 * OS1_S1 + 142) = prefactor_z * *(b + 3 * OS1_S1 + 99) -
                                      p_over_q * *(b + 9 * OS1_S1 + 99) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 99);
            *(b + 3 * OS1_S1 + 143) = prefactor_x * *(b + 3 * OS1_S1 + 107) -
                                      p_over_q * *(b + 6 * OS1_S1 + 107) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 79);
            *(b + 3 * OS1_S1 + 144) = prefactor_x * *(b + 3 * OS1_S1 + 108) -
                                      p_over_q * *(b + 6 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 80);
            *(b + 3 * OS1_S1 + 145) = prefactor_y * *(b + 3 * OS1_S1 + 103) -
                                      p_over_q * *(b + 8 * OS1_S1 + 103) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 70);
            *(b + 3 * OS1_S1 + 146) = prefactor_y * *(b + 3 * OS1_S1 + 104) -
                                      p_over_q * *(b + 8 * OS1_S1 + 104);
            *(b + 3 * OS1_S1 + 147) = prefactor_x * *(b + 3 * OS1_S1 + 111) -
                                      p_over_q * *(b + 6 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 83);
            *(b + 3 * OS1_S1 + 148) = prefactor_x * *(b + 3 * OS1_S1 + 112) -
                                      p_over_q * *(b + 6 * OS1_S1 + 112);
            *(b + 3 * OS1_S1 + 149) = prefactor_x * *(b + 3 * OS1_S1 + 113) -
                                      p_over_q * *(b + 6 * OS1_S1 + 113);
            *(b + 3 * OS1_S1 + 150) = prefactor_x * *(b + 3 * OS1_S1 + 114) -
                                      p_over_q * *(b + 6 * OS1_S1 + 114);
            *(b + 3 * OS1_S1 + 151) = prefactor_x * *(b + 3 * OS1_S1 + 115) -
                                      p_over_q * *(b + 6 * OS1_S1 + 115);
            *(b + 3 * OS1_S1 + 152) = prefactor_x * *(b + 3 * OS1_S1 + 116) -
                                      p_over_q * *(b + 6 * OS1_S1 + 116);
            *(b + 3 * OS1_S1 + 153) = prefactor_x * *(b + 3 * OS1_S1 + 117) -
                                      p_over_q * *(b + 6 * OS1_S1 + 117);
            *(b + 3 * OS1_S1 + 154) = prefactor_y * *(b + 3 * OS1_S1 + 111) -
                                      p_over_q * *(b + 8 * OS1_S1 + 111);
            *(b + 3 * OS1_S1 + 155) = prefactor_x * *(b + 3 * OS1_S1 + 119) -
                                      p_over_q * *(b + 6 * OS1_S1 + 119);
            *(b + 3 * OS1_S1 + 156) =
                prefactor_y * *(b + 3 * OS1_S1 + 112) -
                p_over_q * *(b + 8 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 3 * OS1_S1 + 77);
            *(b + 3 * OS1_S1 + 157) = prefactor_z * *(b + 3 * OS1_S1 + 112) -
                                      p_over_q * *(b + 9 * OS1_S1 + 112) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 112);
            *(b + 3 * OS1_S1 + 158) = prefactor_z * *(b + 3 * OS1_S1 + 113) -
                                      p_over_q * *(b + 9 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 0 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 77);
            *(b + 3 * OS1_S1 + 159) =
                prefactor_z * *(b + 3 * OS1_S1 + 114) -
                p_over_q * *(b + 9 * OS1_S1 + 114) +
                one_over_two_q * *(b + 0 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 78);
            *(b + 3 * OS1_S1 + 160) =
                prefactor_y * *(b + 3 * OS1_S1 + 116) -
                p_over_q * *(b + 8 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 3 * OS1_S1 + 81);
            *(b + 3 * OS1_S1 + 161) =
                prefactor_y * *(b + 3 * OS1_S1 + 117) -
                p_over_q * *(b + 8 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 82);
            *(b + 3 * OS1_S1 + 162) = prefactor_y * *(b + 3 * OS1_S1 + 118) -
                                      p_over_q * *(b + 8 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 83);
            *(b + 3 * OS1_S1 + 163) = prefactor_y * *(b + 3 * OS1_S1 + 119) -
                                      p_over_q * *(b + 8 * OS1_S1 + 119);
            *(b + 3 * OS1_S1 + 164) =
                prefactor_z * *(b + 3 * OS1_S1 + 119) -
                p_over_q * *(b + 9 * OS1_S1 + 119) +
                one_over_two_q * *(b + 0 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 3 * OS1_S1 + 83);
            return;
        }
        void transfer_2_8(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 4 * OS1_S1 + 120) =
                prefactor_x * *(b + 4 * OS1_S1 + 84) -
                p_over_q * *(b + 10 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 4 * OS1_S1 + 56);
            *(b + 4 * OS1_S1 + 121) = prefactor_y * *(b + 4 * OS1_S1 + 84) -
                                      p_over_q * *(b + 11 * OS1_S1 + 84);
            *(b + 4 * OS1_S1 + 122) = prefactor_z * *(b + 4 * OS1_S1 + 84) -
                                      p_over_q * *(b + 12 * OS1_S1 + 84);
            *(b + 4 * OS1_S1 + 123) = prefactor_y * *(b + 4 * OS1_S1 + 85) -
                                      p_over_q * *(b + 11 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 56);
            *(b + 4 * OS1_S1 + 124) = prefactor_z * *(b + 4 * OS1_S1 + 85) -
                                      p_over_q * *(b + 12 * OS1_S1 + 85);
            *(b + 4 * OS1_S1 + 125) = prefactor_z * *(b + 4 * OS1_S1 + 86) -
                                      p_over_q * *(b + 12 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 56);
            *(b + 4 * OS1_S1 + 126) =
                prefactor_y * *(b + 4 * OS1_S1 + 87) -
                p_over_q * *(b + 11 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 57);
            *(b + 4 * OS1_S1 + 127) = prefactor_z * *(b + 4 * OS1_S1 + 87) -
                                      p_over_q * *(b + 12 * OS1_S1 + 87);
            *(b + 4 * OS1_S1 + 128) = prefactor_y * *(b + 4 * OS1_S1 + 89) -
                                      p_over_q * *(b + 11 * OS1_S1 + 89);
            *(b + 4 * OS1_S1 + 129) =
                prefactor_z * *(b + 4 * OS1_S1 + 89) -
                p_over_q * *(b + 12 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 58);
            *(b + 4 * OS1_S1 + 130) =
                prefactor_y * *(b + 4 * OS1_S1 + 90) -
                p_over_q * *(b + 11 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 59);
            *(b + 4 * OS1_S1 + 131) = prefactor_z * *(b + 4 * OS1_S1 + 90) -
                                      p_over_q * *(b + 12 * OS1_S1 + 90);
            *(b + 4 * OS1_S1 + 132) = prefactor_z * *(b + 4 * OS1_S1 + 91) -
                                      p_over_q * *(b + 12 * OS1_S1 + 91) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 59);
            *(b + 4 * OS1_S1 + 133) = prefactor_y * *(b + 4 * OS1_S1 + 93) -
                                      p_over_q * *(b + 11 * OS1_S1 + 93);
            *(b + 4 * OS1_S1 + 134) =
                prefactor_z * *(b + 4 * OS1_S1 + 93) -
                p_over_q * *(b + 12 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 61);
            *(b + 4 * OS1_S1 + 135) =
                prefactor_x * *(b + 4 * OS1_S1 + 99) -
                p_over_q * *(b + 10 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 71);
            *(b + 4 * OS1_S1 + 136) = prefactor_z * *(b + 4 * OS1_S1 + 94) -
                                      p_over_q * *(b + 12 * OS1_S1 + 94);
            *(b + 4 * OS1_S1 + 137) = prefactor_z * *(b + 4 * OS1_S1 + 95) -
                                      p_over_q * *(b + 12 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 62);
            *(b + 4 * OS1_S1 + 138) = prefactor_y * *(b + 4 * OS1_S1 + 97) -
                                      p_over_q * *(b + 11 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 65);
            *(b + 4 * OS1_S1 + 139) = prefactor_y * *(b + 4 * OS1_S1 + 98) -
                                      p_over_q * *(b + 11 * OS1_S1 + 98);
            *(b + 4 * OS1_S1 + 140) =
                prefactor_x * *(b + 4 * OS1_S1 + 104) -
                p_over_q * *(b + 10 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 76);
            *(b + 4 * OS1_S1 + 141) =
                prefactor_x * *(b + 4 * OS1_S1 + 105) -
                p_over_q * *(b + 10 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 105) +
                one_over_two_q * *(b + 4 * OS1_S1 + 77);
            *(b + 4 * OS1_S1 + 142) = prefactor_z * *(b + 4 * OS1_S1 + 99) -
                                      p_over_q * *(b + 12 * OS1_S1 + 99);
            *(b + 4 * OS1_S1 + 143) = prefactor_z * *(b + 4 * OS1_S1 + 100) -
                                      p_over_q * *(b + 12 * OS1_S1 + 100) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 66);
            *(b + 4 * OS1_S1 + 144) =
                prefactor_x * *(b + 4 * OS1_S1 + 108) -
                p_over_q * *(b + 10 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 108) +
                one_over_two_q * *(b + 4 * OS1_S1 + 80);
            *(b + 4 * OS1_S1 + 145) = prefactor_y * *(b + 4 * OS1_S1 + 103) -
                                      p_over_q * *(b + 11 * OS1_S1 + 103) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 70);
            *(b + 4 * OS1_S1 + 146) = prefactor_y * *(b + 4 * OS1_S1 + 104) -
                                      p_over_q * *(b + 11 * OS1_S1 + 104);
            *(b + 4 * OS1_S1 + 147) =
                prefactor_x * *(b + 4 * OS1_S1 + 111) -
                p_over_q * *(b + 10 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 111) +
                one_over_two_q * *(b + 4 * OS1_S1 + 83);
            *(b + 4 * OS1_S1 + 148) =
                prefactor_x * *(b + 4 * OS1_S1 + 112) -
                p_over_q * *(b + 10 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 112);
            *(b + 4 * OS1_S1 + 149) = prefactor_z * *(b + 4 * OS1_S1 + 105) -
                                      p_over_q * *(b + 12 * OS1_S1 + 105);
            *(b + 4 * OS1_S1 + 150) =
                prefactor_x * *(b + 4 * OS1_S1 + 114) -
                p_over_q * *(b + 10 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 114);
            *(b + 4 * OS1_S1 + 151) =
                prefactor_x * *(b + 4 * OS1_S1 + 115) -
                p_over_q * *(b + 10 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 115);
            *(b + 4 * OS1_S1 + 152) =
                prefactor_x * *(b + 4 * OS1_S1 + 116) -
                p_over_q * *(b + 10 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 116);
            *(b + 4 * OS1_S1 + 153) =
                prefactor_x * *(b + 4 * OS1_S1 + 117) -
                p_over_q * *(b + 10 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 117);
            *(b + 4 * OS1_S1 + 154) = prefactor_y * *(b + 4 * OS1_S1 + 111) -
                                      p_over_q * *(b + 11 * OS1_S1 + 111);
            *(b + 4 * OS1_S1 + 155) =
                prefactor_x * *(b + 4 * OS1_S1 + 119) -
                p_over_q * *(b + 10 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 1 * OS1_S1 + 119);
            *(b + 4 * OS1_S1 + 156) =
                prefactor_y * *(b + 4 * OS1_S1 + 112) -
                p_over_q * *(b + 11 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 4 * OS1_S1 + 77);
            *(b + 4 * OS1_S1 + 157) = prefactor_z * *(b + 4 * OS1_S1 + 112) -
                                      p_over_q * *(b + 12 * OS1_S1 + 112);
            *(b + 4 * OS1_S1 + 158) = prefactor_z * *(b + 4 * OS1_S1 + 113) -
                                      p_over_q * *(b + 12 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 77);
            *(b + 4 * OS1_S1 + 159) =
                prefactor_z * *(b + 4 * OS1_S1 + 114) -
                p_over_q * *(b + 12 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 78);
            *(b + 4 * OS1_S1 + 160) =
                prefactor_z * *(b + 4 * OS1_S1 + 115) -
                p_over_q * *(b + 12 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 79);
            *(b + 4 * OS1_S1 + 161) =
                prefactor_y * *(b + 4 * OS1_S1 + 117) -
                p_over_q * *(b + 11 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 4 * OS1_S1 + 82);
            *(b + 4 * OS1_S1 + 162) = prefactor_y * *(b + 4 * OS1_S1 + 118) -
                                      p_over_q * *(b + 11 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 4 * OS1_S1 + 83);
            *(b + 4 * OS1_S1 + 163) = prefactor_y * *(b + 4 * OS1_S1 + 119) -
                                      p_over_q * *(b + 11 * OS1_S1 + 119);
            *(b + 4 * OS1_S1 + 164) =
                prefactor_z * *(b + 4 * OS1_S1 + 119) -
                p_over_q * *(b + 12 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 4 * OS1_S1 + 83);
            *(b + 5 * OS1_S1 + 120) =
                prefactor_x * *(b + 5 * OS1_S1 + 84) -
                p_over_q * *(b + 11 * OS1_S1 + 84) +
                one_over_two_q * *(b + 2 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 5 * OS1_S1 + 56);
            *(b + 5 * OS1_S1 + 121) = prefactor_y * *(b + 5 * OS1_S1 + 84) -
                                      p_over_q * *(b + 13 * OS1_S1 + 84) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 84);
            *(b + 5 * OS1_S1 + 122) = prefactor_z * *(b + 5 * OS1_S1 + 84) -
                                      p_over_q * *(b + 14 * OS1_S1 + 84);
            *(b + 5 * OS1_S1 + 123) = prefactor_y * *(b + 5 * OS1_S1 + 85) -
                                      p_over_q * *(b + 13 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 56);
            *(b + 5 * OS1_S1 + 124) = prefactor_z * *(b + 5 * OS1_S1 + 85) -
                                      p_over_q * *(b + 14 * OS1_S1 + 85);
            *(b + 5 * OS1_S1 + 125) = prefactor_z * *(b + 5 * OS1_S1 + 86) -
                                      p_over_q * *(b + 14 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 56);
            *(b + 5 * OS1_S1 + 126) =
                prefactor_y * *(b + 5 * OS1_S1 + 87) -
                p_over_q * *(b + 13 * OS1_S1 + 87) +
                one_over_two_q * *(b + 1 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 57);
            *(b + 5 * OS1_S1 + 127) = prefactor_z * *(b + 5 * OS1_S1 + 87) -
                                      p_over_q * *(b + 14 * OS1_S1 + 87);
            *(b + 5 * OS1_S1 + 128) = prefactor_y * *(b + 5 * OS1_S1 + 89) -
                                      p_over_q * *(b + 13 * OS1_S1 + 89) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 89);
            *(b + 5 * OS1_S1 + 129) =
                prefactor_z * *(b + 5 * OS1_S1 + 89) -
                p_over_q * *(b + 14 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 58);
            *(b + 5 * OS1_S1 + 130) =
                prefactor_y * *(b + 5 * OS1_S1 + 90) -
                p_over_q * *(b + 13 * OS1_S1 + 90) +
                one_over_two_q * *(b + 1 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 5 * OS1_S1 + 59);
            *(b + 5 * OS1_S1 + 131) = prefactor_z * *(b + 5 * OS1_S1 + 90) -
                                      p_over_q * *(b + 14 * OS1_S1 + 90);
            *(b + 5 * OS1_S1 + 132) = prefactor_z * *(b + 5 * OS1_S1 + 91) -
                                      p_over_q * *(b + 14 * OS1_S1 + 91) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 59);
            *(b + 5 * OS1_S1 + 133) = prefactor_y * *(b + 5 * OS1_S1 + 93) -
                                      p_over_q * *(b + 13 * OS1_S1 + 93) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 93);
            *(b + 5 * OS1_S1 + 134) =
                prefactor_z * *(b + 5 * OS1_S1 + 93) -
                p_over_q * *(b + 14 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 5 * OS1_S1 + 61);
            *(b + 5 * OS1_S1 + 135) =
                prefactor_x * *(b + 5 * OS1_S1 + 99) -
                p_over_q * *(b + 11 * OS1_S1 + 99) +
                one_over_two_q * *(b + 2 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 71);
            *(b + 5 * OS1_S1 + 136) = prefactor_z * *(b + 5 * OS1_S1 + 94) -
                                      p_over_q * *(b + 14 * OS1_S1 + 94);
            *(b + 5 * OS1_S1 + 137) = prefactor_z * *(b + 5 * OS1_S1 + 95) -
                                      p_over_q * *(b + 14 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 62);
            *(b + 5 * OS1_S1 + 138) = prefactor_y * *(b + 5 * OS1_S1 + 97) -
                                      p_over_q * *(b + 13 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 65);
            *(b + 5 * OS1_S1 + 139) = prefactor_y * *(b + 5 * OS1_S1 + 98) -
                                      p_over_q * *(b + 13 * OS1_S1 + 98) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 98);
            *(b + 5 * OS1_S1 + 140) =
                prefactor_x * *(b + 5 * OS1_S1 + 104) -
                p_over_q * *(b + 11 * OS1_S1 + 104) +
                one_over_two_q * *(b + 2 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 76);
            *(b + 5 * OS1_S1 + 141) = prefactor_x * *(b + 5 * OS1_S1 + 105) -
                                      p_over_q * *(b + 11 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 77);
            *(b + 5 * OS1_S1 + 142) = prefactor_z * *(b + 5 * OS1_S1 + 99) -
                                      p_over_q * *(b + 14 * OS1_S1 + 99);
            *(b + 5 * OS1_S1 + 143) = prefactor_z * *(b + 5 * OS1_S1 + 100) -
                                      p_over_q * *(b + 14 * OS1_S1 + 100) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 66);
            *(b + 5 * OS1_S1 + 144) = prefactor_x * *(b + 5 * OS1_S1 + 108) -
                                      p_over_q * *(b + 11 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 80);
            *(b + 5 * OS1_S1 + 145) = prefactor_y * *(b + 5 * OS1_S1 + 103) -
                                      p_over_q * *(b + 13 * OS1_S1 + 103) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 103) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 70);
            *(b + 5 * OS1_S1 + 146) = prefactor_y * *(b + 5 * OS1_S1 + 104) -
                                      p_over_q * *(b + 13 * OS1_S1 + 104) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 104);
            *(b + 5 * OS1_S1 + 147) = prefactor_x * *(b + 5 * OS1_S1 + 111) -
                                      p_over_q * *(b + 11 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 83);
            *(b + 5 * OS1_S1 + 148) = prefactor_x * *(b + 5 * OS1_S1 + 112) -
                                      p_over_q * *(b + 11 * OS1_S1 + 112) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 112);
            *(b + 5 * OS1_S1 + 149) = prefactor_z * *(b + 5 * OS1_S1 + 105) -
                                      p_over_q * *(b + 14 * OS1_S1 + 105);
            *(b + 5 * OS1_S1 + 150) = prefactor_x * *(b + 5 * OS1_S1 + 114) -
                                      p_over_q * *(b + 11 * OS1_S1 + 114) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 114);
            *(b + 5 * OS1_S1 + 151) = prefactor_x * *(b + 5 * OS1_S1 + 115) -
                                      p_over_q * *(b + 11 * OS1_S1 + 115) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 115);
            *(b + 5 * OS1_S1 + 152) = prefactor_x * *(b + 5 * OS1_S1 + 116) -
                                      p_over_q * *(b + 11 * OS1_S1 + 116) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 116);
            *(b + 5 * OS1_S1 + 153) = prefactor_x * *(b + 5 * OS1_S1 + 117) -
                                      p_over_q * *(b + 11 * OS1_S1 + 117) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 117);
            *(b + 5 * OS1_S1 + 154) = prefactor_y * *(b + 5 * OS1_S1 + 111) -
                                      p_over_q * *(b + 13 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 111);
            *(b + 5 * OS1_S1 + 155) = prefactor_x * *(b + 5 * OS1_S1 + 119) -
                                      p_over_q * *(b + 11 * OS1_S1 + 119) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 119);
            *(b + 5 * OS1_S1 + 156) =
                prefactor_y * *(b + 5 * OS1_S1 + 112) -
                p_over_q * *(b + 13 * OS1_S1 + 112) +
                one_over_two_q * *(b + 1 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 5 * OS1_S1 + 77);
            *(b + 5 * OS1_S1 + 157) = prefactor_z * *(b + 5 * OS1_S1 + 112) -
                                      p_over_q * *(b + 14 * OS1_S1 + 112);
            *(b + 5 * OS1_S1 + 158) = prefactor_z * *(b + 5 * OS1_S1 + 113) -
                                      p_over_q * *(b + 14 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 77);
            *(b + 5 * OS1_S1 + 159) =
                prefactor_z * *(b + 5 * OS1_S1 + 114) -
                p_over_q * *(b + 14 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 78);
            *(b + 5 * OS1_S1 + 160) =
                prefactor_z * *(b + 5 * OS1_S1 + 115) -
                p_over_q * *(b + 14 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 5 * OS1_S1 + 79);
            *(b + 5 * OS1_S1 + 161) =
                prefactor_y * *(b + 5 * OS1_S1 + 117) -
                p_over_q * *(b + 13 * OS1_S1 + 117) +
                one_over_two_q * *(b + 1 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 82);
            *(b + 5 * OS1_S1 + 162) = prefactor_y * *(b + 5 * OS1_S1 + 118) -
                                      p_over_q * *(b + 13 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 5 * OS1_S1 + 83);
            *(b + 5 * OS1_S1 + 163) = prefactor_y * *(b + 5 * OS1_S1 + 119) -
                                      p_over_q * *(b + 13 * OS1_S1 + 119) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 119);
            *(b + 5 * OS1_S1 + 164) =
                prefactor_z * *(b + 5 * OS1_S1 + 119) -
                p_over_q * *(b + 14 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 5 * OS1_S1 + 83);
            *(b + 6 * OS1_S1 + 120) =
                prefactor_x * *(b + 6 * OS1_S1 + 84) -
                p_over_q * *(b + 12 * OS1_S1 + 84) +
                one_over_two_q * *(b + 3 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 6 * OS1_S1 + 56);
            *(b + 6 * OS1_S1 + 121) = prefactor_y * *(b + 6 * OS1_S1 + 84) -
                                      p_over_q * *(b + 14 * OS1_S1 + 84);
            *(b + 6 * OS1_S1 + 122) = prefactor_z * *(b + 6 * OS1_S1 + 84) -
                                      p_over_q * *(b + 15 * OS1_S1 + 84) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 84);
            *(b + 6 * OS1_S1 + 123) = prefactor_y * *(b + 6 * OS1_S1 + 85) -
                                      p_over_q * *(b + 14 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 56);
            *(b + 6 * OS1_S1 + 124) = prefactor_y * *(b + 6 * OS1_S1 + 86) -
                                      p_over_q * *(b + 14 * OS1_S1 + 86);
            *(b + 6 * OS1_S1 + 125) = prefactor_z * *(b + 6 * OS1_S1 + 86) -
                                      p_over_q * *(b + 15 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 56);
            *(b + 6 * OS1_S1 + 126) =
                prefactor_y * *(b + 6 * OS1_S1 + 87) -
                p_over_q * *(b + 14 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 57);
            *(b + 6 * OS1_S1 + 127) = prefactor_z * *(b + 6 * OS1_S1 + 87) -
                                      p_over_q * *(b + 15 * OS1_S1 + 87) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 87);
            *(b + 6 * OS1_S1 + 128) = prefactor_y * *(b + 6 * OS1_S1 + 89) -
                                      p_over_q * *(b + 14 * OS1_S1 + 89);
            *(b + 6 * OS1_S1 + 129) =
                prefactor_z * *(b + 6 * OS1_S1 + 89) -
                p_over_q * *(b + 15 * OS1_S1 + 89) +
                one_over_two_q * *(b + 1 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 58);
            *(b + 6 * OS1_S1 + 130) =
                prefactor_y * *(b + 6 * OS1_S1 + 90) -
                p_over_q * *(b + 14 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 6 * OS1_S1 + 59);
            *(b + 6 * OS1_S1 + 131) = prefactor_z * *(b + 6 * OS1_S1 + 90) -
                                      p_over_q * *(b + 15 * OS1_S1 + 90) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 90);
            *(b + 6 * OS1_S1 + 132) = prefactor_y * *(b + 6 * OS1_S1 + 92) -
                                      p_over_q * *(b + 14 * OS1_S1 + 92) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 61);
            *(b + 6 * OS1_S1 + 133) = prefactor_y * *(b + 6 * OS1_S1 + 93) -
                                      p_over_q * *(b + 14 * OS1_S1 + 93);
            *(b + 6 * OS1_S1 + 134) =
                prefactor_z * *(b + 6 * OS1_S1 + 93) -
                p_over_q * *(b + 15 * OS1_S1 + 93) +
                one_over_two_q * *(b + 1 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 6 * OS1_S1 + 61);
            *(b + 6 * OS1_S1 + 135) =
                prefactor_x * *(b + 6 * OS1_S1 + 99) -
                p_over_q * *(b + 12 * OS1_S1 + 99) +
                one_over_two_q * *(b + 3 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 71);
            *(b + 6 * OS1_S1 + 136) = prefactor_z * *(b + 6 * OS1_S1 + 94) -
                                      p_over_q * *(b + 15 * OS1_S1 + 94) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 94);
            *(b + 6 * OS1_S1 + 137) = prefactor_z * *(b + 6 * OS1_S1 + 95) -
                                      p_over_q * *(b + 15 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 62);
            *(b + 6 * OS1_S1 + 138) = prefactor_y * *(b + 6 * OS1_S1 + 97) -
                                      p_over_q * *(b + 14 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 65);
            *(b + 6 * OS1_S1 + 139) = prefactor_y * *(b + 6 * OS1_S1 + 98) -
                                      p_over_q * *(b + 14 * OS1_S1 + 98);
            *(b + 6 * OS1_S1 + 140) =
                prefactor_x * *(b + 6 * OS1_S1 + 104) -
                p_over_q * *(b + 12 * OS1_S1 + 104) +
                one_over_two_q * *(b + 3 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 76);
            *(b + 6 * OS1_S1 + 141) = prefactor_x * *(b + 6 * OS1_S1 + 105) -
                                      p_over_q * *(b + 12 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 77);
            *(b + 6 * OS1_S1 + 142) = prefactor_z * *(b + 6 * OS1_S1 + 99) -
                                      p_over_q * *(b + 15 * OS1_S1 + 99) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 99);
            *(b + 6 * OS1_S1 + 143) = prefactor_z * *(b + 6 * OS1_S1 + 100) -
                                      p_over_q * *(b + 15 * OS1_S1 + 100) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 100) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 66);
            *(b + 6 * OS1_S1 + 144) = prefactor_x * *(b + 6 * OS1_S1 + 108) -
                                      p_over_q * *(b + 12 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 80);
            *(b + 6 * OS1_S1 + 145) = prefactor_y * *(b + 6 * OS1_S1 + 103) -
                                      p_over_q * *(b + 14 * OS1_S1 + 103) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 70);
            *(b + 6 * OS1_S1 + 146) = prefactor_y * *(b + 6 * OS1_S1 + 104) -
                                      p_over_q * *(b + 14 * OS1_S1 + 104);
            *(b + 6 * OS1_S1 + 147) = prefactor_x * *(b + 6 * OS1_S1 + 111) -
                                      p_over_q * *(b + 12 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 83);
            *(b + 6 * OS1_S1 + 148) = prefactor_x * *(b + 6 * OS1_S1 + 112) -
                                      p_over_q * *(b + 12 * OS1_S1 + 112) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 112);
            *(b + 6 * OS1_S1 + 149) = prefactor_z * *(b + 6 * OS1_S1 + 105) -
                                      p_over_q * *(b + 15 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 105);
            *(b + 6 * OS1_S1 + 150) = prefactor_x * *(b + 6 * OS1_S1 + 114) -
                                      p_over_q * *(b + 12 * OS1_S1 + 114) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 114);
            *(b + 6 * OS1_S1 + 151) = prefactor_x * *(b + 6 * OS1_S1 + 115) -
                                      p_over_q * *(b + 12 * OS1_S1 + 115) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 115);
            *(b + 6 * OS1_S1 + 152) = prefactor_x * *(b + 6 * OS1_S1 + 116) -
                                      p_over_q * *(b + 12 * OS1_S1 + 116) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 116);
            *(b + 6 * OS1_S1 + 153) = prefactor_x * *(b + 6 * OS1_S1 + 117) -
                                      p_over_q * *(b + 12 * OS1_S1 + 117) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 117);
            *(b + 6 * OS1_S1 + 154) = prefactor_y * *(b + 6 * OS1_S1 + 111) -
                                      p_over_q * *(b + 14 * OS1_S1 + 111);
            *(b + 6 * OS1_S1 + 155) = prefactor_x * *(b + 6 * OS1_S1 + 119) -
                                      p_over_q * *(b + 12 * OS1_S1 + 119) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 119);
            *(b + 6 * OS1_S1 + 156) =
                prefactor_y * *(b + 6 * OS1_S1 + 112) -
                p_over_q * *(b + 14 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 6 * OS1_S1 + 77);
            *(b + 6 * OS1_S1 + 157) = prefactor_z * *(b + 6 * OS1_S1 + 112) -
                                      p_over_q * *(b + 15 * OS1_S1 + 112) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 112);
            *(b + 6 * OS1_S1 + 158) = prefactor_z * *(b + 6 * OS1_S1 + 113) -
                                      p_over_q * *(b + 15 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 1 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 77);
            *(b + 6 * OS1_S1 + 159) =
                prefactor_z * *(b + 6 * OS1_S1 + 114) -
                p_over_q * *(b + 15 * OS1_S1 + 114) +
                one_over_two_q * *(b + 1 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 78);
            *(b + 6 * OS1_S1 + 160) =
                prefactor_y * *(b + 6 * OS1_S1 + 116) -
                p_over_q * *(b + 14 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 6 * OS1_S1 + 81);
            *(b + 6 * OS1_S1 + 161) =
                prefactor_y * *(b + 6 * OS1_S1 + 117) -
                p_over_q * *(b + 14 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 82);
            *(b + 6 * OS1_S1 + 162) = prefactor_y * *(b + 6 * OS1_S1 + 118) -
                                      p_over_q * *(b + 14 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 6 * OS1_S1 + 83);
            *(b + 6 * OS1_S1 + 163) = prefactor_y * *(b + 6 * OS1_S1 + 119) -
                                      p_over_q * *(b + 14 * OS1_S1 + 119);
            *(b + 6 * OS1_S1 + 164) =
                prefactor_z * *(b + 6 * OS1_S1 + 119) -
                p_over_q * *(b + 15 * OS1_S1 + 119) +
                one_over_two_q * *(b + 1 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 6 * OS1_S1 + 83);
            *(b + 7 * OS1_S1 + 120) =
                prefactor_x * *(b + 7 * OS1_S1 + 84) -
                p_over_q * *(b + 13 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 7 * OS1_S1 + 56);
            *(b + 7 * OS1_S1 + 121) =
                prefactor_y * *(b + 7 * OS1_S1 + 84) -
                p_over_q * *(b + 16 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 84);
            *(b + 7 * OS1_S1 + 122) = prefactor_z * *(b + 7 * OS1_S1 + 84) -
                                      p_over_q * *(b + 17 * OS1_S1 + 84);
            *(b + 7 * OS1_S1 + 123) =
                prefactor_y * *(b + 7 * OS1_S1 + 85) -
                p_over_q * *(b + 16 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 85) +
                one_over_two_q * *(b + 7 * OS1_S1 + 56);
            *(b + 7 * OS1_S1 + 124) = prefactor_z * *(b + 7 * OS1_S1 + 85) -
                                      p_over_q * *(b + 17 * OS1_S1 + 85);
            *(b + 7 * OS1_S1 + 125) = prefactor_z * *(b + 7 * OS1_S1 + 86) -
                                      p_over_q * *(b + 17 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 56);
            *(b + 7 * OS1_S1 + 126) =
                prefactor_y * *(b + 7 * OS1_S1 + 87) -
                p_over_q * *(b + 16 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 57);
            *(b + 7 * OS1_S1 + 127) = prefactor_z * *(b + 7 * OS1_S1 + 87) -
                                      p_over_q * *(b + 17 * OS1_S1 + 87);
            *(b + 7 * OS1_S1 + 128) =
                prefactor_y * *(b + 7 * OS1_S1 + 89) -
                p_over_q * *(b + 16 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 89);
            *(b + 7 * OS1_S1 + 129) =
                prefactor_z * *(b + 7 * OS1_S1 + 89) -
                p_over_q * *(b + 17 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 58);
            *(b + 7 * OS1_S1 + 130) =
                prefactor_x * *(b + 7 * OS1_S1 + 94) -
                p_over_q * *(b + 13 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 66);
            *(b + 7 * OS1_S1 + 131) = prefactor_z * *(b + 7 * OS1_S1 + 90) -
                                      p_over_q * *(b + 17 * OS1_S1 + 90);
            *(b + 7 * OS1_S1 + 132) = prefactor_z * *(b + 7 * OS1_S1 + 91) -
                                      p_over_q * *(b + 17 * OS1_S1 + 91) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 59);
            *(b + 7 * OS1_S1 + 133) =
                prefactor_y * *(b + 7 * OS1_S1 + 93) -
                p_over_q * *(b + 16 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 93);
            *(b + 7 * OS1_S1 + 134) =
                prefactor_z * *(b + 7 * OS1_S1 + 93) -
                p_over_q * *(b + 17 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 61);
            *(b + 7 * OS1_S1 + 135) =
                prefactor_x * *(b + 7 * OS1_S1 + 99) -
                p_over_q * *(b + 13 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 71);
            *(b + 7 * OS1_S1 + 136) = prefactor_z * *(b + 7 * OS1_S1 + 94) -
                                      p_over_q * *(b + 17 * OS1_S1 + 94);
            *(b + 7 * OS1_S1 + 137) = prefactor_z * *(b + 7 * OS1_S1 + 95) -
                                      p_over_q * *(b + 17 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 62);
            *(b + 7 * OS1_S1 + 138) =
                prefactor_y * *(b + 7 * OS1_S1 + 97) -
                p_over_q * *(b + 16 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 97) +
                one_over_two_q * *(b + 7 * OS1_S1 + 65);
            *(b + 7 * OS1_S1 + 139) =
                prefactor_y * *(b + 7 * OS1_S1 + 98) -
                p_over_q * *(b + 16 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 98);
            *(b + 7 * OS1_S1 + 140) =
                prefactor_x * *(b + 7 * OS1_S1 + 104) -
                p_over_q * *(b + 13 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 76);
            *(b + 7 * OS1_S1 + 141) = prefactor_x * *(b + 7 * OS1_S1 + 105) -
                                      p_over_q * *(b + 13 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 77);
            *(b + 7 * OS1_S1 + 142) = prefactor_z * *(b + 7 * OS1_S1 + 99) -
                                      p_over_q * *(b + 17 * OS1_S1 + 99);
            *(b + 7 * OS1_S1 + 143) = prefactor_z * *(b + 7 * OS1_S1 + 100) -
                                      p_over_q * *(b + 17 * OS1_S1 + 100) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 66);
            *(b + 7 * OS1_S1 + 144) = prefactor_x * *(b + 7 * OS1_S1 + 108) -
                                      p_over_q * *(b + 13 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 80);
            *(b + 7 * OS1_S1 + 145) = prefactor_x * *(b + 7 * OS1_S1 + 109) -
                                      p_over_q * *(b + 13 * OS1_S1 + 109) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 81);
            *(b + 7 * OS1_S1 + 146) =
                prefactor_y * *(b + 7 * OS1_S1 + 104) -
                p_over_q * *(b + 16 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 104);
            *(b + 7 * OS1_S1 + 147) = prefactor_x * *(b + 7 * OS1_S1 + 111) -
                                      p_over_q * *(b + 13 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 83);
            *(b + 7 * OS1_S1 + 148) = prefactor_x * *(b + 7 * OS1_S1 + 112) -
                                      p_over_q * *(b + 13 * OS1_S1 + 112);
            *(b + 7 * OS1_S1 + 149) = prefactor_z * *(b + 7 * OS1_S1 + 105) -
                                      p_over_q * *(b + 17 * OS1_S1 + 105);
            *(b + 7 * OS1_S1 + 150) = prefactor_x * *(b + 7 * OS1_S1 + 114) -
                                      p_over_q * *(b + 13 * OS1_S1 + 114);
            *(b + 7 * OS1_S1 + 151) = prefactor_x * *(b + 7 * OS1_S1 + 115) -
                                      p_over_q * *(b + 13 * OS1_S1 + 115);
            *(b + 7 * OS1_S1 + 152) = prefactor_x * *(b + 7 * OS1_S1 + 116) -
                                      p_over_q * *(b + 13 * OS1_S1 + 116);
            *(b + 7 * OS1_S1 + 153) = prefactor_x * *(b + 7 * OS1_S1 + 117) -
                                      p_over_q * *(b + 13 * OS1_S1 + 117);
            *(b + 7 * OS1_S1 + 154) = prefactor_x * *(b + 7 * OS1_S1 + 118) -
                                      p_over_q * *(b + 13 * OS1_S1 + 118);
            *(b + 7 * OS1_S1 + 155) = prefactor_x * *(b + 7 * OS1_S1 + 119) -
                                      p_over_q * *(b + 13 * OS1_S1 + 119);
            *(b + 7 * OS1_S1 + 156) =
                prefactor_y * *(b + 7 * OS1_S1 + 112) -
                p_over_q * *(b + 16 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 7 * OS1_S1 + 77);
            *(b + 7 * OS1_S1 + 157) = prefactor_z * *(b + 7 * OS1_S1 + 112) -
                                      p_over_q * *(b + 17 * OS1_S1 + 112);
            *(b + 7 * OS1_S1 + 158) = prefactor_z * *(b + 7 * OS1_S1 + 113) -
                                      p_over_q * *(b + 17 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 7 * OS1_S1 + 77);
            *(b + 7 * OS1_S1 + 159) =
                prefactor_z * *(b + 7 * OS1_S1 + 114) -
                p_over_q * *(b + 17 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 78);
            *(b + 7 * OS1_S1 + 160) =
                prefactor_z * *(b + 7 * OS1_S1 + 115) -
                p_over_q * *(b + 17 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 79);
            *(b + 7 * OS1_S1 + 161) =
                prefactor_y * *(b + 7 * OS1_S1 + 117) -
                p_over_q * *(b + 16 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 7 * OS1_S1 + 82);
            *(b + 7 * OS1_S1 + 162) =
                prefactor_y * *(b + 7 * OS1_S1 + 118) -
                p_over_q * *(b + 16 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 118) +
                one_over_two_q * *(b + 7 * OS1_S1 + 83);
            *(b + 7 * OS1_S1 + 163) =
                prefactor_y * *(b + 7 * OS1_S1 + 119) -
                p_over_q * *(b + 16 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 2 * OS1_S1 + 119);
            *(b + 7 * OS1_S1 + 164) =
                prefactor_z * *(b + 7 * OS1_S1 + 119) -
                p_over_q * *(b + 17 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 7 * OS1_S1 + 83);
            *(b + 8 * OS1_S1 + 120) =
                prefactor_x * *(b + 8 * OS1_S1 + 84) -
                p_over_q * *(b + 14 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 8 * OS1_S1 + 56);
            *(b + 8 * OS1_S1 + 121) = prefactor_y * *(b + 8 * OS1_S1 + 84) -
                                      p_over_q * *(b + 17 * OS1_S1 + 84) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 84);
            *(b + 8 * OS1_S1 + 122) = prefactor_z * *(b + 8 * OS1_S1 + 84) -
                                      p_over_q * *(b + 18 * OS1_S1 + 84) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 84);
            *(b + 8 * OS1_S1 + 123) = prefactor_y * *(b + 8 * OS1_S1 + 85) -
                                      p_over_q * *(b + 17 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 56);
            *(b + 8 * OS1_S1 + 124) = prefactor_z * *(b + 8 * OS1_S1 + 85) -
                                      p_over_q * *(b + 18 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 85);
            *(b + 8 * OS1_S1 + 125) = prefactor_z * *(b + 8 * OS1_S1 + 86) -
                                      p_over_q * *(b + 18 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 86) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 56);
            *(b + 8 * OS1_S1 + 126) =
                prefactor_y * *(b + 8 * OS1_S1 + 87) -
                p_over_q * *(b + 17 * OS1_S1 + 87) +
                one_over_two_q * *(b + 3 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 57);
            *(b + 8 * OS1_S1 + 127) = prefactor_z * *(b + 8 * OS1_S1 + 87) -
                                      p_over_q * *(b + 18 * OS1_S1 + 87) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 87);
            *(b + 8 * OS1_S1 + 128) = prefactor_y * *(b + 8 * OS1_S1 + 89) -
                                      p_over_q * *(b + 17 * OS1_S1 + 89) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 89);
            *(b + 8 * OS1_S1 + 129) =
                prefactor_z * *(b + 8 * OS1_S1 + 89) -
                p_over_q * *(b + 18 * OS1_S1 + 89) +
                one_over_two_q * *(b + 2 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 58);
            *(b + 8 * OS1_S1 + 130) =
                prefactor_x * *(b + 8 * OS1_S1 + 94) -
                p_over_q * *(b + 14 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 8 * OS1_S1 + 66);
            *(b + 8 * OS1_S1 + 131) = prefactor_z * *(b + 8 * OS1_S1 + 90) -
                                      p_over_q * *(b + 18 * OS1_S1 + 90) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 90);
            *(b + 8 * OS1_S1 + 132) = prefactor_z * *(b + 8 * OS1_S1 + 91) -
                                      p_over_q * *(b + 18 * OS1_S1 + 91) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 91) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 59);
            *(b + 8 * OS1_S1 + 133) = prefactor_y * *(b + 8 * OS1_S1 + 93) -
                                      p_over_q * *(b + 17 * OS1_S1 + 93) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 93);
            *(b + 8 * OS1_S1 + 134) =
                prefactor_x * *(b + 8 * OS1_S1 + 98) -
                p_over_q * *(b + 14 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 8 * OS1_S1 + 70);
            *(b + 8 * OS1_S1 + 135) =
                prefactor_x * *(b + 8 * OS1_S1 + 99) -
                p_over_q * *(b + 14 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 71);
            *(b + 8 * OS1_S1 + 136) = prefactor_z * *(b + 8 * OS1_S1 + 94) -
                                      p_over_q * *(b + 18 * OS1_S1 + 94) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 94);
            *(b + 8 * OS1_S1 + 137) = prefactor_z * *(b + 8 * OS1_S1 + 95) -
                                      p_over_q * *(b + 18 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 95) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 62);
            *(b + 8 * OS1_S1 + 138) = prefactor_y * *(b + 8 * OS1_S1 + 97) -
                                      p_over_q * *(b + 17 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 65);
            *(b + 8 * OS1_S1 + 139) = prefactor_y * *(b + 8 * OS1_S1 + 98) -
                                      p_over_q * *(b + 17 * OS1_S1 + 98) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 98);
            *(b + 8 * OS1_S1 + 140) =
                prefactor_x * *(b + 8 * OS1_S1 + 104) -
                p_over_q * *(b + 14 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 76);
            *(b + 8 * OS1_S1 + 141) = prefactor_x * *(b + 8 * OS1_S1 + 105) -
                                      p_over_q * *(b + 14 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 77);
            *(b + 8 * OS1_S1 + 142) = prefactor_z * *(b + 8 * OS1_S1 + 99) -
                                      p_over_q * *(b + 18 * OS1_S1 + 99) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 99);
            *(b + 8 * OS1_S1 + 143) = prefactor_x * *(b + 8 * OS1_S1 + 107) -
                                      p_over_q * *(b + 14 * OS1_S1 + 107) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 79);
            *(b + 8 * OS1_S1 + 144) = prefactor_x * *(b + 8 * OS1_S1 + 108) -
                                      p_over_q * *(b + 14 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 80);
            *(b + 8 * OS1_S1 + 145) = prefactor_x * *(b + 8 * OS1_S1 + 109) -
                                      p_over_q * *(b + 14 * OS1_S1 + 109) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 81);
            *(b + 8 * OS1_S1 + 146) = prefactor_y * *(b + 8 * OS1_S1 + 104) -
                                      p_over_q * *(b + 17 * OS1_S1 + 104) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 104);
            *(b + 8 * OS1_S1 + 147) = prefactor_x * *(b + 8 * OS1_S1 + 111) -
                                      p_over_q * *(b + 14 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 83);
            *(b + 8 * OS1_S1 + 148) = prefactor_x * *(b + 8 * OS1_S1 + 112) -
                                      p_over_q * *(b + 14 * OS1_S1 + 112);
            *(b + 8 * OS1_S1 + 149) = prefactor_x * *(b + 8 * OS1_S1 + 113) -
                                      p_over_q * *(b + 14 * OS1_S1 + 113);
            *(b + 8 * OS1_S1 + 150) = prefactor_x * *(b + 8 * OS1_S1 + 114) -
                                      p_over_q * *(b + 14 * OS1_S1 + 114);
            *(b + 8 * OS1_S1 + 151) = prefactor_x * *(b + 8 * OS1_S1 + 115) -
                                      p_over_q * *(b + 14 * OS1_S1 + 115);
            *(b + 8 * OS1_S1 + 152) = prefactor_x * *(b + 8 * OS1_S1 + 116) -
                                      p_over_q * *(b + 14 * OS1_S1 + 116);
            *(b + 8 * OS1_S1 + 153) = prefactor_x * *(b + 8 * OS1_S1 + 117) -
                                      p_over_q * *(b + 14 * OS1_S1 + 117);
            *(b + 8 * OS1_S1 + 154) = prefactor_x * *(b + 8 * OS1_S1 + 118) -
                                      p_over_q * *(b + 14 * OS1_S1 + 118);
            *(b + 8 * OS1_S1 + 155) = prefactor_x * *(b + 8 * OS1_S1 + 119) -
                                      p_over_q * *(b + 14 * OS1_S1 + 119);
            *(b + 8 * OS1_S1 + 156) =
                prefactor_y * *(b + 8 * OS1_S1 + 112) -
                p_over_q * *(b + 17 * OS1_S1 + 112) +
                one_over_two_q * *(b + 3 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 8 * OS1_S1 + 77);
            *(b + 8 * OS1_S1 + 157) = prefactor_z * *(b + 8 * OS1_S1 + 112) -
                                      p_over_q * *(b + 18 * OS1_S1 + 112) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 112);
            *(b + 8 * OS1_S1 + 158) = prefactor_z * *(b + 8 * OS1_S1 + 113) -
                                      p_over_q * *(b + 18 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 2 * OS1_S1 + 113) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 77);
            *(b + 8 * OS1_S1 + 159) =
                prefactor_z * *(b + 8 * OS1_S1 + 114) -
                p_over_q * *(b + 18 * OS1_S1 + 114) +
                one_over_two_q * *(b + 2 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 78);
            *(b + 8 * OS1_S1 + 160) =
                prefactor_z * *(b + 8 * OS1_S1 + 115) -
                p_over_q * *(b + 18 * OS1_S1 + 115) +
                one_over_two_q * *(b + 2 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 8 * OS1_S1 + 79);
            *(b + 8 * OS1_S1 + 161) =
                prefactor_y * *(b + 8 * OS1_S1 + 117) -
                p_over_q * *(b + 17 * OS1_S1 + 117) +
                one_over_two_q * *(b + 3 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 82);
            *(b + 8 * OS1_S1 + 162) = prefactor_y * *(b + 8 * OS1_S1 + 118) -
                                      p_over_q * *(b + 17 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 8 * OS1_S1 + 83);
            *(b + 8 * OS1_S1 + 163) = prefactor_y * *(b + 8 * OS1_S1 + 119) -
                                      p_over_q * *(b + 17 * OS1_S1 + 119) +
                                      one_over_two_q * *(b + 3 * OS1_S1 + 119);
            *(b + 8 * OS1_S1 + 164) =
                prefactor_z * *(b + 8 * OS1_S1 + 119) -
                p_over_q * *(b + 18 * OS1_S1 + 119) +
                one_over_two_q * *(b + 2 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 8 * OS1_S1 + 83);
            *(b + 9 * OS1_S1 + 120) =
                prefactor_x * *(b + 9 * OS1_S1 + 84) -
                p_over_q * *(b + 15 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 9 * OS1_S1 + 56);
            *(b + 9 * OS1_S1 + 121) = prefactor_y * *(b + 9 * OS1_S1 + 84) -
                                      p_over_q * *(b + 18 * OS1_S1 + 84);
            *(b + 9 * OS1_S1 + 122) =
                prefactor_z * *(b + 9 * OS1_S1 + 84) -
                p_over_q * *(b + 19 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 84);
            *(b + 9 * OS1_S1 + 123) = prefactor_y * *(b + 9 * OS1_S1 + 85) -
                                      p_over_q * *(b + 18 * OS1_S1 + 85) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 56);
            *(b + 9 * OS1_S1 + 124) = prefactor_y * *(b + 9 * OS1_S1 + 86) -
                                      p_over_q * *(b + 18 * OS1_S1 + 86);
            *(b + 9 * OS1_S1 + 125) =
                prefactor_z * *(b + 9 * OS1_S1 + 86) -
                p_over_q * *(b + 19 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 86) +
                one_over_two_q * *(b + 9 * OS1_S1 + 56);
            *(b + 9 * OS1_S1 + 126) =
                prefactor_y * *(b + 9 * OS1_S1 + 87) -
                p_over_q * *(b + 18 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 57);
            *(b + 9 * OS1_S1 + 127) =
                prefactor_z * *(b + 9 * OS1_S1 + 87) -
                p_over_q * *(b + 19 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 87);
            *(b + 9 * OS1_S1 + 128) = prefactor_y * *(b + 9 * OS1_S1 + 89) -
                                      p_over_q * *(b + 18 * OS1_S1 + 89);
            *(b + 9 * OS1_S1 + 129) =
                prefactor_z * *(b + 9 * OS1_S1 + 89) -
                p_over_q * *(b + 19 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 58);
            *(b + 9 * OS1_S1 + 130) =
                prefactor_y * *(b + 9 * OS1_S1 + 90) -
                p_over_q * *(b + 18 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 59);
            *(b + 9 * OS1_S1 + 131) =
                prefactor_z * *(b + 9 * OS1_S1 + 90) -
                p_over_q * *(b + 19 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 90);
            *(b + 9 * OS1_S1 + 132) = prefactor_y * *(b + 9 * OS1_S1 + 92) -
                                      p_over_q * *(b + 18 * OS1_S1 + 92) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 61);
            *(b + 9 * OS1_S1 + 133) = prefactor_y * *(b + 9 * OS1_S1 + 93) -
                                      p_over_q * *(b + 18 * OS1_S1 + 93);
            *(b + 9 * OS1_S1 + 134) =
                prefactor_x * *(b + 9 * OS1_S1 + 98) -
                p_over_q * *(b + 15 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 70);
            *(b + 9 * OS1_S1 + 135) =
                prefactor_x * *(b + 9 * OS1_S1 + 99) -
                p_over_q * *(b + 15 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 71);
            *(b + 9 * OS1_S1 + 136) =
                prefactor_z * *(b + 9 * OS1_S1 + 94) -
                p_over_q * *(b + 19 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 94);
            *(b + 9 * OS1_S1 + 137) =
                prefactor_z * *(b + 9 * OS1_S1 + 95) -
                p_over_q * *(b + 19 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 95) +
                one_over_two_q * *(b + 9 * OS1_S1 + 62);
            *(b + 9 * OS1_S1 + 138) = prefactor_y * *(b + 9 * OS1_S1 + 97) -
                                      p_over_q * *(b + 18 * OS1_S1 + 97) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 65);
            *(b + 9 * OS1_S1 + 139) = prefactor_y * *(b + 9 * OS1_S1 + 98) -
                                      p_over_q * *(b + 18 * OS1_S1 + 98);
            *(b + 9 * OS1_S1 + 140) =
                prefactor_x * *(b + 9 * OS1_S1 + 104) -
                p_over_q * *(b + 15 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 76);
            *(b + 9 * OS1_S1 + 141) = prefactor_x * *(b + 9 * OS1_S1 + 105) -
                                      p_over_q * *(b + 15 * OS1_S1 + 105) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 77);
            *(b + 9 * OS1_S1 + 142) =
                prefactor_z * *(b + 9 * OS1_S1 + 99) -
                p_over_q * *(b + 19 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 99);
            *(b + 9 * OS1_S1 + 143) = prefactor_x * *(b + 9 * OS1_S1 + 107) -
                                      p_over_q * *(b + 15 * OS1_S1 + 107) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 79);
            *(b + 9 * OS1_S1 + 144) = prefactor_x * *(b + 9 * OS1_S1 + 108) -
                                      p_over_q * *(b + 15 * OS1_S1 + 108) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 80);
            *(b + 9 * OS1_S1 + 145) = prefactor_y * *(b + 9 * OS1_S1 + 103) -
                                      p_over_q * *(b + 18 * OS1_S1 + 103) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 70);
            *(b + 9 * OS1_S1 + 146) = prefactor_y * *(b + 9 * OS1_S1 + 104) -
                                      p_over_q * *(b + 18 * OS1_S1 + 104);
            *(b + 9 * OS1_S1 + 147) = prefactor_x * *(b + 9 * OS1_S1 + 111) -
                                      p_over_q * *(b + 15 * OS1_S1 + 111) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 83);
            *(b + 9 * OS1_S1 + 148) = prefactor_x * *(b + 9 * OS1_S1 + 112) -
                                      p_over_q * *(b + 15 * OS1_S1 + 112);
            *(b + 9 * OS1_S1 + 149) = prefactor_x * *(b + 9 * OS1_S1 + 113) -
                                      p_over_q * *(b + 15 * OS1_S1 + 113);
            *(b + 9 * OS1_S1 + 150) = prefactor_x * *(b + 9 * OS1_S1 + 114) -
                                      p_over_q * *(b + 15 * OS1_S1 + 114);
            *(b + 9 * OS1_S1 + 151) = prefactor_x * *(b + 9 * OS1_S1 + 115) -
                                      p_over_q * *(b + 15 * OS1_S1 + 115);
            *(b + 9 * OS1_S1 + 152) = prefactor_x * *(b + 9 * OS1_S1 + 116) -
                                      p_over_q * *(b + 15 * OS1_S1 + 116);
            *(b + 9 * OS1_S1 + 153) = prefactor_x * *(b + 9 * OS1_S1 + 117) -
                                      p_over_q * *(b + 15 * OS1_S1 + 117);
            *(b + 9 * OS1_S1 + 154) = prefactor_y * *(b + 9 * OS1_S1 + 111) -
                                      p_over_q * *(b + 18 * OS1_S1 + 111);
            *(b + 9 * OS1_S1 + 155) = prefactor_x * *(b + 9 * OS1_S1 + 119) -
                                      p_over_q * *(b + 15 * OS1_S1 + 119);
            *(b + 9 * OS1_S1 + 156) =
                prefactor_y * *(b + 9 * OS1_S1 + 112) -
                p_over_q * *(b + 18 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 9 * OS1_S1 + 77);
            *(b + 9 * OS1_S1 + 157) =
                prefactor_z * *(b + 9 * OS1_S1 + 112) -
                p_over_q * *(b + 19 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 112);
            *(b + 9 * OS1_S1 + 158) =
                prefactor_z * *(b + 9 * OS1_S1 + 113) -
                p_over_q * *(b + 19 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 113) +
                one_over_two_q * *(b + 9 * OS1_S1 + 77);
            *(b + 9 * OS1_S1 + 159) =
                prefactor_z * *(b + 9 * OS1_S1 + 114) -
                p_over_q * *(b + 19 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 78);
            *(b + 9 * OS1_S1 + 160) =
                prefactor_y * *(b + 9 * OS1_S1 + 116) -
                p_over_q * *(b + 18 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 81);
            *(b + 9 * OS1_S1 + 161) =
                prefactor_y * *(b + 9 * OS1_S1 + 117) -
                p_over_q * *(b + 18 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 9 * OS1_S1 + 82);
            *(b + 9 * OS1_S1 + 162) = prefactor_y * *(b + 9 * OS1_S1 + 118) -
                                      p_over_q * *(b + 18 * OS1_S1 + 118) +
                                      one_over_two_q * *(b + 9 * OS1_S1 + 83);
            *(b + 9 * OS1_S1 + 163) = prefactor_y * *(b + 9 * OS1_S1 + 119) -
                                      p_over_q * *(b + 18 * OS1_S1 + 119);
            *(b + 9 * OS1_S1 + 164) =
                prefactor_z * *(b + 9 * OS1_S1 + 119) -
                p_over_q * *(b + 19 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 3 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 9 * OS1_S1 + 83);
            return;
        }
        void transfer_3_8(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 10 * OS1_S1 + 120) =
                prefactor_x * *(b + 10 * OS1_S1 + 84) -
                p_over_q * *(b + 20 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 10 * OS1_S1 + 56);
            *(b + 10 * OS1_S1 + 121) = prefactor_y * *(b + 10 * OS1_S1 + 84) -
                                       p_over_q * *(b + 21 * OS1_S1 + 84);
            *(b + 10 * OS1_S1 + 122) = prefactor_z * *(b + 10 * OS1_S1 + 84) -
                                       p_over_q * *(b + 22 * OS1_S1 + 84);
            *(b + 10 * OS1_S1 + 123) = prefactor_y * *(b + 10 * OS1_S1 + 85) -
                                       p_over_q * *(b + 21 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 56);
            *(b + 10 * OS1_S1 + 124) = prefactor_z * *(b + 10 * OS1_S1 + 85) -
                                       p_over_q * *(b + 22 * OS1_S1 + 85);
            *(b + 10 * OS1_S1 + 125) = prefactor_z * *(b + 10 * OS1_S1 + 86) -
                                       p_over_q * *(b + 22 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 56);
            *(b + 10 * OS1_S1 + 126) =
                prefactor_y * *(b + 10 * OS1_S1 + 87) -
                p_over_q * *(b + 21 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 57);
            *(b + 10 * OS1_S1 + 127) = prefactor_z * *(b + 10 * OS1_S1 + 87) -
                                       p_over_q * *(b + 22 * OS1_S1 + 87);
            *(b + 10 * OS1_S1 + 128) = prefactor_y * *(b + 10 * OS1_S1 + 89) -
                                       p_over_q * *(b + 21 * OS1_S1 + 89);
            *(b + 10 * OS1_S1 + 129) =
                prefactor_z * *(b + 10 * OS1_S1 + 89) -
                p_over_q * *(b + 22 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 58);
            *(b + 10 * OS1_S1 + 130) =
                prefactor_y * *(b + 10 * OS1_S1 + 90) -
                p_over_q * *(b + 21 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 10 * OS1_S1 + 59);
            *(b + 10 * OS1_S1 + 131) = prefactor_z * *(b + 10 * OS1_S1 + 90) -
                                       p_over_q * *(b + 22 * OS1_S1 + 90);
            *(b + 10 * OS1_S1 + 132) = prefactor_z * *(b + 10 * OS1_S1 + 91) -
                                       p_over_q * *(b + 22 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 59);
            *(b + 10 * OS1_S1 + 133) = prefactor_y * *(b + 10 * OS1_S1 + 93) -
                                       p_over_q * *(b + 21 * OS1_S1 + 93);
            *(b + 10 * OS1_S1 + 134) =
                prefactor_z * *(b + 10 * OS1_S1 + 93) -
                p_over_q * *(b + 22 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 10 * OS1_S1 + 61);
            *(b + 10 * OS1_S1 + 135) =
                prefactor_x * *(b + 10 * OS1_S1 + 99) -
                p_over_q * *(b + 20 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 71);
            *(b + 10 * OS1_S1 + 136) = prefactor_z * *(b + 10 * OS1_S1 + 94) -
                                       p_over_q * *(b + 22 * OS1_S1 + 94);
            *(b + 10 * OS1_S1 + 137) = prefactor_z * *(b + 10 * OS1_S1 + 95) -
                                       p_over_q * *(b + 22 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 62);
            *(b + 10 * OS1_S1 + 138) = prefactor_y * *(b + 10 * OS1_S1 + 97) -
                                       p_over_q * *(b + 21 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 65);
            *(b + 10 * OS1_S1 + 139) = prefactor_y * *(b + 10 * OS1_S1 + 98) -
                                       p_over_q * *(b + 21 * OS1_S1 + 98);
            *(b + 10 * OS1_S1 + 140) =
                prefactor_x * *(b + 10 * OS1_S1 + 104) -
                p_over_q * *(b + 20 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 76);
            *(b + 10 * OS1_S1 + 141) =
                prefactor_x * *(b + 10 * OS1_S1 + 105) -
                p_over_q * *(b + 20 * OS1_S1 + 105) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 105) +
                one_over_two_q * *(b + 10 * OS1_S1 + 77);
            *(b + 10 * OS1_S1 + 142) = prefactor_z * *(b + 10 * OS1_S1 + 99) -
                                       p_over_q * *(b + 22 * OS1_S1 + 99);
            *(b + 10 * OS1_S1 + 143) = prefactor_z * *(b + 10 * OS1_S1 + 100) -
                                       p_over_q * *(b + 22 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 66);
            *(b + 10 * OS1_S1 + 144) =
                prefactor_x * *(b + 10 * OS1_S1 + 108) -
                p_over_q * *(b + 20 * OS1_S1 + 108) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 108) +
                one_over_two_q * *(b + 10 * OS1_S1 + 80);
            *(b + 10 * OS1_S1 + 145) = prefactor_y * *(b + 10 * OS1_S1 + 103) -
                                       p_over_q * *(b + 21 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 70);
            *(b + 10 * OS1_S1 + 146) = prefactor_y * *(b + 10 * OS1_S1 + 104) -
                                       p_over_q * *(b + 21 * OS1_S1 + 104);
            *(b + 10 * OS1_S1 + 147) =
                prefactor_x * *(b + 10 * OS1_S1 + 111) -
                p_over_q * *(b + 20 * OS1_S1 + 111) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 111) +
                one_over_two_q * *(b + 10 * OS1_S1 + 83);
            *(b + 10 * OS1_S1 + 148) =
                prefactor_x * *(b + 10 * OS1_S1 + 112) -
                p_over_q * *(b + 20 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 112);
            *(b + 10 * OS1_S1 + 149) = prefactor_z * *(b + 10 * OS1_S1 + 105) -
                                       p_over_q * *(b + 22 * OS1_S1 + 105);
            *(b + 10 * OS1_S1 + 150) =
                prefactor_x * *(b + 10 * OS1_S1 + 114) -
                p_over_q * *(b + 20 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 114);
            *(b + 10 * OS1_S1 + 151) =
                prefactor_x * *(b + 10 * OS1_S1 + 115) -
                p_over_q * *(b + 20 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 115);
            *(b + 10 * OS1_S1 + 152) =
                prefactor_x * *(b + 10 * OS1_S1 + 116) -
                p_over_q * *(b + 20 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 116);
            *(b + 10 * OS1_S1 + 153) =
                prefactor_x * *(b + 10 * OS1_S1 + 117) -
                p_over_q * *(b + 20 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 117);
            *(b + 10 * OS1_S1 + 154) = prefactor_y * *(b + 10 * OS1_S1 + 111) -
                                       p_over_q * *(b + 21 * OS1_S1 + 111);
            *(b + 10 * OS1_S1 + 155) =
                prefactor_x * *(b + 10 * OS1_S1 + 119) -
                p_over_q * *(b + 20 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 4 * OS1_S1 + 119);
            *(b + 10 * OS1_S1 + 156) =
                prefactor_y * *(b + 10 * OS1_S1 + 112) -
                p_over_q * *(b + 21 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 10 * OS1_S1 + 77);
            *(b + 10 * OS1_S1 + 157) = prefactor_z * *(b + 10 * OS1_S1 + 112) -
                                       p_over_q * *(b + 22 * OS1_S1 + 112);
            *(b + 10 * OS1_S1 + 158) = prefactor_z * *(b + 10 * OS1_S1 + 113) -
                                       p_over_q * *(b + 22 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 77);
            *(b + 10 * OS1_S1 + 159) =
                prefactor_z * *(b + 10 * OS1_S1 + 114) -
                p_over_q * *(b + 22 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 78);
            *(b + 10 * OS1_S1 + 160) =
                prefactor_z * *(b + 10 * OS1_S1 + 115) -
                p_over_q * *(b + 22 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 10 * OS1_S1 + 79);
            *(b + 10 * OS1_S1 + 161) =
                prefactor_y * *(b + 10 * OS1_S1 + 117) -
                p_over_q * *(b + 21 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 10 * OS1_S1 + 82);
            *(b + 10 * OS1_S1 + 162) = prefactor_y * *(b + 10 * OS1_S1 + 118) -
                                       p_over_q * *(b + 21 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 10 * OS1_S1 + 83);
            *(b + 10 * OS1_S1 + 163) = prefactor_y * *(b + 10 * OS1_S1 + 119) -
                                       p_over_q * *(b + 21 * OS1_S1 + 119);
            *(b + 10 * OS1_S1 + 164) =
                prefactor_z * *(b + 10 * OS1_S1 + 119) -
                p_over_q * *(b + 22 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 10 * OS1_S1 + 83);
            *(b + 11 * OS1_S1 + 120) =
                prefactor_x * *(b + 11 * OS1_S1 + 84) -
                p_over_q * *(b + 21 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 11 * OS1_S1 + 56);
            *(b + 11 * OS1_S1 + 121) = prefactor_y * *(b + 11 * OS1_S1 + 84) -
                                       p_over_q * *(b + 23 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 84);
            *(b + 11 * OS1_S1 + 122) = prefactor_z * *(b + 11 * OS1_S1 + 84) -
                                       p_over_q * *(b + 24 * OS1_S1 + 84);
            *(b + 11 * OS1_S1 + 123) = prefactor_y * *(b + 11 * OS1_S1 + 85) -
                                       p_over_q * *(b + 23 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 56);
            *(b + 11 * OS1_S1 + 124) = prefactor_z * *(b + 11 * OS1_S1 + 85) -
                                       p_over_q * *(b + 24 * OS1_S1 + 85);
            *(b + 11 * OS1_S1 + 125) = prefactor_z * *(b + 11 * OS1_S1 + 86) -
                                       p_over_q * *(b + 24 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 56);
            *(b + 11 * OS1_S1 + 126) =
                prefactor_y * *(b + 11 * OS1_S1 + 87) -
                p_over_q * *(b + 23 * OS1_S1 + 87) +
                one_over_two_q * *(b + 4 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 57);
            *(b + 11 * OS1_S1 + 127) = prefactor_z * *(b + 11 * OS1_S1 + 87) -
                                       p_over_q * *(b + 24 * OS1_S1 + 87);
            *(b + 11 * OS1_S1 + 128) = prefactor_y * *(b + 11 * OS1_S1 + 89) -
                                       p_over_q * *(b + 23 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 89);
            *(b + 11 * OS1_S1 + 129) =
                prefactor_z * *(b + 11 * OS1_S1 + 89) -
                p_over_q * *(b + 24 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 58);
            *(b + 11 * OS1_S1 + 130) =
                prefactor_y * *(b + 11 * OS1_S1 + 90) -
                p_over_q * *(b + 23 * OS1_S1 + 90) +
                one_over_two_q * *(b + 4 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 59);
            *(b + 11 * OS1_S1 + 131) = prefactor_z * *(b + 11 * OS1_S1 + 90) -
                                       p_over_q * *(b + 24 * OS1_S1 + 90);
            *(b + 11 * OS1_S1 + 132) = prefactor_z * *(b + 11 * OS1_S1 + 91) -
                                       p_over_q * *(b + 24 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 59);
            *(b + 11 * OS1_S1 + 133) = prefactor_y * *(b + 11 * OS1_S1 + 93) -
                                       p_over_q * *(b + 23 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 93);
            *(b + 11 * OS1_S1 + 134) =
                prefactor_z * *(b + 11 * OS1_S1 + 93) -
                p_over_q * *(b + 24 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 61);
            *(b + 11 * OS1_S1 + 135) =
                prefactor_x * *(b + 11 * OS1_S1 + 99) -
                p_over_q * *(b + 21 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 71);
            *(b + 11 * OS1_S1 + 136) = prefactor_z * *(b + 11 * OS1_S1 + 94) -
                                       p_over_q * *(b + 24 * OS1_S1 + 94);
            *(b + 11 * OS1_S1 + 137) = prefactor_z * *(b + 11 * OS1_S1 + 95) -
                                       p_over_q * *(b + 24 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 62);
            *(b + 11 * OS1_S1 + 138) = prefactor_y * *(b + 11 * OS1_S1 + 97) -
                                       p_over_q * *(b + 23 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 65);
            *(b + 11 * OS1_S1 + 139) = prefactor_y * *(b + 11 * OS1_S1 + 98) -
                                       p_over_q * *(b + 23 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 98);
            *(b + 11 * OS1_S1 + 140) =
                prefactor_x * *(b + 11 * OS1_S1 + 104) -
                p_over_q * *(b + 21 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 76);
            *(b + 11 * OS1_S1 + 141) =
                prefactor_x * *(b + 11 * OS1_S1 + 105) -
                p_over_q * *(b + 21 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 105) +
                one_over_two_q * *(b + 11 * OS1_S1 + 77);
            *(b + 11 * OS1_S1 + 142) = prefactor_z * *(b + 11 * OS1_S1 + 99) -
                                       p_over_q * *(b + 24 * OS1_S1 + 99);
            *(b + 11 * OS1_S1 + 143) = prefactor_z * *(b + 11 * OS1_S1 + 100) -
                                       p_over_q * *(b + 24 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 66);
            *(b + 11 * OS1_S1 + 144) =
                prefactor_x * *(b + 11 * OS1_S1 + 108) -
                p_over_q * *(b + 21 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 108) +
                one_over_two_q * *(b + 11 * OS1_S1 + 80);
            *(b + 11 * OS1_S1 + 145) =
                prefactor_y * *(b + 11 * OS1_S1 + 103) -
                p_over_q * *(b + 23 * OS1_S1 + 103) +
                one_over_two_q * *(b + 4 * OS1_S1 + 103) +
                one_over_two_q * *(b + 11 * OS1_S1 + 70);
            *(b + 11 * OS1_S1 + 146) = prefactor_y * *(b + 11 * OS1_S1 + 104) -
                                       p_over_q * *(b + 23 * OS1_S1 + 104) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 104);
            *(b + 11 * OS1_S1 + 147) =
                prefactor_x * *(b + 11 * OS1_S1 + 111) -
                p_over_q * *(b + 21 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 111) +
                one_over_two_q * *(b + 11 * OS1_S1 + 83);
            *(b + 11 * OS1_S1 + 148) =
                prefactor_x * *(b + 11 * OS1_S1 + 112) -
                p_over_q * *(b + 21 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 112);
            *(b + 11 * OS1_S1 + 149) = prefactor_z * *(b + 11 * OS1_S1 + 105) -
                                       p_over_q * *(b + 24 * OS1_S1 + 105);
            *(b + 11 * OS1_S1 + 150) =
                prefactor_x * *(b + 11 * OS1_S1 + 114) -
                p_over_q * *(b + 21 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 114);
            *(b + 11 * OS1_S1 + 151) =
                prefactor_x * *(b + 11 * OS1_S1 + 115) -
                p_over_q * *(b + 21 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 115);
            *(b + 11 * OS1_S1 + 152) =
                prefactor_x * *(b + 11 * OS1_S1 + 116) -
                p_over_q * *(b + 21 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 116);
            *(b + 11 * OS1_S1 + 153) =
                prefactor_x * *(b + 11 * OS1_S1 + 117) -
                p_over_q * *(b + 21 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 117);
            *(b + 11 * OS1_S1 + 154) = prefactor_y * *(b + 11 * OS1_S1 + 111) -
                                       p_over_q * *(b + 23 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 111);
            *(b + 11 * OS1_S1 + 155) =
                prefactor_x * *(b + 11 * OS1_S1 + 119) -
                p_over_q * *(b + 21 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 119);
            *(b + 11 * OS1_S1 + 156) =
                prefactor_y * *(b + 11 * OS1_S1 + 112) -
                p_over_q * *(b + 23 * OS1_S1 + 112) +
                one_over_two_q * *(b + 4 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 11 * OS1_S1 + 77);
            *(b + 11 * OS1_S1 + 157) = prefactor_z * *(b + 11 * OS1_S1 + 112) -
                                       p_over_q * *(b + 24 * OS1_S1 + 112);
            *(b + 11 * OS1_S1 + 158) = prefactor_z * *(b + 11 * OS1_S1 + 113) -
                                       p_over_q * *(b + 24 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 11 * OS1_S1 + 77);
            *(b + 11 * OS1_S1 + 159) =
                prefactor_z * *(b + 11 * OS1_S1 + 114) -
                p_over_q * *(b + 24 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 78);
            *(b + 11 * OS1_S1 + 160) =
                prefactor_z * *(b + 11 * OS1_S1 + 115) -
                p_over_q * *(b + 24 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 11 * OS1_S1 + 79);
            *(b + 11 * OS1_S1 + 161) =
                prefactor_y * *(b + 11 * OS1_S1 + 117) -
                p_over_q * *(b + 23 * OS1_S1 + 117) +
                one_over_two_q * *(b + 4 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 11 * OS1_S1 + 82);
            *(b + 11 * OS1_S1 + 162) =
                prefactor_y * *(b + 11 * OS1_S1 + 118) -
                p_over_q * *(b + 23 * OS1_S1 + 118) +
                one_over_two_q * *(b + 4 * OS1_S1 + 118) +
                one_over_two_q * *(b + 11 * OS1_S1 + 83);
            *(b + 11 * OS1_S1 + 163) = prefactor_y * *(b + 11 * OS1_S1 + 119) -
                                       p_over_q * *(b + 23 * OS1_S1 + 119) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 119);
            *(b + 11 * OS1_S1 + 164) =
                prefactor_z * *(b + 11 * OS1_S1 + 119) -
                p_over_q * *(b + 24 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 11 * OS1_S1 + 83);
            *(b + 12 * OS1_S1 + 120) =
                prefactor_x * *(b + 12 * OS1_S1 + 84) -
                p_over_q * *(b + 22 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 12 * OS1_S1 + 56);
            *(b + 12 * OS1_S1 + 121) = prefactor_y * *(b + 12 * OS1_S1 + 84) -
                                       p_over_q * *(b + 24 * OS1_S1 + 84);
            *(b + 12 * OS1_S1 + 122) = prefactor_z * *(b + 12 * OS1_S1 + 84) -
                                       p_over_q * *(b + 25 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 84);
            *(b + 12 * OS1_S1 + 123) = prefactor_y * *(b + 12 * OS1_S1 + 85) -
                                       p_over_q * *(b + 24 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 56);
            *(b + 12 * OS1_S1 + 124) = prefactor_y * *(b + 12 * OS1_S1 + 86) -
                                       p_over_q * *(b + 24 * OS1_S1 + 86);
            *(b + 12 * OS1_S1 + 125) = prefactor_z * *(b + 12 * OS1_S1 + 86) -
                                       p_over_q * *(b + 25 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 56);
            *(b + 12 * OS1_S1 + 126) =
                prefactor_y * *(b + 12 * OS1_S1 + 87) -
                p_over_q * *(b + 24 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 57);
            *(b + 12 * OS1_S1 + 127) = prefactor_z * *(b + 12 * OS1_S1 + 87) -
                                       p_over_q * *(b + 25 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 87);
            *(b + 12 * OS1_S1 + 128) = prefactor_y * *(b + 12 * OS1_S1 + 89) -
                                       p_over_q * *(b + 24 * OS1_S1 + 89);
            *(b + 12 * OS1_S1 + 129) =
                prefactor_z * *(b + 12 * OS1_S1 + 89) -
                p_over_q * *(b + 25 * OS1_S1 + 89) +
                one_over_two_q * *(b + 4 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 58);
            *(b + 12 * OS1_S1 + 130) =
                prefactor_y * *(b + 12 * OS1_S1 + 90) -
                p_over_q * *(b + 24 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 59);
            *(b + 12 * OS1_S1 + 131) = prefactor_z * *(b + 12 * OS1_S1 + 90) -
                                       p_over_q * *(b + 25 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 90);
            *(b + 12 * OS1_S1 + 132) = prefactor_y * *(b + 12 * OS1_S1 + 92) -
                                       p_over_q * *(b + 24 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 61);
            *(b + 12 * OS1_S1 + 133) = prefactor_y * *(b + 12 * OS1_S1 + 93) -
                                       p_over_q * *(b + 24 * OS1_S1 + 93);
            *(b + 12 * OS1_S1 + 134) =
                prefactor_z * *(b + 12 * OS1_S1 + 93) -
                p_over_q * *(b + 25 * OS1_S1 + 93) +
                one_over_two_q * *(b + 4 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 61);
            *(b + 12 * OS1_S1 + 135) =
                prefactor_x * *(b + 12 * OS1_S1 + 99) -
                p_over_q * *(b + 22 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 71);
            *(b + 12 * OS1_S1 + 136) = prefactor_z * *(b + 12 * OS1_S1 + 94) -
                                       p_over_q * *(b + 25 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 94);
            *(b + 12 * OS1_S1 + 137) = prefactor_z * *(b + 12 * OS1_S1 + 95) -
                                       p_over_q * *(b + 25 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 62);
            *(b + 12 * OS1_S1 + 138) = prefactor_y * *(b + 12 * OS1_S1 + 97) -
                                       p_over_q * *(b + 24 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 65);
            *(b + 12 * OS1_S1 + 139) = prefactor_y * *(b + 12 * OS1_S1 + 98) -
                                       p_over_q * *(b + 24 * OS1_S1 + 98);
            *(b + 12 * OS1_S1 + 140) =
                prefactor_x * *(b + 12 * OS1_S1 + 104) -
                p_over_q * *(b + 22 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 76);
            *(b + 12 * OS1_S1 + 141) =
                prefactor_x * *(b + 12 * OS1_S1 + 105) -
                p_over_q * *(b + 22 * OS1_S1 + 105) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 105) +
                one_over_two_q * *(b + 12 * OS1_S1 + 77);
            *(b + 12 * OS1_S1 + 142) = prefactor_z * *(b + 12 * OS1_S1 + 99) -
                                       p_over_q * *(b + 25 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 99);
            *(b + 12 * OS1_S1 + 143) =
                prefactor_z * *(b + 12 * OS1_S1 + 100) -
                p_over_q * *(b + 25 * OS1_S1 + 100) +
                one_over_two_q * *(b + 4 * OS1_S1 + 100) +
                one_over_two_q * *(b + 12 * OS1_S1 + 66);
            *(b + 12 * OS1_S1 + 144) =
                prefactor_x * *(b + 12 * OS1_S1 + 108) -
                p_over_q * *(b + 22 * OS1_S1 + 108) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 108) +
                one_over_two_q * *(b + 12 * OS1_S1 + 80);
            *(b + 12 * OS1_S1 + 145) = prefactor_y * *(b + 12 * OS1_S1 + 103) -
                                       p_over_q * *(b + 24 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 70);
            *(b + 12 * OS1_S1 + 146) = prefactor_y * *(b + 12 * OS1_S1 + 104) -
                                       p_over_q * *(b + 24 * OS1_S1 + 104);
            *(b + 12 * OS1_S1 + 147) =
                prefactor_x * *(b + 12 * OS1_S1 + 111) -
                p_over_q * *(b + 22 * OS1_S1 + 111) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 111) +
                one_over_two_q * *(b + 12 * OS1_S1 + 83);
            *(b + 12 * OS1_S1 + 148) =
                prefactor_x * *(b + 12 * OS1_S1 + 112) -
                p_over_q * *(b + 22 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 112);
            *(b + 12 * OS1_S1 + 149) = prefactor_z * *(b + 12 * OS1_S1 + 105) -
                                       p_over_q * *(b + 25 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 105);
            *(b + 12 * OS1_S1 + 150) =
                prefactor_x * *(b + 12 * OS1_S1 + 114) -
                p_over_q * *(b + 22 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 114);
            *(b + 12 * OS1_S1 + 151) =
                prefactor_x * *(b + 12 * OS1_S1 + 115) -
                p_over_q * *(b + 22 * OS1_S1 + 115) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 115);
            *(b + 12 * OS1_S1 + 152) =
                prefactor_x * *(b + 12 * OS1_S1 + 116) -
                p_over_q * *(b + 22 * OS1_S1 + 116) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 116);
            *(b + 12 * OS1_S1 + 153) =
                prefactor_x * *(b + 12 * OS1_S1 + 117) -
                p_over_q * *(b + 22 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 117);
            *(b + 12 * OS1_S1 + 154) = prefactor_y * *(b + 12 * OS1_S1 + 111) -
                                       p_over_q * *(b + 24 * OS1_S1 + 111);
            *(b + 12 * OS1_S1 + 155) =
                prefactor_x * *(b + 12 * OS1_S1 + 119) -
                p_over_q * *(b + 22 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 119);
            *(b + 12 * OS1_S1 + 156) =
                prefactor_y * *(b + 12 * OS1_S1 + 112) -
                p_over_q * *(b + 24 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 12 * OS1_S1 + 77);
            *(b + 12 * OS1_S1 + 157) = prefactor_z * *(b + 12 * OS1_S1 + 112) -
                                       p_over_q * *(b + 25 * OS1_S1 + 112) +
                                       one_over_two_q * *(b + 4 * OS1_S1 + 112);
            *(b + 12 * OS1_S1 + 158) =
                prefactor_z * *(b + 12 * OS1_S1 + 113) -
                p_over_q * *(b + 25 * OS1_S1 + 113) +
                one_over_two_q * *(b + 4 * OS1_S1 + 113) +
                one_over_two_q * *(b + 12 * OS1_S1 + 77);
            *(b + 12 * OS1_S1 + 159) =
                prefactor_z * *(b + 12 * OS1_S1 + 114) -
                p_over_q * *(b + 25 * OS1_S1 + 114) +
                one_over_two_q * *(b + 4 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 78);
            *(b + 12 * OS1_S1 + 160) =
                prefactor_y * *(b + 12 * OS1_S1 + 116) -
                p_over_q * *(b + 24 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 12 * OS1_S1 + 81);
            *(b + 12 * OS1_S1 + 161) =
                prefactor_y * *(b + 12 * OS1_S1 + 117) -
                p_over_q * *(b + 24 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 12 * OS1_S1 + 82);
            *(b + 12 * OS1_S1 + 162) = prefactor_y * *(b + 12 * OS1_S1 + 118) -
                                       p_over_q * *(b + 24 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 12 * OS1_S1 + 83);
            *(b + 12 * OS1_S1 + 163) = prefactor_y * *(b + 12 * OS1_S1 + 119) -
                                       p_over_q * *(b + 24 * OS1_S1 + 119);
            *(b + 12 * OS1_S1 + 164) =
                prefactor_z * *(b + 12 * OS1_S1 + 119) -
                p_over_q * *(b + 25 * OS1_S1 + 119) +
                one_over_two_q * *(b + 4 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 12 * OS1_S1 + 83);
            *(b + 13 * OS1_S1 + 120) =
                prefactor_x * *(b + 13 * OS1_S1 + 84) -
                p_over_q * *(b + 23 * OS1_S1 + 84) +
                one_over_two_q * *(b + 7 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 13 * OS1_S1 + 56);
            *(b + 13 * OS1_S1 + 121) =
                prefactor_y * *(b + 13 * OS1_S1 + 84) -
                p_over_q * *(b + 26 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 84);
            *(b + 13 * OS1_S1 + 122) = prefactor_z * *(b + 13 * OS1_S1 + 84) -
                                       p_over_q * *(b + 27 * OS1_S1 + 84);
            *(b + 13 * OS1_S1 + 123) =
                prefactor_y * *(b + 13 * OS1_S1 + 85) -
                p_over_q * *(b + 26 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 85) +
                one_over_two_q * *(b + 13 * OS1_S1 + 56);
            *(b + 13 * OS1_S1 + 124) = prefactor_z * *(b + 13 * OS1_S1 + 85) -
                                       p_over_q * *(b + 27 * OS1_S1 + 85);
            *(b + 13 * OS1_S1 + 125) = prefactor_z * *(b + 13 * OS1_S1 + 86) -
                                       p_over_q * *(b + 27 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 56);
            *(b + 13 * OS1_S1 + 126) =
                prefactor_y * *(b + 13 * OS1_S1 + 87) -
                p_over_q * *(b + 26 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 57);
            *(b + 13 * OS1_S1 + 127) = prefactor_z * *(b + 13 * OS1_S1 + 87) -
                                       p_over_q * *(b + 27 * OS1_S1 + 87);
            *(b + 13 * OS1_S1 + 128) =
                prefactor_y * *(b + 13 * OS1_S1 + 89) -
                p_over_q * *(b + 26 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 89);
            *(b + 13 * OS1_S1 + 129) =
                prefactor_z * *(b + 13 * OS1_S1 + 89) -
                p_over_q * *(b + 27 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 58);
            *(b + 13 * OS1_S1 + 130) =
                prefactor_x * *(b + 13 * OS1_S1 + 94) -
                p_over_q * *(b + 23 * OS1_S1 + 94) +
                one_over_two_q * *(b + 7 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 66);
            *(b + 13 * OS1_S1 + 131) = prefactor_z * *(b + 13 * OS1_S1 + 90) -
                                       p_over_q * *(b + 27 * OS1_S1 + 90);
            *(b + 13 * OS1_S1 + 132) = prefactor_z * *(b + 13 * OS1_S1 + 91) -
                                       p_over_q * *(b + 27 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 59);
            *(b + 13 * OS1_S1 + 133) =
                prefactor_y * *(b + 13 * OS1_S1 + 93) -
                p_over_q * *(b + 26 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 93);
            *(b + 13 * OS1_S1 + 134) =
                prefactor_z * *(b + 13 * OS1_S1 + 93) -
                p_over_q * *(b + 27 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 61);
            *(b + 13 * OS1_S1 + 135) =
                prefactor_x * *(b + 13 * OS1_S1 + 99) -
                p_over_q * *(b + 23 * OS1_S1 + 99) +
                one_over_two_q * *(b + 7 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 71);
            *(b + 13 * OS1_S1 + 136) = prefactor_z * *(b + 13 * OS1_S1 + 94) -
                                       p_over_q * *(b + 27 * OS1_S1 + 94);
            *(b + 13 * OS1_S1 + 137) = prefactor_z * *(b + 13 * OS1_S1 + 95) -
                                       p_over_q * *(b + 27 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 62);
            *(b + 13 * OS1_S1 + 138) =
                prefactor_y * *(b + 13 * OS1_S1 + 97) -
                p_over_q * *(b + 26 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 97) +
                one_over_two_q * *(b + 13 * OS1_S1 + 65);
            *(b + 13 * OS1_S1 + 139) =
                prefactor_y * *(b + 13 * OS1_S1 + 98) -
                p_over_q * *(b + 26 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 98);
            *(b + 13 * OS1_S1 + 140) =
                prefactor_x * *(b + 13 * OS1_S1 + 104) -
                p_over_q * *(b + 23 * OS1_S1 + 104) +
                one_over_two_q * *(b + 7 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 76);
            *(b + 13 * OS1_S1 + 141) =
                prefactor_x * *(b + 13 * OS1_S1 + 105) -
                p_over_q * *(b + 23 * OS1_S1 + 105) +
                one_over_two_q * *(b + 7 * OS1_S1 + 105) +
                one_over_two_q * *(b + 13 * OS1_S1 + 77);
            *(b + 13 * OS1_S1 + 142) = prefactor_z * *(b + 13 * OS1_S1 + 99) -
                                       p_over_q * *(b + 27 * OS1_S1 + 99);
            *(b + 13 * OS1_S1 + 143) = prefactor_z * *(b + 13 * OS1_S1 + 100) -
                                       p_over_q * *(b + 27 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 66);
            *(b + 13 * OS1_S1 + 144) =
                prefactor_x * *(b + 13 * OS1_S1 + 108) -
                p_over_q * *(b + 23 * OS1_S1 + 108) +
                one_over_two_q * *(b + 7 * OS1_S1 + 108) +
                one_over_two_q * *(b + 13 * OS1_S1 + 80);
            *(b + 13 * OS1_S1 + 145) =
                prefactor_x * *(b + 13 * OS1_S1 + 109) -
                p_over_q * *(b + 23 * OS1_S1 + 109) +
                one_over_two_q * *(b + 7 * OS1_S1 + 109) +
                one_over_two_q * *(b + 13 * OS1_S1 + 81);
            *(b + 13 * OS1_S1 + 146) =
                prefactor_y * *(b + 13 * OS1_S1 + 104) -
                p_over_q * *(b + 26 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 104);
            *(b + 13 * OS1_S1 + 147) =
                prefactor_x * *(b + 13 * OS1_S1 + 111) -
                p_over_q * *(b + 23 * OS1_S1 + 111) +
                one_over_two_q * *(b + 7 * OS1_S1 + 111) +
                one_over_two_q * *(b + 13 * OS1_S1 + 83);
            *(b + 13 * OS1_S1 + 148) = prefactor_x * *(b + 13 * OS1_S1 + 112) -
                                       p_over_q * *(b + 23 * OS1_S1 + 112) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 112);
            *(b + 13 * OS1_S1 + 149) = prefactor_z * *(b + 13 * OS1_S1 + 105) -
                                       p_over_q * *(b + 27 * OS1_S1 + 105);
            *(b + 13 * OS1_S1 + 150) = prefactor_x * *(b + 13 * OS1_S1 + 114) -
                                       p_over_q * *(b + 23 * OS1_S1 + 114) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 114);
            *(b + 13 * OS1_S1 + 151) = prefactor_x * *(b + 13 * OS1_S1 + 115) -
                                       p_over_q * *(b + 23 * OS1_S1 + 115) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 115);
            *(b + 13 * OS1_S1 + 152) = prefactor_x * *(b + 13 * OS1_S1 + 116) -
                                       p_over_q * *(b + 23 * OS1_S1 + 116) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 116);
            *(b + 13 * OS1_S1 + 153) = prefactor_x * *(b + 13 * OS1_S1 + 117) -
                                       p_over_q * *(b + 23 * OS1_S1 + 117) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 117);
            *(b + 13 * OS1_S1 + 154) = prefactor_x * *(b + 13 * OS1_S1 + 118) -
                                       p_over_q * *(b + 23 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 118);
            *(b + 13 * OS1_S1 + 155) = prefactor_x * *(b + 13 * OS1_S1 + 119) -
                                       p_over_q * *(b + 23 * OS1_S1 + 119) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 119);
            *(b + 13 * OS1_S1 + 156) =
                prefactor_y * *(b + 13 * OS1_S1 + 112) -
                p_over_q * *(b + 26 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 13 * OS1_S1 + 77);
            *(b + 13 * OS1_S1 + 157) = prefactor_z * *(b + 13 * OS1_S1 + 112) -
                                       p_over_q * *(b + 27 * OS1_S1 + 112);
            *(b + 13 * OS1_S1 + 158) = prefactor_z * *(b + 13 * OS1_S1 + 113) -
                                       p_over_q * *(b + 27 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 13 * OS1_S1 + 77);
            *(b + 13 * OS1_S1 + 159) =
                prefactor_z * *(b + 13 * OS1_S1 + 114) -
                p_over_q * *(b + 27 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 78);
            *(b + 13 * OS1_S1 + 160) =
                prefactor_z * *(b + 13 * OS1_S1 + 115) -
                p_over_q * *(b + 27 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 13 * OS1_S1 + 79);
            *(b + 13 * OS1_S1 + 161) =
                prefactor_y * *(b + 13 * OS1_S1 + 117) -
                p_over_q * *(b + 26 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 13 * OS1_S1 + 82);
            *(b + 13 * OS1_S1 + 162) =
                prefactor_y * *(b + 13 * OS1_S1 + 118) -
                p_over_q * *(b + 26 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 118) +
                one_over_two_q * *(b + 13 * OS1_S1 + 83);
            *(b + 13 * OS1_S1 + 163) =
                prefactor_y * *(b + 13 * OS1_S1 + 119) -
                p_over_q * *(b + 26 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 5 * OS1_S1 + 119);
            *(b + 13 * OS1_S1 + 164) =
                prefactor_z * *(b + 13 * OS1_S1 + 119) -
                p_over_q * *(b + 27 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 13 * OS1_S1 + 83);
            *(b + 14 * OS1_S1 + 120) =
                prefactor_x * *(b + 14 * OS1_S1 + 84) -
                p_over_q * *(b + 24 * OS1_S1 + 84) +
                one_over_two_q * *(b + 8 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 14 * OS1_S1 + 56);
            *(b + 14 * OS1_S1 + 121) = prefactor_y * *(b + 14 * OS1_S1 + 84) -
                                       p_over_q * *(b + 27 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 84);
            *(b + 14 * OS1_S1 + 122) = prefactor_z * *(b + 14 * OS1_S1 + 84) -
                                       p_over_q * *(b + 28 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 84);
            *(b + 14 * OS1_S1 + 123) = prefactor_y * *(b + 14 * OS1_S1 + 85) -
                                       p_over_q * *(b + 27 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 56);
            *(b + 14 * OS1_S1 + 124) = prefactor_z * *(b + 14 * OS1_S1 + 85) -
                                       p_over_q * *(b + 28 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 85);
            *(b + 14 * OS1_S1 + 125) = prefactor_z * *(b + 14 * OS1_S1 + 86) -
                                       p_over_q * *(b + 28 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 56);
            *(b + 14 * OS1_S1 + 126) =
                prefactor_y * *(b + 14 * OS1_S1 + 87) -
                p_over_q * *(b + 27 * OS1_S1 + 87) +
                one_over_two_q * *(b + 6 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 57);
            *(b + 14 * OS1_S1 + 127) = prefactor_z * *(b + 14 * OS1_S1 + 87) -
                                       p_over_q * *(b + 28 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 87);
            *(b + 14 * OS1_S1 + 128) = prefactor_y * *(b + 14 * OS1_S1 + 89) -
                                       p_over_q * *(b + 27 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 89);
            *(b + 14 * OS1_S1 + 129) =
                prefactor_z * *(b + 14 * OS1_S1 + 89) -
                p_over_q * *(b + 28 * OS1_S1 + 89) +
                one_over_two_q * *(b + 5 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 58);
            *(b + 14 * OS1_S1 + 130) =
                prefactor_y * *(b + 14 * OS1_S1 + 90) -
                p_over_q * *(b + 27 * OS1_S1 + 90) +
                one_over_two_q * *(b + 6 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 14 * OS1_S1 + 59);
            *(b + 14 * OS1_S1 + 131) = prefactor_z * *(b + 14 * OS1_S1 + 90) -
                                       p_over_q * *(b + 28 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 90);
            *(b + 14 * OS1_S1 + 132) = prefactor_z * *(b + 14 * OS1_S1 + 91) -
                                       p_over_q * *(b + 28 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 59);
            *(b + 14 * OS1_S1 + 133) = prefactor_y * *(b + 14 * OS1_S1 + 93) -
                                       p_over_q * *(b + 27 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 93);
            *(b + 14 * OS1_S1 + 134) =
                prefactor_z * *(b + 14 * OS1_S1 + 93) -
                p_over_q * *(b + 28 * OS1_S1 + 93) +
                one_over_two_q * *(b + 5 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 14 * OS1_S1 + 61);
            *(b + 14 * OS1_S1 + 135) =
                prefactor_x * *(b + 14 * OS1_S1 + 99) -
                p_over_q * *(b + 24 * OS1_S1 + 99) +
                one_over_two_q * *(b + 8 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 71);
            *(b + 14 * OS1_S1 + 136) = prefactor_z * *(b + 14 * OS1_S1 + 94) -
                                       p_over_q * *(b + 28 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 94);
            *(b + 14 * OS1_S1 + 137) = prefactor_z * *(b + 14 * OS1_S1 + 95) -
                                       p_over_q * *(b + 28 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 62);
            *(b + 14 * OS1_S1 + 138) = prefactor_y * *(b + 14 * OS1_S1 + 97) -
                                       p_over_q * *(b + 27 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 14 * OS1_S1 + 65);
            *(b + 14 * OS1_S1 + 139) = prefactor_y * *(b + 14 * OS1_S1 + 98) -
                                       p_over_q * *(b + 27 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 98);
            *(b + 14 * OS1_S1 + 140) =
                prefactor_x * *(b + 14 * OS1_S1 + 104) -
                p_over_q * *(b + 24 * OS1_S1 + 104) +
                one_over_two_q * *(b + 8 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 76);
            *(b + 14 * OS1_S1 + 141) =
                prefactor_x * *(b + 14 * OS1_S1 + 105) -
                p_over_q * *(b + 24 * OS1_S1 + 105) +
                one_over_two_q * *(b + 8 * OS1_S1 + 105) +
                one_over_two_q * *(b + 14 * OS1_S1 + 77);
            *(b + 14 * OS1_S1 + 142) = prefactor_z * *(b + 14 * OS1_S1 + 99) -
                                       p_over_q * *(b + 28 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 99);
            *(b + 14 * OS1_S1 + 143) =
                prefactor_z * *(b + 14 * OS1_S1 + 100) -
                p_over_q * *(b + 28 * OS1_S1 + 100) +
                one_over_two_q * *(b + 5 * OS1_S1 + 100) +
                one_over_two_q * *(b + 14 * OS1_S1 + 66);
            *(b + 14 * OS1_S1 + 144) =
                prefactor_x * *(b + 14 * OS1_S1 + 108) -
                p_over_q * *(b + 24 * OS1_S1 + 108) +
                one_over_two_q * *(b + 8 * OS1_S1 + 108) +
                one_over_two_q * *(b + 14 * OS1_S1 + 80);
            *(b + 14 * OS1_S1 + 145) =
                prefactor_y * *(b + 14 * OS1_S1 + 103) -
                p_over_q * *(b + 27 * OS1_S1 + 103) +
                one_over_two_q * *(b + 6 * OS1_S1 + 103) +
                one_over_two_q * *(b + 14 * OS1_S1 + 70);
            *(b + 14 * OS1_S1 + 146) = prefactor_y * *(b + 14 * OS1_S1 + 104) -
                                       p_over_q * *(b + 27 * OS1_S1 + 104) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 104);
            *(b + 14 * OS1_S1 + 147) =
                prefactor_x * *(b + 14 * OS1_S1 + 111) -
                p_over_q * *(b + 24 * OS1_S1 + 111) +
                one_over_two_q * *(b + 8 * OS1_S1 + 111) +
                one_over_two_q * *(b + 14 * OS1_S1 + 83);
            *(b + 14 * OS1_S1 + 148) = prefactor_x * *(b + 14 * OS1_S1 + 112) -
                                       p_over_q * *(b + 24 * OS1_S1 + 112) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 112);
            *(b + 14 * OS1_S1 + 149) = prefactor_z * *(b + 14 * OS1_S1 + 105) -
                                       p_over_q * *(b + 28 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 105);
            *(b + 14 * OS1_S1 + 150) = prefactor_x * *(b + 14 * OS1_S1 + 114) -
                                       p_over_q * *(b + 24 * OS1_S1 + 114) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 114);
            *(b + 14 * OS1_S1 + 151) = prefactor_x * *(b + 14 * OS1_S1 + 115) -
                                       p_over_q * *(b + 24 * OS1_S1 + 115) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 115);
            *(b + 14 * OS1_S1 + 152) = prefactor_x * *(b + 14 * OS1_S1 + 116) -
                                       p_over_q * *(b + 24 * OS1_S1 + 116) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 116);
            *(b + 14 * OS1_S1 + 153) = prefactor_x * *(b + 14 * OS1_S1 + 117) -
                                       p_over_q * *(b + 24 * OS1_S1 + 117) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 117);
            *(b + 14 * OS1_S1 + 154) = prefactor_y * *(b + 14 * OS1_S1 + 111) -
                                       p_over_q * *(b + 27 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 111);
            *(b + 14 * OS1_S1 + 155) = prefactor_x * *(b + 14 * OS1_S1 + 119) -
                                       p_over_q * *(b + 24 * OS1_S1 + 119) +
                                       one_over_two_q * *(b + 8 * OS1_S1 + 119);
            *(b + 14 * OS1_S1 + 156) =
                prefactor_y * *(b + 14 * OS1_S1 + 112) -
                p_over_q * *(b + 27 * OS1_S1 + 112) +
                one_over_two_q * *(b + 6 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 14 * OS1_S1 + 77);
            *(b + 14 * OS1_S1 + 157) = prefactor_z * *(b + 14 * OS1_S1 + 112) -
                                       p_over_q * *(b + 28 * OS1_S1 + 112) +
                                       one_over_two_q * *(b + 5 * OS1_S1 + 112);
            *(b + 14 * OS1_S1 + 158) =
                prefactor_z * *(b + 14 * OS1_S1 + 113) -
                p_over_q * *(b + 28 * OS1_S1 + 113) +
                one_over_two_q * *(b + 5 * OS1_S1 + 113) +
                one_over_two_q * *(b + 14 * OS1_S1 + 77);
            *(b + 14 * OS1_S1 + 159) =
                prefactor_z * *(b + 14 * OS1_S1 + 114) -
                p_over_q * *(b + 28 * OS1_S1 + 114) +
                one_over_two_q * *(b + 5 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 78);
            *(b + 14 * OS1_S1 + 160) =
                prefactor_z * *(b + 14 * OS1_S1 + 115) -
                p_over_q * *(b + 28 * OS1_S1 + 115) +
                one_over_two_q * *(b + 5 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 14 * OS1_S1 + 79);
            *(b + 14 * OS1_S1 + 161) =
                prefactor_y * *(b + 14 * OS1_S1 + 117) -
                p_over_q * *(b + 27 * OS1_S1 + 117) +
                one_over_two_q * *(b + 6 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 14 * OS1_S1 + 82);
            *(b + 14 * OS1_S1 + 162) =
                prefactor_y * *(b + 14 * OS1_S1 + 118) -
                p_over_q * *(b + 27 * OS1_S1 + 118) +
                one_over_two_q * *(b + 6 * OS1_S1 + 118) +
                one_over_two_q * *(b + 14 * OS1_S1 + 83);
            *(b + 14 * OS1_S1 + 163) = prefactor_y * *(b + 14 * OS1_S1 + 119) -
                                       p_over_q * *(b + 27 * OS1_S1 + 119) +
                                       one_over_two_q * *(b + 6 * OS1_S1 + 119);
            *(b + 14 * OS1_S1 + 164) =
                prefactor_z * *(b + 14 * OS1_S1 + 119) -
                p_over_q * *(b + 28 * OS1_S1 + 119) +
                one_over_two_q * *(b + 5 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 14 * OS1_S1 + 83);
            *(b + 15 * OS1_S1 + 120) =
                prefactor_x * *(b + 15 * OS1_S1 + 84) -
                p_over_q * *(b + 25 * OS1_S1 + 84) +
                one_over_two_q * *(b + 9 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 15 * OS1_S1 + 56);
            *(b + 15 * OS1_S1 + 121) = prefactor_y * *(b + 15 * OS1_S1 + 84) -
                                       p_over_q * *(b + 28 * OS1_S1 + 84);
            *(b + 15 * OS1_S1 + 122) =
                prefactor_z * *(b + 15 * OS1_S1 + 84) -
                p_over_q * *(b + 29 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 84);
            *(b + 15 * OS1_S1 + 123) = prefactor_y * *(b + 15 * OS1_S1 + 85) -
                                       p_over_q * *(b + 28 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 56);
            *(b + 15 * OS1_S1 + 124) = prefactor_y * *(b + 15 * OS1_S1 + 86) -
                                       p_over_q * *(b + 28 * OS1_S1 + 86);
            *(b + 15 * OS1_S1 + 125) =
                prefactor_z * *(b + 15 * OS1_S1 + 86) -
                p_over_q * *(b + 29 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 86) +
                one_over_two_q * *(b + 15 * OS1_S1 + 56);
            *(b + 15 * OS1_S1 + 126) =
                prefactor_y * *(b + 15 * OS1_S1 + 87) -
                p_over_q * *(b + 28 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 57);
            *(b + 15 * OS1_S1 + 127) =
                prefactor_z * *(b + 15 * OS1_S1 + 87) -
                p_over_q * *(b + 29 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 87);
            *(b + 15 * OS1_S1 + 128) = prefactor_y * *(b + 15 * OS1_S1 + 89) -
                                       p_over_q * *(b + 28 * OS1_S1 + 89);
            *(b + 15 * OS1_S1 + 129) =
                prefactor_z * *(b + 15 * OS1_S1 + 89) -
                p_over_q * *(b + 29 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 58);
            *(b + 15 * OS1_S1 + 130) =
                prefactor_y * *(b + 15 * OS1_S1 + 90) -
                p_over_q * *(b + 28 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 59);
            *(b + 15 * OS1_S1 + 131) =
                prefactor_z * *(b + 15 * OS1_S1 + 90) -
                p_over_q * *(b + 29 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 90);
            *(b + 15 * OS1_S1 + 132) = prefactor_y * *(b + 15 * OS1_S1 + 92) -
                                       p_over_q * *(b + 28 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 61);
            *(b + 15 * OS1_S1 + 133) = prefactor_y * *(b + 15 * OS1_S1 + 93) -
                                       p_over_q * *(b + 28 * OS1_S1 + 93);
            *(b + 15 * OS1_S1 + 134) =
                prefactor_x * *(b + 15 * OS1_S1 + 98) -
                p_over_q * *(b + 25 * OS1_S1 + 98) +
                one_over_two_q * *(b + 9 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 70);
            *(b + 15 * OS1_S1 + 135) =
                prefactor_x * *(b + 15 * OS1_S1 + 99) -
                p_over_q * *(b + 25 * OS1_S1 + 99) +
                one_over_two_q * *(b + 9 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 71);
            *(b + 15 * OS1_S1 + 136) =
                prefactor_z * *(b + 15 * OS1_S1 + 94) -
                p_over_q * *(b + 29 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 94);
            *(b + 15 * OS1_S1 + 137) =
                prefactor_z * *(b + 15 * OS1_S1 + 95) -
                p_over_q * *(b + 29 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 95) +
                one_over_two_q * *(b + 15 * OS1_S1 + 62);
            *(b + 15 * OS1_S1 + 138) = prefactor_y * *(b + 15 * OS1_S1 + 97) -
                                       p_over_q * *(b + 28 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 65);
            *(b + 15 * OS1_S1 + 139) = prefactor_y * *(b + 15 * OS1_S1 + 98) -
                                       p_over_q * *(b + 28 * OS1_S1 + 98);
            *(b + 15 * OS1_S1 + 140) =
                prefactor_x * *(b + 15 * OS1_S1 + 104) -
                p_over_q * *(b + 25 * OS1_S1 + 104) +
                one_over_two_q * *(b + 9 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 76);
            *(b + 15 * OS1_S1 + 141) =
                prefactor_x * *(b + 15 * OS1_S1 + 105) -
                p_over_q * *(b + 25 * OS1_S1 + 105) +
                one_over_two_q * *(b + 9 * OS1_S1 + 105) +
                one_over_two_q * *(b + 15 * OS1_S1 + 77);
            *(b + 15 * OS1_S1 + 142) =
                prefactor_z * *(b + 15 * OS1_S1 + 99) -
                p_over_q * *(b + 29 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 99);
            *(b + 15 * OS1_S1 + 143) =
                prefactor_x * *(b + 15 * OS1_S1 + 107) -
                p_over_q * *(b + 25 * OS1_S1 + 107) +
                one_over_two_q * *(b + 9 * OS1_S1 + 107) +
                one_over_two_q * *(b + 15 * OS1_S1 + 79);
            *(b + 15 * OS1_S1 + 144) =
                prefactor_x * *(b + 15 * OS1_S1 + 108) -
                p_over_q * *(b + 25 * OS1_S1 + 108) +
                one_over_two_q * *(b + 9 * OS1_S1 + 108) +
                one_over_two_q * *(b + 15 * OS1_S1 + 80);
            *(b + 15 * OS1_S1 + 145) = prefactor_y * *(b + 15 * OS1_S1 + 103) -
                                       p_over_q * *(b + 28 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 70);
            *(b + 15 * OS1_S1 + 146) = prefactor_y * *(b + 15 * OS1_S1 + 104) -
                                       p_over_q * *(b + 28 * OS1_S1 + 104);
            *(b + 15 * OS1_S1 + 147) =
                prefactor_x * *(b + 15 * OS1_S1 + 111) -
                p_over_q * *(b + 25 * OS1_S1 + 111) +
                one_over_two_q * *(b + 9 * OS1_S1 + 111) +
                one_over_two_q * *(b + 15 * OS1_S1 + 83);
            *(b + 15 * OS1_S1 + 148) = prefactor_x * *(b + 15 * OS1_S1 + 112) -
                                       p_over_q * *(b + 25 * OS1_S1 + 112) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 112);
            *(b + 15 * OS1_S1 + 149) = prefactor_x * *(b + 15 * OS1_S1 + 113) -
                                       p_over_q * *(b + 25 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 113);
            *(b + 15 * OS1_S1 + 150) = prefactor_x * *(b + 15 * OS1_S1 + 114) -
                                       p_over_q * *(b + 25 * OS1_S1 + 114) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 114);
            *(b + 15 * OS1_S1 + 151) = prefactor_x * *(b + 15 * OS1_S1 + 115) -
                                       p_over_q * *(b + 25 * OS1_S1 + 115) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 115);
            *(b + 15 * OS1_S1 + 152) = prefactor_x * *(b + 15 * OS1_S1 + 116) -
                                       p_over_q * *(b + 25 * OS1_S1 + 116) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 116);
            *(b + 15 * OS1_S1 + 153) = prefactor_x * *(b + 15 * OS1_S1 + 117) -
                                       p_over_q * *(b + 25 * OS1_S1 + 117) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 117);
            *(b + 15 * OS1_S1 + 154) = prefactor_y * *(b + 15 * OS1_S1 + 111) -
                                       p_over_q * *(b + 28 * OS1_S1 + 111);
            *(b + 15 * OS1_S1 + 155) = prefactor_x * *(b + 15 * OS1_S1 + 119) -
                                       p_over_q * *(b + 25 * OS1_S1 + 119) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 119);
            *(b + 15 * OS1_S1 + 156) =
                prefactor_y * *(b + 15 * OS1_S1 + 112) -
                p_over_q * *(b + 28 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 15 * OS1_S1 + 77);
            *(b + 15 * OS1_S1 + 157) =
                prefactor_z * *(b + 15 * OS1_S1 + 112) -
                p_over_q * *(b + 29 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 112);
            *(b + 15 * OS1_S1 + 158) =
                prefactor_z * *(b + 15 * OS1_S1 + 113) -
                p_over_q * *(b + 29 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 113) +
                one_over_two_q * *(b + 15 * OS1_S1 + 77);
            *(b + 15 * OS1_S1 + 159) =
                prefactor_z * *(b + 15 * OS1_S1 + 114) -
                p_over_q * *(b + 29 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 78);
            *(b + 15 * OS1_S1 + 160) =
                prefactor_y * *(b + 15 * OS1_S1 + 116) -
                p_over_q * *(b + 28 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 15 * OS1_S1 + 81);
            *(b + 15 * OS1_S1 + 161) =
                prefactor_y * *(b + 15 * OS1_S1 + 117) -
                p_over_q * *(b + 28 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 15 * OS1_S1 + 82);
            *(b + 15 * OS1_S1 + 162) = prefactor_y * *(b + 15 * OS1_S1 + 118) -
                                       p_over_q * *(b + 28 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 15 * OS1_S1 + 83);
            *(b + 15 * OS1_S1 + 163) = prefactor_y * *(b + 15 * OS1_S1 + 119) -
                                       p_over_q * *(b + 28 * OS1_S1 + 119);
            *(b + 15 * OS1_S1 + 164) =
                prefactor_z * *(b + 15 * OS1_S1 + 119) -
                p_over_q * *(b + 29 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 6 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 15 * OS1_S1 + 83);
            *(b + 16 * OS1_S1 + 120) =
                prefactor_x * *(b + 16 * OS1_S1 + 84) -
                p_over_q * *(b + 26 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 16 * OS1_S1 + 56);
            *(b + 16 * OS1_S1 + 121) =
                prefactor_y * *(b + 16 * OS1_S1 + 84) -
                p_over_q * *(b + 30 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 84);
            *(b + 16 * OS1_S1 + 122) = prefactor_z * *(b + 16 * OS1_S1 + 84) -
                                       p_over_q * *(b + 31 * OS1_S1 + 84);
            *(b + 16 * OS1_S1 + 123) =
                prefactor_y * *(b + 16 * OS1_S1 + 85) -
                p_over_q * *(b + 30 * OS1_S1 + 85) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 85) +
                one_over_two_q * *(b + 16 * OS1_S1 + 56);
            *(b + 16 * OS1_S1 + 124) = prefactor_z * *(b + 16 * OS1_S1 + 85) -
                                       p_over_q * *(b + 31 * OS1_S1 + 85);
            *(b + 16 * OS1_S1 + 125) = prefactor_z * *(b + 16 * OS1_S1 + 86) -
                                       p_over_q * *(b + 31 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 56);
            *(b + 16 * OS1_S1 + 126) =
                prefactor_y * *(b + 16 * OS1_S1 + 87) -
                p_over_q * *(b + 30 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 57);
            *(b + 16 * OS1_S1 + 127) = prefactor_z * *(b + 16 * OS1_S1 + 87) -
                                       p_over_q * *(b + 31 * OS1_S1 + 87);
            *(b + 16 * OS1_S1 + 128) =
                prefactor_y * *(b + 16 * OS1_S1 + 89) -
                p_over_q * *(b + 30 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 89);
            *(b + 16 * OS1_S1 + 129) =
                prefactor_z * *(b + 16 * OS1_S1 + 89) -
                p_over_q * *(b + 31 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 58);
            *(b + 16 * OS1_S1 + 130) =
                prefactor_x * *(b + 16 * OS1_S1 + 94) -
                p_over_q * *(b + 26 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 16 * OS1_S1 + 66);
            *(b + 16 * OS1_S1 + 131) = prefactor_z * *(b + 16 * OS1_S1 + 90) -
                                       p_over_q * *(b + 31 * OS1_S1 + 90);
            *(b + 16 * OS1_S1 + 132) = prefactor_z * *(b + 16 * OS1_S1 + 91) -
                                       p_over_q * *(b + 31 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 59);
            *(b + 16 * OS1_S1 + 133) =
                prefactor_y * *(b + 16 * OS1_S1 + 93) -
                p_over_q * *(b + 30 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 93);
            *(b + 16 * OS1_S1 + 134) =
                prefactor_z * *(b + 16 * OS1_S1 + 93) -
                p_over_q * *(b + 31 * OS1_S1 + 93) +
                3 * one_over_two_q * *(b + 16 * OS1_S1 + 61);
            *(b + 16 * OS1_S1 + 135) =
                prefactor_x * *(b + 16 * OS1_S1 + 99) -
                p_over_q * *(b + 26 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 71);
            *(b + 16 * OS1_S1 + 136) = prefactor_z * *(b + 16 * OS1_S1 + 94) -
                                       p_over_q * *(b + 31 * OS1_S1 + 94);
            *(b + 16 * OS1_S1 + 137) = prefactor_z * *(b + 16 * OS1_S1 + 95) -
                                       p_over_q * *(b + 31 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 62);
            *(b + 16 * OS1_S1 + 138) =
                prefactor_y * *(b + 16 * OS1_S1 + 97) -
                p_over_q * *(b + 30 * OS1_S1 + 97) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 97) +
                one_over_two_q * *(b + 16 * OS1_S1 + 65);
            *(b + 16 * OS1_S1 + 139) =
                prefactor_y * *(b + 16 * OS1_S1 + 98) -
                p_over_q * *(b + 30 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 98);
            *(b + 16 * OS1_S1 + 140) =
                prefactor_x * *(b + 16 * OS1_S1 + 104) -
                p_over_q * *(b + 26 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 76);
            *(b + 16 * OS1_S1 + 141) = prefactor_x * *(b + 16 * OS1_S1 + 105) -
                                       p_over_q * *(b + 26 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 77);
            *(b + 16 * OS1_S1 + 142) = prefactor_z * *(b + 16 * OS1_S1 + 99) -
                                       p_over_q * *(b + 31 * OS1_S1 + 99);
            *(b + 16 * OS1_S1 + 143) = prefactor_z * *(b + 16 * OS1_S1 + 100) -
                                       p_over_q * *(b + 31 * OS1_S1 + 100) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 66);
            *(b + 16 * OS1_S1 + 144) = prefactor_x * *(b + 16 * OS1_S1 + 108) -
                                       p_over_q * *(b + 26 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 80);
            *(b + 16 * OS1_S1 + 145) = prefactor_x * *(b + 16 * OS1_S1 + 109) -
                                       p_over_q * *(b + 26 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 81);
            *(b + 16 * OS1_S1 + 146) =
                prefactor_y * *(b + 16 * OS1_S1 + 104) -
                p_over_q * *(b + 30 * OS1_S1 + 104) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 104);
            *(b + 16 * OS1_S1 + 147) = prefactor_x * *(b + 16 * OS1_S1 + 111) -
                                       p_over_q * *(b + 26 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 83);
            *(b + 16 * OS1_S1 + 148) = prefactor_x * *(b + 16 * OS1_S1 + 112) -
                                       p_over_q * *(b + 26 * OS1_S1 + 112);
            *(b + 16 * OS1_S1 + 149) = prefactor_z * *(b + 16 * OS1_S1 + 105) -
                                       p_over_q * *(b + 31 * OS1_S1 + 105);
            *(b + 16 * OS1_S1 + 150) = prefactor_x * *(b + 16 * OS1_S1 + 114) -
                                       p_over_q * *(b + 26 * OS1_S1 + 114);
            *(b + 16 * OS1_S1 + 151) = prefactor_x * *(b + 16 * OS1_S1 + 115) -
                                       p_over_q * *(b + 26 * OS1_S1 + 115);
            *(b + 16 * OS1_S1 + 152) = prefactor_x * *(b + 16 * OS1_S1 + 116) -
                                       p_over_q * *(b + 26 * OS1_S1 + 116);
            *(b + 16 * OS1_S1 + 153) = prefactor_x * *(b + 16 * OS1_S1 + 117) -
                                       p_over_q * *(b + 26 * OS1_S1 + 117);
            *(b + 16 * OS1_S1 + 154) = prefactor_x * *(b + 16 * OS1_S1 + 118) -
                                       p_over_q * *(b + 26 * OS1_S1 + 118);
            *(b + 16 * OS1_S1 + 155) = prefactor_x * *(b + 16 * OS1_S1 + 119) -
                                       p_over_q * *(b + 26 * OS1_S1 + 119);
            *(b + 16 * OS1_S1 + 156) =
                prefactor_y * *(b + 16 * OS1_S1 + 112) -
                p_over_q * *(b + 30 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 16 * OS1_S1 + 77);
            *(b + 16 * OS1_S1 + 157) = prefactor_z * *(b + 16 * OS1_S1 + 112) -
                                       p_over_q * *(b + 31 * OS1_S1 + 112);
            *(b + 16 * OS1_S1 + 158) = prefactor_z * *(b + 16 * OS1_S1 + 113) -
                                       p_over_q * *(b + 31 * OS1_S1 + 113) +
                                       one_over_two_q * *(b + 16 * OS1_S1 + 77);
            *(b + 16 * OS1_S1 + 159) =
                prefactor_z * *(b + 16 * OS1_S1 + 114) -
                p_over_q * *(b + 31 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 78);
            *(b + 16 * OS1_S1 + 160) =
                prefactor_z * *(b + 16 * OS1_S1 + 115) -
                p_over_q * *(b + 31 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 16 * OS1_S1 + 79);
            *(b + 16 * OS1_S1 + 161) =
                prefactor_y * *(b + 16 * OS1_S1 + 117) -
                p_over_q * *(b + 30 * OS1_S1 + 117) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 16 * OS1_S1 + 82);
            *(b + 16 * OS1_S1 + 162) =
                prefactor_y * *(b + 16 * OS1_S1 + 118) -
                p_over_q * *(b + 30 * OS1_S1 + 118) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 118) +
                one_over_two_q * *(b + 16 * OS1_S1 + 83);
            *(b + 16 * OS1_S1 + 163) =
                prefactor_y * *(b + 16 * OS1_S1 + 119) -
                p_over_q * *(b + 30 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 7 * OS1_S1 + 119);
            *(b + 16 * OS1_S1 + 164) =
                prefactor_z * *(b + 16 * OS1_S1 + 119) -
                p_over_q * *(b + 31 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 16 * OS1_S1 + 83);
            *(b + 17 * OS1_S1 + 120) =
                prefactor_x * *(b + 17 * OS1_S1 + 84) -
                p_over_q * *(b + 27 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 17 * OS1_S1 + 56);
            *(b + 17 * OS1_S1 + 121) =
                prefactor_y * *(b + 17 * OS1_S1 + 84) -
                p_over_q * *(b + 31 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 84);
            *(b + 17 * OS1_S1 + 122) = prefactor_z * *(b + 17 * OS1_S1 + 84) -
                                       p_over_q * *(b + 32 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 84);
            *(b + 17 * OS1_S1 + 123) =
                prefactor_y * *(b + 17 * OS1_S1 + 85) -
                p_over_q * *(b + 31 * OS1_S1 + 85) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 85) +
                one_over_two_q * *(b + 17 * OS1_S1 + 56);
            *(b + 17 * OS1_S1 + 124) = prefactor_z * *(b + 17 * OS1_S1 + 85) -
                                       p_over_q * *(b + 32 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 85);
            *(b + 17 * OS1_S1 + 125) = prefactor_z * *(b + 17 * OS1_S1 + 86) -
                                       p_over_q * *(b + 32 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 56);
            *(b + 17 * OS1_S1 + 126) =
                prefactor_y * *(b + 17 * OS1_S1 + 87) -
                p_over_q * *(b + 31 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 57);
            *(b + 17 * OS1_S1 + 127) = prefactor_z * *(b + 17 * OS1_S1 + 87) -
                                       p_over_q * *(b + 32 * OS1_S1 + 87) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 87);
            *(b + 17 * OS1_S1 + 128) =
                prefactor_y * *(b + 17 * OS1_S1 + 89) -
                p_over_q * *(b + 31 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 89);
            *(b + 17 * OS1_S1 + 129) =
                prefactor_z * *(b + 17 * OS1_S1 + 89) -
                p_over_q * *(b + 32 * OS1_S1 + 89) +
                one_over_two_q * *(b + 7 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 58);
            *(b + 17 * OS1_S1 + 130) =
                prefactor_x * *(b + 17 * OS1_S1 + 94) -
                p_over_q * *(b + 27 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 66);
            *(b + 17 * OS1_S1 + 131) = prefactor_z * *(b + 17 * OS1_S1 + 90) -
                                       p_over_q * *(b + 32 * OS1_S1 + 90) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 90);
            *(b + 17 * OS1_S1 + 132) = prefactor_z * *(b + 17 * OS1_S1 + 91) -
                                       p_over_q * *(b + 32 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 91) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 59);
            *(b + 17 * OS1_S1 + 133) =
                prefactor_y * *(b + 17 * OS1_S1 + 93) -
                p_over_q * *(b + 31 * OS1_S1 + 93) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 93);
            *(b + 17 * OS1_S1 + 134) =
                prefactor_x * *(b + 17 * OS1_S1 + 98) -
                p_over_q * *(b + 27 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 70);
            *(b + 17 * OS1_S1 + 135) =
                prefactor_x * *(b + 17 * OS1_S1 + 99) -
                p_over_q * *(b + 27 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 71);
            *(b + 17 * OS1_S1 + 136) = prefactor_z * *(b + 17 * OS1_S1 + 94) -
                                       p_over_q * *(b + 32 * OS1_S1 + 94) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 94);
            *(b + 17 * OS1_S1 + 137) = prefactor_z * *(b + 17 * OS1_S1 + 95) -
                                       p_over_q * *(b + 32 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 95) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 62);
            *(b + 17 * OS1_S1 + 138) =
                prefactor_y * *(b + 17 * OS1_S1 + 97) -
                p_over_q * *(b + 31 * OS1_S1 + 97) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 97) +
                one_over_two_q * *(b + 17 * OS1_S1 + 65);
            *(b + 17 * OS1_S1 + 139) =
                prefactor_y * *(b + 17 * OS1_S1 + 98) -
                p_over_q * *(b + 31 * OS1_S1 + 98) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 98);
            *(b + 17 * OS1_S1 + 140) =
                prefactor_x * *(b + 17 * OS1_S1 + 104) -
                p_over_q * *(b + 27 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 76);
            *(b + 17 * OS1_S1 + 141) = prefactor_x * *(b + 17 * OS1_S1 + 105) -
                                       p_over_q * *(b + 27 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 77);
            *(b + 17 * OS1_S1 + 142) = prefactor_z * *(b + 17 * OS1_S1 + 99) -
                                       p_over_q * *(b + 32 * OS1_S1 + 99) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 99);
            *(b + 17 * OS1_S1 + 143) = prefactor_x * *(b + 17 * OS1_S1 + 107) -
                                       p_over_q * *(b + 27 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 79);
            *(b + 17 * OS1_S1 + 144) = prefactor_x * *(b + 17 * OS1_S1 + 108) -
                                       p_over_q * *(b + 27 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 80);
            *(b + 17 * OS1_S1 + 145) = prefactor_x * *(b + 17 * OS1_S1 + 109) -
                                       p_over_q * *(b + 27 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 81);
            *(b + 17 * OS1_S1 + 146) =
                prefactor_y * *(b + 17 * OS1_S1 + 104) -
                p_over_q * *(b + 31 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 104);
            *(b + 17 * OS1_S1 + 147) = prefactor_x * *(b + 17 * OS1_S1 + 111) -
                                       p_over_q * *(b + 27 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 17 * OS1_S1 + 83);
            *(b + 17 * OS1_S1 + 148) = prefactor_x * *(b + 17 * OS1_S1 + 112) -
                                       p_over_q * *(b + 27 * OS1_S1 + 112);
            *(b + 17 * OS1_S1 + 149) = prefactor_x * *(b + 17 * OS1_S1 + 113) -
                                       p_over_q * *(b + 27 * OS1_S1 + 113);
            *(b + 17 * OS1_S1 + 150) = prefactor_x * *(b + 17 * OS1_S1 + 114) -
                                       p_over_q * *(b + 27 * OS1_S1 + 114);
            *(b + 17 * OS1_S1 + 151) = prefactor_x * *(b + 17 * OS1_S1 + 115) -
                                       p_over_q * *(b + 27 * OS1_S1 + 115);
            *(b + 17 * OS1_S1 + 152) = prefactor_x * *(b + 17 * OS1_S1 + 116) -
                                       p_over_q * *(b + 27 * OS1_S1 + 116);
            *(b + 17 * OS1_S1 + 153) = prefactor_x * *(b + 17 * OS1_S1 + 117) -
                                       p_over_q * *(b + 27 * OS1_S1 + 117);
            *(b + 17 * OS1_S1 + 154) = prefactor_x * *(b + 17 * OS1_S1 + 118) -
                                       p_over_q * *(b + 27 * OS1_S1 + 118);
            *(b + 17 * OS1_S1 + 155) = prefactor_x * *(b + 17 * OS1_S1 + 119) -
                                       p_over_q * *(b + 27 * OS1_S1 + 119);
            *(b + 17 * OS1_S1 + 156) =
                prefactor_y * *(b + 17 * OS1_S1 + 112) -
                p_over_q * *(b + 31 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 17 * OS1_S1 + 77);
            *(b + 17 * OS1_S1 + 157) = prefactor_z * *(b + 17 * OS1_S1 + 112) -
                                       p_over_q * *(b + 32 * OS1_S1 + 112) +
                                       one_over_two_q * *(b + 7 * OS1_S1 + 112);
            *(b + 17 * OS1_S1 + 158) =
                prefactor_z * *(b + 17 * OS1_S1 + 113) -
                p_over_q * *(b + 32 * OS1_S1 + 113) +
                one_over_two_q * *(b + 7 * OS1_S1 + 113) +
                one_over_two_q * *(b + 17 * OS1_S1 + 77);
            *(b + 17 * OS1_S1 + 159) =
                prefactor_z * *(b + 17 * OS1_S1 + 114) -
                p_over_q * *(b + 32 * OS1_S1 + 114) +
                one_over_two_q * *(b + 7 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 78);
            *(b + 17 * OS1_S1 + 160) =
                prefactor_z * *(b + 17 * OS1_S1 + 115) -
                p_over_q * *(b + 32 * OS1_S1 + 115) +
                one_over_two_q * *(b + 7 * OS1_S1 + 115) +
                3 * one_over_two_q * *(b + 17 * OS1_S1 + 79);
            *(b + 17 * OS1_S1 + 161) =
                prefactor_y * *(b + 17 * OS1_S1 + 117) -
                p_over_q * *(b + 31 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 17 * OS1_S1 + 82);
            *(b + 17 * OS1_S1 + 162) =
                prefactor_y * *(b + 17 * OS1_S1 + 118) -
                p_over_q * *(b + 31 * OS1_S1 + 118) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 118) +
                one_over_two_q * *(b + 17 * OS1_S1 + 83);
            *(b + 17 * OS1_S1 + 163) =
                prefactor_y * *(b + 17 * OS1_S1 + 119) -
                p_over_q * *(b + 31 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 119);
            *(b + 17 * OS1_S1 + 164) =
                prefactor_z * *(b + 17 * OS1_S1 + 119) -
                p_over_q * *(b + 32 * OS1_S1 + 119) +
                one_over_two_q * *(b + 7 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 17 * OS1_S1 + 83);
            *(b + 18 * OS1_S1 + 120) =
                prefactor_x * *(b + 18 * OS1_S1 + 84) -
                p_over_q * *(b + 28 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 18 * OS1_S1 + 56);
            *(b + 18 * OS1_S1 + 121) = prefactor_y * *(b + 18 * OS1_S1 + 84) -
                                       p_over_q * *(b + 32 * OS1_S1 + 84) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 84);
            *(b + 18 * OS1_S1 + 122) =
                prefactor_z * *(b + 18 * OS1_S1 + 84) -
                p_over_q * *(b + 33 * OS1_S1 + 84) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 84);
            *(b + 18 * OS1_S1 + 123) = prefactor_y * *(b + 18 * OS1_S1 + 85) -
                                       p_over_q * *(b + 32 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 56);
            *(b + 18 * OS1_S1 + 124) = prefactor_y * *(b + 18 * OS1_S1 + 86) -
                                       p_over_q * *(b + 32 * OS1_S1 + 86) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 86);
            *(b + 18 * OS1_S1 + 125) =
                prefactor_z * *(b + 18 * OS1_S1 + 86) -
                p_over_q * *(b + 33 * OS1_S1 + 86) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 86) +
                one_over_two_q * *(b + 18 * OS1_S1 + 56);
            *(b + 18 * OS1_S1 + 126) =
                prefactor_y * *(b + 18 * OS1_S1 + 87) -
                p_over_q * *(b + 32 * OS1_S1 + 87) +
                one_over_two_q * *(b + 9 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 57);
            *(b + 18 * OS1_S1 + 127) =
                prefactor_z * *(b + 18 * OS1_S1 + 87) -
                p_over_q * *(b + 33 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 87);
            *(b + 18 * OS1_S1 + 128) = prefactor_y * *(b + 18 * OS1_S1 + 89) -
                                       p_over_q * *(b + 32 * OS1_S1 + 89) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 89);
            *(b + 18 * OS1_S1 + 129) =
                prefactor_z * *(b + 18 * OS1_S1 + 89) -
                p_over_q * *(b + 33 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 58);
            *(b + 18 * OS1_S1 + 130) =
                prefactor_x * *(b + 18 * OS1_S1 + 94) -
                p_over_q * *(b + 28 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 66);
            *(b + 18 * OS1_S1 + 131) =
                prefactor_z * *(b + 18 * OS1_S1 + 90) -
                p_over_q * *(b + 33 * OS1_S1 + 90) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 90);
            *(b + 18 * OS1_S1 + 132) = prefactor_y * *(b + 18 * OS1_S1 + 92) -
                                       p_over_q * *(b + 32 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 61);
            *(b + 18 * OS1_S1 + 133) = prefactor_y * *(b + 18 * OS1_S1 + 93) -
                                       p_over_q * *(b + 32 * OS1_S1 + 93) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 93);
            *(b + 18 * OS1_S1 + 134) =
                prefactor_x * *(b + 18 * OS1_S1 + 98) -
                p_over_q * *(b + 28 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 70);
            *(b + 18 * OS1_S1 + 135) =
                prefactor_x * *(b + 18 * OS1_S1 + 99) -
                p_over_q * *(b + 28 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 71);
            *(b + 18 * OS1_S1 + 136) =
                prefactor_z * *(b + 18 * OS1_S1 + 94) -
                p_over_q * *(b + 33 * OS1_S1 + 94) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 94);
            *(b + 18 * OS1_S1 + 137) =
                prefactor_z * *(b + 18 * OS1_S1 + 95) -
                p_over_q * *(b + 33 * OS1_S1 + 95) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 95) +
                one_over_two_q * *(b + 18 * OS1_S1 + 62);
            *(b + 18 * OS1_S1 + 138) = prefactor_y * *(b + 18 * OS1_S1 + 97) -
                                       p_over_q * *(b + 32 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 65);
            *(b + 18 * OS1_S1 + 139) = prefactor_y * *(b + 18 * OS1_S1 + 98) -
                                       p_over_q * *(b + 32 * OS1_S1 + 98) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 98);
            *(b + 18 * OS1_S1 + 140) =
                prefactor_x * *(b + 18 * OS1_S1 + 104) -
                p_over_q * *(b + 28 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 76);
            *(b + 18 * OS1_S1 + 141) = prefactor_x * *(b + 18 * OS1_S1 + 105) -
                                       p_over_q * *(b + 28 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 77);
            *(b + 18 * OS1_S1 + 142) =
                prefactor_z * *(b + 18 * OS1_S1 + 99) -
                p_over_q * *(b + 33 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 99);
            *(b + 18 * OS1_S1 + 143) = prefactor_x * *(b + 18 * OS1_S1 + 107) -
                                       p_over_q * *(b + 28 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 79);
            *(b + 18 * OS1_S1 + 144) = prefactor_x * *(b + 18 * OS1_S1 + 108) -
                                       p_over_q * *(b + 28 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 80);
            *(b + 18 * OS1_S1 + 145) = prefactor_x * *(b + 18 * OS1_S1 + 109) -
                                       p_over_q * *(b + 28 * OS1_S1 + 109) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 81);
            *(b + 18 * OS1_S1 + 146) = prefactor_y * *(b + 18 * OS1_S1 + 104) -
                                       p_over_q * *(b + 32 * OS1_S1 + 104) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 104);
            *(b + 18 * OS1_S1 + 147) = prefactor_x * *(b + 18 * OS1_S1 + 111) -
                                       p_over_q * *(b + 28 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 18 * OS1_S1 + 83);
            *(b + 18 * OS1_S1 + 148) = prefactor_x * *(b + 18 * OS1_S1 + 112) -
                                       p_over_q * *(b + 28 * OS1_S1 + 112);
            *(b + 18 * OS1_S1 + 149) = prefactor_x * *(b + 18 * OS1_S1 + 113) -
                                       p_over_q * *(b + 28 * OS1_S1 + 113);
            *(b + 18 * OS1_S1 + 150) = prefactor_x * *(b + 18 * OS1_S1 + 114) -
                                       p_over_q * *(b + 28 * OS1_S1 + 114);
            *(b + 18 * OS1_S1 + 151) = prefactor_x * *(b + 18 * OS1_S1 + 115) -
                                       p_over_q * *(b + 28 * OS1_S1 + 115);
            *(b + 18 * OS1_S1 + 152) = prefactor_x * *(b + 18 * OS1_S1 + 116) -
                                       p_over_q * *(b + 28 * OS1_S1 + 116);
            *(b + 18 * OS1_S1 + 153) = prefactor_x * *(b + 18 * OS1_S1 + 117) -
                                       p_over_q * *(b + 28 * OS1_S1 + 117);
            *(b + 18 * OS1_S1 + 154) = prefactor_x * *(b + 18 * OS1_S1 + 118) -
                                       p_over_q * *(b + 28 * OS1_S1 + 118);
            *(b + 18 * OS1_S1 + 155) = prefactor_x * *(b + 18 * OS1_S1 + 119) -
                                       p_over_q * *(b + 28 * OS1_S1 + 119);
            *(b + 18 * OS1_S1 + 156) =
                prefactor_y * *(b + 18 * OS1_S1 + 112) -
                p_over_q * *(b + 32 * OS1_S1 + 112) +
                one_over_two_q * *(b + 9 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 18 * OS1_S1 + 77);
            *(b + 18 * OS1_S1 + 157) =
                prefactor_z * *(b + 18 * OS1_S1 + 112) -
                p_over_q * *(b + 33 * OS1_S1 + 112) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 112);
            *(b + 18 * OS1_S1 + 158) =
                prefactor_z * *(b + 18 * OS1_S1 + 113) -
                p_over_q * *(b + 33 * OS1_S1 + 113) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 113) +
                one_over_two_q * *(b + 18 * OS1_S1 + 77);
            *(b + 18 * OS1_S1 + 159) =
                prefactor_z * *(b + 18 * OS1_S1 + 114) -
                p_over_q * *(b + 33 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 78);
            *(b + 18 * OS1_S1 + 160) =
                prefactor_y * *(b + 18 * OS1_S1 + 116) -
                p_over_q * *(b + 32 * OS1_S1 + 116) +
                one_over_two_q * *(b + 9 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 18 * OS1_S1 + 81);
            *(b + 18 * OS1_S1 + 161) =
                prefactor_y * *(b + 18 * OS1_S1 + 117) -
                p_over_q * *(b + 32 * OS1_S1 + 117) +
                one_over_two_q * *(b + 9 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 18 * OS1_S1 + 82);
            *(b + 18 * OS1_S1 + 162) =
                prefactor_y * *(b + 18 * OS1_S1 + 118) -
                p_over_q * *(b + 32 * OS1_S1 + 118) +
                one_over_two_q * *(b + 9 * OS1_S1 + 118) +
                one_over_two_q * *(b + 18 * OS1_S1 + 83);
            *(b + 18 * OS1_S1 + 163) = prefactor_y * *(b + 18 * OS1_S1 + 119) -
                                       p_over_q * *(b + 32 * OS1_S1 + 119) +
                                       one_over_two_q * *(b + 9 * OS1_S1 + 119);
            *(b + 18 * OS1_S1 + 164) =
                prefactor_z * *(b + 18 * OS1_S1 + 119) -
                p_over_q * *(b + 33 * OS1_S1 + 119) +
                2 * one_over_two_q * *(b + 8 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 18 * OS1_S1 + 83);
            *(b + 19 * OS1_S1 + 120) =
                prefactor_x * *(b + 19 * OS1_S1 + 84) -
                p_over_q * *(b + 29 * OS1_S1 + 84) +
                7 * one_over_two_q * *(b + 19 * OS1_S1 + 56);
            *(b + 19 * OS1_S1 + 121) = prefactor_y * *(b + 19 * OS1_S1 + 84) -
                                       p_over_q * *(b + 33 * OS1_S1 + 84);
            *(b + 19 * OS1_S1 + 122) =
                prefactor_z * *(b + 19 * OS1_S1 + 84) -
                p_over_q * *(b + 34 * OS1_S1 + 84) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 84);
            *(b + 19 * OS1_S1 + 123) = prefactor_y * *(b + 19 * OS1_S1 + 85) -
                                       p_over_q * *(b + 33 * OS1_S1 + 85) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 56);
            *(b + 19 * OS1_S1 + 124) = prefactor_y * *(b + 19 * OS1_S1 + 86) -
                                       p_over_q * *(b + 33 * OS1_S1 + 86);
            *(b + 19 * OS1_S1 + 125) =
                prefactor_z * *(b + 19 * OS1_S1 + 86) -
                p_over_q * *(b + 34 * OS1_S1 + 86) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 86) +
                one_over_two_q * *(b + 19 * OS1_S1 + 56);
            *(b + 19 * OS1_S1 + 126) =
                prefactor_y * *(b + 19 * OS1_S1 + 87) -
                p_over_q * *(b + 33 * OS1_S1 + 87) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 57);
            *(b + 19 * OS1_S1 + 127) =
                prefactor_z * *(b + 19 * OS1_S1 + 87) -
                p_over_q * *(b + 34 * OS1_S1 + 87) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 87);
            *(b + 19 * OS1_S1 + 128) = prefactor_y * *(b + 19 * OS1_S1 + 89) -
                                       p_over_q * *(b + 33 * OS1_S1 + 89);
            *(b + 19 * OS1_S1 + 129) =
                prefactor_z * *(b + 19 * OS1_S1 + 89) -
                p_over_q * *(b + 34 * OS1_S1 + 89) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 89) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 58);
            *(b + 19 * OS1_S1 + 130) =
                prefactor_y * *(b + 19 * OS1_S1 + 90) -
                p_over_q * *(b + 33 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 19 * OS1_S1 + 59);
            *(b + 19 * OS1_S1 + 131) =
                prefactor_z * *(b + 19 * OS1_S1 + 90) -
                p_over_q * *(b + 34 * OS1_S1 + 90) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 90);
            *(b + 19 * OS1_S1 + 132) = prefactor_y * *(b + 19 * OS1_S1 + 92) -
                                       p_over_q * *(b + 33 * OS1_S1 + 92) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 61);
            *(b + 19 * OS1_S1 + 133) = prefactor_y * *(b + 19 * OS1_S1 + 93) -
                                       p_over_q * *(b + 33 * OS1_S1 + 93);
            *(b + 19 * OS1_S1 + 134) =
                prefactor_x * *(b + 19 * OS1_S1 + 98) -
                p_over_q * *(b + 29 * OS1_S1 + 98) +
                3 * one_over_two_q * *(b + 19 * OS1_S1 + 70);
            *(b + 19 * OS1_S1 + 135) =
                prefactor_x * *(b + 19 * OS1_S1 + 99) -
                p_over_q * *(b + 29 * OS1_S1 + 99) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 71);
            *(b + 19 * OS1_S1 + 136) =
                prefactor_z * *(b + 19 * OS1_S1 + 94) -
                p_over_q * *(b + 34 * OS1_S1 + 94) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 94);
            *(b + 19 * OS1_S1 + 137) =
                prefactor_z * *(b + 19 * OS1_S1 + 95) -
                p_over_q * *(b + 34 * OS1_S1 + 95) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 95) +
                one_over_two_q * *(b + 19 * OS1_S1 + 62);
            *(b + 19 * OS1_S1 + 138) = prefactor_y * *(b + 19 * OS1_S1 + 97) -
                                       p_over_q * *(b + 33 * OS1_S1 + 97) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 65);
            *(b + 19 * OS1_S1 + 139) = prefactor_y * *(b + 19 * OS1_S1 + 98) -
                                       p_over_q * *(b + 33 * OS1_S1 + 98);
            *(b + 19 * OS1_S1 + 140) =
                prefactor_x * *(b + 19 * OS1_S1 + 104) -
                p_over_q * *(b + 29 * OS1_S1 + 104) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 76);
            *(b + 19 * OS1_S1 + 141) = prefactor_x * *(b + 19 * OS1_S1 + 105) -
                                       p_over_q * *(b + 29 * OS1_S1 + 105) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 77);
            *(b + 19 * OS1_S1 + 142) =
                prefactor_z * *(b + 19 * OS1_S1 + 99) -
                p_over_q * *(b + 34 * OS1_S1 + 99) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 99);
            *(b + 19 * OS1_S1 + 143) = prefactor_x * *(b + 19 * OS1_S1 + 107) -
                                       p_over_q * *(b + 29 * OS1_S1 + 107) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 79);
            *(b + 19 * OS1_S1 + 144) = prefactor_x * *(b + 19 * OS1_S1 + 108) -
                                       p_over_q * *(b + 29 * OS1_S1 + 108) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 80);
            *(b + 19 * OS1_S1 + 145) = prefactor_y * *(b + 19 * OS1_S1 + 103) -
                                       p_over_q * *(b + 33 * OS1_S1 + 103) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 70);
            *(b + 19 * OS1_S1 + 146) = prefactor_y * *(b + 19 * OS1_S1 + 104) -
                                       p_over_q * *(b + 33 * OS1_S1 + 104);
            *(b + 19 * OS1_S1 + 147) = prefactor_x * *(b + 19 * OS1_S1 + 111) -
                                       p_over_q * *(b + 29 * OS1_S1 + 111) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 83);
            *(b + 19 * OS1_S1 + 148) = prefactor_x * *(b + 19 * OS1_S1 + 112) -
                                       p_over_q * *(b + 29 * OS1_S1 + 112);
            *(b + 19 * OS1_S1 + 149) = prefactor_x * *(b + 19 * OS1_S1 + 113) -
                                       p_over_q * *(b + 29 * OS1_S1 + 113);
            *(b + 19 * OS1_S1 + 150) = prefactor_x * *(b + 19 * OS1_S1 + 114) -
                                       p_over_q * *(b + 29 * OS1_S1 + 114);
            *(b + 19 * OS1_S1 + 151) = prefactor_x * *(b + 19 * OS1_S1 + 115) -
                                       p_over_q * *(b + 29 * OS1_S1 + 115);
            *(b + 19 * OS1_S1 + 152) = prefactor_x * *(b + 19 * OS1_S1 + 116) -
                                       p_over_q * *(b + 29 * OS1_S1 + 116);
            *(b + 19 * OS1_S1 + 153) = prefactor_x * *(b + 19 * OS1_S1 + 117) -
                                       p_over_q * *(b + 29 * OS1_S1 + 117);
            *(b + 19 * OS1_S1 + 154) = prefactor_y * *(b + 19 * OS1_S1 + 111) -
                                       p_over_q * *(b + 33 * OS1_S1 + 111);
            *(b + 19 * OS1_S1 + 155) = prefactor_x * *(b + 19 * OS1_S1 + 119) -
                                       p_over_q * *(b + 29 * OS1_S1 + 119);
            *(b + 19 * OS1_S1 + 156) =
                prefactor_y * *(b + 19 * OS1_S1 + 112) -
                p_over_q * *(b + 33 * OS1_S1 + 112) +
                7 * one_over_two_q * *(b + 19 * OS1_S1 + 77);
            *(b + 19 * OS1_S1 + 157) =
                prefactor_z * *(b + 19 * OS1_S1 + 112) -
                p_over_q * *(b + 34 * OS1_S1 + 112) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 112);
            *(b + 19 * OS1_S1 + 158) =
                prefactor_z * *(b + 19 * OS1_S1 + 113) -
                p_over_q * *(b + 34 * OS1_S1 + 113) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 113) +
                one_over_two_q * *(b + 19 * OS1_S1 + 77);
            *(b + 19 * OS1_S1 + 159) =
                prefactor_z * *(b + 19 * OS1_S1 + 114) -
                p_over_q * *(b + 34 * OS1_S1 + 114) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 114) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 78);
            *(b + 19 * OS1_S1 + 160) =
                prefactor_y * *(b + 19 * OS1_S1 + 116) -
                p_over_q * *(b + 33 * OS1_S1 + 116) +
                3 * one_over_two_q * *(b + 19 * OS1_S1 + 81);
            *(b + 19 * OS1_S1 + 161) =
                prefactor_y * *(b + 19 * OS1_S1 + 117) -
                p_over_q * *(b + 33 * OS1_S1 + 117) +
                2 * one_over_two_q * *(b + 19 * OS1_S1 + 82);
            *(b + 19 * OS1_S1 + 162) = prefactor_y * *(b + 19 * OS1_S1 + 118) -
                                       p_over_q * *(b + 33 * OS1_S1 + 118) +
                                       one_over_two_q * *(b + 19 * OS1_S1 + 83);
            *(b + 19 * OS1_S1 + 163) = prefactor_y * *(b + 19 * OS1_S1 + 119) -
                                       p_over_q * *(b + 33 * OS1_S1 + 119);
            *(b + 19 * OS1_S1 + 164) =
                prefactor_z * *(b + 19 * OS1_S1 + 119) -
                p_over_q * *(b + 34 * OS1_S1 + 119) +
                3 * one_over_two_q * *(b + 9 * OS1_S1 + 119) +
                7 * one_over_two_q * *(b + 19 * OS1_S1 + 83);
            return;
        }

        void transfer_8(const unsigned first_min,
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
                transfer_0_8(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 0)
                    break;
            case 1:
                transfer_1_8(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 1)
                    break;
            case 2:
                transfer_2_8(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 2)
                    break;
            case 3:
                transfer_3_8(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 3)
                    break;
            case 4:
                transfer_4_8(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 4)
                    break;
            case 5:
                transfer_5_8(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 5)
                    break;
            case 6:
                transfer_6_8(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 6)
                    break;
            case 7:
                transfer_7_8(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 7)
                    break;
            case 8:
                transfer_8_8(prefactor_x,
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
