/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_9_5(const double prefactor_x,
                          const double prefactor_y,
                          const double prefactor_z,
                          const double p_over_q,
                          const double one_over_two_q,
                          double* NIEDOIDA_RESTRICT b)
        {
            *(b + 165 * OS1_S1 + 35) =
                prefactor_x * *(b + 165 * OS1_S1 + 20) -
                p_over_q * *(b + 220 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 165 * OS1_S1 + 10);
            *(b + 165 * OS1_S1 + 36) = prefactor_y * *(b + 165 * OS1_S1 + 20) -
                                       p_over_q * *(b + 221 * OS1_S1 + 20);
            *(b + 165 * OS1_S1 + 37) = prefactor_z * *(b + 165 * OS1_S1 + 20) -
                                       p_over_q * *(b + 222 * OS1_S1 + 20);
            *(b + 165 * OS1_S1 + 38) =
                prefactor_y * *(b + 165 * OS1_S1 + 21) -
                p_over_q * *(b + 221 * OS1_S1 + 21) +
                one_over_two_q * *(b + 165 * OS1_S1 + 10);
            *(b + 165 * OS1_S1 + 39) = prefactor_z * *(b + 165 * OS1_S1 + 21) -
                                       p_over_q * *(b + 222 * OS1_S1 + 21);
            *(b + 165 * OS1_S1 + 40) =
                prefactor_z * *(b + 165 * OS1_S1 + 22) -
                p_over_q * *(b + 222 * OS1_S1 + 22) +
                one_over_two_q * *(b + 165 * OS1_S1 + 10);
            *(b + 165 * OS1_S1 + 41) =
                prefactor_x * *(b + 165 * OS1_S1 + 26) -
                p_over_q * *(b + 220 * OS1_S1 + 26) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 26) +
                one_over_two_q * *(b + 165 * OS1_S1 + 16);
            *(b + 165 * OS1_S1 + 42) = prefactor_z * *(b + 165 * OS1_S1 + 23) -
                                       p_over_q * *(b + 222 * OS1_S1 + 23);
            *(b + 165 * OS1_S1 + 43) = prefactor_y * *(b + 165 * OS1_S1 + 25) -
                                       p_over_q * *(b + 221 * OS1_S1 + 25);
            *(b + 165 * OS1_S1 + 44) =
                prefactor_x * *(b + 165 * OS1_S1 + 29) -
                p_over_q * *(b + 220 * OS1_S1 + 29) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 29) +
                one_over_two_q * *(b + 165 * OS1_S1 + 19);
            *(b + 165 * OS1_S1 + 45) =
                prefactor_x * *(b + 165 * OS1_S1 + 30) -
                p_over_q * *(b + 220 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 30);
            *(b + 165 * OS1_S1 + 46) = prefactor_z * *(b + 165 * OS1_S1 + 26) -
                                       p_over_q * *(b + 222 * OS1_S1 + 26);
            *(b + 165 * OS1_S1 + 47) =
                prefactor_x * *(b + 165 * OS1_S1 + 32) -
                p_over_q * *(b + 220 * OS1_S1 + 32) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 32);
            *(b + 165 * OS1_S1 + 48) = prefactor_y * *(b + 165 * OS1_S1 + 29) -
                                       p_over_q * *(b + 221 * OS1_S1 + 29);
            *(b + 165 * OS1_S1 + 49) =
                prefactor_x * *(b + 165 * OS1_S1 + 34) -
                p_over_q * *(b + 220 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 120 * OS1_S1 + 34);
            *(b + 165 * OS1_S1 + 50) =
                prefactor_y * *(b + 165 * OS1_S1 + 30) -
                p_over_q * *(b + 221 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 165 * OS1_S1 + 16);
            *(b + 165 * OS1_S1 + 51) = prefactor_z * *(b + 165 * OS1_S1 + 30) -
                                       p_over_q * *(b + 222 * OS1_S1 + 30);
            *(b + 165 * OS1_S1 + 52) =
                prefactor_z * *(b + 165 * OS1_S1 + 31) -
                p_over_q * *(b + 222 * OS1_S1 + 31) +
                one_over_two_q * *(b + 165 * OS1_S1 + 16);
            *(b + 165 * OS1_S1 + 53) =
                prefactor_y * *(b + 165 * OS1_S1 + 33) -
                p_over_q * *(b + 221 * OS1_S1 + 33) +
                one_over_two_q * *(b + 165 * OS1_S1 + 19);
            *(b + 165 * OS1_S1 + 54) = prefactor_y * *(b + 165 * OS1_S1 + 34) -
                                       p_over_q * *(b + 221 * OS1_S1 + 34);
            *(b + 165 * OS1_S1 + 55) =
                prefactor_z * *(b + 165 * OS1_S1 + 34) -
                p_over_q * *(b + 222 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 165 * OS1_S1 + 19);
            *(b + 166 * OS1_S1 + 35) =
                prefactor_x * *(b + 166 * OS1_S1 + 20) -
                p_over_q * *(b + 221 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 166 * OS1_S1 + 10);
            *(b + 166 * OS1_S1 + 36) =
                prefactor_y * *(b + 166 * OS1_S1 + 20) -
                p_over_q * *(b + 223 * OS1_S1 + 20) +
                one_over_two_q * *(b + 120 * OS1_S1 + 20);
            *(b + 166 * OS1_S1 + 37) = prefactor_z * *(b + 166 * OS1_S1 + 20) -
                                       p_over_q * *(b + 224 * OS1_S1 + 20);
            *(b + 166 * OS1_S1 + 38) =
                prefactor_y * *(b + 166 * OS1_S1 + 21) -
                p_over_q * *(b + 223 * OS1_S1 + 21) +
                one_over_two_q * *(b + 120 * OS1_S1 + 21) +
                one_over_two_q * *(b + 166 * OS1_S1 + 10);
            *(b + 166 * OS1_S1 + 39) = prefactor_z * *(b + 166 * OS1_S1 + 21) -
                                       p_over_q * *(b + 224 * OS1_S1 + 21);
            *(b + 166 * OS1_S1 + 40) =
                prefactor_z * *(b + 166 * OS1_S1 + 22) -
                p_over_q * *(b + 224 * OS1_S1 + 22) +
                one_over_two_q * *(b + 166 * OS1_S1 + 10);
            *(b + 166 * OS1_S1 + 41) =
                prefactor_x * *(b + 166 * OS1_S1 + 26) -
                p_over_q * *(b + 221 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 26) +
                one_over_two_q * *(b + 166 * OS1_S1 + 16);
            *(b + 166 * OS1_S1 + 42) = prefactor_z * *(b + 166 * OS1_S1 + 23) -
                                       p_over_q * *(b + 224 * OS1_S1 + 23);
            *(b + 166 * OS1_S1 + 43) =
                prefactor_y * *(b + 166 * OS1_S1 + 25) -
                p_over_q * *(b + 223 * OS1_S1 + 25) +
                one_over_two_q * *(b + 120 * OS1_S1 + 25);
            *(b + 166 * OS1_S1 + 44) =
                prefactor_x * *(b + 166 * OS1_S1 + 29) -
                p_over_q * *(b + 221 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 29) +
                one_over_two_q * *(b + 166 * OS1_S1 + 19);
            *(b + 166 * OS1_S1 + 45) =
                prefactor_x * *(b + 166 * OS1_S1 + 30) -
                p_over_q * *(b + 221 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 30);
            *(b + 166 * OS1_S1 + 46) = prefactor_z * *(b + 166 * OS1_S1 + 26) -
                                       p_over_q * *(b + 224 * OS1_S1 + 26);
            *(b + 166 * OS1_S1 + 47) =
                prefactor_x * *(b + 166 * OS1_S1 + 32) -
                p_over_q * *(b + 221 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 32);
            *(b + 166 * OS1_S1 + 48) =
                prefactor_y * *(b + 166 * OS1_S1 + 29) -
                p_over_q * *(b + 223 * OS1_S1 + 29) +
                one_over_two_q * *(b + 120 * OS1_S1 + 29);
            *(b + 166 * OS1_S1 + 49) =
                prefactor_x * *(b + 166 * OS1_S1 + 34) -
                p_over_q * *(b + 221 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 121 * OS1_S1 + 34);
            *(b + 166 * OS1_S1 + 50) =
                prefactor_y * *(b + 166 * OS1_S1 + 30) -
                p_over_q * *(b + 223 * OS1_S1 + 30) +
                one_over_two_q * *(b + 120 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 166 * OS1_S1 + 16);
            *(b + 166 * OS1_S1 + 51) = prefactor_z * *(b + 166 * OS1_S1 + 30) -
                                       p_over_q * *(b + 224 * OS1_S1 + 30);
            *(b + 166 * OS1_S1 + 52) =
                prefactor_z * *(b + 166 * OS1_S1 + 31) -
                p_over_q * *(b + 224 * OS1_S1 + 31) +
                one_over_two_q * *(b + 166 * OS1_S1 + 16);
            *(b + 166 * OS1_S1 + 53) =
                prefactor_y * *(b + 166 * OS1_S1 + 33) -
                p_over_q * *(b + 223 * OS1_S1 + 33) +
                one_over_two_q * *(b + 120 * OS1_S1 + 33) +
                one_over_two_q * *(b + 166 * OS1_S1 + 19);
            *(b + 166 * OS1_S1 + 54) =
                prefactor_y * *(b + 166 * OS1_S1 + 34) -
                p_over_q * *(b + 223 * OS1_S1 + 34) +
                one_over_two_q * *(b + 120 * OS1_S1 + 34);
            *(b + 166 * OS1_S1 + 55) =
                prefactor_z * *(b + 166 * OS1_S1 + 34) -
                p_over_q * *(b + 224 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 166 * OS1_S1 + 19);
            *(b + 167 * OS1_S1 + 35) =
                prefactor_x * *(b + 167 * OS1_S1 + 20) -
                p_over_q * *(b + 222 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 167 * OS1_S1 + 10);
            *(b + 167 * OS1_S1 + 36) = prefactor_y * *(b + 167 * OS1_S1 + 20) -
                                       p_over_q * *(b + 224 * OS1_S1 + 20);
            *(b + 167 * OS1_S1 + 37) =
                prefactor_z * *(b + 167 * OS1_S1 + 20) -
                p_over_q * *(b + 225 * OS1_S1 + 20) +
                one_over_two_q * *(b + 120 * OS1_S1 + 20);
            *(b + 167 * OS1_S1 + 38) =
                prefactor_y * *(b + 167 * OS1_S1 + 21) -
                p_over_q * *(b + 224 * OS1_S1 + 21) +
                one_over_two_q * *(b + 167 * OS1_S1 + 10);
            *(b + 167 * OS1_S1 + 39) = prefactor_y * *(b + 167 * OS1_S1 + 22) -
                                       p_over_q * *(b + 224 * OS1_S1 + 22);
            *(b + 167 * OS1_S1 + 40) =
                prefactor_z * *(b + 167 * OS1_S1 + 22) -
                p_over_q * *(b + 225 * OS1_S1 + 22) +
                one_over_two_q * *(b + 120 * OS1_S1 + 22) +
                one_over_two_q * *(b + 167 * OS1_S1 + 10);
            *(b + 167 * OS1_S1 + 41) =
                prefactor_x * *(b + 167 * OS1_S1 + 26) -
                p_over_q * *(b + 222 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 26) +
                one_over_two_q * *(b + 167 * OS1_S1 + 16);
            *(b + 167 * OS1_S1 + 42) =
                prefactor_z * *(b + 167 * OS1_S1 + 23) -
                p_over_q * *(b + 225 * OS1_S1 + 23) +
                one_over_two_q * *(b + 120 * OS1_S1 + 23);
            *(b + 167 * OS1_S1 + 43) = prefactor_y * *(b + 167 * OS1_S1 + 25) -
                                       p_over_q * *(b + 224 * OS1_S1 + 25);
            *(b + 167 * OS1_S1 + 44) =
                prefactor_x * *(b + 167 * OS1_S1 + 29) -
                p_over_q * *(b + 222 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 29) +
                one_over_two_q * *(b + 167 * OS1_S1 + 19);
            *(b + 167 * OS1_S1 + 45) =
                prefactor_x * *(b + 167 * OS1_S1 + 30) -
                p_over_q * *(b + 222 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 30);
            *(b + 167 * OS1_S1 + 46) =
                prefactor_z * *(b + 167 * OS1_S1 + 26) -
                p_over_q * *(b + 225 * OS1_S1 + 26) +
                one_over_two_q * *(b + 120 * OS1_S1 + 26);
            *(b + 167 * OS1_S1 + 47) =
                prefactor_x * *(b + 167 * OS1_S1 + 32) -
                p_over_q * *(b + 222 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 32);
            *(b + 167 * OS1_S1 + 48) = prefactor_y * *(b + 167 * OS1_S1 + 29) -
                                       p_over_q * *(b + 224 * OS1_S1 + 29);
            *(b + 167 * OS1_S1 + 49) =
                prefactor_x * *(b + 167 * OS1_S1 + 34) -
                p_over_q * *(b + 222 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 122 * OS1_S1 + 34);
            *(b + 167 * OS1_S1 + 50) =
                prefactor_y * *(b + 167 * OS1_S1 + 30) -
                p_over_q * *(b + 224 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 167 * OS1_S1 + 16);
            *(b + 167 * OS1_S1 + 51) =
                prefactor_z * *(b + 167 * OS1_S1 + 30) -
                p_over_q * *(b + 225 * OS1_S1 + 30) +
                one_over_two_q * *(b + 120 * OS1_S1 + 30);
            *(b + 167 * OS1_S1 + 52) =
                prefactor_z * *(b + 167 * OS1_S1 + 31) -
                p_over_q * *(b + 225 * OS1_S1 + 31) +
                one_over_two_q * *(b + 120 * OS1_S1 + 31) +
                one_over_two_q * *(b + 167 * OS1_S1 + 16);
            *(b + 167 * OS1_S1 + 53) =
                prefactor_y * *(b + 167 * OS1_S1 + 33) -
                p_over_q * *(b + 224 * OS1_S1 + 33) +
                one_over_two_q * *(b + 167 * OS1_S1 + 19);
            *(b + 167 * OS1_S1 + 54) = prefactor_y * *(b + 167 * OS1_S1 + 34) -
                                       p_over_q * *(b + 224 * OS1_S1 + 34);
            *(b + 167 * OS1_S1 + 55) =
                prefactor_z * *(b + 167 * OS1_S1 + 34) -
                p_over_q * *(b + 225 * OS1_S1 + 34) +
                one_over_two_q * *(b + 120 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 167 * OS1_S1 + 19);
            *(b + 168 * OS1_S1 + 35) =
                prefactor_x * *(b + 168 * OS1_S1 + 20) -
                p_over_q * *(b + 223 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 168 * OS1_S1 + 10);
            *(b + 168 * OS1_S1 + 36) =
                prefactor_y * *(b + 168 * OS1_S1 + 20) -
                p_over_q * *(b + 226 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 20);
            *(b + 168 * OS1_S1 + 37) = prefactor_z * *(b + 168 * OS1_S1 + 20) -
                                       p_over_q * *(b + 227 * OS1_S1 + 20);
            *(b + 168 * OS1_S1 + 38) =
                prefactor_y * *(b + 168 * OS1_S1 + 21) -
                p_over_q * *(b + 226 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 21) +
                one_over_two_q * *(b + 168 * OS1_S1 + 10);
            *(b + 168 * OS1_S1 + 39) = prefactor_z * *(b + 168 * OS1_S1 + 21) -
                                       p_over_q * *(b + 227 * OS1_S1 + 21);
            *(b + 168 * OS1_S1 + 40) =
                prefactor_z * *(b + 168 * OS1_S1 + 22) -
                p_over_q * *(b + 227 * OS1_S1 + 22) +
                one_over_two_q * *(b + 168 * OS1_S1 + 10);
            *(b + 168 * OS1_S1 + 41) =
                prefactor_x * *(b + 168 * OS1_S1 + 26) -
                p_over_q * *(b + 223 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 26) +
                one_over_two_q * *(b + 168 * OS1_S1 + 16);
            *(b + 168 * OS1_S1 + 42) = prefactor_z * *(b + 168 * OS1_S1 + 23) -
                                       p_over_q * *(b + 227 * OS1_S1 + 23);
            *(b + 168 * OS1_S1 + 43) =
                prefactor_y * *(b + 168 * OS1_S1 + 25) -
                p_over_q * *(b + 226 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 25);
            *(b + 168 * OS1_S1 + 44) =
                prefactor_x * *(b + 168 * OS1_S1 + 29) -
                p_over_q * *(b + 223 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 29) +
                one_over_two_q * *(b + 168 * OS1_S1 + 19);
            *(b + 168 * OS1_S1 + 45) =
                prefactor_x * *(b + 168 * OS1_S1 + 30) -
                p_over_q * *(b + 223 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 30);
            *(b + 168 * OS1_S1 + 46) = prefactor_z * *(b + 168 * OS1_S1 + 26) -
                                       p_over_q * *(b + 227 * OS1_S1 + 26);
            *(b + 168 * OS1_S1 + 47) =
                prefactor_x * *(b + 168 * OS1_S1 + 32) -
                p_over_q * *(b + 223 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 32);
            *(b + 168 * OS1_S1 + 48) =
                prefactor_y * *(b + 168 * OS1_S1 + 29) -
                p_over_q * *(b + 226 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 29);
            *(b + 168 * OS1_S1 + 49) =
                prefactor_x * *(b + 168 * OS1_S1 + 34) -
                p_over_q * *(b + 223 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 123 * OS1_S1 + 34);
            *(b + 168 * OS1_S1 + 50) =
                prefactor_y * *(b + 168 * OS1_S1 + 30) -
                p_over_q * *(b + 226 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 168 * OS1_S1 + 16);
            *(b + 168 * OS1_S1 + 51) = prefactor_z * *(b + 168 * OS1_S1 + 30) -
                                       p_over_q * *(b + 227 * OS1_S1 + 30);
            *(b + 168 * OS1_S1 + 52) =
                prefactor_z * *(b + 168 * OS1_S1 + 31) -
                p_over_q * *(b + 227 * OS1_S1 + 31) +
                one_over_two_q * *(b + 168 * OS1_S1 + 16);
            *(b + 168 * OS1_S1 + 53) =
                prefactor_y * *(b + 168 * OS1_S1 + 33) -
                p_over_q * *(b + 226 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 33) +
                one_over_two_q * *(b + 168 * OS1_S1 + 19);
            *(b + 168 * OS1_S1 + 54) =
                prefactor_y * *(b + 168 * OS1_S1 + 34) -
                p_over_q * *(b + 226 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 121 * OS1_S1 + 34);
            *(b + 168 * OS1_S1 + 55) =
                prefactor_z * *(b + 168 * OS1_S1 + 34) -
                p_over_q * *(b + 227 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 168 * OS1_S1 + 19);
            *(b + 169 * OS1_S1 + 35) =
                prefactor_x * *(b + 169 * OS1_S1 + 20) -
                p_over_q * *(b + 224 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 169 * OS1_S1 + 10);
            *(b + 169 * OS1_S1 + 36) =
                prefactor_y * *(b + 169 * OS1_S1 + 20) -
                p_over_q * *(b + 227 * OS1_S1 + 20) +
                one_over_two_q * *(b + 122 * OS1_S1 + 20);
            *(b + 169 * OS1_S1 + 37) =
                prefactor_z * *(b + 169 * OS1_S1 + 20) -
                p_over_q * *(b + 228 * OS1_S1 + 20) +
                one_over_two_q * *(b + 121 * OS1_S1 + 20);
            *(b + 169 * OS1_S1 + 38) =
                prefactor_y * *(b + 169 * OS1_S1 + 21) -
                p_over_q * *(b + 227 * OS1_S1 + 21) +
                one_over_two_q * *(b + 122 * OS1_S1 + 21) +
                one_over_two_q * *(b + 169 * OS1_S1 + 10);
            *(b + 169 * OS1_S1 + 39) =
                prefactor_z * *(b + 169 * OS1_S1 + 21) -
                p_over_q * *(b + 228 * OS1_S1 + 21) +
                one_over_two_q * *(b + 121 * OS1_S1 + 21);
            *(b + 169 * OS1_S1 + 40) =
                prefactor_z * *(b + 169 * OS1_S1 + 22) -
                p_over_q * *(b + 228 * OS1_S1 + 22) +
                one_over_two_q * *(b + 121 * OS1_S1 + 22) +
                one_over_two_q * *(b + 169 * OS1_S1 + 10);
            *(b + 169 * OS1_S1 + 41) =
                prefactor_x * *(b + 169 * OS1_S1 + 26) -
                p_over_q * *(b + 224 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 26) +
                one_over_two_q * *(b + 169 * OS1_S1 + 16);
            *(b + 169 * OS1_S1 + 42) =
                prefactor_z * *(b + 169 * OS1_S1 + 23) -
                p_over_q * *(b + 228 * OS1_S1 + 23) +
                one_over_two_q * *(b + 121 * OS1_S1 + 23);
            *(b + 169 * OS1_S1 + 43) =
                prefactor_y * *(b + 169 * OS1_S1 + 25) -
                p_over_q * *(b + 227 * OS1_S1 + 25) +
                one_over_two_q * *(b + 122 * OS1_S1 + 25);
            *(b + 169 * OS1_S1 + 44) =
                prefactor_x * *(b + 169 * OS1_S1 + 29) -
                p_over_q * *(b + 224 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 29) +
                one_over_two_q * *(b + 169 * OS1_S1 + 19);
            *(b + 169 * OS1_S1 + 45) =
                prefactor_x * *(b + 169 * OS1_S1 + 30) -
                p_over_q * *(b + 224 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 30);
            *(b + 169 * OS1_S1 + 46) =
                prefactor_z * *(b + 169 * OS1_S1 + 26) -
                p_over_q * *(b + 228 * OS1_S1 + 26) +
                one_over_two_q * *(b + 121 * OS1_S1 + 26);
            *(b + 169 * OS1_S1 + 47) =
                prefactor_x * *(b + 169 * OS1_S1 + 32) -
                p_over_q * *(b + 224 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 32);
            *(b + 169 * OS1_S1 + 48) =
                prefactor_y * *(b + 169 * OS1_S1 + 29) -
                p_over_q * *(b + 227 * OS1_S1 + 29) +
                one_over_two_q * *(b + 122 * OS1_S1 + 29);
            *(b + 169 * OS1_S1 + 49) =
                prefactor_x * *(b + 169 * OS1_S1 + 34) -
                p_over_q * *(b + 224 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 124 * OS1_S1 + 34);
            *(b + 169 * OS1_S1 + 50) =
                prefactor_y * *(b + 169 * OS1_S1 + 30) -
                p_over_q * *(b + 227 * OS1_S1 + 30) +
                one_over_two_q * *(b + 122 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 169 * OS1_S1 + 16);
            *(b + 169 * OS1_S1 + 51) =
                prefactor_z * *(b + 169 * OS1_S1 + 30) -
                p_over_q * *(b + 228 * OS1_S1 + 30) +
                one_over_two_q * *(b + 121 * OS1_S1 + 30);
            *(b + 169 * OS1_S1 + 52) =
                prefactor_z * *(b + 169 * OS1_S1 + 31) -
                p_over_q * *(b + 228 * OS1_S1 + 31) +
                one_over_two_q * *(b + 121 * OS1_S1 + 31) +
                one_over_two_q * *(b + 169 * OS1_S1 + 16);
            *(b + 169 * OS1_S1 + 53) =
                prefactor_y * *(b + 169 * OS1_S1 + 33) -
                p_over_q * *(b + 227 * OS1_S1 + 33) +
                one_over_two_q * *(b + 122 * OS1_S1 + 33) +
                one_over_two_q * *(b + 169 * OS1_S1 + 19);
            *(b + 169 * OS1_S1 + 54) =
                prefactor_y * *(b + 169 * OS1_S1 + 34) -
                p_over_q * *(b + 227 * OS1_S1 + 34) +
                one_over_two_q * *(b + 122 * OS1_S1 + 34);
            *(b + 169 * OS1_S1 + 55) =
                prefactor_z * *(b + 169 * OS1_S1 + 34) -
                p_over_q * *(b + 228 * OS1_S1 + 34) +
                one_over_two_q * *(b + 121 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 169 * OS1_S1 + 19);
            *(b + 170 * OS1_S1 + 35) =
                prefactor_x * *(b + 170 * OS1_S1 + 20) -
                p_over_q * *(b + 225 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 170 * OS1_S1 + 10);
            *(b + 170 * OS1_S1 + 36) = prefactor_y * *(b + 170 * OS1_S1 + 20) -
                                       p_over_q * *(b + 228 * OS1_S1 + 20);
            *(b + 170 * OS1_S1 + 37) =
                prefactor_z * *(b + 170 * OS1_S1 + 20) -
                p_over_q * *(b + 229 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 20);
            *(b + 170 * OS1_S1 + 38) =
                prefactor_y * *(b + 170 * OS1_S1 + 21) -
                p_over_q * *(b + 228 * OS1_S1 + 21) +
                one_over_two_q * *(b + 170 * OS1_S1 + 10);
            *(b + 170 * OS1_S1 + 39) = prefactor_y * *(b + 170 * OS1_S1 + 22) -
                                       p_over_q * *(b + 228 * OS1_S1 + 22);
            *(b + 170 * OS1_S1 + 40) =
                prefactor_z * *(b + 170 * OS1_S1 + 22) -
                p_over_q * *(b + 229 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 22) +
                one_over_two_q * *(b + 170 * OS1_S1 + 10);
            *(b + 170 * OS1_S1 + 41) =
                prefactor_x * *(b + 170 * OS1_S1 + 26) -
                p_over_q * *(b + 225 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 26) +
                one_over_two_q * *(b + 170 * OS1_S1 + 16);
            *(b + 170 * OS1_S1 + 42) =
                prefactor_z * *(b + 170 * OS1_S1 + 23) -
                p_over_q * *(b + 229 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 23);
            *(b + 170 * OS1_S1 + 43) = prefactor_y * *(b + 170 * OS1_S1 + 25) -
                                       p_over_q * *(b + 228 * OS1_S1 + 25);
            *(b + 170 * OS1_S1 + 44) =
                prefactor_x * *(b + 170 * OS1_S1 + 29) -
                p_over_q * *(b + 225 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 29) +
                one_over_two_q * *(b + 170 * OS1_S1 + 19);
            *(b + 170 * OS1_S1 + 45) =
                prefactor_x * *(b + 170 * OS1_S1 + 30) -
                p_over_q * *(b + 225 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 30);
            *(b + 170 * OS1_S1 + 46) =
                prefactor_z * *(b + 170 * OS1_S1 + 26) -
                p_over_q * *(b + 229 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 26);
            *(b + 170 * OS1_S1 + 47) =
                prefactor_x * *(b + 170 * OS1_S1 + 32) -
                p_over_q * *(b + 225 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 32);
            *(b + 170 * OS1_S1 + 48) = prefactor_y * *(b + 170 * OS1_S1 + 29) -
                                       p_over_q * *(b + 228 * OS1_S1 + 29);
            *(b + 170 * OS1_S1 + 49) =
                prefactor_x * *(b + 170 * OS1_S1 + 34) -
                p_over_q * *(b + 225 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 125 * OS1_S1 + 34);
            *(b + 170 * OS1_S1 + 50) =
                prefactor_y * *(b + 170 * OS1_S1 + 30) -
                p_over_q * *(b + 228 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 170 * OS1_S1 + 16);
            *(b + 170 * OS1_S1 + 51) =
                prefactor_z * *(b + 170 * OS1_S1 + 30) -
                p_over_q * *(b + 229 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 30);
            *(b + 170 * OS1_S1 + 52) =
                prefactor_z * *(b + 170 * OS1_S1 + 31) -
                p_over_q * *(b + 229 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 31) +
                one_over_two_q * *(b + 170 * OS1_S1 + 16);
            *(b + 170 * OS1_S1 + 53) =
                prefactor_y * *(b + 170 * OS1_S1 + 33) -
                p_over_q * *(b + 228 * OS1_S1 + 33) +
                one_over_two_q * *(b + 170 * OS1_S1 + 19);
            *(b + 170 * OS1_S1 + 54) = prefactor_y * *(b + 170 * OS1_S1 + 34) -
                                       p_over_q * *(b + 228 * OS1_S1 + 34);
            *(b + 170 * OS1_S1 + 55) =
                prefactor_z * *(b + 170 * OS1_S1 + 34) -
                p_over_q * *(b + 229 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 122 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 170 * OS1_S1 + 19);
            *(b + 171 * OS1_S1 + 35) =
                prefactor_x * *(b + 171 * OS1_S1 + 20) -
                p_over_q * *(b + 226 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 10);
            *(b + 171 * OS1_S1 + 36) =
                prefactor_y * *(b + 171 * OS1_S1 + 20) -
                p_over_q * *(b + 230 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 20);
            *(b + 171 * OS1_S1 + 37) = prefactor_z * *(b + 171 * OS1_S1 + 20) -
                                       p_over_q * *(b + 231 * OS1_S1 + 20);
            *(b + 171 * OS1_S1 + 38) =
                prefactor_y * *(b + 171 * OS1_S1 + 21) -
                p_over_q * *(b + 230 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 21) +
                one_over_two_q * *(b + 171 * OS1_S1 + 10);
            *(b + 171 * OS1_S1 + 39) = prefactor_z * *(b + 171 * OS1_S1 + 21) -
                                       p_over_q * *(b + 231 * OS1_S1 + 21);
            *(b + 171 * OS1_S1 + 40) =
                prefactor_z * *(b + 171 * OS1_S1 + 22) -
                p_over_q * *(b + 231 * OS1_S1 + 22) +
                one_over_two_q * *(b + 171 * OS1_S1 + 10);
            *(b + 171 * OS1_S1 + 41) =
                prefactor_x * *(b + 171 * OS1_S1 + 26) -
                p_over_q * *(b + 226 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 26) +
                one_over_two_q * *(b + 171 * OS1_S1 + 16);
            *(b + 171 * OS1_S1 + 42) = prefactor_z * *(b + 171 * OS1_S1 + 23) -
                                       p_over_q * *(b + 231 * OS1_S1 + 23);
            *(b + 171 * OS1_S1 + 43) =
                prefactor_y * *(b + 171 * OS1_S1 + 25) -
                p_over_q * *(b + 230 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 25);
            *(b + 171 * OS1_S1 + 44) =
                prefactor_x * *(b + 171 * OS1_S1 + 29) -
                p_over_q * *(b + 226 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 29) +
                one_over_two_q * *(b + 171 * OS1_S1 + 19);
            *(b + 171 * OS1_S1 + 45) =
                prefactor_x * *(b + 171 * OS1_S1 + 30) -
                p_over_q * *(b + 226 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 30);
            *(b + 171 * OS1_S1 + 46) = prefactor_z * *(b + 171 * OS1_S1 + 26) -
                                       p_over_q * *(b + 231 * OS1_S1 + 26);
            *(b + 171 * OS1_S1 + 47) =
                prefactor_x * *(b + 171 * OS1_S1 + 32) -
                p_over_q * *(b + 226 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 32);
            *(b + 171 * OS1_S1 + 48) =
                prefactor_y * *(b + 171 * OS1_S1 + 29) -
                p_over_q * *(b + 230 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 29);
            *(b + 171 * OS1_S1 + 49) =
                prefactor_x * *(b + 171 * OS1_S1 + 34) -
                p_over_q * *(b + 226 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 126 * OS1_S1 + 34);
            *(b + 171 * OS1_S1 + 50) =
                prefactor_y * *(b + 171 * OS1_S1 + 30) -
                p_over_q * *(b + 230 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 16);
            *(b + 171 * OS1_S1 + 51) = prefactor_z * *(b + 171 * OS1_S1 + 30) -
                                       p_over_q * *(b + 231 * OS1_S1 + 30);
            *(b + 171 * OS1_S1 + 52) =
                prefactor_z * *(b + 171 * OS1_S1 + 31) -
                p_over_q * *(b + 231 * OS1_S1 + 31) +
                one_over_two_q * *(b + 171 * OS1_S1 + 16);
            *(b + 171 * OS1_S1 + 53) =
                prefactor_y * *(b + 171 * OS1_S1 + 33) -
                p_over_q * *(b + 230 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 33) +
                one_over_two_q * *(b + 171 * OS1_S1 + 19);
            *(b + 171 * OS1_S1 + 54) =
                prefactor_y * *(b + 171 * OS1_S1 + 34) -
                p_over_q * *(b + 230 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 123 * OS1_S1 + 34);
            *(b + 171 * OS1_S1 + 55) =
                prefactor_z * *(b + 171 * OS1_S1 + 34) -
                p_over_q * *(b + 231 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 19);
            *(b + 172 * OS1_S1 + 35) =
                prefactor_x * *(b + 172 * OS1_S1 + 20) -
                p_over_q * *(b + 227 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 172 * OS1_S1 + 10);
            *(b + 172 * OS1_S1 + 36) =
                prefactor_y * *(b + 172 * OS1_S1 + 20) -
                p_over_q * *(b + 231 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 20);
            *(b + 172 * OS1_S1 + 37) =
                prefactor_z * *(b + 172 * OS1_S1 + 20) -
                p_over_q * *(b + 232 * OS1_S1 + 20) +
                one_over_two_q * *(b + 123 * OS1_S1 + 20);
            *(b + 172 * OS1_S1 + 38) =
                prefactor_y * *(b + 172 * OS1_S1 + 21) -
                p_over_q * *(b + 231 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 21) +
                one_over_two_q * *(b + 172 * OS1_S1 + 10);
            *(b + 172 * OS1_S1 + 39) =
                prefactor_z * *(b + 172 * OS1_S1 + 21) -
                p_over_q * *(b + 232 * OS1_S1 + 21) +
                one_over_two_q * *(b + 123 * OS1_S1 + 21);
            *(b + 172 * OS1_S1 + 40) =
                prefactor_z * *(b + 172 * OS1_S1 + 22) -
                p_over_q * *(b + 232 * OS1_S1 + 22) +
                one_over_two_q * *(b + 123 * OS1_S1 + 22) +
                one_over_two_q * *(b + 172 * OS1_S1 + 10);
            *(b + 172 * OS1_S1 + 41) =
                prefactor_x * *(b + 172 * OS1_S1 + 26) -
                p_over_q * *(b + 227 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 26) +
                one_over_two_q * *(b + 172 * OS1_S1 + 16);
            *(b + 172 * OS1_S1 + 42) =
                prefactor_z * *(b + 172 * OS1_S1 + 23) -
                p_over_q * *(b + 232 * OS1_S1 + 23) +
                one_over_two_q * *(b + 123 * OS1_S1 + 23);
            *(b + 172 * OS1_S1 + 43) =
                prefactor_y * *(b + 172 * OS1_S1 + 25) -
                p_over_q * *(b + 231 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 25);
            *(b + 172 * OS1_S1 + 44) =
                prefactor_x * *(b + 172 * OS1_S1 + 29) -
                p_over_q * *(b + 227 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 29) +
                one_over_two_q * *(b + 172 * OS1_S1 + 19);
            *(b + 172 * OS1_S1 + 45) =
                prefactor_x * *(b + 172 * OS1_S1 + 30) -
                p_over_q * *(b + 227 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 30);
            *(b + 172 * OS1_S1 + 46) =
                prefactor_z * *(b + 172 * OS1_S1 + 26) -
                p_over_q * *(b + 232 * OS1_S1 + 26) +
                one_over_two_q * *(b + 123 * OS1_S1 + 26);
            *(b + 172 * OS1_S1 + 47) =
                prefactor_x * *(b + 172 * OS1_S1 + 32) -
                p_over_q * *(b + 227 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 32);
            *(b + 172 * OS1_S1 + 48) =
                prefactor_y * *(b + 172 * OS1_S1 + 29) -
                p_over_q * *(b + 231 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 29);
            *(b + 172 * OS1_S1 + 49) =
                prefactor_x * *(b + 172 * OS1_S1 + 34) -
                p_over_q * *(b + 227 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 127 * OS1_S1 + 34);
            *(b + 172 * OS1_S1 + 50) =
                prefactor_y * *(b + 172 * OS1_S1 + 30) -
                p_over_q * *(b + 231 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 172 * OS1_S1 + 16);
            *(b + 172 * OS1_S1 + 51) =
                prefactor_z * *(b + 172 * OS1_S1 + 30) -
                p_over_q * *(b + 232 * OS1_S1 + 30) +
                one_over_two_q * *(b + 123 * OS1_S1 + 30);
            *(b + 172 * OS1_S1 + 52) =
                prefactor_z * *(b + 172 * OS1_S1 + 31) -
                p_over_q * *(b + 232 * OS1_S1 + 31) +
                one_over_two_q * *(b + 123 * OS1_S1 + 31) +
                one_over_two_q * *(b + 172 * OS1_S1 + 16);
            *(b + 172 * OS1_S1 + 53) =
                prefactor_y * *(b + 172 * OS1_S1 + 33) -
                p_over_q * *(b + 231 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 33) +
                one_over_two_q * *(b + 172 * OS1_S1 + 19);
            *(b + 172 * OS1_S1 + 54) =
                prefactor_y * *(b + 172 * OS1_S1 + 34) -
                p_over_q * *(b + 231 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 34);
            *(b + 172 * OS1_S1 + 55) =
                prefactor_z * *(b + 172 * OS1_S1 + 34) -
                p_over_q * *(b + 232 * OS1_S1 + 34) +
                one_over_two_q * *(b + 123 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 172 * OS1_S1 + 19);
            *(b + 173 * OS1_S1 + 35) =
                prefactor_x * *(b + 173 * OS1_S1 + 20) -
                p_over_q * *(b + 228 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 173 * OS1_S1 + 10);
            *(b + 173 * OS1_S1 + 36) =
                prefactor_y * *(b + 173 * OS1_S1 + 20) -
                p_over_q * *(b + 232 * OS1_S1 + 20) +
                one_over_two_q * *(b + 125 * OS1_S1 + 20);
            *(b + 173 * OS1_S1 + 37) =
                prefactor_z * *(b + 173 * OS1_S1 + 20) -
                p_over_q * *(b + 233 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 20);
            *(b + 173 * OS1_S1 + 38) =
                prefactor_y * *(b + 173 * OS1_S1 + 21) -
                p_over_q * *(b + 232 * OS1_S1 + 21) +
                one_over_two_q * *(b + 125 * OS1_S1 + 21) +
                one_over_two_q * *(b + 173 * OS1_S1 + 10);
            *(b + 173 * OS1_S1 + 39) =
                prefactor_y * *(b + 173 * OS1_S1 + 22) -
                p_over_q * *(b + 232 * OS1_S1 + 22) +
                one_over_two_q * *(b + 125 * OS1_S1 + 22);
            *(b + 173 * OS1_S1 + 40) =
                prefactor_z * *(b + 173 * OS1_S1 + 22) -
                p_over_q * *(b + 233 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 22) +
                one_over_two_q * *(b + 173 * OS1_S1 + 10);
            *(b + 173 * OS1_S1 + 41) =
                prefactor_x * *(b + 173 * OS1_S1 + 26) -
                p_over_q * *(b + 228 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 26) +
                one_over_two_q * *(b + 173 * OS1_S1 + 16);
            *(b + 173 * OS1_S1 + 42) =
                prefactor_z * *(b + 173 * OS1_S1 + 23) -
                p_over_q * *(b + 233 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 23);
            *(b + 173 * OS1_S1 + 43) =
                prefactor_y * *(b + 173 * OS1_S1 + 25) -
                p_over_q * *(b + 232 * OS1_S1 + 25) +
                one_over_two_q * *(b + 125 * OS1_S1 + 25);
            *(b + 173 * OS1_S1 + 44) =
                prefactor_x * *(b + 173 * OS1_S1 + 29) -
                p_over_q * *(b + 228 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 29) +
                one_over_two_q * *(b + 173 * OS1_S1 + 19);
            *(b + 173 * OS1_S1 + 45) =
                prefactor_x * *(b + 173 * OS1_S1 + 30) -
                p_over_q * *(b + 228 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 30);
            *(b + 173 * OS1_S1 + 46) =
                prefactor_z * *(b + 173 * OS1_S1 + 26) -
                p_over_q * *(b + 233 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 26);
            *(b + 173 * OS1_S1 + 47) =
                prefactor_x * *(b + 173 * OS1_S1 + 32) -
                p_over_q * *(b + 228 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 32);
            *(b + 173 * OS1_S1 + 48) =
                prefactor_y * *(b + 173 * OS1_S1 + 29) -
                p_over_q * *(b + 232 * OS1_S1 + 29) +
                one_over_two_q * *(b + 125 * OS1_S1 + 29);
            *(b + 173 * OS1_S1 + 49) =
                prefactor_x * *(b + 173 * OS1_S1 + 34) -
                p_over_q * *(b + 228 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 128 * OS1_S1 + 34);
            *(b + 173 * OS1_S1 + 50) =
                prefactor_y * *(b + 173 * OS1_S1 + 30) -
                p_over_q * *(b + 232 * OS1_S1 + 30) +
                one_over_two_q * *(b + 125 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 173 * OS1_S1 + 16);
            *(b + 173 * OS1_S1 + 51) =
                prefactor_z * *(b + 173 * OS1_S1 + 30) -
                p_over_q * *(b + 233 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 30);
            *(b + 173 * OS1_S1 + 52) =
                prefactor_z * *(b + 173 * OS1_S1 + 31) -
                p_over_q * *(b + 233 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 31) +
                one_over_two_q * *(b + 173 * OS1_S1 + 16);
            *(b + 173 * OS1_S1 + 53) =
                prefactor_y * *(b + 173 * OS1_S1 + 33) -
                p_over_q * *(b + 232 * OS1_S1 + 33) +
                one_over_two_q * *(b + 125 * OS1_S1 + 33) +
                one_over_two_q * *(b + 173 * OS1_S1 + 19);
            *(b + 173 * OS1_S1 + 54) =
                prefactor_y * *(b + 173 * OS1_S1 + 34) -
                p_over_q * *(b + 232 * OS1_S1 + 34) +
                one_over_two_q * *(b + 125 * OS1_S1 + 34);
            *(b + 173 * OS1_S1 + 55) =
                prefactor_z * *(b + 173 * OS1_S1 + 34) -
                p_over_q * *(b + 233 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 124 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 173 * OS1_S1 + 19);
            *(b + 174 * OS1_S1 + 35) =
                prefactor_x * *(b + 174 * OS1_S1 + 20) -
                p_over_q * *(b + 229 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 10);
            *(b + 174 * OS1_S1 + 36) = prefactor_y * *(b + 174 * OS1_S1 + 20) -
                                       p_over_q * *(b + 233 * OS1_S1 + 20);
            *(b + 174 * OS1_S1 + 37) =
                prefactor_z * *(b + 174 * OS1_S1 + 20) -
                p_over_q * *(b + 234 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 20);
            *(b + 174 * OS1_S1 + 38) =
                prefactor_y * *(b + 174 * OS1_S1 + 21) -
                p_over_q * *(b + 233 * OS1_S1 + 21) +
                one_over_two_q * *(b + 174 * OS1_S1 + 10);
            *(b + 174 * OS1_S1 + 39) = prefactor_y * *(b + 174 * OS1_S1 + 22) -
                                       p_over_q * *(b + 233 * OS1_S1 + 22);
            *(b + 174 * OS1_S1 + 40) =
                prefactor_z * *(b + 174 * OS1_S1 + 22) -
                p_over_q * *(b + 234 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 22) +
                one_over_two_q * *(b + 174 * OS1_S1 + 10);
            *(b + 174 * OS1_S1 + 41) =
                prefactor_x * *(b + 174 * OS1_S1 + 26) -
                p_over_q * *(b + 229 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 26) +
                one_over_two_q * *(b + 174 * OS1_S1 + 16);
            *(b + 174 * OS1_S1 + 42) =
                prefactor_z * *(b + 174 * OS1_S1 + 23) -
                p_over_q * *(b + 234 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 23);
            *(b + 174 * OS1_S1 + 43) = prefactor_y * *(b + 174 * OS1_S1 + 25) -
                                       p_over_q * *(b + 233 * OS1_S1 + 25);
            *(b + 174 * OS1_S1 + 44) =
                prefactor_x * *(b + 174 * OS1_S1 + 29) -
                p_over_q * *(b + 229 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 29) +
                one_over_two_q * *(b + 174 * OS1_S1 + 19);
            *(b + 174 * OS1_S1 + 45) =
                prefactor_x * *(b + 174 * OS1_S1 + 30) -
                p_over_q * *(b + 229 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 30);
            *(b + 174 * OS1_S1 + 46) =
                prefactor_z * *(b + 174 * OS1_S1 + 26) -
                p_over_q * *(b + 234 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 26);
            *(b + 174 * OS1_S1 + 47) =
                prefactor_x * *(b + 174 * OS1_S1 + 32) -
                p_over_q * *(b + 229 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 32);
            *(b + 174 * OS1_S1 + 48) = prefactor_y * *(b + 174 * OS1_S1 + 29) -
                                       p_over_q * *(b + 233 * OS1_S1 + 29);
            *(b + 174 * OS1_S1 + 49) =
                prefactor_x * *(b + 174 * OS1_S1 + 34) -
                p_over_q * *(b + 229 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 129 * OS1_S1 + 34);
            *(b + 174 * OS1_S1 + 50) =
                prefactor_y * *(b + 174 * OS1_S1 + 30) -
                p_over_q * *(b + 233 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 16);
            *(b + 174 * OS1_S1 + 51) =
                prefactor_z * *(b + 174 * OS1_S1 + 30) -
                p_over_q * *(b + 234 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 30);
            *(b + 174 * OS1_S1 + 52) =
                prefactor_z * *(b + 174 * OS1_S1 + 31) -
                p_over_q * *(b + 234 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 31) +
                one_over_two_q * *(b + 174 * OS1_S1 + 16);
            *(b + 174 * OS1_S1 + 53) =
                prefactor_y * *(b + 174 * OS1_S1 + 33) -
                p_over_q * *(b + 233 * OS1_S1 + 33) +
                one_over_two_q * *(b + 174 * OS1_S1 + 19);
            *(b + 174 * OS1_S1 + 54) = prefactor_y * *(b + 174 * OS1_S1 + 34) -
                                       p_over_q * *(b + 233 * OS1_S1 + 34);
            *(b + 174 * OS1_S1 + 55) =
                prefactor_z * *(b + 174 * OS1_S1 + 34) -
                p_over_q * *(b + 234 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 125 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 19);
            *(b + 175 * OS1_S1 + 35) =
                prefactor_x * *(b + 175 * OS1_S1 + 20) -
                p_over_q * *(b + 230 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 175 * OS1_S1 + 10);
            *(b + 175 * OS1_S1 + 36) =
                prefactor_y * *(b + 175 * OS1_S1 + 20) -
                p_over_q * *(b + 235 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 20);
            *(b + 175 * OS1_S1 + 37) = prefactor_z * *(b + 175 * OS1_S1 + 20) -
                                       p_over_q * *(b + 236 * OS1_S1 + 20);
            *(b + 175 * OS1_S1 + 38) =
                prefactor_y * *(b + 175 * OS1_S1 + 21) -
                p_over_q * *(b + 235 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 21) +
                one_over_two_q * *(b + 175 * OS1_S1 + 10);
            *(b + 175 * OS1_S1 + 39) = prefactor_z * *(b + 175 * OS1_S1 + 21) -
                                       p_over_q * *(b + 236 * OS1_S1 + 21);
            *(b + 175 * OS1_S1 + 40) =
                prefactor_z * *(b + 175 * OS1_S1 + 22) -
                p_over_q * *(b + 236 * OS1_S1 + 22) +
                one_over_two_q * *(b + 175 * OS1_S1 + 10);
            *(b + 175 * OS1_S1 + 41) =
                prefactor_x * *(b + 175 * OS1_S1 + 26) -
                p_over_q * *(b + 230 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 26) +
                one_over_two_q * *(b + 175 * OS1_S1 + 16);
            *(b + 175 * OS1_S1 + 42) = prefactor_z * *(b + 175 * OS1_S1 + 23) -
                                       p_over_q * *(b + 236 * OS1_S1 + 23);
            *(b + 175 * OS1_S1 + 43) =
                prefactor_y * *(b + 175 * OS1_S1 + 25) -
                p_over_q * *(b + 235 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 25);
            *(b + 175 * OS1_S1 + 44) =
                prefactor_x * *(b + 175 * OS1_S1 + 29) -
                p_over_q * *(b + 230 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 29) +
                one_over_two_q * *(b + 175 * OS1_S1 + 19);
            *(b + 175 * OS1_S1 + 45) =
                prefactor_x * *(b + 175 * OS1_S1 + 30) -
                p_over_q * *(b + 230 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 30);
            *(b + 175 * OS1_S1 + 46) = prefactor_z * *(b + 175 * OS1_S1 + 26) -
                                       p_over_q * *(b + 236 * OS1_S1 + 26);
            *(b + 175 * OS1_S1 + 47) =
                prefactor_x * *(b + 175 * OS1_S1 + 32) -
                p_over_q * *(b + 230 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 32);
            *(b + 175 * OS1_S1 + 48) =
                prefactor_y * *(b + 175 * OS1_S1 + 29) -
                p_over_q * *(b + 235 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 29);
            *(b + 175 * OS1_S1 + 49) =
                prefactor_x * *(b + 175 * OS1_S1 + 34) -
                p_over_q * *(b + 230 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 34);
            *(b + 175 * OS1_S1 + 50) =
                prefactor_y * *(b + 175 * OS1_S1 + 30) -
                p_over_q * *(b + 235 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 175 * OS1_S1 + 16);
            *(b + 175 * OS1_S1 + 51) = prefactor_z * *(b + 175 * OS1_S1 + 30) -
                                       p_over_q * *(b + 236 * OS1_S1 + 30);
            *(b + 175 * OS1_S1 + 52) =
                prefactor_z * *(b + 175 * OS1_S1 + 31) -
                p_over_q * *(b + 236 * OS1_S1 + 31) +
                one_over_two_q * *(b + 175 * OS1_S1 + 16);
            *(b + 175 * OS1_S1 + 53) =
                prefactor_y * *(b + 175 * OS1_S1 + 33) -
                p_over_q * *(b + 235 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 33) +
                one_over_two_q * *(b + 175 * OS1_S1 + 19);
            *(b + 175 * OS1_S1 + 54) =
                prefactor_y * *(b + 175 * OS1_S1 + 34) -
                p_over_q * *(b + 235 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 126 * OS1_S1 + 34);
            *(b + 175 * OS1_S1 + 55) =
                prefactor_z * *(b + 175 * OS1_S1 + 34) -
                p_over_q * *(b + 236 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 175 * OS1_S1 + 19);
            *(b + 176 * OS1_S1 + 35) =
                prefactor_x * *(b + 176 * OS1_S1 + 20) -
                p_over_q * *(b + 231 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 10);
            *(b + 176 * OS1_S1 + 36) =
                prefactor_y * *(b + 176 * OS1_S1 + 20) -
                p_over_q * *(b + 236 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 20);
            *(b + 176 * OS1_S1 + 37) =
                prefactor_z * *(b + 176 * OS1_S1 + 20) -
                p_over_q * *(b + 237 * OS1_S1 + 20) +
                one_over_two_q * *(b + 126 * OS1_S1 + 20);
            *(b + 176 * OS1_S1 + 38) =
                prefactor_y * *(b + 176 * OS1_S1 + 21) -
                p_over_q * *(b + 236 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 21) +
                one_over_two_q * *(b + 176 * OS1_S1 + 10);
            *(b + 176 * OS1_S1 + 39) =
                prefactor_z * *(b + 176 * OS1_S1 + 21) -
                p_over_q * *(b + 237 * OS1_S1 + 21) +
                one_over_two_q * *(b + 126 * OS1_S1 + 21);
            *(b + 176 * OS1_S1 + 40) =
                prefactor_z * *(b + 176 * OS1_S1 + 22) -
                p_over_q * *(b + 237 * OS1_S1 + 22) +
                one_over_two_q * *(b + 126 * OS1_S1 + 22) +
                one_over_two_q * *(b + 176 * OS1_S1 + 10);
            *(b + 176 * OS1_S1 + 41) =
                prefactor_x * *(b + 176 * OS1_S1 + 26) -
                p_over_q * *(b + 231 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 26) +
                one_over_two_q * *(b + 176 * OS1_S1 + 16);
            *(b + 176 * OS1_S1 + 42) =
                prefactor_z * *(b + 176 * OS1_S1 + 23) -
                p_over_q * *(b + 237 * OS1_S1 + 23) +
                one_over_two_q * *(b + 126 * OS1_S1 + 23);
            *(b + 176 * OS1_S1 + 43) =
                prefactor_y * *(b + 176 * OS1_S1 + 25) -
                p_over_q * *(b + 236 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 25);
            *(b + 176 * OS1_S1 + 44) =
                prefactor_x * *(b + 176 * OS1_S1 + 29) -
                p_over_q * *(b + 231 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 29) +
                one_over_two_q * *(b + 176 * OS1_S1 + 19);
            *(b + 176 * OS1_S1 + 45) =
                prefactor_x * *(b + 176 * OS1_S1 + 30) -
                p_over_q * *(b + 231 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 30);
            *(b + 176 * OS1_S1 + 46) =
                prefactor_z * *(b + 176 * OS1_S1 + 26) -
                p_over_q * *(b + 237 * OS1_S1 + 26) +
                one_over_two_q * *(b + 126 * OS1_S1 + 26);
            *(b + 176 * OS1_S1 + 47) =
                prefactor_x * *(b + 176 * OS1_S1 + 32) -
                p_over_q * *(b + 231 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 32);
            *(b + 176 * OS1_S1 + 48) =
                prefactor_y * *(b + 176 * OS1_S1 + 29) -
                p_over_q * *(b + 236 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 29);
            *(b + 176 * OS1_S1 + 49) =
                prefactor_x * *(b + 176 * OS1_S1 + 34) -
                p_over_q * *(b + 231 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 131 * OS1_S1 + 34);
            *(b + 176 * OS1_S1 + 50) =
                prefactor_y * *(b + 176 * OS1_S1 + 30) -
                p_over_q * *(b + 236 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 16);
            *(b + 176 * OS1_S1 + 51) =
                prefactor_z * *(b + 176 * OS1_S1 + 30) -
                p_over_q * *(b + 237 * OS1_S1 + 30) +
                one_over_two_q * *(b + 126 * OS1_S1 + 30);
            *(b + 176 * OS1_S1 + 52) =
                prefactor_z * *(b + 176 * OS1_S1 + 31) -
                p_over_q * *(b + 237 * OS1_S1 + 31) +
                one_over_two_q * *(b + 126 * OS1_S1 + 31) +
                one_over_two_q * *(b + 176 * OS1_S1 + 16);
            *(b + 176 * OS1_S1 + 53) =
                prefactor_y * *(b + 176 * OS1_S1 + 33) -
                p_over_q * *(b + 236 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 33) +
                one_over_two_q * *(b + 176 * OS1_S1 + 19);
            *(b + 176 * OS1_S1 + 54) =
                prefactor_y * *(b + 176 * OS1_S1 + 34) -
                p_over_q * *(b + 236 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 127 * OS1_S1 + 34);
            *(b + 176 * OS1_S1 + 55) =
                prefactor_z * *(b + 176 * OS1_S1 + 34) -
                p_over_q * *(b + 237 * OS1_S1 + 34) +
                one_over_two_q * *(b + 126 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 19);
            *(b + 177 * OS1_S1 + 35) =
                prefactor_x * *(b + 177 * OS1_S1 + 20) -
                p_over_q * *(b + 232 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 177 * OS1_S1 + 10);
            *(b + 177 * OS1_S1 + 36) =
                prefactor_y * *(b + 177 * OS1_S1 + 20) -
                p_over_q * *(b + 237 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 20);
            *(b + 177 * OS1_S1 + 37) =
                prefactor_z * *(b + 177 * OS1_S1 + 20) -
                p_over_q * *(b + 238 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 20);
            *(b + 177 * OS1_S1 + 38) =
                prefactor_y * *(b + 177 * OS1_S1 + 21) -
                p_over_q * *(b + 237 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 21) +
                one_over_two_q * *(b + 177 * OS1_S1 + 10);
            *(b + 177 * OS1_S1 + 39) =
                prefactor_z * *(b + 177 * OS1_S1 + 21) -
                p_over_q * *(b + 238 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 21);
            *(b + 177 * OS1_S1 + 40) =
                prefactor_z * *(b + 177 * OS1_S1 + 22) -
                p_over_q * *(b + 238 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 22) +
                one_over_two_q * *(b + 177 * OS1_S1 + 10);
            *(b + 177 * OS1_S1 + 41) =
                prefactor_x * *(b + 177 * OS1_S1 + 26) -
                p_over_q * *(b + 232 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 26) +
                one_over_two_q * *(b + 177 * OS1_S1 + 16);
            *(b + 177 * OS1_S1 + 42) =
                prefactor_z * *(b + 177 * OS1_S1 + 23) -
                p_over_q * *(b + 238 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 23);
            *(b + 177 * OS1_S1 + 43) =
                prefactor_y * *(b + 177 * OS1_S1 + 25) -
                p_over_q * *(b + 237 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 25);
            *(b + 177 * OS1_S1 + 44) =
                prefactor_x * *(b + 177 * OS1_S1 + 29) -
                p_over_q * *(b + 232 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 29) +
                one_over_two_q * *(b + 177 * OS1_S1 + 19);
            *(b + 177 * OS1_S1 + 45) =
                prefactor_x * *(b + 177 * OS1_S1 + 30) -
                p_over_q * *(b + 232 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 30);
            *(b + 177 * OS1_S1 + 46) =
                prefactor_z * *(b + 177 * OS1_S1 + 26) -
                p_over_q * *(b + 238 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 26);
            *(b + 177 * OS1_S1 + 47) =
                prefactor_x * *(b + 177 * OS1_S1 + 32) -
                p_over_q * *(b + 232 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 32);
            *(b + 177 * OS1_S1 + 48) =
                prefactor_y * *(b + 177 * OS1_S1 + 29) -
                p_over_q * *(b + 237 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 29);
            *(b + 177 * OS1_S1 + 49) =
                prefactor_x * *(b + 177 * OS1_S1 + 34) -
                p_over_q * *(b + 232 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 132 * OS1_S1 + 34);
            *(b + 177 * OS1_S1 + 50) =
                prefactor_y * *(b + 177 * OS1_S1 + 30) -
                p_over_q * *(b + 237 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 177 * OS1_S1 + 16);
            *(b + 177 * OS1_S1 + 51) =
                prefactor_z * *(b + 177 * OS1_S1 + 30) -
                p_over_q * *(b + 238 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 30);
            *(b + 177 * OS1_S1 + 52) =
                prefactor_z * *(b + 177 * OS1_S1 + 31) -
                p_over_q * *(b + 238 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 31) +
                one_over_two_q * *(b + 177 * OS1_S1 + 16);
            *(b + 177 * OS1_S1 + 53) =
                prefactor_y * *(b + 177 * OS1_S1 + 33) -
                p_over_q * *(b + 237 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 33) +
                one_over_two_q * *(b + 177 * OS1_S1 + 19);
            *(b + 177 * OS1_S1 + 54) =
                prefactor_y * *(b + 177 * OS1_S1 + 34) -
                p_over_q * *(b + 237 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 128 * OS1_S1 + 34);
            *(b + 177 * OS1_S1 + 55) =
                prefactor_z * *(b + 177 * OS1_S1 + 34) -
                p_over_q * *(b + 238 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 127 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 177 * OS1_S1 + 19);
            *(b + 178 * OS1_S1 + 35) =
                prefactor_x * *(b + 178 * OS1_S1 + 20) -
                p_over_q * *(b + 233 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 10);
            *(b + 178 * OS1_S1 + 36) =
                prefactor_y * *(b + 178 * OS1_S1 + 20) -
                p_over_q * *(b + 238 * OS1_S1 + 20) +
                one_over_two_q * *(b + 129 * OS1_S1 + 20);
            *(b + 178 * OS1_S1 + 37) =
                prefactor_z * *(b + 178 * OS1_S1 + 20) -
                p_over_q * *(b + 239 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 20);
            *(b + 178 * OS1_S1 + 38) =
                prefactor_y * *(b + 178 * OS1_S1 + 21) -
                p_over_q * *(b + 238 * OS1_S1 + 21) +
                one_over_two_q * *(b + 129 * OS1_S1 + 21) +
                one_over_two_q * *(b + 178 * OS1_S1 + 10);
            *(b + 178 * OS1_S1 + 39) =
                prefactor_y * *(b + 178 * OS1_S1 + 22) -
                p_over_q * *(b + 238 * OS1_S1 + 22) +
                one_over_two_q * *(b + 129 * OS1_S1 + 22);
            *(b + 178 * OS1_S1 + 40) =
                prefactor_z * *(b + 178 * OS1_S1 + 22) -
                p_over_q * *(b + 239 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 22) +
                one_over_two_q * *(b + 178 * OS1_S1 + 10);
            *(b + 178 * OS1_S1 + 41) =
                prefactor_x * *(b + 178 * OS1_S1 + 26) -
                p_over_q * *(b + 233 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 26) +
                one_over_two_q * *(b + 178 * OS1_S1 + 16);
            *(b + 178 * OS1_S1 + 42) =
                prefactor_z * *(b + 178 * OS1_S1 + 23) -
                p_over_q * *(b + 239 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 23);
            *(b + 178 * OS1_S1 + 43) =
                prefactor_y * *(b + 178 * OS1_S1 + 25) -
                p_over_q * *(b + 238 * OS1_S1 + 25) +
                one_over_two_q * *(b + 129 * OS1_S1 + 25);
            *(b + 178 * OS1_S1 + 44) =
                prefactor_x * *(b + 178 * OS1_S1 + 29) -
                p_over_q * *(b + 233 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 29) +
                one_over_two_q * *(b + 178 * OS1_S1 + 19);
            *(b + 178 * OS1_S1 + 45) =
                prefactor_x * *(b + 178 * OS1_S1 + 30) -
                p_over_q * *(b + 233 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 30);
            *(b + 178 * OS1_S1 + 46) =
                prefactor_z * *(b + 178 * OS1_S1 + 26) -
                p_over_q * *(b + 239 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 26);
            *(b + 178 * OS1_S1 + 47) =
                prefactor_x * *(b + 178 * OS1_S1 + 32) -
                p_over_q * *(b + 233 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 32);
            *(b + 178 * OS1_S1 + 48) =
                prefactor_y * *(b + 178 * OS1_S1 + 29) -
                p_over_q * *(b + 238 * OS1_S1 + 29) +
                one_over_two_q * *(b + 129 * OS1_S1 + 29);
            *(b + 178 * OS1_S1 + 49) =
                prefactor_x * *(b + 178 * OS1_S1 + 34) -
                p_over_q * *(b + 233 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 133 * OS1_S1 + 34);
            *(b + 178 * OS1_S1 + 50) =
                prefactor_y * *(b + 178 * OS1_S1 + 30) -
                p_over_q * *(b + 238 * OS1_S1 + 30) +
                one_over_two_q * *(b + 129 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 16);
            *(b + 178 * OS1_S1 + 51) =
                prefactor_z * *(b + 178 * OS1_S1 + 30) -
                p_over_q * *(b + 239 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 30);
            *(b + 178 * OS1_S1 + 52) =
                prefactor_z * *(b + 178 * OS1_S1 + 31) -
                p_over_q * *(b + 239 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 31) +
                one_over_two_q * *(b + 178 * OS1_S1 + 16);
            *(b + 178 * OS1_S1 + 53) =
                prefactor_y * *(b + 178 * OS1_S1 + 33) -
                p_over_q * *(b + 238 * OS1_S1 + 33) +
                one_over_two_q * *(b + 129 * OS1_S1 + 33) +
                one_over_two_q * *(b + 178 * OS1_S1 + 19);
            *(b + 178 * OS1_S1 + 54) =
                prefactor_y * *(b + 178 * OS1_S1 + 34) -
                p_over_q * *(b + 238 * OS1_S1 + 34) +
                one_over_two_q * *(b + 129 * OS1_S1 + 34);
            *(b + 178 * OS1_S1 + 55) =
                prefactor_z * *(b + 178 * OS1_S1 + 34) -
                p_over_q * *(b + 239 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 128 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 19);
            *(b + 179 * OS1_S1 + 35) =
                prefactor_x * *(b + 179 * OS1_S1 + 20) -
                p_over_q * *(b + 234 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 179 * OS1_S1 + 10);
            *(b + 179 * OS1_S1 + 36) = prefactor_y * *(b + 179 * OS1_S1 + 20) -
                                       p_over_q * *(b + 239 * OS1_S1 + 20);
            *(b + 179 * OS1_S1 + 37) =
                prefactor_z * *(b + 179 * OS1_S1 + 20) -
                p_over_q * *(b + 240 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 20);
            *(b + 179 * OS1_S1 + 38) =
                prefactor_y * *(b + 179 * OS1_S1 + 21) -
                p_over_q * *(b + 239 * OS1_S1 + 21) +
                one_over_two_q * *(b + 179 * OS1_S1 + 10);
            *(b + 179 * OS1_S1 + 39) = prefactor_y * *(b + 179 * OS1_S1 + 22) -
                                       p_over_q * *(b + 239 * OS1_S1 + 22);
            *(b + 179 * OS1_S1 + 40) =
                prefactor_z * *(b + 179 * OS1_S1 + 22) -
                p_over_q * *(b + 240 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 22) +
                one_over_two_q * *(b + 179 * OS1_S1 + 10);
            *(b + 179 * OS1_S1 + 41) =
                prefactor_x * *(b + 179 * OS1_S1 + 26) -
                p_over_q * *(b + 234 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 26) +
                one_over_two_q * *(b + 179 * OS1_S1 + 16);
            *(b + 179 * OS1_S1 + 42) =
                prefactor_z * *(b + 179 * OS1_S1 + 23) -
                p_over_q * *(b + 240 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 23);
            *(b + 179 * OS1_S1 + 43) = prefactor_y * *(b + 179 * OS1_S1 + 25) -
                                       p_over_q * *(b + 239 * OS1_S1 + 25);
            *(b + 179 * OS1_S1 + 44) =
                prefactor_x * *(b + 179 * OS1_S1 + 29) -
                p_over_q * *(b + 234 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 29) +
                one_over_two_q * *(b + 179 * OS1_S1 + 19);
            *(b + 179 * OS1_S1 + 45) =
                prefactor_x * *(b + 179 * OS1_S1 + 30) -
                p_over_q * *(b + 234 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 30);
            *(b + 179 * OS1_S1 + 46) =
                prefactor_z * *(b + 179 * OS1_S1 + 26) -
                p_over_q * *(b + 240 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 26);
            *(b + 179 * OS1_S1 + 47) =
                prefactor_x * *(b + 179 * OS1_S1 + 32) -
                p_over_q * *(b + 234 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 32);
            *(b + 179 * OS1_S1 + 48) = prefactor_y * *(b + 179 * OS1_S1 + 29) -
                                       p_over_q * *(b + 239 * OS1_S1 + 29);
            *(b + 179 * OS1_S1 + 49) =
                prefactor_x * *(b + 179 * OS1_S1 + 34) -
                p_over_q * *(b + 234 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 34);
            *(b + 179 * OS1_S1 + 50) =
                prefactor_y * *(b + 179 * OS1_S1 + 30) -
                p_over_q * *(b + 239 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 179 * OS1_S1 + 16);
            *(b + 179 * OS1_S1 + 51) =
                prefactor_z * *(b + 179 * OS1_S1 + 30) -
                p_over_q * *(b + 240 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 30);
            *(b + 179 * OS1_S1 + 52) =
                prefactor_z * *(b + 179 * OS1_S1 + 31) -
                p_over_q * *(b + 240 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 31) +
                one_over_two_q * *(b + 179 * OS1_S1 + 16);
            *(b + 179 * OS1_S1 + 53) =
                prefactor_y * *(b + 179 * OS1_S1 + 33) -
                p_over_q * *(b + 239 * OS1_S1 + 33) +
                one_over_two_q * *(b + 179 * OS1_S1 + 19);
            *(b + 179 * OS1_S1 + 54) = prefactor_y * *(b + 179 * OS1_S1 + 34) -
                                       p_over_q * *(b + 239 * OS1_S1 + 34);
            *(b + 179 * OS1_S1 + 55) =
                prefactor_z * *(b + 179 * OS1_S1 + 34) -
                p_over_q * *(b + 240 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 129 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 179 * OS1_S1 + 19);
            *(b + 180 * OS1_S1 + 35) =
                prefactor_x * *(b + 180 * OS1_S1 + 20) -
                p_over_q * *(b + 235 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 180 * OS1_S1 + 10);
            *(b + 180 * OS1_S1 + 36) =
                prefactor_y * *(b + 180 * OS1_S1 + 20) -
                p_over_q * *(b + 241 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 20);
            *(b + 180 * OS1_S1 + 37) = prefactor_z * *(b + 180 * OS1_S1 + 20) -
                                       p_over_q * *(b + 242 * OS1_S1 + 20);
            *(b + 180 * OS1_S1 + 38) =
                prefactor_y * *(b + 180 * OS1_S1 + 21) -
                p_over_q * *(b + 241 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 21) +
                one_over_two_q * *(b + 180 * OS1_S1 + 10);
            *(b + 180 * OS1_S1 + 39) = prefactor_z * *(b + 180 * OS1_S1 + 21) -
                                       p_over_q * *(b + 242 * OS1_S1 + 21);
            *(b + 180 * OS1_S1 + 40) =
                prefactor_z * *(b + 180 * OS1_S1 + 22) -
                p_over_q * *(b + 242 * OS1_S1 + 22) +
                one_over_two_q * *(b + 180 * OS1_S1 + 10);
            *(b + 180 * OS1_S1 + 41) =
                prefactor_x * *(b + 180 * OS1_S1 + 26) -
                p_over_q * *(b + 235 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 26) +
                one_over_two_q * *(b + 180 * OS1_S1 + 16);
            *(b + 180 * OS1_S1 + 42) = prefactor_z * *(b + 180 * OS1_S1 + 23) -
                                       p_over_q * *(b + 242 * OS1_S1 + 23);
            *(b + 180 * OS1_S1 + 43) =
                prefactor_y * *(b + 180 * OS1_S1 + 25) -
                p_over_q * *(b + 241 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 25);
            *(b + 180 * OS1_S1 + 44) =
                prefactor_x * *(b + 180 * OS1_S1 + 29) -
                p_over_q * *(b + 235 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 29) +
                one_over_two_q * *(b + 180 * OS1_S1 + 19);
            *(b + 180 * OS1_S1 + 45) =
                prefactor_x * *(b + 180 * OS1_S1 + 30) -
                p_over_q * *(b + 235 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 30);
            *(b + 180 * OS1_S1 + 46) = prefactor_z * *(b + 180 * OS1_S1 + 26) -
                                       p_over_q * *(b + 242 * OS1_S1 + 26);
            *(b + 180 * OS1_S1 + 47) =
                prefactor_x * *(b + 180 * OS1_S1 + 32) -
                p_over_q * *(b + 235 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 32);
            *(b + 180 * OS1_S1 + 48) =
                prefactor_x * *(b + 180 * OS1_S1 + 33) -
                p_over_q * *(b + 235 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 33);
            *(b + 180 * OS1_S1 + 49) =
                prefactor_x * *(b + 180 * OS1_S1 + 34) -
                p_over_q * *(b + 235 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 135 * OS1_S1 + 34);
            *(b + 180 * OS1_S1 + 50) =
                prefactor_y * *(b + 180 * OS1_S1 + 30) -
                p_over_q * *(b + 241 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 180 * OS1_S1 + 16);
            *(b + 180 * OS1_S1 + 51) = prefactor_z * *(b + 180 * OS1_S1 + 30) -
                                       p_over_q * *(b + 242 * OS1_S1 + 30);
            *(b + 180 * OS1_S1 + 52) =
                prefactor_z * *(b + 180 * OS1_S1 + 31) -
                p_over_q * *(b + 242 * OS1_S1 + 31) +
                one_over_two_q * *(b + 180 * OS1_S1 + 16);
            *(b + 180 * OS1_S1 + 53) =
                prefactor_y * *(b + 180 * OS1_S1 + 33) -
                p_over_q * *(b + 241 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 33) +
                one_over_two_q * *(b + 180 * OS1_S1 + 19);
            *(b + 180 * OS1_S1 + 54) =
                prefactor_y * *(b + 180 * OS1_S1 + 34) -
                p_over_q * *(b + 241 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 130 * OS1_S1 + 34);
            *(b + 180 * OS1_S1 + 55) =
                prefactor_z * *(b + 180 * OS1_S1 + 34) -
                p_over_q * *(b + 242 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 180 * OS1_S1 + 19);
            *(b + 181 * OS1_S1 + 35) =
                prefactor_x * *(b + 181 * OS1_S1 + 20) -
                p_over_q * *(b + 236 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 181 * OS1_S1 + 10);
            *(b + 181 * OS1_S1 + 36) =
                prefactor_y * *(b + 181 * OS1_S1 + 20) -
                p_over_q * *(b + 242 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 20);
            *(b + 181 * OS1_S1 + 37) =
                prefactor_z * *(b + 181 * OS1_S1 + 20) -
                p_over_q * *(b + 243 * OS1_S1 + 20) +
                one_over_two_q * *(b + 130 * OS1_S1 + 20);
            *(b + 181 * OS1_S1 + 38) =
                prefactor_y * *(b + 181 * OS1_S1 + 21) -
                p_over_q * *(b + 242 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 21) +
                one_over_two_q * *(b + 181 * OS1_S1 + 10);
            *(b + 181 * OS1_S1 + 39) =
                prefactor_z * *(b + 181 * OS1_S1 + 21) -
                p_over_q * *(b + 243 * OS1_S1 + 21) +
                one_over_two_q * *(b + 130 * OS1_S1 + 21);
            *(b + 181 * OS1_S1 + 40) =
                prefactor_z * *(b + 181 * OS1_S1 + 22) -
                p_over_q * *(b + 243 * OS1_S1 + 22) +
                one_over_two_q * *(b + 130 * OS1_S1 + 22) +
                one_over_two_q * *(b + 181 * OS1_S1 + 10);
            *(b + 181 * OS1_S1 + 41) =
                prefactor_x * *(b + 181 * OS1_S1 + 26) -
                p_over_q * *(b + 236 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 26) +
                one_over_two_q * *(b + 181 * OS1_S1 + 16);
            *(b + 181 * OS1_S1 + 42) =
                prefactor_z * *(b + 181 * OS1_S1 + 23) -
                p_over_q * *(b + 243 * OS1_S1 + 23) +
                one_over_two_q * *(b + 130 * OS1_S1 + 23);
            *(b + 181 * OS1_S1 + 43) =
                prefactor_y * *(b + 181 * OS1_S1 + 25) -
                p_over_q * *(b + 242 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 25);
            *(b + 181 * OS1_S1 + 44) =
                prefactor_x * *(b + 181 * OS1_S1 + 29) -
                p_over_q * *(b + 236 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 29) +
                one_over_two_q * *(b + 181 * OS1_S1 + 19);
            *(b + 181 * OS1_S1 + 45) =
                prefactor_x * *(b + 181 * OS1_S1 + 30) -
                p_over_q * *(b + 236 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 30);
            *(b + 181 * OS1_S1 + 46) =
                prefactor_z * *(b + 181 * OS1_S1 + 26) -
                p_over_q * *(b + 243 * OS1_S1 + 26) +
                one_over_two_q * *(b + 130 * OS1_S1 + 26);
            *(b + 181 * OS1_S1 + 47) =
                prefactor_x * *(b + 181 * OS1_S1 + 32) -
                p_over_q * *(b + 236 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 32);
            *(b + 181 * OS1_S1 + 48) =
                prefactor_y * *(b + 181 * OS1_S1 + 29) -
                p_over_q * *(b + 242 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 29);
            *(b + 181 * OS1_S1 + 49) =
                prefactor_x * *(b + 181 * OS1_S1 + 34) -
                p_over_q * *(b + 236 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 136 * OS1_S1 + 34);
            *(b + 181 * OS1_S1 + 50) =
                prefactor_y * *(b + 181 * OS1_S1 + 30) -
                p_over_q * *(b + 242 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 181 * OS1_S1 + 16);
            *(b + 181 * OS1_S1 + 51) =
                prefactor_z * *(b + 181 * OS1_S1 + 30) -
                p_over_q * *(b + 243 * OS1_S1 + 30) +
                one_over_two_q * *(b + 130 * OS1_S1 + 30);
            *(b + 181 * OS1_S1 + 52) =
                prefactor_z * *(b + 181 * OS1_S1 + 31) -
                p_over_q * *(b + 243 * OS1_S1 + 31) +
                one_over_two_q * *(b + 130 * OS1_S1 + 31) +
                one_over_two_q * *(b + 181 * OS1_S1 + 16);
            *(b + 181 * OS1_S1 + 53) =
                prefactor_y * *(b + 181 * OS1_S1 + 33) -
                p_over_q * *(b + 242 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 33) +
                one_over_two_q * *(b + 181 * OS1_S1 + 19);
            *(b + 181 * OS1_S1 + 54) =
                prefactor_y * *(b + 181 * OS1_S1 + 34) -
                p_over_q * *(b + 242 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 131 * OS1_S1 + 34);
            *(b + 181 * OS1_S1 + 55) =
                prefactor_z * *(b + 181 * OS1_S1 + 34) -
                p_over_q * *(b + 243 * OS1_S1 + 34) +
                one_over_two_q * *(b + 130 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 181 * OS1_S1 + 19);
            *(b + 182 * OS1_S1 + 35) =
                prefactor_x * *(b + 182 * OS1_S1 + 20) -
                p_over_q * *(b + 237 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 10);
            *(b + 182 * OS1_S1 + 36) =
                prefactor_y * *(b + 182 * OS1_S1 + 20) -
                p_over_q * *(b + 243 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 20);
            *(b + 182 * OS1_S1 + 37) =
                prefactor_z * *(b + 182 * OS1_S1 + 20) -
                p_over_q * *(b + 244 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 20);
            *(b + 182 * OS1_S1 + 38) =
                prefactor_y * *(b + 182 * OS1_S1 + 21) -
                p_over_q * *(b + 243 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 21) +
                one_over_two_q * *(b + 182 * OS1_S1 + 10);
            *(b + 182 * OS1_S1 + 39) =
                prefactor_z * *(b + 182 * OS1_S1 + 21) -
                p_over_q * *(b + 244 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 21);
            *(b + 182 * OS1_S1 + 40) =
                prefactor_z * *(b + 182 * OS1_S1 + 22) -
                p_over_q * *(b + 244 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 22) +
                one_over_two_q * *(b + 182 * OS1_S1 + 10);
            *(b + 182 * OS1_S1 + 41) =
                prefactor_x * *(b + 182 * OS1_S1 + 26) -
                p_over_q * *(b + 237 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 26) +
                one_over_two_q * *(b + 182 * OS1_S1 + 16);
            *(b + 182 * OS1_S1 + 42) =
                prefactor_z * *(b + 182 * OS1_S1 + 23) -
                p_over_q * *(b + 244 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 23);
            *(b + 182 * OS1_S1 + 43) =
                prefactor_y * *(b + 182 * OS1_S1 + 25) -
                p_over_q * *(b + 243 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 25);
            *(b + 182 * OS1_S1 + 44) =
                prefactor_x * *(b + 182 * OS1_S1 + 29) -
                p_over_q * *(b + 237 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 29) +
                one_over_two_q * *(b + 182 * OS1_S1 + 19);
            *(b + 182 * OS1_S1 + 45) =
                prefactor_x * *(b + 182 * OS1_S1 + 30) -
                p_over_q * *(b + 237 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 30);
            *(b + 182 * OS1_S1 + 46) =
                prefactor_z * *(b + 182 * OS1_S1 + 26) -
                p_over_q * *(b + 244 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 26);
            *(b + 182 * OS1_S1 + 47) =
                prefactor_x * *(b + 182 * OS1_S1 + 32) -
                p_over_q * *(b + 237 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 32);
            *(b + 182 * OS1_S1 + 48) =
                prefactor_y * *(b + 182 * OS1_S1 + 29) -
                p_over_q * *(b + 243 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 29);
            *(b + 182 * OS1_S1 + 49) =
                prefactor_x * *(b + 182 * OS1_S1 + 34) -
                p_over_q * *(b + 237 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 34);
            *(b + 182 * OS1_S1 + 50) =
                prefactor_y * *(b + 182 * OS1_S1 + 30) -
                p_over_q * *(b + 243 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 16);
            *(b + 182 * OS1_S1 + 51) =
                prefactor_z * *(b + 182 * OS1_S1 + 30) -
                p_over_q * *(b + 244 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 30);
            *(b + 182 * OS1_S1 + 52) =
                prefactor_z * *(b + 182 * OS1_S1 + 31) -
                p_over_q * *(b + 244 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 31) +
                one_over_two_q * *(b + 182 * OS1_S1 + 16);
            *(b + 182 * OS1_S1 + 53) =
                prefactor_y * *(b + 182 * OS1_S1 + 33) -
                p_over_q * *(b + 243 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 33) +
                one_over_two_q * *(b + 182 * OS1_S1 + 19);
            *(b + 182 * OS1_S1 + 54) =
                prefactor_y * *(b + 182 * OS1_S1 + 34) -
                p_over_q * *(b + 243 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 34);
            *(b + 182 * OS1_S1 + 55) =
                prefactor_z * *(b + 182 * OS1_S1 + 34) -
                p_over_q * *(b + 244 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 131 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 19);
            *(b + 183 * OS1_S1 + 35) =
                prefactor_x * *(b + 183 * OS1_S1 + 20) -
                p_over_q * *(b + 238 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 10);
            *(b + 183 * OS1_S1 + 36) =
                prefactor_y * *(b + 183 * OS1_S1 + 20) -
                p_over_q * *(b + 244 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 20);
            *(b + 183 * OS1_S1 + 37) =
                prefactor_z * *(b + 183 * OS1_S1 + 20) -
                p_over_q * *(b + 245 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 20);
            *(b + 183 * OS1_S1 + 38) =
                prefactor_y * *(b + 183 * OS1_S1 + 21) -
                p_over_q * *(b + 244 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 21) +
                one_over_two_q * *(b + 183 * OS1_S1 + 10);
            *(b + 183 * OS1_S1 + 39) =
                prefactor_y * *(b + 183 * OS1_S1 + 22) -
                p_over_q * *(b + 244 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 22);
            *(b + 183 * OS1_S1 + 40) =
                prefactor_z * *(b + 183 * OS1_S1 + 22) -
                p_over_q * *(b + 245 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 22) +
                one_over_two_q * *(b + 183 * OS1_S1 + 10);
            *(b + 183 * OS1_S1 + 41) =
                prefactor_x * *(b + 183 * OS1_S1 + 26) -
                p_over_q * *(b + 238 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 26) +
                one_over_two_q * *(b + 183 * OS1_S1 + 16);
            *(b + 183 * OS1_S1 + 42) =
                prefactor_z * *(b + 183 * OS1_S1 + 23) -
                p_over_q * *(b + 245 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 23);
            *(b + 183 * OS1_S1 + 43) =
                prefactor_y * *(b + 183 * OS1_S1 + 25) -
                p_over_q * *(b + 244 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 25);
            *(b + 183 * OS1_S1 + 44) =
                prefactor_x * *(b + 183 * OS1_S1 + 29) -
                p_over_q * *(b + 238 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 29) +
                one_over_two_q * *(b + 183 * OS1_S1 + 19);
            *(b + 183 * OS1_S1 + 45) =
                prefactor_x * *(b + 183 * OS1_S1 + 30) -
                p_over_q * *(b + 238 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 30);
            *(b + 183 * OS1_S1 + 46) =
                prefactor_z * *(b + 183 * OS1_S1 + 26) -
                p_over_q * *(b + 245 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 26);
            *(b + 183 * OS1_S1 + 47) =
                prefactor_x * *(b + 183 * OS1_S1 + 32) -
                p_over_q * *(b + 238 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 32);
            *(b + 183 * OS1_S1 + 48) =
                prefactor_y * *(b + 183 * OS1_S1 + 29) -
                p_over_q * *(b + 244 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 29);
            *(b + 183 * OS1_S1 + 49) =
                prefactor_x * *(b + 183 * OS1_S1 + 34) -
                p_over_q * *(b + 238 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 34);
            *(b + 183 * OS1_S1 + 50) =
                prefactor_y * *(b + 183 * OS1_S1 + 30) -
                p_over_q * *(b + 244 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 16);
            *(b + 183 * OS1_S1 + 51) =
                prefactor_z * *(b + 183 * OS1_S1 + 30) -
                p_over_q * *(b + 245 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 30);
            *(b + 183 * OS1_S1 + 52) =
                prefactor_z * *(b + 183 * OS1_S1 + 31) -
                p_over_q * *(b + 245 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 31) +
                one_over_two_q * *(b + 183 * OS1_S1 + 16);
            *(b + 183 * OS1_S1 + 53) =
                prefactor_y * *(b + 183 * OS1_S1 + 33) -
                p_over_q * *(b + 244 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 33) +
                one_over_two_q * *(b + 183 * OS1_S1 + 19);
            *(b + 183 * OS1_S1 + 54) =
                prefactor_y * *(b + 183 * OS1_S1 + 34) -
                p_over_q * *(b + 244 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 133 * OS1_S1 + 34);
            *(b + 183 * OS1_S1 + 55) =
                prefactor_z * *(b + 183 * OS1_S1 + 34) -
                p_over_q * *(b + 245 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 132 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 19);
            *(b + 184 * OS1_S1 + 35) =
                prefactor_x * *(b + 184 * OS1_S1 + 20) -
                p_over_q * *(b + 239 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 184 * OS1_S1 + 10);
            *(b + 184 * OS1_S1 + 36) =
                prefactor_y * *(b + 184 * OS1_S1 + 20) -
                p_over_q * *(b + 245 * OS1_S1 + 20) +
                one_over_two_q * *(b + 134 * OS1_S1 + 20);
            *(b + 184 * OS1_S1 + 37) =
                prefactor_z * *(b + 184 * OS1_S1 + 20) -
                p_over_q * *(b + 246 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 20);
            *(b + 184 * OS1_S1 + 38) =
                prefactor_y * *(b + 184 * OS1_S1 + 21) -
                p_over_q * *(b + 245 * OS1_S1 + 21) +
                one_over_two_q * *(b + 134 * OS1_S1 + 21) +
                one_over_two_q * *(b + 184 * OS1_S1 + 10);
            *(b + 184 * OS1_S1 + 39) =
                prefactor_y * *(b + 184 * OS1_S1 + 22) -
                p_over_q * *(b + 245 * OS1_S1 + 22) +
                one_over_two_q * *(b + 134 * OS1_S1 + 22);
            *(b + 184 * OS1_S1 + 40) =
                prefactor_z * *(b + 184 * OS1_S1 + 22) -
                p_over_q * *(b + 246 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 22) +
                one_over_two_q * *(b + 184 * OS1_S1 + 10);
            *(b + 184 * OS1_S1 + 41) =
                prefactor_x * *(b + 184 * OS1_S1 + 26) -
                p_over_q * *(b + 239 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 26) +
                one_over_two_q * *(b + 184 * OS1_S1 + 16);
            *(b + 184 * OS1_S1 + 42) =
                prefactor_z * *(b + 184 * OS1_S1 + 23) -
                p_over_q * *(b + 246 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 23);
            *(b + 184 * OS1_S1 + 43) =
                prefactor_y * *(b + 184 * OS1_S1 + 25) -
                p_over_q * *(b + 245 * OS1_S1 + 25) +
                one_over_two_q * *(b + 134 * OS1_S1 + 25);
            *(b + 184 * OS1_S1 + 44) =
                prefactor_x * *(b + 184 * OS1_S1 + 29) -
                p_over_q * *(b + 239 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 29) +
                one_over_two_q * *(b + 184 * OS1_S1 + 19);
            *(b + 184 * OS1_S1 + 45) =
                prefactor_x * *(b + 184 * OS1_S1 + 30) -
                p_over_q * *(b + 239 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 30);
            *(b + 184 * OS1_S1 + 46) =
                prefactor_z * *(b + 184 * OS1_S1 + 26) -
                p_over_q * *(b + 246 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 26);
            *(b + 184 * OS1_S1 + 47) =
                prefactor_x * *(b + 184 * OS1_S1 + 32) -
                p_over_q * *(b + 239 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 32);
            *(b + 184 * OS1_S1 + 48) =
                prefactor_y * *(b + 184 * OS1_S1 + 29) -
                p_over_q * *(b + 245 * OS1_S1 + 29) +
                one_over_two_q * *(b + 134 * OS1_S1 + 29);
            *(b + 184 * OS1_S1 + 49) =
                prefactor_x * *(b + 184 * OS1_S1 + 34) -
                p_over_q * *(b + 239 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 139 * OS1_S1 + 34);
            *(b + 184 * OS1_S1 + 50) =
                prefactor_y * *(b + 184 * OS1_S1 + 30) -
                p_over_q * *(b + 245 * OS1_S1 + 30) +
                one_over_two_q * *(b + 134 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 184 * OS1_S1 + 16);
            *(b + 184 * OS1_S1 + 51) =
                prefactor_z * *(b + 184 * OS1_S1 + 30) -
                p_over_q * *(b + 246 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 30);
            *(b + 184 * OS1_S1 + 52) =
                prefactor_z * *(b + 184 * OS1_S1 + 31) -
                p_over_q * *(b + 246 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 31) +
                one_over_two_q * *(b + 184 * OS1_S1 + 16);
            *(b + 184 * OS1_S1 + 53) =
                prefactor_y * *(b + 184 * OS1_S1 + 33) -
                p_over_q * *(b + 245 * OS1_S1 + 33) +
                one_over_two_q * *(b + 134 * OS1_S1 + 33) +
                one_over_two_q * *(b + 184 * OS1_S1 + 19);
            *(b + 184 * OS1_S1 + 54) =
                prefactor_y * *(b + 184 * OS1_S1 + 34) -
                p_over_q * *(b + 245 * OS1_S1 + 34) +
                one_over_two_q * *(b + 134 * OS1_S1 + 34);
            *(b + 184 * OS1_S1 + 55) =
                prefactor_z * *(b + 184 * OS1_S1 + 34) -
                p_over_q * *(b + 246 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 133 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 184 * OS1_S1 + 19);
            *(b + 185 * OS1_S1 + 35) =
                prefactor_x * *(b + 185 * OS1_S1 + 20) -
                p_over_q * *(b + 240 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 185 * OS1_S1 + 10);
            *(b + 185 * OS1_S1 + 36) = prefactor_y * *(b + 185 * OS1_S1 + 20) -
                                       p_over_q * *(b + 246 * OS1_S1 + 20);
            *(b + 185 * OS1_S1 + 37) =
                prefactor_z * *(b + 185 * OS1_S1 + 20) -
                p_over_q * *(b + 247 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 20);
            *(b + 185 * OS1_S1 + 38) =
                prefactor_y * *(b + 185 * OS1_S1 + 21) -
                p_over_q * *(b + 246 * OS1_S1 + 21) +
                one_over_two_q * *(b + 185 * OS1_S1 + 10);
            *(b + 185 * OS1_S1 + 39) = prefactor_y * *(b + 185 * OS1_S1 + 22) -
                                       p_over_q * *(b + 246 * OS1_S1 + 22);
            *(b + 185 * OS1_S1 + 40) =
                prefactor_z * *(b + 185 * OS1_S1 + 22) -
                p_over_q * *(b + 247 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 22) +
                one_over_two_q * *(b + 185 * OS1_S1 + 10);
            *(b + 185 * OS1_S1 + 41) =
                prefactor_x * *(b + 185 * OS1_S1 + 26) -
                p_over_q * *(b + 240 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 26) +
                one_over_two_q * *(b + 185 * OS1_S1 + 16);
            *(b + 185 * OS1_S1 + 42) =
                prefactor_z * *(b + 185 * OS1_S1 + 23) -
                p_over_q * *(b + 247 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 23);
            *(b + 185 * OS1_S1 + 43) = prefactor_y * *(b + 185 * OS1_S1 + 25) -
                                       p_over_q * *(b + 246 * OS1_S1 + 25);
            *(b + 185 * OS1_S1 + 44) =
                prefactor_x * *(b + 185 * OS1_S1 + 29) -
                p_over_q * *(b + 240 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 29) +
                one_over_two_q * *(b + 185 * OS1_S1 + 19);
            *(b + 185 * OS1_S1 + 45) =
                prefactor_x * *(b + 185 * OS1_S1 + 30) -
                p_over_q * *(b + 240 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 30);
            *(b + 185 * OS1_S1 + 46) =
                prefactor_x * *(b + 185 * OS1_S1 + 31) -
                p_over_q * *(b + 240 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 31);
            *(b + 185 * OS1_S1 + 47) =
                prefactor_x * *(b + 185 * OS1_S1 + 32) -
                p_over_q * *(b + 240 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 32);
            *(b + 185 * OS1_S1 + 48) = prefactor_y * *(b + 185 * OS1_S1 + 29) -
                                       p_over_q * *(b + 246 * OS1_S1 + 29);
            *(b + 185 * OS1_S1 + 49) =
                prefactor_x * *(b + 185 * OS1_S1 + 34) -
                p_over_q * *(b + 240 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 140 * OS1_S1 + 34);
            *(b + 185 * OS1_S1 + 50) =
                prefactor_y * *(b + 185 * OS1_S1 + 30) -
                p_over_q * *(b + 246 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 185 * OS1_S1 + 16);
            *(b + 185 * OS1_S1 + 51) =
                prefactor_z * *(b + 185 * OS1_S1 + 30) -
                p_over_q * *(b + 247 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 30);
            *(b + 185 * OS1_S1 + 52) =
                prefactor_z * *(b + 185 * OS1_S1 + 31) -
                p_over_q * *(b + 247 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 31) +
                one_over_two_q * *(b + 185 * OS1_S1 + 16);
            *(b + 185 * OS1_S1 + 53) =
                prefactor_y * *(b + 185 * OS1_S1 + 33) -
                p_over_q * *(b + 246 * OS1_S1 + 33) +
                one_over_two_q * *(b + 185 * OS1_S1 + 19);
            *(b + 185 * OS1_S1 + 54) = prefactor_y * *(b + 185 * OS1_S1 + 34) -
                                       p_over_q * *(b + 246 * OS1_S1 + 34);
            *(b + 185 * OS1_S1 + 55) =
                prefactor_z * *(b + 185 * OS1_S1 + 34) -
                p_over_q * *(b + 247 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 134 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 185 * OS1_S1 + 19);
            *(b + 186 * OS1_S1 + 35) =
                prefactor_x * *(b + 186 * OS1_S1 + 20) -
                p_over_q * *(b + 241 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 10);
            *(b + 186 * OS1_S1 + 36) =
                prefactor_y * *(b + 186 * OS1_S1 + 20) -
                p_over_q * *(b + 248 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 20);
            *(b + 186 * OS1_S1 + 37) = prefactor_z * *(b + 186 * OS1_S1 + 20) -
                                       p_over_q * *(b + 249 * OS1_S1 + 20);
            *(b + 186 * OS1_S1 + 38) =
                prefactor_y * *(b + 186 * OS1_S1 + 21) -
                p_over_q * *(b + 248 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 21) +
                one_over_two_q * *(b + 186 * OS1_S1 + 10);
            *(b + 186 * OS1_S1 + 39) = prefactor_z * *(b + 186 * OS1_S1 + 21) -
                                       p_over_q * *(b + 249 * OS1_S1 + 21);
            *(b + 186 * OS1_S1 + 40) =
                prefactor_z * *(b + 186 * OS1_S1 + 22) -
                p_over_q * *(b + 249 * OS1_S1 + 22) +
                one_over_two_q * *(b + 186 * OS1_S1 + 10);
            *(b + 186 * OS1_S1 + 41) =
                prefactor_x * *(b + 186 * OS1_S1 + 26) -
                p_over_q * *(b + 241 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 26) +
                one_over_two_q * *(b + 186 * OS1_S1 + 16);
            *(b + 186 * OS1_S1 + 42) = prefactor_z * *(b + 186 * OS1_S1 + 23) -
                                       p_over_q * *(b + 249 * OS1_S1 + 23);
            *(b + 186 * OS1_S1 + 43) =
                prefactor_y * *(b + 186 * OS1_S1 + 25) -
                p_over_q * *(b + 248 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 25);
            *(b + 186 * OS1_S1 + 44) =
                prefactor_x * *(b + 186 * OS1_S1 + 29) -
                p_over_q * *(b + 241 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 29) +
                one_over_two_q * *(b + 186 * OS1_S1 + 19);
            *(b + 186 * OS1_S1 + 45) =
                prefactor_x * *(b + 186 * OS1_S1 + 30) -
                p_over_q * *(b + 241 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 30);
            *(b + 186 * OS1_S1 + 46) = prefactor_z * *(b + 186 * OS1_S1 + 26) -
                                       p_over_q * *(b + 249 * OS1_S1 + 26);
            *(b + 186 * OS1_S1 + 47) =
                prefactor_x * *(b + 186 * OS1_S1 + 32) -
                p_over_q * *(b + 241 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 32);
            *(b + 186 * OS1_S1 + 48) =
                prefactor_x * *(b + 186 * OS1_S1 + 33) -
                p_over_q * *(b + 241 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 33);
            *(b + 186 * OS1_S1 + 49) =
                prefactor_x * *(b + 186 * OS1_S1 + 34) -
                p_over_q * *(b + 241 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 141 * OS1_S1 + 34);
            *(b + 186 * OS1_S1 + 50) =
                prefactor_y * *(b + 186 * OS1_S1 + 30) -
                p_over_q * *(b + 248 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 16);
            *(b + 186 * OS1_S1 + 51) = prefactor_z * *(b + 186 * OS1_S1 + 30) -
                                       p_over_q * *(b + 249 * OS1_S1 + 30);
            *(b + 186 * OS1_S1 + 52) =
                prefactor_z * *(b + 186 * OS1_S1 + 31) -
                p_over_q * *(b + 249 * OS1_S1 + 31) +
                one_over_two_q * *(b + 186 * OS1_S1 + 16);
            *(b + 186 * OS1_S1 + 53) =
                prefactor_y * *(b + 186 * OS1_S1 + 33) -
                p_over_q * *(b + 248 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 33) +
                one_over_two_q * *(b + 186 * OS1_S1 + 19);
            *(b + 186 * OS1_S1 + 54) =
                prefactor_y * *(b + 186 * OS1_S1 + 34) -
                p_over_q * *(b + 248 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 135 * OS1_S1 + 34);
            *(b + 186 * OS1_S1 + 55) =
                prefactor_z * *(b + 186 * OS1_S1 + 34) -
                p_over_q * *(b + 249 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 19);
            *(b + 187 * OS1_S1 + 35) =
                prefactor_x * *(b + 187 * OS1_S1 + 20) -
                p_over_q * *(b + 242 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 10);
            *(b + 187 * OS1_S1 + 36) =
                prefactor_y * *(b + 187 * OS1_S1 + 20) -
                p_over_q * *(b + 249 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 20);
            *(b + 187 * OS1_S1 + 37) =
                prefactor_z * *(b + 187 * OS1_S1 + 20) -
                p_over_q * *(b + 250 * OS1_S1 + 20) +
                one_over_two_q * *(b + 135 * OS1_S1 + 20);
            *(b + 187 * OS1_S1 + 38) =
                prefactor_y * *(b + 187 * OS1_S1 + 21) -
                p_over_q * *(b + 249 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 21) +
                one_over_two_q * *(b + 187 * OS1_S1 + 10);
            *(b + 187 * OS1_S1 + 39) =
                prefactor_z * *(b + 187 * OS1_S1 + 21) -
                p_over_q * *(b + 250 * OS1_S1 + 21) +
                one_over_two_q * *(b + 135 * OS1_S1 + 21);
            *(b + 187 * OS1_S1 + 40) =
                prefactor_z * *(b + 187 * OS1_S1 + 22) -
                p_over_q * *(b + 250 * OS1_S1 + 22) +
                one_over_two_q * *(b + 135 * OS1_S1 + 22) +
                one_over_two_q * *(b + 187 * OS1_S1 + 10);
            *(b + 187 * OS1_S1 + 41) =
                prefactor_x * *(b + 187 * OS1_S1 + 26) -
                p_over_q * *(b + 242 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 26) +
                one_over_two_q * *(b + 187 * OS1_S1 + 16);
            *(b + 187 * OS1_S1 + 42) =
                prefactor_z * *(b + 187 * OS1_S1 + 23) -
                p_over_q * *(b + 250 * OS1_S1 + 23) +
                one_over_two_q * *(b + 135 * OS1_S1 + 23);
            *(b + 187 * OS1_S1 + 43) =
                prefactor_y * *(b + 187 * OS1_S1 + 25) -
                p_over_q * *(b + 249 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 25);
            *(b + 187 * OS1_S1 + 44) =
                prefactor_x * *(b + 187 * OS1_S1 + 29) -
                p_over_q * *(b + 242 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 29) +
                one_over_two_q * *(b + 187 * OS1_S1 + 19);
            *(b + 187 * OS1_S1 + 45) =
                prefactor_x * *(b + 187 * OS1_S1 + 30) -
                p_over_q * *(b + 242 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 30);
            *(b + 187 * OS1_S1 + 46) =
                prefactor_z * *(b + 187 * OS1_S1 + 26) -
                p_over_q * *(b + 250 * OS1_S1 + 26) +
                one_over_two_q * *(b + 135 * OS1_S1 + 26);
            *(b + 187 * OS1_S1 + 47) =
                prefactor_x * *(b + 187 * OS1_S1 + 32) -
                p_over_q * *(b + 242 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 32);
            *(b + 187 * OS1_S1 + 48) =
                prefactor_x * *(b + 187 * OS1_S1 + 33) -
                p_over_q * *(b + 242 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 33);
            *(b + 187 * OS1_S1 + 49) =
                prefactor_x * *(b + 187 * OS1_S1 + 34) -
                p_over_q * *(b + 242 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 142 * OS1_S1 + 34);
            *(b + 187 * OS1_S1 + 50) =
                prefactor_y * *(b + 187 * OS1_S1 + 30) -
                p_over_q * *(b + 249 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 16);
            *(b + 187 * OS1_S1 + 51) =
                prefactor_z * *(b + 187 * OS1_S1 + 30) -
                p_over_q * *(b + 250 * OS1_S1 + 30) +
                one_over_two_q * *(b + 135 * OS1_S1 + 30);
            *(b + 187 * OS1_S1 + 52) =
                prefactor_z * *(b + 187 * OS1_S1 + 31) -
                p_over_q * *(b + 250 * OS1_S1 + 31) +
                one_over_two_q * *(b + 135 * OS1_S1 + 31) +
                one_over_two_q * *(b + 187 * OS1_S1 + 16);
            *(b + 187 * OS1_S1 + 53) =
                prefactor_y * *(b + 187 * OS1_S1 + 33) -
                p_over_q * *(b + 249 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 33) +
                one_over_two_q * *(b + 187 * OS1_S1 + 19);
            *(b + 187 * OS1_S1 + 54) =
                prefactor_y * *(b + 187 * OS1_S1 + 34) -
                p_over_q * *(b + 249 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 136 * OS1_S1 + 34);
            *(b + 187 * OS1_S1 + 55) =
                prefactor_z * *(b + 187 * OS1_S1 + 34) -
                p_over_q * *(b + 250 * OS1_S1 + 34) +
                one_over_two_q * *(b + 135 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 19);
            *(b + 188 * OS1_S1 + 35) =
                prefactor_x * *(b + 188 * OS1_S1 + 20) -
                p_over_q * *(b + 243 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 10);
            *(b + 188 * OS1_S1 + 36) =
                prefactor_y * *(b + 188 * OS1_S1 + 20) -
                p_over_q * *(b + 250 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 20);
            *(b + 188 * OS1_S1 + 37) =
                prefactor_z * *(b + 188 * OS1_S1 + 20) -
                p_over_q * *(b + 251 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 20);
            *(b + 188 * OS1_S1 + 38) =
                prefactor_y * *(b + 188 * OS1_S1 + 21) -
                p_over_q * *(b + 250 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 21) +
                one_over_two_q * *(b + 188 * OS1_S1 + 10);
            *(b + 188 * OS1_S1 + 39) =
                prefactor_z * *(b + 188 * OS1_S1 + 21) -
                p_over_q * *(b + 251 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 21);
            *(b + 188 * OS1_S1 + 40) =
                prefactor_z * *(b + 188 * OS1_S1 + 22) -
                p_over_q * *(b + 251 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 22) +
                one_over_two_q * *(b + 188 * OS1_S1 + 10);
            *(b + 188 * OS1_S1 + 41) =
                prefactor_x * *(b + 188 * OS1_S1 + 26) -
                p_over_q * *(b + 243 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 26) +
                one_over_two_q * *(b + 188 * OS1_S1 + 16);
            *(b + 188 * OS1_S1 + 42) =
                prefactor_z * *(b + 188 * OS1_S1 + 23) -
                p_over_q * *(b + 251 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 23);
            *(b + 188 * OS1_S1 + 43) =
                prefactor_y * *(b + 188 * OS1_S1 + 25) -
                p_over_q * *(b + 250 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 25);
            *(b + 188 * OS1_S1 + 44) =
                prefactor_x * *(b + 188 * OS1_S1 + 29) -
                p_over_q * *(b + 243 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 29) +
                one_over_two_q * *(b + 188 * OS1_S1 + 19);
            *(b + 188 * OS1_S1 + 45) =
                prefactor_x * *(b + 188 * OS1_S1 + 30) -
                p_over_q * *(b + 243 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 30);
            *(b + 188 * OS1_S1 + 46) =
                prefactor_z * *(b + 188 * OS1_S1 + 26) -
                p_over_q * *(b + 251 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 26);
            *(b + 188 * OS1_S1 + 47) =
                prefactor_x * *(b + 188 * OS1_S1 + 32) -
                p_over_q * *(b + 243 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 32);
            *(b + 188 * OS1_S1 + 48) =
                prefactor_x * *(b + 188 * OS1_S1 + 33) -
                p_over_q * *(b + 243 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 33);
            *(b + 188 * OS1_S1 + 49) =
                prefactor_x * *(b + 188 * OS1_S1 + 34) -
                p_over_q * *(b + 243 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 34);
            *(b + 188 * OS1_S1 + 50) =
                prefactor_y * *(b + 188 * OS1_S1 + 30) -
                p_over_q * *(b + 250 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 16);
            *(b + 188 * OS1_S1 + 51) =
                prefactor_z * *(b + 188 * OS1_S1 + 30) -
                p_over_q * *(b + 251 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 30);
            *(b + 188 * OS1_S1 + 52) =
                prefactor_z * *(b + 188 * OS1_S1 + 31) -
                p_over_q * *(b + 251 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 31) +
                one_over_two_q * *(b + 188 * OS1_S1 + 16);
            *(b + 188 * OS1_S1 + 53) =
                prefactor_y * *(b + 188 * OS1_S1 + 33) -
                p_over_q * *(b + 250 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 33) +
                one_over_two_q * *(b + 188 * OS1_S1 + 19);
            *(b + 188 * OS1_S1 + 54) =
                prefactor_y * *(b + 188 * OS1_S1 + 34) -
                p_over_q * *(b + 250 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 137 * OS1_S1 + 34);
            *(b + 188 * OS1_S1 + 55) =
                prefactor_z * *(b + 188 * OS1_S1 + 34) -
                p_over_q * *(b + 251 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 136 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 19);
            *(b + 189 * OS1_S1 + 35) =
                prefactor_x * *(b + 189 * OS1_S1 + 20) -
                p_over_q * *(b + 244 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 10);
            *(b + 189 * OS1_S1 + 36) =
                prefactor_y * *(b + 189 * OS1_S1 + 20) -
                p_over_q * *(b + 251 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 20);
            *(b + 189 * OS1_S1 + 37) =
                prefactor_z * *(b + 189 * OS1_S1 + 20) -
                p_over_q * *(b + 252 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 20);
            *(b + 189 * OS1_S1 + 38) =
                prefactor_y * *(b + 189 * OS1_S1 + 21) -
                p_over_q * *(b + 251 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 21) +
                one_over_two_q * *(b + 189 * OS1_S1 + 10);
            *(b + 189 * OS1_S1 + 39) =
                prefactor_z * *(b + 189 * OS1_S1 + 21) -
                p_over_q * *(b + 252 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 21);
            *(b + 189 * OS1_S1 + 40) =
                prefactor_z * *(b + 189 * OS1_S1 + 22) -
                p_over_q * *(b + 252 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 22) +
                one_over_two_q * *(b + 189 * OS1_S1 + 10);
            *(b + 189 * OS1_S1 + 41) =
                prefactor_x * *(b + 189 * OS1_S1 + 26) -
                p_over_q * *(b + 244 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 26) +
                one_over_two_q * *(b + 189 * OS1_S1 + 16);
            *(b + 189 * OS1_S1 + 42) =
                prefactor_z * *(b + 189 * OS1_S1 + 23) -
                p_over_q * *(b + 252 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 23);
            *(b + 189 * OS1_S1 + 43) =
                prefactor_y * *(b + 189 * OS1_S1 + 25) -
                p_over_q * *(b + 251 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 25);
            *(b + 189 * OS1_S1 + 44) =
                prefactor_x * *(b + 189 * OS1_S1 + 29) -
                p_over_q * *(b + 244 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 29) +
                one_over_two_q * *(b + 189 * OS1_S1 + 19);
            *(b + 189 * OS1_S1 + 45) =
                prefactor_x * *(b + 189 * OS1_S1 + 30) -
                p_over_q * *(b + 244 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 30);
            *(b + 189 * OS1_S1 + 46) =
                prefactor_z * *(b + 189 * OS1_S1 + 26) -
                p_over_q * *(b + 252 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 26);
            *(b + 189 * OS1_S1 + 47) =
                prefactor_x * *(b + 189 * OS1_S1 + 32) -
                p_over_q * *(b + 244 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 32);
            *(b + 189 * OS1_S1 + 48) =
                prefactor_y * *(b + 189 * OS1_S1 + 29) -
                p_over_q * *(b + 251 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 29);
            *(b + 189 * OS1_S1 + 49) =
                prefactor_x * *(b + 189 * OS1_S1 + 34) -
                p_over_q * *(b + 244 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 144 * OS1_S1 + 34);
            *(b + 189 * OS1_S1 + 50) =
                prefactor_y * *(b + 189 * OS1_S1 + 30) -
                p_over_q * *(b + 251 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 16);
            *(b + 189 * OS1_S1 + 51) =
                prefactor_z * *(b + 189 * OS1_S1 + 30) -
                p_over_q * *(b + 252 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 30);
            *(b + 189 * OS1_S1 + 52) =
                prefactor_z * *(b + 189 * OS1_S1 + 31) -
                p_over_q * *(b + 252 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 31) +
                one_over_two_q * *(b + 189 * OS1_S1 + 16);
            *(b + 189 * OS1_S1 + 53) =
                prefactor_y * *(b + 189 * OS1_S1 + 33) -
                p_over_q * *(b + 251 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 33) +
                one_over_two_q * *(b + 189 * OS1_S1 + 19);
            *(b + 189 * OS1_S1 + 54) =
                prefactor_y * *(b + 189 * OS1_S1 + 34) -
                p_over_q * *(b + 251 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 138 * OS1_S1 + 34);
            *(b + 189 * OS1_S1 + 55) =
                prefactor_z * *(b + 189 * OS1_S1 + 34) -
                p_over_q * *(b + 252 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 137 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 19);
            *(b + 190 * OS1_S1 + 35) =
                prefactor_x * *(b + 190 * OS1_S1 + 20) -
                p_over_q * *(b + 245 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 10);
            *(b + 190 * OS1_S1 + 36) =
                prefactor_y * *(b + 190 * OS1_S1 + 20) -
                p_over_q * *(b + 252 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 20);
            *(b + 190 * OS1_S1 + 37) =
                prefactor_z * *(b + 190 * OS1_S1 + 20) -
                p_over_q * *(b + 253 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 20);
            *(b + 190 * OS1_S1 + 38) =
                prefactor_y * *(b + 190 * OS1_S1 + 21) -
                p_over_q * *(b + 252 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 21) +
                one_over_two_q * *(b + 190 * OS1_S1 + 10);
            *(b + 190 * OS1_S1 + 39) =
                prefactor_y * *(b + 190 * OS1_S1 + 22) -
                p_over_q * *(b + 252 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 22);
            *(b + 190 * OS1_S1 + 40) =
                prefactor_z * *(b + 190 * OS1_S1 + 22) -
                p_over_q * *(b + 253 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 22) +
                one_over_two_q * *(b + 190 * OS1_S1 + 10);
            *(b + 190 * OS1_S1 + 41) =
                prefactor_x * *(b + 190 * OS1_S1 + 26) -
                p_over_q * *(b + 245 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 26) +
                one_over_two_q * *(b + 190 * OS1_S1 + 16);
            *(b + 190 * OS1_S1 + 42) =
                prefactor_z * *(b + 190 * OS1_S1 + 23) -
                p_over_q * *(b + 253 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 23);
            *(b + 190 * OS1_S1 + 43) =
                prefactor_y * *(b + 190 * OS1_S1 + 25) -
                p_over_q * *(b + 252 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 25);
            *(b + 190 * OS1_S1 + 44) =
                prefactor_x * *(b + 190 * OS1_S1 + 29) -
                p_over_q * *(b + 245 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 29) +
                one_over_two_q * *(b + 190 * OS1_S1 + 19);
            *(b + 190 * OS1_S1 + 45) =
                prefactor_x * *(b + 190 * OS1_S1 + 30) -
                p_over_q * *(b + 245 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 30);
            *(b + 190 * OS1_S1 + 46) =
                prefactor_x * *(b + 190 * OS1_S1 + 31) -
                p_over_q * *(b + 245 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 31);
            *(b + 190 * OS1_S1 + 47) =
                prefactor_x * *(b + 190 * OS1_S1 + 32) -
                p_over_q * *(b + 245 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 32);
            *(b + 190 * OS1_S1 + 48) =
                prefactor_y * *(b + 190 * OS1_S1 + 29) -
                p_over_q * *(b + 252 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 29);
            *(b + 190 * OS1_S1 + 49) =
                prefactor_x * *(b + 190 * OS1_S1 + 34) -
                p_over_q * *(b + 245 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 34);
            *(b + 190 * OS1_S1 + 50) =
                prefactor_y * *(b + 190 * OS1_S1 + 30) -
                p_over_q * *(b + 252 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 16);
            *(b + 190 * OS1_S1 + 51) =
                prefactor_z * *(b + 190 * OS1_S1 + 30) -
                p_over_q * *(b + 253 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 30);
            *(b + 190 * OS1_S1 + 52) =
                prefactor_z * *(b + 190 * OS1_S1 + 31) -
                p_over_q * *(b + 253 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 31) +
                one_over_two_q * *(b + 190 * OS1_S1 + 16);
            *(b + 190 * OS1_S1 + 53) =
                prefactor_y * *(b + 190 * OS1_S1 + 33) -
                p_over_q * *(b + 252 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 33) +
                one_over_two_q * *(b + 190 * OS1_S1 + 19);
            *(b + 190 * OS1_S1 + 54) =
                prefactor_y * *(b + 190 * OS1_S1 + 34) -
                p_over_q * *(b + 252 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 139 * OS1_S1 + 34);
            *(b + 190 * OS1_S1 + 55) =
                prefactor_z * *(b + 190 * OS1_S1 + 34) -
                p_over_q * *(b + 253 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 138 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 19);
            *(b + 191 * OS1_S1 + 35) =
                prefactor_x * *(b + 191 * OS1_S1 + 20) -
                p_over_q * *(b + 246 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 10);
            *(b + 191 * OS1_S1 + 36) =
                prefactor_y * *(b + 191 * OS1_S1 + 20) -
                p_over_q * *(b + 253 * OS1_S1 + 20) +
                one_over_two_q * *(b + 140 * OS1_S1 + 20);
            *(b + 191 * OS1_S1 + 37) =
                prefactor_z * *(b + 191 * OS1_S1 + 20) -
                p_over_q * *(b + 254 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 20);
            *(b + 191 * OS1_S1 + 38) =
                prefactor_y * *(b + 191 * OS1_S1 + 21) -
                p_over_q * *(b + 253 * OS1_S1 + 21) +
                one_over_two_q * *(b + 140 * OS1_S1 + 21) +
                one_over_two_q * *(b + 191 * OS1_S1 + 10);
            *(b + 191 * OS1_S1 + 39) =
                prefactor_y * *(b + 191 * OS1_S1 + 22) -
                p_over_q * *(b + 253 * OS1_S1 + 22) +
                one_over_two_q * *(b + 140 * OS1_S1 + 22);
            *(b + 191 * OS1_S1 + 40) =
                prefactor_z * *(b + 191 * OS1_S1 + 22) -
                p_over_q * *(b + 254 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 22) +
                one_over_two_q * *(b + 191 * OS1_S1 + 10);
            *(b + 191 * OS1_S1 + 41) =
                prefactor_x * *(b + 191 * OS1_S1 + 26) -
                p_over_q * *(b + 246 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 26) +
                one_over_two_q * *(b + 191 * OS1_S1 + 16);
            *(b + 191 * OS1_S1 + 42) =
                prefactor_z * *(b + 191 * OS1_S1 + 23) -
                p_over_q * *(b + 254 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 23);
            *(b + 191 * OS1_S1 + 43) =
                prefactor_y * *(b + 191 * OS1_S1 + 25) -
                p_over_q * *(b + 253 * OS1_S1 + 25) +
                one_over_two_q * *(b + 140 * OS1_S1 + 25);
            *(b + 191 * OS1_S1 + 44) =
                prefactor_x * *(b + 191 * OS1_S1 + 29) -
                p_over_q * *(b + 246 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 29) +
                one_over_two_q * *(b + 191 * OS1_S1 + 19);
            *(b + 191 * OS1_S1 + 45) =
                prefactor_x * *(b + 191 * OS1_S1 + 30) -
                p_over_q * *(b + 246 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 30);
            *(b + 191 * OS1_S1 + 46) =
                prefactor_x * *(b + 191 * OS1_S1 + 31) -
                p_over_q * *(b + 246 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 31);
            *(b + 191 * OS1_S1 + 47) =
                prefactor_x * *(b + 191 * OS1_S1 + 32) -
                p_over_q * *(b + 246 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 32);
            *(b + 191 * OS1_S1 + 48) =
                prefactor_y * *(b + 191 * OS1_S1 + 29) -
                p_over_q * *(b + 253 * OS1_S1 + 29) +
                one_over_two_q * *(b + 140 * OS1_S1 + 29);
            *(b + 191 * OS1_S1 + 49) =
                prefactor_x * *(b + 191 * OS1_S1 + 34) -
                p_over_q * *(b + 246 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 146 * OS1_S1 + 34);
            *(b + 191 * OS1_S1 + 50) =
                prefactor_y * *(b + 191 * OS1_S1 + 30) -
                p_over_q * *(b + 253 * OS1_S1 + 30) +
                one_over_two_q * *(b + 140 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 16);
            *(b + 191 * OS1_S1 + 51) =
                prefactor_z * *(b + 191 * OS1_S1 + 30) -
                p_over_q * *(b + 254 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 30);
            *(b + 191 * OS1_S1 + 52) =
                prefactor_z * *(b + 191 * OS1_S1 + 31) -
                p_over_q * *(b + 254 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 31) +
                one_over_two_q * *(b + 191 * OS1_S1 + 16);
            *(b + 191 * OS1_S1 + 53) =
                prefactor_y * *(b + 191 * OS1_S1 + 33) -
                p_over_q * *(b + 253 * OS1_S1 + 33) +
                one_over_two_q * *(b + 140 * OS1_S1 + 33) +
                one_over_two_q * *(b + 191 * OS1_S1 + 19);
            *(b + 191 * OS1_S1 + 54) =
                prefactor_y * *(b + 191 * OS1_S1 + 34) -
                p_over_q * *(b + 253 * OS1_S1 + 34) +
                one_over_two_q * *(b + 140 * OS1_S1 + 34);
            *(b + 191 * OS1_S1 + 55) =
                prefactor_z * *(b + 191 * OS1_S1 + 34) -
                p_over_q * *(b + 254 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 139 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 19);
            *(b + 192 * OS1_S1 + 35) =
                prefactor_x * *(b + 192 * OS1_S1 + 20) -
                p_over_q * *(b + 247 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 10);
            *(b + 192 * OS1_S1 + 36) = prefactor_y * *(b + 192 * OS1_S1 + 20) -
                                       p_over_q * *(b + 254 * OS1_S1 + 20);
            *(b + 192 * OS1_S1 + 37) =
                prefactor_z * *(b + 192 * OS1_S1 + 20) -
                p_over_q * *(b + 255 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 20);
            *(b + 192 * OS1_S1 + 38) =
                prefactor_y * *(b + 192 * OS1_S1 + 21) -
                p_over_q * *(b + 254 * OS1_S1 + 21) +
                one_over_two_q * *(b + 192 * OS1_S1 + 10);
            *(b + 192 * OS1_S1 + 39) = prefactor_y * *(b + 192 * OS1_S1 + 22) -
                                       p_over_q * *(b + 254 * OS1_S1 + 22);
            *(b + 192 * OS1_S1 + 40) =
                prefactor_z * *(b + 192 * OS1_S1 + 22) -
                p_over_q * *(b + 255 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 22) +
                one_over_two_q * *(b + 192 * OS1_S1 + 10);
            *(b + 192 * OS1_S1 + 41) =
                prefactor_x * *(b + 192 * OS1_S1 + 26) -
                p_over_q * *(b + 247 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 26) +
                one_over_two_q * *(b + 192 * OS1_S1 + 16);
            *(b + 192 * OS1_S1 + 42) =
                prefactor_z * *(b + 192 * OS1_S1 + 23) -
                p_over_q * *(b + 255 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 23);
            *(b + 192 * OS1_S1 + 43) = prefactor_y * *(b + 192 * OS1_S1 + 25) -
                                       p_over_q * *(b + 254 * OS1_S1 + 25);
            *(b + 192 * OS1_S1 + 44) =
                prefactor_x * *(b + 192 * OS1_S1 + 29) -
                p_over_q * *(b + 247 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 29) +
                one_over_two_q * *(b + 192 * OS1_S1 + 19);
            *(b + 192 * OS1_S1 + 45) =
                prefactor_x * *(b + 192 * OS1_S1 + 30) -
                p_over_q * *(b + 247 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 30);
            *(b + 192 * OS1_S1 + 46) =
                prefactor_x * *(b + 192 * OS1_S1 + 31) -
                p_over_q * *(b + 247 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 31);
            *(b + 192 * OS1_S1 + 47) =
                prefactor_x * *(b + 192 * OS1_S1 + 32) -
                p_over_q * *(b + 247 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 32);
            *(b + 192 * OS1_S1 + 48) = prefactor_y * *(b + 192 * OS1_S1 + 29) -
                                       p_over_q * *(b + 254 * OS1_S1 + 29);
            *(b + 192 * OS1_S1 + 49) =
                prefactor_x * *(b + 192 * OS1_S1 + 34) -
                p_over_q * *(b + 247 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 147 * OS1_S1 + 34);
            *(b + 192 * OS1_S1 + 50) =
                prefactor_y * *(b + 192 * OS1_S1 + 30) -
                p_over_q * *(b + 254 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 16);
            *(b + 192 * OS1_S1 + 51) =
                prefactor_z * *(b + 192 * OS1_S1 + 30) -
                p_over_q * *(b + 255 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 30);
            *(b + 192 * OS1_S1 + 52) =
                prefactor_z * *(b + 192 * OS1_S1 + 31) -
                p_over_q * *(b + 255 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 31) +
                one_over_two_q * *(b + 192 * OS1_S1 + 16);
            *(b + 192 * OS1_S1 + 53) =
                prefactor_y * *(b + 192 * OS1_S1 + 33) -
                p_over_q * *(b + 254 * OS1_S1 + 33) +
                one_over_two_q * *(b + 192 * OS1_S1 + 19);
            *(b + 192 * OS1_S1 + 54) = prefactor_y * *(b + 192 * OS1_S1 + 34) -
                                       p_over_q * *(b + 254 * OS1_S1 + 34);
            *(b + 192 * OS1_S1 + 55) =
                prefactor_z * *(b + 192 * OS1_S1 + 34) -
                p_over_q * *(b + 255 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 140 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 19);
            *(b + 193 * OS1_S1 + 35) =
                prefactor_x * *(b + 193 * OS1_S1 + 20) -
                p_over_q * *(b + 248 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 193 * OS1_S1 + 10);
            *(b + 193 * OS1_S1 + 36) =
                prefactor_y * *(b + 193 * OS1_S1 + 20) -
                p_over_q * *(b + 256 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 20);
            *(b + 193 * OS1_S1 + 37) = prefactor_z * *(b + 193 * OS1_S1 + 20) -
                                       p_over_q * *(b + 257 * OS1_S1 + 20);
            *(b + 193 * OS1_S1 + 38) =
                prefactor_y * *(b + 193 * OS1_S1 + 21) -
                p_over_q * *(b + 256 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 21) +
                one_over_two_q * *(b + 193 * OS1_S1 + 10);
            *(b + 193 * OS1_S1 + 39) = prefactor_z * *(b + 193 * OS1_S1 + 21) -
                                       p_over_q * *(b + 257 * OS1_S1 + 21);
            *(b + 193 * OS1_S1 + 40) =
                prefactor_z * *(b + 193 * OS1_S1 + 22) -
                p_over_q * *(b + 257 * OS1_S1 + 22) +
                one_over_two_q * *(b + 193 * OS1_S1 + 10);
            *(b + 193 * OS1_S1 + 41) =
                prefactor_x * *(b + 193 * OS1_S1 + 26) -
                p_over_q * *(b + 248 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 26) +
                one_over_two_q * *(b + 193 * OS1_S1 + 16);
            *(b + 193 * OS1_S1 + 42) = prefactor_z * *(b + 193 * OS1_S1 + 23) -
                                       p_over_q * *(b + 257 * OS1_S1 + 23);
            *(b + 193 * OS1_S1 + 43) =
                prefactor_y * *(b + 193 * OS1_S1 + 25) -
                p_over_q * *(b + 256 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 25);
            *(b + 193 * OS1_S1 + 44) =
                prefactor_x * *(b + 193 * OS1_S1 + 29) -
                p_over_q * *(b + 248 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 29) +
                one_over_two_q * *(b + 193 * OS1_S1 + 19);
            *(b + 193 * OS1_S1 + 45) =
                prefactor_x * *(b + 193 * OS1_S1 + 30) -
                p_over_q * *(b + 248 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 30);
            *(b + 193 * OS1_S1 + 46) = prefactor_z * *(b + 193 * OS1_S1 + 26) -
                                       p_over_q * *(b + 257 * OS1_S1 + 26);
            *(b + 193 * OS1_S1 + 47) =
                prefactor_x * *(b + 193 * OS1_S1 + 32) -
                p_over_q * *(b + 248 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 32);
            *(b + 193 * OS1_S1 + 48) =
                prefactor_x * *(b + 193 * OS1_S1 + 33) -
                p_over_q * *(b + 248 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 33);
            *(b + 193 * OS1_S1 + 49) =
                prefactor_x * *(b + 193 * OS1_S1 + 34) -
                p_over_q * *(b + 248 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 148 * OS1_S1 + 34);
            *(b + 193 * OS1_S1 + 50) =
                prefactor_y * *(b + 193 * OS1_S1 + 30) -
                p_over_q * *(b + 256 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 193 * OS1_S1 + 16);
            *(b + 193 * OS1_S1 + 51) = prefactor_z * *(b + 193 * OS1_S1 + 30) -
                                       p_over_q * *(b + 257 * OS1_S1 + 30);
            *(b + 193 * OS1_S1 + 52) =
                prefactor_z * *(b + 193 * OS1_S1 + 31) -
                p_over_q * *(b + 257 * OS1_S1 + 31) +
                one_over_two_q * *(b + 193 * OS1_S1 + 16);
            *(b + 193 * OS1_S1 + 53) =
                prefactor_y * *(b + 193 * OS1_S1 + 33) -
                p_over_q * *(b + 256 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 33) +
                one_over_two_q * *(b + 193 * OS1_S1 + 19);
            *(b + 193 * OS1_S1 + 54) =
                prefactor_y * *(b + 193 * OS1_S1 + 34) -
                p_over_q * *(b + 256 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 141 * OS1_S1 + 34);
            *(b + 193 * OS1_S1 + 55) =
                prefactor_z * *(b + 193 * OS1_S1 + 34) -
                p_over_q * *(b + 257 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 193 * OS1_S1 + 19);
            *(b + 194 * OS1_S1 + 35) =
                prefactor_x * *(b + 194 * OS1_S1 + 20) -
                p_over_q * *(b + 249 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 194 * OS1_S1 + 10);
            *(b + 194 * OS1_S1 + 36) =
                prefactor_y * *(b + 194 * OS1_S1 + 20) -
                p_over_q * *(b + 257 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 20);
            *(b + 194 * OS1_S1 + 37) =
                prefactor_z * *(b + 194 * OS1_S1 + 20) -
                p_over_q * *(b + 258 * OS1_S1 + 20) +
                one_over_two_q * *(b + 141 * OS1_S1 + 20);
            *(b + 194 * OS1_S1 + 38) =
                prefactor_y * *(b + 194 * OS1_S1 + 21) -
                p_over_q * *(b + 257 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 21) +
                one_over_two_q * *(b + 194 * OS1_S1 + 10);
            *(b + 194 * OS1_S1 + 39) =
                prefactor_z * *(b + 194 * OS1_S1 + 21) -
                p_over_q * *(b + 258 * OS1_S1 + 21) +
                one_over_two_q * *(b + 141 * OS1_S1 + 21);
            *(b + 194 * OS1_S1 + 40) =
                prefactor_z * *(b + 194 * OS1_S1 + 22) -
                p_over_q * *(b + 258 * OS1_S1 + 22) +
                one_over_two_q * *(b + 141 * OS1_S1 + 22) +
                one_over_two_q * *(b + 194 * OS1_S1 + 10);
            *(b + 194 * OS1_S1 + 41) =
                prefactor_x * *(b + 194 * OS1_S1 + 26) -
                p_over_q * *(b + 249 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 26) +
                one_over_two_q * *(b + 194 * OS1_S1 + 16);
            *(b + 194 * OS1_S1 + 42) =
                prefactor_z * *(b + 194 * OS1_S1 + 23) -
                p_over_q * *(b + 258 * OS1_S1 + 23) +
                one_over_two_q * *(b + 141 * OS1_S1 + 23);
            *(b + 194 * OS1_S1 + 43) =
                prefactor_y * *(b + 194 * OS1_S1 + 25) -
                p_over_q * *(b + 257 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 25);
            *(b + 194 * OS1_S1 + 44) =
                prefactor_x * *(b + 194 * OS1_S1 + 29) -
                p_over_q * *(b + 249 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 29) +
                one_over_two_q * *(b + 194 * OS1_S1 + 19);
            *(b + 194 * OS1_S1 + 45) =
                prefactor_x * *(b + 194 * OS1_S1 + 30) -
                p_over_q * *(b + 249 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 30);
            *(b + 194 * OS1_S1 + 46) =
                prefactor_z * *(b + 194 * OS1_S1 + 26) -
                p_over_q * *(b + 258 * OS1_S1 + 26) +
                one_over_two_q * *(b + 141 * OS1_S1 + 26);
            *(b + 194 * OS1_S1 + 47) =
                prefactor_x * *(b + 194 * OS1_S1 + 32) -
                p_over_q * *(b + 249 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 32);
            *(b + 194 * OS1_S1 + 48) =
                prefactor_x * *(b + 194 * OS1_S1 + 33) -
                p_over_q * *(b + 249 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 33);
            *(b + 194 * OS1_S1 + 49) =
                prefactor_x * *(b + 194 * OS1_S1 + 34) -
                p_over_q * *(b + 249 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 34);
            *(b + 194 * OS1_S1 + 50) =
                prefactor_y * *(b + 194 * OS1_S1 + 30) -
                p_over_q * *(b + 257 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 194 * OS1_S1 + 16);
            *(b + 194 * OS1_S1 + 51) =
                prefactor_z * *(b + 194 * OS1_S1 + 30) -
                p_over_q * *(b + 258 * OS1_S1 + 30) +
                one_over_two_q * *(b + 141 * OS1_S1 + 30);
            *(b + 194 * OS1_S1 + 52) =
                prefactor_z * *(b + 194 * OS1_S1 + 31) -
                p_over_q * *(b + 258 * OS1_S1 + 31) +
                one_over_two_q * *(b + 141 * OS1_S1 + 31) +
                one_over_two_q * *(b + 194 * OS1_S1 + 16);
            *(b + 194 * OS1_S1 + 53) =
                prefactor_y * *(b + 194 * OS1_S1 + 33) -
                p_over_q * *(b + 257 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 33) +
                one_over_two_q * *(b + 194 * OS1_S1 + 19);
            *(b + 194 * OS1_S1 + 54) =
                prefactor_y * *(b + 194 * OS1_S1 + 34) -
                p_over_q * *(b + 257 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 142 * OS1_S1 + 34);
            *(b + 194 * OS1_S1 + 55) =
                prefactor_z * *(b + 194 * OS1_S1 + 34) -
                p_over_q * *(b + 258 * OS1_S1 + 34) +
                one_over_two_q * *(b + 141 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 194 * OS1_S1 + 19);
            *(b + 195 * OS1_S1 + 35) =
                prefactor_x * *(b + 195 * OS1_S1 + 20) -
                p_over_q * *(b + 250 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 195 * OS1_S1 + 10);
            *(b + 195 * OS1_S1 + 36) =
                prefactor_y * *(b + 195 * OS1_S1 + 20) -
                p_over_q * *(b + 258 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 20);
            *(b + 195 * OS1_S1 + 37) =
                prefactor_z * *(b + 195 * OS1_S1 + 20) -
                p_over_q * *(b + 259 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 20);
            *(b + 195 * OS1_S1 + 38) =
                prefactor_y * *(b + 195 * OS1_S1 + 21) -
                p_over_q * *(b + 258 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 21) +
                one_over_two_q * *(b + 195 * OS1_S1 + 10);
            *(b + 195 * OS1_S1 + 39) =
                prefactor_z * *(b + 195 * OS1_S1 + 21) -
                p_over_q * *(b + 259 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 21);
            *(b + 195 * OS1_S1 + 40) =
                prefactor_z * *(b + 195 * OS1_S1 + 22) -
                p_over_q * *(b + 259 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 22) +
                one_over_two_q * *(b + 195 * OS1_S1 + 10);
            *(b + 195 * OS1_S1 + 41) =
                prefactor_x * *(b + 195 * OS1_S1 + 26) -
                p_over_q * *(b + 250 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 26) +
                one_over_two_q * *(b + 195 * OS1_S1 + 16);
            *(b + 195 * OS1_S1 + 42) =
                prefactor_z * *(b + 195 * OS1_S1 + 23) -
                p_over_q * *(b + 259 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 23);
            *(b + 195 * OS1_S1 + 43) =
                prefactor_y * *(b + 195 * OS1_S1 + 25) -
                p_over_q * *(b + 258 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 25);
            *(b + 195 * OS1_S1 + 44) =
                prefactor_x * *(b + 195 * OS1_S1 + 29) -
                p_over_q * *(b + 250 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 29) +
                one_over_two_q * *(b + 195 * OS1_S1 + 19);
            *(b + 195 * OS1_S1 + 45) =
                prefactor_x * *(b + 195 * OS1_S1 + 30) -
                p_over_q * *(b + 250 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 30);
            *(b + 195 * OS1_S1 + 46) =
                prefactor_z * *(b + 195 * OS1_S1 + 26) -
                p_over_q * *(b + 259 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 26);
            *(b + 195 * OS1_S1 + 47) =
                prefactor_x * *(b + 195 * OS1_S1 + 32) -
                p_over_q * *(b + 250 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 32);
            *(b + 195 * OS1_S1 + 48) =
                prefactor_x * *(b + 195 * OS1_S1 + 33) -
                p_over_q * *(b + 250 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 33);
            *(b + 195 * OS1_S1 + 49) =
                prefactor_x * *(b + 195 * OS1_S1 + 34) -
                p_over_q * *(b + 250 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 150 * OS1_S1 + 34);
            *(b + 195 * OS1_S1 + 50) =
                prefactor_y * *(b + 195 * OS1_S1 + 30) -
                p_over_q * *(b + 258 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 195 * OS1_S1 + 16);
            *(b + 195 * OS1_S1 + 51) =
                prefactor_z * *(b + 195 * OS1_S1 + 30) -
                p_over_q * *(b + 259 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 30);
            *(b + 195 * OS1_S1 + 52) =
                prefactor_z * *(b + 195 * OS1_S1 + 31) -
                p_over_q * *(b + 259 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 31) +
                one_over_two_q * *(b + 195 * OS1_S1 + 16);
            *(b + 195 * OS1_S1 + 53) =
                prefactor_y * *(b + 195 * OS1_S1 + 33) -
                p_over_q * *(b + 258 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 33) +
                one_over_two_q * *(b + 195 * OS1_S1 + 19);
            *(b + 195 * OS1_S1 + 54) =
                prefactor_y * *(b + 195 * OS1_S1 + 34) -
                p_over_q * *(b + 258 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 143 * OS1_S1 + 34);
            *(b + 195 * OS1_S1 + 55) =
                prefactor_z * *(b + 195 * OS1_S1 + 34) -
                p_over_q * *(b + 259 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 142 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 195 * OS1_S1 + 19);
            *(b + 196 * OS1_S1 + 35) =
                prefactor_x * *(b + 196 * OS1_S1 + 20) -
                p_over_q * *(b + 251 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 10);
            *(b + 196 * OS1_S1 + 36) =
                prefactor_y * *(b + 196 * OS1_S1 + 20) -
                p_over_q * *(b + 259 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 20);
            *(b + 196 * OS1_S1 + 37) =
                prefactor_z * *(b + 196 * OS1_S1 + 20) -
                p_over_q * *(b + 260 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 20);
            *(b + 196 * OS1_S1 + 38) =
                prefactor_y * *(b + 196 * OS1_S1 + 21) -
                p_over_q * *(b + 259 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 21) +
                one_over_two_q * *(b + 196 * OS1_S1 + 10);
            *(b + 196 * OS1_S1 + 39) =
                prefactor_z * *(b + 196 * OS1_S1 + 21) -
                p_over_q * *(b + 260 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 21);
            *(b + 196 * OS1_S1 + 40) =
                prefactor_z * *(b + 196 * OS1_S1 + 22) -
                p_over_q * *(b + 260 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 22) +
                one_over_two_q * *(b + 196 * OS1_S1 + 10);
            *(b + 196 * OS1_S1 + 41) =
                prefactor_x * *(b + 196 * OS1_S1 + 26) -
                p_over_q * *(b + 251 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 26) +
                one_over_two_q * *(b + 196 * OS1_S1 + 16);
            *(b + 196 * OS1_S1 + 42) =
                prefactor_z * *(b + 196 * OS1_S1 + 23) -
                p_over_q * *(b + 260 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 23);
            *(b + 196 * OS1_S1 + 43) =
                prefactor_y * *(b + 196 * OS1_S1 + 25) -
                p_over_q * *(b + 259 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 25);
            *(b + 196 * OS1_S1 + 44) =
                prefactor_x * *(b + 196 * OS1_S1 + 29) -
                p_over_q * *(b + 251 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 29) +
                one_over_two_q * *(b + 196 * OS1_S1 + 19);
            *(b + 196 * OS1_S1 + 45) =
                prefactor_x * *(b + 196 * OS1_S1 + 30) -
                p_over_q * *(b + 251 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 30);
            *(b + 196 * OS1_S1 + 46) =
                prefactor_x * *(b + 196 * OS1_S1 + 31) -
                p_over_q * *(b + 251 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 31);
            *(b + 196 * OS1_S1 + 47) =
                prefactor_x * *(b + 196 * OS1_S1 + 32) -
                p_over_q * *(b + 251 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 32);
            *(b + 196 * OS1_S1 + 48) =
                prefactor_x * *(b + 196 * OS1_S1 + 33) -
                p_over_q * *(b + 251 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 33);
            *(b + 196 * OS1_S1 + 49) =
                prefactor_x * *(b + 196 * OS1_S1 + 34) -
                p_over_q * *(b + 251 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 151 * OS1_S1 + 34);
            *(b + 196 * OS1_S1 + 50) =
                prefactor_y * *(b + 196 * OS1_S1 + 30) -
                p_over_q * *(b + 259 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 16);
            *(b + 196 * OS1_S1 + 51) =
                prefactor_z * *(b + 196 * OS1_S1 + 30) -
                p_over_q * *(b + 260 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 30);
            *(b + 196 * OS1_S1 + 52) =
                prefactor_z * *(b + 196 * OS1_S1 + 31) -
                p_over_q * *(b + 260 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 31) +
                one_over_two_q * *(b + 196 * OS1_S1 + 16);
            *(b + 196 * OS1_S1 + 53) =
                prefactor_y * *(b + 196 * OS1_S1 + 33) -
                p_over_q * *(b + 259 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 33) +
                one_over_two_q * *(b + 196 * OS1_S1 + 19);
            *(b + 196 * OS1_S1 + 54) =
                prefactor_y * *(b + 196 * OS1_S1 + 34) -
                p_over_q * *(b + 259 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 34);
            *(b + 196 * OS1_S1 + 55) =
                prefactor_z * *(b + 196 * OS1_S1 + 34) -
                p_over_q * *(b + 260 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 143 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 19);
            *(b + 197 * OS1_S1 + 35) =
                prefactor_x * *(b + 197 * OS1_S1 + 20) -
                p_over_q * *(b + 252 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 10);
            *(b + 197 * OS1_S1 + 36) =
                prefactor_y * *(b + 197 * OS1_S1 + 20) -
                p_over_q * *(b + 260 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 20);
            *(b + 197 * OS1_S1 + 37) =
                prefactor_z * *(b + 197 * OS1_S1 + 20) -
                p_over_q * *(b + 261 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 20);
            *(b + 197 * OS1_S1 + 38) =
                prefactor_y * *(b + 197 * OS1_S1 + 21) -
                p_over_q * *(b + 260 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 21) +
                one_over_two_q * *(b + 197 * OS1_S1 + 10);
            *(b + 197 * OS1_S1 + 39) =
                prefactor_y * *(b + 197 * OS1_S1 + 22) -
                p_over_q * *(b + 260 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 22);
            *(b + 197 * OS1_S1 + 40) =
                prefactor_z * *(b + 197 * OS1_S1 + 22) -
                p_over_q * *(b + 261 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 22) +
                one_over_two_q * *(b + 197 * OS1_S1 + 10);
            *(b + 197 * OS1_S1 + 41) =
                prefactor_x * *(b + 197 * OS1_S1 + 26) -
                p_over_q * *(b + 252 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 26) +
                one_over_two_q * *(b + 197 * OS1_S1 + 16);
            *(b + 197 * OS1_S1 + 42) =
                prefactor_z * *(b + 197 * OS1_S1 + 23) -
                p_over_q * *(b + 261 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 23);
            *(b + 197 * OS1_S1 + 43) =
                prefactor_y * *(b + 197 * OS1_S1 + 25) -
                p_over_q * *(b + 260 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 25);
            *(b + 197 * OS1_S1 + 44) =
                prefactor_x * *(b + 197 * OS1_S1 + 29) -
                p_over_q * *(b + 252 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 29) +
                one_over_two_q * *(b + 197 * OS1_S1 + 19);
            *(b + 197 * OS1_S1 + 45) =
                prefactor_x * *(b + 197 * OS1_S1 + 30) -
                p_over_q * *(b + 252 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 30);
            *(b + 197 * OS1_S1 + 46) =
                prefactor_x * *(b + 197 * OS1_S1 + 31) -
                p_over_q * *(b + 252 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 31);
            *(b + 197 * OS1_S1 + 47) =
                prefactor_x * *(b + 197 * OS1_S1 + 32) -
                p_over_q * *(b + 252 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 32);
            *(b + 197 * OS1_S1 + 48) =
                prefactor_x * *(b + 197 * OS1_S1 + 33) -
                p_over_q * *(b + 252 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 33);
            *(b + 197 * OS1_S1 + 49) =
                prefactor_x * *(b + 197 * OS1_S1 + 34) -
                p_over_q * *(b + 252 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 152 * OS1_S1 + 34);
            *(b + 197 * OS1_S1 + 50) =
                prefactor_y * *(b + 197 * OS1_S1 + 30) -
                p_over_q * *(b + 260 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 16);
            *(b + 197 * OS1_S1 + 51) =
                prefactor_z * *(b + 197 * OS1_S1 + 30) -
                p_over_q * *(b + 261 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 30);
            *(b + 197 * OS1_S1 + 52) =
                prefactor_z * *(b + 197 * OS1_S1 + 31) -
                p_over_q * *(b + 261 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 31) +
                one_over_two_q * *(b + 197 * OS1_S1 + 16);
            *(b + 197 * OS1_S1 + 53) =
                prefactor_y * *(b + 197 * OS1_S1 + 33) -
                p_over_q * *(b + 260 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 33) +
                one_over_two_q * *(b + 197 * OS1_S1 + 19);
            *(b + 197 * OS1_S1 + 54) =
                prefactor_y * *(b + 197 * OS1_S1 + 34) -
                p_over_q * *(b + 260 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 145 * OS1_S1 + 34);
            *(b + 197 * OS1_S1 + 55) =
                prefactor_z * *(b + 197 * OS1_S1 + 34) -
                p_over_q * *(b + 261 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 144 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 19);
            *(b + 198 * OS1_S1 + 35) =
                prefactor_x * *(b + 198 * OS1_S1 + 20) -
                p_over_q * *(b + 253 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 198 * OS1_S1 + 10);
            *(b + 198 * OS1_S1 + 36) =
                prefactor_y * *(b + 198 * OS1_S1 + 20) -
                p_over_q * *(b + 261 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 20);
            *(b + 198 * OS1_S1 + 37) =
                prefactor_z * *(b + 198 * OS1_S1 + 20) -
                p_over_q * *(b + 262 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 20);
            *(b + 198 * OS1_S1 + 38) =
                prefactor_y * *(b + 198 * OS1_S1 + 21) -
                p_over_q * *(b + 261 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 21) +
                one_over_two_q * *(b + 198 * OS1_S1 + 10);
            *(b + 198 * OS1_S1 + 39) =
                prefactor_y * *(b + 198 * OS1_S1 + 22) -
                p_over_q * *(b + 261 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 22);
            *(b + 198 * OS1_S1 + 40) =
                prefactor_z * *(b + 198 * OS1_S1 + 22) -
                p_over_q * *(b + 262 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 22) +
                one_over_two_q * *(b + 198 * OS1_S1 + 10);
            *(b + 198 * OS1_S1 + 41) =
                prefactor_x * *(b + 198 * OS1_S1 + 26) -
                p_over_q * *(b + 253 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 26) +
                one_over_two_q * *(b + 198 * OS1_S1 + 16);
            *(b + 198 * OS1_S1 + 42) =
                prefactor_z * *(b + 198 * OS1_S1 + 23) -
                p_over_q * *(b + 262 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 23);
            *(b + 198 * OS1_S1 + 43) =
                prefactor_y * *(b + 198 * OS1_S1 + 25) -
                p_over_q * *(b + 261 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 25);
            *(b + 198 * OS1_S1 + 44) =
                prefactor_x * *(b + 198 * OS1_S1 + 29) -
                p_over_q * *(b + 253 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 29) +
                one_over_two_q * *(b + 198 * OS1_S1 + 19);
            *(b + 198 * OS1_S1 + 45) =
                prefactor_x * *(b + 198 * OS1_S1 + 30) -
                p_over_q * *(b + 253 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 30);
            *(b + 198 * OS1_S1 + 46) =
                prefactor_x * *(b + 198 * OS1_S1 + 31) -
                p_over_q * *(b + 253 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 31);
            *(b + 198 * OS1_S1 + 47) =
                prefactor_x * *(b + 198 * OS1_S1 + 32) -
                p_over_q * *(b + 253 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 32);
            *(b + 198 * OS1_S1 + 48) =
                prefactor_y * *(b + 198 * OS1_S1 + 29) -
                p_over_q * *(b + 261 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 29);
            *(b + 198 * OS1_S1 + 49) =
                prefactor_x * *(b + 198 * OS1_S1 + 34) -
                p_over_q * *(b + 253 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 153 * OS1_S1 + 34);
            *(b + 198 * OS1_S1 + 50) =
                prefactor_y * *(b + 198 * OS1_S1 + 30) -
                p_over_q * *(b + 261 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 198 * OS1_S1 + 16);
            *(b + 198 * OS1_S1 + 51) =
                prefactor_z * *(b + 198 * OS1_S1 + 30) -
                p_over_q * *(b + 262 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 30);
            *(b + 198 * OS1_S1 + 52) =
                prefactor_z * *(b + 198 * OS1_S1 + 31) -
                p_over_q * *(b + 262 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 31) +
                one_over_two_q * *(b + 198 * OS1_S1 + 16);
            *(b + 198 * OS1_S1 + 53) =
                prefactor_y * *(b + 198 * OS1_S1 + 33) -
                p_over_q * *(b + 261 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 33) +
                one_over_two_q * *(b + 198 * OS1_S1 + 19);
            *(b + 198 * OS1_S1 + 54) =
                prefactor_y * *(b + 198 * OS1_S1 + 34) -
                p_over_q * *(b + 261 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 146 * OS1_S1 + 34);
            *(b + 198 * OS1_S1 + 55) =
                prefactor_z * *(b + 198 * OS1_S1 + 34) -
                p_over_q * *(b + 262 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 145 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 198 * OS1_S1 + 19);
            *(b + 199 * OS1_S1 + 35) =
                prefactor_x * *(b + 199 * OS1_S1 + 20) -
                p_over_q * *(b + 254 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 199 * OS1_S1 + 10);
            *(b + 199 * OS1_S1 + 36) =
                prefactor_y * *(b + 199 * OS1_S1 + 20) -
                p_over_q * *(b + 262 * OS1_S1 + 20) +
                one_over_two_q * *(b + 147 * OS1_S1 + 20);
            *(b + 199 * OS1_S1 + 37) =
                prefactor_z * *(b + 199 * OS1_S1 + 20) -
                p_over_q * *(b + 263 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 20);
            *(b + 199 * OS1_S1 + 38) =
                prefactor_y * *(b + 199 * OS1_S1 + 21) -
                p_over_q * *(b + 262 * OS1_S1 + 21) +
                one_over_two_q * *(b + 147 * OS1_S1 + 21) +
                one_over_two_q * *(b + 199 * OS1_S1 + 10);
            *(b + 199 * OS1_S1 + 39) =
                prefactor_y * *(b + 199 * OS1_S1 + 22) -
                p_over_q * *(b + 262 * OS1_S1 + 22) +
                one_over_two_q * *(b + 147 * OS1_S1 + 22);
            *(b + 199 * OS1_S1 + 40) =
                prefactor_z * *(b + 199 * OS1_S1 + 22) -
                p_over_q * *(b + 263 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 22) +
                one_over_two_q * *(b + 199 * OS1_S1 + 10);
            *(b + 199 * OS1_S1 + 41) =
                prefactor_x * *(b + 199 * OS1_S1 + 26) -
                p_over_q * *(b + 254 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 26) +
                one_over_two_q * *(b + 199 * OS1_S1 + 16);
            *(b + 199 * OS1_S1 + 42) =
                prefactor_z * *(b + 199 * OS1_S1 + 23) -
                p_over_q * *(b + 263 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 23);
            *(b + 199 * OS1_S1 + 43) =
                prefactor_y * *(b + 199 * OS1_S1 + 25) -
                p_over_q * *(b + 262 * OS1_S1 + 25) +
                one_over_two_q * *(b + 147 * OS1_S1 + 25);
            *(b + 199 * OS1_S1 + 44) =
                prefactor_x * *(b + 199 * OS1_S1 + 29) -
                p_over_q * *(b + 254 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 29) +
                one_over_two_q * *(b + 199 * OS1_S1 + 19);
            *(b + 199 * OS1_S1 + 45) =
                prefactor_x * *(b + 199 * OS1_S1 + 30) -
                p_over_q * *(b + 254 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 30);
            *(b + 199 * OS1_S1 + 46) =
                prefactor_x * *(b + 199 * OS1_S1 + 31) -
                p_over_q * *(b + 254 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 31);
            *(b + 199 * OS1_S1 + 47) =
                prefactor_x * *(b + 199 * OS1_S1 + 32) -
                p_over_q * *(b + 254 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 32);
            *(b + 199 * OS1_S1 + 48) =
                prefactor_y * *(b + 199 * OS1_S1 + 29) -
                p_over_q * *(b + 262 * OS1_S1 + 29) +
                one_over_two_q * *(b + 147 * OS1_S1 + 29);
            *(b + 199 * OS1_S1 + 49) =
                prefactor_x * *(b + 199 * OS1_S1 + 34) -
                p_over_q * *(b + 254 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 34);
            *(b + 199 * OS1_S1 + 50) =
                prefactor_y * *(b + 199 * OS1_S1 + 30) -
                p_over_q * *(b + 262 * OS1_S1 + 30) +
                one_over_two_q * *(b + 147 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 199 * OS1_S1 + 16);
            *(b + 199 * OS1_S1 + 51) =
                prefactor_z * *(b + 199 * OS1_S1 + 30) -
                p_over_q * *(b + 263 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 30);
            *(b + 199 * OS1_S1 + 52) =
                prefactor_z * *(b + 199 * OS1_S1 + 31) -
                p_over_q * *(b + 263 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 31) +
                one_over_two_q * *(b + 199 * OS1_S1 + 16);
            *(b + 199 * OS1_S1 + 53) =
                prefactor_y * *(b + 199 * OS1_S1 + 33) -
                p_over_q * *(b + 262 * OS1_S1 + 33) +
                one_over_two_q * *(b + 147 * OS1_S1 + 33) +
                one_over_two_q * *(b + 199 * OS1_S1 + 19);
            *(b + 199 * OS1_S1 + 54) =
                prefactor_y * *(b + 199 * OS1_S1 + 34) -
                p_over_q * *(b + 262 * OS1_S1 + 34) +
                one_over_two_q * *(b + 147 * OS1_S1 + 34);
            *(b + 199 * OS1_S1 + 55) =
                prefactor_z * *(b + 199 * OS1_S1 + 34) -
                p_over_q * *(b + 263 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 146 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 199 * OS1_S1 + 19);
            *(b + 200 * OS1_S1 + 35) =
                prefactor_x * *(b + 200 * OS1_S1 + 20) -
                p_over_q * *(b + 255 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 200 * OS1_S1 + 10);
            *(b + 200 * OS1_S1 + 36) = prefactor_y * *(b + 200 * OS1_S1 + 20) -
                                       p_over_q * *(b + 263 * OS1_S1 + 20);
            *(b + 200 * OS1_S1 + 37) =
                prefactor_z * *(b + 200 * OS1_S1 + 20) -
                p_over_q * *(b + 264 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 20);
            *(b + 200 * OS1_S1 + 38) =
                prefactor_y * *(b + 200 * OS1_S1 + 21) -
                p_over_q * *(b + 263 * OS1_S1 + 21) +
                one_over_two_q * *(b + 200 * OS1_S1 + 10);
            *(b + 200 * OS1_S1 + 39) = prefactor_y * *(b + 200 * OS1_S1 + 22) -
                                       p_over_q * *(b + 263 * OS1_S1 + 22);
            *(b + 200 * OS1_S1 + 40) =
                prefactor_z * *(b + 200 * OS1_S1 + 22) -
                p_over_q * *(b + 264 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 22) +
                one_over_two_q * *(b + 200 * OS1_S1 + 10);
            *(b + 200 * OS1_S1 + 41) =
                prefactor_x * *(b + 200 * OS1_S1 + 26) -
                p_over_q * *(b + 255 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 26) +
                one_over_two_q * *(b + 200 * OS1_S1 + 16);
            *(b + 200 * OS1_S1 + 42) =
                prefactor_z * *(b + 200 * OS1_S1 + 23) -
                p_over_q * *(b + 264 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 23);
            *(b + 200 * OS1_S1 + 43) = prefactor_y * *(b + 200 * OS1_S1 + 25) -
                                       p_over_q * *(b + 263 * OS1_S1 + 25);
            *(b + 200 * OS1_S1 + 44) =
                prefactor_x * *(b + 200 * OS1_S1 + 29) -
                p_over_q * *(b + 255 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 29) +
                one_over_two_q * *(b + 200 * OS1_S1 + 19);
            *(b + 200 * OS1_S1 + 45) =
                prefactor_x * *(b + 200 * OS1_S1 + 30) -
                p_over_q * *(b + 255 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 30);
            *(b + 200 * OS1_S1 + 46) =
                prefactor_x * *(b + 200 * OS1_S1 + 31) -
                p_over_q * *(b + 255 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 31);
            *(b + 200 * OS1_S1 + 47) =
                prefactor_x * *(b + 200 * OS1_S1 + 32) -
                p_over_q * *(b + 255 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 32);
            *(b + 200 * OS1_S1 + 48) = prefactor_y * *(b + 200 * OS1_S1 + 29) -
                                       p_over_q * *(b + 263 * OS1_S1 + 29);
            *(b + 200 * OS1_S1 + 49) =
                prefactor_x * *(b + 200 * OS1_S1 + 34) -
                p_over_q * *(b + 255 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 155 * OS1_S1 + 34);
            *(b + 200 * OS1_S1 + 50) =
                prefactor_y * *(b + 200 * OS1_S1 + 30) -
                p_over_q * *(b + 263 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 200 * OS1_S1 + 16);
            *(b + 200 * OS1_S1 + 51) =
                prefactor_z * *(b + 200 * OS1_S1 + 30) -
                p_over_q * *(b + 264 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 30);
            *(b + 200 * OS1_S1 + 52) =
                prefactor_z * *(b + 200 * OS1_S1 + 31) -
                p_over_q * *(b + 264 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 31) +
                one_over_two_q * *(b + 200 * OS1_S1 + 16);
            *(b + 200 * OS1_S1 + 53) =
                prefactor_y * *(b + 200 * OS1_S1 + 33) -
                p_over_q * *(b + 263 * OS1_S1 + 33) +
                one_over_two_q * *(b + 200 * OS1_S1 + 19);
            *(b + 200 * OS1_S1 + 54) = prefactor_y * *(b + 200 * OS1_S1 + 34) -
                                       p_over_q * *(b + 263 * OS1_S1 + 34);
            *(b + 200 * OS1_S1 + 55) =
                prefactor_z * *(b + 200 * OS1_S1 + 34) -
                p_over_q * *(b + 264 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 147 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 200 * OS1_S1 + 19);
            *(b + 201 * OS1_S1 + 35) =
                prefactor_x * *(b + 201 * OS1_S1 + 20) -
                p_over_q * *(b + 256 * OS1_S1 + 20) +
                one_over_two_q * *(b + 156 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 201 * OS1_S1 + 10);
            *(b + 201 * OS1_S1 + 36) =
                prefactor_y * *(b + 201 * OS1_S1 + 20) -
                p_over_q * *(b + 265 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 20);
            *(b + 201 * OS1_S1 + 37) = prefactor_z * *(b + 201 * OS1_S1 + 20) -
                                       p_over_q * *(b + 266 * OS1_S1 + 20);
            *(b + 201 * OS1_S1 + 38) =
                prefactor_y * *(b + 201 * OS1_S1 + 21) -
                p_over_q * *(b + 265 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 21) +
                one_over_two_q * *(b + 201 * OS1_S1 + 10);
            *(b + 201 * OS1_S1 + 39) = prefactor_z * *(b + 201 * OS1_S1 + 21) -
                                       p_over_q * *(b + 266 * OS1_S1 + 21);
            *(b + 201 * OS1_S1 + 40) =
                prefactor_z * *(b + 201 * OS1_S1 + 22) -
                p_over_q * *(b + 266 * OS1_S1 + 22) +
                one_over_two_q * *(b + 201 * OS1_S1 + 10);
            *(b + 201 * OS1_S1 + 41) =
                prefactor_x * *(b + 201 * OS1_S1 + 26) -
                p_over_q * *(b + 256 * OS1_S1 + 26) +
                one_over_two_q * *(b + 156 * OS1_S1 + 26) +
                one_over_two_q * *(b + 201 * OS1_S1 + 16);
            *(b + 201 * OS1_S1 + 42) = prefactor_z * *(b + 201 * OS1_S1 + 23) -
                                       p_over_q * *(b + 266 * OS1_S1 + 23);
            *(b + 201 * OS1_S1 + 43) =
                prefactor_y * *(b + 201 * OS1_S1 + 25) -
                p_over_q * *(b + 265 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 25);
            *(b + 201 * OS1_S1 + 44) =
                prefactor_x * *(b + 201 * OS1_S1 + 29) -
                p_over_q * *(b + 256 * OS1_S1 + 29) +
                one_over_two_q * *(b + 156 * OS1_S1 + 29) +
                one_over_two_q * *(b + 201 * OS1_S1 + 19);
            *(b + 201 * OS1_S1 + 45) =
                prefactor_x * *(b + 201 * OS1_S1 + 30) -
                p_over_q * *(b + 256 * OS1_S1 + 30) +
                one_over_two_q * *(b + 156 * OS1_S1 + 30);
            *(b + 201 * OS1_S1 + 46) = prefactor_z * *(b + 201 * OS1_S1 + 26) -
                                       p_over_q * *(b + 266 * OS1_S1 + 26);
            *(b + 201 * OS1_S1 + 47) =
                prefactor_x * *(b + 201 * OS1_S1 + 32) -
                p_over_q * *(b + 256 * OS1_S1 + 32) +
                one_over_two_q * *(b + 156 * OS1_S1 + 32);
            *(b + 201 * OS1_S1 + 48) =
                prefactor_x * *(b + 201 * OS1_S1 + 33) -
                p_over_q * *(b + 256 * OS1_S1 + 33) +
                one_over_two_q * *(b + 156 * OS1_S1 + 33);
            *(b + 201 * OS1_S1 + 49) =
                prefactor_x * *(b + 201 * OS1_S1 + 34) -
                p_over_q * *(b + 256 * OS1_S1 + 34) +
                one_over_two_q * *(b + 156 * OS1_S1 + 34);
            *(b + 201 * OS1_S1 + 50) =
                prefactor_y * *(b + 201 * OS1_S1 + 30) -
                p_over_q * *(b + 265 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 201 * OS1_S1 + 16);
            *(b + 201 * OS1_S1 + 51) = prefactor_z * *(b + 201 * OS1_S1 + 30) -
                                       p_over_q * *(b + 266 * OS1_S1 + 30);
            *(b + 201 * OS1_S1 + 52) =
                prefactor_z * *(b + 201 * OS1_S1 + 31) -
                p_over_q * *(b + 266 * OS1_S1 + 31) +
                one_over_two_q * *(b + 201 * OS1_S1 + 16);
            *(b + 201 * OS1_S1 + 53) =
                prefactor_y * *(b + 201 * OS1_S1 + 33) -
                p_over_q * *(b + 265 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 33) +
                one_over_two_q * *(b + 201 * OS1_S1 + 19);
            *(b + 201 * OS1_S1 + 54) =
                prefactor_y * *(b + 201 * OS1_S1 + 34) -
                p_over_q * *(b + 265 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 148 * OS1_S1 + 34);
            *(b + 201 * OS1_S1 + 55) =
                prefactor_z * *(b + 201 * OS1_S1 + 34) -
                p_over_q * *(b + 266 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 201 * OS1_S1 + 19);
            *(b + 202 * OS1_S1 + 35) =
                prefactor_x * *(b + 202 * OS1_S1 + 20) -
                p_over_q * *(b + 257 * OS1_S1 + 20) +
                one_over_two_q * *(b + 157 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 202 * OS1_S1 + 10);
            *(b + 202 * OS1_S1 + 36) =
                prefactor_y * *(b + 202 * OS1_S1 + 20) -
                p_over_q * *(b + 266 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 20);
            *(b + 202 * OS1_S1 + 37) =
                prefactor_z * *(b + 202 * OS1_S1 + 20) -
                p_over_q * *(b + 267 * OS1_S1 + 20) +
                one_over_two_q * *(b + 148 * OS1_S1 + 20);
            *(b + 202 * OS1_S1 + 38) =
                prefactor_y * *(b + 202 * OS1_S1 + 21) -
                p_over_q * *(b + 266 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 21) +
                one_over_two_q * *(b + 202 * OS1_S1 + 10);
            *(b + 202 * OS1_S1 + 39) =
                prefactor_z * *(b + 202 * OS1_S1 + 21) -
                p_over_q * *(b + 267 * OS1_S1 + 21) +
                one_over_two_q * *(b + 148 * OS1_S1 + 21);
            *(b + 202 * OS1_S1 + 40) =
                prefactor_z * *(b + 202 * OS1_S1 + 22) -
                p_over_q * *(b + 267 * OS1_S1 + 22) +
                one_over_two_q * *(b + 148 * OS1_S1 + 22) +
                one_over_two_q * *(b + 202 * OS1_S1 + 10);
            *(b + 202 * OS1_S1 + 41) =
                prefactor_x * *(b + 202 * OS1_S1 + 26) -
                p_over_q * *(b + 257 * OS1_S1 + 26) +
                one_over_two_q * *(b + 157 * OS1_S1 + 26) +
                one_over_two_q * *(b + 202 * OS1_S1 + 16);
            *(b + 202 * OS1_S1 + 42) =
                prefactor_z * *(b + 202 * OS1_S1 + 23) -
                p_over_q * *(b + 267 * OS1_S1 + 23) +
                one_over_two_q * *(b + 148 * OS1_S1 + 23);
            *(b + 202 * OS1_S1 + 43) =
                prefactor_y * *(b + 202 * OS1_S1 + 25) -
                p_over_q * *(b + 266 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 25);
            *(b + 202 * OS1_S1 + 44) =
                prefactor_x * *(b + 202 * OS1_S1 + 29) -
                p_over_q * *(b + 257 * OS1_S1 + 29) +
                one_over_two_q * *(b + 157 * OS1_S1 + 29) +
                one_over_two_q * *(b + 202 * OS1_S1 + 19);
            *(b + 202 * OS1_S1 + 45) =
                prefactor_x * *(b + 202 * OS1_S1 + 30) -
                p_over_q * *(b + 257 * OS1_S1 + 30) +
                one_over_two_q * *(b + 157 * OS1_S1 + 30);
            *(b + 202 * OS1_S1 + 46) =
                prefactor_z * *(b + 202 * OS1_S1 + 26) -
                p_over_q * *(b + 267 * OS1_S1 + 26) +
                one_over_two_q * *(b + 148 * OS1_S1 + 26);
            *(b + 202 * OS1_S1 + 47) =
                prefactor_x * *(b + 202 * OS1_S1 + 32) -
                p_over_q * *(b + 257 * OS1_S1 + 32) +
                one_over_two_q * *(b + 157 * OS1_S1 + 32);
            *(b + 202 * OS1_S1 + 48) =
                prefactor_x * *(b + 202 * OS1_S1 + 33) -
                p_over_q * *(b + 257 * OS1_S1 + 33) +
                one_over_two_q * *(b + 157 * OS1_S1 + 33);
            *(b + 202 * OS1_S1 + 49) =
                prefactor_x * *(b + 202 * OS1_S1 + 34) -
                p_over_q * *(b + 257 * OS1_S1 + 34) +
                one_over_two_q * *(b + 157 * OS1_S1 + 34);
            *(b + 202 * OS1_S1 + 50) =
                prefactor_y * *(b + 202 * OS1_S1 + 30) -
                p_over_q * *(b + 266 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 202 * OS1_S1 + 16);
            *(b + 202 * OS1_S1 + 51) =
                prefactor_z * *(b + 202 * OS1_S1 + 30) -
                p_over_q * *(b + 267 * OS1_S1 + 30) +
                one_over_two_q * *(b + 148 * OS1_S1 + 30);
            *(b + 202 * OS1_S1 + 52) =
                prefactor_z * *(b + 202 * OS1_S1 + 31) -
                p_over_q * *(b + 267 * OS1_S1 + 31) +
                one_over_two_q * *(b + 148 * OS1_S1 + 31) +
                one_over_two_q * *(b + 202 * OS1_S1 + 16);
            *(b + 202 * OS1_S1 + 53) =
                prefactor_y * *(b + 202 * OS1_S1 + 33) -
                p_over_q * *(b + 266 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 33) +
                one_over_two_q * *(b + 202 * OS1_S1 + 19);
            *(b + 202 * OS1_S1 + 54) =
                prefactor_y * *(b + 202 * OS1_S1 + 34) -
                p_over_q * *(b + 266 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 149 * OS1_S1 + 34);
            *(b + 202 * OS1_S1 + 55) =
                prefactor_z * *(b + 202 * OS1_S1 + 34) -
                p_over_q * *(b + 267 * OS1_S1 + 34) +
                one_over_two_q * *(b + 148 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 202 * OS1_S1 + 19);
            *(b + 203 * OS1_S1 + 35) =
                prefactor_x * *(b + 203 * OS1_S1 + 20) -
                p_over_q * *(b + 258 * OS1_S1 + 20) +
                one_over_two_q * *(b + 158 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 203 * OS1_S1 + 10);
            *(b + 203 * OS1_S1 + 36) =
                prefactor_y * *(b + 203 * OS1_S1 + 20) -
                p_over_q * *(b + 267 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 20);
            *(b + 203 * OS1_S1 + 37) =
                prefactor_z * *(b + 203 * OS1_S1 + 20) -
                p_over_q * *(b + 268 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 20);
            *(b + 203 * OS1_S1 + 38) =
                prefactor_y * *(b + 203 * OS1_S1 + 21) -
                p_over_q * *(b + 267 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 21) +
                one_over_two_q * *(b + 203 * OS1_S1 + 10);
            *(b + 203 * OS1_S1 + 39) =
                prefactor_z * *(b + 203 * OS1_S1 + 21) -
                p_over_q * *(b + 268 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 21);
            *(b + 203 * OS1_S1 + 40) =
                prefactor_z * *(b + 203 * OS1_S1 + 22) -
                p_over_q * *(b + 268 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 22) +
                one_over_two_q * *(b + 203 * OS1_S1 + 10);
            *(b + 203 * OS1_S1 + 41) =
                prefactor_x * *(b + 203 * OS1_S1 + 26) -
                p_over_q * *(b + 258 * OS1_S1 + 26) +
                one_over_two_q * *(b + 158 * OS1_S1 + 26) +
                one_over_two_q * *(b + 203 * OS1_S1 + 16);
            *(b + 203 * OS1_S1 + 42) =
                prefactor_z * *(b + 203 * OS1_S1 + 23) -
                p_over_q * *(b + 268 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 23);
            *(b + 203 * OS1_S1 + 43) =
                prefactor_y * *(b + 203 * OS1_S1 + 25) -
                p_over_q * *(b + 267 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 25);
            *(b + 203 * OS1_S1 + 44) =
                prefactor_x * *(b + 203 * OS1_S1 + 29) -
                p_over_q * *(b + 258 * OS1_S1 + 29) +
                one_over_two_q * *(b + 158 * OS1_S1 + 29) +
                one_over_two_q * *(b + 203 * OS1_S1 + 19);
            *(b + 203 * OS1_S1 + 45) =
                prefactor_x * *(b + 203 * OS1_S1 + 30) -
                p_over_q * *(b + 258 * OS1_S1 + 30) +
                one_over_two_q * *(b + 158 * OS1_S1 + 30);
            *(b + 203 * OS1_S1 + 46) =
                prefactor_x * *(b + 203 * OS1_S1 + 31) -
                p_over_q * *(b + 258 * OS1_S1 + 31) +
                one_over_two_q * *(b + 158 * OS1_S1 + 31);
            *(b + 203 * OS1_S1 + 47) =
                prefactor_x * *(b + 203 * OS1_S1 + 32) -
                p_over_q * *(b + 258 * OS1_S1 + 32) +
                one_over_two_q * *(b + 158 * OS1_S1 + 32);
            *(b + 203 * OS1_S1 + 48) =
                prefactor_x * *(b + 203 * OS1_S1 + 33) -
                p_over_q * *(b + 258 * OS1_S1 + 33) +
                one_over_two_q * *(b + 158 * OS1_S1 + 33);
            *(b + 203 * OS1_S1 + 49) =
                prefactor_x * *(b + 203 * OS1_S1 + 34) -
                p_over_q * *(b + 258 * OS1_S1 + 34) +
                one_over_two_q * *(b + 158 * OS1_S1 + 34);
            *(b + 203 * OS1_S1 + 50) =
                prefactor_y * *(b + 203 * OS1_S1 + 30) -
                p_over_q * *(b + 267 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 203 * OS1_S1 + 16);
            *(b + 203 * OS1_S1 + 51) =
                prefactor_z * *(b + 203 * OS1_S1 + 30) -
                p_over_q * *(b + 268 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 30);
            *(b + 203 * OS1_S1 + 52) =
                prefactor_z * *(b + 203 * OS1_S1 + 31) -
                p_over_q * *(b + 268 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 31) +
                one_over_two_q * *(b + 203 * OS1_S1 + 16);
            *(b + 203 * OS1_S1 + 53) =
                prefactor_y * *(b + 203 * OS1_S1 + 33) -
                p_over_q * *(b + 267 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 33) +
                one_over_two_q * *(b + 203 * OS1_S1 + 19);
            *(b + 203 * OS1_S1 + 54) =
                prefactor_y * *(b + 203 * OS1_S1 + 34) -
                p_over_q * *(b + 267 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 150 * OS1_S1 + 34);
            *(b + 203 * OS1_S1 + 55) =
                prefactor_z * *(b + 203 * OS1_S1 + 34) -
                p_over_q * *(b + 268 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 149 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 203 * OS1_S1 + 19);
            *(b + 204 * OS1_S1 + 35) =
                prefactor_x * *(b + 204 * OS1_S1 + 20) -
                p_over_q * *(b + 259 * OS1_S1 + 20) +
                one_over_two_q * *(b + 159 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 10);
            *(b + 204 * OS1_S1 + 36) =
                prefactor_y * *(b + 204 * OS1_S1 + 20) -
                p_over_q * *(b + 268 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 20);
            *(b + 204 * OS1_S1 + 37) =
                prefactor_z * *(b + 204 * OS1_S1 + 20) -
                p_over_q * *(b + 269 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 20);
            *(b + 204 * OS1_S1 + 38) =
                prefactor_y * *(b + 204 * OS1_S1 + 21) -
                p_over_q * *(b + 268 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 21) +
                one_over_two_q * *(b + 204 * OS1_S1 + 10);
            *(b + 204 * OS1_S1 + 39) =
                prefactor_z * *(b + 204 * OS1_S1 + 21) -
                p_over_q * *(b + 269 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 21);
            *(b + 204 * OS1_S1 + 40) =
                prefactor_z * *(b + 204 * OS1_S1 + 22) -
                p_over_q * *(b + 269 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 22) +
                one_over_two_q * *(b + 204 * OS1_S1 + 10);
            *(b + 204 * OS1_S1 + 41) =
                prefactor_x * *(b + 204 * OS1_S1 + 26) -
                p_over_q * *(b + 259 * OS1_S1 + 26) +
                one_over_two_q * *(b + 159 * OS1_S1 + 26) +
                one_over_two_q * *(b + 204 * OS1_S1 + 16);
            *(b + 204 * OS1_S1 + 42) =
                prefactor_z * *(b + 204 * OS1_S1 + 23) -
                p_over_q * *(b + 269 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 23);
            *(b + 204 * OS1_S1 + 43) =
                prefactor_y * *(b + 204 * OS1_S1 + 25) -
                p_over_q * *(b + 268 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 25);
            *(b + 204 * OS1_S1 + 44) =
                prefactor_x * *(b + 204 * OS1_S1 + 29) -
                p_over_q * *(b + 259 * OS1_S1 + 29) +
                one_over_two_q * *(b + 159 * OS1_S1 + 29) +
                one_over_two_q * *(b + 204 * OS1_S1 + 19);
            *(b + 204 * OS1_S1 + 45) =
                prefactor_x * *(b + 204 * OS1_S1 + 30) -
                p_over_q * *(b + 259 * OS1_S1 + 30) +
                one_over_two_q * *(b + 159 * OS1_S1 + 30);
            *(b + 204 * OS1_S1 + 46) =
                prefactor_x * *(b + 204 * OS1_S1 + 31) -
                p_over_q * *(b + 259 * OS1_S1 + 31) +
                one_over_two_q * *(b + 159 * OS1_S1 + 31);
            *(b + 204 * OS1_S1 + 47) =
                prefactor_x * *(b + 204 * OS1_S1 + 32) -
                p_over_q * *(b + 259 * OS1_S1 + 32) +
                one_over_two_q * *(b + 159 * OS1_S1 + 32);
            *(b + 204 * OS1_S1 + 48) =
                prefactor_x * *(b + 204 * OS1_S1 + 33) -
                p_over_q * *(b + 259 * OS1_S1 + 33) +
                one_over_two_q * *(b + 159 * OS1_S1 + 33);
            *(b + 204 * OS1_S1 + 49) =
                prefactor_x * *(b + 204 * OS1_S1 + 34) -
                p_over_q * *(b + 259 * OS1_S1 + 34) +
                one_over_two_q * *(b + 159 * OS1_S1 + 34);
            *(b + 204 * OS1_S1 + 50) =
                prefactor_y * *(b + 204 * OS1_S1 + 30) -
                p_over_q * *(b + 268 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 16);
            *(b + 204 * OS1_S1 + 51) =
                prefactor_z * *(b + 204 * OS1_S1 + 30) -
                p_over_q * *(b + 269 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 30);
            *(b + 204 * OS1_S1 + 52) =
                prefactor_z * *(b + 204 * OS1_S1 + 31) -
                p_over_q * *(b + 269 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 31) +
                one_over_two_q * *(b + 204 * OS1_S1 + 16);
            *(b + 204 * OS1_S1 + 53) =
                prefactor_y * *(b + 204 * OS1_S1 + 33) -
                p_over_q * *(b + 268 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 33) +
                one_over_two_q * *(b + 204 * OS1_S1 + 19);
            *(b + 204 * OS1_S1 + 54) =
                prefactor_y * *(b + 204 * OS1_S1 + 34) -
                p_over_q * *(b + 268 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 151 * OS1_S1 + 34);
            *(b + 204 * OS1_S1 + 55) =
                prefactor_z * *(b + 204 * OS1_S1 + 34) -
                p_over_q * *(b + 269 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 150 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 19);
            *(b + 205 * OS1_S1 + 35) =
                prefactor_x * *(b + 205 * OS1_S1 + 20) -
                p_over_q * *(b + 260 * OS1_S1 + 20) +
                one_over_two_q * *(b + 160 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 205 * OS1_S1 + 10);
            *(b + 205 * OS1_S1 + 36) =
                prefactor_y * *(b + 205 * OS1_S1 + 20) -
                p_over_q * *(b + 269 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 20);
            *(b + 205 * OS1_S1 + 37) =
                prefactor_z * *(b + 205 * OS1_S1 + 20) -
                p_over_q * *(b + 270 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 20);
            *(b + 205 * OS1_S1 + 38) =
                prefactor_y * *(b + 205 * OS1_S1 + 21) -
                p_over_q * *(b + 269 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 21) +
                one_over_two_q * *(b + 205 * OS1_S1 + 10);
            *(b + 205 * OS1_S1 + 39) =
                prefactor_z * *(b + 205 * OS1_S1 + 21) -
                p_over_q * *(b + 270 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 21);
            *(b + 205 * OS1_S1 + 40) =
                prefactor_z * *(b + 205 * OS1_S1 + 22) -
                p_over_q * *(b + 270 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 22) +
                one_over_two_q * *(b + 205 * OS1_S1 + 10);
            *(b + 205 * OS1_S1 + 41) =
                prefactor_x * *(b + 205 * OS1_S1 + 26) -
                p_over_q * *(b + 260 * OS1_S1 + 26) +
                one_over_two_q * *(b + 160 * OS1_S1 + 26) +
                one_over_two_q * *(b + 205 * OS1_S1 + 16);
            *(b + 205 * OS1_S1 + 42) =
                prefactor_z * *(b + 205 * OS1_S1 + 23) -
                p_over_q * *(b + 270 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 23);
            *(b + 205 * OS1_S1 + 43) =
                prefactor_y * *(b + 205 * OS1_S1 + 25) -
                p_over_q * *(b + 269 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 25);
            *(b + 205 * OS1_S1 + 44) =
                prefactor_x * *(b + 205 * OS1_S1 + 29) -
                p_over_q * *(b + 260 * OS1_S1 + 29) +
                one_over_two_q * *(b + 160 * OS1_S1 + 29) +
                one_over_two_q * *(b + 205 * OS1_S1 + 19);
            *(b + 205 * OS1_S1 + 45) =
                prefactor_x * *(b + 205 * OS1_S1 + 30) -
                p_over_q * *(b + 260 * OS1_S1 + 30) +
                one_over_two_q * *(b + 160 * OS1_S1 + 30);
            *(b + 205 * OS1_S1 + 46) =
                prefactor_x * *(b + 205 * OS1_S1 + 31) -
                p_over_q * *(b + 260 * OS1_S1 + 31) +
                one_over_two_q * *(b + 160 * OS1_S1 + 31);
            *(b + 205 * OS1_S1 + 47) =
                prefactor_x * *(b + 205 * OS1_S1 + 32) -
                p_over_q * *(b + 260 * OS1_S1 + 32) +
                one_over_two_q * *(b + 160 * OS1_S1 + 32);
            *(b + 205 * OS1_S1 + 48) =
                prefactor_x * *(b + 205 * OS1_S1 + 33) -
                p_over_q * *(b + 260 * OS1_S1 + 33) +
                one_over_two_q * *(b + 160 * OS1_S1 + 33);
            *(b + 205 * OS1_S1 + 49) =
                prefactor_x * *(b + 205 * OS1_S1 + 34) -
                p_over_q * *(b + 260 * OS1_S1 + 34) +
                one_over_two_q * *(b + 160 * OS1_S1 + 34);
            *(b + 205 * OS1_S1 + 50) =
                prefactor_y * *(b + 205 * OS1_S1 + 30) -
                p_over_q * *(b + 269 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 205 * OS1_S1 + 16);
            *(b + 205 * OS1_S1 + 51) =
                prefactor_z * *(b + 205 * OS1_S1 + 30) -
                p_over_q * *(b + 270 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 30);
            *(b + 205 * OS1_S1 + 52) =
                prefactor_z * *(b + 205 * OS1_S1 + 31) -
                p_over_q * *(b + 270 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 31) +
                one_over_two_q * *(b + 205 * OS1_S1 + 16);
            *(b + 205 * OS1_S1 + 53) =
                prefactor_y * *(b + 205 * OS1_S1 + 33) -
                p_over_q * *(b + 269 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 33) +
                one_over_two_q * *(b + 205 * OS1_S1 + 19);
            *(b + 205 * OS1_S1 + 54) =
                prefactor_y * *(b + 205 * OS1_S1 + 34) -
                p_over_q * *(b + 269 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 152 * OS1_S1 + 34);
            *(b + 205 * OS1_S1 + 55) =
                prefactor_z * *(b + 205 * OS1_S1 + 34) -
                p_over_q * *(b + 270 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 151 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 205 * OS1_S1 + 19);
            *(b + 206 * OS1_S1 + 35) =
                prefactor_x * *(b + 206 * OS1_S1 + 20) -
                p_over_q * *(b + 261 * OS1_S1 + 20) +
                one_over_two_q * *(b + 161 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 10);
            *(b + 206 * OS1_S1 + 36) =
                prefactor_y * *(b + 206 * OS1_S1 + 20) -
                p_over_q * *(b + 270 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 20);
            *(b + 206 * OS1_S1 + 37) =
                prefactor_z * *(b + 206 * OS1_S1 + 20) -
                p_over_q * *(b + 271 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 20);
            *(b + 206 * OS1_S1 + 38) =
                prefactor_y * *(b + 206 * OS1_S1 + 21) -
                p_over_q * *(b + 270 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 21) +
                one_over_two_q * *(b + 206 * OS1_S1 + 10);
            *(b + 206 * OS1_S1 + 39) =
                prefactor_y * *(b + 206 * OS1_S1 + 22) -
                p_over_q * *(b + 270 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 22);
            *(b + 206 * OS1_S1 + 40) =
                prefactor_z * *(b + 206 * OS1_S1 + 22) -
                p_over_q * *(b + 271 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 22) +
                one_over_two_q * *(b + 206 * OS1_S1 + 10);
            *(b + 206 * OS1_S1 + 41) =
                prefactor_x * *(b + 206 * OS1_S1 + 26) -
                p_over_q * *(b + 261 * OS1_S1 + 26) +
                one_over_two_q * *(b + 161 * OS1_S1 + 26) +
                one_over_two_q * *(b + 206 * OS1_S1 + 16);
            *(b + 206 * OS1_S1 + 42) =
                prefactor_z * *(b + 206 * OS1_S1 + 23) -
                p_over_q * *(b + 271 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 23);
            *(b + 206 * OS1_S1 + 43) =
                prefactor_y * *(b + 206 * OS1_S1 + 25) -
                p_over_q * *(b + 270 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 25);
            *(b + 206 * OS1_S1 + 44) =
                prefactor_x * *(b + 206 * OS1_S1 + 29) -
                p_over_q * *(b + 261 * OS1_S1 + 29) +
                one_over_two_q * *(b + 161 * OS1_S1 + 29) +
                one_over_two_q * *(b + 206 * OS1_S1 + 19);
            *(b + 206 * OS1_S1 + 45) =
                prefactor_x * *(b + 206 * OS1_S1 + 30) -
                p_over_q * *(b + 261 * OS1_S1 + 30) +
                one_over_two_q * *(b + 161 * OS1_S1 + 30);
            *(b + 206 * OS1_S1 + 46) =
                prefactor_x * *(b + 206 * OS1_S1 + 31) -
                p_over_q * *(b + 261 * OS1_S1 + 31) +
                one_over_two_q * *(b + 161 * OS1_S1 + 31);
            *(b + 206 * OS1_S1 + 47) =
                prefactor_x * *(b + 206 * OS1_S1 + 32) -
                p_over_q * *(b + 261 * OS1_S1 + 32) +
                one_over_two_q * *(b + 161 * OS1_S1 + 32);
            *(b + 206 * OS1_S1 + 48) =
                prefactor_x * *(b + 206 * OS1_S1 + 33) -
                p_over_q * *(b + 261 * OS1_S1 + 33) +
                one_over_two_q * *(b + 161 * OS1_S1 + 33);
            *(b + 206 * OS1_S1 + 49) =
                prefactor_x * *(b + 206 * OS1_S1 + 34) -
                p_over_q * *(b + 261 * OS1_S1 + 34) +
                one_over_two_q * *(b + 161 * OS1_S1 + 34);
            *(b + 206 * OS1_S1 + 50) =
                prefactor_y * *(b + 206 * OS1_S1 + 30) -
                p_over_q * *(b + 270 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 16);
            *(b + 206 * OS1_S1 + 51) =
                prefactor_z * *(b + 206 * OS1_S1 + 30) -
                p_over_q * *(b + 271 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 30);
            *(b + 206 * OS1_S1 + 52) =
                prefactor_z * *(b + 206 * OS1_S1 + 31) -
                p_over_q * *(b + 271 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 31) +
                one_over_two_q * *(b + 206 * OS1_S1 + 16);
            *(b + 206 * OS1_S1 + 53) =
                prefactor_y * *(b + 206 * OS1_S1 + 33) -
                p_over_q * *(b + 270 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 33) +
                one_over_two_q * *(b + 206 * OS1_S1 + 19);
            *(b + 206 * OS1_S1 + 54) =
                prefactor_y * *(b + 206 * OS1_S1 + 34) -
                p_over_q * *(b + 270 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 153 * OS1_S1 + 34);
            *(b + 206 * OS1_S1 + 55) =
                prefactor_z * *(b + 206 * OS1_S1 + 34) -
                p_over_q * *(b + 271 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 152 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 19);
            *(b + 207 * OS1_S1 + 35) =
                prefactor_x * *(b + 207 * OS1_S1 + 20) -
                p_over_q * *(b + 262 * OS1_S1 + 20) +
                one_over_two_q * *(b + 162 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 207 * OS1_S1 + 10);
            *(b + 207 * OS1_S1 + 36) =
                prefactor_y * *(b + 207 * OS1_S1 + 20) -
                p_over_q * *(b + 271 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 20);
            *(b + 207 * OS1_S1 + 37) =
                prefactor_z * *(b + 207 * OS1_S1 + 20) -
                p_over_q * *(b + 272 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 20);
            *(b + 207 * OS1_S1 + 38) =
                prefactor_y * *(b + 207 * OS1_S1 + 21) -
                p_over_q * *(b + 271 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 21) +
                one_over_two_q * *(b + 207 * OS1_S1 + 10);
            *(b + 207 * OS1_S1 + 39) =
                prefactor_y * *(b + 207 * OS1_S1 + 22) -
                p_over_q * *(b + 271 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 22);
            *(b + 207 * OS1_S1 + 40) =
                prefactor_z * *(b + 207 * OS1_S1 + 22) -
                p_over_q * *(b + 272 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 22) +
                one_over_two_q * *(b + 207 * OS1_S1 + 10);
            *(b + 207 * OS1_S1 + 41) =
                prefactor_x * *(b + 207 * OS1_S1 + 26) -
                p_over_q * *(b + 262 * OS1_S1 + 26) +
                one_over_two_q * *(b + 162 * OS1_S1 + 26) +
                one_over_two_q * *(b + 207 * OS1_S1 + 16);
            *(b + 207 * OS1_S1 + 42) =
                prefactor_z * *(b + 207 * OS1_S1 + 23) -
                p_over_q * *(b + 272 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 23);
            *(b + 207 * OS1_S1 + 43) =
                prefactor_y * *(b + 207 * OS1_S1 + 25) -
                p_over_q * *(b + 271 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 25);
            *(b + 207 * OS1_S1 + 44) =
                prefactor_x * *(b + 207 * OS1_S1 + 29) -
                p_over_q * *(b + 262 * OS1_S1 + 29) +
                one_over_two_q * *(b + 162 * OS1_S1 + 29) +
                one_over_two_q * *(b + 207 * OS1_S1 + 19);
            *(b + 207 * OS1_S1 + 45) =
                prefactor_x * *(b + 207 * OS1_S1 + 30) -
                p_over_q * *(b + 262 * OS1_S1 + 30) +
                one_over_two_q * *(b + 162 * OS1_S1 + 30);
            *(b + 207 * OS1_S1 + 46) =
                prefactor_x * *(b + 207 * OS1_S1 + 31) -
                p_over_q * *(b + 262 * OS1_S1 + 31) +
                one_over_two_q * *(b + 162 * OS1_S1 + 31);
            *(b + 207 * OS1_S1 + 47) =
                prefactor_x * *(b + 207 * OS1_S1 + 32) -
                p_over_q * *(b + 262 * OS1_S1 + 32) +
                one_over_two_q * *(b + 162 * OS1_S1 + 32);
            *(b + 207 * OS1_S1 + 48) =
                prefactor_x * *(b + 207 * OS1_S1 + 33) -
                p_over_q * *(b + 262 * OS1_S1 + 33) +
                one_over_two_q * *(b + 162 * OS1_S1 + 33);
            *(b + 207 * OS1_S1 + 49) =
                prefactor_x * *(b + 207 * OS1_S1 + 34) -
                p_over_q * *(b + 262 * OS1_S1 + 34) +
                one_over_two_q * *(b + 162 * OS1_S1 + 34);
            *(b + 207 * OS1_S1 + 50) =
                prefactor_y * *(b + 207 * OS1_S1 + 30) -
                p_over_q * *(b + 271 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 207 * OS1_S1 + 16);
            *(b + 207 * OS1_S1 + 51) =
                prefactor_z * *(b + 207 * OS1_S1 + 30) -
                p_over_q * *(b + 272 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 30);
            *(b + 207 * OS1_S1 + 52) =
                prefactor_z * *(b + 207 * OS1_S1 + 31) -
                p_over_q * *(b + 272 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 31) +
                one_over_two_q * *(b + 207 * OS1_S1 + 16);
            *(b + 207 * OS1_S1 + 53) =
                prefactor_y * *(b + 207 * OS1_S1 + 33) -
                p_over_q * *(b + 271 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 33) +
                one_over_two_q * *(b + 207 * OS1_S1 + 19);
            *(b + 207 * OS1_S1 + 54) =
                prefactor_y * *(b + 207 * OS1_S1 + 34) -
                p_over_q * *(b + 271 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 154 * OS1_S1 + 34);
            *(b + 207 * OS1_S1 + 55) =
                prefactor_z * *(b + 207 * OS1_S1 + 34) -
                p_over_q * *(b + 272 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 153 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 207 * OS1_S1 + 19);
            *(b + 208 * OS1_S1 + 35) =
                prefactor_x * *(b + 208 * OS1_S1 + 20) -
                p_over_q * *(b + 263 * OS1_S1 + 20) +
                one_over_two_q * *(b + 163 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 208 * OS1_S1 + 10);
            *(b + 208 * OS1_S1 + 36) =
                prefactor_y * *(b + 208 * OS1_S1 + 20) -
                p_over_q * *(b + 272 * OS1_S1 + 20) +
                one_over_two_q * *(b + 155 * OS1_S1 + 20);
            *(b + 208 * OS1_S1 + 37) =
                prefactor_z * *(b + 208 * OS1_S1 + 20) -
                p_over_q * *(b + 273 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 20);
            *(b + 208 * OS1_S1 + 38) =
                prefactor_y * *(b + 208 * OS1_S1 + 21) -
                p_over_q * *(b + 272 * OS1_S1 + 21) +
                one_over_two_q * *(b + 155 * OS1_S1 + 21) +
                one_over_two_q * *(b + 208 * OS1_S1 + 10);
            *(b + 208 * OS1_S1 + 39) =
                prefactor_y * *(b + 208 * OS1_S1 + 22) -
                p_over_q * *(b + 272 * OS1_S1 + 22) +
                one_over_two_q * *(b + 155 * OS1_S1 + 22);
            *(b + 208 * OS1_S1 + 40) =
                prefactor_z * *(b + 208 * OS1_S1 + 22) -
                p_over_q * *(b + 273 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 22) +
                one_over_two_q * *(b + 208 * OS1_S1 + 10);
            *(b + 208 * OS1_S1 + 41) =
                prefactor_x * *(b + 208 * OS1_S1 + 26) -
                p_over_q * *(b + 263 * OS1_S1 + 26) +
                one_over_two_q * *(b + 163 * OS1_S1 + 26) +
                one_over_two_q * *(b + 208 * OS1_S1 + 16);
            *(b + 208 * OS1_S1 + 42) =
                prefactor_z * *(b + 208 * OS1_S1 + 23) -
                p_over_q * *(b + 273 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 23);
            *(b + 208 * OS1_S1 + 43) =
                prefactor_y * *(b + 208 * OS1_S1 + 25) -
                p_over_q * *(b + 272 * OS1_S1 + 25) +
                one_over_two_q * *(b + 155 * OS1_S1 + 25);
            *(b + 208 * OS1_S1 + 44) =
                prefactor_x * *(b + 208 * OS1_S1 + 29) -
                p_over_q * *(b + 263 * OS1_S1 + 29) +
                one_over_two_q * *(b + 163 * OS1_S1 + 29) +
                one_over_two_q * *(b + 208 * OS1_S1 + 19);
            *(b + 208 * OS1_S1 + 45) =
                prefactor_x * *(b + 208 * OS1_S1 + 30) -
                p_over_q * *(b + 263 * OS1_S1 + 30) +
                one_over_two_q * *(b + 163 * OS1_S1 + 30);
            *(b + 208 * OS1_S1 + 46) =
                prefactor_x * *(b + 208 * OS1_S1 + 31) -
                p_over_q * *(b + 263 * OS1_S1 + 31) +
                one_over_two_q * *(b + 163 * OS1_S1 + 31);
            *(b + 208 * OS1_S1 + 47) =
                prefactor_x * *(b + 208 * OS1_S1 + 32) -
                p_over_q * *(b + 263 * OS1_S1 + 32) +
                one_over_two_q * *(b + 163 * OS1_S1 + 32);
            *(b + 208 * OS1_S1 + 48) =
                prefactor_y * *(b + 208 * OS1_S1 + 29) -
                p_over_q * *(b + 272 * OS1_S1 + 29) +
                one_over_two_q * *(b + 155 * OS1_S1 + 29);
            *(b + 208 * OS1_S1 + 49) =
                prefactor_x * *(b + 208 * OS1_S1 + 34) -
                p_over_q * *(b + 263 * OS1_S1 + 34) +
                one_over_two_q * *(b + 163 * OS1_S1 + 34);
            *(b + 208 * OS1_S1 + 50) =
                prefactor_y * *(b + 208 * OS1_S1 + 30) -
                p_over_q * *(b + 272 * OS1_S1 + 30) +
                one_over_two_q * *(b + 155 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 208 * OS1_S1 + 16);
            *(b + 208 * OS1_S1 + 51) =
                prefactor_z * *(b + 208 * OS1_S1 + 30) -
                p_over_q * *(b + 273 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 30);
            *(b + 208 * OS1_S1 + 52) =
                prefactor_z * *(b + 208 * OS1_S1 + 31) -
                p_over_q * *(b + 273 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 31) +
                one_over_two_q * *(b + 208 * OS1_S1 + 16);
            *(b + 208 * OS1_S1 + 53) =
                prefactor_y * *(b + 208 * OS1_S1 + 33) -
                p_over_q * *(b + 272 * OS1_S1 + 33) +
                one_over_two_q * *(b + 155 * OS1_S1 + 33) +
                one_over_two_q * *(b + 208 * OS1_S1 + 19);
            *(b + 208 * OS1_S1 + 54) =
                prefactor_y * *(b + 208 * OS1_S1 + 34) -
                p_over_q * *(b + 272 * OS1_S1 + 34) +
                one_over_two_q * *(b + 155 * OS1_S1 + 34);
            *(b + 208 * OS1_S1 + 55) =
                prefactor_z * *(b + 208 * OS1_S1 + 34) -
                p_over_q * *(b + 273 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 154 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 208 * OS1_S1 + 19);
            *(b + 209 * OS1_S1 + 35) =
                prefactor_x * *(b + 209 * OS1_S1 + 20) -
                p_over_q * *(b + 264 * OS1_S1 + 20) +
                one_over_two_q * *(b + 164 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 209 * OS1_S1 + 10);
            *(b + 209 * OS1_S1 + 36) = prefactor_y * *(b + 209 * OS1_S1 + 20) -
                                       p_over_q * *(b + 273 * OS1_S1 + 20);
            *(b + 209 * OS1_S1 + 37) =
                prefactor_z * *(b + 209 * OS1_S1 + 20) -
                p_over_q * *(b + 274 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 20);
            *(b + 209 * OS1_S1 + 38) =
                prefactor_y * *(b + 209 * OS1_S1 + 21) -
                p_over_q * *(b + 273 * OS1_S1 + 21) +
                one_over_two_q * *(b + 209 * OS1_S1 + 10);
            *(b + 209 * OS1_S1 + 39) = prefactor_y * *(b + 209 * OS1_S1 + 22) -
                                       p_over_q * *(b + 273 * OS1_S1 + 22);
            *(b + 209 * OS1_S1 + 40) =
                prefactor_z * *(b + 209 * OS1_S1 + 22) -
                p_over_q * *(b + 274 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 22) +
                one_over_two_q * *(b + 209 * OS1_S1 + 10);
            *(b + 209 * OS1_S1 + 41) =
                prefactor_x * *(b + 209 * OS1_S1 + 26) -
                p_over_q * *(b + 264 * OS1_S1 + 26) +
                one_over_two_q * *(b + 164 * OS1_S1 + 26) +
                one_over_two_q * *(b + 209 * OS1_S1 + 16);
            *(b + 209 * OS1_S1 + 42) =
                prefactor_z * *(b + 209 * OS1_S1 + 23) -
                p_over_q * *(b + 274 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 23);
            *(b + 209 * OS1_S1 + 43) = prefactor_y * *(b + 209 * OS1_S1 + 25) -
                                       p_over_q * *(b + 273 * OS1_S1 + 25);
            *(b + 209 * OS1_S1 + 44) =
                prefactor_x * *(b + 209 * OS1_S1 + 29) -
                p_over_q * *(b + 264 * OS1_S1 + 29) +
                one_over_two_q * *(b + 164 * OS1_S1 + 29) +
                one_over_two_q * *(b + 209 * OS1_S1 + 19);
            *(b + 209 * OS1_S1 + 45) =
                prefactor_x * *(b + 209 * OS1_S1 + 30) -
                p_over_q * *(b + 264 * OS1_S1 + 30) +
                one_over_two_q * *(b + 164 * OS1_S1 + 30);
            *(b + 209 * OS1_S1 + 46) =
                prefactor_x * *(b + 209 * OS1_S1 + 31) -
                p_over_q * *(b + 264 * OS1_S1 + 31) +
                one_over_two_q * *(b + 164 * OS1_S1 + 31);
            *(b + 209 * OS1_S1 + 47) =
                prefactor_x * *(b + 209 * OS1_S1 + 32) -
                p_over_q * *(b + 264 * OS1_S1 + 32) +
                one_over_two_q * *(b + 164 * OS1_S1 + 32);
            *(b + 209 * OS1_S1 + 48) = prefactor_y * *(b + 209 * OS1_S1 + 29) -
                                       p_over_q * *(b + 273 * OS1_S1 + 29);
            *(b + 209 * OS1_S1 + 49) =
                prefactor_x * *(b + 209 * OS1_S1 + 34) -
                p_over_q * *(b + 264 * OS1_S1 + 34) +
                one_over_two_q * *(b + 164 * OS1_S1 + 34);
            *(b + 209 * OS1_S1 + 50) =
                prefactor_y * *(b + 209 * OS1_S1 + 30) -
                p_over_q * *(b + 273 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 209 * OS1_S1 + 16);
            *(b + 209 * OS1_S1 + 51) =
                prefactor_z * *(b + 209 * OS1_S1 + 30) -
                p_over_q * *(b + 274 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 30);
            *(b + 209 * OS1_S1 + 52) =
                prefactor_z * *(b + 209 * OS1_S1 + 31) -
                p_over_q * *(b + 274 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 31) +
                one_over_two_q * *(b + 209 * OS1_S1 + 16);
            *(b + 209 * OS1_S1 + 53) =
                prefactor_y * *(b + 209 * OS1_S1 + 33) -
                p_over_q * *(b + 273 * OS1_S1 + 33) +
                one_over_two_q * *(b + 209 * OS1_S1 + 19);
            *(b + 209 * OS1_S1 + 54) = prefactor_y * *(b + 209 * OS1_S1 + 34) -
                                       p_over_q * *(b + 273 * OS1_S1 + 34);
            *(b + 209 * OS1_S1 + 55) =
                prefactor_z * *(b + 209 * OS1_S1 + 34) -
                p_over_q * *(b + 274 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 155 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 209 * OS1_S1 + 19);
            *(b + 210 * OS1_S1 + 35) =
                prefactor_x * *(b + 210 * OS1_S1 + 20) -
                p_over_q * *(b + 265 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 210 * OS1_S1 + 10);
            *(b + 210 * OS1_S1 + 36) =
                prefactor_y * *(b + 210 * OS1_S1 + 20) -
                p_over_q * *(b + 275 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 20);
            *(b + 210 * OS1_S1 + 37) = prefactor_z * *(b + 210 * OS1_S1 + 20) -
                                       p_over_q * *(b + 276 * OS1_S1 + 20);
            *(b + 210 * OS1_S1 + 38) =
                prefactor_y * *(b + 210 * OS1_S1 + 21) -
                p_over_q * *(b + 275 * OS1_S1 + 21) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 21) +
                one_over_two_q * *(b + 210 * OS1_S1 + 10);
            *(b + 210 * OS1_S1 + 39) = prefactor_z * *(b + 210 * OS1_S1 + 21) -
                                       p_over_q * *(b + 276 * OS1_S1 + 21);
            *(b + 210 * OS1_S1 + 40) =
                prefactor_z * *(b + 210 * OS1_S1 + 22) -
                p_over_q * *(b + 276 * OS1_S1 + 22) +
                one_over_two_q * *(b + 210 * OS1_S1 + 10);
            *(b + 210 * OS1_S1 + 41) =
                prefactor_x * *(b + 210 * OS1_S1 + 26) -
                p_over_q * *(b + 265 * OS1_S1 + 26) +
                one_over_two_q * *(b + 210 * OS1_S1 + 16);
            *(b + 210 * OS1_S1 + 42) = prefactor_z * *(b + 210 * OS1_S1 + 23) -
                                       p_over_q * *(b + 276 * OS1_S1 + 23);
            *(b + 210 * OS1_S1 + 43) =
                prefactor_y * *(b + 210 * OS1_S1 + 25) -
                p_over_q * *(b + 275 * OS1_S1 + 25) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 25);
            *(b + 210 * OS1_S1 + 44) =
                prefactor_x * *(b + 210 * OS1_S1 + 29) -
                p_over_q * *(b + 265 * OS1_S1 + 29) +
                one_over_two_q * *(b + 210 * OS1_S1 + 19);
            *(b + 210 * OS1_S1 + 45) = prefactor_x * *(b + 210 * OS1_S1 + 30) -
                                       p_over_q * *(b + 265 * OS1_S1 + 30);
            *(b + 210 * OS1_S1 + 46) = prefactor_z * *(b + 210 * OS1_S1 + 26) -
                                       p_over_q * *(b + 276 * OS1_S1 + 26);
            *(b + 210 * OS1_S1 + 47) = prefactor_x * *(b + 210 * OS1_S1 + 32) -
                                       p_over_q * *(b + 265 * OS1_S1 + 32);
            *(b + 210 * OS1_S1 + 48) = prefactor_x * *(b + 210 * OS1_S1 + 33) -
                                       p_over_q * *(b + 265 * OS1_S1 + 33);
            *(b + 210 * OS1_S1 + 49) = prefactor_x * *(b + 210 * OS1_S1 + 34) -
                                       p_over_q * *(b + 265 * OS1_S1 + 34);
            *(b + 210 * OS1_S1 + 50) =
                prefactor_y * *(b + 210 * OS1_S1 + 30) -
                p_over_q * *(b + 275 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 210 * OS1_S1 + 16);
            *(b + 210 * OS1_S1 + 51) = prefactor_z * *(b + 210 * OS1_S1 + 30) -
                                       p_over_q * *(b + 276 * OS1_S1 + 30);
            *(b + 210 * OS1_S1 + 52) =
                prefactor_z * *(b + 210 * OS1_S1 + 31) -
                p_over_q * *(b + 276 * OS1_S1 + 31) +
                one_over_two_q * *(b + 210 * OS1_S1 + 16);
            *(b + 210 * OS1_S1 + 53) =
                prefactor_y * *(b + 210 * OS1_S1 + 33) -
                p_over_q * *(b + 275 * OS1_S1 + 33) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 33) +
                one_over_two_q * *(b + 210 * OS1_S1 + 19);
            *(b + 210 * OS1_S1 + 54) =
                prefactor_y * *(b + 210 * OS1_S1 + 34) -
                p_over_q * *(b + 275 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 156 * OS1_S1 + 34);
            *(b + 210 * OS1_S1 + 55) =
                prefactor_z * *(b + 210 * OS1_S1 + 34) -
                p_over_q * *(b + 276 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 210 * OS1_S1 + 19);
            *(b + 211 * OS1_S1 + 35) =
                prefactor_x * *(b + 211 * OS1_S1 + 20) -
                p_over_q * *(b + 266 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 211 * OS1_S1 + 10);
            *(b + 211 * OS1_S1 + 36) =
                prefactor_y * *(b + 211 * OS1_S1 + 20) -
                p_over_q * *(b + 276 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 20);
            *(b + 211 * OS1_S1 + 37) =
                prefactor_z * *(b + 211 * OS1_S1 + 20) -
                p_over_q * *(b + 277 * OS1_S1 + 20) +
                one_over_two_q * *(b + 156 * OS1_S1 + 20);
            *(b + 211 * OS1_S1 + 38) =
                prefactor_y * *(b + 211 * OS1_S1 + 21) -
                p_over_q * *(b + 276 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 21) +
                one_over_two_q * *(b + 211 * OS1_S1 + 10);
            *(b + 211 * OS1_S1 + 39) =
                prefactor_z * *(b + 211 * OS1_S1 + 21) -
                p_over_q * *(b + 277 * OS1_S1 + 21) +
                one_over_two_q * *(b + 156 * OS1_S1 + 21);
            *(b + 211 * OS1_S1 + 40) =
                prefactor_z * *(b + 211 * OS1_S1 + 22) -
                p_over_q * *(b + 277 * OS1_S1 + 22) +
                one_over_two_q * *(b + 156 * OS1_S1 + 22) +
                one_over_two_q * *(b + 211 * OS1_S1 + 10);
            *(b + 211 * OS1_S1 + 41) =
                prefactor_x * *(b + 211 * OS1_S1 + 26) -
                p_over_q * *(b + 266 * OS1_S1 + 26) +
                one_over_two_q * *(b + 211 * OS1_S1 + 16);
            *(b + 211 * OS1_S1 + 42) =
                prefactor_z * *(b + 211 * OS1_S1 + 23) -
                p_over_q * *(b + 277 * OS1_S1 + 23) +
                one_over_two_q * *(b + 156 * OS1_S1 + 23);
            *(b + 211 * OS1_S1 + 43) =
                prefactor_y * *(b + 211 * OS1_S1 + 25) -
                p_over_q * *(b + 276 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 25);
            *(b + 211 * OS1_S1 + 44) =
                prefactor_x * *(b + 211 * OS1_S1 + 29) -
                p_over_q * *(b + 266 * OS1_S1 + 29) +
                one_over_two_q * *(b + 211 * OS1_S1 + 19);
            *(b + 211 * OS1_S1 + 45) = prefactor_x * *(b + 211 * OS1_S1 + 30) -
                                       p_over_q * *(b + 266 * OS1_S1 + 30);
            *(b + 211 * OS1_S1 + 46) = prefactor_x * *(b + 211 * OS1_S1 + 31) -
                                       p_over_q * *(b + 266 * OS1_S1 + 31);
            *(b + 211 * OS1_S1 + 47) = prefactor_x * *(b + 211 * OS1_S1 + 32) -
                                       p_over_q * *(b + 266 * OS1_S1 + 32);
            *(b + 211 * OS1_S1 + 48) = prefactor_x * *(b + 211 * OS1_S1 + 33) -
                                       p_over_q * *(b + 266 * OS1_S1 + 33);
            *(b + 211 * OS1_S1 + 49) = prefactor_x * *(b + 211 * OS1_S1 + 34) -
                                       p_over_q * *(b + 266 * OS1_S1 + 34);
            *(b + 211 * OS1_S1 + 50) =
                prefactor_y * *(b + 211 * OS1_S1 + 30) -
                p_over_q * *(b + 276 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 211 * OS1_S1 + 16);
            *(b + 211 * OS1_S1 + 51) =
                prefactor_z * *(b + 211 * OS1_S1 + 30) -
                p_over_q * *(b + 277 * OS1_S1 + 30) +
                one_over_two_q * *(b + 156 * OS1_S1 + 30);
            *(b + 211 * OS1_S1 + 52) =
                prefactor_z * *(b + 211 * OS1_S1 + 31) -
                p_over_q * *(b + 277 * OS1_S1 + 31) +
                one_over_two_q * *(b + 156 * OS1_S1 + 31) +
                one_over_two_q * *(b + 211 * OS1_S1 + 16);
            *(b + 211 * OS1_S1 + 53) =
                prefactor_y * *(b + 211 * OS1_S1 + 33) -
                p_over_q * *(b + 276 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 33) +
                one_over_two_q * *(b + 211 * OS1_S1 + 19);
            *(b + 211 * OS1_S1 + 54) =
                prefactor_y * *(b + 211 * OS1_S1 + 34) -
                p_over_q * *(b + 276 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 157 * OS1_S1 + 34);
            *(b + 211 * OS1_S1 + 55) =
                prefactor_z * *(b + 211 * OS1_S1 + 34) -
                p_over_q * *(b + 277 * OS1_S1 + 34) +
                one_over_two_q * *(b + 156 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 211 * OS1_S1 + 19);
            *(b + 212 * OS1_S1 + 35) =
                prefactor_x * *(b + 212 * OS1_S1 + 20) -
                p_over_q * *(b + 267 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 212 * OS1_S1 + 10);
            *(b + 212 * OS1_S1 + 36) =
                prefactor_y * *(b + 212 * OS1_S1 + 20) -
                p_over_q * *(b + 277 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 20);
            *(b + 212 * OS1_S1 + 37) =
                prefactor_z * *(b + 212 * OS1_S1 + 20) -
                p_over_q * *(b + 278 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 20);
            *(b + 212 * OS1_S1 + 38) =
                prefactor_y * *(b + 212 * OS1_S1 + 21) -
                p_over_q * *(b + 277 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 21) +
                one_over_two_q * *(b + 212 * OS1_S1 + 10);
            *(b + 212 * OS1_S1 + 39) =
                prefactor_z * *(b + 212 * OS1_S1 + 21) -
                p_over_q * *(b + 278 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 21);
            *(b + 212 * OS1_S1 + 40) =
                prefactor_z * *(b + 212 * OS1_S1 + 22) -
                p_over_q * *(b + 278 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 22) +
                one_over_two_q * *(b + 212 * OS1_S1 + 10);
            *(b + 212 * OS1_S1 + 41) =
                prefactor_x * *(b + 212 * OS1_S1 + 26) -
                p_over_q * *(b + 267 * OS1_S1 + 26) +
                one_over_two_q * *(b + 212 * OS1_S1 + 16);
            *(b + 212 * OS1_S1 + 42) =
                prefactor_z * *(b + 212 * OS1_S1 + 23) -
                p_over_q * *(b + 278 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 23);
            *(b + 212 * OS1_S1 + 43) =
                prefactor_y * *(b + 212 * OS1_S1 + 25) -
                p_over_q * *(b + 277 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 25);
            *(b + 212 * OS1_S1 + 44) =
                prefactor_x * *(b + 212 * OS1_S1 + 29) -
                p_over_q * *(b + 267 * OS1_S1 + 29) +
                one_over_two_q * *(b + 212 * OS1_S1 + 19);
            *(b + 212 * OS1_S1 + 45) = prefactor_x * *(b + 212 * OS1_S1 + 30) -
                                       p_over_q * *(b + 267 * OS1_S1 + 30);
            *(b + 212 * OS1_S1 + 46) = prefactor_x * *(b + 212 * OS1_S1 + 31) -
                                       p_over_q * *(b + 267 * OS1_S1 + 31);
            *(b + 212 * OS1_S1 + 47) = prefactor_x * *(b + 212 * OS1_S1 + 32) -
                                       p_over_q * *(b + 267 * OS1_S1 + 32);
            *(b + 212 * OS1_S1 + 48) = prefactor_x * *(b + 212 * OS1_S1 + 33) -
                                       p_over_q * *(b + 267 * OS1_S1 + 33);
            *(b + 212 * OS1_S1 + 49) = prefactor_x * *(b + 212 * OS1_S1 + 34) -
                                       p_over_q * *(b + 267 * OS1_S1 + 34);
            *(b + 212 * OS1_S1 + 50) =
                prefactor_y * *(b + 212 * OS1_S1 + 30) -
                p_over_q * *(b + 277 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 212 * OS1_S1 + 16);
            *(b + 212 * OS1_S1 + 51) =
                prefactor_z * *(b + 212 * OS1_S1 + 30) -
                p_over_q * *(b + 278 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 30);
            *(b + 212 * OS1_S1 + 52) =
                prefactor_z * *(b + 212 * OS1_S1 + 31) -
                p_over_q * *(b + 278 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 31) +
                one_over_two_q * *(b + 212 * OS1_S1 + 16);
            *(b + 212 * OS1_S1 + 53) =
                prefactor_y * *(b + 212 * OS1_S1 + 33) -
                p_over_q * *(b + 277 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 33) +
                one_over_two_q * *(b + 212 * OS1_S1 + 19);
            *(b + 212 * OS1_S1 + 54) =
                prefactor_y * *(b + 212 * OS1_S1 + 34) -
                p_over_q * *(b + 277 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 158 * OS1_S1 + 34);
            *(b + 212 * OS1_S1 + 55) =
                prefactor_z * *(b + 212 * OS1_S1 + 34) -
                p_over_q * *(b + 278 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 157 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 212 * OS1_S1 + 19);
            *(b + 213 * OS1_S1 + 35) =
                prefactor_x * *(b + 213 * OS1_S1 + 20) -
                p_over_q * *(b + 268 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 10);
            *(b + 213 * OS1_S1 + 36) =
                prefactor_y * *(b + 213 * OS1_S1 + 20) -
                p_over_q * *(b + 278 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 20);
            *(b + 213 * OS1_S1 + 37) =
                prefactor_z * *(b + 213 * OS1_S1 + 20) -
                p_over_q * *(b + 279 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 20);
            *(b + 213 * OS1_S1 + 38) =
                prefactor_y * *(b + 213 * OS1_S1 + 21) -
                p_over_q * *(b + 278 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 21) +
                one_over_two_q * *(b + 213 * OS1_S1 + 10);
            *(b + 213 * OS1_S1 + 39) =
                prefactor_z * *(b + 213 * OS1_S1 + 21) -
                p_over_q * *(b + 279 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 21);
            *(b + 213 * OS1_S1 + 40) =
                prefactor_z * *(b + 213 * OS1_S1 + 22) -
                p_over_q * *(b + 279 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 22) +
                one_over_two_q * *(b + 213 * OS1_S1 + 10);
            *(b + 213 * OS1_S1 + 41) =
                prefactor_x * *(b + 213 * OS1_S1 + 26) -
                p_over_q * *(b + 268 * OS1_S1 + 26) +
                one_over_two_q * *(b + 213 * OS1_S1 + 16);
            *(b + 213 * OS1_S1 + 42) =
                prefactor_z * *(b + 213 * OS1_S1 + 23) -
                p_over_q * *(b + 279 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 23);
            *(b + 213 * OS1_S1 + 43) =
                prefactor_y * *(b + 213 * OS1_S1 + 25) -
                p_over_q * *(b + 278 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 25);
            *(b + 213 * OS1_S1 + 44) =
                prefactor_x * *(b + 213 * OS1_S1 + 29) -
                p_over_q * *(b + 268 * OS1_S1 + 29) +
                one_over_two_q * *(b + 213 * OS1_S1 + 19);
            *(b + 213 * OS1_S1 + 45) = prefactor_x * *(b + 213 * OS1_S1 + 30) -
                                       p_over_q * *(b + 268 * OS1_S1 + 30);
            *(b + 213 * OS1_S1 + 46) = prefactor_x * *(b + 213 * OS1_S1 + 31) -
                                       p_over_q * *(b + 268 * OS1_S1 + 31);
            *(b + 213 * OS1_S1 + 47) = prefactor_x * *(b + 213 * OS1_S1 + 32) -
                                       p_over_q * *(b + 268 * OS1_S1 + 32);
            *(b + 213 * OS1_S1 + 48) = prefactor_x * *(b + 213 * OS1_S1 + 33) -
                                       p_over_q * *(b + 268 * OS1_S1 + 33);
            *(b + 213 * OS1_S1 + 49) = prefactor_x * *(b + 213 * OS1_S1 + 34) -
                                       p_over_q * *(b + 268 * OS1_S1 + 34);
            *(b + 213 * OS1_S1 + 50) =
                prefactor_y * *(b + 213 * OS1_S1 + 30) -
                p_over_q * *(b + 278 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 16);
            *(b + 213 * OS1_S1 + 51) =
                prefactor_z * *(b + 213 * OS1_S1 + 30) -
                p_over_q * *(b + 279 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 30);
            *(b + 213 * OS1_S1 + 52) =
                prefactor_z * *(b + 213 * OS1_S1 + 31) -
                p_over_q * *(b + 279 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 31) +
                one_over_two_q * *(b + 213 * OS1_S1 + 16);
            *(b + 213 * OS1_S1 + 53) =
                prefactor_y * *(b + 213 * OS1_S1 + 33) -
                p_over_q * *(b + 278 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 33) +
                one_over_two_q * *(b + 213 * OS1_S1 + 19);
            *(b + 213 * OS1_S1 + 54) =
                prefactor_y * *(b + 213 * OS1_S1 + 34) -
                p_over_q * *(b + 278 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 159 * OS1_S1 + 34);
            *(b + 213 * OS1_S1 + 55) =
                prefactor_z * *(b + 213 * OS1_S1 + 34) -
                p_over_q * *(b + 279 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 158 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 19);
            *(b + 214 * OS1_S1 + 35) =
                prefactor_x * *(b + 214 * OS1_S1 + 20) -
                p_over_q * *(b + 269 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 214 * OS1_S1 + 10);
            *(b + 214 * OS1_S1 + 36) =
                prefactor_y * *(b + 214 * OS1_S1 + 20) -
                p_over_q * *(b + 279 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 20);
            *(b + 214 * OS1_S1 + 37) =
                prefactor_z * *(b + 214 * OS1_S1 + 20) -
                p_over_q * *(b + 280 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 20);
            *(b + 214 * OS1_S1 + 38) =
                prefactor_y * *(b + 214 * OS1_S1 + 21) -
                p_over_q * *(b + 279 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 21) +
                one_over_two_q * *(b + 214 * OS1_S1 + 10);
            *(b + 214 * OS1_S1 + 39) =
                prefactor_z * *(b + 214 * OS1_S1 + 21) -
                p_over_q * *(b + 280 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 21);
            *(b + 214 * OS1_S1 + 40) =
                prefactor_z * *(b + 214 * OS1_S1 + 22) -
                p_over_q * *(b + 280 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 22) +
                one_over_two_q * *(b + 214 * OS1_S1 + 10);
            *(b + 214 * OS1_S1 + 41) =
                prefactor_x * *(b + 214 * OS1_S1 + 26) -
                p_over_q * *(b + 269 * OS1_S1 + 26) +
                one_over_two_q * *(b + 214 * OS1_S1 + 16);
            *(b + 214 * OS1_S1 + 42) =
                prefactor_z * *(b + 214 * OS1_S1 + 23) -
                p_over_q * *(b + 280 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 23);
            *(b + 214 * OS1_S1 + 43) =
                prefactor_y * *(b + 214 * OS1_S1 + 25) -
                p_over_q * *(b + 279 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 25);
            *(b + 214 * OS1_S1 + 44) =
                prefactor_x * *(b + 214 * OS1_S1 + 29) -
                p_over_q * *(b + 269 * OS1_S1 + 29) +
                one_over_two_q * *(b + 214 * OS1_S1 + 19);
            *(b + 214 * OS1_S1 + 45) = prefactor_x * *(b + 214 * OS1_S1 + 30) -
                                       p_over_q * *(b + 269 * OS1_S1 + 30);
            *(b + 214 * OS1_S1 + 46) = prefactor_x * *(b + 214 * OS1_S1 + 31) -
                                       p_over_q * *(b + 269 * OS1_S1 + 31);
            *(b + 214 * OS1_S1 + 47) = prefactor_x * *(b + 214 * OS1_S1 + 32) -
                                       p_over_q * *(b + 269 * OS1_S1 + 32);
            *(b + 214 * OS1_S1 + 48) = prefactor_x * *(b + 214 * OS1_S1 + 33) -
                                       p_over_q * *(b + 269 * OS1_S1 + 33);
            *(b + 214 * OS1_S1 + 49) = prefactor_x * *(b + 214 * OS1_S1 + 34) -
                                       p_over_q * *(b + 269 * OS1_S1 + 34);
            *(b + 214 * OS1_S1 + 50) =
                prefactor_y * *(b + 214 * OS1_S1 + 30) -
                p_over_q * *(b + 279 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 214 * OS1_S1 + 16);
            *(b + 214 * OS1_S1 + 51) =
                prefactor_z * *(b + 214 * OS1_S1 + 30) -
                p_over_q * *(b + 280 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 30);
            *(b + 214 * OS1_S1 + 52) =
                prefactor_z * *(b + 214 * OS1_S1 + 31) -
                p_over_q * *(b + 280 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 31) +
                one_over_two_q * *(b + 214 * OS1_S1 + 16);
            *(b + 214 * OS1_S1 + 53) =
                prefactor_y * *(b + 214 * OS1_S1 + 33) -
                p_over_q * *(b + 279 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 33) +
                one_over_two_q * *(b + 214 * OS1_S1 + 19);
            *(b + 214 * OS1_S1 + 54) =
                prefactor_y * *(b + 214 * OS1_S1 + 34) -
                p_over_q * *(b + 279 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 34);
            *(b + 214 * OS1_S1 + 55) =
                prefactor_z * *(b + 214 * OS1_S1 + 34) -
                p_over_q * *(b + 280 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 159 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 214 * OS1_S1 + 19);
            *(b + 215 * OS1_S1 + 35) =
                prefactor_x * *(b + 215 * OS1_S1 + 20) -
                p_over_q * *(b + 270 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 215 * OS1_S1 + 10);
            *(b + 215 * OS1_S1 + 36) =
                prefactor_y * *(b + 215 * OS1_S1 + 20) -
                p_over_q * *(b + 280 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 20);
            *(b + 215 * OS1_S1 + 37) =
                prefactor_z * *(b + 215 * OS1_S1 + 20) -
                p_over_q * *(b + 281 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 20);
            *(b + 215 * OS1_S1 + 38) =
                prefactor_y * *(b + 215 * OS1_S1 + 21) -
                p_over_q * *(b + 280 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 21) +
                one_over_two_q * *(b + 215 * OS1_S1 + 10);
            *(b + 215 * OS1_S1 + 39) =
                prefactor_y * *(b + 215 * OS1_S1 + 22) -
                p_over_q * *(b + 280 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 22);
            *(b + 215 * OS1_S1 + 40) =
                prefactor_z * *(b + 215 * OS1_S1 + 22) -
                p_over_q * *(b + 281 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 22) +
                one_over_two_q * *(b + 215 * OS1_S1 + 10);
            *(b + 215 * OS1_S1 + 41) =
                prefactor_x * *(b + 215 * OS1_S1 + 26) -
                p_over_q * *(b + 270 * OS1_S1 + 26) +
                one_over_two_q * *(b + 215 * OS1_S1 + 16);
            *(b + 215 * OS1_S1 + 42) =
                prefactor_z * *(b + 215 * OS1_S1 + 23) -
                p_over_q * *(b + 281 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 23);
            *(b + 215 * OS1_S1 + 43) =
                prefactor_y * *(b + 215 * OS1_S1 + 25) -
                p_over_q * *(b + 280 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 25);
            *(b + 215 * OS1_S1 + 44) =
                prefactor_x * *(b + 215 * OS1_S1 + 29) -
                p_over_q * *(b + 270 * OS1_S1 + 29) +
                one_over_two_q * *(b + 215 * OS1_S1 + 19);
            *(b + 215 * OS1_S1 + 45) = prefactor_x * *(b + 215 * OS1_S1 + 30) -
                                       p_over_q * *(b + 270 * OS1_S1 + 30);
            *(b + 215 * OS1_S1 + 46) = prefactor_x * *(b + 215 * OS1_S1 + 31) -
                                       p_over_q * *(b + 270 * OS1_S1 + 31);
            *(b + 215 * OS1_S1 + 47) = prefactor_x * *(b + 215 * OS1_S1 + 32) -
                                       p_over_q * *(b + 270 * OS1_S1 + 32);
            *(b + 215 * OS1_S1 + 48) = prefactor_x * *(b + 215 * OS1_S1 + 33) -
                                       p_over_q * *(b + 270 * OS1_S1 + 33);
            *(b + 215 * OS1_S1 + 49) = prefactor_x * *(b + 215 * OS1_S1 + 34) -
                                       p_over_q * *(b + 270 * OS1_S1 + 34);
            *(b + 215 * OS1_S1 + 50) =
                prefactor_y * *(b + 215 * OS1_S1 + 30) -
                p_over_q * *(b + 280 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 215 * OS1_S1 + 16);
            *(b + 215 * OS1_S1 + 51) =
                prefactor_z * *(b + 215 * OS1_S1 + 30) -
                p_over_q * *(b + 281 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 30);
            *(b + 215 * OS1_S1 + 52) =
                prefactor_z * *(b + 215 * OS1_S1 + 31) -
                p_over_q * *(b + 281 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 31) +
                one_over_two_q * *(b + 215 * OS1_S1 + 16);
            *(b + 215 * OS1_S1 + 53) =
                prefactor_y * *(b + 215 * OS1_S1 + 33) -
                p_over_q * *(b + 280 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 33) +
                one_over_two_q * *(b + 215 * OS1_S1 + 19);
            *(b + 215 * OS1_S1 + 54) =
                prefactor_y * *(b + 215 * OS1_S1 + 34) -
                p_over_q * *(b + 280 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 161 * OS1_S1 + 34);
            *(b + 215 * OS1_S1 + 55) =
                prefactor_z * *(b + 215 * OS1_S1 + 34) -
                p_over_q * *(b + 281 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 160 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 215 * OS1_S1 + 19);
            *(b + 216 * OS1_S1 + 35) =
                prefactor_x * *(b + 216 * OS1_S1 + 20) -
                p_over_q * *(b + 271 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 10);
            *(b + 216 * OS1_S1 + 36) =
                prefactor_y * *(b + 216 * OS1_S1 + 20) -
                p_over_q * *(b + 281 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 20);
            *(b + 216 * OS1_S1 + 37) =
                prefactor_z * *(b + 216 * OS1_S1 + 20) -
                p_over_q * *(b + 282 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 20);
            *(b + 216 * OS1_S1 + 38) =
                prefactor_y * *(b + 216 * OS1_S1 + 21) -
                p_over_q * *(b + 281 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 21) +
                one_over_two_q * *(b + 216 * OS1_S1 + 10);
            *(b + 216 * OS1_S1 + 39) =
                prefactor_y * *(b + 216 * OS1_S1 + 22) -
                p_over_q * *(b + 281 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 22);
            *(b + 216 * OS1_S1 + 40) =
                prefactor_z * *(b + 216 * OS1_S1 + 22) -
                p_over_q * *(b + 282 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 22) +
                one_over_two_q * *(b + 216 * OS1_S1 + 10);
            *(b + 216 * OS1_S1 + 41) =
                prefactor_x * *(b + 216 * OS1_S1 + 26) -
                p_over_q * *(b + 271 * OS1_S1 + 26) +
                one_over_two_q * *(b + 216 * OS1_S1 + 16);
            *(b + 216 * OS1_S1 + 42) =
                prefactor_z * *(b + 216 * OS1_S1 + 23) -
                p_over_q * *(b + 282 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 23);
            *(b + 216 * OS1_S1 + 43) =
                prefactor_y * *(b + 216 * OS1_S1 + 25) -
                p_over_q * *(b + 281 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 25);
            *(b + 216 * OS1_S1 + 44) =
                prefactor_x * *(b + 216 * OS1_S1 + 29) -
                p_over_q * *(b + 271 * OS1_S1 + 29) +
                one_over_two_q * *(b + 216 * OS1_S1 + 19);
            *(b + 216 * OS1_S1 + 45) = prefactor_x * *(b + 216 * OS1_S1 + 30) -
                                       p_over_q * *(b + 271 * OS1_S1 + 30);
            *(b + 216 * OS1_S1 + 46) = prefactor_x * *(b + 216 * OS1_S1 + 31) -
                                       p_over_q * *(b + 271 * OS1_S1 + 31);
            *(b + 216 * OS1_S1 + 47) = prefactor_x * *(b + 216 * OS1_S1 + 32) -
                                       p_over_q * *(b + 271 * OS1_S1 + 32);
            *(b + 216 * OS1_S1 + 48) = prefactor_x * *(b + 216 * OS1_S1 + 33) -
                                       p_over_q * *(b + 271 * OS1_S1 + 33);
            *(b + 216 * OS1_S1 + 49) = prefactor_x * *(b + 216 * OS1_S1 + 34) -
                                       p_over_q * *(b + 271 * OS1_S1 + 34);
            *(b + 216 * OS1_S1 + 50) =
                prefactor_y * *(b + 216 * OS1_S1 + 30) -
                p_over_q * *(b + 281 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 16);
            *(b + 216 * OS1_S1 + 51) =
                prefactor_z * *(b + 216 * OS1_S1 + 30) -
                p_over_q * *(b + 282 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 30);
            *(b + 216 * OS1_S1 + 52) =
                prefactor_z * *(b + 216 * OS1_S1 + 31) -
                p_over_q * *(b + 282 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 31) +
                one_over_two_q * *(b + 216 * OS1_S1 + 16);
            *(b + 216 * OS1_S1 + 53) =
                prefactor_y * *(b + 216 * OS1_S1 + 33) -
                p_over_q * *(b + 281 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 33) +
                one_over_two_q * *(b + 216 * OS1_S1 + 19);
            *(b + 216 * OS1_S1 + 54) =
                prefactor_y * *(b + 216 * OS1_S1 + 34) -
                p_over_q * *(b + 281 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 162 * OS1_S1 + 34);
            *(b + 216 * OS1_S1 + 55) =
                prefactor_z * *(b + 216 * OS1_S1 + 34) -
                p_over_q * *(b + 282 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 161 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 19);
            *(b + 217 * OS1_S1 + 35) =
                prefactor_x * *(b + 217 * OS1_S1 + 20) -
                p_over_q * *(b + 272 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 217 * OS1_S1 + 10);
            *(b + 217 * OS1_S1 + 36) =
                prefactor_y * *(b + 217 * OS1_S1 + 20) -
                p_over_q * *(b + 282 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 20);
            *(b + 217 * OS1_S1 + 37) =
                prefactor_z * *(b + 217 * OS1_S1 + 20) -
                p_over_q * *(b + 283 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 20);
            *(b + 217 * OS1_S1 + 38) =
                prefactor_y * *(b + 217 * OS1_S1 + 21) -
                p_over_q * *(b + 282 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 21) +
                one_over_two_q * *(b + 217 * OS1_S1 + 10);
            *(b + 217 * OS1_S1 + 39) =
                prefactor_y * *(b + 217 * OS1_S1 + 22) -
                p_over_q * *(b + 282 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 22);
            *(b + 217 * OS1_S1 + 40) =
                prefactor_z * *(b + 217 * OS1_S1 + 22) -
                p_over_q * *(b + 283 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 22) +
                one_over_two_q * *(b + 217 * OS1_S1 + 10);
            *(b + 217 * OS1_S1 + 41) =
                prefactor_x * *(b + 217 * OS1_S1 + 26) -
                p_over_q * *(b + 272 * OS1_S1 + 26) +
                one_over_two_q * *(b + 217 * OS1_S1 + 16);
            *(b + 217 * OS1_S1 + 42) =
                prefactor_z * *(b + 217 * OS1_S1 + 23) -
                p_over_q * *(b + 283 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 23);
            *(b + 217 * OS1_S1 + 43) =
                prefactor_y * *(b + 217 * OS1_S1 + 25) -
                p_over_q * *(b + 282 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 25);
            *(b + 217 * OS1_S1 + 44) =
                prefactor_x * *(b + 217 * OS1_S1 + 29) -
                p_over_q * *(b + 272 * OS1_S1 + 29) +
                one_over_two_q * *(b + 217 * OS1_S1 + 19);
            *(b + 217 * OS1_S1 + 45) = prefactor_x * *(b + 217 * OS1_S1 + 30) -
                                       p_over_q * *(b + 272 * OS1_S1 + 30);
            *(b + 217 * OS1_S1 + 46) = prefactor_x * *(b + 217 * OS1_S1 + 31) -
                                       p_over_q * *(b + 272 * OS1_S1 + 31);
            *(b + 217 * OS1_S1 + 47) = prefactor_x * *(b + 217 * OS1_S1 + 32) -
                                       p_over_q * *(b + 272 * OS1_S1 + 32);
            *(b + 217 * OS1_S1 + 48) = prefactor_x * *(b + 217 * OS1_S1 + 33) -
                                       p_over_q * *(b + 272 * OS1_S1 + 33);
            *(b + 217 * OS1_S1 + 49) = prefactor_x * *(b + 217 * OS1_S1 + 34) -
                                       p_over_q * *(b + 272 * OS1_S1 + 34);
            *(b + 217 * OS1_S1 + 50) =
                prefactor_y * *(b + 217 * OS1_S1 + 30) -
                p_over_q * *(b + 282 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 217 * OS1_S1 + 16);
            *(b + 217 * OS1_S1 + 51) =
                prefactor_z * *(b + 217 * OS1_S1 + 30) -
                p_over_q * *(b + 283 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 30);
            *(b + 217 * OS1_S1 + 52) =
                prefactor_z * *(b + 217 * OS1_S1 + 31) -
                p_over_q * *(b + 283 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 31) +
                one_over_two_q * *(b + 217 * OS1_S1 + 16);
            *(b + 217 * OS1_S1 + 53) =
                prefactor_y * *(b + 217 * OS1_S1 + 33) -
                p_over_q * *(b + 282 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 33) +
                one_over_two_q * *(b + 217 * OS1_S1 + 19);
            *(b + 217 * OS1_S1 + 54) =
                prefactor_y * *(b + 217 * OS1_S1 + 34) -
                p_over_q * *(b + 282 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 163 * OS1_S1 + 34);
            *(b + 217 * OS1_S1 + 55) =
                prefactor_z * *(b + 217 * OS1_S1 + 34) -
                p_over_q * *(b + 283 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 162 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 217 * OS1_S1 + 19);
            *(b + 218 * OS1_S1 + 35) =
                prefactor_x * *(b + 218 * OS1_S1 + 20) -
                p_over_q * *(b + 273 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 218 * OS1_S1 + 10);
            *(b + 218 * OS1_S1 + 36) =
                prefactor_y * *(b + 218 * OS1_S1 + 20) -
                p_over_q * *(b + 283 * OS1_S1 + 20) +
                one_over_two_q * *(b + 164 * OS1_S1 + 20);
            *(b + 218 * OS1_S1 + 37) =
                prefactor_z * *(b + 218 * OS1_S1 + 20) -
                p_over_q * *(b + 284 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 20);
            *(b + 218 * OS1_S1 + 38) =
                prefactor_y * *(b + 218 * OS1_S1 + 21) -
                p_over_q * *(b + 283 * OS1_S1 + 21) +
                one_over_two_q * *(b + 164 * OS1_S1 + 21) +
                one_over_two_q * *(b + 218 * OS1_S1 + 10);
            *(b + 218 * OS1_S1 + 39) =
                prefactor_y * *(b + 218 * OS1_S1 + 22) -
                p_over_q * *(b + 283 * OS1_S1 + 22) +
                one_over_two_q * *(b + 164 * OS1_S1 + 22);
            *(b + 218 * OS1_S1 + 40) =
                prefactor_z * *(b + 218 * OS1_S1 + 22) -
                p_over_q * *(b + 284 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 22) +
                one_over_two_q * *(b + 218 * OS1_S1 + 10);
            *(b + 218 * OS1_S1 + 41) =
                prefactor_x * *(b + 218 * OS1_S1 + 26) -
                p_over_q * *(b + 273 * OS1_S1 + 26) +
                one_over_two_q * *(b + 218 * OS1_S1 + 16);
            *(b + 218 * OS1_S1 + 42) =
                prefactor_z * *(b + 218 * OS1_S1 + 23) -
                p_over_q * *(b + 284 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 23);
            *(b + 218 * OS1_S1 + 43) =
                prefactor_y * *(b + 218 * OS1_S1 + 25) -
                p_over_q * *(b + 283 * OS1_S1 + 25) +
                one_over_two_q * *(b + 164 * OS1_S1 + 25);
            *(b + 218 * OS1_S1 + 44) =
                prefactor_x * *(b + 218 * OS1_S1 + 29) -
                p_over_q * *(b + 273 * OS1_S1 + 29) +
                one_over_two_q * *(b + 218 * OS1_S1 + 19);
            *(b + 218 * OS1_S1 + 45) = prefactor_x * *(b + 218 * OS1_S1 + 30) -
                                       p_over_q * *(b + 273 * OS1_S1 + 30);
            *(b + 218 * OS1_S1 + 46) = prefactor_x * *(b + 218 * OS1_S1 + 31) -
                                       p_over_q * *(b + 273 * OS1_S1 + 31);
            *(b + 218 * OS1_S1 + 47) = prefactor_x * *(b + 218 * OS1_S1 + 32) -
                                       p_over_q * *(b + 273 * OS1_S1 + 32);
            *(b + 218 * OS1_S1 + 48) = prefactor_x * *(b + 218 * OS1_S1 + 33) -
                                       p_over_q * *(b + 273 * OS1_S1 + 33);
            *(b + 218 * OS1_S1 + 49) = prefactor_x * *(b + 218 * OS1_S1 + 34) -
                                       p_over_q * *(b + 273 * OS1_S1 + 34);
            *(b + 218 * OS1_S1 + 50) =
                prefactor_y * *(b + 218 * OS1_S1 + 30) -
                p_over_q * *(b + 283 * OS1_S1 + 30) +
                one_over_two_q * *(b + 164 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 218 * OS1_S1 + 16);
            *(b + 218 * OS1_S1 + 51) =
                prefactor_z * *(b + 218 * OS1_S1 + 30) -
                p_over_q * *(b + 284 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 30);
            *(b + 218 * OS1_S1 + 52) =
                prefactor_z * *(b + 218 * OS1_S1 + 31) -
                p_over_q * *(b + 284 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 31) +
                one_over_two_q * *(b + 218 * OS1_S1 + 16);
            *(b + 218 * OS1_S1 + 53) =
                prefactor_y * *(b + 218 * OS1_S1 + 33) -
                p_over_q * *(b + 283 * OS1_S1 + 33) +
                one_over_two_q * *(b + 164 * OS1_S1 + 33) +
                one_over_two_q * *(b + 218 * OS1_S1 + 19);
            *(b + 218 * OS1_S1 + 54) =
                prefactor_y * *(b + 218 * OS1_S1 + 34) -
                p_over_q * *(b + 283 * OS1_S1 + 34) +
                one_over_two_q * *(b + 164 * OS1_S1 + 34);
            *(b + 218 * OS1_S1 + 55) =
                prefactor_z * *(b + 218 * OS1_S1 + 34) -
                p_over_q * *(b + 284 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 163 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 218 * OS1_S1 + 19);
            *(b + 219 * OS1_S1 + 35) =
                prefactor_x * *(b + 219 * OS1_S1 + 20) -
                p_over_q * *(b + 274 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 219 * OS1_S1 + 10);
            *(b + 219 * OS1_S1 + 36) = prefactor_y * *(b + 219 * OS1_S1 + 20) -
                                       p_over_q * *(b + 284 * OS1_S1 + 20);
            *(b + 219 * OS1_S1 + 37) =
                prefactor_z * *(b + 219 * OS1_S1 + 20) -
                p_over_q * *(b + 285 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 20);
            *(b + 219 * OS1_S1 + 38) =
                prefactor_y * *(b + 219 * OS1_S1 + 21) -
                p_over_q * *(b + 284 * OS1_S1 + 21) +
                one_over_two_q * *(b + 219 * OS1_S1 + 10);
            *(b + 219 * OS1_S1 + 39) = prefactor_y * *(b + 219 * OS1_S1 + 22) -
                                       p_over_q * *(b + 284 * OS1_S1 + 22);
            *(b + 219 * OS1_S1 + 40) =
                prefactor_z * *(b + 219 * OS1_S1 + 22) -
                p_over_q * *(b + 285 * OS1_S1 + 22) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 22) +
                one_over_two_q * *(b + 219 * OS1_S1 + 10);
            *(b + 219 * OS1_S1 + 41) =
                prefactor_x * *(b + 219 * OS1_S1 + 26) -
                p_over_q * *(b + 274 * OS1_S1 + 26) +
                one_over_two_q * *(b + 219 * OS1_S1 + 16);
            *(b + 219 * OS1_S1 + 42) =
                prefactor_z * *(b + 219 * OS1_S1 + 23) -
                p_over_q * *(b + 285 * OS1_S1 + 23) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 23);
            *(b + 219 * OS1_S1 + 43) = prefactor_y * *(b + 219 * OS1_S1 + 25) -
                                       p_over_q * *(b + 284 * OS1_S1 + 25);
            *(b + 219 * OS1_S1 + 44) =
                prefactor_x * *(b + 219 * OS1_S1 + 29) -
                p_over_q * *(b + 274 * OS1_S1 + 29) +
                one_over_two_q * *(b + 219 * OS1_S1 + 19);
            *(b + 219 * OS1_S1 + 45) = prefactor_x * *(b + 219 * OS1_S1 + 30) -
                                       p_over_q * *(b + 274 * OS1_S1 + 30);
            *(b + 219 * OS1_S1 + 46) = prefactor_x * *(b + 219 * OS1_S1 + 31) -
                                       p_over_q * *(b + 274 * OS1_S1 + 31);
            *(b + 219 * OS1_S1 + 47) = prefactor_x * *(b + 219 * OS1_S1 + 32) -
                                       p_over_q * *(b + 274 * OS1_S1 + 32);
            *(b + 219 * OS1_S1 + 48) = prefactor_y * *(b + 219 * OS1_S1 + 29) -
                                       p_over_q * *(b + 284 * OS1_S1 + 29);
            *(b + 219 * OS1_S1 + 49) = prefactor_x * *(b + 219 * OS1_S1 + 34) -
                                       p_over_q * *(b + 274 * OS1_S1 + 34);
            *(b + 219 * OS1_S1 + 50) =
                prefactor_y * *(b + 219 * OS1_S1 + 30) -
                p_over_q * *(b + 284 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 219 * OS1_S1 + 16);
            *(b + 219 * OS1_S1 + 51) =
                prefactor_z * *(b + 219 * OS1_S1 + 30) -
                p_over_q * *(b + 285 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 30);
            *(b + 219 * OS1_S1 + 52) =
                prefactor_z * *(b + 219 * OS1_S1 + 31) -
                p_over_q * *(b + 285 * OS1_S1 + 31) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 31) +
                one_over_two_q * *(b + 219 * OS1_S1 + 16);
            *(b + 219 * OS1_S1 + 53) =
                prefactor_y * *(b + 219 * OS1_S1 + 33) -
                p_over_q * *(b + 284 * OS1_S1 + 33) +
                one_over_two_q * *(b + 219 * OS1_S1 + 19);
            *(b + 219 * OS1_S1 + 54) = prefactor_y * *(b + 219 * OS1_S1 + 34) -
                                       p_over_q * *(b + 284 * OS1_S1 + 34);
            *(b + 219 * OS1_S1 + 55) =
                prefactor_z * *(b + 219 * OS1_S1 + 34) -
                p_over_q * *(b + 285 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 164 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 219 * OS1_S1 + 19);
            return;
        }

        void transfer_10_5(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 220 * OS1_S1 + 35) =
                prefactor_x * *(b + 220 * OS1_S1 + 20) -
                p_over_q * *(b + 286 * OS1_S1 + 20) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 220 * OS1_S1 + 10);
            *(b + 220 * OS1_S1 + 36) = prefactor_y * *(b + 220 * OS1_S1 + 20) -
                                       p_over_q * *(b + 287 * OS1_S1 + 20);
            *(b + 220 * OS1_S1 + 37) = prefactor_z * *(b + 220 * OS1_S1 + 20) -
                                       p_over_q * *(b + 288 * OS1_S1 + 20);
            *(b + 220 * OS1_S1 + 38) =
                prefactor_y * *(b + 220 * OS1_S1 + 21) -
                p_over_q * *(b + 287 * OS1_S1 + 21) +
                one_over_two_q * *(b + 220 * OS1_S1 + 10);
            *(b + 220 * OS1_S1 + 39) = prefactor_z * *(b + 220 * OS1_S1 + 21) -
                                       p_over_q * *(b + 288 * OS1_S1 + 21);
            *(b + 220 * OS1_S1 + 40) =
                prefactor_z * *(b + 220 * OS1_S1 + 22) -
                p_over_q * *(b + 288 * OS1_S1 + 22) +
                one_over_two_q * *(b + 220 * OS1_S1 + 10);
            *(b + 220 * OS1_S1 + 41) =
                prefactor_x * *(b + 220 * OS1_S1 + 26) -
                p_over_q * *(b + 286 * OS1_S1 + 26) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 26) +
                one_over_two_q * *(b + 220 * OS1_S1 + 16);
            *(b + 220 * OS1_S1 + 42) = prefactor_z * *(b + 220 * OS1_S1 + 23) -
                                       p_over_q * *(b + 288 * OS1_S1 + 23);
            *(b + 220 * OS1_S1 + 43) = prefactor_y * *(b + 220 * OS1_S1 + 25) -
                                       p_over_q * *(b + 287 * OS1_S1 + 25);
            *(b + 220 * OS1_S1 + 44) =
                prefactor_x * *(b + 220 * OS1_S1 + 29) -
                p_over_q * *(b + 286 * OS1_S1 + 29) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 29) +
                one_over_two_q * *(b + 220 * OS1_S1 + 19);
            *(b + 220 * OS1_S1 + 45) =
                prefactor_x * *(b + 220 * OS1_S1 + 30) -
                p_over_q * *(b + 286 * OS1_S1 + 30) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 30);
            *(b + 220 * OS1_S1 + 46) = prefactor_z * *(b + 220 * OS1_S1 + 26) -
                                       p_over_q * *(b + 288 * OS1_S1 + 26);
            *(b + 220 * OS1_S1 + 47) =
                prefactor_x * *(b + 220 * OS1_S1 + 32) -
                p_over_q * *(b + 286 * OS1_S1 + 32) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 32);
            *(b + 220 * OS1_S1 + 48) = prefactor_y * *(b + 220 * OS1_S1 + 29) -
                                       p_over_q * *(b + 287 * OS1_S1 + 29);
            *(b + 220 * OS1_S1 + 49) =
                prefactor_x * *(b + 220 * OS1_S1 + 34) -
                p_over_q * *(b + 286 * OS1_S1 + 34) +
                10 * one_over_two_q * *(b + 165 * OS1_S1 + 34);
            *(b + 220 * OS1_S1 + 50) =
                prefactor_y * *(b + 220 * OS1_S1 + 30) -
                p_over_q * *(b + 287 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 220 * OS1_S1 + 16);
            *(b + 220 * OS1_S1 + 51) = prefactor_z * *(b + 220 * OS1_S1 + 30) -
                                       p_over_q * *(b + 288 * OS1_S1 + 30);
            *(b + 220 * OS1_S1 + 52) =
                prefactor_z * *(b + 220 * OS1_S1 + 31) -
                p_over_q * *(b + 288 * OS1_S1 + 31) +
                one_over_two_q * *(b + 220 * OS1_S1 + 16);
            *(b + 220 * OS1_S1 + 53) =
                prefactor_y * *(b + 220 * OS1_S1 + 33) -
                p_over_q * *(b + 287 * OS1_S1 + 33) +
                one_over_two_q * *(b + 220 * OS1_S1 + 19);
            *(b + 220 * OS1_S1 + 54) = prefactor_y * *(b + 220 * OS1_S1 + 34) -
                                       p_over_q * *(b + 287 * OS1_S1 + 34);
            *(b + 220 * OS1_S1 + 55) =
                prefactor_z * *(b + 220 * OS1_S1 + 34) -
                p_over_q * *(b + 288 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 220 * OS1_S1 + 19);
            *(b + 221 * OS1_S1 + 35) =
                prefactor_x * *(b + 221 * OS1_S1 + 20) -
                p_over_q * *(b + 287 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 221 * OS1_S1 + 10);
            *(b + 221 * OS1_S1 + 36) =
                prefactor_y * *(b + 221 * OS1_S1 + 20) -
                p_over_q * *(b + 289 * OS1_S1 + 20) +
                one_over_two_q * *(b + 165 * OS1_S1 + 20);
            *(b + 221 * OS1_S1 + 37) = prefactor_z * *(b + 221 * OS1_S1 + 20) -
                                       p_over_q * *(b + 290 * OS1_S1 + 20);
            *(b + 221 * OS1_S1 + 38) =
                prefactor_y * *(b + 221 * OS1_S1 + 21) -
                p_over_q * *(b + 289 * OS1_S1 + 21) +
                one_over_two_q * *(b + 165 * OS1_S1 + 21) +
                one_over_two_q * *(b + 221 * OS1_S1 + 10);
            *(b + 221 * OS1_S1 + 39) = prefactor_z * *(b + 221 * OS1_S1 + 21) -
                                       p_over_q * *(b + 290 * OS1_S1 + 21);
            *(b + 221 * OS1_S1 + 40) =
                prefactor_z * *(b + 221 * OS1_S1 + 22) -
                p_over_q * *(b + 290 * OS1_S1 + 22) +
                one_over_two_q * *(b + 221 * OS1_S1 + 10);
            *(b + 221 * OS1_S1 + 41) =
                prefactor_x * *(b + 221 * OS1_S1 + 26) -
                p_over_q * *(b + 287 * OS1_S1 + 26) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 26) +
                one_over_two_q * *(b + 221 * OS1_S1 + 16);
            *(b + 221 * OS1_S1 + 42) = prefactor_z * *(b + 221 * OS1_S1 + 23) -
                                       p_over_q * *(b + 290 * OS1_S1 + 23);
            *(b + 221 * OS1_S1 + 43) =
                prefactor_y * *(b + 221 * OS1_S1 + 25) -
                p_over_q * *(b + 289 * OS1_S1 + 25) +
                one_over_two_q * *(b + 165 * OS1_S1 + 25);
            *(b + 221 * OS1_S1 + 44) =
                prefactor_x * *(b + 221 * OS1_S1 + 29) -
                p_over_q * *(b + 287 * OS1_S1 + 29) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 29) +
                one_over_two_q * *(b + 221 * OS1_S1 + 19);
            *(b + 221 * OS1_S1 + 45) =
                prefactor_x * *(b + 221 * OS1_S1 + 30) -
                p_over_q * *(b + 287 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 30);
            *(b + 221 * OS1_S1 + 46) = prefactor_z * *(b + 221 * OS1_S1 + 26) -
                                       p_over_q * *(b + 290 * OS1_S1 + 26);
            *(b + 221 * OS1_S1 + 47) =
                prefactor_x * *(b + 221 * OS1_S1 + 32) -
                p_over_q * *(b + 287 * OS1_S1 + 32) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 32);
            *(b + 221 * OS1_S1 + 48) =
                prefactor_y * *(b + 221 * OS1_S1 + 29) -
                p_over_q * *(b + 289 * OS1_S1 + 29) +
                one_over_two_q * *(b + 165 * OS1_S1 + 29);
            *(b + 221 * OS1_S1 + 49) =
                prefactor_x * *(b + 221 * OS1_S1 + 34) -
                p_over_q * *(b + 287 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 166 * OS1_S1 + 34);
            *(b + 221 * OS1_S1 + 50) =
                prefactor_y * *(b + 221 * OS1_S1 + 30) -
                p_over_q * *(b + 289 * OS1_S1 + 30) +
                one_over_two_q * *(b + 165 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 221 * OS1_S1 + 16);
            *(b + 221 * OS1_S1 + 51) = prefactor_z * *(b + 221 * OS1_S1 + 30) -
                                       p_over_q * *(b + 290 * OS1_S1 + 30);
            *(b + 221 * OS1_S1 + 52) =
                prefactor_z * *(b + 221 * OS1_S1 + 31) -
                p_over_q * *(b + 290 * OS1_S1 + 31) +
                one_over_two_q * *(b + 221 * OS1_S1 + 16);
            *(b + 221 * OS1_S1 + 53) =
                prefactor_y * *(b + 221 * OS1_S1 + 33) -
                p_over_q * *(b + 289 * OS1_S1 + 33) +
                one_over_two_q * *(b + 165 * OS1_S1 + 33) +
                one_over_two_q * *(b + 221 * OS1_S1 + 19);
            *(b + 221 * OS1_S1 + 54) =
                prefactor_y * *(b + 221 * OS1_S1 + 34) -
                p_over_q * *(b + 289 * OS1_S1 + 34) +
                one_over_two_q * *(b + 165 * OS1_S1 + 34);
            *(b + 221 * OS1_S1 + 55) =
                prefactor_z * *(b + 221 * OS1_S1 + 34) -
                p_over_q * *(b + 290 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 221 * OS1_S1 + 19);
            *(b + 222 * OS1_S1 + 35) =
                prefactor_x * *(b + 222 * OS1_S1 + 20) -
                p_over_q * *(b + 288 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 222 * OS1_S1 + 10);
            *(b + 222 * OS1_S1 + 36) = prefactor_y * *(b + 222 * OS1_S1 + 20) -
                                       p_over_q * *(b + 290 * OS1_S1 + 20);
            *(b + 222 * OS1_S1 + 37) =
                prefactor_z * *(b + 222 * OS1_S1 + 20) -
                p_over_q * *(b + 291 * OS1_S1 + 20) +
                one_over_two_q * *(b + 165 * OS1_S1 + 20);
            *(b + 222 * OS1_S1 + 38) =
                prefactor_y * *(b + 222 * OS1_S1 + 21) -
                p_over_q * *(b + 290 * OS1_S1 + 21) +
                one_over_two_q * *(b + 222 * OS1_S1 + 10);
            *(b + 222 * OS1_S1 + 39) = prefactor_y * *(b + 222 * OS1_S1 + 22) -
                                       p_over_q * *(b + 290 * OS1_S1 + 22);
            *(b + 222 * OS1_S1 + 40) =
                prefactor_z * *(b + 222 * OS1_S1 + 22) -
                p_over_q * *(b + 291 * OS1_S1 + 22) +
                one_over_two_q * *(b + 165 * OS1_S1 + 22) +
                one_over_two_q * *(b + 222 * OS1_S1 + 10);
            *(b + 222 * OS1_S1 + 41) =
                prefactor_x * *(b + 222 * OS1_S1 + 26) -
                p_over_q * *(b + 288 * OS1_S1 + 26) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 26) +
                one_over_two_q * *(b + 222 * OS1_S1 + 16);
            *(b + 222 * OS1_S1 + 42) =
                prefactor_z * *(b + 222 * OS1_S1 + 23) -
                p_over_q * *(b + 291 * OS1_S1 + 23) +
                one_over_two_q * *(b + 165 * OS1_S1 + 23);
            *(b + 222 * OS1_S1 + 43) = prefactor_y * *(b + 222 * OS1_S1 + 25) -
                                       p_over_q * *(b + 290 * OS1_S1 + 25);
            *(b + 222 * OS1_S1 + 44) =
                prefactor_x * *(b + 222 * OS1_S1 + 29) -
                p_over_q * *(b + 288 * OS1_S1 + 29) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 29) +
                one_over_two_q * *(b + 222 * OS1_S1 + 19);
            *(b + 222 * OS1_S1 + 45) =
                prefactor_x * *(b + 222 * OS1_S1 + 30) -
                p_over_q * *(b + 288 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 30);
            *(b + 222 * OS1_S1 + 46) =
                prefactor_z * *(b + 222 * OS1_S1 + 26) -
                p_over_q * *(b + 291 * OS1_S1 + 26) +
                one_over_two_q * *(b + 165 * OS1_S1 + 26);
            *(b + 222 * OS1_S1 + 47) =
                prefactor_x * *(b + 222 * OS1_S1 + 32) -
                p_over_q * *(b + 288 * OS1_S1 + 32) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 32);
            *(b + 222 * OS1_S1 + 48) = prefactor_y * *(b + 222 * OS1_S1 + 29) -
                                       p_over_q * *(b + 290 * OS1_S1 + 29);
            *(b + 222 * OS1_S1 + 49) =
                prefactor_x * *(b + 222 * OS1_S1 + 34) -
                p_over_q * *(b + 288 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 167 * OS1_S1 + 34);
            *(b + 222 * OS1_S1 + 50) =
                prefactor_y * *(b + 222 * OS1_S1 + 30) -
                p_over_q * *(b + 290 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 222 * OS1_S1 + 16);
            *(b + 222 * OS1_S1 + 51) =
                prefactor_z * *(b + 222 * OS1_S1 + 30) -
                p_over_q * *(b + 291 * OS1_S1 + 30) +
                one_over_two_q * *(b + 165 * OS1_S1 + 30);
            *(b + 222 * OS1_S1 + 52) =
                prefactor_z * *(b + 222 * OS1_S1 + 31) -
                p_over_q * *(b + 291 * OS1_S1 + 31) +
                one_over_two_q * *(b + 165 * OS1_S1 + 31) +
                one_over_two_q * *(b + 222 * OS1_S1 + 16);
            *(b + 222 * OS1_S1 + 53) =
                prefactor_y * *(b + 222 * OS1_S1 + 33) -
                p_over_q * *(b + 290 * OS1_S1 + 33) +
                one_over_two_q * *(b + 222 * OS1_S1 + 19);
            *(b + 222 * OS1_S1 + 54) = prefactor_y * *(b + 222 * OS1_S1 + 34) -
                                       p_over_q * *(b + 290 * OS1_S1 + 34);
            *(b + 222 * OS1_S1 + 55) =
                prefactor_z * *(b + 222 * OS1_S1 + 34) -
                p_over_q * *(b + 291 * OS1_S1 + 34) +
                one_over_two_q * *(b + 165 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 222 * OS1_S1 + 19);
            *(b + 223 * OS1_S1 + 35) =
                prefactor_x * *(b + 223 * OS1_S1 + 20) -
                p_over_q * *(b + 289 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 223 * OS1_S1 + 10);
            *(b + 223 * OS1_S1 + 36) =
                prefactor_y * *(b + 223 * OS1_S1 + 20) -
                p_over_q * *(b + 292 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 20);
            *(b + 223 * OS1_S1 + 37) = prefactor_z * *(b + 223 * OS1_S1 + 20) -
                                       p_over_q * *(b + 293 * OS1_S1 + 20);
            *(b + 223 * OS1_S1 + 38) =
                prefactor_y * *(b + 223 * OS1_S1 + 21) -
                p_over_q * *(b + 292 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 21) +
                one_over_two_q * *(b + 223 * OS1_S1 + 10);
            *(b + 223 * OS1_S1 + 39) = prefactor_z * *(b + 223 * OS1_S1 + 21) -
                                       p_over_q * *(b + 293 * OS1_S1 + 21);
            *(b + 223 * OS1_S1 + 40) =
                prefactor_z * *(b + 223 * OS1_S1 + 22) -
                p_over_q * *(b + 293 * OS1_S1 + 22) +
                one_over_two_q * *(b + 223 * OS1_S1 + 10);
            *(b + 223 * OS1_S1 + 41) =
                prefactor_x * *(b + 223 * OS1_S1 + 26) -
                p_over_q * *(b + 289 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 26) +
                one_over_two_q * *(b + 223 * OS1_S1 + 16);
            *(b + 223 * OS1_S1 + 42) = prefactor_z * *(b + 223 * OS1_S1 + 23) -
                                       p_over_q * *(b + 293 * OS1_S1 + 23);
            *(b + 223 * OS1_S1 + 43) =
                prefactor_y * *(b + 223 * OS1_S1 + 25) -
                p_over_q * *(b + 292 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 25);
            *(b + 223 * OS1_S1 + 44) =
                prefactor_x * *(b + 223 * OS1_S1 + 29) -
                p_over_q * *(b + 289 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 29) +
                one_over_two_q * *(b + 223 * OS1_S1 + 19);
            *(b + 223 * OS1_S1 + 45) =
                prefactor_x * *(b + 223 * OS1_S1 + 30) -
                p_over_q * *(b + 289 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 30);
            *(b + 223 * OS1_S1 + 46) = prefactor_z * *(b + 223 * OS1_S1 + 26) -
                                       p_over_q * *(b + 293 * OS1_S1 + 26);
            *(b + 223 * OS1_S1 + 47) =
                prefactor_x * *(b + 223 * OS1_S1 + 32) -
                p_over_q * *(b + 289 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 32);
            *(b + 223 * OS1_S1 + 48) =
                prefactor_y * *(b + 223 * OS1_S1 + 29) -
                p_over_q * *(b + 292 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 29);
            *(b + 223 * OS1_S1 + 49) =
                prefactor_x * *(b + 223 * OS1_S1 + 34) -
                p_over_q * *(b + 289 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 168 * OS1_S1 + 34);
            *(b + 223 * OS1_S1 + 50) =
                prefactor_y * *(b + 223 * OS1_S1 + 30) -
                p_over_q * *(b + 292 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 223 * OS1_S1 + 16);
            *(b + 223 * OS1_S1 + 51) = prefactor_z * *(b + 223 * OS1_S1 + 30) -
                                       p_over_q * *(b + 293 * OS1_S1 + 30);
            *(b + 223 * OS1_S1 + 52) =
                prefactor_z * *(b + 223 * OS1_S1 + 31) -
                p_over_q * *(b + 293 * OS1_S1 + 31) +
                one_over_two_q * *(b + 223 * OS1_S1 + 16);
            *(b + 223 * OS1_S1 + 53) =
                prefactor_y * *(b + 223 * OS1_S1 + 33) -
                p_over_q * *(b + 292 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 33) +
                one_over_two_q * *(b + 223 * OS1_S1 + 19);
            *(b + 223 * OS1_S1 + 54) =
                prefactor_y * *(b + 223 * OS1_S1 + 34) -
                p_over_q * *(b + 292 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 166 * OS1_S1 + 34);
            *(b + 223 * OS1_S1 + 55) =
                prefactor_z * *(b + 223 * OS1_S1 + 34) -
                p_over_q * *(b + 293 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 223 * OS1_S1 + 19);
            *(b + 224 * OS1_S1 + 35) =
                prefactor_x * *(b + 224 * OS1_S1 + 20) -
                p_over_q * *(b + 290 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 224 * OS1_S1 + 10);
            *(b + 224 * OS1_S1 + 36) =
                prefactor_y * *(b + 224 * OS1_S1 + 20) -
                p_over_q * *(b + 293 * OS1_S1 + 20) +
                one_over_two_q * *(b + 167 * OS1_S1 + 20);
            *(b + 224 * OS1_S1 + 37) =
                prefactor_z * *(b + 224 * OS1_S1 + 20) -
                p_over_q * *(b + 294 * OS1_S1 + 20) +
                one_over_two_q * *(b + 166 * OS1_S1 + 20);
            *(b + 224 * OS1_S1 + 38) =
                prefactor_y * *(b + 224 * OS1_S1 + 21) -
                p_over_q * *(b + 293 * OS1_S1 + 21) +
                one_over_two_q * *(b + 167 * OS1_S1 + 21) +
                one_over_two_q * *(b + 224 * OS1_S1 + 10);
            *(b + 224 * OS1_S1 + 39) =
                prefactor_z * *(b + 224 * OS1_S1 + 21) -
                p_over_q * *(b + 294 * OS1_S1 + 21) +
                one_over_two_q * *(b + 166 * OS1_S1 + 21);
            *(b + 224 * OS1_S1 + 40) =
                prefactor_z * *(b + 224 * OS1_S1 + 22) -
                p_over_q * *(b + 294 * OS1_S1 + 22) +
                one_over_two_q * *(b + 166 * OS1_S1 + 22) +
                one_over_two_q * *(b + 224 * OS1_S1 + 10);
            *(b + 224 * OS1_S1 + 41) =
                prefactor_x * *(b + 224 * OS1_S1 + 26) -
                p_over_q * *(b + 290 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 26) +
                one_over_two_q * *(b + 224 * OS1_S1 + 16);
            *(b + 224 * OS1_S1 + 42) =
                prefactor_z * *(b + 224 * OS1_S1 + 23) -
                p_over_q * *(b + 294 * OS1_S1 + 23) +
                one_over_two_q * *(b + 166 * OS1_S1 + 23);
            *(b + 224 * OS1_S1 + 43) =
                prefactor_y * *(b + 224 * OS1_S1 + 25) -
                p_over_q * *(b + 293 * OS1_S1 + 25) +
                one_over_two_q * *(b + 167 * OS1_S1 + 25);
            *(b + 224 * OS1_S1 + 44) =
                prefactor_x * *(b + 224 * OS1_S1 + 29) -
                p_over_q * *(b + 290 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 29) +
                one_over_two_q * *(b + 224 * OS1_S1 + 19);
            *(b + 224 * OS1_S1 + 45) =
                prefactor_x * *(b + 224 * OS1_S1 + 30) -
                p_over_q * *(b + 290 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 30);
            *(b + 224 * OS1_S1 + 46) =
                prefactor_z * *(b + 224 * OS1_S1 + 26) -
                p_over_q * *(b + 294 * OS1_S1 + 26) +
                one_over_two_q * *(b + 166 * OS1_S1 + 26);
            *(b + 224 * OS1_S1 + 47) =
                prefactor_x * *(b + 224 * OS1_S1 + 32) -
                p_over_q * *(b + 290 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 32);
            *(b + 224 * OS1_S1 + 48) =
                prefactor_y * *(b + 224 * OS1_S1 + 29) -
                p_over_q * *(b + 293 * OS1_S1 + 29) +
                one_over_two_q * *(b + 167 * OS1_S1 + 29);
            *(b + 224 * OS1_S1 + 49) =
                prefactor_x * *(b + 224 * OS1_S1 + 34) -
                p_over_q * *(b + 290 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 169 * OS1_S1 + 34);
            *(b + 224 * OS1_S1 + 50) =
                prefactor_y * *(b + 224 * OS1_S1 + 30) -
                p_over_q * *(b + 293 * OS1_S1 + 30) +
                one_over_two_q * *(b + 167 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 224 * OS1_S1 + 16);
            *(b + 224 * OS1_S1 + 51) =
                prefactor_z * *(b + 224 * OS1_S1 + 30) -
                p_over_q * *(b + 294 * OS1_S1 + 30) +
                one_over_two_q * *(b + 166 * OS1_S1 + 30);
            *(b + 224 * OS1_S1 + 52) =
                prefactor_z * *(b + 224 * OS1_S1 + 31) -
                p_over_q * *(b + 294 * OS1_S1 + 31) +
                one_over_two_q * *(b + 166 * OS1_S1 + 31) +
                one_over_two_q * *(b + 224 * OS1_S1 + 16);
            *(b + 224 * OS1_S1 + 53) =
                prefactor_y * *(b + 224 * OS1_S1 + 33) -
                p_over_q * *(b + 293 * OS1_S1 + 33) +
                one_over_two_q * *(b + 167 * OS1_S1 + 33) +
                one_over_two_q * *(b + 224 * OS1_S1 + 19);
            *(b + 224 * OS1_S1 + 54) =
                prefactor_y * *(b + 224 * OS1_S1 + 34) -
                p_over_q * *(b + 293 * OS1_S1 + 34) +
                one_over_two_q * *(b + 167 * OS1_S1 + 34);
            *(b + 224 * OS1_S1 + 55) =
                prefactor_z * *(b + 224 * OS1_S1 + 34) -
                p_over_q * *(b + 294 * OS1_S1 + 34) +
                one_over_two_q * *(b + 166 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 224 * OS1_S1 + 19);
            *(b + 225 * OS1_S1 + 35) =
                prefactor_x * *(b + 225 * OS1_S1 + 20) -
                p_over_q * *(b + 291 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 225 * OS1_S1 + 10);
            *(b + 225 * OS1_S1 + 36) = prefactor_y * *(b + 225 * OS1_S1 + 20) -
                                       p_over_q * *(b + 294 * OS1_S1 + 20);
            *(b + 225 * OS1_S1 + 37) =
                prefactor_z * *(b + 225 * OS1_S1 + 20) -
                p_over_q * *(b + 295 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 20);
            *(b + 225 * OS1_S1 + 38) =
                prefactor_y * *(b + 225 * OS1_S1 + 21) -
                p_over_q * *(b + 294 * OS1_S1 + 21) +
                one_over_two_q * *(b + 225 * OS1_S1 + 10);
            *(b + 225 * OS1_S1 + 39) = prefactor_y * *(b + 225 * OS1_S1 + 22) -
                                       p_over_q * *(b + 294 * OS1_S1 + 22);
            *(b + 225 * OS1_S1 + 40) =
                prefactor_z * *(b + 225 * OS1_S1 + 22) -
                p_over_q * *(b + 295 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 22) +
                one_over_two_q * *(b + 225 * OS1_S1 + 10);
            *(b + 225 * OS1_S1 + 41) =
                prefactor_x * *(b + 225 * OS1_S1 + 26) -
                p_over_q * *(b + 291 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 26) +
                one_over_two_q * *(b + 225 * OS1_S1 + 16);
            *(b + 225 * OS1_S1 + 42) =
                prefactor_z * *(b + 225 * OS1_S1 + 23) -
                p_over_q * *(b + 295 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 23);
            *(b + 225 * OS1_S1 + 43) = prefactor_y * *(b + 225 * OS1_S1 + 25) -
                                       p_over_q * *(b + 294 * OS1_S1 + 25);
            *(b + 225 * OS1_S1 + 44) =
                prefactor_x * *(b + 225 * OS1_S1 + 29) -
                p_over_q * *(b + 291 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 29) +
                one_over_two_q * *(b + 225 * OS1_S1 + 19);
            *(b + 225 * OS1_S1 + 45) =
                prefactor_x * *(b + 225 * OS1_S1 + 30) -
                p_over_q * *(b + 291 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 30);
            *(b + 225 * OS1_S1 + 46) =
                prefactor_z * *(b + 225 * OS1_S1 + 26) -
                p_over_q * *(b + 295 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 26);
            *(b + 225 * OS1_S1 + 47) =
                prefactor_x * *(b + 225 * OS1_S1 + 32) -
                p_over_q * *(b + 291 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 32);
            *(b + 225 * OS1_S1 + 48) = prefactor_y * *(b + 225 * OS1_S1 + 29) -
                                       p_over_q * *(b + 294 * OS1_S1 + 29);
            *(b + 225 * OS1_S1 + 49) =
                prefactor_x * *(b + 225 * OS1_S1 + 34) -
                p_over_q * *(b + 291 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 170 * OS1_S1 + 34);
            *(b + 225 * OS1_S1 + 50) =
                prefactor_y * *(b + 225 * OS1_S1 + 30) -
                p_over_q * *(b + 294 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 225 * OS1_S1 + 16);
            *(b + 225 * OS1_S1 + 51) =
                prefactor_z * *(b + 225 * OS1_S1 + 30) -
                p_over_q * *(b + 295 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 30);
            *(b + 225 * OS1_S1 + 52) =
                prefactor_z * *(b + 225 * OS1_S1 + 31) -
                p_over_q * *(b + 295 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 31) +
                one_over_two_q * *(b + 225 * OS1_S1 + 16);
            *(b + 225 * OS1_S1 + 53) =
                prefactor_y * *(b + 225 * OS1_S1 + 33) -
                p_over_q * *(b + 294 * OS1_S1 + 33) +
                one_over_two_q * *(b + 225 * OS1_S1 + 19);
            *(b + 225 * OS1_S1 + 54) = prefactor_y * *(b + 225 * OS1_S1 + 34) -
                                       p_over_q * *(b + 294 * OS1_S1 + 34);
            *(b + 225 * OS1_S1 + 55) =
                prefactor_z * *(b + 225 * OS1_S1 + 34) -
                p_over_q * *(b + 295 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 167 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 225 * OS1_S1 + 19);
            *(b + 226 * OS1_S1 + 35) =
                prefactor_x * *(b + 226 * OS1_S1 + 20) -
                p_over_q * *(b + 292 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 10);
            *(b + 226 * OS1_S1 + 36) =
                prefactor_y * *(b + 226 * OS1_S1 + 20) -
                p_over_q * *(b + 296 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 20);
            *(b + 226 * OS1_S1 + 37) = prefactor_z * *(b + 226 * OS1_S1 + 20) -
                                       p_over_q * *(b + 297 * OS1_S1 + 20);
            *(b + 226 * OS1_S1 + 38) =
                prefactor_y * *(b + 226 * OS1_S1 + 21) -
                p_over_q * *(b + 296 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 21) +
                one_over_two_q * *(b + 226 * OS1_S1 + 10);
            *(b + 226 * OS1_S1 + 39) = prefactor_z * *(b + 226 * OS1_S1 + 21) -
                                       p_over_q * *(b + 297 * OS1_S1 + 21);
            *(b + 226 * OS1_S1 + 40) =
                prefactor_z * *(b + 226 * OS1_S1 + 22) -
                p_over_q * *(b + 297 * OS1_S1 + 22) +
                one_over_two_q * *(b + 226 * OS1_S1 + 10);
            *(b + 226 * OS1_S1 + 41) =
                prefactor_x * *(b + 226 * OS1_S1 + 26) -
                p_over_q * *(b + 292 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 26) +
                one_over_two_q * *(b + 226 * OS1_S1 + 16);
            *(b + 226 * OS1_S1 + 42) = prefactor_z * *(b + 226 * OS1_S1 + 23) -
                                       p_over_q * *(b + 297 * OS1_S1 + 23);
            *(b + 226 * OS1_S1 + 43) =
                prefactor_y * *(b + 226 * OS1_S1 + 25) -
                p_over_q * *(b + 296 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 25);
            *(b + 226 * OS1_S1 + 44) =
                prefactor_x * *(b + 226 * OS1_S1 + 29) -
                p_over_q * *(b + 292 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 29) +
                one_over_two_q * *(b + 226 * OS1_S1 + 19);
            *(b + 226 * OS1_S1 + 45) =
                prefactor_x * *(b + 226 * OS1_S1 + 30) -
                p_over_q * *(b + 292 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 30);
            *(b + 226 * OS1_S1 + 46) = prefactor_z * *(b + 226 * OS1_S1 + 26) -
                                       p_over_q * *(b + 297 * OS1_S1 + 26);
            *(b + 226 * OS1_S1 + 47) =
                prefactor_x * *(b + 226 * OS1_S1 + 32) -
                p_over_q * *(b + 292 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 32);
            *(b + 226 * OS1_S1 + 48) =
                prefactor_y * *(b + 226 * OS1_S1 + 29) -
                p_over_q * *(b + 296 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 29);
            *(b + 226 * OS1_S1 + 49) =
                prefactor_x * *(b + 226 * OS1_S1 + 34) -
                p_over_q * *(b + 292 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 171 * OS1_S1 + 34);
            *(b + 226 * OS1_S1 + 50) =
                prefactor_y * *(b + 226 * OS1_S1 + 30) -
                p_over_q * *(b + 296 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 16);
            *(b + 226 * OS1_S1 + 51) = prefactor_z * *(b + 226 * OS1_S1 + 30) -
                                       p_over_q * *(b + 297 * OS1_S1 + 30);
            *(b + 226 * OS1_S1 + 52) =
                prefactor_z * *(b + 226 * OS1_S1 + 31) -
                p_over_q * *(b + 297 * OS1_S1 + 31) +
                one_over_two_q * *(b + 226 * OS1_S1 + 16);
            *(b + 226 * OS1_S1 + 53) =
                prefactor_y * *(b + 226 * OS1_S1 + 33) -
                p_over_q * *(b + 296 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 33) +
                one_over_two_q * *(b + 226 * OS1_S1 + 19);
            *(b + 226 * OS1_S1 + 54) =
                prefactor_y * *(b + 226 * OS1_S1 + 34) -
                p_over_q * *(b + 296 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 168 * OS1_S1 + 34);
            *(b + 226 * OS1_S1 + 55) =
                prefactor_z * *(b + 226 * OS1_S1 + 34) -
                p_over_q * *(b + 297 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 19);
            *(b + 227 * OS1_S1 + 35) =
                prefactor_x * *(b + 227 * OS1_S1 + 20) -
                p_over_q * *(b + 293 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 227 * OS1_S1 + 10);
            *(b + 227 * OS1_S1 + 36) =
                prefactor_y * *(b + 227 * OS1_S1 + 20) -
                p_over_q * *(b + 297 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 20);
            *(b + 227 * OS1_S1 + 37) =
                prefactor_z * *(b + 227 * OS1_S1 + 20) -
                p_over_q * *(b + 298 * OS1_S1 + 20) +
                one_over_two_q * *(b + 168 * OS1_S1 + 20);
            *(b + 227 * OS1_S1 + 38) =
                prefactor_y * *(b + 227 * OS1_S1 + 21) -
                p_over_q * *(b + 297 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 21) +
                one_over_two_q * *(b + 227 * OS1_S1 + 10);
            *(b + 227 * OS1_S1 + 39) =
                prefactor_z * *(b + 227 * OS1_S1 + 21) -
                p_over_q * *(b + 298 * OS1_S1 + 21) +
                one_over_two_q * *(b + 168 * OS1_S1 + 21);
            *(b + 227 * OS1_S1 + 40) =
                prefactor_z * *(b + 227 * OS1_S1 + 22) -
                p_over_q * *(b + 298 * OS1_S1 + 22) +
                one_over_two_q * *(b + 168 * OS1_S1 + 22) +
                one_over_two_q * *(b + 227 * OS1_S1 + 10);
            *(b + 227 * OS1_S1 + 41) =
                prefactor_x * *(b + 227 * OS1_S1 + 26) -
                p_over_q * *(b + 293 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 26) +
                one_over_two_q * *(b + 227 * OS1_S1 + 16);
            *(b + 227 * OS1_S1 + 42) =
                prefactor_z * *(b + 227 * OS1_S1 + 23) -
                p_over_q * *(b + 298 * OS1_S1 + 23) +
                one_over_two_q * *(b + 168 * OS1_S1 + 23);
            *(b + 227 * OS1_S1 + 43) =
                prefactor_y * *(b + 227 * OS1_S1 + 25) -
                p_over_q * *(b + 297 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 25);
            *(b + 227 * OS1_S1 + 44) =
                prefactor_x * *(b + 227 * OS1_S1 + 29) -
                p_over_q * *(b + 293 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 29) +
                one_over_two_q * *(b + 227 * OS1_S1 + 19);
            *(b + 227 * OS1_S1 + 45) =
                prefactor_x * *(b + 227 * OS1_S1 + 30) -
                p_over_q * *(b + 293 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 30);
            *(b + 227 * OS1_S1 + 46) =
                prefactor_z * *(b + 227 * OS1_S1 + 26) -
                p_over_q * *(b + 298 * OS1_S1 + 26) +
                one_over_two_q * *(b + 168 * OS1_S1 + 26);
            *(b + 227 * OS1_S1 + 47) =
                prefactor_x * *(b + 227 * OS1_S1 + 32) -
                p_over_q * *(b + 293 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 32);
            *(b + 227 * OS1_S1 + 48) =
                prefactor_y * *(b + 227 * OS1_S1 + 29) -
                p_over_q * *(b + 297 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 29);
            *(b + 227 * OS1_S1 + 49) =
                prefactor_x * *(b + 227 * OS1_S1 + 34) -
                p_over_q * *(b + 293 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 172 * OS1_S1 + 34);
            *(b + 227 * OS1_S1 + 50) =
                prefactor_y * *(b + 227 * OS1_S1 + 30) -
                p_over_q * *(b + 297 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 227 * OS1_S1 + 16);
            *(b + 227 * OS1_S1 + 51) =
                prefactor_z * *(b + 227 * OS1_S1 + 30) -
                p_over_q * *(b + 298 * OS1_S1 + 30) +
                one_over_two_q * *(b + 168 * OS1_S1 + 30);
            *(b + 227 * OS1_S1 + 52) =
                prefactor_z * *(b + 227 * OS1_S1 + 31) -
                p_over_q * *(b + 298 * OS1_S1 + 31) +
                one_over_two_q * *(b + 168 * OS1_S1 + 31) +
                one_over_two_q * *(b + 227 * OS1_S1 + 16);
            *(b + 227 * OS1_S1 + 53) =
                prefactor_y * *(b + 227 * OS1_S1 + 33) -
                p_over_q * *(b + 297 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 33) +
                one_over_two_q * *(b + 227 * OS1_S1 + 19);
            *(b + 227 * OS1_S1 + 54) =
                prefactor_y * *(b + 227 * OS1_S1 + 34) -
                p_over_q * *(b + 297 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 34);
            *(b + 227 * OS1_S1 + 55) =
                prefactor_z * *(b + 227 * OS1_S1 + 34) -
                p_over_q * *(b + 298 * OS1_S1 + 34) +
                one_over_two_q * *(b + 168 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 227 * OS1_S1 + 19);
            *(b + 228 * OS1_S1 + 35) =
                prefactor_x * *(b + 228 * OS1_S1 + 20) -
                p_over_q * *(b + 294 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 228 * OS1_S1 + 10);
            *(b + 228 * OS1_S1 + 36) =
                prefactor_y * *(b + 228 * OS1_S1 + 20) -
                p_over_q * *(b + 298 * OS1_S1 + 20) +
                one_over_two_q * *(b + 170 * OS1_S1 + 20);
            *(b + 228 * OS1_S1 + 37) =
                prefactor_z * *(b + 228 * OS1_S1 + 20) -
                p_over_q * *(b + 299 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 20);
            *(b + 228 * OS1_S1 + 38) =
                prefactor_y * *(b + 228 * OS1_S1 + 21) -
                p_over_q * *(b + 298 * OS1_S1 + 21) +
                one_over_two_q * *(b + 170 * OS1_S1 + 21) +
                one_over_two_q * *(b + 228 * OS1_S1 + 10);
            *(b + 228 * OS1_S1 + 39) =
                prefactor_y * *(b + 228 * OS1_S1 + 22) -
                p_over_q * *(b + 298 * OS1_S1 + 22) +
                one_over_two_q * *(b + 170 * OS1_S1 + 22);
            *(b + 228 * OS1_S1 + 40) =
                prefactor_z * *(b + 228 * OS1_S1 + 22) -
                p_over_q * *(b + 299 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 22) +
                one_over_two_q * *(b + 228 * OS1_S1 + 10);
            *(b + 228 * OS1_S1 + 41) =
                prefactor_x * *(b + 228 * OS1_S1 + 26) -
                p_over_q * *(b + 294 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 26) +
                one_over_two_q * *(b + 228 * OS1_S1 + 16);
            *(b + 228 * OS1_S1 + 42) =
                prefactor_z * *(b + 228 * OS1_S1 + 23) -
                p_over_q * *(b + 299 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 23);
            *(b + 228 * OS1_S1 + 43) =
                prefactor_y * *(b + 228 * OS1_S1 + 25) -
                p_over_q * *(b + 298 * OS1_S1 + 25) +
                one_over_two_q * *(b + 170 * OS1_S1 + 25);
            *(b + 228 * OS1_S1 + 44) =
                prefactor_x * *(b + 228 * OS1_S1 + 29) -
                p_over_q * *(b + 294 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 29) +
                one_over_two_q * *(b + 228 * OS1_S1 + 19);
            *(b + 228 * OS1_S1 + 45) =
                prefactor_x * *(b + 228 * OS1_S1 + 30) -
                p_over_q * *(b + 294 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 30);
            *(b + 228 * OS1_S1 + 46) =
                prefactor_z * *(b + 228 * OS1_S1 + 26) -
                p_over_q * *(b + 299 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 26);
            *(b + 228 * OS1_S1 + 47) =
                prefactor_x * *(b + 228 * OS1_S1 + 32) -
                p_over_q * *(b + 294 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 32);
            *(b + 228 * OS1_S1 + 48) =
                prefactor_y * *(b + 228 * OS1_S1 + 29) -
                p_over_q * *(b + 298 * OS1_S1 + 29) +
                one_over_two_q * *(b + 170 * OS1_S1 + 29);
            *(b + 228 * OS1_S1 + 49) =
                prefactor_x * *(b + 228 * OS1_S1 + 34) -
                p_over_q * *(b + 294 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 173 * OS1_S1 + 34);
            *(b + 228 * OS1_S1 + 50) =
                prefactor_y * *(b + 228 * OS1_S1 + 30) -
                p_over_q * *(b + 298 * OS1_S1 + 30) +
                one_over_two_q * *(b + 170 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 228 * OS1_S1 + 16);
            *(b + 228 * OS1_S1 + 51) =
                prefactor_z * *(b + 228 * OS1_S1 + 30) -
                p_over_q * *(b + 299 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 30);
            *(b + 228 * OS1_S1 + 52) =
                prefactor_z * *(b + 228 * OS1_S1 + 31) -
                p_over_q * *(b + 299 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 31) +
                one_over_two_q * *(b + 228 * OS1_S1 + 16);
            *(b + 228 * OS1_S1 + 53) =
                prefactor_y * *(b + 228 * OS1_S1 + 33) -
                p_over_q * *(b + 298 * OS1_S1 + 33) +
                one_over_two_q * *(b + 170 * OS1_S1 + 33) +
                one_over_two_q * *(b + 228 * OS1_S1 + 19);
            *(b + 228 * OS1_S1 + 54) =
                prefactor_y * *(b + 228 * OS1_S1 + 34) -
                p_over_q * *(b + 298 * OS1_S1 + 34) +
                one_over_two_q * *(b + 170 * OS1_S1 + 34);
            *(b + 228 * OS1_S1 + 55) =
                prefactor_z * *(b + 228 * OS1_S1 + 34) -
                p_over_q * *(b + 299 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 169 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 228 * OS1_S1 + 19);
            *(b + 229 * OS1_S1 + 35) =
                prefactor_x * *(b + 229 * OS1_S1 + 20) -
                p_over_q * *(b + 295 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 10);
            *(b + 229 * OS1_S1 + 36) = prefactor_y * *(b + 229 * OS1_S1 + 20) -
                                       p_over_q * *(b + 299 * OS1_S1 + 20);
            *(b + 229 * OS1_S1 + 37) =
                prefactor_z * *(b + 229 * OS1_S1 + 20) -
                p_over_q * *(b + 300 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 20);
            *(b + 229 * OS1_S1 + 38) =
                prefactor_y * *(b + 229 * OS1_S1 + 21) -
                p_over_q * *(b + 299 * OS1_S1 + 21) +
                one_over_two_q * *(b + 229 * OS1_S1 + 10);
            *(b + 229 * OS1_S1 + 39) = prefactor_y * *(b + 229 * OS1_S1 + 22) -
                                       p_over_q * *(b + 299 * OS1_S1 + 22);
            *(b + 229 * OS1_S1 + 40) =
                prefactor_z * *(b + 229 * OS1_S1 + 22) -
                p_over_q * *(b + 300 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 22) +
                one_over_two_q * *(b + 229 * OS1_S1 + 10);
            *(b + 229 * OS1_S1 + 41) =
                prefactor_x * *(b + 229 * OS1_S1 + 26) -
                p_over_q * *(b + 295 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 26) +
                one_over_two_q * *(b + 229 * OS1_S1 + 16);
            *(b + 229 * OS1_S1 + 42) =
                prefactor_z * *(b + 229 * OS1_S1 + 23) -
                p_over_q * *(b + 300 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 23);
            *(b + 229 * OS1_S1 + 43) = prefactor_y * *(b + 229 * OS1_S1 + 25) -
                                       p_over_q * *(b + 299 * OS1_S1 + 25);
            *(b + 229 * OS1_S1 + 44) =
                prefactor_x * *(b + 229 * OS1_S1 + 29) -
                p_over_q * *(b + 295 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 29) +
                one_over_two_q * *(b + 229 * OS1_S1 + 19);
            *(b + 229 * OS1_S1 + 45) =
                prefactor_x * *(b + 229 * OS1_S1 + 30) -
                p_over_q * *(b + 295 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 30);
            *(b + 229 * OS1_S1 + 46) =
                prefactor_z * *(b + 229 * OS1_S1 + 26) -
                p_over_q * *(b + 300 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 26);
            *(b + 229 * OS1_S1 + 47) =
                prefactor_x * *(b + 229 * OS1_S1 + 32) -
                p_over_q * *(b + 295 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 32);
            *(b + 229 * OS1_S1 + 48) = prefactor_y * *(b + 229 * OS1_S1 + 29) -
                                       p_over_q * *(b + 299 * OS1_S1 + 29);
            *(b + 229 * OS1_S1 + 49) =
                prefactor_x * *(b + 229 * OS1_S1 + 34) -
                p_over_q * *(b + 295 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 174 * OS1_S1 + 34);
            *(b + 229 * OS1_S1 + 50) =
                prefactor_y * *(b + 229 * OS1_S1 + 30) -
                p_over_q * *(b + 299 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 16);
            *(b + 229 * OS1_S1 + 51) =
                prefactor_z * *(b + 229 * OS1_S1 + 30) -
                p_over_q * *(b + 300 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 30);
            *(b + 229 * OS1_S1 + 52) =
                prefactor_z * *(b + 229 * OS1_S1 + 31) -
                p_over_q * *(b + 300 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 31) +
                one_over_two_q * *(b + 229 * OS1_S1 + 16);
            *(b + 229 * OS1_S1 + 53) =
                prefactor_y * *(b + 229 * OS1_S1 + 33) -
                p_over_q * *(b + 299 * OS1_S1 + 33) +
                one_over_two_q * *(b + 229 * OS1_S1 + 19);
            *(b + 229 * OS1_S1 + 54) = prefactor_y * *(b + 229 * OS1_S1 + 34) -
                                       p_over_q * *(b + 299 * OS1_S1 + 34);
            *(b + 229 * OS1_S1 + 55) =
                prefactor_z * *(b + 229 * OS1_S1 + 34) -
                p_over_q * *(b + 300 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 170 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 19);
            *(b + 230 * OS1_S1 + 35) =
                prefactor_x * *(b + 230 * OS1_S1 + 20) -
                p_over_q * *(b + 296 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 230 * OS1_S1 + 10);
            *(b + 230 * OS1_S1 + 36) =
                prefactor_y * *(b + 230 * OS1_S1 + 20) -
                p_over_q * *(b + 301 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 20);
            *(b + 230 * OS1_S1 + 37) = prefactor_z * *(b + 230 * OS1_S1 + 20) -
                                       p_over_q * *(b + 302 * OS1_S1 + 20);
            *(b + 230 * OS1_S1 + 38) =
                prefactor_y * *(b + 230 * OS1_S1 + 21) -
                p_over_q * *(b + 301 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 21) +
                one_over_two_q * *(b + 230 * OS1_S1 + 10);
            *(b + 230 * OS1_S1 + 39) = prefactor_z * *(b + 230 * OS1_S1 + 21) -
                                       p_over_q * *(b + 302 * OS1_S1 + 21);
            *(b + 230 * OS1_S1 + 40) =
                prefactor_z * *(b + 230 * OS1_S1 + 22) -
                p_over_q * *(b + 302 * OS1_S1 + 22) +
                one_over_two_q * *(b + 230 * OS1_S1 + 10);
            *(b + 230 * OS1_S1 + 41) =
                prefactor_x * *(b + 230 * OS1_S1 + 26) -
                p_over_q * *(b + 296 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 26) +
                one_over_two_q * *(b + 230 * OS1_S1 + 16);
            *(b + 230 * OS1_S1 + 42) = prefactor_z * *(b + 230 * OS1_S1 + 23) -
                                       p_over_q * *(b + 302 * OS1_S1 + 23);
            *(b + 230 * OS1_S1 + 43) =
                prefactor_y * *(b + 230 * OS1_S1 + 25) -
                p_over_q * *(b + 301 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 25);
            *(b + 230 * OS1_S1 + 44) =
                prefactor_x * *(b + 230 * OS1_S1 + 29) -
                p_over_q * *(b + 296 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 29) +
                one_over_two_q * *(b + 230 * OS1_S1 + 19);
            *(b + 230 * OS1_S1 + 45) =
                prefactor_x * *(b + 230 * OS1_S1 + 30) -
                p_over_q * *(b + 296 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 30);
            *(b + 230 * OS1_S1 + 46) = prefactor_z * *(b + 230 * OS1_S1 + 26) -
                                       p_over_q * *(b + 302 * OS1_S1 + 26);
            *(b + 230 * OS1_S1 + 47) =
                prefactor_x * *(b + 230 * OS1_S1 + 32) -
                p_over_q * *(b + 296 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 32);
            *(b + 230 * OS1_S1 + 48) =
                prefactor_y * *(b + 230 * OS1_S1 + 29) -
                p_over_q * *(b + 301 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 29);
            *(b + 230 * OS1_S1 + 49) =
                prefactor_x * *(b + 230 * OS1_S1 + 34) -
                p_over_q * *(b + 296 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 175 * OS1_S1 + 34);
            *(b + 230 * OS1_S1 + 50) =
                prefactor_y * *(b + 230 * OS1_S1 + 30) -
                p_over_q * *(b + 301 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 230 * OS1_S1 + 16);
            *(b + 230 * OS1_S1 + 51) = prefactor_z * *(b + 230 * OS1_S1 + 30) -
                                       p_over_q * *(b + 302 * OS1_S1 + 30);
            *(b + 230 * OS1_S1 + 52) =
                prefactor_z * *(b + 230 * OS1_S1 + 31) -
                p_over_q * *(b + 302 * OS1_S1 + 31) +
                one_over_two_q * *(b + 230 * OS1_S1 + 16);
            *(b + 230 * OS1_S1 + 53) =
                prefactor_y * *(b + 230 * OS1_S1 + 33) -
                p_over_q * *(b + 301 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 33) +
                one_over_two_q * *(b + 230 * OS1_S1 + 19);
            *(b + 230 * OS1_S1 + 54) =
                prefactor_y * *(b + 230 * OS1_S1 + 34) -
                p_over_q * *(b + 301 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 171 * OS1_S1 + 34);
            *(b + 230 * OS1_S1 + 55) =
                prefactor_z * *(b + 230 * OS1_S1 + 34) -
                p_over_q * *(b + 302 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 230 * OS1_S1 + 19);
            *(b + 231 * OS1_S1 + 35) =
                prefactor_x * *(b + 231 * OS1_S1 + 20) -
                p_over_q * *(b + 297 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 10);
            *(b + 231 * OS1_S1 + 36) =
                prefactor_y * *(b + 231 * OS1_S1 + 20) -
                p_over_q * *(b + 302 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 20);
            *(b + 231 * OS1_S1 + 37) =
                prefactor_z * *(b + 231 * OS1_S1 + 20) -
                p_over_q * *(b + 303 * OS1_S1 + 20) +
                one_over_two_q * *(b + 171 * OS1_S1 + 20);
            *(b + 231 * OS1_S1 + 38) =
                prefactor_y * *(b + 231 * OS1_S1 + 21) -
                p_over_q * *(b + 302 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 21) +
                one_over_two_q * *(b + 231 * OS1_S1 + 10);
            *(b + 231 * OS1_S1 + 39) =
                prefactor_z * *(b + 231 * OS1_S1 + 21) -
                p_over_q * *(b + 303 * OS1_S1 + 21) +
                one_over_two_q * *(b + 171 * OS1_S1 + 21);
            *(b + 231 * OS1_S1 + 40) =
                prefactor_z * *(b + 231 * OS1_S1 + 22) -
                p_over_q * *(b + 303 * OS1_S1 + 22) +
                one_over_two_q * *(b + 171 * OS1_S1 + 22) +
                one_over_two_q * *(b + 231 * OS1_S1 + 10);
            *(b + 231 * OS1_S1 + 41) =
                prefactor_x * *(b + 231 * OS1_S1 + 26) -
                p_over_q * *(b + 297 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 26) +
                one_over_two_q * *(b + 231 * OS1_S1 + 16);
            *(b + 231 * OS1_S1 + 42) =
                prefactor_z * *(b + 231 * OS1_S1 + 23) -
                p_over_q * *(b + 303 * OS1_S1 + 23) +
                one_over_two_q * *(b + 171 * OS1_S1 + 23);
            *(b + 231 * OS1_S1 + 43) =
                prefactor_y * *(b + 231 * OS1_S1 + 25) -
                p_over_q * *(b + 302 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 25);
            *(b + 231 * OS1_S1 + 44) =
                prefactor_x * *(b + 231 * OS1_S1 + 29) -
                p_over_q * *(b + 297 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 29) +
                one_over_two_q * *(b + 231 * OS1_S1 + 19);
            *(b + 231 * OS1_S1 + 45) =
                prefactor_x * *(b + 231 * OS1_S1 + 30) -
                p_over_q * *(b + 297 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 30);
            *(b + 231 * OS1_S1 + 46) =
                prefactor_z * *(b + 231 * OS1_S1 + 26) -
                p_over_q * *(b + 303 * OS1_S1 + 26) +
                one_over_two_q * *(b + 171 * OS1_S1 + 26);
            *(b + 231 * OS1_S1 + 47) =
                prefactor_x * *(b + 231 * OS1_S1 + 32) -
                p_over_q * *(b + 297 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 32);
            *(b + 231 * OS1_S1 + 48) =
                prefactor_y * *(b + 231 * OS1_S1 + 29) -
                p_over_q * *(b + 302 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 29);
            *(b + 231 * OS1_S1 + 49) =
                prefactor_x * *(b + 231 * OS1_S1 + 34) -
                p_over_q * *(b + 297 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 176 * OS1_S1 + 34);
            *(b + 231 * OS1_S1 + 50) =
                prefactor_y * *(b + 231 * OS1_S1 + 30) -
                p_over_q * *(b + 302 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 16);
            *(b + 231 * OS1_S1 + 51) =
                prefactor_z * *(b + 231 * OS1_S1 + 30) -
                p_over_q * *(b + 303 * OS1_S1 + 30) +
                one_over_two_q * *(b + 171 * OS1_S1 + 30);
            *(b + 231 * OS1_S1 + 52) =
                prefactor_z * *(b + 231 * OS1_S1 + 31) -
                p_over_q * *(b + 303 * OS1_S1 + 31) +
                one_over_two_q * *(b + 171 * OS1_S1 + 31) +
                one_over_two_q * *(b + 231 * OS1_S1 + 16);
            *(b + 231 * OS1_S1 + 53) =
                prefactor_y * *(b + 231 * OS1_S1 + 33) -
                p_over_q * *(b + 302 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 33) +
                one_over_two_q * *(b + 231 * OS1_S1 + 19);
            *(b + 231 * OS1_S1 + 54) =
                prefactor_y * *(b + 231 * OS1_S1 + 34) -
                p_over_q * *(b + 302 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 172 * OS1_S1 + 34);
            *(b + 231 * OS1_S1 + 55) =
                prefactor_z * *(b + 231 * OS1_S1 + 34) -
                p_over_q * *(b + 303 * OS1_S1 + 34) +
                one_over_two_q * *(b + 171 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 19);
            *(b + 232 * OS1_S1 + 35) =
                prefactor_x * *(b + 232 * OS1_S1 + 20) -
                p_over_q * *(b + 298 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 232 * OS1_S1 + 10);
            *(b + 232 * OS1_S1 + 36) =
                prefactor_y * *(b + 232 * OS1_S1 + 20) -
                p_over_q * *(b + 303 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 20);
            *(b + 232 * OS1_S1 + 37) =
                prefactor_z * *(b + 232 * OS1_S1 + 20) -
                p_over_q * *(b + 304 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 20);
            *(b + 232 * OS1_S1 + 38) =
                prefactor_y * *(b + 232 * OS1_S1 + 21) -
                p_over_q * *(b + 303 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 21) +
                one_over_two_q * *(b + 232 * OS1_S1 + 10);
            *(b + 232 * OS1_S1 + 39) =
                prefactor_z * *(b + 232 * OS1_S1 + 21) -
                p_over_q * *(b + 304 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 21);
            *(b + 232 * OS1_S1 + 40) =
                prefactor_z * *(b + 232 * OS1_S1 + 22) -
                p_over_q * *(b + 304 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 22) +
                one_over_two_q * *(b + 232 * OS1_S1 + 10);
            *(b + 232 * OS1_S1 + 41) =
                prefactor_x * *(b + 232 * OS1_S1 + 26) -
                p_over_q * *(b + 298 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 26) +
                one_over_two_q * *(b + 232 * OS1_S1 + 16);
            *(b + 232 * OS1_S1 + 42) =
                prefactor_z * *(b + 232 * OS1_S1 + 23) -
                p_over_q * *(b + 304 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 23);
            *(b + 232 * OS1_S1 + 43) =
                prefactor_y * *(b + 232 * OS1_S1 + 25) -
                p_over_q * *(b + 303 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 25);
            *(b + 232 * OS1_S1 + 44) =
                prefactor_x * *(b + 232 * OS1_S1 + 29) -
                p_over_q * *(b + 298 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 29) +
                one_over_two_q * *(b + 232 * OS1_S1 + 19);
            *(b + 232 * OS1_S1 + 45) =
                prefactor_x * *(b + 232 * OS1_S1 + 30) -
                p_over_q * *(b + 298 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 30);
            *(b + 232 * OS1_S1 + 46) =
                prefactor_z * *(b + 232 * OS1_S1 + 26) -
                p_over_q * *(b + 304 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 26);
            *(b + 232 * OS1_S1 + 47) =
                prefactor_x * *(b + 232 * OS1_S1 + 32) -
                p_over_q * *(b + 298 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 32);
            *(b + 232 * OS1_S1 + 48) =
                prefactor_y * *(b + 232 * OS1_S1 + 29) -
                p_over_q * *(b + 303 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 29);
            *(b + 232 * OS1_S1 + 49) =
                prefactor_x * *(b + 232 * OS1_S1 + 34) -
                p_over_q * *(b + 298 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 177 * OS1_S1 + 34);
            *(b + 232 * OS1_S1 + 50) =
                prefactor_y * *(b + 232 * OS1_S1 + 30) -
                p_over_q * *(b + 303 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 232 * OS1_S1 + 16);
            *(b + 232 * OS1_S1 + 51) =
                prefactor_z * *(b + 232 * OS1_S1 + 30) -
                p_over_q * *(b + 304 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 30);
            *(b + 232 * OS1_S1 + 52) =
                prefactor_z * *(b + 232 * OS1_S1 + 31) -
                p_over_q * *(b + 304 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 31) +
                one_over_two_q * *(b + 232 * OS1_S1 + 16);
            *(b + 232 * OS1_S1 + 53) =
                prefactor_y * *(b + 232 * OS1_S1 + 33) -
                p_over_q * *(b + 303 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 33) +
                one_over_two_q * *(b + 232 * OS1_S1 + 19);
            *(b + 232 * OS1_S1 + 54) =
                prefactor_y * *(b + 232 * OS1_S1 + 34) -
                p_over_q * *(b + 303 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 173 * OS1_S1 + 34);
            *(b + 232 * OS1_S1 + 55) =
                prefactor_z * *(b + 232 * OS1_S1 + 34) -
                p_over_q * *(b + 304 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 172 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 232 * OS1_S1 + 19);
            *(b + 233 * OS1_S1 + 35) =
                prefactor_x * *(b + 233 * OS1_S1 + 20) -
                p_over_q * *(b + 299 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 10);
            *(b + 233 * OS1_S1 + 36) =
                prefactor_y * *(b + 233 * OS1_S1 + 20) -
                p_over_q * *(b + 304 * OS1_S1 + 20) +
                one_over_two_q * *(b + 174 * OS1_S1 + 20);
            *(b + 233 * OS1_S1 + 37) =
                prefactor_z * *(b + 233 * OS1_S1 + 20) -
                p_over_q * *(b + 305 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 20);
            *(b + 233 * OS1_S1 + 38) =
                prefactor_y * *(b + 233 * OS1_S1 + 21) -
                p_over_q * *(b + 304 * OS1_S1 + 21) +
                one_over_two_q * *(b + 174 * OS1_S1 + 21) +
                one_over_two_q * *(b + 233 * OS1_S1 + 10);
            *(b + 233 * OS1_S1 + 39) =
                prefactor_y * *(b + 233 * OS1_S1 + 22) -
                p_over_q * *(b + 304 * OS1_S1 + 22) +
                one_over_two_q * *(b + 174 * OS1_S1 + 22);
            *(b + 233 * OS1_S1 + 40) =
                prefactor_z * *(b + 233 * OS1_S1 + 22) -
                p_over_q * *(b + 305 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 22) +
                one_over_two_q * *(b + 233 * OS1_S1 + 10);
            *(b + 233 * OS1_S1 + 41) =
                prefactor_x * *(b + 233 * OS1_S1 + 26) -
                p_over_q * *(b + 299 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 26) +
                one_over_two_q * *(b + 233 * OS1_S1 + 16);
            *(b + 233 * OS1_S1 + 42) =
                prefactor_z * *(b + 233 * OS1_S1 + 23) -
                p_over_q * *(b + 305 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 23);
            *(b + 233 * OS1_S1 + 43) =
                prefactor_y * *(b + 233 * OS1_S1 + 25) -
                p_over_q * *(b + 304 * OS1_S1 + 25) +
                one_over_two_q * *(b + 174 * OS1_S1 + 25);
            *(b + 233 * OS1_S1 + 44) =
                prefactor_x * *(b + 233 * OS1_S1 + 29) -
                p_over_q * *(b + 299 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 29) +
                one_over_two_q * *(b + 233 * OS1_S1 + 19);
            *(b + 233 * OS1_S1 + 45) =
                prefactor_x * *(b + 233 * OS1_S1 + 30) -
                p_over_q * *(b + 299 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 30);
            *(b + 233 * OS1_S1 + 46) =
                prefactor_z * *(b + 233 * OS1_S1 + 26) -
                p_over_q * *(b + 305 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 26);
            *(b + 233 * OS1_S1 + 47) =
                prefactor_x * *(b + 233 * OS1_S1 + 32) -
                p_over_q * *(b + 299 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 32);
            *(b + 233 * OS1_S1 + 48) =
                prefactor_y * *(b + 233 * OS1_S1 + 29) -
                p_over_q * *(b + 304 * OS1_S1 + 29) +
                one_over_two_q * *(b + 174 * OS1_S1 + 29);
            *(b + 233 * OS1_S1 + 49) =
                prefactor_x * *(b + 233 * OS1_S1 + 34) -
                p_over_q * *(b + 299 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 178 * OS1_S1 + 34);
            *(b + 233 * OS1_S1 + 50) =
                prefactor_y * *(b + 233 * OS1_S1 + 30) -
                p_over_q * *(b + 304 * OS1_S1 + 30) +
                one_over_two_q * *(b + 174 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 16);
            *(b + 233 * OS1_S1 + 51) =
                prefactor_z * *(b + 233 * OS1_S1 + 30) -
                p_over_q * *(b + 305 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 30);
            *(b + 233 * OS1_S1 + 52) =
                prefactor_z * *(b + 233 * OS1_S1 + 31) -
                p_over_q * *(b + 305 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 31) +
                one_over_two_q * *(b + 233 * OS1_S1 + 16);
            *(b + 233 * OS1_S1 + 53) =
                prefactor_y * *(b + 233 * OS1_S1 + 33) -
                p_over_q * *(b + 304 * OS1_S1 + 33) +
                one_over_two_q * *(b + 174 * OS1_S1 + 33) +
                one_over_two_q * *(b + 233 * OS1_S1 + 19);
            *(b + 233 * OS1_S1 + 54) =
                prefactor_y * *(b + 233 * OS1_S1 + 34) -
                p_over_q * *(b + 304 * OS1_S1 + 34) +
                one_over_two_q * *(b + 174 * OS1_S1 + 34);
            *(b + 233 * OS1_S1 + 55) =
                prefactor_z * *(b + 233 * OS1_S1 + 34) -
                p_over_q * *(b + 305 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 173 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 19);
            *(b + 234 * OS1_S1 + 35) =
                prefactor_x * *(b + 234 * OS1_S1 + 20) -
                p_over_q * *(b + 300 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 234 * OS1_S1 + 10);
            *(b + 234 * OS1_S1 + 36) = prefactor_y * *(b + 234 * OS1_S1 + 20) -
                                       p_over_q * *(b + 305 * OS1_S1 + 20);
            *(b + 234 * OS1_S1 + 37) =
                prefactor_z * *(b + 234 * OS1_S1 + 20) -
                p_over_q * *(b + 306 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 20);
            *(b + 234 * OS1_S1 + 38) =
                prefactor_y * *(b + 234 * OS1_S1 + 21) -
                p_over_q * *(b + 305 * OS1_S1 + 21) +
                one_over_two_q * *(b + 234 * OS1_S1 + 10);
            *(b + 234 * OS1_S1 + 39) = prefactor_y * *(b + 234 * OS1_S1 + 22) -
                                       p_over_q * *(b + 305 * OS1_S1 + 22);
            *(b + 234 * OS1_S1 + 40) =
                prefactor_z * *(b + 234 * OS1_S1 + 22) -
                p_over_q * *(b + 306 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 22) +
                one_over_two_q * *(b + 234 * OS1_S1 + 10);
            *(b + 234 * OS1_S1 + 41) =
                prefactor_x * *(b + 234 * OS1_S1 + 26) -
                p_over_q * *(b + 300 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 26) +
                one_over_two_q * *(b + 234 * OS1_S1 + 16);
            *(b + 234 * OS1_S1 + 42) =
                prefactor_z * *(b + 234 * OS1_S1 + 23) -
                p_over_q * *(b + 306 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 23);
            *(b + 234 * OS1_S1 + 43) = prefactor_y * *(b + 234 * OS1_S1 + 25) -
                                       p_over_q * *(b + 305 * OS1_S1 + 25);
            *(b + 234 * OS1_S1 + 44) =
                prefactor_x * *(b + 234 * OS1_S1 + 29) -
                p_over_q * *(b + 300 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 29) +
                one_over_two_q * *(b + 234 * OS1_S1 + 19);
            *(b + 234 * OS1_S1 + 45) =
                prefactor_x * *(b + 234 * OS1_S1 + 30) -
                p_over_q * *(b + 300 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 30);
            *(b + 234 * OS1_S1 + 46) =
                prefactor_z * *(b + 234 * OS1_S1 + 26) -
                p_over_q * *(b + 306 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 26);
            *(b + 234 * OS1_S1 + 47) =
                prefactor_x * *(b + 234 * OS1_S1 + 32) -
                p_over_q * *(b + 300 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 32);
            *(b + 234 * OS1_S1 + 48) = prefactor_y * *(b + 234 * OS1_S1 + 29) -
                                       p_over_q * *(b + 305 * OS1_S1 + 29);
            *(b + 234 * OS1_S1 + 49) =
                prefactor_x * *(b + 234 * OS1_S1 + 34) -
                p_over_q * *(b + 300 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 179 * OS1_S1 + 34);
            *(b + 234 * OS1_S1 + 50) =
                prefactor_y * *(b + 234 * OS1_S1 + 30) -
                p_over_q * *(b + 305 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 234 * OS1_S1 + 16);
            *(b + 234 * OS1_S1 + 51) =
                prefactor_z * *(b + 234 * OS1_S1 + 30) -
                p_over_q * *(b + 306 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 30);
            *(b + 234 * OS1_S1 + 52) =
                prefactor_z * *(b + 234 * OS1_S1 + 31) -
                p_over_q * *(b + 306 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 31) +
                one_over_two_q * *(b + 234 * OS1_S1 + 16);
            *(b + 234 * OS1_S1 + 53) =
                prefactor_y * *(b + 234 * OS1_S1 + 33) -
                p_over_q * *(b + 305 * OS1_S1 + 33) +
                one_over_two_q * *(b + 234 * OS1_S1 + 19);
            *(b + 234 * OS1_S1 + 54) = prefactor_y * *(b + 234 * OS1_S1 + 34) -
                                       p_over_q * *(b + 305 * OS1_S1 + 34);
            *(b + 234 * OS1_S1 + 55) =
                prefactor_z * *(b + 234 * OS1_S1 + 34) -
                p_over_q * *(b + 306 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 174 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 234 * OS1_S1 + 19);
            *(b + 235 * OS1_S1 + 35) =
                prefactor_x * *(b + 235 * OS1_S1 + 20) -
                p_over_q * *(b + 301 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 235 * OS1_S1 + 10);
            *(b + 235 * OS1_S1 + 36) =
                prefactor_y * *(b + 235 * OS1_S1 + 20) -
                p_over_q * *(b + 307 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 20);
            *(b + 235 * OS1_S1 + 37) = prefactor_z * *(b + 235 * OS1_S1 + 20) -
                                       p_over_q * *(b + 308 * OS1_S1 + 20);
            *(b + 235 * OS1_S1 + 38) =
                prefactor_y * *(b + 235 * OS1_S1 + 21) -
                p_over_q * *(b + 307 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 21) +
                one_over_two_q * *(b + 235 * OS1_S1 + 10);
            *(b + 235 * OS1_S1 + 39) = prefactor_z * *(b + 235 * OS1_S1 + 21) -
                                       p_over_q * *(b + 308 * OS1_S1 + 21);
            *(b + 235 * OS1_S1 + 40) =
                prefactor_z * *(b + 235 * OS1_S1 + 22) -
                p_over_q * *(b + 308 * OS1_S1 + 22) +
                one_over_two_q * *(b + 235 * OS1_S1 + 10);
            *(b + 235 * OS1_S1 + 41) =
                prefactor_x * *(b + 235 * OS1_S1 + 26) -
                p_over_q * *(b + 301 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 26) +
                one_over_two_q * *(b + 235 * OS1_S1 + 16);
            *(b + 235 * OS1_S1 + 42) = prefactor_z * *(b + 235 * OS1_S1 + 23) -
                                       p_over_q * *(b + 308 * OS1_S1 + 23);
            *(b + 235 * OS1_S1 + 43) =
                prefactor_y * *(b + 235 * OS1_S1 + 25) -
                p_over_q * *(b + 307 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 25);
            *(b + 235 * OS1_S1 + 44) =
                prefactor_x * *(b + 235 * OS1_S1 + 29) -
                p_over_q * *(b + 301 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 29) +
                one_over_two_q * *(b + 235 * OS1_S1 + 19);
            *(b + 235 * OS1_S1 + 45) =
                prefactor_x * *(b + 235 * OS1_S1 + 30) -
                p_over_q * *(b + 301 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 30);
            *(b + 235 * OS1_S1 + 46) = prefactor_z * *(b + 235 * OS1_S1 + 26) -
                                       p_over_q * *(b + 308 * OS1_S1 + 26);
            *(b + 235 * OS1_S1 + 47) =
                prefactor_x * *(b + 235 * OS1_S1 + 32) -
                p_over_q * *(b + 301 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 32);
            *(b + 235 * OS1_S1 + 48) =
                prefactor_y * *(b + 235 * OS1_S1 + 29) -
                p_over_q * *(b + 307 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 29);
            *(b + 235 * OS1_S1 + 49) =
                prefactor_x * *(b + 235 * OS1_S1 + 34) -
                p_over_q * *(b + 301 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 180 * OS1_S1 + 34);
            *(b + 235 * OS1_S1 + 50) =
                prefactor_y * *(b + 235 * OS1_S1 + 30) -
                p_over_q * *(b + 307 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 235 * OS1_S1 + 16);
            *(b + 235 * OS1_S1 + 51) = prefactor_z * *(b + 235 * OS1_S1 + 30) -
                                       p_over_q * *(b + 308 * OS1_S1 + 30);
            *(b + 235 * OS1_S1 + 52) =
                prefactor_z * *(b + 235 * OS1_S1 + 31) -
                p_over_q * *(b + 308 * OS1_S1 + 31) +
                one_over_two_q * *(b + 235 * OS1_S1 + 16);
            *(b + 235 * OS1_S1 + 53) =
                prefactor_y * *(b + 235 * OS1_S1 + 33) -
                p_over_q * *(b + 307 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 33) +
                one_over_two_q * *(b + 235 * OS1_S1 + 19);
            *(b + 235 * OS1_S1 + 54) =
                prefactor_y * *(b + 235 * OS1_S1 + 34) -
                p_over_q * *(b + 307 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 175 * OS1_S1 + 34);
            *(b + 235 * OS1_S1 + 55) =
                prefactor_z * *(b + 235 * OS1_S1 + 34) -
                p_over_q * *(b + 308 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 235 * OS1_S1 + 19);
            *(b + 236 * OS1_S1 + 35) =
                prefactor_x * *(b + 236 * OS1_S1 + 20) -
                p_over_q * *(b + 302 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 236 * OS1_S1 + 10);
            *(b + 236 * OS1_S1 + 36) =
                prefactor_y * *(b + 236 * OS1_S1 + 20) -
                p_over_q * *(b + 308 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 20);
            *(b + 236 * OS1_S1 + 37) =
                prefactor_z * *(b + 236 * OS1_S1 + 20) -
                p_over_q * *(b + 309 * OS1_S1 + 20) +
                one_over_two_q * *(b + 175 * OS1_S1 + 20);
            *(b + 236 * OS1_S1 + 38) =
                prefactor_y * *(b + 236 * OS1_S1 + 21) -
                p_over_q * *(b + 308 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 21) +
                one_over_two_q * *(b + 236 * OS1_S1 + 10);
            *(b + 236 * OS1_S1 + 39) =
                prefactor_z * *(b + 236 * OS1_S1 + 21) -
                p_over_q * *(b + 309 * OS1_S1 + 21) +
                one_over_two_q * *(b + 175 * OS1_S1 + 21);
            *(b + 236 * OS1_S1 + 40) =
                prefactor_z * *(b + 236 * OS1_S1 + 22) -
                p_over_q * *(b + 309 * OS1_S1 + 22) +
                one_over_two_q * *(b + 175 * OS1_S1 + 22) +
                one_over_two_q * *(b + 236 * OS1_S1 + 10);
            *(b + 236 * OS1_S1 + 41) =
                prefactor_x * *(b + 236 * OS1_S1 + 26) -
                p_over_q * *(b + 302 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 26) +
                one_over_two_q * *(b + 236 * OS1_S1 + 16);
            *(b + 236 * OS1_S1 + 42) =
                prefactor_z * *(b + 236 * OS1_S1 + 23) -
                p_over_q * *(b + 309 * OS1_S1 + 23) +
                one_over_two_q * *(b + 175 * OS1_S1 + 23);
            *(b + 236 * OS1_S1 + 43) =
                prefactor_y * *(b + 236 * OS1_S1 + 25) -
                p_over_q * *(b + 308 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 25);
            *(b + 236 * OS1_S1 + 44) =
                prefactor_x * *(b + 236 * OS1_S1 + 29) -
                p_over_q * *(b + 302 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 29) +
                one_over_two_q * *(b + 236 * OS1_S1 + 19);
            *(b + 236 * OS1_S1 + 45) =
                prefactor_x * *(b + 236 * OS1_S1 + 30) -
                p_over_q * *(b + 302 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 30);
            *(b + 236 * OS1_S1 + 46) =
                prefactor_z * *(b + 236 * OS1_S1 + 26) -
                p_over_q * *(b + 309 * OS1_S1 + 26) +
                one_over_two_q * *(b + 175 * OS1_S1 + 26);
            *(b + 236 * OS1_S1 + 47) =
                prefactor_x * *(b + 236 * OS1_S1 + 32) -
                p_over_q * *(b + 302 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 32);
            *(b + 236 * OS1_S1 + 48) =
                prefactor_y * *(b + 236 * OS1_S1 + 29) -
                p_over_q * *(b + 308 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 29);
            *(b + 236 * OS1_S1 + 49) =
                prefactor_x * *(b + 236 * OS1_S1 + 34) -
                p_over_q * *(b + 302 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 34);
            *(b + 236 * OS1_S1 + 50) =
                prefactor_y * *(b + 236 * OS1_S1 + 30) -
                p_over_q * *(b + 308 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 236 * OS1_S1 + 16);
            *(b + 236 * OS1_S1 + 51) =
                prefactor_z * *(b + 236 * OS1_S1 + 30) -
                p_over_q * *(b + 309 * OS1_S1 + 30) +
                one_over_two_q * *(b + 175 * OS1_S1 + 30);
            *(b + 236 * OS1_S1 + 52) =
                prefactor_z * *(b + 236 * OS1_S1 + 31) -
                p_over_q * *(b + 309 * OS1_S1 + 31) +
                one_over_two_q * *(b + 175 * OS1_S1 + 31) +
                one_over_two_q * *(b + 236 * OS1_S1 + 16);
            *(b + 236 * OS1_S1 + 53) =
                prefactor_y * *(b + 236 * OS1_S1 + 33) -
                p_over_q * *(b + 308 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 33) +
                one_over_two_q * *(b + 236 * OS1_S1 + 19);
            *(b + 236 * OS1_S1 + 54) =
                prefactor_y * *(b + 236 * OS1_S1 + 34) -
                p_over_q * *(b + 308 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 176 * OS1_S1 + 34);
            *(b + 236 * OS1_S1 + 55) =
                prefactor_z * *(b + 236 * OS1_S1 + 34) -
                p_over_q * *(b + 309 * OS1_S1 + 34) +
                one_over_two_q * *(b + 175 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 236 * OS1_S1 + 19);
            *(b + 237 * OS1_S1 + 35) =
                prefactor_x * *(b + 237 * OS1_S1 + 20) -
                p_over_q * *(b + 303 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 10);
            *(b + 237 * OS1_S1 + 36) =
                prefactor_y * *(b + 237 * OS1_S1 + 20) -
                p_over_q * *(b + 309 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 20);
            *(b + 237 * OS1_S1 + 37) =
                prefactor_z * *(b + 237 * OS1_S1 + 20) -
                p_over_q * *(b + 310 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 20);
            *(b + 237 * OS1_S1 + 38) =
                prefactor_y * *(b + 237 * OS1_S1 + 21) -
                p_over_q * *(b + 309 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 21) +
                one_over_two_q * *(b + 237 * OS1_S1 + 10);
            *(b + 237 * OS1_S1 + 39) =
                prefactor_z * *(b + 237 * OS1_S1 + 21) -
                p_over_q * *(b + 310 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 21);
            *(b + 237 * OS1_S1 + 40) =
                prefactor_z * *(b + 237 * OS1_S1 + 22) -
                p_over_q * *(b + 310 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 22) +
                one_over_two_q * *(b + 237 * OS1_S1 + 10);
            *(b + 237 * OS1_S1 + 41) =
                prefactor_x * *(b + 237 * OS1_S1 + 26) -
                p_over_q * *(b + 303 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 26) +
                one_over_two_q * *(b + 237 * OS1_S1 + 16);
            *(b + 237 * OS1_S1 + 42) =
                prefactor_z * *(b + 237 * OS1_S1 + 23) -
                p_over_q * *(b + 310 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 23);
            *(b + 237 * OS1_S1 + 43) =
                prefactor_y * *(b + 237 * OS1_S1 + 25) -
                p_over_q * *(b + 309 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 25);
            *(b + 237 * OS1_S1 + 44) =
                prefactor_x * *(b + 237 * OS1_S1 + 29) -
                p_over_q * *(b + 303 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 29) +
                one_over_two_q * *(b + 237 * OS1_S1 + 19);
            *(b + 237 * OS1_S1 + 45) =
                prefactor_x * *(b + 237 * OS1_S1 + 30) -
                p_over_q * *(b + 303 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 30);
            *(b + 237 * OS1_S1 + 46) =
                prefactor_z * *(b + 237 * OS1_S1 + 26) -
                p_over_q * *(b + 310 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 26);
            *(b + 237 * OS1_S1 + 47) =
                prefactor_x * *(b + 237 * OS1_S1 + 32) -
                p_over_q * *(b + 303 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 32);
            *(b + 237 * OS1_S1 + 48) =
                prefactor_y * *(b + 237 * OS1_S1 + 29) -
                p_over_q * *(b + 309 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 29);
            *(b + 237 * OS1_S1 + 49) =
                prefactor_x * *(b + 237 * OS1_S1 + 34) -
                p_over_q * *(b + 303 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 182 * OS1_S1 + 34);
            *(b + 237 * OS1_S1 + 50) =
                prefactor_y * *(b + 237 * OS1_S1 + 30) -
                p_over_q * *(b + 309 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 16);
            *(b + 237 * OS1_S1 + 51) =
                prefactor_z * *(b + 237 * OS1_S1 + 30) -
                p_over_q * *(b + 310 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 30);
            *(b + 237 * OS1_S1 + 52) =
                prefactor_z * *(b + 237 * OS1_S1 + 31) -
                p_over_q * *(b + 310 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 31) +
                one_over_two_q * *(b + 237 * OS1_S1 + 16);
            *(b + 237 * OS1_S1 + 53) =
                prefactor_y * *(b + 237 * OS1_S1 + 33) -
                p_over_q * *(b + 309 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 33) +
                one_over_two_q * *(b + 237 * OS1_S1 + 19);
            *(b + 237 * OS1_S1 + 54) =
                prefactor_y * *(b + 237 * OS1_S1 + 34) -
                p_over_q * *(b + 309 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 34);
            *(b + 237 * OS1_S1 + 55) =
                prefactor_z * *(b + 237 * OS1_S1 + 34) -
                p_over_q * *(b + 310 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 176 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 19);
            *(b + 238 * OS1_S1 + 35) =
                prefactor_x * *(b + 238 * OS1_S1 + 20) -
                p_over_q * *(b + 304 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 10);
            *(b + 238 * OS1_S1 + 36) =
                prefactor_y * *(b + 238 * OS1_S1 + 20) -
                p_over_q * *(b + 310 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 20);
            *(b + 238 * OS1_S1 + 37) =
                prefactor_z * *(b + 238 * OS1_S1 + 20) -
                p_over_q * *(b + 311 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 20);
            *(b + 238 * OS1_S1 + 38) =
                prefactor_y * *(b + 238 * OS1_S1 + 21) -
                p_over_q * *(b + 310 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 21) +
                one_over_two_q * *(b + 238 * OS1_S1 + 10);
            *(b + 238 * OS1_S1 + 39) =
                prefactor_y * *(b + 238 * OS1_S1 + 22) -
                p_over_q * *(b + 310 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 22);
            *(b + 238 * OS1_S1 + 40) =
                prefactor_z * *(b + 238 * OS1_S1 + 22) -
                p_over_q * *(b + 311 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 22) +
                one_over_two_q * *(b + 238 * OS1_S1 + 10);
            *(b + 238 * OS1_S1 + 41) =
                prefactor_x * *(b + 238 * OS1_S1 + 26) -
                p_over_q * *(b + 304 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 26) +
                one_over_two_q * *(b + 238 * OS1_S1 + 16);
            *(b + 238 * OS1_S1 + 42) =
                prefactor_z * *(b + 238 * OS1_S1 + 23) -
                p_over_q * *(b + 311 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 23);
            *(b + 238 * OS1_S1 + 43) =
                prefactor_y * *(b + 238 * OS1_S1 + 25) -
                p_over_q * *(b + 310 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 25);
            *(b + 238 * OS1_S1 + 44) =
                prefactor_x * *(b + 238 * OS1_S1 + 29) -
                p_over_q * *(b + 304 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 29) +
                one_over_two_q * *(b + 238 * OS1_S1 + 19);
            *(b + 238 * OS1_S1 + 45) =
                prefactor_x * *(b + 238 * OS1_S1 + 30) -
                p_over_q * *(b + 304 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 30);
            *(b + 238 * OS1_S1 + 46) =
                prefactor_z * *(b + 238 * OS1_S1 + 26) -
                p_over_q * *(b + 311 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 26);
            *(b + 238 * OS1_S1 + 47) =
                prefactor_x * *(b + 238 * OS1_S1 + 32) -
                p_over_q * *(b + 304 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 32);
            *(b + 238 * OS1_S1 + 48) =
                prefactor_y * *(b + 238 * OS1_S1 + 29) -
                p_over_q * *(b + 310 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 29);
            *(b + 238 * OS1_S1 + 49) =
                prefactor_x * *(b + 238 * OS1_S1 + 34) -
                p_over_q * *(b + 304 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 183 * OS1_S1 + 34);
            *(b + 238 * OS1_S1 + 50) =
                prefactor_y * *(b + 238 * OS1_S1 + 30) -
                p_over_q * *(b + 310 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 16);
            *(b + 238 * OS1_S1 + 51) =
                prefactor_z * *(b + 238 * OS1_S1 + 30) -
                p_over_q * *(b + 311 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 30);
            *(b + 238 * OS1_S1 + 52) =
                prefactor_z * *(b + 238 * OS1_S1 + 31) -
                p_over_q * *(b + 311 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 31) +
                one_over_two_q * *(b + 238 * OS1_S1 + 16);
            *(b + 238 * OS1_S1 + 53) =
                prefactor_y * *(b + 238 * OS1_S1 + 33) -
                p_over_q * *(b + 310 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 33) +
                one_over_two_q * *(b + 238 * OS1_S1 + 19);
            *(b + 238 * OS1_S1 + 54) =
                prefactor_y * *(b + 238 * OS1_S1 + 34) -
                p_over_q * *(b + 310 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 178 * OS1_S1 + 34);
            *(b + 238 * OS1_S1 + 55) =
                prefactor_z * *(b + 238 * OS1_S1 + 34) -
                p_over_q * *(b + 311 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 177 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 19);
            *(b + 239 * OS1_S1 + 35) =
                prefactor_x * *(b + 239 * OS1_S1 + 20) -
                p_over_q * *(b + 305 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 239 * OS1_S1 + 10);
            *(b + 239 * OS1_S1 + 36) =
                prefactor_y * *(b + 239 * OS1_S1 + 20) -
                p_over_q * *(b + 311 * OS1_S1 + 20) +
                one_over_two_q * *(b + 179 * OS1_S1 + 20);
            *(b + 239 * OS1_S1 + 37) =
                prefactor_z * *(b + 239 * OS1_S1 + 20) -
                p_over_q * *(b + 312 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 20);
            *(b + 239 * OS1_S1 + 38) =
                prefactor_y * *(b + 239 * OS1_S1 + 21) -
                p_over_q * *(b + 311 * OS1_S1 + 21) +
                one_over_two_q * *(b + 179 * OS1_S1 + 21) +
                one_over_two_q * *(b + 239 * OS1_S1 + 10);
            *(b + 239 * OS1_S1 + 39) =
                prefactor_y * *(b + 239 * OS1_S1 + 22) -
                p_over_q * *(b + 311 * OS1_S1 + 22) +
                one_over_two_q * *(b + 179 * OS1_S1 + 22);
            *(b + 239 * OS1_S1 + 40) =
                prefactor_z * *(b + 239 * OS1_S1 + 22) -
                p_over_q * *(b + 312 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 22) +
                one_over_two_q * *(b + 239 * OS1_S1 + 10);
            *(b + 239 * OS1_S1 + 41) =
                prefactor_x * *(b + 239 * OS1_S1 + 26) -
                p_over_q * *(b + 305 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 26) +
                one_over_two_q * *(b + 239 * OS1_S1 + 16);
            *(b + 239 * OS1_S1 + 42) =
                prefactor_z * *(b + 239 * OS1_S1 + 23) -
                p_over_q * *(b + 312 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 23);
            *(b + 239 * OS1_S1 + 43) =
                prefactor_y * *(b + 239 * OS1_S1 + 25) -
                p_over_q * *(b + 311 * OS1_S1 + 25) +
                one_over_two_q * *(b + 179 * OS1_S1 + 25);
            *(b + 239 * OS1_S1 + 44) =
                prefactor_x * *(b + 239 * OS1_S1 + 29) -
                p_over_q * *(b + 305 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 29) +
                one_over_two_q * *(b + 239 * OS1_S1 + 19);
            *(b + 239 * OS1_S1 + 45) =
                prefactor_x * *(b + 239 * OS1_S1 + 30) -
                p_over_q * *(b + 305 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 30);
            *(b + 239 * OS1_S1 + 46) =
                prefactor_z * *(b + 239 * OS1_S1 + 26) -
                p_over_q * *(b + 312 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 26);
            *(b + 239 * OS1_S1 + 47) =
                prefactor_x * *(b + 239 * OS1_S1 + 32) -
                p_over_q * *(b + 305 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 32);
            *(b + 239 * OS1_S1 + 48) =
                prefactor_y * *(b + 239 * OS1_S1 + 29) -
                p_over_q * *(b + 311 * OS1_S1 + 29) +
                one_over_two_q * *(b + 179 * OS1_S1 + 29);
            *(b + 239 * OS1_S1 + 49) =
                prefactor_x * *(b + 239 * OS1_S1 + 34) -
                p_over_q * *(b + 305 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 34);
            *(b + 239 * OS1_S1 + 50) =
                prefactor_y * *(b + 239 * OS1_S1 + 30) -
                p_over_q * *(b + 311 * OS1_S1 + 30) +
                one_over_two_q * *(b + 179 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 239 * OS1_S1 + 16);
            *(b + 239 * OS1_S1 + 51) =
                prefactor_z * *(b + 239 * OS1_S1 + 30) -
                p_over_q * *(b + 312 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 30);
            *(b + 239 * OS1_S1 + 52) =
                prefactor_z * *(b + 239 * OS1_S1 + 31) -
                p_over_q * *(b + 312 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 31) +
                one_over_two_q * *(b + 239 * OS1_S1 + 16);
            *(b + 239 * OS1_S1 + 53) =
                prefactor_y * *(b + 239 * OS1_S1 + 33) -
                p_over_q * *(b + 311 * OS1_S1 + 33) +
                one_over_two_q * *(b + 179 * OS1_S1 + 33) +
                one_over_two_q * *(b + 239 * OS1_S1 + 19);
            *(b + 239 * OS1_S1 + 54) =
                prefactor_y * *(b + 239 * OS1_S1 + 34) -
                p_over_q * *(b + 311 * OS1_S1 + 34) +
                one_over_two_q * *(b + 179 * OS1_S1 + 34);
            *(b + 239 * OS1_S1 + 55) =
                prefactor_z * *(b + 239 * OS1_S1 + 34) -
                p_over_q * *(b + 312 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 178 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 239 * OS1_S1 + 19);
            *(b + 240 * OS1_S1 + 35) =
                prefactor_x * *(b + 240 * OS1_S1 + 20) -
                p_over_q * *(b + 306 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 240 * OS1_S1 + 10);
            *(b + 240 * OS1_S1 + 36) = prefactor_y * *(b + 240 * OS1_S1 + 20) -
                                       p_over_q * *(b + 312 * OS1_S1 + 20);
            *(b + 240 * OS1_S1 + 37) =
                prefactor_z * *(b + 240 * OS1_S1 + 20) -
                p_over_q * *(b + 313 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 20);
            *(b + 240 * OS1_S1 + 38) =
                prefactor_y * *(b + 240 * OS1_S1 + 21) -
                p_over_q * *(b + 312 * OS1_S1 + 21) +
                one_over_two_q * *(b + 240 * OS1_S1 + 10);
            *(b + 240 * OS1_S1 + 39) = prefactor_y * *(b + 240 * OS1_S1 + 22) -
                                       p_over_q * *(b + 312 * OS1_S1 + 22);
            *(b + 240 * OS1_S1 + 40) =
                prefactor_z * *(b + 240 * OS1_S1 + 22) -
                p_over_q * *(b + 313 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 22) +
                one_over_two_q * *(b + 240 * OS1_S1 + 10);
            *(b + 240 * OS1_S1 + 41) =
                prefactor_x * *(b + 240 * OS1_S1 + 26) -
                p_over_q * *(b + 306 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 26) +
                one_over_two_q * *(b + 240 * OS1_S1 + 16);
            *(b + 240 * OS1_S1 + 42) =
                prefactor_z * *(b + 240 * OS1_S1 + 23) -
                p_over_q * *(b + 313 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 23);
            *(b + 240 * OS1_S1 + 43) = prefactor_y * *(b + 240 * OS1_S1 + 25) -
                                       p_over_q * *(b + 312 * OS1_S1 + 25);
            *(b + 240 * OS1_S1 + 44) =
                prefactor_x * *(b + 240 * OS1_S1 + 29) -
                p_over_q * *(b + 306 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 29) +
                one_over_two_q * *(b + 240 * OS1_S1 + 19);
            *(b + 240 * OS1_S1 + 45) =
                prefactor_x * *(b + 240 * OS1_S1 + 30) -
                p_over_q * *(b + 306 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 30);
            *(b + 240 * OS1_S1 + 46) =
                prefactor_z * *(b + 240 * OS1_S1 + 26) -
                p_over_q * *(b + 313 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 26);
            *(b + 240 * OS1_S1 + 47) =
                prefactor_x * *(b + 240 * OS1_S1 + 32) -
                p_over_q * *(b + 306 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 32);
            *(b + 240 * OS1_S1 + 48) = prefactor_y * *(b + 240 * OS1_S1 + 29) -
                                       p_over_q * *(b + 312 * OS1_S1 + 29);
            *(b + 240 * OS1_S1 + 49) =
                prefactor_x * *(b + 240 * OS1_S1 + 34) -
                p_over_q * *(b + 306 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 185 * OS1_S1 + 34);
            *(b + 240 * OS1_S1 + 50) =
                prefactor_y * *(b + 240 * OS1_S1 + 30) -
                p_over_q * *(b + 312 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 240 * OS1_S1 + 16);
            *(b + 240 * OS1_S1 + 51) =
                prefactor_z * *(b + 240 * OS1_S1 + 30) -
                p_over_q * *(b + 313 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 30);
            *(b + 240 * OS1_S1 + 52) =
                prefactor_z * *(b + 240 * OS1_S1 + 31) -
                p_over_q * *(b + 313 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 31) +
                one_over_two_q * *(b + 240 * OS1_S1 + 16);
            *(b + 240 * OS1_S1 + 53) =
                prefactor_y * *(b + 240 * OS1_S1 + 33) -
                p_over_q * *(b + 312 * OS1_S1 + 33) +
                one_over_two_q * *(b + 240 * OS1_S1 + 19);
            *(b + 240 * OS1_S1 + 54) = prefactor_y * *(b + 240 * OS1_S1 + 34) -
                                       p_over_q * *(b + 312 * OS1_S1 + 34);
            *(b + 240 * OS1_S1 + 55) =
                prefactor_z * *(b + 240 * OS1_S1 + 34) -
                p_over_q * *(b + 313 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 179 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 240 * OS1_S1 + 19);
            *(b + 241 * OS1_S1 + 35) =
                prefactor_x * *(b + 241 * OS1_S1 + 20) -
                p_over_q * *(b + 307 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 241 * OS1_S1 + 10);
            *(b + 241 * OS1_S1 + 36) =
                prefactor_y * *(b + 241 * OS1_S1 + 20) -
                p_over_q * *(b + 314 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 20);
            *(b + 241 * OS1_S1 + 37) = prefactor_z * *(b + 241 * OS1_S1 + 20) -
                                       p_over_q * *(b + 315 * OS1_S1 + 20);
            *(b + 241 * OS1_S1 + 38) =
                prefactor_y * *(b + 241 * OS1_S1 + 21) -
                p_over_q * *(b + 314 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 21) +
                one_over_two_q * *(b + 241 * OS1_S1 + 10);
            *(b + 241 * OS1_S1 + 39) = prefactor_z * *(b + 241 * OS1_S1 + 21) -
                                       p_over_q * *(b + 315 * OS1_S1 + 21);
            *(b + 241 * OS1_S1 + 40) =
                prefactor_z * *(b + 241 * OS1_S1 + 22) -
                p_over_q * *(b + 315 * OS1_S1 + 22) +
                one_over_two_q * *(b + 241 * OS1_S1 + 10);
            *(b + 241 * OS1_S1 + 41) =
                prefactor_x * *(b + 241 * OS1_S1 + 26) -
                p_over_q * *(b + 307 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 26) +
                one_over_two_q * *(b + 241 * OS1_S1 + 16);
            *(b + 241 * OS1_S1 + 42) = prefactor_z * *(b + 241 * OS1_S1 + 23) -
                                       p_over_q * *(b + 315 * OS1_S1 + 23);
            *(b + 241 * OS1_S1 + 43) =
                prefactor_y * *(b + 241 * OS1_S1 + 25) -
                p_over_q * *(b + 314 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 25);
            *(b + 241 * OS1_S1 + 44) =
                prefactor_x * *(b + 241 * OS1_S1 + 29) -
                p_over_q * *(b + 307 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 29) +
                one_over_two_q * *(b + 241 * OS1_S1 + 19);
            *(b + 241 * OS1_S1 + 45) =
                prefactor_x * *(b + 241 * OS1_S1 + 30) -
                p_over_q * *(b + 307 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 30);
            *(b + 241 * OS1_S1 + 46) = prefactor_z * *(b + 241 * OS1_S1 + 26) -
                                       p_over_q * *(b + 315 * OS1_S1 + 26);
            *(b + 241 * OS1_S1 + 47) =
                prefactor_x * *(b + 241 * OS1_S1 + 32) -
                p_over_q * *(b + 307 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 32);
            *(b + 241 * OS1_S1 + 48) =
                prefactor_x * *(b + 241 * OS1_S1 + 33) -
                p_over_q * *(b + 307 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 33);
            *(b + 241 * OS1_S1 + 49) =
                prefactor_x * *(b + 241 * OS1_S1 + 34) -
                p_over_q * *(b + 307 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 186 * OS1_S1 + 34);
            *(b + 241 * OS1_S1 + 50) =
                prefactor_y * *(b + 241 * OS1_S1 + 30) -
                p_over_q * *(b + 314 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 241 * OS1_S1 + 16);
            *(b + 241 * OS1_S1 + 51) = prefactor_z * *(b + 241 * OS1_S1 + 30) -
                                       p_over_q * *(b + 315 * OS1_S1 + 30);
            *(b + 241 * OS1_S1 + 52) =
                prefactor_z * *(b + 241 * OS1_S1 + 31) -
                p_over_q * *(b + 315 * OS1_S1 + 31) +
                one_over_two_q * *(b + 241 * OS1_S1 + 16);
            *(b + 241 * OS1_S1 + 53) =
                prefactor_y * *(b + 241 * OS1_S1 + 33) -
                p_over_q * *(b + 314 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 33) +
                one_over_two_q * *(b + 241 * OS1_S1 + 19);
            *(b + 241 * OS1_S1 + 54) =
                prefactor_y * *(b + 241 * OS1_S1 + 34) -
                p_over_q * *(b + 314 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 180 * OS1_S1 + 34);
            *(b + 241 * OS1_S1 + 55) =
                prefactor_z * *(b + 241 * OS1_S1 + 34) -
                p_over_q * *(b + 315 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 241 * OS1_S1 + 19);
            *(b + 242 * OS1_S1 + 35) =
                prefactor_x * *(b + 242 * OS1_S1 + 20) -
                p_over_q * *(b + 308 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 242 * OS1_S1 + 10);
            *(b + 242 * OS1_S1 + 36) =
                prefactor_y * *(b + 242 * OS1_S1 + 20) -
                p_over_q * *(b + 315 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 20);
            *(b + 242 * OS1_S1 + 37) =
                prefactor_z * *(b + 242 * OS1_S1 + 20) -
                p_over_q * *(b + 316 * OS1_S1 + 20) +
                one_over_two_q * *(b + 180 * OS1_S1 + 20);
            *(b + 242 * OS1_S1 + 38) =
                prefactor_y * *(b + 242 * OS1_S1 + 21) -
                p_over_q * *(b + 315 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 21) +
                one_over_two_q * *(b + 242 * OS1_S1 + 10);
            *(b + 242 * OS1_S1 + 39) =
                prefactor_z * *(b + 242 * OS1_S1 + 21) -
                p_over_q * *(b + 316 * OS1_S1 + 21) +
                one_over_two_q * *(b + 180 * OS1_S1 + 21);
            *(b + 242 * OS1_S1 + 40) =
                prefactor_z * *(b + 242 * OS1_S1 + 22) -
                p_over_q * *(b + 316 * OS1_S1 + 22) +
                one_over_two_q * *(b + 180 * OS1_S1 + 22) +
                one_over_two_q * *(b + 242 * OS1_S1 + 10);
            *(b + 242 * OS1_S1 + 41) =
                prefactor_x * *(b + 242 * OS1_S1 + 26) -
                p_over_q * *(b + 308 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 26) +
                one_over_two_q * *(b + 242 * OS1_S1 + 16);
            *(b + 242 * OS1_S1 + 42) =
                prefactor_z * *(b + 242 * OS1_S1 + 23) -
                p_over_q * *(b + 316 * OS1_S1 + 23) +
                one_over_two_q * *(b + 180 * OS1_S1 + 23);
            *(b + 242 * OS1_S1 + 43) =
                prefactor_y * *(b + 242 * OS1_S1 + 25) -
                p_over_q * *(b + 315 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 25);
            *(b + 242 * OS1_S1 + 44) =
                prefactor_x * *(b + 242 * OS1_S1 + 29) -
                p_over_q * *(b + 308 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 29) +
                one_over_two_q * *(b + 242 * OS1_S1 + 19);
            *(b + 242 * OS1_S1 + 45) =
                prefactor_x * *(b + 242 * OS1_S1 + 30) -
                p_over_q * *(b + 308 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 30);
            *(b + 242 * OS1_S1 + 46) =
                prefactor_z * *(b + 242 * OS1_S1 + 26) -
                p_over_q * *(b + 316 * OS1_S1 + 26) +
                one_over_two_q * *(b + 180 * OS1_S1 + 26);
            *(b + 242 * OS1_S1 + 47) =
                prefactor_x * *(b + 242 * OS1_S1 + 32) -
                p_over_q * *(b + 308 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 32);
            *(b + 242 * OS1_S1 + 48) =
                prefactor_x * *(b + 242 * OS1_S1 + 33) -
                p_over_q * *(b + 308 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 33);
            *(b + 242 * OS1_S1 + 49) =
                prefactor_x * *(b + 242 * OS1_S1 + 34) -
                p_over_q * *(b + 308 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 187 * OS1_S1 + 34);
            *(b + 242 * OS1_S1 + 50) =
                prefactor_y * *(b + 242 * OS1_S1 + 30) -
                p_over_q * *(b + 315 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 242 * OS1_S1 + 16);
            *(b + 242 * OS1_S1 + 51) =
                prefactor_z * *(b + 242 * OS1_S1 + 30) -
                p_over_q * *(b + 316 * OS1_S1 + 30) +
                one_over_two_q * *(b + 180 * OS1_S1 + 30);
            *(b + 242 * OS1_S1 + 52) =
                prefactor_z * *(b + 242 * OS1_S1 + 31) -
                p_over_q * *(b + 316 * OS1_S1 + 31) +
                one_over_two_q * *(b + 180 * OS1_S1 + 31) +
                one_over_two_q * *(b + 242 * OS1_S1 + 16);
            *(b + 242 * OS1_S1 + 53) =
                prefactor_y * *(b + 242 * OS1_S1 + 33) -
                p_over_q * *(b + 315 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 33) +
                one_over_two_q * *(b + 242 * OS1_S1 + 19);
            *(b + 242 * OS1_S1 + 54) =
                prefactor_y * *(b + 242 * OS1_S1 + 34) -
                p_over_q * *(b + 315 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 181 * OS1_S1 + 34);
            *(b + 242 * OS1_S1 + 55) =
                prefactor_z * *(b + 242 * OS1_S1 + 34) -
                p_over_q * *(b + 316 * OS1_S1 + 34) +
                one_over_two_q * *(b + 180 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 242 * OS1_S1 + 19);
            *(b + 243 * OS1_S1 + 35) =
                prefactor_x * *(b + 243 * OS1_S1 + 20) -
                p_over_q * *(b + 309 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 243 * OS1_S1 + 10);
            *(b + 243 * OS1_S1 + 36) =
                prefactor_y * *(b + 243 * OS1_S1 + 20) -
                p_over_q * *(b + 316 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 20);
            *(b + 243 * OS1_S1 + 37) =
                prefactor_z * *(b + 243 * OS1_S1 + 20) -
                p_over_q * *(b + 317 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 20);
            *(b + 243 * OS1_S1 + 38) =
                prefactor_y * *(b + 243 * OS1_S1 + 21) -
                p_over_q * *(b + 316 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 21) +
                one_over_two_q * *(b + 243 * OS1_S1 + 10);
            *(b + 243 * OS1_S1 + 39) =
                prefactor_z * *(b + 243 * OS1_S1 + 21) -
                p_over_q * *(b + 317 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 21);
            *(b + 243 * OS1_S1 + 40) =
                prefactor_z * *(b + 243 * OS1_S1 + 22) -
                p_over_q * *(b + 317 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 22) +
                one_over_two_q * *(b + 243 * OS1_S1 + 10);
            *(b + 243 * OS1_S1 + 41) =
                prefactor_x * *(b + 243 * OS1_S1 + 26) -
                p_over_q * *(b + 309 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 26) +
                one_over_two_q * *(b + 243 * OS1_S1 + 16);
            *(b + 243 * OS1_S1 + 42) =
                prefactor_z * *(b + 243 * OS1_S1 + 23) -
                p_over_q * *(b + 317 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 23);
            *(b + 243 * OS1_S1 + 43) =
                prefactor_y * *(b + 243 * OS1_S1 + 25) -
                p_over_q * *(b + 316 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 25);
            *(b + 243 * OS1_S1 + 44) =
                prefactor_x * *(b + 243 * OS1_S1 + 29) -
                p_over_q * *(b + 309 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 29) +
                one_over_two_q * *(b + 243 * OS1_S1 + 19);
            *(b + 243 * OS1_S1 + 45) =
                prefactor_x * *(b + 243 * OS1_S1 + 30) -
                p_over_q * *(b + 309 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 30);
            *(b + 243 * OS1_S1 + 46) =
                prefactor_z * *(b + 243 * OS1_S1 + 26) -
                p_over_q * *(b + 317 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 26);
            *(b + 243 * OS1_S1 + 47) =
                prefactor_x * *(b + 243 * OS1_S1 + 32) -
                p_over_q * *(b + 309 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 32);
            *(b + 243 * OS1_S1 + 48) =
                prefactor_y * *(b + 243 * OS1_S1 + 29) -
                p_over_q * *(b + 316 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 29);
            *(b + 243 * OS1_S1 + 49) =
                prefactor_x * *(b + 243 * OS1_S1 + 34) -
                p_over_q * *(b + 309 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 188 * OS1_S1 + 34);
            *(b + 243 * OS1_S1 + 50) =
                prefactor_y * *(b + 243 * OS1_S1 + 30) -
                p_over_q * *(b + 316 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 243 * OS1_S1 + 16);
            *(b + 243 * OS1_S1 + 51) =
                prefactor_z * *(b + 243 * OS1_S1 + 30) -
                p_over_q * *(b + 317 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 30);
            *(b + 243 * OS1_S1 + 52) =
                prefactor_z * *(b + 243 * OS1_S1 + 31) -
                p_over_q * *(b + 317 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 31) +
                one_over_two_q * *(b + 243 * OS1_S1 + 16);
            *(b + 243 * OS1_S1 + 53) =
                prefactor_y * *(b + 243 * OS1_S1 + 33) -
                p_over_q * *(b + 316 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 33) +
                one_over_two_q * *(b + 243 * OS1_S1 + 19);
            *(b + 243 * OS1_S1 + 54) =
                prefactor_y * *(b + 243 * OS1_S1 + 34) -
                p_over_q * *(b + 316 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 182 * OS1_S1 + 34);
            *(b + 243 * OS1_S1 + 55) =
                prefactor_z * *(b + 243 * OS1_S1 + 34) -
                p_over_q * *(b + 317 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 181 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 243 * OS1_S1 + 19);
            *(b + 244 * OS1_S1 + 35) =
                prefactor_x * *(b + 244 * OS1_S1 + 20) -
                p_over_q * *(b + 310 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 10);
            *(b + 244 * OS1_S1 + 36) =
                prefactor_y * *(b + 244 * OS1_S1 + 20) -
                p_over_q * *(b + 317 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 20);
            *(b + 244 * OS1_S1 + 37) =
                prefactor_z * *(b + 244 * OS1_S1 + 20) -
                p_over_q * *(b + 318 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 20);
            *(b + 244 * OS1_S1 + 38) =
                prefactor_y * *(b + 244 * OS1_S1 + 21) -
                p_over_q * *(b + 317 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 21) +
                one_over_two_q * *(b + 244 * OS1_S1 + 10);
            *(b + 244 * OS1_S1 + 39) =
                prefactor_z * *(b + 244 * OS1_S1 + 21) -
                p_over_q * *(b + 318 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 21);
            *(b + 244 * OS1_S1 + 40) =
                prefactor_z * *(b + 244 * OS1_S1 + 22) -
                p_over_q * *(b + 318 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 22) +
                one_over_two_q * *(b + 244 * OS1_S1 + 10);
            *(b + 244 * OS1_S1 + 41) =
                prefactor_x * *(b + 244 * OS1_S1 + 26) -
                p_over_q * *(b + 310 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 26) +
                one_over_two_q * *(b + 244 * OS1_S1 + 16);
            *(b + 244 * OS1_S1 + 42) =
                prefactor_z * *(b + 244 * OS1_S1 + 23) -
                p_over_q * *(b + 318 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 23);
            *(b + 244 * OS1_S1 + 43) =
                prefactor_y * *(b + 244 * OS1_S1 + 25) -
                p_over_q * *(b + 317 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 25);
            *(b + 244 * OS1_S1 + 44) =
                prefactor_x * *(b + 244 * OS1_S1 + 29) -
                p_over_q * *(b + 310 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 29) +
                one_over_two_q * *(b + 244 * OS1_S1 + 19);
            *(b + 244 * OS1_S1 + 45) =
                prefactor_x * *(b + 244 * OS1_S1 + 30) -
                p_over_q * *(b + 310 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 30);
            *(b + 244 * OS1_S1 + 46) =
                prefactor_z * *(b + 244 * OS1_S1 + 26) -
                p_over_q * *(b + 318 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 26);
            *(b + 244 * OS1_S1 + 47) =
                prefactor_x * *(b + 244 * OS1_S1 + 32) -
                p_over_q * *(b + 310 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 32);
            *(b + 244 * OS1_S1 + 48) =
                prefactor_y * *(b + 244 * OS1_S1 + 29) -
                p_over_q * *(b + 317 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 29);
            *(b + 244 * OS1_S1 + 49) =
                prefactor_x * *(b + 244 * OS1_S1 + 34) -
                p_over_q * *(b + 310 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 34);
            *(b + 244 * OS1_S1 + 50) =
                prefactor_y * *(b + 244 * OS1_S1 + 30) -
                p_over_q * *(b + 317 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 16);
            *(b + 244 * OS1_S1 + 51) =
                prefactor_z * *(b + 244 * OS1_S1 + 30) -
                p_over_q * *(b + 318 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 30);
            *(b + 244 * OS1_S1 + 52) =
                prefactor_z * *(b + 244 * OS1_S1 + 31) -
                p_over_q * *(b + 318 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 31) +
                one_over_two_q * *(b + 244 * OS1_S1 + 16);
            *(b + 244 * OS1_S1 + 53) =
                prefactor_y * *(b + 244 * OS1_S1 + 33) -
                p_over_q * *(b + 317 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 33) +
                one_over_two_q * *(b + 244 * OS1_S1 + 19);
            *(b + 244 * OS1_S1 + 54) =
                prefactor_y * *(b + 244 * OS1_S1 + 34) -
                p_over_q * *(b + 317 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 183 * OS1_S1 + 34);
            *(b + 244 * OS1_S1 + 55) =
                prefactor_z * *(b + 244 * OS1_S1 + 34) -
                p_over_q * *(b + 318 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 182 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 19);
            *(b + 245 * OS1_S1 + 35) =
                prefactor_x * *(b + 245 * OS1_S1 + 20) -
                p_over_q * *(b + 311 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 245 * OS1_S1 + 10);
            *(b + 245 * OS1_S1 + 36) =
                prefactor_y * *(b + 245 * OS1_S1 + 20) -
                p_over_q * *(b + 318 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 20);
            *(b + 245 * OS1_S1 + 37) =
                prefactor_z * *(b + 245 * OS1_S1 + 20) -
                p_over_q * *(b + 319 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 20);
            *(b + 245 * OS1_S1 + 38) =
                prefactor_y * *(b + 245 * OS1_S1 + 21) -
                p_over_q * *(b + 318 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 21) +
                one_over_two_q * *(b + 245 * OS1_S1 + 10);
            *(b + 245 * OS1_S1 + 39) =
                prefactor_y * *(b + 245 * OS1_S1 + 22) -
                p_over_q * *(b + 318 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 22);
            *(b + 245 * OS1_S1 + 40) =
                prefactor_z * *(b + 245 * OS1_S1 + 22) -
                p_over_q * *(b + 319 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 22) +
                one_over_two_q * *(b + 245 * OS1_S1 + 10);
            *(b + 245 * OS1_S1 + 41) =
                prefactor_x * *(b + 245 * OS1_S1 + 26) -
                p_over_q * *(b + 311 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 26) +
                one_over_two_q * *(b + 245 * OS1_S1 + 16);
            *(b + 245 * OS1_S1 + 42) =
                prefactor_z * *(b + 245 * OS1_S1 + 23) -
                p_over_q * *(b + 319 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 23);
            *(b + 245 * OS1_S1 + 43) =
                prefactor_y * *(b + 245 * OS1_S1 + 25) -
                p_over_q * *(b + 318 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 25);
            *(b + 245 * OS1_S1 + 44) =
                prefactor_x * *(b + 245 * OS1_S1 + 29) -
                p_over_q * *(b + 311 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 29) +
                one_over_two_q * *(b + 245 * OS1_S1 + 19);
            *(b + 245 * OS1_S1 + 45) =
                prefactor_x * *(b + 245 * OS1_S1 + 30) -
                p_over_q * *(b + 311 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 30);
            *(b + 245 * OS1_S1 + 46) =
                prefactor_z * *(b + 245 * OS1_S1 + 26) -
                p_over_q * *(b + 319 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 26);
            *(b + 245 * OS1_S1 + 47) =
                prefactor_x * *(b + 245 * OS1_S1 + 32) -
                p_over_q * *(b + 311 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 32);
            *(b + 245 * OS1_S1 + 48) =
                prefactor_y * *(b + 245 * OS1_S1 + 29) -
                p_over_q * *(b + 318 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 29);
            *(b + 245 * OS1_S1 + 49) =
                prefactor_x * *(b + 245 * OS1_S1 + 34) -
                p_over_q * *(b + 311 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 190 * OS1_S1 + 34);
            *(b + 245 * OS1_S1 + 50) =
                prefactor_y * *(b + 245 * OS1_S1 + 30) -
                p_over_q * *(b + 318 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 245 * OS1_S1 + 16);
            *(b + 245 * OS1_S1 + 51) =
                prefactor_z * *(b + 245 * OS1_S1 + 30) -
                p_over_q * *(b + 319 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 30);
            *(b + 245 * OS1_S1 + 52) =
                prefactor_z * *(b + 245 * OS1_S1 + 31) -
                p_over_q * *(b + 319 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 31) +
                one_over_two_q * *(b + 245 * OS1_S1 + 16);
            *(b + 245 * OS1_S1 + 53) =
                prefactor_y * *(b + 245 * OS1_S1 + 33) -
                p_over_q * *(b + 318 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 33) +
                one_over_two_q * *(b + 245 * OS1_S1 + 19);
            *(b + 245 * OS1_S1 + 54) =
                prefactor_y * *(b + 245 * OS1_S1 + 34) -
                p_over_q * *(b + 318 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 184 * OS1_S1 + 34);
            *(b + 245 * OS1_S1 + 55) =
                prefactor_z * *(b + 245 * OS1_S1 + 34) -
                p_over_q * *(b + 319 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 183 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 245 * OS1_S1 + 19);
            *(b + 246 * OS1_S1 + 35) =
                prefactor_x * *(b + 246 * OS1_S1 + 20) -
                p_over_q * *(b + 312 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 246 * OS1_S1 + 10);
            *(b + 246 * OS1_S1 + 36) =
                prefactor_y * *(b + 246 * OS1_S1 + 20) -
                p_over_q * *(b + 319 * OS1_S1 + 20) +
                one_over_two_q * *(b + 185 * OS1_S1 + 20);
            *(b + 246 * OS1_S1 + 37) =
                prefactor_z * *(b + 246 * OS1_S1 + 20) -
                p_over_q * *(b + 320 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 20);
            *(b + 246 * OS1_S1 + 38) =
                prefactor_y * *(b + 246 * OS1_S1 + 21) -
                p_over_q * *(b + 319 * OS1_S1 + 21) +
                one_over_two_q * *(b + 185 * OS1_S1 + 21) +
                one_over_two_q * *(b + 246 * OS1_S1 + 10);
            *(b + 246 * OS1_S1 + 39) =
                prefactor_y * *(b + 246 * OS1_S1 + 22) -
                p_over_q * *(b + 319 * OS1_S1 + 22) +
                one_over_two_q * *(b + 185 * OS1_S1 + 22);
            *(b + 246 * OS1_S1 + 40) =
                prefactor_z * *(b + 246 * OS1_S1 + 22) -
                p_over_q * *(b + 320 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 22) +
                one_over_two_q * *(b + 246 * OS1_S1 + 10);
            *(b + 246 * OS1_S1 + 41) =
                prefactor_x * *(b + 246 * OS1_S1 + 26) -
                p_over_q * *(b + 312 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 26) +
                one_over_two_q * *(b + 246 * OS1_S1 + 16);
            *(b + 246 * OS1_S1 + 42) =
                prefactor_z * *(b + 246 * OS1_S1 + 23) -
                p_over_q * *(b + 320 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 23);
            *(b + 246 * OS1_S1 + 43) =
                prefactor_y * *(b + 246 * OS1_S1 + 25) -
                p_over_q * *(b + 319 * OS1_S1 + 25) +
                one_over_two_q * *(b + 185 * OS1_S1 + 25);
            *(b + 246 * OS1_S1 + 44) =
                prefactor_x * *(b + 246 * OS1_S1 + 29) -
                p_over_q * *(b + 312 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 29) +
                one_over_two_q * *(b + 246 * OS1_S1 + 19);
            *(b + 246 * OS1_S1 + 45) =
                prefactor_x * *(b + 246 * OS1_S1 + 30) -
                p_over_q * *(b + 312 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 30);
            *(b + 246 * OS1_S1 + 46) =
                prefactor_x * *(b + 246 * OS1_S1 + 31) -
                p_over_q * *(b + 312 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 31);
            *(b + 246 * OS1_S1 + 47) =
                prefactor_x * *(b + 246 * OS1_S1 + 32) -
                p_over_q * *(b + 312 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 32);
            *(b + 246 * OS1_S1 + 48) =
                prefactor_y * *(b + 246 * OS1_S1 + 29) -
                p_over_q * *(b + 319 * OS1_S1 + 29) +
                one_over_two_q * *(b + 185 * OS1_S1 + 29);
            *(b + 246 * OS1_S1 + 49) =
                prefactor_x * *(b + 246 * OS1_S1 + 34) -
                p_over_q * *(b + 312 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 191 * OS1_S1 + 34);
            *(b + 246 * OS1_S1 + 50) =
                prefactor_y * *(b + 246 * OS1_S1 + 30) -
                p_over_q * *(b + 319 * OS1_S1 + 30) +
                one_over_two_q * *(b + 185 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 246 * OS1_S1 + 16);
            *(b + 246 * OS1_S1 + 51) =
                prefactor_z * *(b + 246 * OS1_S1 + 30) -
                p_over_q * *(b + 320 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 30);
            *(b + 246 * OS1_S1 + 52) =
                prefactor_z * *(b + 246 * OS1_S1 + 31) -
                p_over_q * *(b + 320 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 31) +
                one_over_two_q * *(b + 246 * OS1_S1 + 16);
            *(b + 246 * OS1_S1 + 53) =
                prefactor_y * *(b + 246 * OS1_S1 + 33) -
                p_over_q * *(b + 319 * OS1_S1 + 33) +
                one_over_two_q * *(b + 185 * OS1_S1 + 33) +
                one_over_two_q * *(b + 246 * OS1_S1 + 19);
            *(b + 246 * OS1_S1 + 54) =
                prefactor_y * *(b + 246 * OS1_S1 + 34) -
                p_over_q * *(b + 319 * OS1_S1 + 34) +
                one_over_two_q * *(b + 185 * OS1_S1 + 34);
            *(b + 246 * OS1_S1 + 55) =
                prefactor_z * *(b + 246 * OS1_S1 + 34) -
                p_over_q * *(b + 320 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 184 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 246 * OS1_S1 + 19);
            *(b + 247 * OS1_S1 + 35) =
                prefactor_x * *(b + 247 * OS1_S1 + 20) -
                p_over_q * *(b + 313 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 247 * OS1_S1 + 10);
            *(b + 247 * OS1_S1 + 36) = prefactor_y * *(b + 247 * OS1_S1 + 20) -
                                       p_over_q * *(b + 320 * OS1_S1 + 20);
            *(b + 247 * OS1_S1 + 37) =
                prefactor_z * *(b + 247 * OS1_S1 + 20) -
                p_over_q * *(b + 321 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 20);
            *(b + 247 * OS1_S1 + 38) =
                prefactor_y * *(b + 247 * OS1_S1 + 21) -
                p_over_q * *(b + 320 * OS1_S1 + 21) +
                one_over_two_q * *(b + 247 * OS1_S1 + 10);
            *(b + 247 * OS1_S1 + 39) = prefactor_y * *(b + 247 * OS1_S1 + 22) -
                                       p_over_q * *(b + 320 * OS1_S1 + 22);
            *(b + 247 * OS1_S1 + 40) =
                prefactor_z * *(b + 247 * OS1_S1 + 22) -
                p_over_q * *(b + 321 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 22) +
                one_over_two_q * *(b + 247 * OS1_S1 + 10);
            *(b + 247 * OS1_S1 + 41) =
                prefactor_x * *(b + 247 * OS1_S1 + 26) -
                p_over_q * *(b + 313 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 26) +
                one_over_two_q * *(b + 247 * OS1_S1 + 16);
            *(b + 247 * OS1_S1 + 42) =
                prefactor_z * *(b + 247 * OS1_S1 + 23) -
                p_over_q * *(b + 321 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 23);
            *(b + 247 * OS1_S1 + 43) = prefactor_y * *(b + 247 * OS1_S1 + 25) -
                                       p_over_q * *(b + 320 * OS1_S1 + 25);
            *(b + 247 * OS1_S1 + 44) =
                prefactor_x * *(b + 247 * OS1_S1 + 29) -
                p_over_q * *(b + 313 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 29) +
                one_over_two_q * *(b + 247 * OS1_S1 + 19);
            *(b + 247 * OS1_S1 + 45) =
                prefactor_x * *(b + 247 * OS1_S1 + 30) -
                p_over_q * *(b + 313 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 30);
            *(b + 247 * OS1_S1 + 46) =
                prefactor_x * *(b + 247 * OS1_S1 + 31) -
                p_over_q * *(b + 313 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 31);
            *(b + 247 * OS1_S1 + 47) =
                prefactor_x * *(b + 247 * OS1_S1 + 32) -
                p_over_q * *(b + 313 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 32);
            *(b + 247 * OS1_S1 + 48) = prefactor_y * *(b + 247 * OS1_S1 + 29) -
                                       p_over_q * *(b + 320 * OS1_S1 + 29);
            *(b + 247 * OS1_S1 + 49) =
                prefactor_x * *(b + 247 * OS1_S1 + 34) -
                p_over_q * *(b + 313 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 192 * OS1_S1 + 34);
            *(b + 247 * OS1_S1 + 50) =
                prefactor_y * *(b + 247 * OS1_S1 + 30) -
                p_over_q * *(b + 320 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 247 * OS1_S1 + 16);
            *(b + 247 * OS1_S1 + 51) =
                prefactor_z * *(b + 247 * OS1_S1 + 30) -
                p_over_q * *(b + 321 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 30);
            *(b + 247 * OS1_S1 + 52) =
                prefactor_z * *(b + 247 * OS1_S1 + 31) -
                p_over_q * *(b + 321 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 31) +
                one_over_two_q * *(b + 247 * OS1_S1 + 16);
            *(b + 247 * OS1_S1 + 53) =
                prefactor_y * *(b + 247 * OS1_S1 + 33) -
                p_over_q * *(b + 320 * OS1_S1 + 33) +
                one_over_two_q * *(b + 247 * OS1_S1 + 19);
            *(b + 247 * OS1_S1 + 54) = prefactor_y * *(b + 247 * OS1_S1 + 34) -
                                       p_over_q * *(b + 320 * OS1_S1 + 34);
            *(b + 247 * OS1_S1 + 55) =
                prefactor_z * *(b + 247 * OS1_S1 + 34) -
                p_over_q * *(b + 321 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 185 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 247 * OS1_S1 + 19);
            *(b + 248 * OS1_S1 + 35) =
                prefactor_x * *(b + 248 * OS1_S1 + 20) -
                p_over_q * *(b + 314 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 10);
            *(b + 248 * OS1_S1 + 36) =
                prefactor_y * *(b + 248 * OS1_S1 + 20) -
                p_over_q * *(b + 322 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 20);
            *(b + 248 * OS1_S1 + 37) = prefactor_z * *(b + 248 * OS1_S1 + 20) -
                                       p_over_q * *(b + 323 * OS1_S1 + 20);
            *(b + 248 * OS1_S1 + 38) =
                prefactor_y * *(b + 248 * OS1_S1 + 21) -
                p_over_q * *(b + 322 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 21) +
                one_over_two_q * *(b + 248 * OS1_S1 + 10);
            *(b + 248 * OS1_S1 + 39) = prefactor_z * *(b + 248 * OS1_S1 + 21) -
                                       p_over_q * *(b + 323 * OS1_S1 + 21);
            *(b + 248 * OS1_S1 + 40) =
                prefactor_z * *(b + 248 * OS1_S1 + 22) -
                p_over_q * *(b + 323 * OS1_S1 + 22) +
                one_over_two_q * *(b + 248 * OS1_S1 + 10);
            *(b + 248 * OS1_S1 + 41) =
                prefactor_x * *(b + 248 * OS1_S1 + 26) -
                p_over_q * *(b + 314 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 26) +
                one_over_two_q * *(b + 248 * OS1_S1 + 16);
            *(b + 248 * OS1_S1 + 42) = prefactor_z * *(b + 248 * OS1_S1 + 23) -
                                       p_over_q * *(b + 323 * OS1_S1 + 23);
            *(b + 248 * OS1_S1 + 43) =
                prefactor_y * *(b + 248 * OS1_S1 + 25) -
                p_over_q * *(b + 322 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 25);
            *(b + 248 * OS1_S1 + 44) =
                prefactor_x * *(b + 248 * OS1_S1 + 29) -
                p_over_q * *(b + 314 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 29) +
                one_over_two_q * *(b + 248 * OS1_S1 + 19);
            *(b + 248 * OS1_S1 + 45) =
                prefactor_x * *(b + 248 * OS1_S1 + 30) -
                p_over_q * *(b + 314 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 30);
            *(b + 248 * OS1_S1 + 46) = prefactor_z * *(b + 248 * OS1_S1 + 26) -
                                       p_over_q * *(b + 323 * OS1_S1 + 26);
            *(b + 248 * OS1_S1 + 47) =
                prefactor_x * *(b + 248 * OS1_S1 + 32) -
                p_over_q * *(b + 314 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 32);
            *(b + 248 * OS1_S1 + 48) =
                prefactor_x * *(b + 248 * OS1_S1 + 33) -
                p_over_q * *(b + 314 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 33);
            *(b + 248 * OS1_S1 + 49) =
                prefactor_x * *(b + 248 * OS1_S1 + 34) -
                p_over_q * *(b + 314 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 193 * OS1_S1 + 34);
            *(b + 248 * OS1_S1 + 50) =
                prefactor_y * *(b + 248 * OS1_S1 + 30) -
                p_over_q * *(b + 322 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 16);
            *(b + 248 * OS1_S1 + 51) = prefactor_z * *(b + 248 * OS1_S1 + 30) -
                                       p_over_q * *(b + 323 * OS1_S1 + 30);
            *(b + 248 * OS1_S1 + 52) =
                prefactor_z * *(b + 248 * OS1_S1 + 31) -
                p_over_q * *(b + 323 * OS1_S1 + 31) +
                one_over_two_q * *(b + 248 * OS1_S1 + 16);
            *(b + 248 * OS1_S1 + 53) =
                prefactor_y * *(b + 248 * OS1_S1 + 33) -
                p_over_q * *(b + 322 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 33) +
                one_over_two_q * *(b + 248 * OS1_S1 + 19);
            *(b + 248 * OS1_S1 + 54) =
                prefactor_y * *(b + 248 * OS1_S1 + 34) -
                p_over_q * *(b + 322 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 186 * OS1_S1 + 34);
            *(b + 248 * OS1_S1 + 55) =
                prefactor_z * *(b + 248 * OS1_S1 + 34) -
                p_over_q * *(b + 323 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 19);
            *(b + 249 * OS1_S1 + 35) =
                prefactor_x * *(b + 249 * OS1_S1 + 20) -
                p_over_q * *(b + 315 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 10);
            *(b + 249 * OS1_S1 + 36) =
                prefactor_y * *(b + 249 * OS1_S1 + 20) -
                p_over_q * *(b + 323 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 20);
            *(b + 249 * OS1_S1 + 37) =
                prefactor_z * *(b + 249 * OS1_S1 + 20) -
                p_over_q * *(b + 324 * OS1_S1 + 20) +
                one_over_two_q * *(b + 186 * OS1_S1 + 20);
            *(b + 249 * OS1_S1 + 38) =
                prefactor_y * *(b + 249 * OS1_S1 + 21) -
                p_over_q * *(b + 323 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 21) +
                one_over_two_q * *(b + 249 * OS1_S1 + 10);
            *(b + 249 * OS1_S1 + 39) =
                prefactor_z * *(b + 249 * OS1_S1 + 21) -
                p_over_q * *(b + 324 * OS1_S1 + 21) +
                one_over_two_q * *(b + 186 * OS1_S1 + 21);
            *(b + 249 * OS1_S1 + 40) =
                prefactor_z * *(b + 249 * OS1_S1 + 22) -
                p_over_q * *(b + 324 * OS1_S1 + 22) +
                one_over_two_q * *(b + 186 * OS1_S1 + 22) +
                one_over_two_q * *(b + 249 * OS1_S1 + 10);
            *(b + 249 * OS1_S1 + 41) =
                prefactor_x * *(b + 249 * OS1_S1 + 26) -
                p_over_q * *(b + 315 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 26) +
                one_over_two_q * *(b + 249 * OS1_S1 + 16);
            *(b + 249 * OS1_S1 + 42) =
                prefactor_z * *(b + 249 * OS1_S1 + 23) -
                p_over_q * *(b + 324 * OS1_S1 + 23) +
                one_over_two_q * *(b + 186 * OS1_S1 + 23);
            *(b + 249 * OS1_S1 + 43) =
                prefactor_y * *(b + 249 * OS1_S1 + 25) -
                p_over_q * *(b + 323 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 25);
            *(b + 249 * OS1_S1 + 44) =
                prefactor_x * *(b + 249 * OS1_S1 + 29) -
                p_over_q * *(b + 315 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 29) +
                one_over_two_q * *(b + 249 * OS1_S1 + 19);
            *(b + 249 * OS1_S1 + 45) =
                prefactor_x * *(b + 249 * OS1_S1 + 30) -
                p_over_q * *(b + 315 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 30);
            *(b + 249 * OS1_S1 + 46) =
                prefactor_z * *(b + 249 * OS1_S1 + 26) -
                p_over_q * *(b + 324 * OS1_S1 + 26) +
                one_over_two_q * *(b + 186 * OS1_S1 + 26);
            *(b + 249 * OS1_S1 + 47) =
                prefactor_x * *(b + 249 * OS1_S1 + 32) -
                p_over_q * *(b + 315 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 32);
            *(b + 249 * OS1_S1 + 48) =
                prefactor_x * *(b + 249 * OS1_S1 + 33) -
                p_over_q * *(b + 315 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 33);
            *(b + 249 * OS1_S1 + 49) =
                prefactor_x * *(b + 249 * OS1_S1 + 34) -
                p_over_q * *(b + 315 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 194 * OS1_S1 + 34);
            *(b + 249 * OS1_S1 + 50) =
                prefactor_y * *(b + 249 * OS1_S1 + 30) -
                p_over_q * *(b + 323 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 16);
            *(b + 249 * OS1_S1 + 51) =
                prefactor_z * *(b + 249 * OS1_S1 + 30) -
                p_over_q * *(b + 324 * OS1_S1 + 30) +
                one_over_two_q * *(b + 186 * OS1_S1 + 30);
            *(b + 249 * OS1_S1 + 52) =
                prefactor_z * *(b + 249 * OS1_S1 + 31) -
                p_over_q * *(b + 324 * OS1_S1 + 31) +
                one_over_two_q * *(b + 186 * OS1_S1 + 31) +
                one_over_two_q * *(b + 249 * OS1_S1 + 16);
            *(b + 249 * OS1_S1 + 53) =
                prefactor_y * *(b + 249 * OS1_S1 + 33) -
                p_over_q * *(b + 323 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 33) +
                one_over_two_q * *(b + 249 * OS1_S1 + 19);
            *(b + 249 * OS1_S1 + 54) =
                prefactor_y * *(b + 249 * OS1_S1 + 34) -
                p_over_q * *(b + 323 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 187 * OS1_S1 + 34);
            *(b + 249 * OS1_S1 + 55) =
                prefactor_z * *(b + 249 * OS1_S1 + 34) -
                p_over_q * *(b + 324 * OS1_S1 + 34) +
                one_over_two_q * *(b + 186 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 19);
            *(b + 250 * OS1_S1 + 35) =
                prefactor_x * *(b + 250 * OS1_S1 + 20) -
                p_over_q * *(b + 316 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 10);
            *(b + 250 * OS1_S1 + 36) =
                prefactor_y * *(b + 250 * OS1_S1 + 20) -
                p_over_q * *(b + 324 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 20);
            *(b + 250 * OS1_S1 + 37) =
                prefactor_z * *(b + 250 * OS1_S1 + 20) -
                p_over_q * *(b + 325 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 20);
            *(b + 250 * OS1_S1 + 38) =
                prefactor_y * *(b + 250 * OS1_S1 + 21) -
                p_over_q * *(b + 324 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 21) +
                one_over_two_q * *(b + 250 * OS1_S1 + 10);
            *(b + 250 * OS1_S1 + 39) =
                prefactor_z * *(b + 250 * OS1_S1 + 21) -
                p_over_q * *(b + 325 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 21);
            *(b + 250 * OS1_S1 + 40) =
                prefactor_z * *(b + 250 * OS1_S1 + 22) -
                p_over_q * *(b + 325 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 22) +
                one_over_two_q * *(b + 250 * OS1_S1 + 10);
            *(b + 250 * OS1_S1 + 41) =
                prefactor_x * *(b + 250 * OS1_S1 + 26) -
                p_over_q * *(b + 316 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 26) +
                one_over_two_q * *(b + 250 * OS1_S1 + 16);
            *(b + 250 * OS1_S1 + 42) =
                prefactor_z * *(b + 250 * OS1_S1 + 23) -
                p_over_q * *(b + 325 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 23);
            *(b + 250 * OS1_S1 + 43) =
                prefactor_y * *(b + 250 * OS1_S1 + 25) -
                p_over_q * *(b + 324 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 25);
            *(b + 250 * OS1_S1 + 44) =
                prefactor_x * *(b + 250 * OS1_S1 + 29) -
                p_over_q * *(b + 316 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 29) +
                one_over_two_q * *(b + 250 * OS1_S1 + 19);
            *(b + 250 * OS1_S1 + 45) =
                prefactor_x * *(b + 250 * OS1_S1 + 30) -
                p_over_q * *(b + 316 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 30);
            *(b + 250 * OS1_S1 + 46) =
                prefactor_z * *(b + 250 * OS1_S1 + 26) -
                p_over_q * *(b + 325 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 26);
            *(b + 250 * OS1_S1 + 47) =
                prefactor_x * *(b + 250 * OS1_S1 + 32) -
                p_over_q * *(b + 316 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 32);
            *(b + 250 * OS1_S1 + 48) =
                prefactor_x * *(b + 250 * OS1_S1 + 33) -
                p_over_q * *(b + 316 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 33);
            *(b + 250 * OS1_S1 + 49) =
                prefactor_x * *(b + 250 * OS1_S1 + 34) -
                p_over_q * *(b + 316 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 34);
            *(b + 250 * OS1_S1 + 50) =
                prefactor_y * *(b + 250 * OS1_S1 + 30) -
                p_over_q * *(b + 324 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 16);
            *(b + 250 * OS1_S1 + 51) =
                prefactor_z * *(b + 250 * OS1_S1 + 30) -
                p_over_q * *(b + 325 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 30);
            *(b + 250 * OS1_S1 + 52) =
                prefactor_z * *(b + 250 * OS1_S1 + 31) -
                p_over_q * *(b + 325 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 31) +
                one_over_two_q * *(b + 250 * OS1_S1 + 16);
            *(b + 250 * OS1_S1 + 53) =
                prefactor_y * *(b + 250 * OS1_S1 + 33) -
                p_over_q * *(b + 324 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 33) +
                one_over_two_q * *(b + 250 * OS1_S1 + 19);
            *(b + 250 * OS1_S1 + 54) =
                prefactor_y * *(b + 250 * OS1_S1 + 34) -
                p_over_q * *(b + 324 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 188 * OS1_S1 + 34);
            *(b + 250 * OS1_S1 + 55) =
                prefactor_z * *(b + 250 * OS1_S1 + 34) -
                p_over_q * *(b + 325 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 187 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 19);
            *(b + 251 * OS1_S1 + 35) =
                prefactor_x * *(b + 251 * OS1_S1 + 20) -
                p_over_q * *(b + 317 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 10);
            *(b + 251 * OS1_S1 + 36) =
                prefactor_y * *(b + 251 * OS1_S1 + 20) -
                p_over_q * *(b + 325 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 20);
            *(b + 251 * OS1_S1 + 37) =
                prefactor_z * *(b + 251 * OS1_S1 + 20) -
                p_over_q * *(b + 326 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 20);
            *(b + 251 * OS1_S1 + 38) =
                prefactor_y * *(b + 251 * OS1_S1 + 21) -
                p_over_q * *(b + 325 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 21) +
                one_over_two_q * *(b + 251 * OS1_S1 + 10);
            *(b + 251 * OS1_S1 + 39) =
                prefactor_z * *(b + 251 * OS1_S1 + 21) -
                p_over_q * *(b + 326 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 21);
            *(b + 251 * OS1_S1 + 40) =
                prefactor_z * *(b + 251 * OS1_S1 + 22) -
                p_over_q * *(b + 326 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 22) +
                one_over_two_q * *(b + 251 * OS1_S1 + 10);
            *(b + 251 * OS1_S1 + 41) =
                prefactor_x * *(b + 251 * OS1_S1 + 26) -
                p_over_q * *(b + 317 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 26) +
                one_over_two_q * *(b + 251 * OS1_S1 + 16);
            *(b + 251 * OS1_S1 + 42) =
                prefactor_z * *(b + 251 * OS1_S1 + 23) -
                p_over_q * *(b + 326 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 23);
            *(b + 251 * OS1_S1 + 43) =
                prefactor_y * *(b + 251 * OS1_S1 + 25) -
                p_over_q * *(b + 325 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 25);
            *(b + 251 * OS1_S1 + 44) =
                prefactor_x * *(b + 251 * OS1_S1 + 29) -
                p_over_q * *(b + 317 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 29) +
                one_over_two_q * *(b + 251 * OS1_S1 + 19);
            *(b + 251 * OS1_S1 + 45) =
                prefactor_x * *(b + 251 * OS1_S1 + 30) -
                p_over_q * *(b + 317 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 30);
            *(b + 251 * OS1_S1 + 46) =
                prefactor_z * *(b + 251 * OS1_S1 + 26) -
                p_over_q * *(b + 326 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 26);
            *(b + 251 * OS1_S1 + 47) =
                prefactor_x * *(b + 251 * OS1_S1 + 32) -
                p_over_q * *(b + 317 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 32);
            *(b + 251 * OS1_S1 + 48) =
                prefactor_x * *(b + 251 * OS1_S1 + 33) -
                p_over_q * *(b + 317 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 33);
            *(b + 251 * OS1_S1 + 49) =
                prefactor_x * *(b + 251 * OS1_S1 + 34) -
                p_over_q * *(b + 317 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 196 * OS1_S1 + 34);
            *(b + 251 * OS1_S1 + 50) =
                prefactor_y * *(b + 251 * OS1_S1 + 30) -
                p_over_q * *(b + 325 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 16);
            *(b + 251 * OS1_S1 + 51) =
                prefactor_z * *(b + 251 * OS1_S1 + 30) -
                p_over_q * *(b + 326 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 30);
            *(b + 251 * OS1_S1 + 52) =
                prefactor_z * *(b + 251 * OS1_S1 + 31) -
                p_over_q * *(b + 326 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 31) +
                one_over_two_q * *(b + 251 * OS1_S1 + 16);
            *(b + 251 * OS1_S1 + 53) =
                prefactor_y * *(b + 251 * OS1_S1 + 33) -
                p_over_q * *(b + 325 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 33) +
                one_over_two_q * *(b + 251 * OS1_S1 + 19);
            *(b + 251 * OS1_S1 + 54) =
                prefactor_y * *(b + 251 * OS1_S1 + 34) -
                p_over_q * *(b + 325 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 34);
            *(b + 251 * OS1_S1 + 55) =
                prefactor_z * *(b + 251 * OS1_S1 + 34) -
                p_over_q * *(b + 326 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 188 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 19);
            *(b + 252 * OS1_S1 + 35) =
                prefactor_x * *(b + 252 * OS1_S1 + 20) -
                p_over_q * *(b + 318 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 10);
            *(b + 252 * OS1_S1 + 36) =
                prefactor_y * *(b + 252 * OS1_S1 + 20) -
                p_over_q * *(b + 326 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 20);
            *(b + 252 * OS1_S1 + 37) =
                prefactor_z * *(b + 252 * OS1_S1 + 20) -
                p_over_q * *(b + 327 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 20);
            *(b + 252 * OS1_S1 + 38) =
                prefactor_y * *(b + 252 * OS1_S1 + 21) -
                p_over_q * *(b + 326 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 21) +
                one_over_two_q * *(b + 252 * OS1_S1 + 10);
            *(b + 252 * OS1_S1 + 39) =
                prefactor_y * *(b + 252 * OS1_S1 + 22) -
                p_over_q * *(b + 326 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 22);
            *(b + 252 * OS1_S1 + 40) =
                prefactor_z * *(b + 252 * OS1_S1 + 22) -
                p_over_q * *(b + 327 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 22) +
                one_over_two_q * *(b + 252 * OS1_S1 + 10);
            *(b + 252 * OS1_S1 + 41) =
                prefactor_x * *(b + 252 * OS1_S1 + 26) -
                p_over_q * *(b + 318 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 26) +
                one_over_two_q * *(b + 252 * OS1_S1 + 16);
            *(b + 252 * OS1_S1 + 42) =
                prefactor_z * *(b + 252 * OS1_S1 + 23) -
                p_over_q * *(b + 327 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 23);
            *(b + 252 * OS1_S1 + 43) =
                prefactor_y * *(b + 252 * OS1_S1 + 25) -
                p_over_q * *(b + 326 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 25);
            *(b + 252 * OS1_S1 + 44) =
                prefactor_x * *(b + 252 * OS1_S1 + 29) -
                p_over_q * *(b + 318 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 29) +
                one_over_two_q * *(b + 252 * OS1_S1 + 19);
            *(b + 252 * OS1_S1 + 45) =
                prefactor_x * *(b + 252 * OS1_S1 + 30) -
                p_over_q * *(b + 318 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 30);
            *(b + 252 * OS1_S1 + 46) =
                prefactor_x * *(b + 252 * OS1_S1 + 31) -
                p_over_q * *(b + 318 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 31);
            *(b + 252 * OS1_S1 + 47) =
                prefactor_x * *(b + 252 * OS1_S1 + 32) -
                p_over_q * *(b + 318 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 32);
            *(b + 252 * OS1_S1 + 48) =
                prefactor_y * *(b + 252 * OS1_S1 + 29) -
                p_over_q * *(b + 326 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 29);
            *(b + 252 * OS1_S1 + 49) =
                prefactor_x * *(b + 252 * OS1_S1 + 34) -
                p_over_q * *(b + 318 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 197 * OS1_S1 + 34);
            *(b + 252 * OS1_S1 + 50) =
                prefactor_y * *(b + 252 * OS1_S1 + 30) -
                p_over_q * *(b + 326 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 16);
            *(b + 252 * OS1_S1 + 51) =
                prefactor_z * *(b + 252 * OS1_S1 + 30) -
                p_over_q * *(b + 327 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 30);
            *(b + 252 * OS1_S1 + 52) =
                prefactor_z * *(b + 252 * OS1_S1 + 31) -
                p_over_q * *(b + 327 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 31) +
                one_over_two_q * *(b + 252 * OS1_S1 + 16);
            *(b + 252 * OS1_S1 + 53) =
                prefactor_y * *(b + 252 * OS1_S1 + 33) -
                p_over_q * *(b + 326 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 33) +
                one_over_two_q * *(b + 252 * OS1_S1 + 19);
            *(b + 252 * OS1_S1 + 54) =
                prefactor_y * *(b + 252 * OS1_S1 + 34) -
                p_over_q * *(b + 326 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 190 * OS1_S1 + 34);
            *(b + 252 * OS1_S1 + 55) =
                prefactor_z * *(b + 252 * OS1_S1 + 34) -
                p_over_q * *(b + 327 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 189 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 19);
            *(b + 253 * OS1_S1 + 35) =
                prefactor_x * *(b + 253 * OS1_S1 + 20) -
                p_over_q * *(b + 319 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 10);
            *(b + 253 * OS1_S1 + 36) =
                prefactor_y * *(b + 253 * OS1_S1 + 20) -
                p_over_q * *(b + 327 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 20);
            *(b + 253 * OS1_S1 + 37) =
                prefactor_z * *(b + 253 * OS1_S1 + 20) -
                p_over_q * *(b + 328 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 20);
            *(b + 253 * OS1_S1 + 38) =
                prefactor_y * *(b + 253 * OS1_S1 + 21) -
                p_over_q * *(b + 327 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 21) +
                one_over_two_q * *(b + 253 * OS1_S1 + 10);
            *(b + 253 * OS1_S1 + 39) =
                prefactor_y * *(b + 253 * OS1_S1 + 22) -
                p_over_q * *(b + 327 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 22);
            *(b + 253 * OS1_S1 + 40) =
                prefactor_z * *(b + 253 * OS1_S1 + 22) -
                p_over_q * *(b + 328 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 22) +
                one_over_two_q * *(b + 253 * OS1_S1 + 10);
            *(b + 253 * OS1_S1 + 41) =
                prefactor_x * *(b + 253 * OS1_S1 + 26) -
                p_over_q * *(b + 319 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 26) +
                one_over_two_q * *(b + 253 * OS1_S1 + 16);
            *(b + 253 * OS1_S1 + 42) =
                prefactor_z * *(b + 253 * OS1_S1 + 23) -
                p_over_q * *(b + 328 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 23);
            *(b + 253 * OS1_S1 + 43) =
                prefactor_y * *(b + 253 * OS1_S1 + 25) -
                p_over_q * *(b + 327 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 25);
            *(b + 253 * OS1_S1 + 44) =
                prefactor_x * *(b + 253 * OS1_S1 + 29) -
                p_over_q * *(b + 319 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 29) +
                one_over_two_q * *(b + 253 * OS1_S1 + 19);
            *(b + 253 * OS1_S1 + 45) =
                prefactor_x * *(b + 253 * OS1_S1 + 30) -
                p_over_q * *(b + 319 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 30);
            *(b + 253 * OS1_S1 + 46) =
                prefactor_x * *(b + 253 * OS1_S1 + 31) -
                p_over_q * *(b + 319 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 31);
            *(b + 253 * OS1_S1 + 47) =
                prefactor_x * *(b + 253 * OS1_S1 + 32) -
                p_over_q * *(b + 319 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 32);
            *(b + 253 * OS1_S1 + 48) =
                prefactor_y * *(b + 253 * OS1_S1 + 29) -
                p_over_q * *(b + 327 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 29);
            *(b + 253 * OS1_S1 + 49) =
                prefactor_x * *(b + 253 * OS1_S1 + 34) -
                p_over_q * *(b + 319 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 34);
            *(b + 253 * OS1_S1 + 50) =
                prefactor_y * *(b + 253 * OS1_S1 + 30) -
                p_over_q * *(b + 327 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 16);
            *(b + 253 * OS1_S1 + 51) =
                prefactor_z * *(b + 253 * OS1_S1 + 30) -
                p_over_q * *(b + 328 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 30);
            *(b + 253 * OS1_S1 + 52) =
                prefactor_z * *(b + 253 * OS1_S1 + 31) -
                p_over_q * *(b + 328 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 31) +
                one_over_two_q * *(b + 253 * OS1_S1 + 16);
            *(b + 253 * OS1_S1 + 53) =
                prefactor_y * *(b + 253 * OS1_S1 + 33) -
                p_over_q * *(b + 327 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 33) +
                one_over_two_q * *(b + 253 * OS1_S1 + 19);
            *(b + 253 * OS1_S1 + 54) =
                prefactor_y * *(b + 253 * OS1_S1 + 34) -
                p_over_q * *(b + 327 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 191 * OS1_S1 + 34);
            *(b + 253 * OS1_S1 + 55) =
                prefactor_z * *(b + 253 * OS1_S1 + 34) -
                p_over_q * *(b + 328 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 190 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 19);
            *(b + 254 * OS1_S1 + 35) =
                prefactor_x * *(b + 254 * OS1_S1 + 20) -
                p_over_q * *(b + 320 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 10);
            *(b + 254 * OS1_S1 + 36) =
                prefactor_y * *(b + 254 * OS1_S1 + 20) -
                p_over_q * *(b + 328 * OS1_S1 + 20) +
                one_over_two_q * *(b + 192 * OS1_S1 + 20);
            *(b + 254 * OS1_S1 + 37) =
                prefactor_z * *(b + 254 * OS1_S1 + 20) -
                p_over_q * *(b + 329 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 20);
            *(b + 254 * OS1_S1 + 38) =
                prefactor_y * *(b + 254 * OS1_S1 + 21) -
                p_over_q * *(b + 328 * OS1_S1 + 21) +
                one_over_two_q * *(b + 192 * OS1_S1 + 21) +
                one_over_two_q * *(b + 254 * OS1_S1 + 10);
            *(b + 254 * OS1_S1 + 39) =
                prefactor_y * *(b + 254 * OS1_S1 + 22) -
                p_over_q * *(b + 328 * OS1_S1 + 22) +
                one_over_two_q * *(b + 192 * OS1_S1 + 22);
            *(b + 254 * OS1_S1 + 40) =
                prefactor_z * *(b + 254 * OS1_S1 + 22) -
                p_over_q * *(b + 329 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 22) +
                one_over_two_q * *(b + 254 * OS1_S1 + 10);
            *(b + 254 * OS1_S1 + 41) =
                prefactor_x * *(b + 254 * OS1_S1 + 26) -
                p_over_q * *(b + 320 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 26) +
                one_over_two_q * *(b + 254 * OS1_S1 + 16);
            *(b + 254 * OS1_S1 + 42) =
                prefactor_z * *(b + 254 * OS1_S1 + 23) -
                p_over_q * *(b + 329 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 23);
            *(b + 254 * OS1_S1 + 43) =
                prefactor_y * *(b + 254 * OS1_S1 + 25) -
                p_over_q * *(b + 328 * OS1_S1 + 25) +
                one_over_two_q * *(b + 192 * OS1_S1 + 25);
            *(b + 254 * OS1_S1 + 44) =
                prefactor_x * *(b + 254 * OS1_S1 + 29) -
                p_over_q * *(b + 320 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 29) +
                one_over_two_q * *(b + 254 * OS1_S1 + 19);
            *(b + 254 * OS1_S1 + 45) =
                prefactor_x * *(b + 254 * OS1_S1 + 30) -
                p_over_q * *(b + 320 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 30);
            *(b + 254 * OS1_S1 + 46) =
                prefactor_x * *(b + 254 * OS1_S1 + 31) -
                p_over_q * *(b + 320 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 31);
            *(b + 254 * OS1_S1 + 47) =
                prefactor_x * *(b + 254 * OS1_S1 + 32) -
                p_over_q * *(b + 320 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 32);
            *(b + 254 * OS1_S1 + 48) =
                prefactor_y * *(b + 254 * OS1_S1 + 29) -
                p_over_q * *(b + 328 * OS1_S1 + 29) +
                one_over_two_q * *(b + 192 * OS1_S1 + 29);
            *(b + 254 * OS1_S1 + 49) =
                prefactor_x * *(b + 254 * OS1_S1 + 34) -
                p_over_q * *(b + 320 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 199 * OS1_S1 + 34);
            *(b + 254 * OS1_S1 + 50) =
                prefactor_y * *(b + 254 * OS1_S1 + 30) -
                p_over_q * *(b + 328 * OS1_S1 + 30) +
                one_over_two_q * *(b + 192 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 16);
            *(b + 254 * OS1_S1 + 51) =
                prefactor_z * *(b + 254 * OS1_S1 + 30) -
                p_over_q * *(b + 329 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 30);
            *(b + 254 * OS1_S1 + 52) =
                prefactor_z * *(b + 254 * OS1_S1 + 31) -
                p_over_q * *(b + 329 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 31) +
                one_over_two_q * *(b + 254 * OS1_S1 + 16);
            *(b + 254 * OS1_S1 + 53) =
                prefactor_y * *(b + 254 * OS1_S1 + 33) -
                p_over_q * *(b + 328 * OS1_S1 + 33) +
                one_over_two_q * *(b + 192 * OS1_S1 + 33) +
                one_over_two_q * *(b + 254 * OS1_S1 + 19);
            *(b + 254 * OS1_S1 + 54) =
                prefactor_y * *(b + 254 * OS1_S1 + 34) -
                p_over_q * *(b + 328 * OS1_S1 + 34) +
                one_over_two_q * *(b + 192 * OS1_S1 + 34);
            *(b + 254 * OS1_S1 + 55) =
                prefactor_z * *(b + 254 * OS1_S1 + 34) -
                p_over_q * *(b + 329 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 191 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 19);
            *(b + 255 * OS1_S1 + 35) =
                prefactor_x * *(b + 255 * OS1_S1 + 20) -
                p_over_q * *(b + 321 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 10);
            *(b + 255 * OS1_S1 + 36) = prefactor_y * *(b + 255 * OS1_S1 + 20) -
                                       p_over_q * *(b + 329 * OS1_S1 + 20);
            *(b + 255 * OS1_S1 + 37) =
                prefactor_z * *(b + 255 * OS1_S1 + 20) -
                p_over_q * *(b + 330 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 20);
            *(b + 255 * OS1_S1 + 38) =
                prefactor_y * *(b + 255 * OS1_S1 + 21) -
                p_over_q * *(b + 329 * OS1_S1 + 21) +
                one_over_two_q * *(b + 255 * OS1_S1 + 10);
            *(b + 255 * OS1_S1 + 39) = prefactor_y * *(b + 255 * OS1_S1 + 22) -
                                       p_over_q * *(b + 329 * OS1_S1 + 22);
            *(b + 255 * OS1_S1 + 40) =
                prefactor_z * *(b + 255 * OS1_S1 + 22) -
                p_over_q * *(b + 330 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 22) +
                one_over_two_q * *(b + 255 * OS1_S1 + 10);
            *(b + 255 * OS1_S1 + 41) =
                prefactor_x * *(b + 255 * OS1_S1 + 26) -
                p_over_q * *(b + 321 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 26) +
                one_over_two_q * *(b + 255 * OS1_S1 + 16);
            *(b + 255 * OS1_S1 + 42) =
                prefactor_z * *(b + 255 * OS1_S1 + 23) -
                p_over_q * *(b + 330 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 23);
            *(b + 255 * OS1_S1 + 43) = prefactor_y * *(b + 255 * OS1_S1 + 25) -
                                       p_over_q * *(b + 329 * OS1_S1 + 25);
            *(b + 255 * OS1_S1 + 44) =
                prefactor_x * *(b + 255 * OS1_S1 + 29) -
                p_over_q * *(b + 321 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 29) +
                one_over_two_q * *(b + 255 * OS1_S1 + 19);
            *(b + 255 * OS1_S1 + 45) =
                prefactor_x * *(b + 255 * OS1_S1 + 30) -
                p_over_q * *(b + 321 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 30);
            *(b + 255 * OS1_S1 + 46) =
                prefactor_x * *(b + 255 * OS1_S1 + 31) -
                p_over_q * *(b + 321 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 31);
            *(b + 255 * OS1_S1 + 47) =
                prefactor_x * *(b + 255 * OS1_S1 + 32) -
                p_over_q * *(b + 321 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 32);
            *(b + 255 * OS1_S1 + 48) = prefactor_y * *(b + 255 * OS1_S1 + 29) -
                                       p_over_q * *(b + 329 * OS1_S1 + 29);
            *(b + 255 * OS1_S1 + 49) =
                prefactor_x * *(b + 255 * OS1_S1 + 34) -
                p_over_q * *(b + 321 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 200 * OS1_S1 + 34);
            *(b + 255 * OS1_S1 + 50) =
                prefactor_y * *(b + 255 * OS1_S1 + 30) -
                p_over_q * *(b + 329 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 16);
            *(b + 255 * OS1_S1 + 51) =
                prefactor_z * *(b + 255 * OS1_S1 + 30) -
                p_over_q * *(b + 330 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 30);
            *(b + 255 * OS1_S1 + 52) =
                prefactor_z * *(b + 255 * OS1_S1 + 31) -
                p_over_q * *(b + 330 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 31) +
                one_over_two_q * *(b + 255 * OS1_S1 + 16);
            *(b + 255 * OS1_S1 + 53) =
                prefactor_y * *(b + 255 * OS1_S1 + 33) -
                p_over_q * *(b + 329 * OS1_S1 + 33) +
                one_over_two_q * *(b + 255 * OS1_S1 + 19);
            *(b + 255 * OS1_S1 + 54) = prefactor_y * *(b + 255 * OS1_S1 + 34) -
                                       p_over_q * *(b + 329 * OS1_S1 + 34);
            *(b + 255 * OS1_S1 + 55) =
                prefactor_z * *(b + 255 * OS1_S1 + 34) -
                p_over_q * *(b + 330 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 192 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 19);
            *(b + 256 * OS1_S1 + 35) =
                prefactor_x * *(b + 256 * OS1_S1 + 20) -
                p_over_q * *(b + 322 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 256 * OS1_S1 + 10);
            *(b + 256 * OS1_S1 + 36) =
                prefactor_y * *(b + 256 * OS1_S1 + 20) -
                p_over_q * *(b + 331 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 20);
            *(b + 256 * OS1_S1 + 37) = prefactor_z * *(b + 256 * OS1_S1 + 20) -
                                       p_over_q * *(b + 332 * OS1_S1 + 20);
            *(b + 256 * OS1_S1 + 38) =
                prefactor_y * *(b + 256 * OS1_S1 + 21) -
                p_over_q * *(b + 331 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 21) +
                one_over_two_q * *(b + 256 * OS1_S1 + 10);
            *(b + 256 * OS1_S1 + 39) = prefactor_z * *(b + 256 * OS1_S1 + 21) -
                                       p_over_q * *(b + 332 * OS1_S1 + 21);
            *(b + 256 * OS1_S1 + 40) =
                prefactor_z * *(b + 256 * OS1_S1 + 22) -
                p_over_q * *(b + 332 * OS1_S1 + 22) +
                one_over_two_q * *(b + 256 * OS1_S1 + 10);
            *(b + 256 * OS1_S1 + 41) =
                prefactor_x * *(b + 256 * OS1_S1 + 26) -
                p_over_q * *(b + 322 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 26) +
                one_over_two_q * *(b + 256 * OS1_S1 + 16);
            *(b + 256 * OS1_S1 + 42) = prefactor_z * *(b + 256 * OS1_S1 + 23) -
                                       p_over_q * *(b + 332 * OS1_S1 + 23);
            *(b + 256 * OS1_S1 + 43) =
                prefactor_y * *(b + 256 * OS1_S1 + 25) -
                p_over_q * *(b + 331 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 25);
            *(b + 256 * OS1_S1 + 44) =
                prefactor_x * *(b + 256 * OS1_S1 + 29) -
                p_over_q * *(b + 322 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 29) +
                one_over_two_q * *(b + 256 * OS1_S1 + 19);
            *(b + 256 * OS1_S1 + 45) =
                prefactor_x * *(b + 256 * OS1_S1 + 30) -
                p_over_q * *(b + 322 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 30);
            *(b + 256 * OS1_S1 + 46) = prefactor_z * *(b + 256 * OS1_S1 + 26) -
                                       p_over_q * *(b + 332 * OS1_S1 + 26);
            *(b + 256 * OS1_S1 + 47) =
                prefactor_x * *(b + 256 * OS1_S1 + 32) -
                p_over_q * *(b + 322 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 32);
            *(b + 256 * OS1_S1 + 48) =
                prefactor_x * *(b + 256 * OS1_S1 + 33) -
                p_over_q * *(b + 322 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 33);
            *(b + 256 * OS1_S1 + 49) =
                prefactor_x * *(b + 256 * OS1_S1 + 34) -
                p_over_q * *(b + 322 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 201 * OS1_S1 + 34);
            *(b + 256 * OS1_S1 + 50) =
                prefactor_y * *(b + 256 * OS1_S1 + 30) -
                p_over_q * *(b + 331 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 256 * OS1_S1 + 16);
            *(b + 256 * OS1_S1 + 51) = prefactor_z * *(b + 256 * OS1_S1 + 30) -
                                       p_over_q * *(b + 332 * OS1_S1 + 30);
            *(b + 256 * OS1_S1 + 52) =
                prefactor_z * *(b + 256 * OS1_S1 + 31) -
                p_over_q * *(b + 332 * OS1_S1 + 31) +
                one_over_two_q * *(b + 256 * OS1_S1 + 16);
            *(b + 256 * OS1_S1 + 53) =
                prefactor_y * *(b + 256 * OS1_S1 + 33) -
                p_over_q * *(b + 331 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 33) +
                one_over_two_q * *(b + 256 * OS1_S1 + 19);
            *(b + 256 * OS1_S1 + 54) =
                prefactor_y * *(b + 256 * OS1_S1 + 34) -
                p_over_q * *(b + 331 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 193 * OS1_S1 + 34);
            *(b + 256 * OS1_S1 + 55) =
                prefactor_z * *(b + 256 * OS1_S1 + 34) -
                p_over_q * *(b + 332 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 256 * OS1_S1 + 19);
            *(b + 257 * OS1_S1 + 35) =
                prefactor_x * *(b + 257 * OS1_S1 + 20) -
                p_over_q * *(b + 323 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 257 * OS1_S1 + 10);
            *(b + 257 * OS1_S1 + 36) =
                prefactor_y * *(b + 257 * OS1_S1 + 20) -
                p_over_q * *(b + 332 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 20);
            *(b + 257 * OS1_S1 + 37) =
                prefactor_z * *(b + 257 * OS1_S1 + 20) -
                p_over_q * *(b + 333 * OS1_S1 + 20) +
                one_over_two_q * *(b + 193 * OS1_S1 + 20);
            *(b + 257 * OS1_S1 + 38) =
                prefactor_y * *(b + 257 * OS1_S1 + 21) -
                p_over_q * *(b + 332 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 21) +
                one_over_two_q * *(b + 257 * OS1_S1 + 10);
            *(b + 257 * OS1_S1 + 39) =
                prefactor_z * *(b + 257 * OS1_S1 + 21) -
                p_over_q * *(b + 333 * OS1_S1 + 21) +
                one_over_two_q * *(b + 193 * OS1_S1 + 21);
            *(b + 257 * OS1_S1 + 40) =
                prefactor_z * *(b + 257 * OS1_S1 + 22) -
                p_over_q * *(b + 333 * OS1_S1 + 22) +
                one_over_two_q * *(b + 193 * OS1_S1 + 22) +
                one_over_two_q * *(b + 257 * OS1_S1 + 10);
            *(b + 257 * OS1_S1 + 41) =
                prefactor_x * *(b + 257 * OS1_S1 + 26) -
                p_over_q * *(b + 323 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 26) +
                one_over_two_q * *(b + 257 * OS1_S1 + 16);
            *(b + 257 * OS1_S1 + 42) =
                prefactor_z * *(b + 257 * OS1_S1 + 23) -
                p_over_q * *(b + 333 * OS1_S1 + 23) +
                one_over_two_q * *(b + 193 * OS1_S1 + 23);
            *(b + 257 * OS1_S1 + 43) =
                prefactor_y * *(b + 257 * OS1_S1 + 25) -
                p_over_q * *(b + 332 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 25);
            *(b + 257 * OS1_S1 + 44) =
                prefactor_x * *(b + 257 * OS1_S1 + 29) -
                p_over_q * *(b + 323 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 29) +
                one_over_two_q * *(b + 257 * OS1_S1 + 19);
            *(b + 257 * OS1_S1 + 45) =
                prefactor_x * *(b + 257 * OS1_S1 + 30) -
                p_over_q * *(b + 323 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 30);
            *(b + 257 * OS1_S1 + 46) =
                prefactor_z * *(b + 257 * OS1_S1 + 26) -
                p_over_q * *(b + 333 * OS1_S1 + 26) +
                one_over_two_q * *(b + 193 * OS1_S1 + 26);
            *(b + 257 * OS1_S1 + 47) =
                prefactor_x * *(b + 257 * OS1_S1 + 32) -
                p_over_q * *(b + 323 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 32);
            *(b + 257 * OS1_S1 + 48) =
                prefactor_x * *(b + 257 * OS1_S1 + 33) -
                p_over_q * *(b + 323 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 33);
            *(b + 257 * OS1_S1 + 49) =
                prefactor_x * *(b + 257 * OS1_S1 + 34) -
                p_over_q * *(b + 323 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 34);
            *(b + 257 * OS1_S1 + 50) =
                prefactor_y * *(b + 257 * OS1_S1 + 30) -
                p_over_q * *(b + 332 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 257 * OS1_S1 + 16);
            *(b + 257 * OS1_S1 + 51) =
                prefactor_z * *(b + 257 * OS1_S1 + 30) -
                p_over_q * *(b + 333 * OS1_S1 + 30) +
                one_over_two_q * *(b + 193 * OS1_S1 + 30);
            *(b + 257 * OS1_S1 + 52) =
                prefactor_z * *(b + 257 * OS1_S1 + 31) -
                p_over_q * *(b + 333 * OS1_S1 + 31) +
                one_over_two_q * *(b + 193 * OS1_S1 + 31) +
                one_over_two_q * *(b + 257 * OS1_S1 + 16);
            *(b + 257 * OS1_S1 + 53) =
                prefactor_y * *(b + 257 * OS1_S1 + 33) -
                p_over_q * *(b + 332 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 33) +
                one_over_two_q * *(b + 257 * OS1_S1 + 19);
            *(b + 257 * OS1_S1 + 54) =
                prefactor_y * *(b + 257 * OS1_S1 + 34) -
                p_over_q * *(b + 332 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 194 * OS1_S1 + 34);
            *(b + 257 * OS1_S1 + 55) =
                prefactor_z * *(b + 257 * OS1_S1 + 34) -
                p_over_q * *(b + 333 * OS1_S1 + 34) +
                one_over_two_q * *(b + 193 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 257 * OS1_S1 + 19);
            *(b + 258 * OS1_S1 + 35) =
                prefactor_x * *(b + 258 * OS1_S1 + 20) -
                p_over_q * *(b + 324 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 258 * OS1_S1 + 10);
            *(b + 258 * OS1_S1 + 36) =
                prefactor_y * *(b + 258 * OS1_S1 + 20) -
                p_over_q * *(b + 333 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 20);
            *(b + 258 * OS1_S1 + 37) =
                prefactor_z * *(b + 258 * OS1_S1 + 20) -
                p_over_q * *(b + 334 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 20);
            *(b + 258 * OS1_S1 + 38) =
                prefactor_y * *(b + 258 * OS1_S1 + 21) -
                p_over_q * *(b + 333 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 21) +
                one_over_two_q * *(b + 258 * OS1_S1 + 10);
            *(b + 258 * OS1_S1 + 39) =
                prefactor_z * *(b + 258 * OS1_S1 + 21) -
                p_over_q * *(b + 334 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 21);
            *(b + 258 * OS1_S1 + 40) =
                prefactor_z * *(b + 258 * OS1_S1 + 22) -
                p_over_q * *(b + 334 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 22) +
                one_over_two_q * *(b + 258 * OS1_S1 + 10);
            *(b + 258 * OS1_S1 + 41) =
                prefactor_x * *(b + 258 * OS1_S1 + 26) -
                p_over_q * *(b + 324 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 26) +
                one_over_two_q * *(b + 258 * OS1_S1 + 16);
            *(b + 258 * OS1_S1 + 42) =
                prefactor_z * *(b + 258 * OS1_S1 + 23) -
                p_over_q * *(b + 334 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 23);
            *(b + 258 * OS1_S1 + 43) =
                prefactor_y * *(b + 258 * OS1_S1 + 25) -
                p_over_q * *(b + 333 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 25);
            *(b + 258 * OS1_S1 + 44) =
                prefactor_x * *(b + 258 * OS1_S1 + 29) -
                p_over_q * *(b + 324 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 29) +
                one_over_two_q * *(b + 258 * OS1_S1 + 19);
            *(b + 258 * OS1_S1 + 45) =
                prefactor_x * *(b + 258 * OS1_S1 + 30) -
                p_over_q * *(b + 324 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 30);
            *(b + 258 * OS1_S1 + 46) =
                prefactor_z * *(b + 258 * OS1_S1 + 26) -
                p_over_q * *(b + 334 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 26);
            *(b + 258 * OS1_S1 + 47) =
                prefactor_x * *(b + 258 * OS1_S1 + 32) -
                p_over_q * *(b + 324 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 32);
            *(b + 258 * OS1_S1 + 48) =
                prefactor_x * *(b + 258 * OS1_S1 + 33) -
                p_over_q * *(b + 324 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 33);
            *(b + 258 * OS1_S1 + 49) =
                prefactor_x * *(b + 258 * OS1_S1 + 34) -
                p_over_q * *(b + 324 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 203 * OS1_S1 + 34);
            *(b + 258 * OS1_S1 + 50) =
                prefactor_y * *(b + 258 * OS1_S1 + 30) -
                p_over_q * *(b + 333 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 258 * OS1_S1 + 16);
            *(b + 258 * OS1_S1 + 51) =
                prefactor_z * *(b + 258 * OS1_S1 + 30) -
                p_over_q * *(b + 334 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 30);
            *(b + 258 * OS1_S1 + 52) =
                prefactor_z * *(b + 258 * OS1_S1 + 31) -
                p_over_q * *(b + 334 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 31) +
                one_over_two_q * *(b + 258 * OS1_S1 + 16);
            *(b + 258 * OS1_S1 + 53) =
                prefactor_y * *(b + 258 * OS1_S1 + 33) -
                p_over_q * *(b + 333 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 33) +
                one_over_two_q * *(b + 258 * OS1_S1 + 19);
            *(b + 258 * OS1_S1 + 54) =
                prefactor_y * *(b + 258 * OS1_S1 + 34) -
                p_over_q * *(b + 333 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 195 * OS1_S1 + 34);
            *(b + 258 * OS1_S1 + 55) =
                prefactor_z * *(b + 258 * OS1_S1 + 34) -
                p_over_q * *(b + 334 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 194 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 258 * OS1_S1 + 19);
            *(b + 259 * OS1_S1 + 35) =
                prefactor_x * *(b + 259 * OS1_S1 + 20) -
                p_over_q * *(b + 325 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 10);
            *(b + 259 * OS1_S1 + 36) =
                prefactor_y * *(b + 259 * OS1_S1 + 20) -
                p_over_q * *(b + 334 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 20);
            *(b + 259 * OS1_S1 + 37) =
                prefactor_z * *(b + 259 * OS1_S1 + 20) -
                p_over_q * *(b + 335 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 20);
            *(b + 259 * OS1_S1 + 38) =
                prefactor_y * *(b + 259 * OS1_S1 + 21) -
                p_over_q * *(b + 334 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 21) +
                one_over_two_q * *(b + 259 * OS1_S1 + 10);
            *(b + 259 * OS1_S1 + 39) =
                prefactor_z * *(b + 259 * OS1_S1 + 21) -
                p_over_q * *(b + 335 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 21);
            *(b + 259 * OS1_S1 + 40) =
                prefactor_z * *(b + 259 * OS1_S1 + 22) -
                p_over_q * *(b + 335 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 22) +
                one_over_two_q * *(b + 259 * OS1_S1 + 10);
            *(b + 259 * OS1_S1 + 41) =
                prefactor_x * *(b + 259 * OS1_S1 + 26) -
                p_over_q * *(b + 325 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 26) +
                one_over_two_q * *(b + 259 * OS1_S1 + 16);
            *(b + 259 * OS1_S1 + 42) =
                prefactor_z * *(b + 259 * OS1_S1 + 23) -
                p_over_q * *(b + 335 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 23);
            *(b + 259 * OS1_S1 + 43) =
                prefactor_y * *(b + 259 * OS1_S1 + 25) -
                p_over_q * *(b + 334 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 25);
            *(b + 259 * OS1_S1 + 44) =
                prefactor_x * *(b + 259 * OS1_S1 + 29) -
                p_over_q * *(b + 325 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 29) +
                one_over_two_q * *(b + 259 * OS1_S1 + 19);
            *(b + 259 * OS1_S1 + 45) =
                prefactor_x * *(b + 259 * OS1_S1 + 30) -
                p_over_q * *(b + 325 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 30);
            *(b + 259 * OS1_S1 + 46) =
                prefactor_x * *(b + 259 * OS1_S1 + 31) -
                p_over_q * *(b + 325 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 31);
            *(b + 259 * OS1_S1 + 47) =
                prefactor_x * *(b + 259 * OS1_S1 + 32) -
                p_over_q * *(b + 325 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 32);
            *(b + 259 * OS1_S1 + 48) =
                prefactor_x * *(b + 259 * OS1_S1 + 33) -
                p_over_q * *(b + 325 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 33);
            *(b + 259 * OS1_S1 + 49) =
                prefactor_x * *(b + 259 * OS1_S1 + 34) -
                p_over_q * *(b + 325 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 204 * OS1_S1 + 34);
            *(b + 259 * OS1_S1 + 50) =
                prefactor_y * *(b + 259 * OS1_S1 + 30) -
                p_over_q * *(b + 334 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 16);
            *(b + 259 * OS1_S1 + 51) =
                prefactor_z * *(b + 259 * OS1_S1 + 30) -
                p_over_q * *(b + 335 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 30);
            *(b + 259 * OS1_S1 + 52) =
                prefactor_z * *(b + 259 * OS1_S1 + 31) -
                p_over_q * *(b + 335 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 31) +
                one_over_two_q * *(b + 259 * OS1_S1 + 16);
            *(b + 259 * OS1_S1 + 53) =
                prefactor_y * *(b + 259 * OS1_S1 + 33) -
                p_over_q * *(b + 334 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 33) +
                one_over_two_q * *(b + 259 * OS1_S1 + 19);
            *(b + 259 * OS1_S1 + 54) =
                prefactor_y * *(b + 259 * OS1_S1 + 34) -
                p_over_q * *(b + 334 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 196 * OS1_S1 + 34);
            *(b + 259 * OS1_S1 + 55) =
                prefactor_z * *(b + 259 * OS1_S1 + 34) -
                p_over_q * *(b + 335 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 195 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 19);
            *(b + 260 * OS1_S1 + 35) =
                prefactor_x * *(b + 260 * OS1_S1 + 20) -
                p_over_q * *(b + 326 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 260 * OS1_S1 + 10);
            *(b + 260 * OS1_S1 + 36) =
                prefactor_y * *(b + 260 * OS1_S1 + 20) -
                p_over_q * *(b + 335 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 20);
            *(b + 260 * OS1_S1 + 37) =
                prefactor_z * *(b + 260 * OS1_S1 + 20) -
                p_over_q * *(b + 336 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 20);
            *(b + 260 * OS1_S1 + 38) =
                prefactor_y * *(b + 260 * OS1_S1 + 21) -
                p_over_q * *(b + 335 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 21) +
                one_over_two_q * *(b + 260 * OS1_S1 + 10);
            *(b + 260 * OS1_S1 + 39) =
                prefactor_z * *(b + 260 * OS1_S1 + 21) -
                p_over_q * *(b + 336 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 21);
            *(b + 260 * OS1_S1 + 40) =
                prefactor_z * *(b + 260 * OS1_S1 + 22) -
                p_over_q * *(b + 336 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 22) +
                one_over_two_q * *(b + 260 * OS1_S1 + 10);
            *(b + 260 * OS1_S1 + 41) =
                prefactor_x * *(b + 260 * OS1_S1 + 26) -
                p_over_q * *(b + 326 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 26) +
                one_over_two_q * *(b + 260 * OS1_S1 + 16);
            *(b + 260 * OS1_S1 + 42) =
                prefactor_z * *(b + 260 * OS1_S1 + 23) -
                p_over_q * *(b + 336 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 23);
            *(b + 260 * OS1_S1 + 43) =
                prefactor_y * *(b + 260 * OS1_S1 + 25) -
                p_over_q * *(b + 335 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 25);
            *(b + 260 * OS1_S1 + 44) =
                prefactor_x * *(b + 260 * OS1_S1 + 29) -
                p_over_q * *(b + 326 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 29) +
                one_over_two_q * *(b + 260 * OS1_S1 + 19);
            *(b + 260 * OS1_S1 + 45) =
                prefactor_x * *(b + 260 * OS1_S1 + 30) -
                p_over_q * *(b + 326 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 30);
            *(b + 260 * OS1_S1 + 46) =
                prefactor_x * *(b + 260 * OS1_S1 + 31) -
                p_over_q * *(b + 326 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 31);
            *(b + 260 * OS1_S1 + 47) =
                prefactor_x * *(b + 260 * OS1_S1 + 32) -
                p_over_q * *(b + 326 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 32);
            *(b + 260 * OS1_S1 + 48) =
                prefactor_x * *(b + 260 * OS1_S1 + 33) -
                p_over_q * *(b + 326 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 33);
            *(b + 260 * OS1_S1 + 49) =
                prefactor_x * *(b + 260 * OS1_S1 + 34) -
                p_over_q * *(b + 326 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 205 * OS1_S1 + 34);
            *(b + 260 * OS1_S1 + 50) =
                prefactor_y * *(b + 260 * OS1_S1 + 30) -
                p_over_q * *(b + 335 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 260 * OS1_S1 + 16);
            *(b + 260 * OS1_S1 + 51) =
                prefactor_z * *(b + 260 * OS1_S1 + 30) -
                p_over_q * *(b + 336 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 30);
            *(b + 260 * OS1_S1 + 52) =
                prefactor_z * *(b + 260 * OS1_S1 + 31) -
                p_over_q * *(b + 336 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 31) +
                one_over_two_q * *(b + 260 * OS1_S1 + 16);
            *(b + 260 * OS1_S1 + 53) =
                prefactor_y * *(b + 260 * OS1_S1 + 33) -
                p_over_q * *(b + 335 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 33) +
                one_over_two_q * *(b + 260 * OS1_S1 + 19);
            *(b + 260 * OS1_S1 + 54) =
                prefactor_y * *(b + 260 * OS1_S1 + 34) -
                p_over_q * *(b + 335 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 197 * OS1_S1 + 34);
            *(b + 260 * OS1_S1 + 55) =
                prefactor_z * *(b + 260 * OS1_S1 + 34) -
                p_over_q * *(b + 336 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 196 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 260 * OS1_S1 + 19);
            *(b + 261 * OS1_S1 + 35) =
                prefactor_x * *(b + 261 * OS1_S1 + 20) -
                p_over_q * *(b + 327 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 10);
            *(b + 261 * OS1_S1 + 36) =
                prefactor_y * *(b + 261 * OS1_S1 + 20) -
                p_over_q * *(b + 336 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 20);
            *(b + 261 * OS1_S1 + 37) =
                prefactor_z * *(b + 261 * OS1_S1 + 20) -
                p_over_q * *(b + 337 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 20);
            *(b + 261 * OS1_S1 + 38) =
                prefactor_y * *(b + 261 * OS1_S1 + 21) -
                p_over_q * *(b + 336 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 21) +
                one_over_two_q * *(b + 261 * OS1_S1 + 10);
            *(b + 261 * OS1_S1 + 39) =
                prefactor_y * *(b + 261 * OS1_S1 + 22) -
                p_over_q * *(b + 336 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 22);
            *(b + 261 * OS1_S1 + 40) =
                prefactor_z * *(b + 261 * OS1_S1 + 22) -
                p_over_q * *(b + 337 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 22) +
                one_over_two_q * *(b + 261 * OS1_S1 + 10);
            *(b + 261 * OS1_S1 + 41) =
                prefactor_x * *(b + 261 * OS1_S1 + 26) -
                p_over_q * *(b + 327 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 26) +
                one_over_two_q * *(b + 261 * OS1_S1 + 16);
            *(b + 261 * OS1_S1 + 42) =
                prefactor_z * *(b + 261 * OS1_S1 + 23) -
                p_over_q * *(b + 337 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 23);
            *(b + 261 * OS1_S1 + 43) =
                prefactor_y * *(b + 261 * OS1_S1 + 25) -
                p_over_q * *(b + 336 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 25);
            *(b + 261 * OS1_S1 + 44) =
                prefactor_x * *(b + 261 * OS1_S1 + 29) -
                p_over_q * *(b + 327 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 29) +
                one_over_two_q * *(b + 261 * OS1_S1 + 19);
            *(b + 261 * OS1_S1 + 45) =
                prefactor_x * *(b + 261 * OS1_S1 + 30) -
                p_over_q * *(b + 327 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 30);
            *(b + 261 * OS1_S1 + 46) =
                prefactor_x * *(b + 261 * OS1_S1 + 31) -
                p_over_q * *(b + 327 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 31);
            *(b + 261 * OS1_S1 + 47) =
                prefactor_x * *(b + 261 * OS1_S1 + 32) -
                p_over_q * *(b + 327 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 32);
            *(b + 261 * OS1_S1 + 48) =
                prefactor_x * *(b + 261 * OS1_S1 + 33) -
                p_over_q * *(b + 327 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 33);
            *(b + 261 * OS1_S1 + 49) =
                prefactor_x * *(b + 261 * OS1_S1 + 34) -
                p_over_q * *(b + 327 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 206 * OS1_S1 + 34);
            *(b + 261 * OS1_S1 + 50) =
                prefactor_y * *(b + 261 * OS1_S1 + 30) -
                p_over_q * *(b + 336 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 16);
            *(b + 261 * OS1_S1 + 51) =
                prefactor_z * *(b + 261 * OS1_S1 + 30) -
                p_over_q * *(b + 337 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 30);
            *(b + 261 * OS1_S1 + 52) =
                prefactor_z * *(b + 261 * OS1_S1 + 31) -
                p_over_q * *(b + 337 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 31) +
                one_over_two_q * *(b + 261 * OS1_S1 + 16);
            *(b + 261 * OS1_S1 + 53) =
                prefactor_y * *(b + 261 * OS1_S1 + 33) -
                p_over_q * *(b + 336 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 33) +
                one_over_two_q * *(b + 261 * OS1_S1 + 19);
            *(b + 261 * OS1_S1 + 54) =
                prefactor_y * *(b + 261 * OS1_S1 + 34) -
                p_over_q * *(b + 336 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 198 * OS1_S1 + 34);
            *(b + 261 * OS1_S1 + 55) =
                prefactor_z * *(b + 261 * OS1_S1 + 34) -
                p_over_q * *(b + 337 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 197 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 19);
            *(b + 262 * OS1_S1 + 35) =
                prefactor_x * *(b + 262 * OS1_S1 + 20) -
                p_over_q * *(b + 328 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 262 * OS1_S1 + 10);
            *(b + 262 * OS1_S1 + 36) =
                prefactor_y * *(b + 262 * OS1_S1 + 20) -
                p_over_q * *(b + 337 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 20);
            *(b + 262 * OS1_S1 + 37) =
                prefactor_z * *(b + 262 * OS1_S1 + 20) -
                p_over_q * *(b + 338 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 20);
            *(b + 262 * OS1_S1 + 38) =
                prefactor_y * *(b + 262 * OS1_S1 + 21) -
                p_over_q * *(b + 337 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 21) +
                one_over_two_q * *(b + 262 * OS1_S1 + 10);
            *(b + 262 * OS1_S1 + 39) =
                prefactor_y * *(b + 262 * OS1_S1 + 22) -
                p_over_q * *(b + 337 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 22);
            *(b + 262 * OS1_S1 + 40) =
                prefactor_z * *(b + 262 * OS1_S1 + 22) -
                p_over_q * *(b + 338 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 22) +
                one_over_two_q * *(b + 262 * OS1_S1 + 10);
            *(b + 262 * OS1_S1 + 41) =
                prefactor_x * *(b + 262 * OS1_S1 + 26) -
                p_over_q * *(b + 328 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 26) +
                one_over_two_q * *(b + 262 * OS1_S1 + 16);
            *(b + 262 * OS1_S1 + 42) =
                prefactor_z * *(b + 262 * OS1_S1 + 23) -
                p_over_q * *(b + 338 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 23);
            *(b + 262 * OS1_S1 + 43) =
                prefactor_y * *(b + 262 * OS1_S1 + 25) -
                p_over_q * *(b + 337 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 25);
            *(b + 262 * OS1_S1 + 44) =
                prefactor_x * *(b + 262 * OS1_S1 + 29) -
                p_over_q * *(b + 328 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 29) +
                one_over_two_q * *(b + 262 * OS1_S1 + 19);
            *(b + 262 * OS1_S1 + 45) =
                prefactor_x * *(b + 262 * OS1_S1 + 30) -
                p_over_q * *(b + 328 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 30);
            *(b + 262 * OS1_S1 + 46) =
                prefactor_x * *(b + 262 * OS1_S1 + 31) -
                p_over_q * *(b + 328 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 31);
            *(b + 262 * OS1_S1 + 47) =
                prefactor_x * *(b + 262 * OS1_S1 + 32) -
                p_over_q * *(b + 328 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 32);
            *(b + 262 * OS1_S1 + 48) =
                prefactor_y * *(b + 262 * OS1_S1 + 29) -
                p_over_q * *(b + 337 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 29);
            *(b + 262 * OS1_S1 + 49) =
                prefactor_x * *(b + 262 * OS1_S1 + 34) -
                p_over_q * *(b + 328 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 207 * OS1_S1 + 34);
            *(b + 262 * OS1_S1 + 50) =
                prefactor_y * *(b + 262 * OS1_S1 + 30) -
                p_over_q * *(b + 337 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 262 * OS1_S1 + 16);
            *(b + 262 * OS1_S1 + 51) =
                prefactor_z * *(b + 262 * OS1_S1 + 30) -
                p_over_q * *(b + 338 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 30);
            *(b + 262 * OS1_S1 + 52) =
                prefactor_z * *(b + 262 * OS1_S1 + 31) -
                p_over_q * *(b + 338 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 31) +
                one_over_two_q * *(b + 262 * OS1_S1 + 16);
            *(b + 262 * OS1_S1 + 53) =
                prefactor_y * *(b + 262 * OS1_S1 + 33) -
                p_over_q * *(b + 337 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 33) +
                one_over_two_q * *(b + 262 * OS1_S1 + 19);
            *(b + 262 * OS1_S1 + 54) =
                prefactor_y * *(b + 262 * OS1_S1 + 34) -
                p_over_q * *(b + 337 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 199 * OS1_S1 + 34);
            *(b + 262 * OS1_S1 + 55) =
                prefactor_z * *(b + 262 * OS1_S1 + 34) -
                p_over_q * *(b + 338 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 198 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 262 * OS1_S1 + 19);
            *(b + 263 * OS1_S1 + 35) =
                prefactor_x * *(b + 263 * OS1_S1 + 20) -
                p_over_q * *(b + 329 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 263 * OS1_S1 + 10);
            *(b + 263 * OS1_S1 + 36) =
                prefactor_y * *(b + 263 * OS1_S1 + 20) -
                p_over_q * *(b + 338 * OS1_S1 + 20) +
                one_over_two_q * *(b + 200 * OS1_S1 + 20);
            *(b + 263 * OS1_S1 + 37) =
                prefactor_z * *(b + 263 * OS1_S1 + 20) -
                p_over_q * *(b + 339 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 20);
            *(b + 263 * OS1_S1 + 38) =
                prefactor_y * *(b + 263 * OS1_S1 + 21) -
                p_over_q * *(b + 338 * OS1_S1 + 21) +
                one_over_two_q * *(b + 200 * OS1_S1 + 21) +
                one_over_two_q * *(b + 263 * OS1_S1 + 10);
            *(b + 263 * OS1_S1 + 39) =
                prefactor_y * *(b + 263 * OS1_S1 + 22) -
                p_over_q * *(b + 338 * OS1_S1 + 22) +
                one_over_two_q * *(b + 200 * OS1_S1 + 22);
            *(b + 263 * OS1_S1 + 40) =
                prefactor_z * *(b + 263 * OS1_S1 + 22) -
                p_over_q * *(b + 339 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 22) +
                one_over_two_q * *(b + 263 * OS1_S1 + 10);
            *(b + 263 * OS1_S1 + 41) =
                prefactor_x * *(b + 263 * OS1_S1 + 26) -
                p_over_q * *(b + 329 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 26) +
                one_over_two_q * *(b + 263 * OS1_S1 + 16);
            *(b + 263 * OS1_S1 + 42) =
                prefactor_z * *(b + 263 * OS1_S1 + 23) -
                p_over_q * *(b + 339 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 23);
            *(b + 263 * OS1_S1 + 43) =
                prefactor_y * *(b + 263 * OS1_S1 + 25) -
                p_over_q * *(b + 338 * OS1_S1 + 25) +
                one_over_two_q * *(b + 200 * OS1_S1 + 25);
            *(b + 263 * OS1_S1 + 44) =
                prefactor_x * *(b + 263 * OS1_S1 + 29) -
                p_over_q * *(b + 329 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 29) +
                one_over_two_q * *(b + 263 * OS1_S1 + 19);
            *(b + 263 * OS1_S1 + 45) =
                prefactor_x * *(b + 263 * OS1_S1 + 30) -
                p_over_q * *(b + 329 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 30);
            *(b + 263 * OS1_S1 + 46) =
                prefactor_x * *(b + 263 * OS1_S1 + 31) -
                p_over_q * *(b + 329 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 31);
            *(b + 263 * OS1_S1 + 47) =
                prefactor_x * *(b + 263 * OS1_S1 + 32) -
                p_over_q * *(b + 329 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 32);
            *(b + 263 * OS1_S1 + 48) =
                prefactor_y * *(b + 263 * OS1_S1 + 29) -
                p_over_q * *(b + 338 * OS1_S1 + 29) +
                one_over_two_q * *(b + 200 * OS1_S1 + 29);
            *(b + 263 * OS1_S1 + 49) =
                prefactor_x * *(b + 263 * OS1_S1 + 34) -
                p_over_q * *(b + 329 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 34);
            *(b + 263 * OS1_S1 + 50) =
                prefactor_y * *(b + 263 * OS1_S1 + 30) -
                p_over_q * *(b + 338 * OS1_S1 + 30) +
                one_over_two_q * *(b + 200 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 263 * OS1_S1 + 16);
            *(b + 263 * OS1_S1 + 51) =
                prefactor_z * *(b + 263 * OS1_S1 + 30) -
                p_over_q * *(b + 339 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 30);
            *(b + 263 * OS1_S1 + 52) =
                prefactor_z * *(b + 263 * OS1_S1 + 31) -
                p_over_q * *(b + 339 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 31) +
                one_over_two_q * *(b + 263 * OS1_S1 + 16);
            *(b + 263 * OS1_S1 + 53) =
                prefactor_y * *(b + 263 * OS1_S1 + 33) -
                p_over_q * *(b + 338 * OS1_S1 + 33) +
                one_over_two_q * *(b + 200 * OS1_S1 + 33) +
                one_over_two_q * *(b + 263 * OS1_S1 + 19);
            *(b + 263 * OS1_S1 + 54) =
                prefactor_y * *(b + 263 * OS1_S1 + 34) -
                p_over_q * *(b + 338 * OS1_S1 + 34) +
                one_over_two_q * *(b + 200 * OS1_S1 + 34);
            *(b + 263 * OS1_S1 + 55) =
                prefactor_z * *(b + 263 * OS1_S1 + 34) -
                p_over_q * *(b + 339 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 199 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 263 * OS1_S1 + 19);
            *(b + 264 * OS1_S1 + 35) =
                prefactor_x * *(b + 264 * OS1_S1 + 20) -
                p_over_q * *(b + 330 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 264 * OS1_S1 + 10);
            *(b + 264 * OS1_S1 + 36) = prefactor_y * *(b + 264 * OS1_S1 + 20) -
                                       p_over_q * *(b + 339 * OS1_S1 + 20);
            *(b + 264 * OS1_S1 + 37) =
                prefactor_z * *(b + 264 * OS1_S1 + 20) -
                p_over_q * *(b + 340 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 20);
            *(b + 264 * OS1_S1 + 38) =
                prefactor_y * *(b + 264 * OS1_S1 + 21) -
                p_over_q * *(b + 339 * OS1_S1 + 21) +
                one_over_two_q * *(b + 264 * OS1_S1 + 10);
            *(b + 264 * OS1_S1 + 39) = prefactor_y * *(b + 264 * OS1_S1 + 22) -
                                       p_over_q * *(b + 339 * OS1_S1 + 22);
            *(b + 264 * OS1_S1 + 40) =
                prefactor_z * *(b + 264 * OS1_S1 + 22) -
                p_over_q * *(b + 340 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 22) +
                one_over_two_q * *(b + 264 * OS1_S1 + 10);
            *(b + 264 * OS1_S1 + 41) =
                prefactor_x * *(b + 264 * OS1_S1 + 26) -
                p_over_q * *(b + 330 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 26) +
                one_over_two_q * *(b + 264 * OS1_S1 + 16);
            *(b + 264 * OS1_S1 + 42) =
                prefactor_z * *(b + 264 * OS1_S1 + 23) -
                p_over_q * *(b + 340 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 23);
            *(b + 264 * OS1_S1 + 43) = prefactor_y * *(b + 264 * OS1_S1 + 25) -
                                       p_over_q * *(b + 339 * OS1_S1 + 25);
            *(b + 264 * OS1_S1 + 44) =
                prefactor_x * *(b + 264 * OS1_S1 + 29) -
                p_over_q * *(b + 330 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 29) +
                one_over_two_q * *(b + 264 * OS1_S1 + 19);
            *(b + 264 * OS1_S1 + 45) =
                prefactor_x * *(b + 264 * OS1_S1 + 30) -
                p_over_q * *(b + 330 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 30);
            *(b + 264 * OS1_S1 + 46) =
                prefactor_x * *(b + 264 * OS1_S1 + 31) -
                p_over_q * *(b + 330 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 31);
            *(b + 264 * OS1_S1 + 47) =
                prefactor_x * *(b + 264 * OS1_S1 + 32) -
                p_over_q * *(b + 330 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 32);
            *(b + 264 * OS1_S1 + 48) = prefactor_y * *(b + 264 * OS1_S1 + 29) -
                                       p_over_q * *(b + 339 * OS1_S1 + 29);
            *(b + 264 * OS1_S1 + 49) =
                prefactor_x * *(b + 264 * OS1_S1 + 34) -
                p_over_q * *(b + 330 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 209 * OS1_S1 + 34);
            *(b + 264 * OS1_S1 + 50) =
                prefactor_y * *(b + 264 * OS1_S1 + 30) -
                p_over_q * *(b + 339 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 264 * OS1_S1 + 16);
            *(b + 264 * OS1_S1 + 51) =
                prefactor_z * *(b + 264 * OS1_S1 + 30) -
                p_over_q * *(b + 340 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 30);
            *(b + 264 * OS1_S1 + 52) =
                prefactor_z * *(b + 264 * OS1_S1 + 31) -
                p_over_q * *(b + 340 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 31) +
                one_over_two_q * *(b + 264 * OS1_S1 + 16);
            *(b + 264 * OS1_S1 + 53) =
                prefactor_y * *(b + 264 * OS1_S1 + 33) -
                p_over_q * *(b + 339 * OS1_S1 + 33) +
                one_over_two_q * *(b + 264 * OS1_S1 + 19);
            *(b + 264 * OS1_S1 + 54) = prefactor_y * *(b + 264 * OS1_S1 + 34) -
                                       p_over_q * *(b + 339 * OS1_S1 + 34);
            *(b + 264 * OS1_S1 + 55) =
                prefactor_z * *(b + 264 * OS1_S1 + 34) -
                p_over_q * *(b + 340 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 200 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 264 * OS1_S1 + 19);
            *(b + 265 * OS1_S1 + 35) =
                prefactor_x * *(b + 265 * OS1_S1 + 20) -
                p_over_q * *(b + 331 * OS1_S1 + 20) +
                one_over_two_q * *(b + 210 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 265 * OS1_S1 + 10);
            *(b + 265 * OS1_S1 + 36) =
                prefactor_y * *(b + 265 * OS1_S1 + 20) -
                p_over_q * *(b + 341 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 20);
            *(b + 265 * OS1_S1 + 37) = prefactor_z * *(b + 265 * OS1_S1 + 20) -
                                       p_over_q * *(b + 342 * OS1_S1 + 20);
            *(b + 265 * OS1_S1 + 38) =
                prefactor_y * *(b + 265 * OS1_S1 + 21) -
                p_over_q * *(b + 341 * OS1_S1 + 21) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 21) +
                one_over_two_q * *(b + 265 * OS1_S1 + 10);
            *(b + 265 * OS1_S1 + 39) = prefactor_z * *(b + 265 * OS1_S1 + 21) -
                                       p_over_q * *(b + 342 * OS1_S1 + 21);
            *(b + 265 * OS1_S1 + 40) =
                prefactor_z * *(b + 265 * OS1_S1 + 22) -
                p_over_q * *(b + 342 * OS1_S1 + 22) +
                one_over_two_q * *(b + 265 * OS1_S1 + 10);
            *(b + 265 * OS1_S1 + 41) =
                prefactor_x * *(b + 265 * OS1_S1 + 26) -
                p_over_q * *(b + 331 * OS1_S1 + 26) +
                one_over_two_q * *(b + 210 * OS1_S1 + 26) +
                one_over_two_q * *(b + 265 * OS1_S1 + 16);
            *(b + 265 * OS1_S1 + 42) = prefactor_z * *(b + 265 * OS1_S1 + 23) -
                                       p_over_q * *(b + 342 * OS1_S1 + 23);
            *(b + 265 * OS1_S1 + 43) =
                prefactor_y * *(b + 265 * OS1_S1 + 25) -
                p_over_q * *(b + 341 * OS1_S1 + 25) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 25);
            *(b + 265 * OS1_S1 + 44) =
                prefactor_x * *(b + 265 * OS1_S1 + 29) -
                p_over_q * *(b + 331 * OS1_S1 + 29) +
                one_over_two_q * *(b + 210 * OS1_S1 + 29) +
                one_over_two_q * *(b + 265 * OS1_S1 + 19);
            *(b + 265 * OS1_S1 + 45) =
                prefactor_x * *(b + 265 * OS1_S1 + 30) -
                p_over_q * *(b + 331 * OS1_S1 + 30) +
                one_over_two_q * *(b + 210 * OS1_S1 + 30);
            *(b + 265 * OS1_S1 + 46) = prefactor_z * *(b + 265 * OS1_S1 + 26) -
                                       p_over_q * *(b + 342 * OS1_S1 + 26);
            *(b + 265 * OS1_S1 + 47) =
                prefactor_x * *(b + 265 * OS1_S1 + 32) -
                p_over_q * *(b + 331 * OS1_S1 + 32) +
                one_over_two_q * *(b + 210 * OS1_S1 + 32);
            *(b + 265 * OS1_S1 + 48) =
                prefactor_x * *(b + 265 * OS1_S1 + 33) -
                p_over_q * *(b + 331 * OS1_S1 + 33) +
                one_over_two_q * *(b + 210 * OS1_S1 + 33);
            *(b + 265 * OS1_S1 + 49) =
                prefactor_x * *(b + 265 * OS1_S1 + 34) -
                p_over_q * *(b + 331 * OS1_S1 + 34) +
                one_over_two_q * *(b + 210 * OS1_S1 + 34);
            *(b + 265 * OS1_S1 + 50) =
                prefactor_y * *(b + 265 * OS1_S1 + 30) -
                p_over_q * *(b + 341 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 265 * OS1_S1 + 16);
            *(b + 265 * OS1_S1 + 51) = prefactor_z * *(b + 265 * OS1_S1 + 30) -
                                       p_over_q * *(b + 342 * OS1_S1 + 30);
            *(b + 265 * OS1_S1 + 52) =
                prefactor_z * *(b + 265 * OS1_S1 + 31) -
                p_over_q * *(b + 342 * OS1_S1 + 31) +
                one_over_two_q * *(b + 265 * OS1_S1 + 16);
            *(b + 265 * OS1_S1 + 53) =
                prefactor_y * *(b + 265 * OS1_S1 + 33) -
                p_over_q * *(b + 341 * OS1_S1 + 33) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 33) +
                one_over_two_q * *(b + 265 * OS1_S1 + 19);
            *(b + 265 * OS1_S1 + 54) =
                prefactor_y * *(b + 265 * OS1_S1 + 34) -
                p_over_q * *(b + 341 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 201 * OS1_S1 + 34);
            *(b + 265 * OS1_S1 + 55) =
                prefactor_z * *(b + 265 * OS1_S1 + 34) -
                p_over_q * *(b + 342 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 265 * OS1_S1 + 19);
            *(b + 266 * OS1_S1 + 35) =
                prefactor_x * *(b + 266 * OS1_S1 + 20) -
                p_over_q * *(b + 332 * OS1_S1 + 20) +
                one_over_two_q * *(b + 211 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 266 * OS1_S1 + 10);
            *(b + 266 * OS1_S1 + 36) =
                prefactor_y * *(b + 266 * OS1_S1 + 20) -
                p_over_q * *(b + 342 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 20);
            *(b + 266 * OS1_S1 + 37) =
                prefactor_z * *(b + 266 * OS1_S1 + 20) -
                p_over_q * *(b + 343 * OS1_S1 + 20) +
                one_over_two_q * *(b + 201 * OS1_S1 + 20);
            *(b + 266 * OS1_S1 + 38) =
                prefactor_y * *(b + 266 * OS1_S1 + 21) -
                p_over_q * *(b + 342 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 21) +
                one_over_two_q * *(b + 266 * OS1_S1 + 10);
            *(b + 266 * OS1_S1 + 39) =
                prefactor_z * *(b + 266 * OS1_S1 + 21) -
                p_over_q * *(b + 343 * OS1_S1 + 21) +
                one_over_two_q * *(b + 201 * OS1_S1 + 21);
            *(b + 266 * OS1_S1 + 40) =
                prefactor_z * *(b + 266 * OS1_S1 + 22) -
                p_over_q * *(b + 343 * OS1_S1 + 22) +
                one_over_two_q * *(b + 201 * OS1_S1 + 22) +
                one_over_two_q * *(b + 266 * OS1_S1 + 10);
            *(b + 266 * OS1_S1 + 41) =
                prefactor_x * *(b + 266 * OS1_S1 + 26) -
                p_over_q * *(b + 332 * OS1_S1 + 26) +
                one_over_two_q * *(b + 211 * OS1_S1 + 26) +
                one_over_two_q * *(b + 266 * OS1_S1 + 16);
            *(b + 266 * OS1_S1 + 42) =
                prefactor_z * *(b + 266 * OS1_S1 + 23) -
                p_over_q * *(b + 343 * OS1_S1 + 23) +
                one_over_two_q * *(b + 201 * OS1_S1 + 23);
            *(b + 266 * OS1_S1 + 43) =
                prefactor_y * *(b + 266 * OS1_S1 + 25) -
                p_over_q * *(b + 342 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 25);
            *(b + 266 * OS1_S1 + 44) =
                prefactor_x * *(b + 266 * OS1_S1 + 29) -
                p_over_q * *(b + 332 * OS1_S1 + 29) +
                one_over_two_q * *(b + 211 * OS1_S1 + 29) +
                one_over_two_q * *(b + 266 * OS1_S1 + 19);
            *(b + 266 * OS1_S1 + 45) =
                prefactor_x * *(b + 266 * OS1_S1 + 30) -
                p_over_q * *(b + 332 * OS1_S1 + 30) +
                one_over_two_q * *(b + 211 * OS1_S1 + 30);
            *(b + 266 * OS1_S1 + 46) =
                prefactor_z * *(b + 266 * OS1_S1 + 26) -
                p_over_q * *(b + 343 * OS1_S1 + 26) +
                one_over_two_q * *(b + 201 * OS1_S1 + 26);
            *(b + 266 * OS1_S1 + 47) =
                prefactor_x * *(b + 266 * OS1_S1 + 32) -
                p_over_q * *(b + 332 * OS1_S1 + 32) +
                one_over_two_q * *(b + 211 * OS1_S1 + 32);
            *(b + 266 * OS1_S1 + 48) =
                prefactor_x * *(b + 266 * OS1_S1 + 33) -
                p_over_q * *(b + 332 * OS1_S1 + 33) +
                one_over_two_q * *(b + 211 * OS1_S1 + 33);
            *(b + 266 * OS1_S1 + 49) =
                prefactor_x * *(b + 266 * OS1_S1 + 34) -
                p_over_q * *(b + 332 * OS1_S1 + 34) +
                one_over_two_q * *(b + 211 * OS1_S1 + 34);
            *(b + 266 * OS1_S1 + 50) =
                prefactor_y * *(b + 266 * OS1_S1 + 30) -
                p_over_q * *(b + 342 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 266 * OS1_S1 + 16);
            *(b + 266 * OS1_S1 + 51) =
                prefactor_z * *(b + 266 * OS1_S1 + 30) -
                p_over_q * *(b + 343 * OS1_S1 + 30) +
                one_over_two_q * *(b + 201 * OS1_S1 + 30);
            *(b + 266 * OS1_S1 + 52) =
                prefactor_z * *(b + 266 * OS1_S1 + 31) -
                p_over_q * *(b + 343 * OS1_S1 + 31) +
                one_over_two_q * *(b + 201 * OS1_S1 + 31) +
                one_over_two_q * *(b + 266 * OS1_S1 + 16);
            *(b + 266 * OS1_S1 + 53) =
                prefactor_y * *(b + 266 * OS1_S1 + 33) -
                p_over_q * *(b + 342 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 33) +
                one_over_two_q * *(b + 266 * OS1_S1 + 19);
            *(b + 266 * OS1_S1 + 54) =
                prefactor_y * *(b + 266 * OS1_S1 + 34) -
                p_over_q * *(b + 342 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 202 * OS1_S1 + 34);
            *(b + 266 * OS1_S1 + 55) =
                prefactor_z * *(b + 266 * OS1_S1 + 34) -
                p_over_q * *(b + 343 * OS1_S1 + 34) +
                one_over_two_q * *(b + 201 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 266 * OS1_S1 + 19);
            *(b + 267 * OS1_S1 + 35) =
                prefactor_x * *(b + 267 * OS1_S1 + 20) -
                p_over_q * *(b + 333 * OS1_S1 + 20) +
                one_over_two_q * *(b + 212 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 267 * OS1_S1 + 10);
            *(b + 267 * OS1_S1 + 36) =
                prefactor_y * *(b + 267 * OS1_S1 + 20) -
                p_over_q * *(b + 343 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 20);
            *(b + 267 * OS1_S1 + 37) =
                prefactor_z * *(b + 267 * OS1_S1 + 20) -
                p_over_q * *(b + 344 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 20);
            *(b + 267 * OS1_S1 + 38) =
                prefactor_y * *(b + 267 * OS1_S1 + 21) -
                p_over_q * *(b + 343 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 21) +
                one_over_two_q * *(b + 267 * OS1_S1 + 10);
            *(b + 267 * OS1_S1 + 39) =
                prefactor_z * *(b + 267 * OS1_S1 + 21) -
                p_over_q * *(b + 344 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 21);
            *(b + 267 * OS1_S1 + 40) =
                prefactor_z * *(b + 267 * OS1_S1 + 22) -
                p_over_q * *(b + 344 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 22) +
                one_over_two_q * *(b + 267 * OS1_S1 + 10);
            *(b + 267 * OS1_S1 + 41) =
                prefactor_x * *(b + 267 * OS1_S1 + 26) -
                p_over_q * *(b + 333 * OS1_S1 + 26) +
                one_over_two_q * *(b + 212 * OS1_S1 + 26) +
                one_over_two_q * *(b + 267 * OS1_S1 + 16);
            *(b + 267 * OS1_S1 + 42) =
                prefactor_z * *(b + 267 * OS1_S1 + 23) -
                p_over_q * *(b + 344 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 23);
            *(b + 267 * OS1_S1 + 43) =
                prefactor_y * *(b + 267 * OS1_S1 + 25) -
                p_over_q * *(b + 343 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 25);
            *(b + 267 * OS1_S1 + 44) =
                prefactor_x * *(b + 267 * OS1_S1 + 29) -
                p_over_q * *(b + 333 * OS1_S1 + 29) +
                one_over_two_q * *(b + 212 * OS1_S1 + 29) +
                one_over_two_q * *(b + 267 * OS1_S1 + 19);
            *(b + 267 * OS1_S1 + 45) =
                prefactor_x * *(b + 267 * OS1_S1 + 30) -
                p_over_q * *(b + 333 * OS1_S1 + 30) +
                one_over_two_q * *(b + 212 * OS1_S1 + 30);
            *(b + 267 * OS1_S1 + 46) =
                prefactor_x * *(b + 267 * OS1_S1 + 31) -
                p_over_q * *(b + 333 * OS1_S1 + 31) +
                one_over_two_q * *(b + 212 * OS1_S1 + 31);
            *(b + 267 * OS1_S1 + 47) =
                prefactor_x * *(b + 267 * OS1_S1 + 32) -
                p_over_q * *(b + 333 * OS1_S1 + 32) +
                one_over_two_q * *(b + 212 * OS1_S1 + 32);
            *(b + 267 * OS1_S1 + 48) =
                prefactor_x * *(b + 267 * OS1_S1 + 33) -
                p_over_q * *(b + 333 * OS1_S1 + 33) +
                one_over_two_q * *(b + 212 * OS1_S1 + 33);
            *(b + 267 * OS1_S1 + 49) =
                prefactor_x * *(b + 267 * OS1_S1 + 34) -
                p_over_q * *(b + 333 * OS1_S1 + 34) +
                one_over_two_q * *(b + 212 * OS1_S1 + 34);
            *(b + 267 * OS1_S1 + 50) =
                prefactor_y * *(b + 267 * OS1_S1 + 30) -
                p_over_q * *(b + 343 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 267 * OS1_S1 + 16);
            *(b + 267 * OS1_S1 + 51) =
                prefactor_z * *(b + 267 * OS1_S1 + 30) -
                p_over_q * *(b + 344 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 30);
            *(b + 267 * OS1_S1 + 52) =
                prefactor_z * *(b + 267 * OS1_S1 + 31) -
                p_over_q * *(b + 344 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 31) +
                one_over_two_q * *(b + 267 * OS1_S1 + 16);
            *(b + 267 * OS1_S1 + 53) =
                prefactor_y * *(b + 267 * OS1_S1 + 33) -
                p_over_q * *(b + 343 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 33) +
                one_over_two_q * *(b + 267 * OS1_S1 + 19);
            *(b + 267 * OS1_S1 + 54) =
                prefactor_y * *(b + 267 * OS1_S1 + 34) -
                p_over_q * *(b + 343 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 203 * OS1_S1 + 34);
            *(b + 267 * OS1_S1 + 55) =
                prefactor_z * *(b + 267 * OS1_S1 + 34) -
                p_over_q * *(b + 344 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 202 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 267 * OS1_S1 + 19);
            *(b + 268 * OS1_S1 + 35) =
                prefactor_x * *(b + 268 * OS1_S1 + 20) -
                p_over_q * *(b + 334 * OS1_S1 + 20) +
                one_over_two_q * *(b + 213 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 10);
            *(b + 268 * OS1_S1 + 36) =
                prefactor_y * *(b + 268 * OS1_S1 + 20) -
                p_over_q * *(b + 344 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 20);
            *(b + 268 * OS1_S1 + 37) =
                prefactor_z * *(b + 268 * OS1_S1 + 20) -
                p_over_q * *(b + 345 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 20);
            *(b + 268 * OS1_S1 + 38) =
                prefactor_y * *(b + 268 * OS1_S1 + 21) -
                p_over_q * *(b + 344 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 21) +
                one_over_two_q * *(b + 268 * OS1_S1 + 10);
            *(b + 268 * OS1_S1 + 39) =
                prefactor_z * *(b + 268 * OS1_S1 + 21) -
                p_over_q * *(b + 345 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 21);
            *(b + 268 * OS1_S1 + 40) =
                prefactor_z * *(b + 268 * OS1_S1 + 22) -
                p_over_q * *(b + 345 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 22) +
                one_over_two_q * *(b + 268 * OS1_S1 + 10);
            *(b + 268 * OS1_S1 + 41) =
                prefactor_x * *(b + 268 * OS1_S1 + 26) -
                p_over_q * *(b + 334 * OS1_S1 + 26) +
                one_over_two_q * *(b + 213 * OS1_S1 + 26) +
                one_over_two_q * *(b + 268 * OS1_S1 + 16);
            *(b + 268 * OS1_S1 + 42) =
                prefactor_z * *(b + 268 * OS1_S1 + 23) -
                p_over_q * *(b + 345 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 23);
            *(b + 268 * OS1_S1 + 43) =
                prefactor_y * *(b + 268 * OS1_S1 + 25) -
                p_over_q * *(b + 344 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 25);
            *(b + 268 * OS1_S1 + 44) =
                prefactor_x * *(b + 268 * OS1_S1 + 29) -
                p_over_q * *(b + 334 * OS1_S1 + 29) +
                one_over_two_q * *(b + 213 * OS1_S1 + 29) +
                one_over_two_q * *(b + 268 * OS1_S1 + 19);
            *(b + 268 * OS1_S1 + 45) =
                prefactor_x * *(b + 268 * OS1_S1 + 30) -
                p_over_q * *(b + 334 * OS1_S1 + 30) +
                one_over_two_q * *(b + 213 * OS1_S1 + 30);
            *(b + 268 * OS1_S1 + 46) =
                prefactor_x * *(b + 268 * OS1_S1 + 31) -
                p_over_q * *(b + 334 * OS1_S1 + 31) +
                one_over_two_q * *(b + 213 * OS1_S1 + 31);
            *(b + 268 * OS1_S1 + 47) =
                prefactor_x * *(b + 268 * OS1_S1 + 32) -
                p_over_q * *(b + 334 * OS1_S1 + 32) +
                one_over_two_q * *(b + 213 * OS1_S1 + 32);
            *(b + 268 * OS1_S1 + 48) =
                prefactor_x * *(b + 268 * OS1_S1 + 33) -
                p_over_q * *(b + 334 * OS1_S1 + 33) +
                one_over_two_q * *(b + 213 * OS1_S1 + 33);
            *(b + 268 * OS1_S1 + 49) =
                prefactor_x * *(b + 268 * OS1_S1 + 34) -
                p_over_q * *(b + 334 * OS1_S1 + 34) +
                one_over_two_q * *(b + 213 * OS1_S1 + 34);
            *(b + 268 * OS1_S1 + 50) =
                prefactor_y * *(b + 268 * OS1_S1 + 30) -
                p_over_q * *(b + 344 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 16);
            *(b + 268 * OS1_S1 + 51) =
                prefactor_z * *(b + 268 * OS1_S1 + 30) -
                p_over_q * *(b + 345 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 30);
            *(b + 268 * OS1_S1 + 52) =
                prefactor_z * *(b + 268 * OS1_S1 + 31) -
                p_over_q * *(b + 345 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 31) +
                one_over_two_q * *(b + 268 * OS1_S1 + 16);
            *(b + 268 * OS1_S1 + 53) =
                prefactor_y * *(b + 268 * OS1_S1 + 33) -
                p_over_q * *(b + 344 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 33) +
                one_over_two_q * *(b + 268 * OS1_S1 + 19);
            *(b + 268 * OS1_S1 + 54) =
                prefactor_y * *(b + 268 * OS1_S1 + 34) -
                p_over_q * *(b + 344 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 204 * OS1_S1 + 34);
            *(b + 268 * OS1_S1 + 55) =
                prefactor_z * *(b + 268 * OS1_S1 + 34) -
                p_over_q * *(b + 345 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 203 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 19);
            *(b + 269 * OS1_S1 + 35) =
                prefactor_x * *(b + 269 * OS1_S1 + 20) -
                p_over_q * *(b + 335 * OS1_S1 + 20) +
                one_over_two_q * *(b + 214 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 269 * OS1_S1 + 10);
            *(b + 269 * OS1_S1 + 36) =
                prefactor_y * *(b + 269 * OS1_S1 + 20) -
                p_over_q * *(b + 345 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 20);
            *(b + 269 * OS1_S1 + 37) =
                prefactor_z * *(b + 269 * OS1_S1 + 20) -
                p_over_q * *(b + 346 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 20);
            *(b + 269 * OS1_S1 + 38) =
                prefactor_y * *(b + 269 * OS1_S1 + 21) -
                p_over_q * *(b + 345 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 21) +
                one_over_two_q * *(b + 269 * OS1_S1 + 10);
            *(b + 269 * OS1_S1 + 39) =
                prefactor_z * *(b + 269 * OS1_S1 + 21) -
                p_over_q * *(b + 346 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 21);
            *(b + 269 * OS1_S1 + 40) =
                prefactor_z * *(b + 269 * OS1_S1 + 22) -
                p_over_q * *(b + 346 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 22) +
                one_over_two_q * *(b + 269 * OS1_S1 + 10);
            *(b + 269 * OS1_S1 + 41) =
                prefactor_x * *(b + 269 * OS1_S1 + 26) -
                p_over_q * *(b + 335 * OS1_S1 + 26) +
                one_over_two_q * *(b + 214 * OS1_S1 + 26) +
                one_over_two_q * *(b + 269 * OS1_S1 + 16);
            *(b + 269 * OS1_S1 + 42) =
                prefactor_z * *(b + 269 * OS1_S1 + 23) -
                p_over_q * *(b + 346 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 23);
            *(b + 269 * OS1_S1 + 43) =
                prefactor_y * *(b + 269 * OS1_S1 + 25) -
                p_over_q * *(b + 345 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 25);
            *(b + 269 * OS1_S1 + 44) =
                prefactor_x * *(b + 269 * OS1_S1 + 29) -
                p_over_q * *(b + 335 * OS1_S1 + 29) +
                one_over_two_q * *(b + 214 * OS1_S1 + 29) +
                one_over_two_q * *(b + 269 * OS1_S1 + 19);
            *(b + 269 * OS1_S1 + 45) =
                prefactor_x * *(b + 269 * OS1_S1 + 30) -
                p_over_q * *(b + 335 * OS1_S1 + 30) +
                one_over_two_q * *(b + 214 * OS1_S1 + 30);
            *(b + 269 * OS1_S1 + 46) =
                prefactor_x * *(b + 269 * OS1_S1 + 31) -
                p_over_q * *(b + 335 * OS1_S1 + 31) +
                one_over_two_q * *(b + 214 * OS1_S1 + 31);
            *(b + 269 * OS1_S1 + 47) =
                prefactor_x * *(b + 269 * OS1_S1 + 32) -
                p_over_q * *(b + 335 * OS1_S1 + 32) +
                one_over_two_q * *(b + 214 * OS1_S1 + 32);
            *(b + 269 * OS1_S1 + 48) =
                prefactor_x * *(b + 269 * OS1_S1 + 33) -
                p_over_q * *(b + 335 * OS1_S1 + 33) +
                one_over_two_q * *(b + 214 * OS1_S1 + 33);
            *(b + 269 * OS1_S1 + 49) =
                prefactor_x * *(b + 269 * OS1_S1 + 34) -
                p_over_q * *(b + 335 * OS1_S1 + 34) +
                one_over_two_q * *(b + 214 * OS1_S1 + 34);
            *(b + 269 * OS1_S1 + 50) =
                prefactor_y * *(b + 269 * OS1_S1 + 30) -
                p_over_q * *(b + 345 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 269 * OS1_S1 + 16);
            *(b + 269 * OS1_S1 + 51) =
                prefactor_z * *(b + 269 * OS1_S1 + 30) -
                p_over_q * *(b + 346 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 30);
            *(b + 269 * OS1_S1 + 52) =
                prefactor_z * *(b + 269 * OS1_S1 + 31) -
                p_over_q * *(b + 346 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 31) +
                one_over_two_q * *(b + 269 * OS1_S1 + 16);
            *(b + 269 * OS1_S1 + 53) =
                prefactor_y * *(b + 269 * OS1_S1 + 33) -
                p_over_q * *(b + 345 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 33) +
                one_over_two_q * *(b + 269 * OS1_S1 + 19);
            *(b + 269 * OS1_S1 + 54) =
                prefactor_y * *(b + 269 * OS1_S1 + 34) -
                p_over_q * *(b + 345 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 34);
            *(b + 269 * OS1_S1 + 55) =
                prefactor_z * *(b + 269 * OS1_S1 + 34) -
                p_over_q * *(b + 346 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 204 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 269 * OS1_S1 + 19);
            *(b + 270 * OS1_S1 + 35) =
                prefactor_x * *(b + 270 * OS1_S1 + 20) -
                p_over_q * *(b + 336 * OS1_S1 + 20) +
                one_over_two_q * *(b + 215 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 270 * OS1_S1 + 10);
            *(b + 270 * OS1_S1 + 36) =
                prefactor_y * *(b + 270 * OS1_S1 + 20) -
                p_over_q * *(b + 346 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 20);
            *(b + 270 * OS1_S1 + 37) =
                prefactor_z * *(b + 270 * OS1_S1 + 20) -
                p_over_q * *(b + 347 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 20);
            *(b + 270 * OS1_S1 + 38) =
                prefactor_y * *(b + 270 * OS1_S1 + 21) -
                p_over_q * *(b + 346 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 21) +
                one_over_two_q * *(b + 270 * OS1_S1 + 10);
            *(b + 270 * OS1_S1 + 39) =
                prefactor_y * *(b + 270 * OS1_S1 + 22) -
                p_over_q * *(b + 346 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 22);
            *(b + 270 * OS1_S1 + 40) =
                prefactor_z * *(b + 270 * OS1_S1 + 22) -
                p_over_q * *(b + 347 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 22) +
                one_over_two_q * *(b + 270 * OS1_S1 + 10);
            *(b + 270 * OS1_S1 + 41) =
                prefactor_x * *(b + 270 * OS1_S1 + 26) -
                p_over_q * *(b + 336 * OS1_S1 + 26) +
                one_over_two_q * *(b + 215 * OS1_S1 + 26) +
                one_over_two_q * *(b + 270 * OS1_S1 + 16);
            *(b + 270 * OS1_S1 + 42) =
                prefactor_z * *(b + 270 * OS1_S1 + 23) -
                p_over_q * *(b + 347 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 23);
            *(b + 270 * OS1_S1 + 43) =
                prefactor_y * *(b + 270 * OS1_S1 + 25) -
                p_over_q * *(b + 346 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 25);
            *(b + 270 * OS1_S1 + 44) =
                prefactor_x * *(b + 270 * OS1_S1 + 29) -
                p_over_q * *(b + 336 * OS1_S1 + 29) +
                one_over_two_q * *(b + 215 * OS1_S1 + 29) +
                one_over_two_q * *(b + 270 * OS1_S1 + 19);
            *(b + 270 * OS1_S1 + 45) =
                prefactor_x * *(b + 270 * OS1_S1 + 30) -
                p_over_q * *(b + 336 * OS1_S1 + 30) +
                one_over_two_q * *(b + 215 * OS1_S1 + 30);
            *(b + 270 * OS1_S1 + 46) =
                prefactor_x * *(b + 270 * OS1_S1 + 31) -
                p_over_q * *(b + 336 * OS1_S1 + 31) +
                one_over_two_q * *(b + 215 * OS1_S1 + 31);
            *(b + 270 * OS1_S1 + 47) =
                prefactor_x * *(b + 270 * OS1_S1 + 32) -
                p_over_q * *(b + 336 * OS1_S1 + 32) +
                one_over_two_q * *(b + 215 * OS1_S1 + 32);
            *(b + 270 * OS1_S1 + 48) =
                prefactor_x * *(b + 270 * OS1_S1 + 33) -
                p_over_q * *(b + 336 * OS1_S1 + 33) +
                one_over_two_q * *(b + 215 * OS1_S1 + 33);
            *(b + 270 * OS1_S1 + 49) =
                prefactor_x * *(b + 270 * OS1_S1 + 34) -
                p_over_q * *(b + 336 * OS1_S1 + 34) +
                one_over_two_q * *(b + 215 * OS1_S1 + 34);
            *(b + 270 * OS1_S1 + 50) =
                prefactor_y * *(b + 270 * OS1_S1 + 30) -
                p_over_q * *(b + 346 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 270 * OS1_S1 + 16);
            *(b + 270 * OS1_S1 + 51) =
                prefactor_z * *(b + 270 * OS1_S1 + 30) -
                p_over_q * *(b + 347 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 30);
            *(b + 270 * OS1_S1 + 52) =
                prefactor_z * *(b + 270 * OS1_S1 + 31) -
                p_over_q * *(b + 347 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 31) +
                one_over_two_q * *(b + 270 * OS1_S1 + 16);
            *(b + 270 * OS1_S1 + 53) =
                prefactor_y * *(b + 270 * OS1_S1 + 33) -
                p_over_q * *(b + 346 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 33) +
                one_over_two_q * *(b + 270 * OS1_S1 + 19);
            *(b + 270 * OS1_S1 + 54) =
                prefactor_y * *(b + 270 * OS1_S1 + 34) -
                p_over_q * *(b + 346 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 206 * OS1_S1 + 34);
            *(b + 270 * OS1_S1 + 55) =
                prefactor_z * *(b + 270 * OS1_S1 + 34) -
                p_over_q * *(b + 347 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 205 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 270 * OS1_S1 + 19);
            *(b + 271 * OS1_S1 + 35) =
                prefactor_x * *(b + 271 * OS1_S1 + 20) -
                p_over_q * *(b + 337 * OS1_S1 + 20) +
                one_over_two_q * *(b + 216 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 10);
            *(b + 271 * OS1_S1 + 36) =
                prefactor_y * *(b + 271 * OS1_S1 + 20) -
                p_over_q * *(b + 347 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 20);
            *(b + 271 * OS1_S1 + 37) =
                prefactor_z * *(b + 271 * OS1_S1 + 20) -
                p_over_q * *(b + 348 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 20);
            *(b + 271 * OS1_S1 + 38) =
                prefactor_y * *(b + 271 * OS1_S1 + 21) -
                p_over_q * *(b + 347 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 21) +
                one_over_two_q * *(b + 271 * OS1_S1 + 10);
            *(b + 271 * OS1_S1 + 39) =
                prefactor_y * *(b + 271 * OS1_S1 + 22) -
                p_over_q * *(b + 347 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 22);
            *(b + 271 * OS1_S1 + 40) =
                prefactor_z * *(b + 271 * OS1_S1 + 22) -
                p_over_q * *(b + 348 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 22) +
                one_over_two_q * *(b + 271 * OS1_S1 + 10);
            *(b + 271 * OS1_S1 + 41) =
                prefactor_x * *(b + 271 * OS1_S1 + 26) -
                p_over_q * *(b + 337 * OS1_S1 + 26) +
                one_over_two_q * *(b + 216 * OS1_S1 + 26) +
                one_over_two_q * *(b + 271 * OS1_S1 + 16);
            *(b + 271 * OS1_S1 + 42) =
                prefactor_z * *(b + 271 * OS1_S1 + 23) -
                p_over_q * *(b + 348 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 23);
            *(b + 271 * OS1_S1 + 43) =
                prefactor_y * *(b + 271 * OS1_S1 + 25) -
                p_over_q * *(b + 347 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 25);
            *(b + 271 * OS1_S1 + 44) =
                prefactor_x * *(b + 271 * OS1_S1 + 29) -
                p_over_q * *(b + 337 * OS1_S1 + 29) +
                one_over_two_q * *(b + 216 * OS1_S1 + 29) +
                one_over_two_q * *(b + 271 * OS1_S1 + 19);
            *(b + 271 * OS1_S1 + 45) =
                prefactor_x * *(b + 271 * OS1_S1 + 30) -
                p_over_q * *(b + 337 * OS1_S1 + 30) +
                one_over_two_q * *(b + 216 * OS1_S1 + 30);
            *(b + 271 * OS1_S1 + 46) =
                prefactor_x * *(b + 271 * OS1_S1 + 31) -
                p_over_q * *(b + 337 * OS1_S1 + 31) +
                one_over_two_q * *(b + 216 * OS1_S1 + 31);
            *(b + 271 * OS1_S1 + 47) =
                prefactor_x * *(b + 271 * OS1_S1 + 32) -
                p_over_q * *(b + 337 * OS1_S1 + 32) +
                one_over_two_q * *(b + 216 * OS1_S1 + 32);
            *(b + 271 * OS1_S1 + 48) =
                prefactor_x * *(b + 271 * OS1_S1 + 33) -
                p_over_q * *(b + 337 * OS1_S1 + 33) +
                one_over_two_q * *(b + 216 * OS1_S1 + 33);
            *(b + 271 * OS1_S1 + 49) =
                prefactor_x * *(b + 271 * OS1_S1 + 34) -
                p_over_q * *(b + 337 * OS1_S1 + 34) +
                one_over_two_q * *(b + 216 * OS1_S1 + 34);
            *(b + 271 * OS1_S1 + 50) =
                prefactor_y * *(b + 271 * OS1_S1 + 30) -
                p_over_q * *(b + 347 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 16);
            *(b + 271 * OS1_S1 + 51) =
                prefactor_z * *(b + 271 * OS1_S1 + 30) -
                p_over_q * *(b + 348 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 30);
            *(b + 271 * OS1_S1 + 52) =
                prefactor_z * *(b + 271 * OS1_S1 + 31) -
                p_over_q * *(b + 348 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 31) +
                one_over_two_q * *(b + 271 * OS1_S1 + 16);
            *(b + 271 * OS1_S1 + 53) =
                prefactor_y * *(b + 271 * OS1_S1 + 33) -
                p_over_q * *(b + 347 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 33) +
                one_over_two_q * *(b + 271 * OS1_S1 + 19);
            *(b + 271 * OS1_S1 + 54) =
                prefactor_y * *(b + 271 * OS1_S1 + 34) -
                p_over_q * *(b + 347 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 207 * OS1_S1 + 34);
            *(b + 271 * OS1_S1 + 55) =
                prefactor_z * *(b + 271 * OS1_S1 + 34) -
                p_over_q * *(b + 348 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 206 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 19);
            *(b + 272 * OS1_S1 + 35) =
                prefactor_x * *(b + 272 * OS1_S1 + 20) -
                p_over_q * *(b + 338 * OS1_S1 + 20) +
                one_over_two_q * *(b + 217 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 272 * OS1_S1 + 10);
            *(b + 272 * OS1_S1 + 36) =
                prefactor_y * *(b + 272 * OS1_S1 + 20) -
                p_over_q * *(b + 348 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 20);
            *(b + 272 * OS1_S1 + 37) =
                prefactor_z * *(b + 272 * OS1_S1 + 20) -
                p_over_q * *(b + 349 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 20);
            *(b + 272 * OS1_S1 + 38) =
                prefactor_y * *(b + 272 * OS1_S1 + 21) -
                p_over_q * *(b + 348 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 21) +
                one_over_two_q * *(b + 272 * OS1_S1 + 10);
            *(b + 272 * OS1_S1 + 39) =
                prefactor_y * *(b + 272 * OS1_S1 + 22) -
                p_over_q * *(b + 348 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 22);
            *(b + 272 * OS1_S1 + 40) =
                prefactor_z * *(b + 272 * OS1_S1 + 22) -
                p_over_q * *(b + 349 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 22) +
                one_over_two_q * *(b + 272 * OS1_S1 + 10);
            *(b + 272 * OS1_S1 + 41) =
                prefactor_x * *(b + 272 * OS1_S1 + 26) -
                p_over_q * *(b + 338 * OS1_S1 + 26) +
                one_over_two_q * *(b + 217 * OS1_S1 + 26) +
                one_over_two_q * *(b + 272 * OS1_S1 + 16);
            *(b + 272 * OS1_S1 + 42) =
                prefactor_z * *(b + 272 * OS1_S1 + 23) -
                p_over_q * *(b + 349 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 23);
            *(b + 272 * OS1_S1 + 43) =
                prefactor_y * *(b + 272 * OS1_S1 + 25) -
                p_over_q * *(b + 348 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 25);
            *(b + 272 * OS1_S1 + 44) =
                prefactor_x * *(b + 272 * OS1_S1 + 29) -
                p_over_q * *(b + 338 * OS1_S1 + 29) +
                one_over_two_q * *(b + 217 * OS1_S1 + 29) +
                one_over_two_q * *(b + 272 * OS1_S1 + 19);
            *(b + 272 * OS1_S1 + 45) =
                prefactor_x * *(b + 272 * OS1_S1 + 30) -
                p_over_q * *(b + 338 * OS1_S1 + 30) +
                one_over_two_q * *(b + 217 * OS1_S1 + 30);
            *(b + 272 * OS1_S1 + 46) =
                prefactor_x * *(b + 272 * OS1_S1 + 31) -
                p_over_q * *(b + 338 * OS1_S1 + 31) +
                one_over_two_q * *(b + 217 * OS1_S1 + 31);
            *(b + 272 * OS1_S1 + 47) =
                prefactor_x * *(b + 272 * OS1_S1 + 32) -
                p_over_q * *(b + 338 * OS1_S1 + 32) +
                one_over_two_q * *(b + 217 * OS1_S1 + 32);
            *(b + 272 * OS1_S1 + 48) =
                prefactor_x * *(b + 272 * OS1_S1 + 33) -
                p_over_q * *(b + 338 * OS1_S1 + 33) +
                one_over_two_q * *(b + 217 * OS1_S1 + 33);
            *(b + 272 * OS1_S1 + 49) =
                prefactor_x * *(b + 272 * OS1_S1 + 34) -
                p_over_q * *(b + 338 * OS1_S1 + 34) +
                one_over_two_q * *(b + 217 * OS1_S1 + 34);
            *(b + 272 * OS1_S1 + 50) =
                prefactor_y * *(b + 272 * OS1_S1 + 30) -
                p_over_q * *(b + 348 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 272 * OS1_S1 + 16);
            *(b + 272 * OS1_S1 + 51) =
                prefactor_z * *(b + 272 * OS1_S1 + 30) -
                p_over_q * *(b + 349 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 30);
            *(b + 272 * OS1_S1 + 52) =
                prefactor_z * *(b + 272 * OS1_S1 + 31) -
                p_over_q * *(b + 349 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 31) +
                one_over_two_q * *(b + 272 * OS1_S1 + 16);
            *(b + 272 * OS1_S1 + 53) =
                prefactor_y * *(b + 272 * OS1_S1 + 33) -
                p_over_q * *(b + 348 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 33) +
                one_over_two_q * *(b + 272 * OS1_S1 + 19);
            *(b + 272 * OS1_S1 + 54) =
                prefactor_y * *(b + 272 * OS1_S1 + 34) -
                p_over_q * *(b + 348 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 208 * OS1_S1 + 34);
            *(b + 272 * OS1_S1 + 55) =
                prefactor_z * *(b + 272 * OS1_S1 + 34) -
                p_over_q * *(b + 349 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 207 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 272 * OS1_S1 + 19);
            *(b + 273 * OS1_S1 + 35) =
                prefactor_x * *(b + 273 * OS1_S1 + 20) -
                p_over_q * *(b + 339 * OS1_S1 + 20) +
                one_over_two_q * *(b + 218 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 273 * OS1_S1 + 10);
            *(b + 273 * OS1_S1 + 36) =
                prefactor_y * *(b + 273 * OS1_S1 + 20) -
                p_over_q * *(b + 349 * OS1_S1 + 20) +
                one_over_two_q * *(b + 209 * OS1_S1 + 20);
            *(b + 273 * OS1_S1 + 37) =
                prefactor_z * *(b + 273 * OS1_S1 + 20) -
                p_over_q * *(b + 350 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 20);
            *(b + 273 * OS1_S1 + 38) =
                prefactor_y * *(b + 273 * OS1_S1 + 21) -
                p_over_q * *(b + 349 * OS1_S1 + 21) +
                one_over_two_q * *(b + 209 * OS1_S1 + 21) +
                one_over_two_q * *(b + 273 * OS1_S1 + 10);
            *(b + 273 * OS1_S1 + 39) =
                prefactor_y * *(b + 273 * OS1_S1 + 22) -
                p_over_q * *(b + 349 * OS1_S1 + 22) +
                one_over_two_q * *(b + 209 * OS1_S1 + 22);
            *(b + 273 * OS1_S1 + 40) =
                prefactor_z * *(b + 273 * OS1_S1 + 22) -
                p_over_q * *(b + 350 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 22) +
                one_over_two_q * *(b + 273 * OS1_S1 + 10);
            *(b + 273 * OS1_S1 + 41) =
                prefactor_x * *(b + 273 * OS1_S1 + 26) -
                p_over_q * *(b + 339 * OS1_S1 + 26) +
                one_over_two_q * *(b + 218 * OS1_S1 + 26) +
                one_over_two_q * *(b + 273 * OS1_S1 + 16);
            *(b + 273 * OS1_S1 + 42) =
                prefactor_z * *(b + 273 * OS1_S1 + 23) -
                p_over_q * *(b + 350 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 23);
            *(b + 273 * OS1_S1 + 43) =
                prefactor_y * *(b + 273 * OS1_S1 + 25) -
                p_over_q * *(b + 349 * OS1_S1 + 25) +
                one_over_two_q * *(b + 209 * OS1_S1 + 25);
            *(b + 273 * OS1_S1 + 44) =
                prefactor_x * *(b + 273 * OS1_S1 + 29) -
                p_over_q * *(b + 339 * OS1_S1 + 29) +
                one_over_two_q * *(b + 218 * OS1_S1 + 29) +
                one_over_two_q * *(b + 273 * OS1_S1 + 19);
            *(b + 273 * OS1_S1 + 45) =
                prefactor_x * *(b + 273 * OS1_S1 + 30) -
                p_over_q * *(b + 339 * OS1_S1 + 30) +
                one_over_two_q * *(b + 218 * OS1_S1 + 30);
            *(b + 273 * OS1_S1 + 46) =
                prefactor_x * *(b + 273 * OS1_S1 + 31) -
                p_over_q * *(b + 339 * OS1_S1 + 31) +
                one_over_two_q * *(b + 218 * OS1_S1 + 31);
            *(b + 273 * OS1_S1 + 47) =
                prefactor_x * *(b + 273 * OS1_S1 + 32) -
                p_over_q * *(b + 339 * OS1_S1 + 32) +
                one_over_two_q * *(b + 218 * OS1_S1 + 32);
            *(b + 273 * OS1_S1 + 48) =
                prefactor_y * *(b + 273 * OS1_S1 + 29) -
                p_over_q * *(b + 349 * OS1_S1 + 29) +
                one_over_two_q * *(b + 209 * OS1_S1 + 29);
            *(b + 273 * OS1_S1 + 49) =
                prefactor_x * *(b + 273 * OS1_S1 + 34) -
                p_over_q * *(b + 339 * OS1_S1 + 34) +
                one_over_two_q * *(b + 218 * OS1_S1 + 34);
            *(b + 273 * OS1_S1 + 50) =
                prefactor_y * *(b + 273 * OS1_S1 + 30) -
                p_over_q * *(b + 349 * OS1_S1 + 30) +
                one_over_two_q * *(b + 209 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 273 * OS1_S1 + 16);
            *(b + 273 * OS1_S1 + 51) =
                prefactor_z * *(b + 273 * OS1_S1 + 30) -
                p_over_q * *(b + 350 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 30);
            *(b + 273 * OS1_S1 + 52) =
                prefactor_z * *(b + 273 * OS1_S1 + 31) -
                p_over_q * *(b + 350 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 31) +
                one_over_two_q * *(b + 273 * OS1_S1 + 16);
            *(b + 273 * OS1_S1 + 53) =
                prefactor_y * *(b + 273 * OS1_S1 + 33) -
                p_over_q * *(b + 349 * OS1_S1 + 33) +
                one_over_two_q * *(b + 209 * OS1_S1 + 33) +
                one_over_two_q * *(b + 273 * OS1_S1 + 19);
            *(b + 273 * OS1_S1 + 54) =
                prefactor_y * *(b + 273 * OS1_S1 + 34) -
                p_over_q * *(b + 349 * OS1_S1 + 34) +
                one_over_two_q * *(b + 209 * OS1_S1 + 34);
            *(b + 273 * OS1_S1 + 55) =
                prefactor_z * *(b + 273 * OS1_S1 + 34) -
                p_over_q * *(b + 350 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 208 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 273 * OS1_S1 + 19);
            *(b + 274 * OS1_S1 + 35) =
                prefactor_x * *(b + 274 * OS1_S1 + 20) -
                p_over_q * *(b + 340 * OS1_S1 + 20) +
                one_over_two_q * *(b + 219 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 274 * OS1_S1 + 10);
            *(b + 274 * OS1_S1 + 36) = prefactor_y * *(b + 274 * OS1_S1 + 20) -
                                       p_over_q * *(b + 350 * OS1_S1 + 20);
            *(b + 274 * OS1_S1 + 37) =
                prefactor_z * *(b + 274 * OS1_S1 + 20) -
                p_over_q * *(b + 351 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 20);
            *(b + 274 * OS1_S1 + 38) =
                prefactor_y * *(b + 274 * OS1_S1 + 21) -
                p_over_q * *(b + 350 * OS1_S1 + 21) +
                one_over_two_q * *(b + 274 * OS1_S1 + 10);
            *(b + 274 * OS1_S1 + 39) = prefactor_y * *(b + 274 * OS1_S1 + 22) -
                                       p_over_q * *(b + 350 * OS1_S1 + 22);
            *(b + 274 * OS1_S1 + 40) =
                prefactor_z * *(b + 274 * OS1_S1 + 22) -
                p_over_q * *(b + 351 * OS1_S1 + 22) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 22) +
                one_over_two_q * *(b + 274 * OS1_S1 + 10);
            *(b + 274 * OS1_S1 + 41) =
                prefactor_x * *(b + 274 * OS1_S1 + 26) -
                p_over_q * *(b + 340 * OS1_S1 + 26) +
                one_over_two_q * *(b + 219 * OS1_S1 + 26) +
                one_over_two_q * *(b + 274 * OS1_S1 + 16);
            *(b + 274 * OS1_S1 + 42) =
                prefactor_z * *(b + 274 * OS1_S1 + 23) -
                p_over_q * *(b + 351 * OS1_S1 + 23) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 23);
            *(b + 274 * OS1_S1 + 43) = prefactor_y * *(b + 274 * OS1_S1 + 25) -
                                       p_over_q * *(b + 350 * OS1_S1 + 25);
            *(b + 274 * OS1_S1 + 44) =
                prefactor_x * *(b + 274 * OS1_S1 + 29) -
                p_over_q * *(b + 340 * OS1_S1 + 29) +
                one_over_two_q * *(b + 219 * OS1_S1 + 29) +
                one_over_two_q * *(b + 274 * OS1_S1 + 19);
            *(b + 274 * OS1_S1 + 45) =
                prefactor_x * *(b + 274 * OS1_S1 + 30) -
                p_over_q * *(b + 340 * OS1_S1 + 30) +
                one_over_two_q * *(b + 219 * OS1_S1 + 30);
            *(b + 274 * OS1_S1 + 46) =
                prefactor_x * *(b + 274 * OS1_S1 + 31) -
                p_over_q * *(b + 340 * OS1_S1 + 31) +
                one_over_two_q * *(b + 219 * OS1_S1 + 31);
            *(b + 274 * OS1_S1 + 47) =
                prefactor_x * *(b + 274 * OS1_S1 + 32) -
                p_over_q * *(b + 340 * OS1_S1 + 32) +
                one_over_two_q * *(b + 219 * OS1_S1 + 32);
            *(b + 274 * OS1_S1 + 48) = prefactor_y * *(b + 274 * OS1_S1 + 29) -
                                       p_over_q * *(b + 350 * OS1_S1 + 29);
            *(b + 274 * OS1_S1 + 49) =
                prefactor_x * *(b + 274 * OS1_S1 + 34) -
                p_over_q * *(b + 340 * OS1_S1 + 34) +
                one_over_two_q * *(b + 219 * OS1_S1 + 34);
            *(b + 274 * OS1_S1 + 50) =
                prefactor_y * *(b + 274 * OS1_S1 + 30) -
                p_over_q * *(b + 350 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 274 * OS1_S1 + 16);
            *(b + 274 * OS1_S1 + 51) =
                prefactor_z * *(b + 274 * OS1_S1 + 30) -
                p_over_q * *(b + 351 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 30);
            *(b + 274 * OS1_S1 + 52) =
                prefactor_z * *(b + 274 * OS1_S1 + 31) -
                p_over_q * *(b + 351 * OS1_S1 + 31) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 31) +
                one_over_two_q * *(b + 274 * OS1_S1 + 16);
            *(b + 274 * OS1_S1 + 53) =
                prefactor_y * *(b + 274 * OS1_S1 + 33) -
                p_over_q * *(b + 350 * OS1_S1 + 33) +
                one_over_two_q * *(b + 274 * OS1_S1 + 19);
            *(b + 274 * OS1_S1 + 54) = prefactor_y * *(b + 274 * OS1_S1 + 34) -
                                       p_over_q * *(b + 350 * OS1_S1 + 34);
            *(b + 274 * OS1_S1 + 55) =
                prefactor_z * *(b + 274 * OS1_S1 + 34) -
                p_over_q * *(b + 351 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 209 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 274 * OS1_S1 + 19);
            *(b + 275 * OS1_S1 + 35) =
                prefactor_x * *(b + 275 * OS1_S1 + 20) -
                p_over_q * *(b + 341 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 275 * OS1_S1 + 10);
            *(b + 275 * OS1_S1 + 36) =
                prefactor_y * *(b + 275 * OS1_S1 + 20) -
                p_over_q * *(b + 352 * OS1_S1 + 20) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 20);
            *(b + 275 * OS1_S1 + 37) = prefactor_z * *(b + 275 * OS1_S1 + 20) -
                                       p_over_q * *(b + 353 * OS1_S1 + 20);
            *(b + 275 * OS1_S1 + 38) =
                prefactor_y * *(b + 275 * OS1_S1 + 21) -
                p_over_q * *(b + 352 * OS1_S1 + 21) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 21) +
                one_over_two_q * *(b + 275 * OS1_S1 + 10);
            *(b + 275 * OS1_S1 + 39) = prefactor_z * *(b + 275 * OS1_S1 + 21) -
                                       p_over_q * *(b + 353 * OS1_S1 + 21);
            *(b + 275 * OS1_S1 + 40) =
                prefactor_z * *(b + 275 * OS1_S1 + 22) -
                p_over_q * *(b + 353 * OS1_S1 + 22) +
                one_over_two_q * *(b + 275 * OS1_S1 + 10);
            *(b + 275 * OS1_S1 + 41) =
                prefactor_x * *(b + 275 * OS1_S1 + 26) -
                p_over_q * *(b + 341 * OS1_S1 + 26) +
                one_over_two_q * *(b + 275 * OS1_S1 + 16);
            *(b + 275 * OS1_S1 + 42) = prefactor_z * *(b + 275 * OS1_S1 + 23) -
                                       p_over_q * *(b + 353 * OS1_S1 + 23);
            *(b + 275 * OS1_S1 + 43) =
                prefactor_y * *(b + 275 * OS1_S1 + 25) -
                p_over_q * *(b + 352 * OS1_S1 + 25) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 25);
            *(b + 275 * OS1_S1 + 44) =
                prefactor_x * *(b + 275 * OS1_S1 + 29) -
                p_over_q * *(b + 341 * OS1_S1 + 29) +
                one_over_two_q * *(b + 275 * OS1_S1 + 19);
            *(b + 275 * OS1_S1 + 45) = prefactor_x * *(b + 275 * OS1_S1 + 30) -
                                       p_over_q * *(b + 341 * OS1_S1 + 30);
            *(b + 275 * OS1_S1 + 46) = prefactor_z * *(b + 275 * OS1_S1 + 26) -
                                       p_over_q * *(b + 353 * OS1_S1 + 26);
            *(b + 275 * OS1_S1 + 47) = prefactor_x * *(b + 275 * OS1_S1 + 32) -
                                       p_over_q * *(b + 341 * OS1_S1 + 32);
            *(b + 275 * OS1_S1 + 48) = prefactor_x * *(b + 275 * OS1_S1 + 33) -
                                       p_over_q * *(b + 341 * OS1_S1 + 33);
            *(b + 275 * OS1_S1 + 49) = prefactor_x * *(b + 275 * OS1_S1 + 34) -
                                       p_over_q * *(b + 341 * OS1_S1 + 34);
            *(b + 275 * OS1_S1 + 50) =
                prefactor_y * *(b + 275 * OS1_S1 + 30) -
                p_over_q * *(b + 352 * OS1_S1 + 30) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 275 * OS1_S1 + 16);
            *(b + 275 * OS1_S1 + 51) = prefactor_z * *(b + 275 * OS1_S1 + 30) -
                                       p_over_q * *(b + 353 * OS1_S1 + 30);
            *(b + 275 * OS1_S1 + 52) =
                prefactor_z * *(b + 275 * OS1_S1 + 31) -
                p_over_q * *(b + 353 * OS1_S1 + 31) +
                one_over_two_q * *(b + 275 * OS1_S1 + 16);
            *(b + 275 * OS1_S1 + 53) =
                prefactor_y * *(b + 275 * OS1_S1 + 33) -
                p_over_q * *(b + 352 * OS1_S1 + 33) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 33) +
                one_over_two_q * *(b + 275 * OS1_S1 + 19);
            *(b + 275 * OS1_S1 + 54) =
                prefactor_y * *(b + 275 * OS1_S1 + 34) -
                p_over_q * *(b + 352 * OS1_S1 + 34) +
                10 * one_over_two_q * *(b + 210 * OS1_S1 + 34);
            *(b + 275 * OS1_S1 + 55) =
                prefactor_z * *(b + 275 * OS1_S1 + 34) -
                p_over_q * *(b + 353 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 275 * OS1_S1 + 19);
            *(b + 276 * OS1_S1 + 35) =
                prefactor_x * *(b + 276 * OS1_S1 + 20) -
                p_over_q * *(b + 342 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 276 * OS1_S1 + 10);
            *(b + 276 * OS1_S1 + 36) =
                prefactor_y * *(b + 276 * OS1_S1 + 20) -
                p_over_q * *(b + 353 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 20);
            *(b + 276 * OS1_S1 + 37) =
                prefactor_z * *(b + 276 * OS1_S1 + 20) -
                p_over_q * *(b + 354 * OS1_S1 + 20) +
                one_over_two_q * *(b + 210 * OS1_S1 + 20);
            *(b + 276 * OS1_S1 + 38) =
                prefactor_y * *(b + 276 * OS1_S1 + 21) -
                p_over_q * *(b + 353 * OS1_S1 + 21) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 21) +
                one_over_two_q * *(b + 276 * OS1_S1 + 10);
            *(b + 276 * OS1_S1 + 39) =
                prefactor_z * *(b + 276 * OS1_S1 + 21) -
                p_over_q * *(b + 354 * OS1_S1 + 21) +
                one_over_two_q * *(b + 210 * OS1_S1 + 21);
            *(b + 276 * OS1_S1 + 40) =
                prefactor_z * *(b + 276 * OS1_S1 + 22) -
                p_over_q * *(b + 354 * OS1_S1 + 22) +
                one_over_two_q * *(b + 210 * OS1_S1 + 22) +
                one_over_two_q * *(b + 276 * OS1_S1 + 10);
            *(b + 276 * OS1_S1 + 41) =
                prefactor_x * *(b + 276 * OS1_S1 + 26) -
                p_over_q * *(b + 342 * OS1_S1 + 26) +
                one_over_two_q * *(b + 276 * OS1_S1 + 16);
            *(b + 276 * OS1_S1 + 42) =
                prefactor_z * *(b + 276 * OS1_S1 + 23) -
                p_over_q * *(b + 354 * OS1_S1 + 23) +
                one_over_two_q * *(b + 210 * OS1_S1 + 23);
            *(b + 276 * OS1_S1 + 43) =
                prefactor_y * *(b + 276 * OS1_S1 + 25) -
                p_over_q * *(b + 353 * OS1_S1 + 25) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 25);
            *(b + 276 * OS1_S1 + 44) =
                prefactor_x * *(b + 276 * OS1_S1 + 29) -
                p_over_q * *(b + 342 * OS1_S1 + 29) +
                one_over_two_q * *(b + 276 * OS1_S1 + 19);
            *(b + 276 * OS1_S1 + 45) = prefactor_x * *(b + 276 * OS1_S1 + 30) -
                                       p_over_q * *(b + 342 * OS1_S1 + 30);
            *(b + 276 * OS1_S1 + 46) = prefactor_x * *(b + 276 * OS1_S1 + 31) -
                                       p_over_q * *(b + 342 * OS1_S1 + 31);
            *(b + 276 * OS1_S1 + 47) = prefactor_x * *(b + 276 * OS1_S1 + 32) -
                                       p_over_q * *(b + 342 * OS1_S1 + 32);
            *(b + 276 * OS1_S1 + 48) = prefactor_x * *(b + 276 * OS1_S1 + 33) -
                                       p_over_q * *(b + 342 * OS1_S1 + 33);
            *(b + 276 * OS1_S1 + 49) = prefactor_x * *(b + 276 * OS1_S1 + 34) -
                                       p_over_q * *(b + 342 * OS1_S1 + 34);
            *(b + 276 * OS1_S1 + 50) =
                prefactor_y * *(b + 276 * OS1_S1 + 30) -
                p_over_q * *(b + 353 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 276 * OS1_S1 + 16);
            *(b + 276 * OS1_S1 + 51) =
                prefactor_z * *(b + 276 * OS1_S1 + 30) -
                p_over_q * *(b + 354 * OS1_S1 + 30) +
                one_over_two_q * *(b + 210 * OS1_S1 + 30);
            *(b + 276 * OS1_S1 + 52) =
                prefactor_z * *(b + 276 * OS1_S1 + 31) -
                p_over_q * *(b + 354 * OS1_S1 + 31) +
                one_over_two_q * *(b + 210 * OS1_S1 + 31) +
                one_over_two_q * *(b + 276 * OS1_S1 + 16);
            *(b + 276 * OS1_S1 + 53) =
                prefactor_y * *(b + 276 * OS1_S1 + 33) -
                p_over_q * *(b + 353 * OS1_S1 + 33) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 33) +
                one_over_two_q * *(b + 276 * OS1_S1 + 19);
            *(b + 276 * OS1_S1 + 54) =
                prefactor_y * *(b + 276 * OS1_S1 + 34) -
                p_over_q * *(b + 353 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 211 * OS1_S1 + 34);
            *(b + 276 * OS1_S1 + 55) =
                prefactor_z * *(b + 276 * OS1_S1 + 34) -
                p_over_q * *(b + 354 * OS1_S1 + 34) +
                one_over_two_q * *(b + 210 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 276 * OS1_S1 + 19);
            *(b + 277 * OS1_S1 + 35) =
                prefactor_x * *(b + 277 * OS1_S1 + 20) -
                p_over_q * *(b + 343 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 277 * OS1_S1 + 10);
            *(b + 277 * OS1_S1 + 36) =
                prefactor_y * *(b + 277 * OS1_S1 + 20) -
                p_over_q * *(b + 354 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 20);
            *(b + 277 * OS1_S1 + 37) =
                prefactor_z * *(b + 277 * OS1_S1 + 20) -
                p_over_q * *(b + 355 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 20);
            *(b + 277 * OS1_S1 + 38) =
                prefactor_y * *(b + 277 * OS1_S1 + 21) -
                p_over_q * *(b + 354 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 21) +
                one_over_two_q * *(b + 277 * OS1_S1 + 10);
            *(b + 277 * OS1_S1 + 39) =
                prefactor_z * *(b + 277 * OS1_S1 + 21) -
                p_over_q * *(b + 355 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 21);
            *(b + 277 * OS1_S1 + 40) =
                prefactor_z * *(b + 277 * OS1_S1 + 22) -
                p_over_q * *(b + 355 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 22) +
                one_over_two_q * *(b + 277 * OS1_S1 + 10);
            *(b + 277 * OS1_S1 + 41) =
                prefactor_x * *(b + 277 * OS1_S1 + 26) -
                p_over_q * *(b + 343 * OS1_S1 + 26) +
                one_over_two_q * *(b + 277 * OS1_S1 + 16);
            *(b + 277 * OS1_S1 + 42) =
                prefactor_z * *(b + 277 * OS1_S1 + 23) -
                p_over_q * *(b + 355 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 23);
            *(b + 277 * OS1_S1 + 43) =
                prefactor_y * *(b + 277 * OS1_S1 + 25) -
                p_over_q * *(b + 354 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 25);
            *(b + 277 * OS1_S1 + 44) =
                prefactor_x * *(b + 277 * OS1_S1 + 29) -
                p_over_q * *(b + 343 * OS1_S1 + 29) +
                one_over_two_q * *(b + 277 * OS1_S1 + 19);
            *(b + 277 * OS1_S1 + 45) = prefactor_x * *(b + 277 * OS1_S1 + 30) -
                                       p_over_q * *(b + 343 * OS1_S1 + 30);
            *(b + 277 * OS1_S1 + 46) = prefactor_x * *(b + 277 * OS1_S1 + 31) -
                                       p_over_q * *(b + 343 * OS1_S1 + 31);
            *(b + 277 * OS1_S1 + 47) = prefactor_x * *(b + 277 * OS1_S1 + 32) -
                                       p_over_q * *(b + 343 * OS1_S1 + 32);
            *(b + 277 * OS1_S1 + 48) = prefactor_x * *(b + 277 * OS1_S1 + 33) -
                                       p_over_q * *(b + 343 * OS1_S1 + 33);
            *(b + 277 * OS1_S1 + 49) = prefactor_x * *(b + 277 * OS1_S1 + 34) -
                                       p_over_q * *(b + 343 * OS1_S1 + 34);
            *(b + 277 * OS1_S1 + 50) =
                prefactor_y * *(b + 277 * OS1_S1 + 30) -
                p_over_q * *(b + 354 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 277 * OS1_S1 + 16);
            *(b + 277 * OS1_S1 + 51) =
                prefactor_z * *(b + 277 * OS1_S1 + 30) -
                p_over_q * *(b + 355 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 30);
            *(b + 277 * OS1_S1 + 52) =
                prefactor_z * *(b + 277 * OS1_S1 + 31) -
                p_over_q * *(b + 355 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 31) +
                one_over_two_q * *(b + 277 * OS1_S1 + 16);
            *(b + 277 * OS1_S1 + 53) =
                prefactor_y * *(b + 277 * OS1_S1 + 33) -
                p_over_q * *(b + 354 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 33) +
                one_over_two_q * *(b + 277 * OS1_S1 + 19);
            *(b + 277 * OS1_S1 + 54) =
                prefactor_y * *(b + 277 * OS1_S1 + 34) -
                p_over_q * *(b + 354 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 212 * OS1_S1 + 34);
            *(b + 277 * OS1_S1 + 55) =
                prefactor_z * *(b + 277 * OS1_S1 + 34) -
                p_over_q * *(b + 355 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 211 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 277 * OS1_S1 + 19);
            *(b + 278 * OS1_S1 + 35) =
                prefactor_x * *(b + 278 * OS1_S1 + 20) -
                p_over_q * *(b + 344 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 10);
            *(b + 278 * OS1_S1 + 36) =
                prefactor_y * *(b + 278 * OS1_S1 + 20) -
                p_over_q * *(b + 355 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 20);
            *(b + 278 * OS1_S1 + 37) =
                prefactor_z * *(b + 278 * OS1_S1 + 20) -
                p_over_q * *(b + 356 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 20);
            *(b + 278 * OS1_S1 + 38) =
                prefactor_y * *(b + 278 * OS1_S1 + 21) -
                p_over_q * *(b + 355 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 21) +
                one_over_two_q * *(b + 278 * OS1_S1 + 10);
            *(b + 278 * OS1_S1 + 39) =
                prefactor_z * *(b + 278 * OS1_S1 + 21) -
                p_over_q * *(b + 356 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 21);
            *(b + 278 * OS1_S1 + 40) =
                prefactor_z * *(b + 278 * OS1_S1 + 22) -
                p_over_q * *(b + 356 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 22) +
                one_over_two_q * *(b + 278 * OS1_S1 + 10);
            *(b + 278 * OS1_S1 + 41) =
                prefactor_x * *(b + 278 * OS1_S1 + 26) -
                p_over_q * *(b + 344 * OS1_S1 + 26) +
                one_over_two_q * *(b + 278 * OS1_S1 + 16);
            *(b + 278 * OS1_S1 + 42) =
                prefactor_z * *(b + 278 * OS1_S1 + 23) -
                p_over_q * *(b + 356 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 23);
            *(b + 278 * OS1_S1 + 43) =
                prefactor_y * *(b + 278 * OS1_S1 + 25) -
                p_over_q * *(b + 355 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 25);
            *(b + 278 * OS1_S1 + 44) =
                prefactor_x * *(b + 278 * OS1_S1 + 29) -
                p_over_q * *(b + 344 * OS1_S1 + 29) +
                one_over_two_q * *(b + 278 * OS1_S1 + 19);
            *(b + 278 * OS1_S1 + 45) = prefactor_x * *(b + 278 * OS1_S1 + 30) -
                                       p_over_q * *(b + 344 * OS1_S1 + 30);
            *(b + 278 * OS1_S1 + 46) = prefactor_x * *(b + 278 * OS1_S1 + 31) -
                                       p_over_q * *(b + 344 * OS1_S1 + 31);
            *(b + 278 * OS1_S1 + 47) = prefactor_x * *(b + 278 * OS1_S1 + 32) -
                                       p_over_q * *(b + 344 * OS1_S1 + 32);
            *(b + 278 * OS1_S1 + 48) = prefactor_x * *(b + 278 * OS1_S1 + 33) -
                                       p_over_q * *(b + 344 * OS1_S1 + 33);
            *(b + 278 * OS1_S1 + 49) = prefactor_x * *(b + 278 * OS1_S1 + 34) -
                                       p_over_q * *(b + 344 * OS1_S1 + 34);
            *(b + 278 * OS1_S1 + 50) =
                prefactor_y * *(b + 278 * OS1_S1 + 30) -
                p_over_q * *(b + 355 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 16);
            *(b + 278 * OS1_S1 + 51) =
                prefactor_z * *(b + 278 * OS1_S1 + 30) -
                p_over_q * *(b + 356 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 30);
            *(b + 278 * OS1_S1 + 52) =
                prefactor_z * *(b + 278 * OS1_S1 + 31) -
                p_over_q * *(b + 356 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 31) +
                one_over_two_q * *(b + 278 * OS1_S1 + 16);
            *(b + 278 * OS1_S1 + 53) =
                prefactor_y * *(b + 278 * OS1_S1 + 33) -
                p_over_q * *(b + 355 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 33) +
                one_over_two_q * *(b + 278 * OS1_S1 + 19);
            *(b + 278 * OS1_S1 + 54) =
                prefactor_y * *(b + 278 * OS1_S1 + 34) -
                p_over_q * *(b + 355 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 213 * OS1_S1 + 34);
            *(b + 278 * OS1_S1 + 55) =
                prefactor_z * *(b + 278 * OS1_S1 + 34) -
                p_over_q * *(b + 356 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 212 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 19);
            *(b + 279 * OS1_S1 + 35) =
                prefactor_x * *(b + 279 * OS1_S1 + 20) -
                p_over_q * *(b + 345 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 279 * OS1_S1 + 10);
            *(b + 279 * OS1_S1 + 36) =
                prefactor_y * *(b + 279 * OS1_S1 + 20) -
                p_over_q * *(b + 356 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 20);
            *(b + 279 * OS1_S1 + 37) =
                prefactor_z * *(b + 279 * OS1_S1 + 20) -
                p_over_q * *(b + 357 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 20);
            *(b + 279 * OS1_S1 + 38) =
                prefactor_y * *(b + 279 * OS1_S1 + 21) -
                p_over_q * *(b + 356 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 21) +
                one_over_two_q * *(b + 279 * OS1_S1 + 10);
            *(b + 279 * OS1_S1 + 39) =
                prefactor_z * *(b + 279 * OS1_S1 + 21) -
                p_over_q * *(b + 357 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 21);
            *(b + 279 * OS1_S1 + 40) =
                prefactor_z * *(b + 279 * OS1_S1 + 22) -
                p_over_q * *(b + 357 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 22) +
                one_over_two_q * *(b + 279 * OS1_S1 + 10);
            *(b + 279 * OS1_S1 + 41) =
                prefactor_x * *(b + 279 * OS1_S1 + 26) -
                p_over_q * *(b + 345 * OS1_S1 + 26) +
                one_over_two_q * *(b + 279 * OS1_S1 + 16);
            *(b + 279 * OS1_S1 + 42) =
                prefactor_z * *(b + 279 * OS1_S1 + 23) -
                p_over_q * *(b + 357 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 23);
            *(b + 279 * OS1_S1 + 43) =
                prefactor_y * *(b + 279 * OS1_S1 + 25) -
                p_over_q * *(b + 356 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 25);
            *(b + 279 * OS1_S1 + 44) =
                prefactor_x * *(b + 279 * OS1_S1 + 29) -
                p_over_q * *(b + 345 * OS1_S1 + 29) +
                one_over_two_q * *(b + 279 * OS1_S1 + 19);
            *(b + 279 * OS1_S1 + 45) = prefactor_x * *(b + 279 * OS1_S1 + 30) -
                                       p_over_q * *(b + 345 * OS1_S1 + 30);
            *(b + 279 * OS1_S1 + 46) = prefactor_x * *(b + 279 * OS1_S1 + 31) -
                                       p_over_q * *(b + 345 * OS1_S1 + 31);
            *(b + 279 * OS1_S1 + 47) = prefactor_x * *(b + 279 * OS1_S1 + 32) -
                                       p_over_q * *(b + 345 * OS1_S1 + 32);
            *(b + 279 * OS1_S1 + 48) = prefactor_x * *(b + 279 * OS1_S1 + 33) -
                                       p_over_q * *(b + 345 * OS1_S1 + 33);
            *(b + 279 * OS1_S1 + 49) = prefactor_x * *(b + 279 * OS1_S1 + 34) -
                                       p_over_q * *(b + 345 * OS1_S1 + 34);
            *(b + 279 * OS1_S1 + 50) =
                prefactor_y * *(b + 279 * OS1_S1 + 30) -
                p_over_q * *(b + 356 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 279 * OS1_S1 + 16);
            *(b + 279 * OS1_S1 + 51) =
                prefactor_z * *(b + 279 * OS1_S1 + 30) -
                p_over_q * *(b + 357 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 30);
            *(b + 279 * OS1_S1 + 52) =
                prefactor_z * *(b + 279 * OS1_S1 + 31) -
                p_over_q * *(b + 357 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 31) +
                one_over_two_q * *(b + 279 * OS1_S1 + 16);
            *(b + 279 * OS1_S1 + 53) =
                prefactor_y * *(b + 279 * OS1_S1 + 33) -
                p_over_q * *(b + 356 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 33) +
                one_over_two_q * *(b + 279 * OS1_S1 + 19);
            *(b + 279 * OS1_S1 + 54) =
                prefactor_y * *(b + 279 * OS1_S1 + 34) -
                p_over_q * *(b + 356 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 214 * OS1_S1 + 34);
            *(b + 279 * OS1_S1 + 55) =
                prefactor_z * *(b + 279 * OS1_S1 + 34) -
                p_over_q * *(b + 357 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 213 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 279 * OS1_S1 + 19);
            *(b + 280 * OS1_S1 + 35) =
                prefactor_x * *(b + 280 * OS1_S1 + 20) -
                p_over_q * *(b + 346 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 280 * OS1_S1 + 10);
            *(b + 280 * OS1_S1 + 36) =
                prefactor_y * *(b + 280 * OS1_S1 + 20) -
                p_over_q * *(b + 357 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 20);
            *(b + 280 * OS1_S1 + 37) =
                prefactor_z * *(b + 280 * OS1_S1 + 20) -
                p_over_q * *(b + 358 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 20);
            *(b + 280 * OS1_S1 + 38) =
                prefactor_y * *(b + 280 * OS1_S1 + 21) -
                p_over_q * *(b + 357 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 21) +
                one_over_two_q * *(b + 280 * OS1_S1 + 10);
            *(b + 280 * OS1_S1 + 39) =
                prefactor_z * *(b + 280 * OS1_S1 + 21) -
                p_over_q * *(b + 358 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 21);
            *(b + 280 * OS1_S1 + 40) =
                prefactor_z * *(b + 280 * OS1_S1 + 22) -
                p_over_q * *(b + 358 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 22) +
                one_over_two_q * *(b + 280 * OS1_S1 + 10);
            *(b + 280 * OS1_S1 + 41) =
                prefactor_x * *(b + 280 * OS1_S1 + 26) -
                p_over_q * *(b + 346 * OS1_S1 + 26) +
                one_over_two_q * *(b + 280 * OS1_S1 + 16);
            *(b + 280 * OS1_S1 + 42) =
                prefactor_z * *(b + 280 * OS1_S1 + 23) -
                p_over_q * *(b + 358 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 23);
            *(b + 280 * OS1_S1 + 43) =
                prefactor_y * *(b + 280 * OS1_S1 + 25) -
                p_over_q * *(b + 357 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 25);
            *(b + 280 * OS1_S1 + 44) =
                prefactor_x * *(b + 280 * OS1_S1 + 29) -
                p_over_q * *(b + 346 * OS1_S1 + 29) +
                one_over_two_q * *(b + 280 * OS1_S1 + 19);
            *(b + 280 * OS1_S1 + 45) = prefactor_x * *(b + 280 * OS1_S1 + 30) -
                                       p_over_q * *(b + 346 * OS1_S1 + 30);
            *(b + 280 * OS1_S1 + 46) = prefactor_x * *(b + 280 * OS1_S1 + 31) -
                                       p_over_q * *(b + 346 * OS1_S1 + 31);
            *(b + 280 * OS1_S1 + 47) = prefactor_x * *(b + 280 * OS1_S1 + 32) -
                                       p_over_q * *(b + 346 * OS1_S1 + 32);
            *(b + 280 * OS1_S1 + 48) = prefactor_x * *(b + 280 * OS1_S1 + 33) -
                                       p_over_q * *(b + 346 * OS1_S1 + 33);
            *(b + 280 * OS1_S1 + 49) = prefactor_x * *(b + 280 * OS1_S1 + 34) -
                                       p_over_q * *(b + 346 * OS1_S1 + 34);
            *(b + 280 * OS1_S1 + 50) =
                prefactor_y * *(b + 280 * OS1_S1 + 30) -
                p_over_q * *(b + 357 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 280 * OS1_S1 + 16);
            *(b + 280 * OS1_S1 + 51) =
                prefactor_z * *(b + 280 * OS1_S1 + 30) -
                p_over_q * *(b + 358 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 30);
            *(b + 280 * OS1_S1 + 52) =
                prefactor_z * *(b + 280 * OS1_S1 + 31) -
                p_over_q * *(b + 358 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 31) +
                one_over_two_q * *(b + 280 * OS1_S1 + 16);
            *(b + 280 * OS1_S1 + 53) =
                prefactor_y * *(b + 280 * OS1_S1 + 33) -
                p_over_q * *(b + 357 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 33) +
                one_over_two_q * *(b + 280 * OS1_S1 + 19);
            *(b + 280 * OS1_S1 + 54) =
                prefactor_y * *(b + 280 * OS1_S1 + 34) -
                p_over_q * *(b + 357 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 215 * OS1_S1 + 34);
            *(b + 280 * OS1_S1 + 55) =
                prefactor_z * *(b + 280 * OS1_S1 + 34) -
                p_over_q * *(b + 358 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 214 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 280 * OS1_S1 + 19);
            *(b + 281 * OS1_S1 + 35) =
                prefactor_x * *(b + 281 * OS1_S1 + 20) -
                p_over_q * *(b + 347 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 281 * OS1_S1 + 10);
            *(b + 281 * OS1_S1 + 36) =
                prefactor_y * *(b + 281 * OS1_S1 + 20) -
                p_over_q * *(b + 358 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 20);
            *(b + 281 * OS1_S1 + 37) =
                prefactor_z * *(b + 281 * OS1_S1 + 20) -
                p_over_q * *(b + 359 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 20);
            *(b + 281 * OS1_S1 + 38) =
                prefactor_y * *(b + 281 * OS1_S1 + 21) -
                p_over_q * *(b + 358 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 21) +
                one_over_two_q * *(b + 281 * OS1_S1 + 10);
            *(b + 281 * OS1_S1 + 39) =
                prefactor_y * *(b + 281 * OS1_S1 + 22) -
                p_over_q * *(b + 358 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 22);
            *(b + 281 * OS1_S1 + 40) =
                prefactor_z * *(b + 281 * OS1_S1 + 22) -
                p_over_q * *(b + 359 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 22) +
                one_over_two_q * *(b + 281 * OS1_S1 + 10);
            *(b + 281 * OS1_S1 + 41) =
                prefactor_x * *(b + 281 * OS1_S1 + 26) -
                p_over_q * *(b + 347 * OS1_S1 + 26) +
                one_over_two_q * *(b + 281 * OS1_S1 + 16);
            *(b + 281 * OS1_S1 + 42) =
                prefactor_z * *(b + 281 * OS1_S1 + 23) -
                p_over_q * *(b + 359 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 23);
            *(b + 281 * OS1_S1 + 43) =
                prefactor_y * *(b + 281 * OS1_S1 + 25) -
                p_over_q * *(b + 358 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 25);
            *(b + 281 * OS1_S1 + 44) =
                prefactor_x * *(b + 281 * OS1_S1 + 29) -
                p_over_q * *(b + 347 * OS1_S1 + 29) +
                one_over_two_q * *(b + 281 * OS1_S1 + 19);
            *(b + 281 * OS1_S1 + 45) = prefactor_x * *(b + 281 * OS1_S1 + 30) -
                                       p_over_q * *(b + 347 * OS1_S1 + 30);
            *(b + 281 * OS1_S1 + 46) = prefactor_x * *(b + 281 * OS1_S1 + 31) -
                                       p_over_q * *(b + 347 * OS1_S1 + 31);
            *(b + 281 * OS1_S1 + 47) = prefactor_x * *(b + 281 * OS1_S1 + 32) -
                                       p_over_q * *(b + 347 * OS1_S1 + 32);
            *(b + 281 * OS1_S1 + 48) = prefactor_x * *(b + 281 * OS1_S1 + 33) -
                                       p_over_q * *(b + 347 * OS1_S1 + 33);
            *(b + 281 * OS1_S1 + 49) = prefactor_x * *(b + 281 * OS1_S1 + 34) -
                                       p_over_q * *(b + 347 * OS1_S1 + 34);
            *(b + 281 * OS1_S1 + 50) =
                prefactor_y * *(b + 281 * OS1_S1 + 30) -
                p_over_q * *(b + 358 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 281 * OS1_S1 + 16);
            *(b + 281 * OS1_S1 + 51) =
                prefactor_z * *(b + 281 * OS1_S1 + 30) -
                p_over_q * *(b + 359 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 30);
            *(b + 281 * OS1_S1 + 52) =
                prefactor_z * *(b + 281 * OS1_S1 + 31) -
                p_over_q * *(b + 359 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 31) +
                one_over_two_q * *(b + 281 * OS1_S1 + 16);
            *(b + 281 * OS1_S1 + 53) =
                prefactor_y * *(b + 281 * OS1_S1 + 33) -
                p_over_q * *(b + 358 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 33) +
                one_over_two_q * *(b + 281 * OS1_S1 + 19);
            *(b + 281 * OS1_S1 + 54) =
                prefactor_y * *(b + 281 * OS1_S1 + 34) -
                p_over_q * *(b + 358 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 216 * OS1_S1 + 34);
            *(b + 281 * OS1_S1 + 55) =
                prefactor_z * *(b + 281 * OS1_S1 + 34) -
                p_over_q * *(b + 359 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 215 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 281 * OS1_S1 + 19);
            *(b + 282 * OS1_S1 + 35) =
                prefactor_x * *(b + 282 * OS1_S1 + 20) -
                p_over_q * *(b + 348 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 10);
            *(b + 282 * OS1_S1 + 36) =
                prefactor_y * *(b + 282 * OS1_S1 + 20) -
                p_over_q * *(b + 359 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 20);
            *(b + 282 * OS1_S1 + 37) =
                prefactor_z * *(b + 282 * OS1_S1 + 20) -
                p_over_q * *(b + 360 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 20);
            *(b + 282 * OS1_S1 + 38) =
                prefactor_y * *(b + 282 * OS1_S1 + 21) -
                p_over_q * *(b + 359 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 21) +
                one_over_two_q * *(b + 282 * OS1_S1 + 10);
            *(b + 282 * OS1_S1 + 39) =
                prefactor_y * *(b + 282 * OS1_S1 + 22) -
                p_over_q * *(b + 359 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 22);
            *(b + 282 * OS1_S1 + 40) =
                prefactor_z * *(b + 282 * OS1_S1 + 22) -
                p_over_q * *(b + 360 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 22) +
                one_over_two_q * *(b + 282 * OS1_S1 + 10);
            *(b + 282 * OS1_S1 + 41) =
                prefactor_x * *(b + 282 * OS1_S1 + 26) -
                p_over_q * *(b + 348 * OS1_S1 + 26) +
                one_over_two_q * *(b + 282 * OS1_S1 + 16);
            *(b + 282 * OS1_S1 + 42) =
                prefactor_z * *(b + 282 * OS1_S1 + 23) -
                p_over_q * *(b + 360 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 23);
            *(b + 282 * OS1_S1 + 43) =
                prefactor_y * *(b + 282 * OS1_S1 + 25) -
                p_over_q * *(b + 359 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 25);
            *(b + 282 * OS1_S1 + 44) =
                prefactor_x * *(b + 282 * OS1_S1 + 29) -
                p_over_q * *(b + 348 * OS1_S1 + 29) +
                one_over_two_q * *(b + 282 * OS1_S1 + 19);
            *(b + 282 * OS1_S1 + 45) = prefactor_x * *(b + 282 * OS1_S1 + 30) -
                                       p_over_q * *(b + 348 * OS1_S1 + 30);
            *(b + 282 * OS1_S1 + 46) = prefactor_x * *(b + 282 * OS1_S1 + 31) -
                                       p_over_q * *(b + 348 * OS1_S1 + 31);
            *(b + 282 * OS1_S1 + 47) = prefactor_x * *(b + 282 * OS1_S1 + 32) -
                                       p_over_q * *(b + 348 * OS1_S1 + 32);
            *(b + 282 * OS1_S1 + 48) = prefactor_x * *(b + 282 * OS1_S1 + 33) -
                                       p_over_q * *(b + 348 * OS1_S1 + 33);
            *(b + 282 * OS1_S1 + 49) = prefactor_x * *(b + 282 * OS1_S1 + 34) -
                                       p_over_q * *(b + 348 * OS1_S1 + 34);
            *(b + 282 * OS1_S1 + 50) =
                prefactor_y * *(b + 282 * OS1_S1 + 30) -
                p_over_q * *(b + 359 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 16);
            *(b + 282 * OS1_S1 + 51) =
                prefactor_z * *(b + 282 * OS1_S1 + 30) -
                p_over_q * *(b + 360 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 30);
            *(b + 282 * OS1_S1 + 52) =
                prefactor_z * *(b + 282 * OS1_S1 + 31) -
                p_over_q * *(b + 360 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 31) +
                one_over_two_q * *(b + 282 * OS1_S1 + 16);
            *(b + 282 * OS1_S1 + 53) =
                prefactor_y * *(b + 282 * OS1_S1 + 33) -
                p_over_q * *(b + 359 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 33) +
                one_over_two_q * *(b + 282 * OS1_S1 + 19);
            *(b + 282 * OS1_S1 + 54) =
                prefactor_y * *(b + 282 * OS1_S1 + 34) -
                p_over_q * *(b + 359 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 217 * OS1_S1 + 34);
            *(b + 282 * OS1_S1 + 55) =
                prefactor_z * *(b + 282 * OS1_S1 + 34) -
                p_over_q * *(b + 360 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 216 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 19);
            *(b + 283 * OS1_S1 + 35) =
                prefactor_x * *(b + 283 * OS1_S1 + 20) -
                p_over_q * *(b + 349 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 283 * OS1_S1 + 10);
            *(b + 283 * OS1_S1 + 36) =
                prefactor_y * *(b + 283 * OS1_S1 + 20) -
                p_over_q * *(b + 360 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 20);
            *(b + 283 * OS1_S1 + 37) =
                prefactor_z * *(b + 283 * OS1_S1 + 20) -
                p_over_q * *(b + 361 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 20);
            *(b + 283 * OS1_S1 + 38) =
                prefactor_y * *(b + 283 * OS1_S1 + 21) -
                p_over_q * *(b + 360 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 21) +
                one_over_two_q * *(b + 283 * OS1_S1 + 10);
            *(b + 283 * OS1_S1 + 39) =
                prefactor_y * *(b + 283 * OS1_S1 + 22) -
                p_over_q * *(b + 360 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 22);
            *(b + 283 * OS1_S1 + 40) =
                prefactor_z * *(b + 283 * OS1_S1 + 22) -
                p_over_q * *(b + 361 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 22) +
                one_over_two_q * *(b + 283 * OS1_S1 + 10);
            *(b + 283 * OS1_S1 + 41) =
                prefactor_x * *(b + 283 * OS1_S1 + 26) -
                p_over_q * *(b + 349 * OS1_S1 + 26) +
                one_over_two_q * *(b + 283 * OS1_S1 + 16);
            *(b + 283 * OS1_S1 + 42) =
                prefactor_z * *(b + 283 * OS1_S1 + 23) -
                p_over_q * *(b + 361 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 23);
            *(b + 283 * OS1_S1 + 43) =
                prefactor_y * *(b + 283 * OS1_S1 + 25) -
                p_over_q * *(b + 360 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 25);
            *(b + 283 * OS1_S1 + 44) =
                prefactor_x * *(b + 283 * OS1_S1 + 29) -
                p_over_q * *(b + 349 * OS1_S1 + 29) +
                one_over_two_q * *(b + 283 * OS1_S1 + 19);
            *(b + 283 * OS1_S1 + 45) = prefactor_x * *(b + 283 * OS1_S1 + 30) -
                                       p_over_q * *(b + 349 * OS1_S1 + 30);
            *(b + 283 * OS1_S1 + 46) = prefactor_x * *(b + 283 * OS1_S1 + 31) -
                                       p_over_q * *(b + 349 * OS1_S1 + 31);
            *(b + 283 * OS1_S1 + 47) = prefactor_x * *(b + 283 * OS1_S1 + 32) -
                                       p_over_q * *(b + 349 * OS1_S1 + 32);
            *(b + 283 * OS1_S1 + 48) = prefactor_x * *(b + 283 * OS1_S1 + 33) -
                                       p_over_q * *(b + 349 * OS1_S1 + 33);
            *(b + 283 * OS1_S1 + 49) = prefactor_x * *(b + 283 * OS1_S1 + 34) -
                                       p_over_q * *(b + 349 * OS1_S1 + 34);
            *(b + 283 * OS1_S1 + 50) =
                prefactor_y * *(b + 283 * OS1_S1 + 30) -
                p_over_q * *(b + 360 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 283 * OS1_S1 + 16);
            *(b + 283 * OS1_S1 + 51) =
                prefactor_z * *(b + 283 * OS1_S1 + 30) -
                p_over_q * *(b + 361 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 30);
            *(b + 283 * OS1_S1 + 52) =
                prefactor_z * *(b + 283 * OS1_S1 + 31) -
                p_over_q * *(b + 361 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 31) +
                one_over_two_q * *(b + 283 * OS1_S1 + 16);
            *(b + 283 * OS1_S1 + 53) =
                prefactor_y * *(b + 283 * OS1_S1 + 33) -
                p_over_q * *(b + 360 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 33) +
                one_over_two_q * *(b + 283 * OS1_S1 + 19);
            *(b + 283 * OS1_S1 + 54) =
                prefactor_y * *(b + 283 * OS1_S1 + 34) -
                p_over_q * *(b + 360 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 218 * OS1_S1 + 34);
            *(b + 283 * OS1_S1 + 55) =
                prefactor_z * *(b + 283 * OS1_S1 + 34) -
                p_over_q * *(b + 361 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 217 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 283 * OS1_S1 + 19);
            *(b + 284 * OS1_S1 + 35) =
                prefactor_x * *(b + 284 * OS1_S1 + 20) -
                p_over_q * *(b + 350 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 284 * OS1_S1 + 10);
            *(b + 284 * OS1_S1 + 36) =
                prefactor_y * *(b + 284 * OS1_S1 + 20) -
                p_over_q * *(b + 361 * OS1_S1 + 20) +
                one_over_two_q * *(b + 219 * OS1_S1 + 20);
            *(b + 284 * OS1_S1 + 37) =
                prefactor_z * *(b + 284 * OS1_S1 + 20) -
                p_over_q * *(b + 362 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 20);
            *(b + 284 * OS1_S1 + 38) =
                prefactor_y * *(b + 284 * OS1_S1 + 21) -
                p_over_q * *(b + 361 * OS1_S1 + 21) +
                one_over_two_q * *(b + 219 * OS1_S1 + 21) +
                one_over_two_q * *(b + 284 * OS1_S1 + 10);
            *(b + 284 * OS1_S1 + 39) =
                prefactor_y * *(b + 284 * OS1_S1 + 22) -
                p_over_q * *(b + 361 * OS1_S1 + 22) +
                one_over_two_q * *(b + 219 * OS1_S1 + 22);
            *(b + 284 * OS1_S1 + 40) =
                prefactor_z * *(b + 284 * OS1_S1 + 22) -
                p_over_q * *(b + 362 * OS1_S1 + 22) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 22) +
                one_over_two_q * *(b + 284 * OS1_S1 + 10);
            *(b + 284 * OS1_S1 + 41) =
                prefactor_x * *(b + 284 * OS1_S1 + 26) -
                p_over_q * *(b + 350 * OS1_S1 + 26) +
                one_over_two_q * *(b + 284 * OS1_S1 + 16);
            *(b + 284 * OS1_S1 + 42) =
                prefactor_z * *(b + 284 * OS1_S1 + 23) -
                p_over_q * *(b + 362 * OS1_S1 + 23) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 23);
            *(b + 284 * OS1_S1 + 43) =
                prefactor_y * *(b + 284 * OS1_S1 + 25) -
                p_over_q * *(b + 361 * OS1_S1 + 25) +
                one_over_two_q * *(b + 219 * OS1_S1 + 25);
            *(b + 284 * OS1_S1 + 44) =
                prefactor_x * *(b + 284 * OS1_S1 + 29) -
                p_over_q * *(b + 350 * OS1_S1 + 29) +
                one_over_two_q * *(b + 284 * OS1_S1 + 19);
            *(b + 284 * OS1_S1 + 45) = prefactor_x * *(b + 284 * OS1_S1 + 30) -
                                       p_over_q * *(b + 350 * OS1_S1 + 30);
            *(b + 284 * OS1_S1 + 46) = prefactor_x * *(b + 284 * OS1_S1 + 31) -
                                       p_over_q * *(b + 350 * OS1_S1 + 31);
            *(b + 284 * OS1_S1 + 47) = prefactor_x * *(b + 284 * OS1_S1 + 32) -
                                       p_over_q * *(b + 350 * OS1_S1 + 32);
            *(b + 284 * OS1_S1 + 48) = prefactor_x * *(b + 284 * OS1_S1 + 33) -
                                       p_over_q * *(b + 350 * OS1_S1 + 33);
            *(b + 284 * OS1_S1 + 49) = prefactor_x * *(b + 284 * OS1_S1 + 34) -
                                       p_over_q * *(b + 350 * OS1_S1 + 34);
            *(b + 284 * OS1_S1 + 50) =
                prefactor_y * *(b + 284 * OS1_S1 + 30) -
                p_over_q * *(b + 361 * OS1_S1 + 30) +
                one_over_two_q * *(b + 219 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 284 * OS1_S1 + 16);
            *(b + 284 * OS1_S1 + 51) =
                prefactor_z * *(b + 284 * OS1_S1 + 30) -
                p_over_q * *(b + 362 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 30);
            *(b + 284 * OS1_S1 + 52) =
                prefactor_z * *(b + 284 * OS1_S1 + 31) -
                p_over_q * *(b + 362 * OS1_S1 + 31) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 31) +
                one_over_two_q * *(b + 284 * OS1_S1 + 16);
            *(b + 284 * OS1_S1 + 53) =
                prefactor_y * *(b + 284 * OS1_S1 + 33) -
                p_over_q * *(b + 361 * OS1_S1 + 33) +
                one_over_two_q * *(b + 219 * OS1_S1 + 33) +
                one_over_two_q * *(b + 284 * OS1_S1 + 19);
            *(b + 284 * OS1_S1 + 54) =
                prefactor_y * *(b + 284 * OS1_S1 + 34) -
                p_over_q * *(b + 361 * OS1_S1 + 34) +
                one_over_two_q * *(b + 219 * OS1_S1 + 34);
            *(b + 284 * OS1_S1 + 55) =
                prefactor_z * *(b + 284 * OS1_S1 + 34) -
                p_over_q * *(b + 362 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 218 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 284 * OS1_S1 + 19);
            *(b + 285 * OS1_S1 + 35) =
                prefactor_x * *(b + 285 * OS1_S1 + 20) -
                p_over_q * *(b + 351 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 285 * OS1_S1 + 10);
            *(b + 285 * OS1_S1 + 36) = prefactor_y * *(b + 285 * OS1_S1 + 20) -
                                       p_over_q * *(b + 362 * OS1_S1 + 20);
            *(b + 285 * OS1_S1 + 37) =
                prefactor_z * *(b + 285 * OS1_S1 + 20) -
                p_over_q * *(b + 363 * OS1_S1 + 20) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 20);
            *(b + 285 * OS1_S1 + 38) =
                prefactor_y * *(b + 285 * OS1_S1 + 21) -
                p_over_q * *(b + 362 * OS1_S1 + 21) +
                one_over_two_q * *(b + 285 * OS1_S1 + 10);
            *(b + 285 * OS1_S1 + 39) = prefactor_y * *(b + 285 * OS1_S1 + 22) -
                                       p_over_q * *(b + 362 * OS1_S1 + 22);
            *(b + 285 * OS1_S1 + 40) =
                prefactor_z * *(b + 285 * OS1_S1 + 22) -
                p_over_q * *(b + 363 * OS1_S1 + 22) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 22) +
                one_over_two_q * *(b + 285 * OS1_S1 + 10);
            *(b + 285 * OS1_S1 + 41) =
                prefactor_x * *(b + 285 * OS1_S1 + 26) -
                p_over_q * *(b + 351 * OS1_S1 + 26) +
                one_over_two_q * *(b + 285 * OS1_S1 + 16);
            *(b + 285 * OS1_S1 + 42) =
                prefactor_z * *(b + 285 * OS1_S1 + 23) -
                p_over_q * *(b + 363 * OS1_S1 + 23) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 23);
            *(b + 285 * OS1_S1 + 43) = prefactor_y * *(b + 285 * OS1_S1 + 25) -
                                       p_over_q * *(b + 362 * OS1_S1 + 25);
            *(b + 285 * OS1_S1 + 44) =
                prefactor_x * *(b + 285 * OS1_S1 + 29) -
                p_over_q * *(b + 351 * OS1_S1 + 29) +
                one_over_two_q * *(b + 285 * OS1_S1 + 19);
            *(b + 285 * OS1_S1 + 45) = prefactor_x * *(b + 285 * OS1_S1 + 30) -
                                       p_over_q * *(b + 351 * OS1_S1 + 30);
            *(b + 285 * OS1_S1 + 46) = prefactor_x * *(b + 285 * OS1_S1 + 31) -
                                       p_over_q * *(b + 351 * OS1_S1 + 31);
            *(b + 285 * OS1_S1 + 47) = prefactor_x * *(b + 285 * OS1_S1 + 32) -
                                       p_over_q * *(b + 351 * OS1_S1 + 32);
            *(b + 285 * OS1_S1 + 48) = prefactor_y * *(b + 285 * OS1_S1 + 29) -
                                       p_over_q * *(b + 362 * OS1_S1 + 29);
            *(b + 285 * OS1_S1 + 49) = prefactor_x * *(b + 285 * OS1_S1 + 34) -
                                       p_over_q * *(b + 351 * OS1_S1 + 34);
            *(b + 285 * OS1_S1 + 50) =
                prefactor_y * *(b + 285 * OS1_S1 + 30) -
                p_over_q * *(b + 362 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 285 * OS1_S1 + 16);
            *(b + 285 * OS1_S1 + 51) =
                prefactor_z * *(b + 285 * OS1_S1 + 30) -
                p_over_q * *(b + 363 * OS1_S1 + 30) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 30);
            *(b + 285 * OS1_S1 + 52) =
                prefactor_z * *(b + 285 * OS1_S1 + 31) -
                p_over_q * *(b + 363 * OS1_S1 + 31) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 31) +
                one_over_two_q * *(b + 285 * OS1_S1 + 16);
            *(b + 285 * OS1_S1 + 53) =
                prefactor_y * *(b + 285 * OS1_S1 + 33) -
                p_over_q * *(b + 362 * OS1_S1 + 33) +
                one_over_two_q * *(b + 285 * OS1_S1 + 19);
            *(b + 285 * OS1_S1 + 54) = prefactor_y * *(b + 285 * OS1_S1 + 34) -
                                       p_over_q * *(b + 362 * OS1_S1 + 34);
            *(b + 285 * OS1_S1 + 55) =
                prefactor_z * *(b + 285 * OS1_S1 + 34) -
                p_over_q * *(b + 363 * OS1_S1 + 34) +
                10 * one_over_two_q * *(b + 219 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 285 * OS1_S1 + 19);
            return;
        }

        void transfer_11_5(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 286 * OS1_S1 + 35) =
                prefactor_x * *(b + 286 * OS1_S1 + 20) -
                p_over_q * *(b + 364 * OS1_S1 + 20) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 286 * OS1_S1 + 10);
            *(b + 286 * OS1_S1 + 36) = prefactor_y * *(b + 286 * OS1_S1 + 20) -
                                       p_over_q * *(b + 365 * OS1_S1 + 20);
            *(b + 286 * OS1_S1 + 37) = prefactor_z * *(b + 286 * OS1_S1 + 20) -
                                       p_over_q * *(b + 366 * OS1_S1 + 20);
            *(b + 286 * OS1_S1 + 38) =
                prefactor_y * *(b + 286 * OS1_S1 + 21) -
                p_over_q * *(b + 365 * OS1_S1 + 21) +
                one_over_two_q * *(b + 286 * OS1_S1 + 10);
            *(b + 286 * OS1_S1 + 39) = prefactor_z * *(b + 286 * OS1_S1 + 21) -
                                       p_over_q * *(b + 366 * OS1_S1 + 21);
            *(b + 286 * OS1_S1 + 40) =
                prefactor_z * *(b + 286 * OS1_S1 + 22) -
                p_over_q * *(b + 366 * OS1_S1 + 22) +
                one_over_two_q * *(b + 286 * OS1_S1 + 10);
            *(b + 286 * OS1_S1 + 41) =
                prefactor_x * *(b + 286 * OS1_S1 + 26) -
                p_over_q * *(b + 364 * OS1_S1 + 26) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 26) +
                one_over_two_q * *(b + 286 * OS1_S1 + 16);
            *(b + 286 * OS1_S1 + 42) = prefactor_z * *(b + 286 * OS1_S1 + 23) -
                                       p_over_q * *(b + 366 * OS1_S1 + 23);
            *(b + 286 * OS1_S1 + 43) = prefactor_y * *(b + 286 * OS1_S1 + 25) -
                                       p_over_q * *(b + 365 * OS1_S1 + 25);
            *(b + 286 * OS1_S1 + 44) =
                prefactor_x * *(b + 286 * OS1_S1 + 29) -
                p_over_q * *(b + 364 * OS1_S1 + 29) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 29) +
                one_over_two_q * *(b + 286 * OS1_S1 + 19);
            *(b + 286 * OS1_S1 + 45) =
                prefactor_x * *(b + 286 * OS1_S1 + 30) -
                p_over_q * *(b + 364 * OS1_S1 + 30) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 30);
            *(b + 286 * OS1_S1 + 46) = prefactor_z * *(b + 286 * OS1_S1 + 26) -
                                       p_over_q * *(b + 366 * OS1_S1 + 26);
            *(b + 286 * OS1_S1 + 47) =
                prefactor_x * *(b + 286 * OS1_S1 + 32) -
                p_over_q * *(b + 364 * OS1_S1 + 32) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 32);
            *(b + 286 * OS1_S1 + 48) = prefactor_y * *(b + 286 * OS1_S1 + 29) -
                                       p_over_q * *(b + 365 * OS1_S1 + 29);
            *(b + 286 * OS1_S1 + 49) =
                prefactor_x * *(b + 286 * OS1_S1 + 34) -
                p_over_q * *(b + 364 * OS1_S1 + 34) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 34);
            *(b + 286 * OS1_S1 + 50) =
                prefactor_y * *(b + 286 * OS1_S1 + 30) -
                p_over_q * *(b + 365 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 286 * OS1_S1 + 16);
            *(b + 286 * OS1_S1 + 51) = prefactor_z * *(b + 286 * OS1_S1 + 30) -
                                       p_over_q * *(b + 366 * OS1_S1 + 30);
            *(b + 286 * OS1_S1 + 52) =
                prefactor_z * *(b + 286 * OS1_S1 + 31) -
                p_over_q * *(b + 366 * OS1_S1 + 31) +
                one_over_two_q * *(b + 286 * OS1_S1 + 16);
            *(b + 286 * OS1_S1 + 53) =
                prefactor_y * *(b + 286 * OS1_S1 + 33) -
                p_over_q * *(b + 365 * OS1_S1 + 33) +
                one_over_two_q * *(b + 286 * OS1_S1 + 19);
            *(b + 286 * OS1_S1 + 54) = prefactor_y * *(b + 286 * OS1_S1 + 34) -
                                       p_over_q * *(b + 365 * OS1_S1 + 34);
            *(b + 286 * OS1_S1 + 55) =
                prefactor_z * *(b + 286 * OS1_S1 + 34) -
                p_over_q * *(b + 366 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 286 * OS1_S1 + 19);
            *(b + 287 * OS1_S1 + 35) =
                prefactor_x * *(b + 287 * OS1_S1 + 20) -
                p_over_q * *(b + 365 * OS1_S1 + 20) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 287 * OS1_S1 + 10);
            *(b + 287 * OS1_S1 + 36) =
                prefactor_y * *(b + 287 * OS1_S1 + 20) -
                p_over_q * *(b + 367 * OS1_S1 + 20) +
                one_over_two_q * *(b + 220 * OS1_S1 + 20);
            *(b + 287 * OS1_S1 + 37) = prefactor_z * *(b + 287 * OS1_S1 + 20) -
                                       p_over_q * *(b + 368 * OS1_S1 + 20);
            *(b + 287 * OS1_S1 + 38) =
                prefactor_y * *(b + 287 * OS1_S1 + 21) -
                p_over_q * *(b + 367 * OS1_S1 + 21) +
                one_over_two_q * *(b + 220 * OS1_S1 + 21) +
                one_over_two_q * *(b + 287 * OS1_S1 + 10);
            *(b + 287 * OS1_S1 + 39) = prefactor_z * *(b + 287 * OS1_S1 + 21) -
                                       p_over_q * *(b + 368 * OS1_S1 + 21);
            *(b + 287 * OS1_S1 + 40) =
                prefactor_z * *(b + 287 * OS1_S1 + 22) -
                p_over_q * *(b + 368 * OS1_S1 + 22) +
                one_over_two_q * *(b + 287 * OS1_S1 + 10);
            *(b + 287 * OS1_S1 + 41) =
                prefactor_x * *(b + 287 * OS1_S1 + 26) -
                p_over_q * *(b + 365 * OS1_S1 + 26) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 26) +
                one_over_two_q * *(b + 287 * OS1_S1 + 16);
            *(b + 287 * OS1_S1 + 42) = prefactor_z * *(b + 287 * OS1_S1 + 23) -
                                       p_over_q * *(b + 368 * OS1_S1 + 23);
            *(b + 287 * OS1_S1 + 43) =
                prefactor_y * *(b + 287 * OS1_S1 + 25) -
                p_over_q * *(b + 367 * OS1_S1 + 25) +
                one_over_two_q * *(b + 220 * OS1_S1 + 25);
            *(b + 287 * OS1_S1 + 44) =
                prefactor_x * *(b + 287 * OS1_S1 + 29) -
                p_over_q * *(b + 365 * OS1_S1 + 29) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 29) +
                one_over_two_q * *(b + 287 * OS1_S1 + 19);
            *(b + 287 * OS1_S1 + 45) =
                prefactor_x * *(b + 287 * OS1_S1 + 30) -
                p_over_q * *(b + 365 * OS1_S1 + 30) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 30);
            *(b + 287 * OS1_S1 + 46) = prefactor_z * *(b + 287 * OS1_S1 + 26) -
                                       p_over_q * *(b + 368 * OS1_S1 + 26);
            *(b + 287 * OS1_S1 + 47) =
                prefactor_x * *(b + 287 * OS1_S1 + 32) -
                p_over_q * *(b + 365 * OS1_S1 + 32) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 32);
            *(b + 287 * OS1_S1 + 48) =
                prefactor_y * *(b + 287 * OS1_S1 + 29) -
                p_over_q * *(b + 367 * OS1_S1 + 29) +
                one_over_two_q * *(b + 220 * OS1_S1 + 29);
            *(b + 287 * OS1_S1 + 49) =
                prefactor_x * *(b + 287 * OS1_S1 + 34) -
                p_over_q * *(b + 365 * OS1_S1 + 34) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 34);
            *(b + 287 * OS1_S1 + 50) =
                prefactor_y * *(b + 287 * OS1_S1 + 30) -
                p_over_q * *(b + 367 * OS1_S1 + 30) +
                one_over_two_q * *(b + 220 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 287 * OS1_S1 + 16);
            *(b + 287 * OS1_S1 + 51) = prefactor_z * *(b + 287 * OS1_S1 + 30) -
                                       p_over_q * *(b + 368 * OS1_S1 + 30);
            *(b + 287 * OS1_S1 + 52) =
                prefactor_z * *(b + 287 * OS1_S1 + 31) -
                p_over_q * *(b + 368 * OS1_S1 + 31) +
                one_over_two_q * *(b + 287 * OS1_S1 + 16);
            *(b + 287 * OS1_S1 + 53) =
                prefactor_y * *(b + 287 * OS1_S1 + 33) -
                p_over_q * *(b + 367 * OS1_S1 + 33) +
                one_over_two_q * *(b + 220 * OS1_S1 + 33) +
                one_over_two_q * *(b + 287 * OS1_S1 + 19);
            *(b + 287 * OS1_S1 + 54) =
                prefactor_y * *(b + 287 * OS1_S1 + 34) -
                p_over_q * *(b + 367 * OS1_S1 + 34) +
                one_over_two_q * *(b + 220 * OS1_S1 + 34);
            *(b + 287 * OS1_S1 + 55) =
                prefactor_z * *(b + 287 * OS1_S1 + 34) -
                p_over_q * *(b + 368 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 287 * OS1_S1 + 19);
            *(b + 288 * OS1_S1 + 35) =
                prefactor_x * *(b + 288 * OS1_S1 + 20) -
                p_over_q * *(b + 366 * OS1_S1 + 20) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 288 * OS1_S1 + 10);
            *(b + 288 * OS1_S1 + 36) = prefactor_y * *(b + 288 * OS1_S1 + 20) -
                                       p_over_q * *(b + 368 * OS1_S1 + 20);
            *(b + 288 * OS1_S1 + 37) =
                prefactor_z * *(b + 288 * OS1_S1 + 20) -
                p_over_q * *(b + 369 * OS1_S1 + 20) +
                one_over_two_q * *(b + 220 * OS1_S1 + 20);
            *(b + 288 * OS1_S1 + 38) =
                prefactor_y * *(b + 288 * OS1_S1 + 21) -
                p_over_q * *(b + 368 * OS1_S1 + 21) +
                one_over_two_q * *(b + 288 * OS1_S1 + 10);
            *(b + 288 * OS1_S1 + 39) = prefactor_y * *(b + 288 * OS1_S1 + 22) -
                                       p_over_q * *(b + 368 * OS1_S1 + 22);
            *(b + 288 * OS1_S1 + 40) =
                prefactor_z * *(b + 288 * OS1_S1 + 22) -
                p_over_q * *(b + 369 * OS1_S1 + 22) +
                one_over_two_q * *(b + 220 * OS1_S1 + 22) +
                one_over_two_q * *(b + 288 * OS1_S1 + 10);
            *(b + 288 * OS1_S1 + 41) =
                prefactor_x * *(b + 288 * OS1_S1 + 26) -
                p_over_q * *(b + 366 * OS1_S1 + 26) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 26) +
                one_over_two_q * *(b + 288 * OS1_S1 + 16);
            *(b + 288 * OS1_S1 + 42) =
                prefactor_z * *(b + 288 * OS1_S1 + 23) -
                p_over_q * *(b + 369 * OS1_S1 + 23) +
                one_over_two_q * *(b + 220 * OS1_S1 + 23);
            *(b + 288 * OS1_S1 + 43) = prefactor_y * *(b + 288 * OS1_S1 + 25) -
                                       p_over_q * *(b + 368 * OS1_S1 + 25);
            *(b + 288 * OS1_S1 + 44) =
                prefactor_x * *(b + 288 * OS1_S1 + 29) -
                p_over_q * *(b + 366 * OS1_S1 + 29) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 29) +
                one_over_two_q * *(b + 288 * OS1_S1 + 19);
            *(b + 288 * OS1_S1 + 45) =
                prefactor_x * *(b + 288 * OS1_S1 + 30) -
                p_over_q * *(b + 366 * OS1_S1 + 30) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 30);
            *(b + 288 * OS1_S1 + 46) =
                prefactor_z * *(b + 288 * OS1_S1 + 26) -
                p_over_q * *(b + 369 * OS1_S1 + 26) +
                one_over_two_q * *(b + 220 * OS1_S1 + 26);
            *(b + 288 * OS1_S1 + 47) =
                prefactor_x * *(b + 288 * OS1_S1 + 32) -
                p_over_q * *(b + 366 * OS1_S1 + 32) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 32);
            *(b + 288 * OS1_S1 + 48) = prefactor_y * *(b + 288 * OS1_S1 + 29) -
                                       p_over_q * *(b + 368 * OS1_S1 + 29);
            *(b + 288 * OS1_S1 + 49) =
                prefactor_x * *(b + 288 * OS1_S1 + 34) -
                p_over_q * *(b + 366 * OS1_S1 + 34) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 34);
            *(b + 288 * OS1_S1 + 50) =
                prefactor_y * *(b + 288 * OS1_S1 + 30) -
                p_over_q * *(b + 368 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 288 * OS1_S1 + 16);
            *(b + 288 * OS1_S1 + 51) =
                prefactor_z * *(b + 288 * OS1_S1 + 30) -
                p_over_q * *(b + 369 * OS1_S1 + 30) +
                one_over_two_q * *(b + 220 * OS1_S1 + 30);
            *(b + 288 * OS1_S1 + 52) =
                prefactor_z * *(b + 288 * OS1_S1 + 31) -
                p_over_q * *(b + 369 * OS1_S1 + 31) +
                one_over_two_q * *(b + 220 * OS1_S1 + 31) +
                one_over_two_q * *(b + 288 * OS1_S1 + 16);
            *(b + 288 * OS1_S1 + 53) =
                prefactor_y * *(b + 288 * OS1_S1 + 33) -
                p_over_q * *(b + 368 * OS1_S1 + 33) +
                one_over_two_q * *(b + 288 * OS1_S1 + 19);
            *(b + 288 * OS1_S1 + 54) = prefactor_y * *(b + 288 * OS1_S1 + 34) -
                                       p_over_q * *(b + 368 * OS1_S1 + 34);
            *(b + 288 * OS1_S1 + 55) =
                prefactor_z * *(b + 288 * OS1_S1 + 34) -
                p_over_q * *(b + 369 * OS1_S1 + 34) +
                one_over_two_q * *(b + 220 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 288 * OS1_S1 + 19);
            *(b + 289 * OS1_S1 + 35) =
                prefactor_x * *(b + 289 * OS1_S1 + 20) -
                p_over_q * *(b + 367 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 289 * OS1_S1 + 10);
            *(b + 289 * OS1_S1 + 36) =
                prefactor_y * *(b + 289 * OS1_S1 + 20) -
                p_over_q * *(b + 370 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 20);
            *(b + 289 * OS1_S1 + 37) = prefactor_z * *(b + 289 * OS1_S1 + 20) -
                                       p_over_q * *(b + 371 * OS1_S1 + 20);
            *(b + 289 * OS1_S1 + 38) =
                prefactor_y * *(b + 289 * OS1_S1 + 21) -
                p_over_q * *(b + 370 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 21) +
                one_over_two_q * *(b + 289 * OS1_S1 + 10);
            *(b + 289 * OS1_S1 + 39) = prefactor_z * *(b + 289 * OS1_S1 + 21) -
                                       p_over_q * *(b + 371 * OS1_S1 + 21);
            *(b + 289 * OS1_S1 + 40) =
                prefactor_z * *(b + 289 * OS1_S1 + 22) -
                p_over_q * *(b + 371 * OS1_S1 + 22) +
                one_over_two_q * *(b + 289 * OS1_S1 + 10);
            *(b + 289 * OS1_S1 + 41) =
                prefactor_x * *(b + 289 * OS1_S1 + 26) -
                p_over_q * *(b + 367 * OS1_S1 + 26) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 26) +
                one_over_two_q * *(b + 289 * OS1_S1 + 16);
            *(b + 289 * OS1_S1 + 42) = prefactor_z * *(b + 289 * OS1_S1 + 23) -
                                       p_over_q * *(b + 371 * OS1_S1 + 23);
            *(b + 289 * OS1_S1 + 43) =
                prefactor_y * *(b + 289 * OS1_S1 + 25) -
                p_over_q * *(b + 370 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 25);
            *(b + 289 * OS1_S1 + 44) =
                prefactor_x * *(b + 289 * OS1_S1 + 29) -
                p_over_q * *(b + 367 * OS1_S1 + 29) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 29) +
                one_over_two_q * *(b + 289 * OS1_S1 + 19);
            *(b + 289 * OS1_S1 + 45) =
                prefactor_x * *(b + 289 * OS1_S1 + 30) -
                p_over_q * *(b + 367 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 30);
            *(b + 289 * OS1_S1 + 46) = prefactor_z * *(b + 289 * OS1_S1 + 26) -
                                       p_over_q * *(b + 371 * OS1_S1 + 26);
            *(b + 289 * OS1_S1 + 47) =
                prefactor_x * *(b + 289 * OS1_S1 + 32) -
                p_over_q * *(b + 367 * OS1_S1 + 32) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 32);
            *(b + 289 * OS1_S1 + 48) =
                prefactor_y * *(b + 289 * OS1_S1 + 29) -
                p_over_q * *(b + 370 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 29);
            *(b + 289 * OS1_S1 + 49) =
                prefactor_x * *(b + 289 * OS1_S1 + 34) -
                p_over_q * *(b + 367 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 34);
            *(b + 289 * OS1_S1 + 50) =
                prefactor_y * *(b + 289 * OS1_S1 + 30) -
                p_over_q * *(b + 370 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 289 * OS1_S1 + 16);
            *(b + 289 * OS1_S1 + 51) = prefactor_z * *(b + 289 * OS1_S1 + 30) -
                                       p_over_q * *(b + 371 * OS1_S1 + 30);
            *(b + 289 * OS1_S1 + 52) =
                prefactor_z * *(b + 289 * OS1_S1 + 31) -
                p_over_q * *(b + 371 * OS1_S1 + 31) +
                one_over_two_q * *(b + 289 * OS1_S1 + 16);
            *(b + 289 * OS1_S1 + 53) =
                prefactor_y * *(b + 289 * OS1_S1 + 33) -
                p_over_q * *(b + 370 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 33) +
                one_over_two_q * *(b + 289 * OS1_S1 + 19);
            *(b + 289 * OS1_S1 + 54) =
                prefactor_y * *(b + 289 * OS1_S1 + 34) -
                p_over_q * *(b + 370 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 34);
            *(b + 289 * OS1_S1 + 55) =
                prefactor_z * *(b + 289 * OS1_S1 + 34) -
                p_over_q * *(b + 371 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 289 * OS1_S1 + 19);
            *(b + 290 * OS1_S1 + 35) =
                prefactor_x * *(b + 290 * OS1_S1 + 20) -
                p_over_q * *(b + 368 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 290 * OS1_S1 + 10);
            *(b + 290 * OS1_S1 + 36) =
                prefactor_y * *(b + 290 * OS1_S1 + 20) -
                p_over_q * *(b + 371 * OS1_S1 + 20) +
                one_over_two_q * *(b + 222 * OS1_S1 + 20);
            *(b + 290 * OS1_S1 + 37) =
                prefactor_z * *(b + 290 * OS1_S1 + 20) -
                p_over_q * *(b + 372 * OS1_S1 + 20) +
                one_over_two_q * *(b + 221 * OS1_S1 + 20);
            *(b + 290 * OS1_S1 + 38) =
                prefactor_y * *(b + 290 * OS1_S1 + 21) -
                p_over_q * *(b + 371 * OS1_S1 + 21) +
                one_over_two_q * *(b + 222 * OS1_S1 + 21) +
                one_over_two_q * *(b + 290 * OS1_S1 + 10);
            *(b + 290 * OS1_S1 + 39) =
                prefactor_z * *(b + 290 * OS1_S1 + 21) -
                p_over_q * *(b + 372 * OS1_S1 + 21) +
                one_over_two_q * *(b + 221 * OS1_S1 + 21);
            *(b + 290 * OS1_S1 + 40) =
                prefactor_z * *(b + 290 * OS1_S1 + 22) -
                p_over_q * *(b + 372 * OS1_S1 + 22) +
                one_over_two_q * *(b + 221 * OS1_S1 + 22) +
                one_over_two_q * *(b + 290 * OS1_S1 + 10);
            *(b + 290 * OS1_S1 + 41) =
                prefactor_x * *(b + 290 * OS1_S1 + 26) -
                p_over_q * *(b + 368 * OS1_S1 + 26) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 26) +
                one_over_two_q * *(b + 290 * OS1_S1 + 16);
            *(b + 290 * OS1_S1 + 42) =
                prefactor_z * *(b + 290 * OS1_S1 + 23) -
                p_over_q * *(b + 372 * OS1_S1 + 23) +
                one_over_two_q * *(b + 221 * OS1_S1 + 23);
            *(b + 290 * OS1_S1 + 43) =
                prefactor_y * *(b + 290 * OS1_S1 + 25) -
                p_over_q * *(b + 371 * OS1_S1 + 25) +
                one_over_two_q * *(b + 222 * OS1_S1 + 25);
            *(b + 290 * OS1_S1 + 44) =
                prefactor_x * *(b + 290 * OS1_S1 + 29) -
                p_over_q * *(b + 368 * OS1_S1 + 29) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 29) +
                one_over_two_q * *(b + 290 * OS1_S1 + 19);
            *(b + 290 * OS1_S1 + 45) =
                prefactor_x * *(b + 290 * OS1_S1 + 30) -
                p_over_q * *(b + 368 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 30);
            *(b + 290 * OS1_S1 + 46) =
                prefactor_z * *(b + 290 * OS1_S1 + 26) -
                p_over_q * *(b + 372 * OS1_S1 + 26) +
                one_over_two_q * *(b + 221 * OS1_S1 + 26);
            *(b + 290 * OS1_S1 + 47) =
                prefactor_x * *(b + 290 * OS1_S1 + 32) -
                p_over_q * *(b + 368 * OS1_S1 + 32) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 32);
            *(b + 290 * OS1_S1 + 48) =
                prefactor_y * *(b + 290 * OS1_S1 + 29) -
                p_over_q * *(b + 371 * OS1_S1 + 29) +
                one_over_two_q * *(b + 222 * OS1_S1 + 29);
            *(b + 290 * OS1_S1 + 49) =
                prefactor_x * *(b + 290 * OS1_S1 + 34) -
                p_over_q * *(b + 368 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 34);
            *(b + 290 * OS1_S1 + 50) =
                prefactor_y * *(b + 290 * OS1_S1 + 30) -
                p_over_q * *(b + 371 * OS1_S1 + 30) +
                one_over_two_q * *(b + 222 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 290 * OS1_S1 + 16);
            *(b + 290 * OS1_S1 + 51) =
                prefactor_z * *(b + 290 * OS1_S1 + 30) -
                p_over_q * *(b + 372 * OS1_S1 + 30) +
                one_over_two_q * *(b + 221 * OS1_S1 + 30);
            *(b + 290 * OS1_S1 + 52) =
                prefactor_z * *(b + 290 * OS1_S1 + 31) -
                p_over_q * *(b + 372 * OS1_S1 + 31) +
                one_over_two_q * *(b + 221 * OS1_S1 + 31) +
                one_over_two_q * *(b + 290 * OS1_S1 + 16);
            *(b + 290 * OS1_S1 + 53) =
                prefactor_y * *(b + 290 * OS1_S1 + 33) -
                p_over_q * *(b + 371 * OS1_S1 + 33) +
                one_over_two_q * *(b + 222 * OS1_S1 + 33) +
                one_over_two_q * *(b + 290 * OS1_S1 + 19);
            *(b + 290 * OS1_S1 + 54) =
                prefactor_y * *(b + 290 * OS1_S1 + 34) -
                p_over_q * *(b + 371 * OS1_S1 + 34) +
                one_over_two_q * *(b + 222 * OS1_S1 + 34);
            *(b + 290 * OS1_S1 + 55) =
                prefactor_z * *(b + 290 * OS1_S1 + 34) -
                p_over_q * *(b + 372 * OS1_S1 + 34) +
                one_over_two_q * *(b + 221 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 290 * OS1_S1 + 19);
            *(b + 291 * OS1_S1 + 35) =
                prefactor_x * *(b + 291 * OS1_S1 + 20) -
                p_over_q * *(b + 369 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 291 * OS1_S1 + 10);
            *(b + 291 * OS1_S1 + 36) = prefactor_y * *(b + 291 * OS1_S1 + 20) -
                                       p_over_q * *(b + 372 * OS1_S1 + 20);
            *(b + 291 * OS1_S1 + 37) =
                prefactor_z * *(b + 291 * OS1_S1 + 20) -
                p_over_q * *(b + 373 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 20);
            *(b + 291 * OS1_S1 + 38) =
                prefactor_y * *(b + 291 * OS1_S1 + 21) -
                p_over_q * *(b + 372 * OS1_S1 + 21) +
                one_over_two_q * *(b + 291 * OS1_S1 + 10);
            *(b + 291 * OS1_S1 + 39) = prefactor_y * *(b + 291 * OS1_S1 + 22) -
                                       p_over_q * *(b + 372 * OS1_S1 + 22);
            *(b + 291 * OS1_S1 + 40) =
                prefactor_z * *(b + 291 * OS1_S1 + 22) -
                p_over_q * *(b + 373 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 22) +
                one_over_two_q * *(b + 291 * OS1_S1 + 10);
            *(b + 291 * OS1_S1 + 41) =
                prefactor_x * *(b + 291 * OS1_S1 + 26) -
                p_over_q * *(b + 369 * OS1_S1 + 26) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 26) +
                one_over_two_q * *(b + 291 * OS1_S1 + 16);
            *(b + 291 * OS1_S1 + 42) =
                prefactor_z * *(b + 291 * OS1_S1 + 23) -
                p_over_q * *(b + 373 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 23);
            *(b + 291 * OS1_S1 + 43) = prefactor_y * *(b + 291 * OS1_S1 + 25) -
                                       p_over_q * *(b + 372 * OS1_S1 + 25);
            *(b + 291 * OS1_S1 + 44) =
                prefactor_x * *(b + 291 * OS1_S1 + 29) -
                p_over_q * *(b + 369 * OS1_S1 + 29) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 29) +
                one_over_two_q * *(b + 291 * OS1_S1 + 19);
            *(b + 291 * OS1_S1 + 45) =
                prefactor_x * *(b + 291 * OS1_S1 + 30) -
                p_over_q * *(b + 369 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 30);
            *(b + 291 * OS1_S1 + 46) =
                prefactor_z * *(b + 291 * OS1_S1 + 26) -
                p_over_q * *(b + 373 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 26);
            *(b + 291 * OS1_S1 + 47) =
                prefactor_x * *(b + 291 * OS1_S1 + 32) -
                p_over_q * *(b + 369 * OS1_S1 + 32) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 32);
            *(b + 291 * OS1_S1 + 48) = prefactor_y * *(b + 291 * OS1_S1 + 29) -
                                       p_over_q * *(b + 372 * OS1_S1 + 29);
            *(b + 291 * OS1_S1 + 49) =
                prefactor_x * *(b + 291 * OS1_S1 + 34) -
                p_over_q * *(b + 369 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 34);
            *(b + 291 * OS1_S1 + 50) =
                prefactor_y * *(b + 291 * OS1_S1 + 30) -
                p_over_q * *(b + 372 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 291 * OS1_S1 + 16);
            *(b + 291 * OS1_S1 + 51) =
                prefactor_z * *(b + 291 * OS1_S1 + 30) -
                p_over_q * *(b + 373 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 30);
            *(b + 291 * OS1_S1 + 52) =
                prefactor_z * *(b + 291 * OS1_S1 + 31) -
                p_over_q * *(b + 373 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 31) +
                one_over_two_q * *(b + 291 * OS1_S1 + 16);
            *(b + 291 * OS1_S1 + 53) =
                prefactor_y * *(b + 291 * OS1_S1 + 33) -
                p_over_q * *(b + 372 * OS1_S1 + 33) +
                one_over_two_q * *(b + 291 * OS1_S1 + 19);
            *(b + 291 * OS1_S1 + 54) = prefactor_y * *(b + 291 * OS1_S1 + 34) -
                                       p_over_q * *(b + 372 * OS1_S1 + 34);
            *(b + 291 * OS1_S1 + 55) =
                prefactor_z * *(b + 291 * OS1_S1 + 34) -
                p_over_q * *(b + 373 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 291 * OS1_S1 + 19);
            *(b + 292 * OS1_S1 + 35) =
                prefactor_x * *(b + 292 * OS1_S1 + 20) -
                p_over_q * *(b + 370 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 10);
            *(b + 292 * OS1_S1 + 36) =
                prefactor_y * *(b + 292 * OS1_S1 + 20) -
                p_over_q * *(b + 374 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 20);
            *(b + 292 * OS1_S1 + 37) = prefactor_z * *(b + 292 * OS1_S1 + 20) -
                                       p_over_q * *(b + 375 * OS1_S1 + 20);
            *(b + 292 * OS1_S1 + 38) =
                prefactor_y * *(b + 292 * OS1_S1 + 21) -
                p_over_q * *(b + 374 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 21) +
                one_over_two_q * *(b + 292 * OS1_S1 + 10);
            *(b + 292 * OS1_S1 + 39) = prefactor_z * *(b + 292 * OS1_S1 + 21) -
                                       p_over_q * *(b + 375 * OS1_S1 + 21);
            *(b + 292 * OS1_S1 + 40) =
                prefactor_z * *(b + 292 * OS1_S1 + 22) -
                p_over_q * *(b + 375 * OS1_S1 + 22) +
                one_over_two_q * *(b + 292 * OS1_S1 + 10);
            *(b + 292 * OS1_S1 + 41) =
                prefactor_x * *(b + 292 * OS1_S1 + 26) -
                p_over_q * *(b + 370 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 26) +
                one_over_two_q * *(b + 292 * OS1_S1 + 16);
            *(b + 292 * OS1_S1 + 42) = prefactor_z * *(b + 292 * OS1_S1 + 23) -
                                       p_over_q * *(b + 375 * OS1_S1 + 23);
            *(b + 292 * OS1_S1 + 43) =
                prefactor_y * *(b + 292 * OS1_S1 + 25) -
                p_over_q * *(b + 374 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 25);
            *(b + 292 * OS1_S1 + 44) =
                prefactor_x * *(b + 292 * OS1_S1 + 29) -
                p_over_q * *(b + 370 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 29) +
                one_over_two_q * *(b + 292 * OS1_S1 + 19);
            *(b + 292 * OS1_S1 + 45) =
                prefactor_x * *(b + 292 * OS1_S1 + 30) -
                p_over_q * *(b + 370 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 30);
            *(b + 292 * OS1_S1 + 46) = prefactor_z * *(b + 292 * OS1_S1 + 26) -
                                       p_over_q * *(b + 375 * OS1_S1 + 26);
            *(b + 292 * OS1_S1 + 47) =
                prefactor_x * *(b + 292 * OS1_S1 + 32) -
                p_over_q * *(b + 370 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 32);
            *(b + 292 * OS1_S1 + 48) =
                prefactor_y * *(b + 292 * OS1_S1 + 29) -
                p_over_q * *(b + 374 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 29);
            *(b + 292 * OS1_S1 + 49) =
                prefactor_x * *(b + 292 * OS1_S1 + 34) -
                p_over_q * *(b + 370 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 34);
            *(b + 292 * OS1_S1 + 50) =
                prefactor_y * *(b + 292 * OS1_S1 + 30) -
                p_over_q * *(b + 374 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 16);
            *(b + 292 * OS1_S1 + 51) = prefactor_z * *(b + 292 * OS1_S1 + 30) -
                                       p_over_q * *(b + 375 * OS1_S1 + 30);
            *(b + 292 * OS1_S1 + 52) =
                prefactor_z * *(b + 292 * OS1_S1 + 31) -
                p_over_q * *(b + 375 * OS1_S1 + 31) +
                one_over_two_q * *(b + 292 * OS1_S1 + 16);
            *(b + 292 * OS1_S1 + 53) =
                prefactor_y * *(b + 292 * OS1_S1 + 33) -
                p_over_q * *(b + 374 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 33) +
                one_over_two_q * *(b + 292 * OS1_S1 + 19);
            *(b + 292 * OS1_S1 + 54) =
                prefactor_y * *(b + 292 * OS1_S1 + 34) -
                p_over_q * *(b + 374 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 34);
            *(b + 292 * OS1_S1 + 55) =
                prefactor_z * *(b + 292 * OS1_S1 + 34) -
                p_over_q * *(b + 375 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 19);
            *(b + 293 * OS1_S1 + 35) =
                prefactor_x * *(b + 293 * OS1_S1 + 20) -
                p_over_q * *(b + 371 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 293 * OS1_S1 + 10);
            *(b + 293 * OS1_S1 + 36) =
                prefactor_y * *(b + 293 * OS1_S1 + 20) -
                p_over_q * *(b + 375 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 20);
            *(b + 293 * OS1_S1 + 37) =
                prefactor_z * *(b + 293 * OS1_S1 + 20) -
                p_over_q * *(b + 376 * OS1_S1 + 20) +
                one_over_two_q * *(b + 223 * OS1_S1 + 20);
            *(b + 293 * OS1_S1 + 38) =
                prefactor_y * *(b + 293 * OS1_S1 + 21) -
                p_over_q * *(b + 375 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 21) +
                one_over_two_q * *(b + 293 * OS1_S1 + 10);
            *(b + 293 * OS1_S1 + 39) =
                prefactor_z * *(b + 293 * OS1_S1 + 21) -
                p_over_q * *(b + 376 * OS1_S1 + 21) +
                one_over_two_q * *(b + 223 * OS1_S1 + 21);
            *(b + 293 * OS1_S1 + 40) =
                prefactor_z * *(b + 293 * OS1_S1 + 22) -
                p_over_q * *(b + 376 * OS1_S1 + 22) +
                one_over_two_q * *(b + 223 * OS1_S1 + 22) +
                one_over_two_q * *(b + 293 * OS1_S1 + 10);
            *(b + 293 * OS1_S1 + 41) =
                prefactor_x * *(b + 293 * OS1_S1 + 26) -
                p_over_q * *(b + 371 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 26) +
                one_over_two_q * *(b + 293 * OS1_S1 + 16);
            *(b + 293 * OS1_S1 + 42) =
                prefactor_z * *(b + 293 * OS1_S1 + 23) -
                p_over_q * *(b + 376 * OS1_S1 + 23) +
                one_over_two_q * *(b + 223 * OS1_S1 + 23);
            *(b + 293 * OS1_S1 + 43) =
                prefactor_y * *(b + 293 * OS1_S1 + 25) -
                p_over_q * *(b + 375 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 25);
            *(b + 293 * OS1_S1 + 44) =
                prefactor_x * *(b + 293 * OS1_S1 + 29) -
                p_over_q * *(b + 371 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 29) +
                one_over_two_q * *(b + 293 * OS1_S1 + 19);
            *(b + 293 * OS1_S1 + 45) =
                prefactor_x * *(b + 293 * OS1_S1 + 30) -
                p_over_q * *(b + 371 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 30);
            *(b + 293 * OS1_S1 + 46) =
                prefactor_z * *(b + 293 * OS1_S1 + 26) -
                p_over_q * *(b + 376 * OS1_S1 + 26) +
                one_over_two_q * *(b + 223 * OS1_S1 + 26);
            *(b + 293 * OS1_S1 + 47) =
                prefactor_x * *(b + 293 * OS1_S1 + 32) -
                p_over_q * *(b + 371 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 32);
            *(b + 293 * OS1_S1 + 48) =
                prefactor_y * *(b + 293 * OS1_S1 + 29) -
                p_over_q * *(b + 375 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 29);
            *(b + 293 * OS1_S1 + 49) =
                prefactor_x * *(b + 293 * OS1_S1 + 34) -
                p_over_q * *(b + 371 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 34);
            *(b + 293 * OS1_S1 + 50) =
                prefactor_y * *(b + 293 * OS1_S1 + 30) -
                p_over_q * *(b + 375 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 293 * OS1_S1 + 16);
            *(b + 293 * OS1_S1 + 51) =
                prefactor_z * *(b + 293 * OS1_S1 + 30) -
                p_over_q * *(b + 376 * OS1_S1 + 30) +
                one_over_two_q * *(b + 223 * OS1_S1 + 30);
            *(b + 293 * OS1_S1 + 52) =
                prefactor_z * *(b + 293 * OS1_S1 + 31) -
                p_over_q * *(b + 376 * OS1_S1 + 31) +
                one_over_two_q * *(b + 223 * OS1_S1 + 31) +
                one_over_two_q * *(b + 293 * OS1_S1 + 16);
            *(b + 293 * OS1_S1 + 53) =
                prefactor_y * *(b + 293 * OS1_S1 + 33) -
                p_over_q * *(b + 375 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 33) +
                one_over_two_q * *(b + 293 * OS1_S1 + 19);
            *(b + 293 * OS1_S1 + 54) =
                prefactor_y * *(b + 293 * OS1_S1 + 34) -
                p_over_q * *(b + 375 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 34);
            *(b + 293 * OS1_S1 + 55) =
                prefactor_z * *(b + 293 * OS1_S1 + 34) -
                p_over_q * *(b + 376 * OS1_S1 + 34) +
                one_over_two_q * *(b + 223 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 293 * OS1_S1 + 19);
            *(b + 294 * OS1_S1 + 35) =
                prefactor_x * *(b + 294 * OS1_S1 + 20) -
                p_over_q * *(b + 372 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 294 * OS1_S1 + 10);
            *(b + 294 * OS1_S1 + 36) =
                prefactor_y * *(b + 294 * OS1_S1 + 20) -
                p_over_q * *(b + 376 * OS1_S1 + 20) +
                one_over_two_q * *(b + 225 * OS1_S1 + 20);
            *(b + 294 * OS1_S1 + 37) =
                prefactor_z * *(b + 294 * OS1_S1 + 20) -
                p_over_q * *(b + 377 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 20);
            *(b + 294 * OS1_S1 + 38) =
                prefactor_y * *(b + 294 * OS1_S1 + 21) -
                p_over_q * *(b + 376 * OS1_S1 + 21) +
                one_over_two_q * *(b + 225 * OS1_S1 + 21) +
                one_over_two_q * *(b + 294 * OS1_S1 + 10);
            *(b + 294 * OS1_S1 + 39) =
                prefactor_y * *(b + 294 * OS1_S1 + 22) -
                p_over_q * *(b + 376 * OS1_S1 + 22) +
                one_over_two_q * *(b + 225 * OS1_S1 + 22);
            *(b + 294 * OS1_S1 + 40) =
                prefactor_z * *(b + 294 * OS1_S1 + 22) -
                p_over_q * *(b + 377 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 22) +
                one_over_two_q * *(b + 294 * OS1_S1 + 10);
            *(b + 294 * OS1_S1 + 41) =
                prefactor_x * *(b + 294 * OS1_S1 + 26) -
                p_over_q * *(b + 372 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 26) +
                one_over_two_q * *(b + 294 * OS1_S1 + 16);
            *(b + 294 * OS1_S1 + 42) =
                prefactor_z * *(b + 294 * OS1_S1 + 23) -
                p_over_q * *(b + 377 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 23);
            *(b + 294 * OS1_S1 + 43) =
                prefactor_y * *(b + 294 * OS1_S1 + 25) -
                p_over_q * *(b + 376 * OS1_S1 + 25) +
                one_over_two_q * *(b + 225 * OS1_S1 + 25);
            *(b + 294 * OS1_S1 + 44) =
                prefactor_x * *(b + 294 * OS1_S1 + 29) -
                p_over_q * *(b + 372 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 29) +
                one_over_two_q * *(b + 294 * OS1_S1 + 19);
            *(b + 294 * OS1_S1 + 45) =
                prefactor_x * *(b + 294 * OS1_S1 + 30) -
                p_over_q * *(b + 372 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 30);
            *(b + 294 * OS1_S1 + 46) =
                prefactor_z * *(b + 294 * OS1_S1 + 26) -
                p_over_q * *(b + 377 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 26);
            *(b + 294 * OS1_S1 + 47) =
                prefactor_x * *(b + 294 * OS1_S1 + 32) -
                p_over_q * *(b + 372 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 32);
            *(b + 294 * OS1_S1 + 48) =
                prefactor_y * *(b + 294 * OS1_S1 + 29) -
                p_over_q * *(b + 376 * OS1_S1 + 29) +
                one_over_two_q * *(b + 225 * OS1_S1 + 29);
            *(b + 294 * OS1_S1 + 49) =
                prefactor_x * *(b + 294 * OS1_S1 + 34) -
                p_over_q * *(b + 372 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 34);
            *(b + 294 * OS1_S1 + 50) =
                prefactor_y * *(b + 294 * OS1_S1 + 30) -
                p_over_q * *(b + 376 * OS1_S1 + 30) +
                one_over_two_q * *(b + 225 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 294 * OS1_S1 + 16);
            *(b + 294 * OS1_S1 + 51) =
                prefactor_z * *(b + 294 * OS1_S1 + 30) -
                p_over_q * *(b + 377 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 30);
            *(b + 294 * OS1_S1 + 52) =
                prefactor_z * *(b + 294 * OS1_S1 + 31) -
                p_over_q * *(b + 377 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 31) +
                one_over_two_q * *(b + 294 * OS1_S1 + 16);
            *(b + 294 * OS1_S1 + 53) =
                prefactor_y * *(b + 294 * OS1_S1 + 33) -
                p_over_q * *(b + 376 * OS1_S1 + 33) +
                one_over_two_q * *(b + 225 * OS1_S1 + 33) +
                one_over_two_q * *(b + 294 * OS1_S1 + 19);
            *(b + 294 * OS1_S1 + 54) =
                prefactor_y * *(b + 294 * OS1_S1 + 34) -
                p_over_q * *(b + 376 * OS1_S1 + 34) +
                one_over_two_q * *(b + 225 * OS1_S1 + 34);
            *(b + 294 * OS1_S1 + 55) =
                prefactor_z * *(b + 294 * OS1_S1 + 34) -
                p_over_q * *(b + 377 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 294 * OS1_S1 + 19);
            *(b + 295 * OS1_S1 + 35) =
                prefactor_x * *(b + 295 * OS1_S1 + 20) -
                p_over_q * *(b + 373 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 10);
            *(b + 295 * OS1_S1 + 36) = prefactor_y * *(b + 295 * OS1_S1 + 20) -
                                       p_over_q * *(b + 377 * OS1_S1 + 20);
            *(b + 295 * OS1_S1 + 37) =
                prefactor_z * *(b + 295 * OS1_S1 + 20) -
                p_over_q * *(b + 378 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 20);
            *(b + 295 * OS1_S1 + 38) =
                prefactor_y * *(b + 295 * OS1_S1 + 21) -
                p_over_q * *(b + 377 * OS1_S1 + 21) +
                one_over_two_q * *(b + 295 * OS1_S1 + 10);
            *(b + 295 * OS1_S1 + 39) = prefactor_y * *(b + 295 * OS1_S1 + 22) -
                                       p_over_q * *(b + 377 * OS1_S1 + 22);
            *(b + 295 * OS1_S1 + 40) =
                prefactor_z * *(b + 295 * OS1_S1 + 22) -
                p_over_q * *(b + 378 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 22) +
                one_over_two_q * *(b + 295 * OS1_S1 + 10);
            *(b + 295 * OS1_S1 + 41) =
                prefactor_x * *(b + 295 * OS1_S1 + 26) -
                p_over_q * *(b + 373 * OS1_S1 + 26) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 26) +
                one_over_two_q * *(b + 295 * OS1_S1 + 16);
            *(b + 295 * OS1_S1 + 42) =
                prefactor_z * *(b + 295 * OS1_S1 + 23) -
                p_over_q * *(b + 378 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 23);
            *(b + 295 * OS1_S1 + 43) = prefactor_y * *(b + 295 * OS1_S1 + 25) -
                                       p_over_q * *(b + 377 * OS1_S1 + 25);
            *(b + 295 * OS1_S1 + 44) =
                prefactor_x * *(b + 295 * OS1_S1 + 29) -
                p_over_q * *(b + 373 * OS1_S1 + 29) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 29) +
                one_over_two_q * *(b + 295 * OS1_S1 + 19);
            *(b + 295 * OS1_S1 + 45) =
                prefactor_x * *(b + 295 * OS1_S1 + 30) -
                p_over_q * *(b + 373 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 30);
            *(b + 295 * OS1_S1 + 46) =
                prefactor_z * *(b + 295 * OS1_S1 + 26) -
                p_over_q * *(b + 378 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 26);
            *(b + 295 * OS1_S1 + 47) =
                prefactor_x * *(b + 295 * OS1_S1 + 32) -
                p_over_q * *(b + 373 * OS1_S1 + 32) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 32);
            *(b + 295 * OS1_S1 + 48) = prefactor_y * *(b + 295 * OS1_S1 + 29) -
                                       p_over_q * *(b + 377 * OS1_S1 + 29);
            *(b + 295 * OS1_S1 + 49) =
                prefactor_x * *(b + 295 * OS1_S1 + 34) -
                p_over_q * *(b + 373 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 34);
            *(b + 295 * OS1_S1 + 50) =
                prefactor_y * *(b + 295 * OS1_S1 + 30) -
                p_over_q * *(b + 377 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 16);
            *(b + 295 * OS1_S1 + 51) =
                prefactor_z * *(b + 295 * OS1_S1 + 30) -
                p_over_q * *(b + 378 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 30);
            *(b + 295 * OS1_S1 + 52) =
                prefactor_z * *(b + 295 * OS1_S1 + 31) -
                p_over_q * *(b + 378 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 31) +
                one_over_two_q * *(b + 295 * OS1_S1 + 16);
            *(b + 295 * OS1_S1 + 53) =
                prefactor_y * *(b + 295 * OS1_S1 + 33) -
                p_over_q * *(b + 377 * OS1_S1 + 33) +
                one_over_two_q * *(b + 295 * OS1_S1 + 19);
            *(b + 295 * OS1_S1 + 54) = prefactor_y * *(b + 295 * OS1_S1 + 34) -
                                       p_over_q * *(b + 377 * OS1_S1 + 34);
            *(b + 295 * OS1_S1 + 55) =
                prefactor_z * *(b + 295 * OS1_S1 + 34) -
                p_over_q * *(b + 378 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 19);
            *(b + 296 * OS1_S1 + 35) =
                prefactor_x * *(b + 296 * OS1_S1 + 20) -
                p_over_q * *(b + 374 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 296 * OS1_S1 + 10);
            *(b + 296 * OS1_S1 + 36) =
                prefactor_y * *(b + 296 * OS1_S1 + 20) -
                p_over_q * *(b + 379 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 20);
            *(b + 296 * OS1_S1 + 37) = prefactor_z * *(b + 296 * OS1_S1 + 20) -
                                       p_over_q * *(b + 380 * OS1_S1 + 20);
            *(b + 296 * OS1_S1 + 38) =
                prefactor_y * *(b + 296 * OS1_S1 + 21) -
                p_over_q * *(b + 379 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 21) +
                one_over_two_q * *(b + 296 * OS1_S1 + 10);
            *(b + 296 * OS1_S1 + 39) = prefactor_z * *(b + 296 * OS1_S1 + 21) -
                                       p_over_q * *(b + 380 * OS1_S1 + 21);
            *(b + 296 * OS1_S1 + 40) =
                prefactor_z * *(b + 296 * OS1_S1 + 22) -
                p_over_q * *(b + 380 * OS1_S1 + 22) +
                one_over_two_q * *(b + 296 * OS1_S1 + 10);
            *(b + 296 * OS1_S1 + 41) =
                prefactor_x * *(b + 296 * OS1_S1 + 26) -
                p_over_q * *(b + 374 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 26) +
                one_over_two_q * *(b + 296 * OS1_S1 + 16);
            *(b + 296 * OS1_S1 + 42) = prefactor_z * *(b + 296 * OS1_S1 + 23) -
                                       p_over_q * *(b + 380 * OS1_S1 + 23);
            *(b + 296 * OS1_S1 + 43) =
                prefactor_y * *(b + 296 * OS1_S1 + 25) -
                p_over_q * *(b + 379 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 25);
            *(b + 296 * OS1_S1 + 44) =
                prefactor_x * *(b + 296 * OS1_S1 + 29) -
                p_over_q * *(b + 374 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 29) +
                one_over_two_q * *(b + 296 * OS1_S1 + 19);
            *(b + 296 * OS1_S1 + 45) =
                prefactor_x * *(b + 296 * OS1_S1 + 30) -
                p_over_q * *(b + 374 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 30);
            *(b + 296 * OS1_S1 + 46) = prefactor_z * *(b + 296 * OS1_S1 + 26) -
                                       p_over_q * *(b + 380 * OS1_S1 + 26);
            *(b + 296 * OS1_S1 + 47) =
                prefactor_x * *(b + 296 * OS1_S1 + 32) -
                p_over_q * *(b + 374 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 32);
            *(b + 296 * OS1_S1 + 48) =
                prefactor_y * *(b + 296 * OS1_S1 + 29) -
                p_over_q * *(b + 379 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 29);
            *(b + 296 * OS1_S1 + 49) =
                prefactor_x * *(b + 296 * OS1_S1 + 34) -
                p_over_q * *(b + 374 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 34);
            *(b + 296 * OS1_S1 + 50) =
                prefactor_y * *(b + 296 * OS1_S1 + 30) -
                p_over_q * *(b + 379 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 296 * OS1_S1 + 16);
            *(b + 296 * OS1_S1 + 51) = prefactor_z * *(b + 296 * OS1_S1 + 30) -
                                       p_over_q * *(b + 380 * OS1_S1 + 30);
            *(b + 296 * OS1_S1 + 52) =
                prefactor_z * *(b + 296 * OS1_S1 + 31) -
                p_over_q * *(b + 380 * OS1_S1 + 31) +
                one_over_two_q * *(b + 296 * OS1_S1 + 16);
            *(b + 296 * OS1_S1 + 53) =
                prefactor_y * *(b + 296 * OS1_S1 + 33) -
                p_over_q * *(b + 379 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 33) +
                one_over_two_q * *(b + 296 * OS1_S1 + 19);
            *(b + 296 * OS1_S1 + 54) =
                prefactor_y * *(b + 296 * OS1_S1 + 34) -
                p_over_q * *(b + 379 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 34);
            *(b + 296 * OS1_S1 + 55) =
                prefactor_z * *(b + 296 * OS1_S1 + 34) -
                p_over_q * *(b + 380 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 296 * OS1_S1 + 19);
            *(b + 297 * OS1_S1 + 35) =
                prefactor_x * *(b + 297 * OS1_S1 + 20) -
                p_over_q * *(b + 375 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 10);
            *(b + 297 * OS1_S1 + 36) =
                prefactor_y * *(b + 297 * OS1_S1 + 20) -
                p_over_q * *(b + 380 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 20);
            *(b + 297 * OS1_S1 + 37) =
                prefactor_z * *(b + 297 * OS1_S1 + 20) -
                p_over_q * *(b + 381 * OS1_S1 + 20) +
                one_over_two_q * *(b + 226 * OS1_S1 + 20);
            *(b + 297 * OS1_S1 + 38) =
                prefactor_y * *(b + 297 * OS1_S1 + 21) -
                p_over_q * *(b + 380 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 21) +
                one_over_two_q * *(b + 297 * OS1_S1 + 10);
            *(b + 297 * OS1_S1 + 39) =
                prefactor_z * *(b + 297 * OS1_S1 + 21) -
                p_over_q * *(b + 381 * OS1_S1 + 21) +
                one_over_two_q * *(b + 226 * OS1_S1 + 21);
            *(b + 297 * OS1_S1 + 40) =
                prefactor_z * *(b + 297 * OS1_S1 + 22) -
                p_over_q * *(b + 381 * OS1_S1 + 22) +
                one_over_two_q * *(b + 226 * OS1_S1 + 22) +
                one_over_two_q * *(b + 297 * OS1_S1 + 10);
            *(b + 297 * OS1_S1 + 41) =
                prefactor_x * *(b + 297 * OS1_S1 + 26) -
                p_over_q * *(b + 375 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 26) +
                one_over_two_q * *(b + 297 * OS1_S1 + 16);
            *(b + 297 * OS1_S1 + 42) =
                prefactor_z * *(b + 297 * OS1_S1 + 23) -
                p_over_q * *(b + 381 * OS1_S1 + 23) +
                one_over_two_q * *(b + 226 * OS1_S1 + 23);
            *(b + 297 * OS1_S1 + 43) =
                prefactor_y * *(b + 297 * OS1_S1 + 25) -
                p_over_q * *(b + 380 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 25);
            *(b + 297 * OS1_S1 + 44) =
                prefactor_x * *(b + 297 * OS1_S1 + 29) -
                p_over_q * *(b + 375 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 29) +
                one_over_two_q * *(b + 297 * OS1_S1 + 19);
            *(b + 297 * OS1_S1 + 45) =
                prefactor_x * *(b + 297 * OS1_S1 + 30) -
                p_over_q * *(b + 375 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 30);
            *(b + 297 * OS1_S1 + 46) =
                prefactor_z * *(b + 297 * OS1_S1 + 26) -
                p_over_q * *(b + 381 * OS1_S1 + 26) +
                one_over_two_q * *(b + 226 * OS1_S1 + 26);
            *(b + 297 * OS1_S1 + 47) =
                prefactor_x * *(b + 297 * OS1_S1 + 32) -
                p_over_q * *(b + 375 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 32);
            *(b + 297 * OS1_S1 + 48) =
                prefactor_y * *(b + 297 * OS1_S1 + 29) -
                p_over_q * *(b + 380 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 29);
            *(b + 297 * OS1_S1 + 49) =
                prefactor_x * *(b + 297 * OS1_S1 + 34) -
                p_over_q * *(b + 375 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 34);
            *(b + 297 * OS1_S1 + 50) =
                prefactor_y * *(b + 297 * OS1_S1 + 30) -
                p_over_q * *(b + 380 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 16);
            *(b + 297 * OS1_S1 + 51) =
                prefactor_z * *(b + 297 * OS1_S1 + 30) -
                p_over_q * *(b + 381 * OS1_S1 + 30) +
                one_over_two_q * *(b + 226 * OS1_S1 + 30);
            *(b + 297 * OS1_S1 + 52) =
                prefactor_z * *(b + 297 * OS1_S1 + 31) -
                p_over_q * *(b + 381 * OS1_S1 + 31) +
                one_over_two_q * *(b + 226 * OS1_S1 + 31) +
                one_over_two_q * *(b + 297 * OS1_S1 + 16);
            *(b + 297 * OS1_S1 + 53) =
                prefactor_y * *(b + 297 * OS1_S1 + 33) -
                p_over_q * *(b + 380 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 33) +
                one_over_two_q * *(b + 297 * OS1_S1 + 19);
            *(b + 297 * OS1_S1 + 54) =
                prefactor_y * *(b + 297 * OS1_S1 + 34) -
                p_over_q * *(b + 380 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 34);
            *(b + 297 * OS1_S1 + 55) =
                prefactor_z * *(b + 297 * OS1_S1 + 34) -
                p_over_q * *(b + 381 * OS1_S1 + 34) +
                one_over_two_q * *(b + 226 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 19);
            *(b + 298 * OS1_S1 + 35) =
                prefactor_x * *(b + 298 * OS1_S1 + 20) -
                p_over_q * *(b + 376 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 298 * OS1_S1 + 10);
            *(b + 298 * OS1_S1 + 36) =
                prefactor_y * *(b + 298 * OS1_S1 + 20) -
                p_over_q * *(b + 381 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 20);
            *(b + 298 * OS1_S1 + 37) =
                prefactor_z * *(b + 298 * OS1_S1 + 20) -
                p_over_q * *(b + 382 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 20);
            *(b + 298 * OS1_S1 + 38) =
                prefactor_y * *(b + 298 * OS1_S1 + 21) -
                p_over_q * *(b + 381 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 21) +
                one_over_two_q * *(b + 298 * OS1_S1 + 10);
            *(b + 298 * OS1_S1 + 39) =
                prefactor_z * *(b + 298 * OS1_S1 + 21) -
                p_over_q * *(b + 382 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 21);
            *(b + 298 * OS1_S1 + 40) =
                prefactor_z * *(b + 298 * OS1_S1 + 22) -
                p_over_q * *(b + 382 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 22) +
                one_over_two_q * *(b + 298 * OS1_S1 + 10);
            *(b + 298 * OS1_S1 + 41) =
                prefactor_x * *(b + 298 * OS1_S1 + 26) -
                p_over_q * *(b + 376 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 26) +
                one_over_two_q * *(b + 298 * OS1_S1 + 16);
            *(b + 298 * OS1_S1 + 42) =
                prefactor_z * *(b + 298 * OS1_S1 + 23) -
                p_over_q * *(b + 382 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 23);
            *(b + 298 * OS1_S1 + 43) =
                prefactor_y * *(b + 298 * OS1_S1 + 25) -
                p_over_q * *(b + 381 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 25);
            *(b + 298 * OS1_S1 + 44) =
                prefactor_x * *(b + 298 * OS1_S1 + 29) -
                p_over_q * *(b + 376 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 29) +
                one_over_two_q * *(b + 298 * OS1_S1 + 19);
            *(b + 298 * OS1_S1 + 45) =
                prefactor_x * *(b + 298 * OS1_S1 + 30) -
                p_over_q * *(b + 376 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 30);
            *(b + 298 * OS1_S1 + 46) =
                prefactor_z * *(b + 298 * OS1_S1 + 26) -
                p_over_q * *(b + 382 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 26);
            *(b + 298 * OS1_S1 + 47) =
                prefactor_x * *(b + 298 * OS1_S1 + 32) -
                p_over_q * *(b + 376 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 32);
            *(b + 298 * OS1_S1 + 48) =
                prefactor_y * *(b + 298 * OS1_S1 + 29) -
                p_over_q * *(b + 381 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 29);
            *(b + 298 * OS1_S1 + 49) =
                prefactor_x * *(b + 298 * OS1_S1 + 34) -
                p_over_q * *(b + 376 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 34);
            *(b + 298 * OS1_S1 + 50) =
                prefactor_y * *(b + 298 * OS1_S1 + 30) -
                p_over_q * *(b + 381 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 298 * OS1_S1 + 16);
            *(b + 298 * OS1_S1 + 51) =
                prefactor_z * *(b + 298 * OS1_S1 + 30) -
                p_over_q * *(b + 382 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 30);
            *(b + 298 * OS1_S1 + 52) =
                prefactor_z * *(b + 298 * OS1_S1 + 31) -
                p_over_q * *(b + 382 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 31) +
                one_over_two_q * *(b + 298 * OS1_S1 + 16);
            *(b + 298 * OS1_S1 + 53) =
                prefactor_y * *(b + 298 * OS1_S1 + 33) -
                p_over_q * *(b + 381 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 33) +
                one_over_two_q * *(b + 298 * OS1_S1 + 19);
            *(b + 298 * OS1_S1 + 54) =
                prefactor_y * *(b + 298 * OS1_S1 + 34) -
                p_over_q * *(b + 381 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 34);
            *(b + 298 * OS1_S1 + 55) =
                prefactor_z * *(b + 298 * OS1_S1 + 34) -
                p_over_q * *(b + 382 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 298 * OS1_S1 + 19);
            *(b + 299 * OS1_S1 + 35) =
                prefactor_x * *(b + 299 * OS1_S1 + 20) -
                p_over_q * *(b + 377 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 10);
            *(b + 299 * OS1_S1 + 36) =
                prefactor_y * *(b + 299 * OS1_S1 + 20) -
                p_over_q * *(b + 382 * OS1_S1 + 20) +
                one_over_two_q * *(b + 229 * OS1_S1 + 20);
            *(b + 299 * OS1_S1 + 37) =
                prefactor_z * *(b + 299 * OS1_S1 + 20) -
                p_over_q * *(b + 383 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 20);
            *(b + 299 * OS1_S1 + 38) =
                prefactor_y * *(b + 299 * OS1_S1 + 21) -
                p_over_q * *(b + 382 * OS1_S1 + 21) +
                one_over_two_q * *(b + 229 * OS1_S1 + 21) +
                one_over_two_q * *(b + 299 * OS1_S1 + 10);
            *(b + 299 * OS1_S1 + 39) =
                prefactor_y * *(b + 299 * OS1_S1 + 22) -
                p_over_q * *(b + 382 * OS1_S1 + 22) +
                one_over_two_q * *(b + 229 * OS1_S1 + 22);
            *(b + 299 * OS1_S1 + 40) =
                prefactor_z * *(b + 299 * OS1_S1 + 22) -
                p_over_q * *(b + 383 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 22) +
                one_over_two_q * *(b + 299 * OS1_S1 + 10);
            *(b + 299 * OS1_S1 + 41) =
                prefactor_x * *(b + 299 * OS1_S1 + 26) -
                p_over_q * *(b + 377 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 26) +
                one_over_two_q * *(b + 299 * OS1_S1 + 16);
            *(b + 299 * OS1_S1 + 42) =
                prefactor_z * *(b + 299 * OS1_S1 + 23) -
                p_over_q * *(b + 383 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 23);
            *(b + 299 * OS1_S1 + 43) =
                prefactor_y * *(b + 299 * OS1_S1 + 25) -
                p_over_q * *(b + 382 * OS1_S1 + 25) +
                one_over_two_q * *(b + 229 * OS1_S1 + 25);
            *(b + 299 * OS1_S1 + 44) =
                prefactor_x * *(b + 299 * OS1_S1 + 29) -
                p_over_q * *(b + 377 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 29) +
                one_over_two_q * *(b + 299 * OS1_S1 + 19);
            *(b + 299 * OS1_S1 + 45) =
                prefactor_x * *(b + 299 * OS1_S1 + 30) -
                p_over_q * *(b + 377 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 30);
            *(b + 299 * OS1_S1 + 46) =
                prefactor_z * *(b + 299 * OS1_S1 + 26) -
                p_over_q * *(b + 383 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 26);
            *(b + 299 * OS1_S1 + 47) =
                prefactor_x * *(b + 299 * OS1_S1 + 32) -
                p_over_q * *(b + 377 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 32);
            *(b + 299 * OS1_S1 + 48) =
                prefactor_y * *(b + 299 * OS1_S1 + 29) -
                p_over_q * *(b + 382 * OS1_S1 + 29) +
                one_over_two_q * *(b + 229 * OS1_S1 + 29);
            *(b + 299 * OS1_S1 + 49) =
                prefactor_x * *(b + 299 * OS1_S1 + 34) -
                p_over_q * *(b + 377 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 34);
            *(b + 299 * OS1_S1 + 50) =
                prefactor_y * *(b + 299 * OS1_S1 + 30) -
                p_over_q * *(b + 382 * OS1_S1 + 30) +
                one_over_two_q * *(b + 229 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 16);
            *(b + 299 * OS1_S1 + 51) =
                prefactor_z * *(b + 299 * OS1_S1 + 30) -
                p_over_q * *(b + 383 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 30);
            *(b + 299 * OS1_S1 + 52) =
                prefactor_z * *(b + 299 * OS1_S1 + 31) -
                p_over_q * *(b + 383 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 31) +
                one_over_two_q * *(b + 299 * OS1_S1 + 16);
            *(b + 299 * OS1_S1 + 53) =
                prefactor_y * *(b + 299 * OS1_S1 + 33) -
                p_over_q * *(b + 382 * OS1_S1 + 33) +
                one_over_two_q * *(b + 229 * OS1_S1 + 33) +
                one_over_two_q * *(b + 299 * OS1_S1 + 19);
            *(b + 299 * OS1_S1 + 54) =
                prefactor_y * *(b + 299 * OS1_S1 + 34) -
                p_over_q * *(b + 382 * OS1_S1 + 34) +
                one_over_two_q * *(b + 229 * OS1_S1 + 34);
            *(b + 299 * OS1_S1 + 55) =
                prefactor_z * *(b + 299 * OS1_S1 + 34) -
                p_over_q * *(b + 383 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 19);
            *(b + 300 * OS1_S1 + 35) =
                prefactor_x * *(b + 300 * OS1_S1 + 20) -
                p_over_q * *(b + 378 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 300 * OS1_S1 + 10);
            *(b + 300 * OS1_S1 + 36) = prefactor_y * *(b + 300 * OS1_S1 + 20) -
                                       p_over_q * *(b + 383 * OS1_S1 + 20);
            *(b + 300 * OS1_S1 + 37) =
                prefactor_z * *(b + 300 * OS1_S1 + 20) -
                p_over_q * *(b + 384 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 20);
            *(b + 300 * OS1_S1 + 38) =
                prefactor_y * *(b + 300 * OS1_S1 + 21) -
                p_over_q * *(b + 383 * OS1_S1 + 21) +
                one_over_two_q * *(b + 300 * OS1_S1 + 10);
            *(b + 300 * OS1_S1 + 39) = prefactor_y * *(b + 300 * OS1_S1 + 22) -
                                       p_over_q * *(b + 383 * OS1_S1 + 22);
            *(b + 300 * OS1_S1 + 40) =
                prefactor_z * *(b + 300 * OS1_S1 + 22) -
                p_over_q * *(b + 384 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 22) +
                one_over_two_q * *(b + 300 * OS1_S1 + 10);
            *(b + 300 * OS1_S1 + 41) =
                prefactor_x * *(b + 300 * OS1_S1 + 26) -
                p_over_q * *(b + 378 * OS1_S1 + 26) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 26) +
                one_over_two_q * *(b + 300 * OS1_S1 + 16);
            *(b + 300 * OS1_S1 + 42) =
                prefactor_z * *(b + 300 * OS1_S1 + 23) -
                p_over_q * *(b + 384 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 23);
            *(b + 300 * OS1_S1 + 43) = prefactor_y * *(b + 300 * OS1_S1 + 25) -
                                       p_over_q * *(b + 383 * OS1_S1 + 25);
            *(b + 300 * OS1_S1 + 44) =
                prefactor_x * *(b + 300 * OS1_S1 + 29) -
                p_over_q * *(b + 378 * OS1_S1 + 29) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 29) +
                one_over_two_q * *(b + 300 * OS1_S1 + 19);
            *(b + 300 * OS1_S1 + 45) =
                prefactor_x * *(b + 300 * OS1_S1 + 30) -
                p_over_q * *(b + 378 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 30);
            *(b + 300 * OS1_S1 + 46) =
                prefactor_z * *(b + 300 * OS1_S1 + 26) -
                p_over_q * *(b + 384 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 26);
            *(b + 300 * OS1_S1 + 47) =
                prefactor_x * *(b + 300 * OS1_S1 + 32) -
                p_over_q * *(b + 378 * OS1_S1 + 32) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 32);
            *(b + 300 * OS1_S1 + 48) = prefactor_y * *(b + 300 * OS1_S1 + 29) -
                                       p_over_q * *(b + 383 * OS1_S1 + 29);
            *(b + 300 * OS1_S1 + 49) =
                prefactor_x * *(b + 300 * OS1_S1 + 34) -
                p_over_q * *(b + 378 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 34);
            *(b + 300 * OS1_S1 + 50) =
                prefactor_y * *(b + 300 * OS1_S1 + 30) -
                p_over_q * *(b + 383 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 300 * OS1_S1 + 16);
            *(b + 300 * OS1_S1 + 51) =
                prefactor_z * *(b + 300 * OS1_S1 + 30) -
                p_over_q * *(b + 384 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 30);
            *(b + 300 * OS1_S1 + 52) =
                prefactor_z * *(b + 300 * OS1_S1 + 31) -
                p_over_q * *(b + 384 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 31) +
                one_over_two_q * *(b + 300 * OS1_S1 + 16);
            *(b + 300 * OS1_S1 + 53) =
                prefactor_y * *(b + 300 * OS1_S1 + 33) -
                p_over_q * *(b + 383 * OS1_S1 + 33) +
                one_over_two_q * *(b + 300 * OS1_S1 + 19);
            *(b + 300 * OS1_S1 + 54) = prefactor_y * *(b + 300 * OS1_S1 + 34) -
                                       p_over_q * *(b + 383 * OS1_S1 + 34);
            *(b + 300 * OS1_S1 + 55) =
                prefactor_z * *(b + 300 * OS1_S1 + 34) -
                p_over_q * *(b + 384 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 300 * OS1_S1 + 19);
            *(b + 301 * OS1_S1 + 35) =
                prefactor_x * *(b + 301 * OS1_S1 + 20) -
                p_over_q * *(b + 379 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 301 * OS1_S1 + 10);
            *(b + 301 * OS1_S1 + 36) =
                prefactor_y * *(b + 301 * OS1_S1 + 20) -
                p_over_q * *(b + 385 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 20);
            *(b + 301 * OS1_S1 + 37) = prefactor_z * *(b + 301 * OS1_S1 + 20) -
                                       p_over_q * *(b + 386 * OS1_S1 + 20);
            *(b + 301 * OS1_S1 + 38) =
                prefactor_y * *(b + 301 * OS1_S1 + 21) -
                p_over_q * *(b + 385 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 21) +
                one_over_two_q * *(b + 301 * OS1_S1 + 10);
            *(b + 301 * OS1_S1 + 39) = prefactor_z * *(b + 301 * OS1_S1 + 21) -
                                       p_over_q * *(b + 386 * OS1_S1 + 21);
            *(b + 301 * OS1_S1 + 40) =
                prefactor_z * *(b + 301 * OS1_S1 + 22) -
                p_over_q * *(b + 386 * OS1_S1 + 22) +
                one_over_two_q * *(b + 301 * OS1_S1 + 10);
            *(b + 301 * OS1_S1 + 41) =
                prefactor_x * *(b + 301 * OS1_S1 + 26) -
                p_over_q * *(b + 379 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 26) +
                one_over_two_q * *(b + 301 * OS1_S1 + 16);
            *(b + 301 * OS1_S1 + 42) = prefactor_z * *(b + 301 * OS1_S1 + 23) -
                                       p_over_q * *(b + 386 * OS1_S1 + 23);
            *(b + 301 * OS1_S1 + 43) =
                prefactor_y * *(b + 301 * OS1_S1 + 25) -
                p_over_q * *(b + 385 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 25);
            *(b + 301 * OS1_S1 + 44) =
                prefactor_x * *(b + 301 * OS1_S1 + 29) -
                p_over_q * *(b + 379 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 29) +
                one_over_two_q * *(b + 301 * OS1_S1 + 19);
            *(b + 301 * OS1_S1 + 45) =
                prefactor_x * *(b + 301 * OS1_S1 + 30) -
                p_over_q * *(b + 379 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 30);
            *(b + 301 * OS1_S1 + 46) = prefactor_z * *(b + 301 * OS1_S1 + 26) -
                                       p_over_q * *(b + 386 * OS1_S1 + 26);
            *(b + 301 * OS1_S1 + 47) =
                prefactor_x * *(b + 301 * OS1_S1 + 32) -
                p_over_q * *(b + 379 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 32);
            *(b + 301 * OS1_S1 + 48) =
                prefactor_y * *(b + 301 * OS1_S1 + 29) -
                p_over_q * *(b + 385 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 29);
            *(b + 301 * OS1_S1 + 49) =
                prefactor_x * *(b + 301 * OS1_S1 + 34) -
                p_over_q * *(b + 379 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 34);
            *(b + 301 * OS1_S1 + 50) =
                prefactor_y * *(b + 301 * OS1_S1 + 30) -
                p_over_q * *(b + 385 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 301 * OS1_S1 + 16);
            *(b + 301 * OS1_S1 + 51) = prefactor_z * *(b + 301 * OS1_S1 + 30) -
                                       p_over_q * *(b + 386 * OS1_S1 + 30);
            *(b + 301 * OS1_S1 + 52) =
                prefactor_z * *(b + 301 * OS1_S1 + 31) -
                p_over_q * *(b + 386 * OS1_S1 + 31) +
                one_over_two_q * *(b + 301 * OS1_S1 + 16);
            *(b + 301 * OS1_S1 + 53) =
                prefactor_y * *(b + 301 * OS1_S1 + 33) -
                p_over_q * *(b + 385 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 33) +
                one_over_two_q * *(b + 301 * OS1_S1 + 19);
            *(b + 301 * OS1_S1 + 54) =
                prefactor_y * *(b + 301 * OS1_S1 + 34) -
                p_over_q * *(b + 385 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 34);
            *(b + 301 * OS1_S1 + 55) =
                prefactor_z * *(b + 301 * OS1_S1 + 34) -
                p_over_q * *(b + 386 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 301 * OS1_S1 + 19);
            *(b + 302 * OS1_S1 + 35) =
                prefactor_x * *(b + 302 * OS1_S1 + 20) -
                p_over_q * *(b + 380 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 302 * OS1_S1 + 10);
            *(b + 302 * OS1_S1 + 36) =
                prefactor_y * *(b + 302 * OS1_S1 + 20) -
                p_over_q * *(b + 386 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 20);
            *(b + 302 * OS1_S1 + 37) =
                prefactor_z * *(b + 302 * OS1_S1 + 20) -
                p_over_q * *(b + 387 * OS1_S1 + 20) +
                one_over_two_q * *(b + 230 * OS1_S1 + 20);
            *(b + 302 * OS1_S1 + 38) =
                prefactor_y * *(b + 302 * OS1_S1 + 21) -
                p_over_q * *(b + 386 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 21) +
                one_over_two_q * *(b + 302 * OS1_S1 + 10);
            *(b + 302 * OS1_S1 + 39) =
                prefactor_z * *(b + 302 * OS1_S1 + 21) -
                p_over_q * *(b + 387 * OS1_S1 + 21) +
                one_over_two_q * *(b + 230 * OS1_S1 + 21);
            *(b + 302 * OS1_S1 + 40) =
                prefactor_z * *(b + 302 * OS1_S1 + 22) -
                p_over_q * *(b + 387 * OS1_S1 + 22) +
                one_over_two_q * *(b + 230 * OS1_S1 + 22) +
                one_over_two_q * *(b + 302 * OS1_S1 + 10);
            *(b + 302 * OS1_S1 + 41) =
                prefactor_x * *(b + 302 * OS1_S1 + 26) -
                p_over_q * *(b + 380 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 26) +
                one_over_two_q * *(b + 302 * OS1_S1 + 16);
            *(b + 302 * OS1_S1 + 42) =
                prefactor_z * *(b + 302 * OS1_S1 + 23) -
                p_over_q * *(b + 387 * OS1_S1 + 23) +
                one_over_two_q * *(b + 230 * OS1_S1 + 23);
            *(b + 302 * OS1_S1 + 43) =
                prefactor_y * *(b + 302 * OS1_S1 + 25) -
                p_over_q * *(b + 386 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 25);
            *(b + 302 * OS1_S1 + 44) =
                prefactor_x * *(b + 302 * OS1_S1 + 29) -
                p_over_q * *(b + 380 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 29) +
                one_over_two_q * *(b + 302 * OS1_S1 + 19);
            *(b + 302 * OS1_S1 + 45) =
                prefactor_x * *(b + 302 * OS1_S1 + 30) -
                p_over_q * *(b + 380 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 30);
            *(b + 302 * OS1_S1 + 46) =
                prefactor_z * *(b + 302 * OS1_S1 + 26) -
                p_over_q * *(b + 387 * OS1_S1 + 26) +
                one_over_two_q * *(b + 230 * OS1_S1 + 26);
            *(b + 302 * OS1_S1 + 47) =
                prefactor_x * *(b + 302 * OS1_S1 + 32) -
                p_over_q * *(b + 380 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 32);
            *(b + 302 * OS1_S1 + 48) =
                prefactor_y * *(b + 302 * OS1_S1 + 29) -
                p_over_q * *(b + 386 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 29);
            *(b + 302 * OS1_S1 + 49) =
                prefactor_x * *(b + 302 * OS1_S1 + 34) -
                p_over_q * *(b + 380 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 34);
            *(b + 302 * OS1_S1 + 50) =
                prefactor_y * *(b + 302 * OS1_S1 + 30) -
                p_over_q * *(b + 386 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 302 * OS1_S1 + 16);
            *(b + 302 * OS1_S1 + 51) =
                prefactor_z * *(b + 302 * OS1_S1 + 30) -
                p_over_q * *(b + 387 * OS1_S1 + 30) +
                one_over_two_q * *(b + 230 * OS1_S1 + 30);
            *(b + 302 * OS1_S1 + 52) =
                prefactor_z * *(b + 302 * OS1_S1 + 31) -
                p_over_q * *(b + 387 * OS1_S1 + 31) +
                one_over_two_q * *(b + 230 * OS1_S1 + 31) +
                one_over_two_q * *(b + 302 * OS1_S1 + 16);
            *(b + 302 * OS1_S1 + 53) =
                prefactor_y * *(b + 302 * OS1_S1 + 33) -
                p_over_q * *(b + 386 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 33) +
                one_over_two_q * *(b + 302 * OS1_S1 + 19);
            *(b + 302 * OS1_S1 + 54) =
                prefactor_y * *(b + 302 * OS1_S1 + 34) -
                p_over_q * *(b + 386 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 34);
            *(b + 302 * OS1_S1 + 55) =
                prefactor_z * *(b + 302 * OS1_S1 + 34) -
                p_over_q * *(b + 387 * OS1_S1 + 34) +
                one_over_two_q * *(b + 230 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 302 * OS1_S1 + 19);
            *(b + 303 * OS1_S1 + 35) =
                prefactor_x * *(b + 303 * OS1_S1 + 20) -
                p_over_q * *(b + 381 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 10);
            *(b + 303 * OS1_S1 + 36) =
                prefactor_y * *(b + 303 * OS1_S1 + 20) -
                p_over_q * *(b + 387 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 20);
            *(b + 303 * OS1_S1 + 37) =
                prefactor_z * *(b + 303 * OS1_S1 + 20) -
                p_over_q * *(b + 388 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 20);
            *(b + 303 * OS1_S1 + 38) =
                prefactor_y * *(b + 303 * OS1_S1 + 21) -
                p_over_q * *(b + 387 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 21) +
                one_over_two_q * *(b + 303 * OS1_S1 + 10);
            *(b + 303 * OS1_S1 + 39) =
                prefactor_z * *(b + 303 * OS1_S1 + 21) -
                p_over_q * *(b + 388 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 21);
            *(b + 303 * OS1_S1 + 40) =
                prefactor_z * *(b + 303 * OS1_S1 + 22) -
                p_over_q * *(b + 388 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 22) +
                one_over_two_q * *(b + 303 * OS1_S1 + 10);
            *(b + 303 * OS1_S1 + 41) =
                prefactor_x * *(b + 303 * OS1_S1 + 26) -
                p_over_q * *(b + 381 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 26) +
                one_over_two_q * *(b + 303 * OS1_S1 + 16);
            *(b + 303 * OS1_S1 + 42) =
                prefactor_z * *(b + 303 * OS1_S1 + 23) -
                p_over_q * *(b + 388 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 23);
            *(b + 303 * OS1_S1 + 43) =
                prefactor_y * *(b + 303 * OS1_S1 + 25) -
                p_over_q * *(b + 387 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 25);
            *(b + 303 * OS1_S1 + 44) =
                prefactor_x * *(b + 303 * OS1_S1 + 29) -
                p_over_q * *(b + 381 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 29) +
                one_over_two_q * *(b + 303 * OS1_S1 + 19);
            *(b + 303 * OS1_S1 + 45) =
                prefactor_x * *(b + 303 * OS1_S1 + 30) -
                p_over_q * *(b + 381 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 30);
            *(b + 303 * OS1_S1 + 46) =
                prefactor_z * *(b + 303 * OS1_S1 + 26) -
                p_over_q * *(b + 388 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 26);
            *(b + 303 * OS1_S1 + 47) =
                prefactor_x * *(b + 303 * OS1_S1 + 32) -
                p_over_q * *(b + 381 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 32);
            *(b + 303 * OS1_S1 + 48) =
                prefactor_y * *(b + 303 * OS1_S1 + 29) -
                p_over_q * *(b + 387 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 29);
            *(b + 303 * OS1_S1 + 49) =
                prefactor_x * *(b + 303 * OS1_S1 + 34) -
                p_over_q * *(b + 381 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 34);
            *(b + 303 * OS1_S1 + 50) =
                prefactor_y * *(b + 303 * OS1_S1 + 30) -
                p_over_q * *(b + 387 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 16);
            *(b + 303 * OS1_S1 + 51) =
                prefactor_z * *(b + 303 * OS1_S1 + 30) -
                p_over_q * *(b + 388 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 30);
            *(b + 303 * OS1_S1 + 52) =
                prefactor_z * *(b + 303 * OS1_S1 + 31) -
                p_over_q * *(b + 388 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 31) +
                one_over_two_q * *(b + 303 * OS1_S1 + 16);
            *(b + 303 * OS1_S1 + 53) =
                prefactor_y * *(b + 303 * OS1_S1 + 33) -
                p_over_q * *(b + 387 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 33) +
                one_over_two_q * *(b + 303 * OS1_S1 + 19);
            *(b + 303 * OS1_S1 + 54) =
                prefactor_y * *(b + 303 * OS1_S1 + 34) -
                p_over_q * *(b + 387 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 34);
            *(b + 303 * OS1_S1 + 55) =
                prefactor_z * *(b + 303 * OS1_S1 + 34) -
                p_over_q * *(b + 388 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 19);
            *(b + 304 * OS1_S1 + 35) =
                prefactor_x * *(b + 304 * OS1_S1 + 20) -
                p_over_q * *(b + 382 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 10);
            *(b + 304 * OS1_S1 + 36) =
                prefactor_y * *(b + 304 * OS1_S1 + 20) -
                p_over_q * *(b + 388 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 20);
            *(b + 304 * OS1_S1 + 37) =
                prefactor_z * *(b + 304 * OS1_S1 + 20) -
                p_over_q * *(b + 389 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 20);
            *(b + 304 * OS1_S1 + 38) =
                prefactor_y * *(b + 304 * OS1_S1 + 21) -
                p_over_q * *(b + 388 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 21) +
                one_over_two_q * *(b + 304 * OS1_S1 + 10);
            *(b + 304 * OS1_S1 + 39) =
                prefactor_y * *(b + 304 * OS1_S1 + 22) -
                p_over_q * *(b + 388 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 22);
            *(b + 304 * OS1_S1 + 40) =
                prefactor_z * *(b + 304 * OS1_S1 + 22) -
                p_over_q * *(b + 389 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 22) +
                one_over_two_q * *(b + 304 * OS1_S1 + 10);
            *(b + 304 * OS1_S1 + 41) =
                prefactor_x * *(b + 304 * OS1_S1 + 26) -
                p_over_q * *(b + 382 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 26) +
                one_over_two_q * *(b + 304 * OS1_S1 + 16);
            *(b + 304 * OS1_S1 + 42) =
                prefactor_z * *(b + 304 * OS1_S1 + 23) -
                p_over_q * *(b + 389 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 23);
            *(b + 304 * OS1_S1 + 43) =
                prefactor_y * *(b + 304 * OS1_S1 + 25) -
                p_over_q * *(b + 388 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 25);
            *(b + 304 * OS1_S1 + 44) =
                prefactor_x * *(b + 304 * OS1_S1 + 29) -
                p_over_q * *(b + 382 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 29) +
                one_over_two_q * *(b + 304 * OS1_S1 + 19);
            *(b + 304 * OS1_S1 + 45) =
                prefactor_x * *(b + 304 * OS1_S1 + 30) -
                p_over_q * *(b + 382 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 30);
            *(b + 304 * OS1_S1 + 46) =
                prefactor_z * *(b + 304 * OS1_S1 + 26) -
                p_over_q * *(b + 389 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 26);
            *(b + 304 * OS1_S1 + 47) =
                prefactor_x * *(b + 304 * OS1_S1 + 32) -
                p_over_q * *(b + 382 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 32);
            *(b + 304 * OS1_S1 + 48) =
                prefactor_y * *(b + 304 * OS1_S1 + 29) -
                p_over_q * *(b + 388 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 29);
            *(b + 304 * OS1_S1 + 49) =
                prefactor_x * *(b + 304 * OS1_S1 + 34) -
                p_over_q * *(b + 382 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 34);
            *(b + 304 * OS1_S1 + 50) =
                prefactor_y * *(b + 304 * OS1_S1 + 30) -
                p_over_q * *(b + 388 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 16);
            *(b + 304 * OS1_S1 + 51) =
                prefactor_z * *(b + 304 * OS1_S1 + 30) -
                p_over_q * *(b + 389 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 30);
            *(b + 304 * OS1_S1 + 52) =
                prefactor_z * *(b + 304 * OS1_S1 + 31) -
                p_over_q * *(b + 389 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 31) +
                one_over_two_q * *(b + 304 * OS1_S1 + 16);
            *(b + 304 * OS1_S1 + 53) =
                prefactor_y * *(b + 304 * OS1_S1 + 33) -
                p_over_q * *(b + 388 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 33) +
                one_over_two_q * *(b + 304 * OS1_S1 + 19);
            *(b + 304 * OS1_S1 + 54) =
                prefactor_y * *(b + 304 * OS1_S1 + 34) -
                p_over_q * *(b + 388 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 34);
            *(b + 304 * OS1_S1 + 55) =
                prefactor_z * *(b + 304 * OS1_S1 + 34) -
                p_over_q * *(b + 389 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 19);
            *(b + 305 * OS1_S1 + 35) =
                prefactor_x * *(b + 305 * OS1_S1 + 20) -
                p_over_q * *(b + 383 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 305 * OS1_S1 + 10);
            *(b + 305 * OS1_S1 + 36) =
                prefactor_y * *(b + 305 * OS1_S1 + 20) -
                p_over_q * *(b + 389 * OS1_S1 + 20) +
                one_over_two_q * *(b + 234 * OS1_S1 + 20);
            *(b + 305 * OS1_S1 + 37) =
                prefactor_z * *(b + 305 * OS1_S1 + 20) -
                p_over_q * *(b + 390 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 20);
            *(b + 305 * OS1_S1 + 38) =
                prefactor_y * *(b + 305 * OS1_S1 + 21) -
                p_over_q * *(b + 389 * OS1_S1 + 21) +
                one_over_two_q * *(b + 234 * OS1_S1 + 21) +
                one_over_two_q * *(b + 305 * OS1_S1 + 10);
            *(b + 305 * OS1_S1 + 39) =
                prefactor_y * *(b + 305 * OS1_S1 + 22) -
                p_over_q * *(b + 389 * OS1_S1 + 22) +
                one_over_two_q * *(b + 234 * OS1_S1 + 22);
            *(b + 305 * OS1_S1 + 40) =
                prefactor_z * *(b + 305 * OS1_S1 + 22) -
                p_over_q * *(b + 390 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 22) +
                one_over_two_q * *(b + 305 * OS1_S1 + 10);
            *(b + 305 * OS1_S1 + 41) =
                prefactor_x * *(b + 305 * OS1_S1 + 26) -
                p_over_q * *(b + 383 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 26) +
                one_over_two_q * *(b + 305 * OS1_S1 + 16);
            *(b + 305 * OS1_S1 + 42) =
                prefactor_z * *(b + 305 * OS1_S1 + 23) -
                p_over_q * *(b + 390 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 23);
            *(b + 305 * OS1_S1 + 43) =
                prefactor_y * *(b + 305 * OS1_S1 + 25) -
                p_over_q * *(b + 389 * OS1_S1 + 25) +
                one_over_two_q * *(b + 234 * OS1_S1 + 25);
            *(b + 305 * OS1_S1 + 44) =
                prefactor_x * *(b + 305 * OS1_S1 + 29) -
                p_over_q * *(b + 383 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 29) +
                one_over_two_q * *(b + 305 * OS1_S1 + 19);
            *(b + 305 * OS1_S1 + 45) =
                prefactor_x * *(b + 305 * OS1_S1 + 30) -
                p_over_q * *(b + 383 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 30);
            *(b + 305 * OS1_S1 + 46) =
                prefactor_z * *(b + 305 * OS1_S1 + 26) -
                p_over_q * *(b + 390 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 26);
            *(b + 305 * OS1_S1 + 47) =
                prefactor_x * *(b + 305 * OS1_S1 + 32) -
                p_over_q * *(b + 383 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 32);
            *(b + 305 * OS1_S1 + 48) =
                prefactor_y * *(b + 305 * OS1_S1 + 29) -
                p_over_q * *(b + 389 * OS1_S1 + 29) +
                one_over_two_q * *(b + 234 * OS1_S1 + 29);
            *(b + 305 * OS1_S1 + 49) =
                prefactor_x * *(b + 305 * OS1_S1 + 34) -
                p_over_q * *(b + 383 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 34);
            *(b + 305 * OS1_S1 + 50) =
                prefactor_y * *(b + 305 * OS1_S1 + 30) -
                p_over_q * *(b + 389 * OS1_S1 + 30) +
                one_over_two_q * *(b + 234 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 305 * OS1_S1 + 16);
            *(b + 305 * OS1_S1 + 51) =
                prefactor_z * *(b + 305 * OS1_S1 + 30) -
                p_over_q * *(b + 390 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 30);
            *(b + 305 * OS1_S1 + 52) =
                prefactor_z * *(b + 305 * OS1_S1 + 31) -
                p_over_q * *(b + 390 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 31) +
                one_over_two_q * *(b + 305 * OS1_S1 + 16);
            *(b + 305 * OS1_S1 + 53) =
                prefactor_y * *(b + 305 * OS1_S1 + 33) -
                p_over_q * *(b + 389 * OS1_S1 + 33) +
                one_over_two_q * *(b + 234 * OS1_S1 + 33) +
                one_over_two_q * *(b + 305 * OS1_S1 + 19);
            *(b + 305 * OS1_S1 + 54) =
                prefactor_y * *(b + 305 * OS1_S1 + 34) -
                p_over_q * *(b + 389 * OS1_S1 + 34) +
                one_over_two_q * *(b + 234 * OS1_S1 + 34);
            *(b + 305 * OS1_S1 + 55) =
                prefactor_z * *(b + 305 * OS1_S1 + 34) -
                p_over_q * *(b + 390 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 305 * OS1_S1 + 19);
            *(b + 306 * OS1_S1 + 35) =
                prefactor_x * *(b + 306 * OS1_S1 + 20) -
                p_over_q * *(b + 384 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 306 * OS1_S1 + 10);
            *(b + 306 * OS1_S1 + 36) = prefactor_y * *(b + 306 * OS1_S1 + 20) -
                                       p_over_q * *(b + 390 * OS1_S1 + 20);
            *(b + 306 * OS1_S1 + 37) =
                prefactor_z * *(b + 306 * OS1_S1 + 20) -
                p_over_q * *(b + 391 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 20);
            *(b + 306 * OS1_S1 + 38) =
                prefactor_y * *(b + 306 * OS1_S1 + 21) -
                p_over_q * *(b + 390 * OS1_S1 + 21) +
                one_over_two_q * *(b + 306 * OS1_S1 + 10);
            *(b + 306 * OS1_S1 + 39) = prefactor_y * *(b + 306 * OS1_S1 + 22) -
                                       p_over_q * *(b + 390 * OS1_S1 + 22);
            *(b + 306 * OS1_S1 + 40) =
                prefactor_z * *(b + 306 * OS1_S1 + 22) -
                p_over_q * *(b + 391 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 22) +
                one_over_two_q * *(b + 306 * OS1_S1 + 10);
            *(b + 306 * OS1_S1 + 41) =
                prefactor_x * *(b + 306 * OS1_S1 + 26) -
                p_over_q * *(b + 384 * OS1_S1 + 26) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 26) +
                one_over_two_q * *(b + 306 * OS1_S1 + 16);
            *(b + 306 * OS1_S1 + 42) =
                prefactor_z * *(b + 306 * OS1_S1 + 23) -
                p_over_q * *(b + 391 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 23);
            *(b + 306 * OS1_S1 + 43) = prefactor_y * *(b + 306 * OS1_S1 + 25) -
                                       p_over_q * *(b + 390 * OS1_S1 + 25);
            *(b + 306 * OS1_S1 + 44) =
                prefactor_x * *(b + 306 * OS1_S1 + 29) -
                p_over_q * *(b + 384 * OS1_S1 + 29) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 29) +
                one_over_two_q * *(b + 306 * OS1_S1 + 19);
            *(b + 306 * OS1_S1 + 45) =
                prefactor_x * *(b + 306 * OS1_S1 + 30) -
                p_over_q * *(b + 384 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 30);
            *(b + 306 * OS1_S1 + 46) =
                prefactor_z * *(b + 306 * OS1_S1 + 26) -
                p_over_q * *(b + 391 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 26);
            *(b + 306 * OS1_S1 + 47) =
                prefactor_x * *(b + 306 * OS1_S1 + 32) -
                p_over_q * *(b + 384 * OS1_S1 + 32) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 32);
            *(b + 306 * OS1_S1 + 48) = prefactor_y * *(b + 306 * OS1_S1 + 29) -
                                       p_over_q * *(b + 390 * OS1_S1 + 29);
            *(b + 306 * OS1_S1 + 49) =
                prefactor_x * *(b + 306 * OS1_S1 + 34) -
                p_over_q * *(b + 384 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 34);
            *(b + 306 * OS1_S1 + 50) =
                prefactor_y * *(b + 306 * OS1_S1 + 30) -
                p_over_q * *(b + 390 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 306 * OS1_S1 + 16);
            *(b + 306 * OS1_S1 + 51) =
                prefactor_z * *(b + 306 * OS1_S1 + 30) -
                p_over_q * *(b + 391 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 30);
            *(b + 306 * OS1_S1 + 52) =
                prefactor_z * *(b + 306 * OS1_S1 + 31) -
                p_over_q * *(b + 391 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 31) +
                one_over_two_q * *(b + 306 * OS1_S1 + 16);
            *(b + 306 * OS1_S1 + 53) =
                prefactor_y * *(b + 306 * OS1_S1 + 33) -
                p_over_q * *(b + 390 * OS1_S1 + 33) +
                one_over_two_q * *(b + 306 * OS1_S1 + 19);
            *(b + 306 * OS1_S1 + 54) = prefactor_y * *(b + 306 * OS1_S1 + 34) -
                                       p_over_q * *(b + 390 * OS1_S1 + 34);
            *(b + 306 * OS1_S1 + 55) =
                prefactor_z * *(b + 306 * OS1_S1 + 34) -
                p_over_q * *(b + 391 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 306 * OS1_S1 + 19);
            *(b + 307 * OS1_S1 + 35) =
                prefactor_x * *(b + 307 * OS1_S1 + 20) -
                p_over_q * *(b + 385 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 307 * OS1_S1 + 10);
            *(b + 307 * OS1_S1 + 36) =
                prefactor_y * *(b + 307 * OS1_S1 + 20) -
                p_over_q * *(b + 392 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 20);
            *(b + 307 * OS1_S1 + 37) = prefactor_z * *(b + 307 * OS1_S1 + 20) -
                                       p_over_q * *(b + 393 * OS1_S1 + 20);
            *(b + 307 * OS1_S1 + 38) =
                prefactor_y * *(b + 307 * OS1_S1 + 21) -
                p_over_q * *(b + 392 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 21) +
                one_over_two_q * *(b + 307 * OS1_S1 + 10);
            *(b + 307 * OS1_S1 + 39) = prefactor_z * *(b + 307 * OS1_S1 + 21) -
                                       p_over_q * *(b + 393 * OS1_S1 + 21);
            *(b + 307 * OS1_S1 + 40) =
                prefactor_z * *(b + 307 * OS1_S1 + 22) -
                p_over_q * *(b + 393 * OS1_S1 + 22) +
                one_over_two_q * *(b + 307 * OS1_S1 + 10);
            *(b + 307 * OS1_S1 + 41) =
                prefactor_x * *(b + 307 * OS1_S1 + 26) -
                p_over_q * *(b + 385 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 26) +
                one_over_two_q * *(b + 307 * OS1_S1 + 16);
            *(b + 307 * OS1_S1 + 42) = prefactor_z * *(b + 307 * OS1_S1 + 23) -
                                       p_over_q * *(b + 393 * OS1_S1 + 23);
            *(b + 307 * OS1_S1 + 43) =
                prefactor_y * *(b + 307 * OS1_S1 + 25) -
                p_over_q * *(b + 392 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 25);
            *(b + 307 * OS1_S1 + 44) =
                prefactor_x * *(b + 307 * OS1_S1 + 29) -
                p_over_q * *(b + 385 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 29) +
                one_over_two_q * *(b + 307 * OS1_S1 + 19);
            *(b + 307 * OS1_S1 + 45) =
                prefactor_x * *(b + 307 * OS1_S1 + 30) -
                p_over_q * *(b + 385 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 30);
            *(b + 307 * OS1_S1 + 46) = prefactor_z * *(b + 307 * OS1_S1 + 26) -
                                       p_over_q * *(b + 393 * OS1_S1 + 26);
            *(b + 307 * OS1_S1 + 47) =
                prefactor_x * *(b + 307 * OS1_S1 + 32) -
                p_over_q * *(b + 385 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 32);
            *(b + 307 * OS1_S1 + 48) =
                prefactor_x * *(b + 307 * OS1_S1 + 33) -
                p_over_q * *(b + 385 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 33);
            *(b + 307 * OS1_S1 + 49) =
                prefactor_x * *(b + 307 * OS1_S1 + 34) -
                p_over_q * *(b + 385 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 34);
            *(b + 307 * OS1_S1 + 50) =
                prefactor_y * *(b + 307 * OS1_S1 + 30) -
                p_over_q * *(b + 392 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 307 * OS1_S1 + 16);
            *(b + 307 * OS1_S1 + 51) = prefactor_z * *(b + 307 * OS1_S1 + 30) -
                                       p_over_q * *(b + 393 * OS1_S1 + 30);
            *(b + 307 * OS1_S1 + 52) =
                prefactor_z * *(b + 307 * OS1_S1 + 31) -
                p_over_q * *(b + 393 * OS1_S1 + 31) +
                one_over_two_q * *(b + 307 * OS1_S1 + 16);
            *(b + 307 * OS1_S1 + 53) =
                prefactor_y * *(b + 307 * OS1_S1 + 33) -
                p_over_q * *(b + 392 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 33) +
                one_over_two_q * *(b + 307 * OS1_S1 + 19);
            *(b + 307 * OS1_S1 + 54) =
                prefactor_y * *(b + 307 * OS1_S1 + 34) -
                p_over_q * *(b + 392 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 34);
            *(b + 307 * OS1_S1 + 55) =
                prefactor_z * *(b + 307 * OS1_S1 + 34) -
                p_over_q * *(b + 393 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 307 * OS1_S1 + 19);
            *(b + 308 * OS1_S1 + 35) =
                prefactor_x * *(b + 308 * OS1_S1 + 20) -
                p_over_q * *(b + 386 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 308 * OS1_S1 + 10);
            *(b + 308 * OS1_S1 + 36) =
                prefactor_y * *(b + 308 * OS1_S1 + 20) -
                p_over_q * *(b + 393 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 20);
            *(b + 308 * OS1_S1 + 37) =
                prefactor_z * *(b + 308 * OS1_S1 + 20) -
                p_over_q * *(b + 394 * OS1_S1 + 20) +
                one_over_two_q * *(b + 235 * OS1_S1 + 20);
            *(b + 308 * OS1_S1 + 38) =
                prefactor_y * *(b + 308 * OS1_S1 + 21) -
                p_over_q * *(b + 393 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 21) +
                one_over_two_q * *(b + 308 * OS1_S1 + 10);
            *(b + 308 * OS1_S1 + 39) =
                prefactor_z * *(b + 308 * OS1_S1 + 21) -
                p_over_q * *(b + 394 * OS1_S1 + 21) +
                one_over_two_q * *(b + 235 * OS1_S1 + 21);
            *(b + 308 * OS1_S1 + 40) =
                prefactor_z * *(b + 308 * OS1_S1 + 22) -
                p_over_q * *(b + 394 * OS1_S1 + 22) +
                one_over_two_q * *(b + 235 * OS1_S1 + 22) +
                one_over_two_q * *(b + 308 * OS1_S1 + 10);
            *(b + 308 * OS1_S1 + 41) =
                prefactor_x * *(b + 308 * OS1_S1 + 26) -
                p_over_q * *(b + 386 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 26) +
                one_over_two_q * *(b + 308 * OS1_S1 + 16);
            *(b + 308 * OS1_S1 + 42) =
                prefactor_z * *(b + 308 * OS1_S1 + 23) -
                p_over_q * *(b + 394 * OS1_S1 + 23) +
                one_over_two_q * *(b + 235 * OS1_S1 + 23);
            *(b + 308 * OS1_S1 + 43) =
                prefactor_y * *(b + 308 * OS1_S1 + 25) -
                p_over_q * *(b + 393 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 25);
            *(b + 308 * OS1_S1 + 44) =
                prefactor_x * *(b + 308 * OS1_S1 + 29) -
                p_over_q * *(b + 386 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 29) +
                one_over_two_q * *(b + 308 * OS1_S1 + 19);
            *(b + 308 * OS1_S1 + 45) =
                prefactor_x * *(b + 308 * OS1_S1 + 30) -
                p_over_q * *(b + 386 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 30);
            *(b + 308 * OS1_S1 + 46) =
                prefactor_z * *(b + 308 * OS1_S1 + 26) -
                p_over_q * *(b + 394 * OS1_S1 + 26) +
                one_over_two_q * *(b + 235 * OS1_S1 + 26);
            *(b + 308 * OS1_S1 + 47) =
                prefactor_x * *(b + 308 * OS1_S1 + 32) -
                p_over_q * *(b + 386 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 32);
            *(b + 308 * OS1_S1 + 48) =
                prefactor_y * *(b + 308 * OS1_S1 + 29) -
                p_over_q * *(b + 393 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 29);
            *(b + 308 * OS1_S1 + 49) =
                prefactor_x * *(b + 308 * OS1_S1 + 34) -
                p_over_q * *(b + 386 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 34);
            *(b + 308 * OS1_S1 + 50) =
                prefactor_y * *(b + 308 * OS1_S1 + 30) -
                p_over_q * *(b + 393 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 308 * OS1_S1 + 16);
            *(b + 308 * OS1_S1 + 51) =
                prefactor_z * *(b + 308 * OS1_S1 + 30) -
                p_over_q * *(b + 394 * OS1_S1 + 30) +
                one_over_two_q * *(b + 235 * OS1_S1 + 30);
            *(b + 308 * OS1_S1 + 52) =
                prefactor_z * *(b + 308 * OS1_S1 + 31) -
                p_over_q * *(b + 394 * OS1_S1 + 31) +
                one_over_two_q * *(b + 235 * OS1_S1 + 31) +
                one_over_two_q * *(b + 308 * OS1_S1 + 16);
            *(b + 308 * OS1_S1 + 53) =
                prefactor_y * *(b + 308 * OS1_S1 + 33) -
                p_over_q * *(b + 393 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 33) +
                one_over_two_q * *(b + 308 * OS1_S1 + 19);
            *(b + 308 * OS1_S1 + 54) =
                prefactor_y * *(b + 308 * OS1_S1 + 34) -
                p_over_q * *(b + 393 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 34);
            *(b + 308 * OS1_S1 + 55) =
                prefactor_z * *(b + 308 * OS1_S1 + 34) -
                p_over_q * *(b + 394 * OS1_S1 + 34) +
                one_over_two_q * *(b + 235 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 308 * OS1_S1 + 19);
            *(b + 309 * OS1_S1 + 35) =
                prefactor_x * *(b + 309 * OS1_S1 + 20) -
                p_over_q * *(b + 387 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 309 * OS1_S1 + 10);
            *(b + 309 * OS1_S1 + 36) =
                prefactor_y * *(b + 309 * OS1_S1 + 20) -
                p_over_q * *(b + 394 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 20);
            *(b + 309 * OS1_S1 + 37) =
                prefactor_z * *(b + 309 * OS1_S1 + 20) -
                p_over_q * *(b + 395 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 20);
            *(b + 309 * OS1_S1 + 38) =
                prefactor_y * *(b + 309 * OS1_S1 + 21) -
                p_over_q * *(b + 394 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 21) +
                one_over_two_q * *(b + 309 * OS1_S1 + 10);
            *(b + 309 * OS1_S1 + 39) =
                prefactor_z * *(b + 309 * OS1_S1 + 21) -
                p_over_q * *(b + 395 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 21);
            *(b + 309 * OS1_S1 + 40) =
                prefactor_z * *(b + 309 * OS1_S1 + 22) -
                p_over_q * *(b + 395 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 22) +
                one_over_two_q * *(b + 309 * OS1_S1 + 10);
            *(b + 309 * OS1_S1 + 41) =
                prefactor_x * *(b + 309 * OS1_S1 + 26) -
                p_over_q * *(b + 387 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 26) +
                one_over_two_q * *(b + 309 * OS1_S1 + 16);
            *(b + 309 * OS1_S1 + 42) =
                prefactor_z * *(b + 309 * OS1_S1 + 23) -
                p_over_q * *(b + 395 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 23);
            *(b + 309 * OS1_S1 + 43) =
                prefactor_y * *(b + 309 * OS1_S1 + 25) -
                p_over_q * *(b + 394 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 25);
            *(b + 309 * OS1_S1 + 44) =
                prefactor_x * *(b + 309 * OS1_S1 + 29) -
                p_over_q * *(b + 387 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 29) +
                one_over_two_q * *(b + 309 * OS1_S1 + 19);
            *(b + 309 * OS1_S1 + 45) =
                prefactor_x * *(b + 309 * OS1_S1 + 30) -
                p_over_q * *(b + 387 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 30);
            *(b + 309 * OS1_S1 + 46) =
                prefactor_z * *(b + 309 * OS1_S1 + 26) -
                p_over_q * *(b + 395 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 26);
            *(b + 309 * OS1_S1 + 47) =
                prefactor_x * *(b + 309 * OS1_S1 + 32) -
                p_over_q * *(b + 387 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 32);
            *(b + 309 * OS1_S1 + 48) =
                prefactor_y * *(b + 309 * OS1_S1 + 29) -
                p_over_q * *(b + 394 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 29);
            *(b + 309 * OS1_S1 + 49) =
                prefactor_x * *(b + 309 * OS1_S1 + 34) -
                p_over_q * *(b + 387 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 34);
            *(b + 309 * OS1_S1 + 50) =
                prefactor_y * *(b + 309 * OS1_S1 + 30) -
                p_over_q * *(b + 394 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 309 * OS1_S1 + 16);
            *(b + 309 * OS1_S1 + 51) =
                prefactor_z * *(b + 309 * OS1_S1 + 30) -
                p_over_q * *(b + 395 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 30);
            *(b + 309 * OS1_S1 + 52) =
                prefactor_z * *(b + 309 * OS1_S1 + 31) -
                p_over_q * *(b + 395 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 31) +
                one_over_two_q * *(b + 309 * OS1_S1 + 16);
            *(b + 309 * OS1_S1 + 53) =
                prefactor_y * *(b + 309 * OS1_S1 + 33) -
                p_over_q * *(b + 394 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 33) +
                one_over_two_q * *(b + 309 * OS1_S1 + 19);
            *(b + 309 * OS1_S1 + 54) =
                prefactor_y * *(b + 309 * OS1_S1 + 34) -
                p_over_q * *(b + 394 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 34);
            *(b + 309 * OS1_S1 + 55) =
                prefactor_z * *(b + 309 * OS1_S1 + 34) -
                p_over_q * *(b + 395 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 309 * OS1_S1 + 19);
            *(b + 310 * OS1_S1 + 35) =
                prefactor_x * *(b + 310 * OS1_S1 + 20) -
                p_over_q * *(b + 388 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 10);
            *(b + 310 * OS1_S1 + 36) =
                prefactor_y * *(b + 310 * OS1_S1 + 20) -
                p_over_q * *(b + 395 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 20);
            *(b + 310 * OS1_S1 + 37) =
                prefactor_z * *(b + 310 * OS1_S1 + 20) -
                p_over_q * *(b + 396 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 20);
            *(b + 310 * OS1_S1 + 38) =
                prefactor_y * *(b + 310 * OS1_S1 + 21) -
                p_over_q * *(b + 395 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 21) +
                one_over_two_q * *(b + 310 * OS1_S1 + 10);
            *(b + 310 * OS1_S1 + 39) =
                prefactor_z * *(b + 310 * OS1_S1 + 21) -
                p_over_q * *(b + 396 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 21);
            *(b + 310 * OS1_S1 + 40) =
                prefactor_z * *(b + 310 * OS1_S1 + 22) -
                p_over_q * *(b + 396 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 22) +
                one_over_two_q * *(b + 310 * OS1_S1 + 10);
            *(b + 310 * OS1_S1 + 41) =
                prefactor_x * *(b + 310 * OS1_S1 + 26) -
                p_over_q * *(b + 388 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 26) +
                one_over_two_q * *(b + 310 * OS1_S1 + 16);
            *(b + 310 * OS1_S1 + 42) =
                prefactor_z * *(b + 310 * OS1_S1 + 23) -
                p_over_q * *(b + 396 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 23);
            *(b + 310 * OS1_S1 + 43) =
                prefactor_y * *(b + 310 * OS1_S1 + 25) -
                p_over_q * *(b + 395 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 25);
            *(b + 310 * OS1_S1 + 44) =
                prefactor_x * *(b + 310 * OS1_S1 + 29) -
                p_over_q * *(b + 388 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 29) +
                one_over_two_q * *(b + 310 * OS1_S1 + 19);
            *(b + 310 * OS1_S1 + 45) =
                prefactor_x * *(b + 310 * OS1_S1 + 30) -
                p_over_q * *(b + 388 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 30);
            *(b + 310 * OS1_S1 + 46) =
                prefactor_z * *(b + 310 * OS1_S1 + 26) -
                p_over_q * *(b + 396 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 26);
            *(b + 310 * OS1_S1 + 47) =
                prefactor_x * *(b + 310 * OS1_S1 + 32) -
                p_over_q * *(b + 388 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 32);
            *(b + 310 * OS1_S1 + 48) =
                prefactor_y * *(b + 310 * OS1_S1 + 29) -
                p_over_q * *(b + 395 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 29);
            *(b + 310 * OS1_S1 + 49) =
                prefactor_x * *(b + 310 * OS1_S1 + 34) -
                p_over_q * *(b + 388 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 34);
            *(b + 310 * OS1_S1 + 50) =
                prefactor_y * *(b + 310 * OS1_S1 + 30) -
                p_over_q * *(b + 395 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 16);
            *(b + 310 * OS1_S1 + 51) =
                prefactor_z * *(b + 310 * OS1_S1 + 30) -
                p_over_q * *(b + 396 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 30);
            *(b + 310 * OS1_S1 + 52) =
                prefactor_z * *(b + 310 * OS1_S1 + 31) -
                p_over_q * *(b + 396 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 31) +
                one_over_two_q * *(b + 310 * OS1_S1 + 16);
            *(b + 310 * OS1_S1 + 53) =
                prefactor_y * *(b + 310 * OS1_S1 + 33) -
                p_over_q * *(b + 395 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 33) +
                one_over_two_q * *(b + 310 * OS1_S1 + 19);
            *(b + 310 * OS1_S1 + 54) =
                prefactor_y * *(b + 310 * OS1_S1 + 34) -
                p_over_q * *(b + 395 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 34);
            *(b + 310 * OS1_S1 + 55) =
                prefactor_z * *(b + 310 * OS1_S1 + 34) -
                p_over_q * *(b + 396 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 19);
            *(b + 311 * OS1_S1 + 35) =
                prefactor_x * *(b + 311 * OS1_S1 + 20) -
                p_over_q * *(b + 389 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 311 * OS1_S1 + 10);
            *(b + 311 * OS1_S1 + 36) =
                prefactor_y * *(b + 311 * OS1_S1 + 20) -
                p_over_q * *(b + 396 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 20);
            *(b + 311 * OS1_S1 + 37) =
                prefactor_z * *(b + 311 * OS1_S1 + 20) -
                p_over_q * *(b + 397 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 20);
            *(b + 311 * OS1_S1 + 38) =
                prefactor_y * *(b + 311 * OS1_S1 + 21) -
                p_over_q * *(b + 396 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 21) +
                one_over_two_q * *(b + 311 * OS1_S1 + 10);
            *(b + 311 * OS1_S1 + 39) =
                prefactor_y * *(b + 311 * OS1_S1 + 22) -
                p_over_q * *(b + 396 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 22);
            *(b + 311 * OS1_S1 + 40) =
                prefactor_z * *(b + 311 * OS1_S1 + 22) -
                p_over_q * *(b + 397 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 22) +
                one_over_two_q * *(b + 311 * OS1_S1 + 10);
            *(b + 311 * OS1_S1 + 41) =
                prefactor_x * *(b + 311 * OS1_S1 + 26) -
                p_over_q * *(b + 389 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 26) +
                one_over_two_q * *(b + 311 * OS1_S1 + 16);
            *(b + 311 * OS1_S1 + 42) =
                prefactor_z * *(b + 311 * OS1_S1 + 23) -
                p_over_q * *(b + 397 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 23);
            *(b + 311 * OS1_S1 + 43) =
                prefactor_y * *(b + 311 * OS1_S1 + 25) -
                p_over_q * *(b + 396 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 25);
            *(b + 311 * OS1_S1 + 44) =
                prefactor_x * *(b + 311 * OS1_S1 + 29) -
                p_over_q * *(b + 389 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 29) +
                one_over_two_q * *(b + 311 * OS1_S1 + 19);
            *(b + 311 * OS1_S1 + 45) =
                prefactor_x * *(b + 311 * OS1_S1 + 30) -
                p_over_q * *(b + 389 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 30);
            *(b + 311 * OS1_S1 + 46) =
                prefactor_z * *(b + 311 * OS1_S1 + 26) -
                p_over_q * *(b + 397 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 26);
            *(b + 311 * OS1_S1 + 47) =
                prefactor_x * *(b + 311 * OS1_S1 + 32) -
                p_over_q * *(b + 389 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 32);
            *(b + 311 * OS1_S1 + 48) =
                prefactor_y * *(b + 311 * OS1_S1 + 29) -
                p_over_q * *(b + 396 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 29);
            *(b + 311 * OS1_S1 + 49) =
                prefactor_x * *(b + 311 * OS1_S1 + 34) -
                p_over_q * *(b + 389 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 34);
            *(b + 311 * OS1_S1 + 50) =
                prefactor_y * *(b + 311 * OS1_S1 + 30) -
                p_over_q * *(b + 396 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 311 * OS1_S1 + 16);
            *(b + 311 * OS1_S1 + 51) =
                prefactor_z * *(b + 311 * OS1_S1 + 30) -
                p_over_q * *(b + 397 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 30);
            *(b + 311 * OS1_S1 + 52) =
                prefactor_z * *(b + 311 * OS1_S1 + 31) -
                p_over_q * *(b + 397 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 31) +
                one_over_two_q * *(b + 311 * OS1_S1 + 16);
            *(b + 311 * OS1_S1 + 53) =
                prefactor_y * *(b + 311 * OS1_S1 + 33) -
                p_over_q * *(b + 396 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 33) +
                one_over_two_q * *(b + 311 * OS1_S1 + 19);
            *(b + 311 * OS1_S1 + 54) =
                prefactor_y * *(b + 311 * OS1_S1 + 34) -
                p_over_q * *(b + 396 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 34);
            *(b + 311 * OS1_S1 + 55) =
                prefactor_z * *(b + 311 * OS1_S1 + 34) -
                p_over_q * *(b + 397 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 311 * OS1_S1 + 19);
            *(b + 312 * OS1_S1 + 35) =
                prefactor_x * *(b + 312 * OS1_S1 + 20) -
                p_over_q * *(b + 390 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 312 * OS1_S1 + 10);
            *(b + 312 * OS1_S1 + 36) =
                prefactor_y * *(b + 312 * OS1_S1 + 20) -
                p_over_q * *(b + 397 * OS1_S1 + 20) +
                one_over_two_q * *(b + 240 * OS1_S1 + 20);
            *(b + 312 * OS1_S1 + 37) =
                prefactor_z * *(b + 312 * OS1_S1 + 20) -
                p_over_q * *(b + 398 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 20);
            *(b + 312 * OS1_S1 + 38) =
                prefactor_y * *(b + 312 * OS1_S1 + 21) -
                p_over_q * *(b + 397 * OS1_S1 + 21) +
                one_over_two_q * *(b + 240 * OS1_S1 + 21) +
                one_over_two_q * *(b + 312 * OS1_S1 + 10);
            *(b + 312 * OS1_S1 + 39) =
                prefactor_y * *(b + 312 * OS1_S1 + 22) -
                p_over_q * *(b + 397 * OS1_S1 + 22) +
                one_over_two_q * *(b + 240 * OS1_S1 + 22);
            *(b + 312 * OS1_S1 + 40) =
                prefactor_z * *(b + 312 * OS1_S1 + 22) -
                p_over_q * *(b + 398 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 22) +
                one_over_two_q * *(b + 312 * OS1_S1 + 10);
            *(b + 312 * OS1_S1 + 41) =
                prefactor_x * *(b + 312 * OS1_S1 + 26) -
                p_over_q * *(b + 390 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 26) +
                one_over_two_q * *(b + 312 * OS1_S1 + 16);
            *(b + 312 * OS1_S1 + 42) =
                prefactor_z * *(b + 312 * OS1_S1 + 23) -
                p_over_q * *(b + 398 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 23);
            *(b + 312 * OS1_S1 + 43) =
                prefactor_y * *(b + 312 * OS1_S1 + 25) -
                p_over_q * *(b + 397 * OS1_S1 + 25) +
                one_over_two_q * *(b + 240 * OS1_S1 + 25);
            *(b + 312 * OS1_S1 + 44) =
                prefactor_x * *(b + 312 * OS1_S1 + 29) -
                p_over_q * *(b + 390 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 29) +
                one_over_two_q * *(b + 312 * OS1_S1 + 19);
            *(b + 312 * OS1_S1 + 45) =
                prefactor_x * *(b + 312 * OS1_S1 + 30) -
                p_over_q * *(b + 390 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 30);
            *(b + 312 * OS1_S1 + 46) =
                prefactor_z * *(b + 312 * OS1_S1 + 26) -
                p_over_q * *(b + 398 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 26);
            *(b + 312 * OS1_S1 + 47) =
                prefactor_x * *(b + 312 * OS1_S1 + 32) -
                p_over_q * *(b + 390 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 32);
            *(b + 312 * OS1_S1 + 48) =
                prefactor_y * *(b + 312 * OS1_S1 + 29) -
                p_over_q * *(b + 397 * OS1_S1 + 29) +
                one_over_two_q * *(b + 240 * OS1_S1 + 29);
            *(b + 312 * OS1_S1 + 49) =
                prefactor_x * *(b + 312 * OS1_S1 + 34) -
                p_over_q * *(b + 390 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 34);
            *(b + 312 * OS1_S1 + 50) =
                prefactor_y * *(b + 312 * OS1_S1 + 30) -
                p_over_q * *(b + 397 * OS1_S1 + 30) +
                one_over_two_q * *(b + 240 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 312 * OS1_S1 + 16);
            *(b + 312 * OS1_S1 + 51) =
                prefactor_z * *(b + 312 * OS1_S1 + 30) -
                p_over_q * *(b + 398 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 30);
            *(b + 312 * OS1_S1 + 52) =
                prefactor_z * *(b + 312 * OS1_S1 + 31) -
                p_over_q * *(b + 398 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 31) +
                one_over_two_q * *(b + 312 * OS1_S1 + 16);
            *(b + 312 * OS1_S1 + 53) =
                prefactor_y * *(b + 312 * OS1_S1 + 33) -
                p_over_q * *(b + 397 * OS1_S1 + 33) +
                one_over_two_q * *(b + 240 * OS1_S1 + 33) +
                one_over_two_q * *(b + 312 * OS1_S1 + 19);
            *(b + 312 * OS1_S1 + 54) =
                prefactor_y * *(b + 312 * OS1_S1 + 34) -
                p_over_q * *(b + 397 * OS1_S1 + 34) +
                one_over_two_q * *(b + 240 * OS1_S1 + 34);
            *(b + 312 * OS1_S1 + 55) =
                prefactor_z * *(b + 312 * OS1_S1 + 34) -
                p_over_q * *(b + 398 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 312 * OS1_S1 + 19);
            *(b + 313 * OS1_S1 + 35) =
                prefactor_x * *(b + 313 * OS1_S1 + 20) -
                p_over_q * *(b + 391 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 313 * OS1_S1 + 10);
            *(b + 313 * OS1_S1 + 36) = prefactor_y * *(b + 313 * OS1_S1 + 20) -
                                       p_over_q * *(b + 398 * OS1_S1 + 20);
            *(b + 313 * OS1_S1 + 37) =
                prefactor_z * *(b + 313 * OS1_S1 + 20) -
                p_over_q * *(b + 399 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 20);
            *(b + 313 * OS1_S1 + 38) =
                prefactor_y * *(b + 313 * OS1_S1 + 21) -
                p_over_q * *(b + 398 * OS1_S1 + 21) +
                one_over_two_q * *(b + 313 * OS1_S1 + 10);
            *(b + 313 * OS1_S1 + 39) = prefactor_y * *(b + 313 * OS1_S1 + 22) -
                                       p_over_q * *(b + 398 * OS1_S1 + 22);
            *(b + 313 * OS1_S1 + 40) =
                prefactor_z * *(b + 313 * OS1_S1 + 22) -
                p_over_q * *(b + 399 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 22) +
                one_over_two_q * *(b + 313 * OS1_S1 + 10);
            *(b + 313 * OS1_S1 + 41) =
                prefactor_x * *(b + 313 * OS1_S1 + 26) -
                p_over_q * *(b + 391 * OS1_S1 + 26) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 26) +
                one_over_two_q * *(b + 313 * OS1_S1 + 16);
            *(b + 313 * OS1_S1 + 42) =
                prefactor_z * *(b + 313 * OS1_S1 + 23) -
                p_over_q * *(b + 399 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 23);
            *(b + 313 * OS1_S1 + 43) = prefactor_y * *(b + 313 * OS1_S1 + 25) -
                                       p_over_q * *(b + 398 * OS1_S1 + 25);
            *(b + 313 * OS1_S1 + 44) =
                prefactor_x * *(b + 313 * OS1_S1 + 29) -
                p_over_q * *(b + 391 * OS1_S1 + 29) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 29) +
                one_over_two_q * *(b + 313 * OS1_S1 + 19);
            *(b + 313 * OS1_S1 + 45) =
                prefactor_x * *(b + 313 * OS1_S1 + 30) -
                p_over_q * *(b + 391 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 30);
            *(b + 313 * OS1_S1 + 46) =
                prefactor_x * *(b + 313 * OS1_S1 + 31) -
                p_over_q * *(b + 391 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 31);
            *(b + 313 * OS1_S1 + 47) =
                prefactor_x * *(b + 313 * OS1_S1 + 32) -
                p_over_q * *(b + 391 * OS1_S1 + 32) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 32);
            *(b + 313 * OS1_S1 + 48) = prefactor_y * *(b + 313 * OS1_S1 + 29) -
                                       p_over_q * *(b + 398 * OS1_S1 + 29);
            *(b + 313 * OS1_S1 + 49) =
                prefactor_x * *(b + 313 * OS1_S1 + 34) -
                p_over_q * *(b + 391 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 34);
            *(b + 313 * OS1_S1 + 50) =
                prefactor_y * *(b + 313 * OS1_S1 + 30) -
                p_over_q * *(b + 398 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 313 * OS1_S1 + 16);
            *(b + 313 * OS1_S1 + 51) =
                prefactor_z * *(b + 313 * OS1_S1 + 30) -
                p_over_q * *(b + 399 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 30);
            *(b + 313 * OS1_S1 + 52) =
                prefactor_z * *(b + 313 * OS1_S1 + 31) -
                p_over_q * *(b + 399 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 31) +
                one_over_two_q * *(b + 313 * OS1_S1 + 16);
            *(b + 313 * OS1_S1 + 53) =
                prefactor_y * *(b + 313 * OS1_S1 + 33) -
                p_over_q * *(b + 398 * OS1_S1 + 33) +
                one_over_two_q * *(b + 313 * OS1_S1 + 19);
            *(b + 313 * OS1_S1 + 54) = prefactor_y * *(b + 313 * OS1_S1 + 34) -
                                       p_over_q * *(b + 398 * OS1_S1 + 34);
            *(b + 313 * OS1_S1 + 55) =
                prefactor_z * *(b + 313 * OS1_S1 + 34) -
                p_over_q * *(b + 399 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 313 * OS1_S1 + 19);
            *(b + 314 * OS1_S1 + 35) =
                prefactor_x * *(b + 314 * OS1_S1 + 20) -
                p_over_q * *(b + 392 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 314 * OS1_S1 + 10);
            *(b + 314 * OS1_S1 + 36) =
                prefactor_y * *(b + 314 * OS1_S1 + 20) -
                p_over_q * *(b + 400 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 20);
            *(b + 314 * OS1_S1 + 37) = prefactor_z * *(b + 314 * OS1_S1 + 20) -
                                       p_over_q * *(b + 401 * OS1_S1 + 20);
            *(b + 314 * OS1_S1 + 38) =
                prefactor_y * *(b + 314 * OS1_S1 + 21) -
                p_over_q * *(b + 400 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 21) +
                one_over_two_q * *(b + 314 * OS1_S1 + 10);
            *(b + 314 * OS1_S1 + 39) = prefactor_z * *(b + 314 * OS1_S1 + 21) -
                                       p_over_q * *(b + 401 * OS1_S1 + 21);
            *(b + 314 * OS1_S1 + 40) =
                prefactor_z * *(b + 314 * OS1_S1 + 22) -
                p_over_q * *(b + 401 * OS1_S1 + 22) +
                one_over_two_q * *(b + 314 * OS1_S1 + 10);
            *(b + 314 * OS1_S1 + 41) =
                prefactor_x * *(b + 314 * OS1_S1 + 26) -
                p_over_q * *(b + 392 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 26) +
                one_over_two_q * *(b + 314 * OS1_S1 + 16);
            *(b + 314 * OS1_S1 + 42) = prefactor_z * *(b + 314 * OS1_S1 + 23) -
                                       p_over_q * *(b + 401 * OS1_S1 + 23);
            *(b + 314 * OS1_S1 + 43) =
                prefactor_y * *(b + 314 * OS1_S1 + 25) -
                p_over_q * *(b + 400 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 25);
            *(b + 314 * OS1_S1 + 44) =
                prefactor_x * *(b + 314 * OS1_S1 + 29) -
                p_over_q * *(b + 392 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 29) +
                one_over_two_q * *(b + 314 * OS1_S1 + 19);
            *(b + 314 * OS1_S1 + 45) =
                prefactor_x * *(b + 314 * OS1_S1 + 30) -
                p_over_q * *(b + 392 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 30);
            *(b + 314 * OS1_S1 + 46) = prefactor_z * *(b + 314 * OS1_S1 + 26) -
                                       p_over_q * *(b + 401 * OS1_S1 + 26);
            *(b + 314 * OS1_S1 + 47) =
                prefactor_x * *(b + 314 * OS1_S1 + 32) -
                p_over_q * *(b + 392 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 32);
            *(b + 314 * OS1_S1 + 48) =
                prefactor_x * *(b + 314 * OS1_S1 + 33) -
                p_over_q * *(b + 392 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 33);
            *(b + 314 * OS1_S1 + 49) =
                prefactor_x * *(b + 314 * OS1_S1 + 34) -
                p_over_q * *(b + 392 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 34);
            *(b + 314 * OS1_S1 + 50) =
                prefactor_y * *(b + 314 * OS1_S1 + 30) -
                p_over_q * *(b + 400 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 314 * OS1_S1 + 16);
            *(b + 314 * OS1_S1 + 51) = prefactor_z * *(b + 314 * OS1_S1 + 30) -
                                       p_over_q * *(b + 401 * OS1_S1 + 30);
            *(b + 314 * OS1_S1 + 52) =
                prefactor_z * *(b + 314 * OS1_S1 + 31) -
                p_over_q * *(b + 401 * OS1_S1 + 31) +
                one_over_two_q * *(b + 314 * OS1_S1 + 16);
            *(b + 314 * OS1_S1 + 53) =
                prefactor_y * *(b + 314 * OS1_S1 + 33) -
                p_over_q * *(b + 400 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 33) +
                one_over_two_q * *(b + 314 * OS1_S1 + 19);
            *(b + 314 * OS1_S1 + 54) =
                prefactor_y * *(b + 314 * OS1_S1 + 34) -
                p_over_q * *(b + 400 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 34);
            *(b + 314 * OS1_S1 + 55) =
                prefactor_z * *(b + 314 * OS1_S1 + 34) -
                p_over_q * *(b + 401 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 314 * OS1_S1 + 19);
            *(b + 315 * OS1_S1 + 35) =
                prefactor_x * *(b + 315 * OS1_S1 + 20) -
                p_over_q * *(b + 393 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 315 * OS1_S1 + 10);
            *(b + 315 * OS1_S1 + 36) =
                prefactor_y * *(b + 315 * OS1_S1 + 20) -
                p_over_q * *(b + 401 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 20);
            *(b + 315 * OS1_S1 + 37) =
                prefactor_z * *(b + 315 * OS1_S1 + 20) -
                p_over_q * *(b + 402 * OS1_S1 + 20) +
                one_over_two_q * *(b + 241 * OS1_S1 + 20);
            *(b + 315 * OS1_S1 + 38) =
                prefactor_y * *(b + 315 * OS1_S1 + 21) -
                p_over_q * *(b + 401 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 21) +
                one_over_two_q * *(b + 315 * OS1_S1 + 10);
            *(b + 315 * OS1_S1 + 39) =
                prefactor_z * *(b + 315 * OS1_S1 + 21) -
                p_over_q * *(b + 402 * OS1_S1 + 21) +
                one_over_two_q * *(b + 241 * OS1_S1 + 21);
            *(b + 315 * OS1_S1 + 40) =
                prefactor_z * *(b + 315 * OS1_S1 + 22) -
                p_over_q * *(b + 402 * OS1_S1 + 22) +
                one_over_two_q * *(b + 241 * OS1_S1 + 22) +
                one_over_two_q * *(b + 315 * OS1_S1 + 10);
            *(b + 315 * OS1_S1 + 41) =
                prefactor_x * *(b + 315 * OS1_S1 + 26) -
                p_over_q * *(b + 393 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 26) +
                one_over_two_q * *(b + 315 * OS1_S1 + 16);
            *(b + 315 * OS1_S1 + 42) =
                prefactor_z * *(b + 315 * OS1_S1 + 23) -
                p_over_q * *(b + 402 * OS1_S1 + 23) +
                one_over_two_q * *(b + 241 * OS1_S1 + 23);
            *(b + 315 * OS1_S1 + 43) =
                prefactor_y * *(b + 315 * OS1_S1 + 25) -
                p_over_q * *(b + 401 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 25);
            *(b + 315 * OS1_S1 + 44) =
                prefactor_x * *(b + 315 * OS1_S1 + 29) -
                p_over_q * *(b + 393 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 29) +
                one_over_two_q * *(b + 315 * OS1_S1 + 19);
            *(b + 315 * OS1_S1 + 45) =
                prefactor_x * *(b + 315 * OS1_S1 + 30) -
                p_over_q * *(b + 393 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 30);
            *(b + 315 * OS1_S1 + 46) =
                prefactor_z * *(b + 315 * OS1_S1 + 26) -
                p_over_q * *(b + 402 * OS1_S1 + 26) +
                one_over_two_q * *(b + 241 * OS1_S1 + 26);
            *(b + 315 * OS1_S1 + 47) =
                prefactor_x * *(b + 315 * OS1_S1 + 32) -
                p_over_q * *(b + 393 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 32);
            *(b + 315 * OS1_S1 + 48) =
                prefactor_x * *(b + 315 * OS1_S1 + 33) -
                p_over_q * *(b + 393 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 33);
            *(b + 315 * OS1_S1 + 49) =
                prefactor_x * *(b + 315 * OS1_S1 + 34) -
                p_over_q * *(b + 393 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 34);
            *(b + 315 * OS1_S1 + 50) =
                prefactor_y * *(b + 315 * OS1_S1 + 30) -
                p_over_q * *(b + 401 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 315 * OS1_S1 + 16);
            *(b + 315 * OS1_S1 + 51) =
                prefactor_z * *(b + 315 * OS1_S1 + 30) -
                p_over_q * *(b + 402 * OS1_S1 + 30) +
                one_over_two_q * *(b + 241 * OS1_S1 + 30);
            *(b + 315 * OS1_S1 + 52) =
                prefactor_z * *(b + 315 * OS1_S1 + 31) -
                p_over_q * *(b + 402 * OS1_S1 + 31) +
                one_over_two_q * *(b + 241 * OS1_S1 + 31) +
                one_over_two_q * *(b + 315 * OS1_S1 + 16);
            *(b + 315 * OS1_S1 + 53) =
                prefactor_y * *(b + 315 * OS1_S1 + 33) -
                p_over_q * *(b + 401 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 33) +
                one_over_two_q * *(b + 315 * OS1_S1 + 19);
            *(b + 315 * OS1_S1 + 54) =
                prefactor_y * *(b + 315 * OS1_S1 + 34) -
                p_over_q * *(b + 401 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 34);
            *(b + 315 * OS1_S1 + 55) =
                prefactor_z * *(b + 315 * OS1_S1 + 34) -
                p_over_q * *(b + 402 * OS1_S1 + 34) +
                one_over_two_q * *(b + 241 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 315 * OS1_S1 + 19);
            *(b + 316 * OS1_S1 + 35) =
                prefactor_x * *(b + 316 * OS1_S1 + 20) -
                p_over_q * *(b + 394 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 316 * OS1_S1 + 10);
            *(b + 316 * OS1_S1 + 36) =
                prefactor_y * *(b + 316 * OS1_S1 + 20) -
                p_over_q * *(b + 402 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 20);
            *(b + 316 * OS1_S1 + 37) =
                prefactor_z * *(b + 316 * OS1_S1 + 20) -
                p_over_q * *(b + 403 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 20);
            *(b + 316 * OS1_S1 + 38) =
                prefactor_y * *(b + 316 * OS1_S1 + 21) -
                p_over_q * *(b + 402 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 21) +
                one_over_two_q * *(b + 316 * OS1_S1 + 10);
            *(b + 316 * OS1_S1 + 39) =
                prefactor_z * *(b + 316 * OS1_S1 + 21) -
                p_over_q * *(b + 403 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 21);
            *(b + 316 * OS1_S1 + 40) =
                prefactor_z * *(b + 316 * OS1_S1 + 22) -
                p_over_q * *(b + 403 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 22) +
                one_over_two_q * *(b + 316 * OS1_S1 + 10);
            *(b + 316 * OS1_S1 + 41) =
                prefactor_x * *(b + 316 * OS1_S1 + 26) -
                p_over_q * *(b + 394 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 26) +
                one_over_two_q * *(b + 316 * OS1_S1 + 16);
            *(b + 316 * OS1_S1 + 42) =
                prefactor_z * *(b + 316 * OS1_S1 + 23) -
                p_over_q * *(b + 403 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 23);
            *(b + 316 * OS1_S1 + 43) =
                prefactor_y * *(b + 316 * OS1_S1 + 25) -
                p_over_q * *(b + 402 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 25);
            *(b + 316 * OS1_S1 + 44) =
                prefactor_x * *(b + 316 * OS1_S1 + 29) -
                p_over_q * *(b + 394 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 29) +
                one_over_two_q * *(b + 316 * OS1_S1 + 19);
            *(b + 316 * OS1_S1 + 45) =
                prefactor_x * *(b + 316 * OS1_S1 + 30) -
                p_over_q * *(b + 394 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 30);
            *(b + 316 * OS1_S1 + 46) =
                prefactor_z * *(b + 316 * OS1_S1 + 26) -
                p_over_q * *(b + 403 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 26);
            *(b + 316 * OS1_S1 + 47) =
                prefactor_x * *(b + 316 * OS1_S1 + 32) -
                p_over_q * *(b + 394 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 32);
            *(b + 316 * OS1_S1 + 48) =
                prefactor_x * *(b + 316 * OS1_S1 + 33) -
                p_over_q * *(b + 394 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 33);
            *(b + 316 * OS1_S1 + 49) =
                prefactor_x * *(b + 316 * OS1_S1 + 34) -
                p_over_q * *(b + 394 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 34);
            *(b + 316 * OS1_S1 + 50) =
                prefactor_y * *(b + 316 * OS1_S1 + 30) -
                p_over_q * *(b + 402 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 316 * OS1_S1 + 16);
            *(b + 316 * OS1_S1 + 51) =
                prefactor_z * *(b + 316 * OS1_S1 + 30) -
                p_over_q * *(b + 403 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 30);
            *(b + 316 * OS1_S1 + 52) =
                prefactor_z * *(b + 316 * OS1_S1 + 31) -
                p_over_q * *(b + 403 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 31) +
                one_over_two_q * *(b + 316 * OS1_S1 + 16);
            *(b + 316 * OS1_S1 + 53) =
                prefactor_y * *(b + 316 * OS1_S1 + 33) -
                p_over_q * *(b + 402 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 33) +
                one_over_two_q * *(b + 316 * OS1_S1 + 19);
            *(b + 316 * OS1_S1 + 54) =
                prefactor_y * *(b + 316 * OS1_S1 + 34) -
                p_over_q * *(b + 402 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 34);
            *(b + 316 * OS1_S1 + 55) =
                prefactor_z * *(b + 316 * OS1_S1 + 34) -
                p_over_q * *(b + 403 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 316 * OS1_S1 + 19);
            *(b + 317 * OS1_S1 + 35) =
                prefactor_x * *(b + 317 * OS1_S1 + 20) -
                p_over_q * *(b + 395 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 10);
            *(b + 317 * OS1_S1 + 36) =
                prefactor_y * *(b + 317 * OS1_S1 + 20) -
                p_over_q * *(b + 403 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 20);
            *(b + 317 * OS1_S1 + 37) =
                prefactor_z * *(b + 317 * OS1_S1 + 20) -
                p_over_q * *(b + 404 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 20);
            *(b + 317 * OS1_S1 + 38) =
                prefactor_y * *(b + 317 * OS1_S1 + 21) -
                p_over_q * *(b + 403 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 21) +
                one_over_two_q * *(b + 317 * OS1_S1 + 10);
            *(b + 317 * OS1_S1 + 39) =
                prefactor_z * *(b + 317 * OS1_S1 + 21) -
                p_over_q * *(b + 404 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 21);
            *(b + 317 * OS1_S1 + 40) =
                prefactor_z * *(b + 317 * OS1_S1 + 22) -
                p_over_q * *(b + 404 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 22) +
                one_over_two_q * *(b + 317 * OS1_S1 + 10);
            *(b + 317 * OS1_S1 + 41) =
                prefactor_x * *(b + 317 * OS1_S1 + 26) -
                p_over_q * *(b + 395 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 26) +
                one_over_two_q * *(b + 317 * OS1_S1 + 16);
            *(b + 317 * OS1_S1 + 42) =
                prefactor_z * *(b + 317 * OS1_S1 + 23) -
                p_over_q * *(b + 404 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 23);
            *(b + 317 * OS1_S1 + 43) =
                prefactor_y * *(b + 317 * OS1_S1 + 25) -
                p_over_q * *(b + 403 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 25);
            *(b + 317 * OS1_S1 + 44) =
                prefactor_x * *(b + 317 * OS1_S1 + 29) -
                p_over_q * *(b + 395 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 29) +
                one_over_two_q * *(b + 317 * OS1_S1 + 19);
            *(b + 317 * OS1_S1 + 45) =
                prefactor_x * *(b + 317 * OS1_S1 + 30) -
                p_over_q * *(b + 395 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 30);
            *(b + 317 * OS1_S1 + 46) =
                prefactor_z * *(b + 317 * OS1_S1 + 26) -
                p_over_q * *(b + 404 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 26);
            *(b + 317 * OS1_S1 + 47) =
                prefactor_x * *(b + 317 * OS1_S1 + 32) -
                p_over_q * *(b + 395 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 32);
            *(b + 317 * OS1_S1 + 48) =
                prefactor_y * *(b + 317 * OS1_S1 + 29) -
                p_over_q * *(b + 403 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 29);
            *(b + 317 * OS1_S1 + 49) =
                prefactor_x * *(b + 317 * OS1_S1 + 34) -
                p_over_q * *(b + 395 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 34);
            *(b + 317 * OS1_S1 + 50) =
                prefactor_y * *(b + 317 * OS1_S1 + 30) -
                p_over_q * *(b + 403 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 16);
            *(b + 317 * OS1_S1 + 51) =
                prefactor_z * *(b + 317 * OS1_S1 + 30) -
                p_over_q * *(b + 404 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 30);
            *(b + 317 * OS1_S1 + 52) =
                prefactor_z * *(b + 317 * OS1_S1 + 31) -
                p_over_q * *(b + 404 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 31) +
                one_over_two_q * *(b + 317 * OS1_S1 + 16);
            *(b + 317 * OS1_S1 + 53) =
                prefactor_y * *(b + 317 * OS1_S1 + 33) -
                p_over_q * *(b + 403 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 33) +
                one_over_two_q * *(b + 317 * OS1_S1 + 19);
            *(b + 317 * OS1_S1 + 54) =
                prefactor_y * *(b + 317 * OS1_S1 + 34) -
                p_over_q * *(b + 403 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 34);
            *(b + 317 * OS1_S1 + 55) =
                prefactor_z * *(b + 317 * OS1_S1 + 34) -
                p_over_q * *(b + 404 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 19);
            *(b + 318 * OS1_S1 + 35) =
                prefactor_x * *(b + 318 * OS1_S1 + 20) -
                p_over_q * *(b + 396 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 10);
            *(b + 318 * OS1_S1 + 36) =
                prefactor_y * *(b + 318 * OS1_S1 + 20) -
                p_over_q * *(b + 404 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 20);
            *(b + 318 * OS1_S1 + 37) =
                prefactor_z * *(b + 318 * OS1_S1 + 20) -
                p_over_q * *(b + 405 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 20);
            *(b + 318 * OS1_S1 + 38) =
                prefactor_y * *(b + 318 * OS1_S1 + 21) -
                p_over_q * *(b + 404 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 21) +
                one_over_two_q * *(b + 318 * OS1_S1 + 10);
            *(b + 318 * OS1_S1 + 39) =
                prefactor_y * *(b + 318 * OS1_S1 + 22) -
                p_over_q * *(b + 404 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 22);
            *(b + 318 * OS1_S1 + 40) =
                prefactor_z * *(b + 318 * OS1_S1 + 22) -
                p_over_q * *(b + 405 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 22) +
                one_over_two_q * *(b + 318 * OS1_S1 + 10);
            *(b + 318 * OS1_S1 + 41) =
                prefactor_x * *(b + 318 * OS1_S1 + 26) -
                p_over_q * *(b + 396 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 26) +
                one_over_two_q * *(b + 318 * OS1_S1 + 16);
            *(b + 318 * OS1_S1 + 42) =
                prefactor_z * *(b + 318 * OS1_S1 + 23) -
                p_over_q * *(b + 405 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 23);
            *(b + 318 * OS1_S1 + 43) =
                prefactor_y * *(b + 318 * OS1_S1 + 25) -
                p_over_q * *(b + 404 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 25);
            *(b + 318 * OS1_S1 + 44) =
                prefactor_x * *(b + 318 * OS1_S1 + 29) -
                p_over_q * *(b + 396 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 29) +
                one_over_two_q * *(b + 318 * OS1_S1 + 19);
            *(b + 318 * OS1_S1 + 45) =
                prefactor_x * *(b + 318 * OS1_S1 + 30) -
                p_over_q * *(b + 396 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 30);
            *(b + 318 * OS1_S1 + 46) =
                prefactor_z * *(b + 318 * OS1_S1 + 26) -
                p_over_q * *(b + 405 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 26);
            *(b + 318 * OS1_S1 + 47) =
                prefactor_x * *(b + 318 * OS1_S1 + 32) -
                p_over_q * *(b + 396 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 32);
            *(b + 318 * OS1_S1 + 48) =
                prefactor_y * *(b + 318 * OS1_S1 + 29) -
                p_over_q * *(b + 404 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 29);
            *(b + 318 * OS1_S1 + 49) =
                prefactor_x * *(b + 318 * OS1_S1 + 34) -
                p_over_q * *(b + 396 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 34);
            *(b + 318 * OS1_S1 + 50) =
                prefactor_y * *(b + 318 * OS1_S1 + 30) -
                p_over_q * *(b + 404 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 16);
            *(b + 318 * OS1_S1 + 51) =
                prefactor_z * *(b + 318 * OS1_S1 + 30) -
                p_over_q * *(b + 405 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 30);
            *(b + 318 * OS1_S1 + 52) =
                prefactor_z * *(b + 318 * OS1_S1 + 31) -
                p_over_q * *(b + 405 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 31) +
                one_over_two_q * *(b + 318 * OS1_S1 + 16);
            *(b + 318 * OS1_S1 + 53) =
                prefactor_y * *(b + 318 * OS1_S1 + 33) -
                p_over_q * *(b + 404 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 33) +
                one_over_two_q * *(b + 318 * OS1_S1 + 19);
            *(b + 318 * OS1_S1 + 54) =
                prefactor_y * *(b + 318 * OS1_S1 + 34) -
                p_over_q * *(b + 404 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 34);
            *(b + 318 * OS1_S1 + 55) =
                prefactor_z * *(b + 318 * OS1_S1 + 34) -
                p_over_q * *(b + 405 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 19);
            *(b + 319 * OS1_S1 + 35) =
                prefactor_x * *(b + 319 * OS1_S1 + 20) -
                p_over_q * *(b + 397 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 319 * OS1_S1 + 10);
            *(b + 319 * OS1_S1 + 36) =
                prefactor_y * *(b + 319 * OS1_S1 + 20) -
                p_over_q * *(b + 405 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 20);
            *(b + 319 * OS1_S1 + 37) =
                prefactor_z * *(b + 319 * OS1_S1 + 20) -
                p_over_q * *(b + 406 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 20);
            *(b + 319 * OS1_S1 + 38) =
                prefactor_y * *(b + 319 * OS1_S1 + 21) -
                p_over_q * *(b + 405 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 21) +
                one_over_two_q * *(b + 319 * OS1_S1 + 10);
            *(b + 319 * OS1_S1 + 39) =
                prefactor_y * *(b + 319 * OS1_S1 + 22) -
                p_over_q * *(b + 405 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 22);
            *(b + 319 * OS1_S1 + 40) =
                prefactor_z * *(b + 319 * OS1_S1 + 22) -
                p_over_q * *(b + 406 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 22) +
                one_over_two_q * *(b + 319 * OS1_S1 + 10);
            *(b + 319 * OS1_S1 + 41) =
                prefactor_x * *(b + 319 * OS1_S1 + 26) -
                p_over_q * *(b + 397 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 26) +
                one_over_two_q * *(b + 319 * OS1_S1 + 16);
            *(b + 319 * OS1_S1 + 42) =
                prefactor_z * *(b + 319 * OS1_S1 + 23) -
                p_over_q * *(b + 406 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 23);
            *(b + 319 * OS1_S1 + 43) =
                prefactor_y * *(b + 319 * OS1_S1 + 25) -
                p_over_q * *(b + 405 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 25);
            *(b + 319 * OS1_S1 + 44) =
                prefactor_x * *(b + 319 * OS1_S1 + 29) -
                p_over_q * *(b + 397 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 29) +
                one_over_two_q * *(b + 319 * OS1_S1 + 19);
            *(b + 319 * OS1_S1 + 45) =
                prefactor_x * *(b + 319 * OS1_S1 + 30) -
                p_over_q * *(b + 397 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 30);
            *(b + 319 * OS1_S1 + 46) =
                prefactor_x * *(b + 319 * OS1_S1 + 31) -
                p_over_q * *(b + 397 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 31);
            *(b + 319 * OS1_S1 + 47) =
                prefactor_x * *(b + 319 * OS1_S1 + 32) -
                p_over_q * *(b + 397 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 32);
            *(b + 319 * OS1_S1 + 48) =
                prefactor_y * *(b + 319 * OS1_S1 + 29) -
                p_over_q * *(b + 405 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 29);
            *(b + 319 * OS1_S1 + 49) =
                prefactor_x * *(b + 319 * OS1_S1 + 34) -
                p_over_q * *(b + 397 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 34);
            *(b + 319 * OS1_S1 + 50) =
                prefactor_y * *(b + 319 * OS1_S1 + 30) -
                p_over_q * *(b + 405 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 319 * OS1_S1 + 16);
            *(b + 319 * OS1_S1 + 51) =
                prefactor_z * *(b + 319 * OS1_S1 + 30) -
                p_over_q * *(b + 406 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 30);
            *(b + 319 * OS1_S1 + 52) =
                prefactor_z * *(b + 319 * OS1_S1 + 31) -
                p_over_q * *(b + 406 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 31) +
                one_over_two_q * *(b + 319 * OS1_S1 + 16);
            *(b + 319 * OS1_S1 + 53) =
                prefactor_y * *(b + 319 * OS1_S1 + 33) -
                p_over_q * *(b + 405 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 33) +
                one_over_two_q * *(b + 319 * OS1_S1 + 19);
            *(b + 319 * OS1_S1 + 54) =
                prefactor_y * *(b + 319 * OS1_S1 + 34) -
                p_over_q * *(b + 405 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 34);
            *(b + 319 * OS1_S1 + 55) =
                prefactor_z * *(b + 319 * OS1_S1 + 34) -
                p_over_q * *(b + 406 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 319 * OS1_S1 + 19);
            *(b + 320 * OS1_S1 + 35) =
                prefactor_x * *(b + 320 * OS1_S1 + 20) -
                p_over_q * *(b + 398 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 320 * OS1_S1 + 10);
            *(b + 320 * OS1_S1 + 36) =
                prefactor_y * *(b + 320 * OS1_S1 + 20) -
                p_over_q * *(b + 406 * OS1_S1 + 20) +
                one_over_two_q * *(b + 247 * OS1_S1 + 20);
            *(b + 320 * OS1_S1 + 37) =
                prefactor_z * *(b + 320 * OS1_S1 + 20) -
                p_over_q * *(b + 407 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 20);
            *(b + 320 * OS1_S1 + 38) =
                prefactor_y * *(b + 320 * OS1_S1 + 21) -
                p_over_q * *(b + 406 * OS1_S1 + 21) +
                one_over_two_q * *(b + 247 * OS1_S1 + 21) +
                one_over_two_q * *(b + 320 * OS1_S1 + 10);
            *(b + 320 * OS1_S1 + 39) =
                prefactor_y * *(b + 320 * OS1_S1 + 22) -
                p_over_q * *(b + 406 * OS1_S1 + 22) +
                one_over_two_q * *(b + 247 * OS1_S1 + 22);
            *(b + 320 * OS1_S1 + 40) =
                prefactor_z * *(b + 320 * OS1_S1 + 22) -
                p_over_q * *(b + 407 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 22) +
                one_over_two_q * *(b + 320 * OS1_S1 + 10);
            *(b + 320 * OS1_S1 + 41) =
                prefactor_x * *(b + 320 * OS1_S1 + 26) -
                p_over_q * *(b + 398 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 26) +
                one_over_two_q * *(b + 320 * OS1_S1 + 16);
            *(b + 320 * OS1_S1 + 42) =
                prefactor_z * *(b + 320 * OS1_S1 + 23) -
                p_over_q * *(b + 407 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 23);
            *(b + 320 * OS1_S1 + 43) =
                prefactor_y * *(b + 320 * OS1_S1 + 25) -
                p_over_q * *(b + 406 * OS1_S1 + 25) +
                one_over_two_q * *(b + 247 * OS1_S1 + 25);
            *(b + 320 * OS1_S1 + 44) =
                prefactor_x * *(b + 320 * OS1_S1 + 29) -
                p_over_q * *(b + 398 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 29) +
                one_over_two_q * *(b + 320 * OS1_S1 + 19);
            *(b + 320 * OS1_S1 + 45) =
                prefactor_x * *(b + 320 * OS1_S1 + 30) -
                p_over_q * *(b + 398 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 30);
            *(b + 320 * OS1_S1 + 46) =
                prefactor_x * *(b + 320 * OS1_S1 + 31) -
                p_over_q * *(b + 398 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 31);
            *(b + 320 * OS1_S1 + 47) =
                prefactor_x * *(b + 320 * OS1_S1 + 32) -
                p_over_q * *(b + 398 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 32);
            *(b + 320 * OS1_S1 + 48) =
                prefactor_y * *(b + 320 * OS1_S1 + 29) -
                p_over_q * *(b + 406 * OS1_S1 + 29) +
                one_over_two_q * *(b + 247 * OS1_S1 + 29);
            *(b + 320 * OS1_S1 + 49) =
                prefactor_x * *(b + 320 * OS1_S1 + 34) -
                p_over_q * *(b + 398 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 34);
            *(b + 320 * OS1_S1 + 50) =
                prefactor_y * *(b + 320 * OS1_S1 + 30) -
                p_over_q * *(b + 406 * OS1_S1 + 30) +
                one_over_two_q * *(b + 247 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 320 * OS1_S1 + 16);
            *(b + 320 * OS1_S1 + 51) =
                prefactor_z * *(b + 320 * OS1_S1 + 30) -
                p_over_q * *(b + 407 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 30);
            *(b + 320 * OS1_S1 + 52) =
                prefactor_z * *(b + 320 * OS1_S1 + 31) -
                p_over_q * *(b + 407 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 31) +
                one_over_two_q * *(b + 320 * OS1_S1 + 16);
            *(b + 320 * OS1_S1 + 53) =
                prefactor_y * *(b + 320 * OS1_S1 + 33) -
                p_over_q * *(b + 406 * OS1_S1 + 33) +
                one_over_two_q * *(b + 247 * OS1_S1 + 33) +
                one_over_two_q * *(b + 320 * OS1_S1 + 19);
            *(b + 320 * OS1_S1 + 54) =
                prefactor_y * *(b + 320 * OS1_S1 + 34) -
                p_over_q * *(b + 406 * OS1_S1 + 34) +
                one_over_two_q * *(b + 247 * OS1_S1 + 34);
            *(b + 320 * OS1_S1 + 55) =
                prefactor_z * *(b + 320 * OS1_S1 + 34) -
                p_over_q * *(b + 407 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 320 * OS1_S1 + 19);
            *(b + 321 * OS1_S1 + 35) =
                prefactor_x * *(b + 321 * OS1_S1 + 20) -
                p_over_q * *(b + 399 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 321 * OS1_S1 + 10);
            *(b + 321 * OS1_S1 + 36) = prefactor_y * *(b + 321 * OS1_S1 + 20) -
                                       p_over_q * *(b + 407 * OS1_S1 + 20);
            *(b + 321 * OS1_S1 + 37) =
                prefactor_z * *(b + 321 * OS1_S1 + 20) -
                p_over_q * *(b + 408 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 20);
            *(b + 321 * OS1_S1 + 38) =
                prefactor_y * *(b + 321 * OS1_S1 + 21) -
                p_over_q * *(b + 407 * OS1_S1 + 21) +
                one_over_two_q * *(b + 321 * OS1_S1 + 10);
            *(b + 321 * OS1_S1 + 39) = prefactor_y * *(b + 321 * OS1_S1 + 22) -
                                       p_over_q * *(b + 407 * OS1_S1 + 22);
            *(b + 321 * OS1_S1 + 40) =
                prefactor_z * *(b + 321 * OS1_S1 + 22) -
                p_over_q * *(b + 408 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 22) +
                one_over_two_q * *(b + 321 * OS1_S1 + 10);
            *(b + 321 * OS1_S1 + 41) =
                prefactor_x * *(b + 321 * OS1_S1 + 26) -
                p_over_q * *(b + 399 * OS1_S1 + 26) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 26) +
                one_over_two_q * *(b + 321 * OS1_S1 + 16);
            *(b + 321 * OS1_S1 + 42) =
                prefactor_z * *(b + 321 * OS1_S1 + 23) -
                p_over_q * *(b + 408 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 23);
            *(b + 321 * OS1_S1 + 43) = prefactor_y * *(b + 321 * OS1_S1 + 25) -
                                       p_over_q * *(b + 407 * OS1_S1 + 25);
            *(b + 321 * OS1_S1 + 44) =
                prefactor_x * *(b + 321 * OS1_S1 + 29) -
                p_over_q * *(b + 399 * OS1_S1 + 29) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 29) +
                one_over_two_q * *(b + 321 * OS1_S1 + 19);
            *(b + 321 * OS1_S1 + 45) =
                prefactor_x * *(b + 321 * OS1_S1 + 30) -
                p_over_q * *(b + 399 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 30);
            *(b + 321 * OS1_S1 + 46) =
                prefactor_x * *(b + 321 * OS1_S1 + 31) -
                p_over_q * *(b + 399 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 31);
            *(b + 321 * OS1_S1 + 47) =
                prefactor_x * *(b + 321 * OS1_S1 + 32) -
                p_over_q * *(b + 399 * OS1_S1 + 32) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 32);
            *(b + 321 * OS1_S1 + 48) = prefactor_y * *(b + 321 * OS1_S1 + 29) -
                                       p_over_q * *(b + 407 * OS1_S1 + 29);
            *(b + 321 * OS1_S1 + 49) =
                prefactor_x * *(b + 321 * OS1_S1 + 34) -
                p_over_q * *(b + 399 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 34);
            *(b + 321 * OS1_S1 + 50) =
                prefactor_y * *(b + 321 * OS1_S1 + 30) -
                p_over_q * *(b + 407 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 321 * OS1_S1 + 16);
            *(b + 321 * OS1_S1 + 51) =
                prefactor_z * *(b + 321 * OS1_S1 + 30) -
                p_over_q * *(b + 408 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 30);
            *(b + 321 * OS1_S1 + 52) =
                prefactor_z * *(b + 321 * OS1_S1 + 31) -
                p_over_q * *(b + 408 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 31) +
                one_over_two_q * *(b + 321 * OS1_S1 + 16);
            *(b + 321 * OS1_S1 + 53) =
                prefactor_y * *(b + 321 * OS1_S1 + 33) -
                p_over_q * *(b + 407 * OS1_S1 + 33) +
                one_over_two_q * *(b + 321 * OS1_S1 + 19);
            *(b + 321 * OS1_S1 + 54) = prefactor_y * *(b + 321 * OS1_S1 + 34) -
                                       p_over_q * *(b + 407 * OS1_S1 + 34);
            *(b + 321 * OS1_S1 + 55) =
                prefactor_z * *(b + 321 * OS1_S1 + 34) -
                p_over_q * *(b + 408 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 321 * OS1_S1 + 19);
            *(b + 322 * OS1_S1 + 35) =
                prefactor_x * *(b + 322 * OS1_S1 + 20) -
                p_over_q * *(b + 400 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 10);
            *(b + 322 * OS1_S1 + 36) =
                prefactor_y * *(b + 322 * OS1_S1 + 20) -
                p_over_q * *(b + 409 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 20);
            *(b + 322 * OS1_S1 + 37) = prefactor_z * *(b + 322 * OS1_S1 + 20) -
                                       p_over_q * *(b + 410 * OS1_S1 + 20);
            *(b + 322 * OS1_S1 + 38) =
                prefactor_y * *(b + 322 * OS1_S1 + 21) -
                p_over_q * *(b + 409 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 21) +
                one_over_two_q * *(b + 322 * OS1_S1 + 10);
            *(b + 322 * OS1_S1 + 39) = prefactor_z * *(b + 322 * OS1_S1 + 21) -
                                       p_over_q * *(b + 410 * OS1_S1 + 21);
            *(b + 322 * OS1_S1 + 40) =
                prefactor_z * *(b + 322 * OS1_S1 + 22) -
                p_over_q * *(b + 410 * OS1_S1 + 22) +
                one_over_two_q * *(b + 322 * OS1_S1 + 10);
            *(b + 322 * OS1_S1 + 41) =
                prefactor_x * *(b + 322 * OS1_S1 + 26) -
                p_over_q * *(b + 400 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 26) +
                one_over_two_q * *(b + 322 * OS1_S1 + 16);
            *(b + 322 * OS1_S1 + 42) = prefactor_z * *(b + 322 * OS1_S1 + 23) -
                                       p_over_q * *(b + 410 * OS1_S1 + 23);
            *(b + 322 * OS1_S1 + 43) =
                prefactor_y * *(b + 322 * OS1_S1 + 25) -
                p_over_q * *(b + 409 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 25);
            *(b + 322 * OS1_S1 + 44) =
                prefactor_x * *(b + 322 * OS1_S1 + 29) -
                p_over_q * *(b + 400 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 29) +
                one_over_two_q * *(b + 322 * OS1_S1 + 19);
            *(b + 322 * OS1_S1 + 45) =
                prefactor_x * *(b + 322 * OS1_S1 + 30) -
                p_over_q * *(b + 400 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 30);
            *(b + 322 * OS1_S1 + 46) = prefactor_z * *(b + 322 * OS1_S1 + 26) -
                                       p_over_q * *(b + 410 * OS1_S1 + 26);
            *(b + 322 * OS1_S1 + 47) =
                prefactor_x * *(b + 322 * OS1_S1 + 32) -
                p_over_q * *(b + 400 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 32);
            *(b + 322 * OS1_S1 + 48) =
                prefactor_x * *(b + 322 * OS1_S1 + 33) -
                p_over_q * *(b + 400 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 33);
            *(b + 322 * OS1_S1 + 49) =
                prefactor_x * *(b + 322 * OS1_S1 + 34) -
                p_over_q * *(b + 400 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 34);
            *(b + 322 * OS1_S1 + 50) =
                prefactor_y * *(b + 322 * OS1_S1 + 30) -
                p_over_q * *(b + 409 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 16);
            *(b + 322 * OS1_S1 + 51) = prefactor_z * *(b + 322 * OS1_S1 + 30) -
                                       p_over_q * *(b + 410 * OS1_S1 + 30);
            *(b + 322 * OS1_S1 + 52) =
                prefactor_z * *(b + 322 * OS1_S1 + 31) -
                p_over_q * *(b + 410 * OS1_S1 + 31) +
                one_over_two_q * *(b + 322 * OS1_S1 + 16);
            *(b + 322 * OS1_S1 + 53) =
                prefactor_y * *(b + 322 * OS1_S1 + 33) -
                p_over_q * *(b + 409 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 33) +
                one_over_two_q * *(b + 322 * OS1_S1 + 19);
            *(b + 322 * OS1_S1 + 54) =
                prefactor_y * *(b + 322 * OS1_S1 + 34) -
                p_over_q * *(b + 409 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 34);
            *(b + 322 * OS1_S1 + 55) =
                prefactor_z * *(b + 322 * OS1_S1 + 34) -
                p_over_q * *(b + 410 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 19);
            *(b + 323 * OS1_S1 + 35) =
                prefactor_x * *(b + 323 * OS1_S1 + 20) -
                p_over_q * *(b + 401 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 10);
            *(b + 323 * OS1_S1 + 36) =
                prefactor_y * *(b + 323 * OS1_S1 + 20) -
                p_over_q * *(b + 410 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 20);
            *(b + 323 * OS1_S1 + 37) =
                prefactor_z * *(b + 323 * OS1_S1 + 20) -
                p_over_q * *(b + 411 * OS1_S1 + 20) +
                one_over_two_q * *(b + 248 * OS1_S1 + 20);
            *(b + 323 * OS1_S1 + 38) =
                prefactor_y * *(b + 323 * OS1_S1 + 21) -
                p_over_q * *(b + 410 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 21) +
                one_over_two_q * *(b + 323 * OS1_S1 + 10);
            *(b + 323 * OS1_S1 + 39) =
                prefactor_z * *(b + 323 * OS1_S1 + 21) -
                p_over_q * *(b + 411 * OS1_S1 + 21) +
                one_over_two_q * *(b + 248 * OS1_S1 + 21);
            *(b + 323 * OS1_S1 + 40) =
                prefactor_z * *(b + 323 * OS1_S1 + 22) -
                p_over_q * *(b + 411 * OS1_S1 + 22) +
                one_over_two_q * *(b + 248 * OS1_S1 + 22) +
                one_over_two_q * *(b + 323 * OS1_S1 + 10);
            *(b + 323 * OS1_S1 + 41) =
                prefactor_x * *(b + 323 * OS1_S1 + 26) -
                p_over_q * *(b + 401 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 26) +
                one_over_two_q * *(b + 323 * OS1_S1 + 16);
            *(b + 323 * OS1_S1 + 42) =
                prefactor_z * *(b + 323 * OS1_S1 + 23) -
                p_over_q * *(b + 411 * OS1_S1 + 23) +
                one_over_two_q * *(b + 248 * OS1_S1 + 23);
            *(b + 323 * OS1_S1 + 43) =
                prefactor_y * *(b + 323 * OS1_S1 + 25) -
                p_over_q * *(b + 410 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 25);
            *(b + 323 * OS1_S1 + 44) =
                prefactor_x * *(b + 323 * OS1_S1 + 29) -
                p_over_q * *(b + 401 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 29) +
                one_over_two_q * *(b + 323 * OS1_S1 + 19);
            *(b + 323 * OS1_S1 + 45) =
                prefactor_x * *(b + 323 * OS1_S1 + 30) -
                p_over_q * *(b + 401 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 30);
            *(b + 323 * OS1_S1 + 46) =
                prefactor_z * *(b + 323 * OS1_S1 + 26) -
                p_over_q * *(b + 411 * OS1_S1 + 26) +
                one_over_two_q * *(b + 248 * OS1_S1 + 26);
            *(b + 323 * OS1_S1 + 47) =
                prefactor_x * *(b + 323 * OS1_S1 + 32) -
                p_over_q * *(b + 401 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 32);
            *(b + 323 * OS1_S1 + 48) =
                prefactor_x * *(b + 323 * OS1_S1 + 33) -
                p_over_q * *(b + 401 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 33);
            *(b + 323 * OS1_S1 + 49) =
                prefactor_x * *(b + 323 * OS1_S1 + 34) -
                p_over_q * *(b + 401 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 34);
            *(b + 323 * OS1_S1 + 50) =
                prefactor_y * *(b + 323 * OS1_S1 + 30) -
                p_over_q * *(b + 410 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 16);
            *(b + 323 * OS1_S1 + 51) =
                prefactor_z * *(b + 323 * OS1_S1 + 30) -
                p_over_q * *(b + 411 * OS1_S1 + 30) +
                one_over_two_q * *(b + 248 * OS1_S1 + 30);
            *(b + 323 * OS1_S1 + 52) =
                prefactor_z * *(b + 323 * OS1_S1 + 31) -
                p_over_q * *(b + 411 * OS1_S1 + 31) +
                one_over_two_q * *(b + 248 * OS1_S1 + 31) +
                one_over_two_q * *(b + 323 * OS1_S1 + 16);
            *(b + 323 * OS1_S1 + 53) =
                prefactor_y * *(b + 323 * OS1_S1 + 33) -
                p_over_q * *(b + 410 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 33) +
                one_over_two_q * *(b + 323 * OS1_S1 + 19);
            *(b + 323 * OS1_S1 + 54) =
                prefactor_y * *(b + 323 * OS1_S1 + 34) -
                p_over_q * *(b + 410 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 34);
            *(b + 323 * OS1_S1 + 55) =
                prefactor_z * *(b + 323 * OS1_S1 + 34) -
                p_over_q * *(b + 411 * OS1_S1 + 34) +
                one_over_two_q * *(b + 248 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 19);
            *(b + 324 * OS1_S1 + 35) =
                prefactor_x * *(b + 324 * OS1_S1 + 20) -
                p_over_q * *(b + 402 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 10);
            *(b + 324 * OS1_S1 + 36) =
                prefactor_y * *(b + 324 * OS1_S1 + 20) -
                p_over_q * *(b + 411 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 20);
            *(b + 324 * OS1_S1 + 37) =
                prefactor_z * *(b + 324 * OS1_S1 + 20) -
                p_over_q * *(b + 412 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 20);
            *(b + 324 * OS1_S1 + 38) =
                prefactor_y * *(b + 324 * OS1_S1 + 21) -
                p_over_q * *(b + 411 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 21) +
                one_over_two_q * *(b + 324 * OS1_S1 + 10);
            *(b + 324 * OS1_S1 + 39) =
                prefactor_z * *(b + 324 * OS1_S1 + 21) -
                p_over_q * *(b + 412 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 21);
            *(b + 324 * OS1_S1 + 40) =
                prefactor_z * *(b + 324 * OS1_S1 + 22) -
                p_over_q * *(b + 412 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 22) +
                one_over_two_q * *(b + 324 * OS1_S1 + 10);
            *(b + 324 * OS1_S1 + 41) =
                prefactor_x * *(b + 324 * OS1_S1 + 26) -
                p_over_q * *(b + 402 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 26) +
                one_over_two_q * *(b + 324 * OS1_S1 + 16);
            *(b + 324 * OS1_S1 + 42) =
                prefactor_z * *(b + 324 * OS1_S1 + 23) -
                p_over_q * *(b + 412 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 23);
            *(b + 324 * OS1_S1 + 43) =
                prefactor_y * *(b + 324 * OS1_S1 + 25) -
                p_over_q * *(b + 411 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 25);
            *(b + 324 * OS1_S1 + 44) =
                prefactor_x * *(b + 324 * OS1_S1 + 29) -
                p_over_q * *(b + 402 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 29) +
                one_over_two_q * *(b + 324 * OS1_S1 + 19);
            *(b + 324 * OS1_S1 + 45) =
                prefactor_x * *(b + 324 * OS1_S1 + 30) -
                p_over_q * *(b + 402 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 30);
            *(b + 324 * OS1_S1 + 46) =
                prefactor_z * *(b + 324 * OS1_S1 + 26) -
                p_over_q * *(b + 412 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 26);
            *(b + 324 * OS1_S1 + 47) =
                prefactor_x * *(b + 324 * OS1_S1 + 32) -
                p_over_q * *(b + 402 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 32);
            *(b + 324 * OS1_S1 + 48) =
                prefactor_x * *(b + 324 * OS1_S1 + 33) -
                p_over_q * *(b + 402 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 33);
            *(b + 324 * OS1_S1 + 49) =
                prefactor_x * *(b + 324 * OS1_S1 + 34) -
                p_over_q * *(b + 402 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 34);
            *(b + 324 * OS1_S1 + 50) =
                prefactor_y * *(b + 324 * OS1_S1 + 30) -
                p_over_q * *(b + 411 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 16);
            *(b + 324 * OS1_S1 + 51) =
                prefactor_z * *(b + 324 * OS1_S1 + 30) -
                p_over_q * *(b + 412 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 30);
            *(b + 324 * OS1_S1 + 52) =
                prefactor_z * *(b + 324 * OS1_S1 + 31) -
                p_over_q * *(b + 412 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 31) +
                one_over_two_q * *(b + 324 * OS1_S1 + 16);
            *(b + 324 * OS1_S1 + 53) =
                prefactor_y * *(b + 324 * OS1_S1 + 33) -
                p_over_q * *(b + 411 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 33) +
                one_over_two_q * *(b + 324 * OS1_S1 + 19);
            *(b + 324 * OS1_S1 + 54) =
                prefactor_y * *(b + 324 * OS1_S1 + 34) -
                p_over_q * *(b + 411 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 34);
            *(b + 324 * OS1_S1 + 55) =
                prefactor_z * *(b + 324 * OS1_S1 + 34) -
                p_over_q * *(b + 412 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 19);
            *(b + 325 * OS1_S1 + 35) =
                prefactor_x * *(b + 325 * OS1_S1 + 20) -
                p_over_q * *(b + 403 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 10);
            *(b + 325 * OS1_S1 + 36) =
                prefactor_y * *(b + 325 * OS1_S1 + 20) -
                p_over_q * *(b + 412 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 20);
            *(b + 325 * OS1_S1 + 37) =
                prefactor_z * *(b + 325 * OS1_S1 + 20) -
                p_over_q * *(b + 413 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 20);
            *(b + 325 * OS1_S1 + 38) =
                prefactor_y * *(b + 325 * OS1_S1 + 21) -
                p_over_q * *(b + 412 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 21) +
                one_over_two_q * *(b + 325 * OS1_S1 + 10);
            *(b + 325 * OS1_S1 + 39) =
                prefactor_z * *(b + 325 * OS1_S1 + 21) -
                p_over_q * *(b + 413 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 21);
            *(b + 325 * OS1_S1 + 40) =
                prefactor_z * *(b + 325 * OS1_S1 + 22) -
                p_over_q * *(b + 413 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 22) +
                one_over_two_q * *(b + 325 * OS1_S1 + 10);
            *(b + 325 * OS1_S1 + 41) =
                prefactor_x * *(b + 325 * OS1_S1 + 26) -
                p_over_q * *(b + 403 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 26) +
                one_over_two_q * *(b + 325 * OS1_S1 + 16);
            *(b + 325 * OS1_S1 + 42) =
                prefactor_z * *(b + 325 * OS1_S1 + 23) -
                p_over_q * *(b + 413 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 23);
            *(b + 325 * OS1_S1 + 43) =
                prefactor_y * *(b + 325 * OS1_S1 + 25) -
                p_over_q * *(b + 412 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 25);
            *(b + 325 * OS1_S1 + 44) =
                prefactor_x * *(b + 325 * OS1_S1 + 29) -
                p_over_q * *(b + 403 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 29) +
                one_over_two_q * *(b + 325 * OS1_S1 + 19);
            *(b + 325 * OS1_S1 + 45) =
                prefactor_x * *(b + 325 * OS1_S1 + 30) -
                p_over_q * *(b + 403 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 30);
            *(b + 325 * OS1_S1 + 46) =
                prefactor_z * *(b + 325 * OS1_S1 + 26) -
                p_over_q * *(b + 413 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 26);
            *(b + 325 * OS1_S1 + 47) =
                prefactor_x * *(b + 325 * OS1_S1 + 32) -
                p_over_q * *(b + 403 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 32);
            *(b + 325 * OS1_S1 + 48) =
                prefactor_x * *(b + 325 * OS1_S1 + 33) -
                p_over_q * *(b + 403 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 33);
            *(b + 325 * OS1_S1 + 49) =
                prefactor_x * *(b + 325 * OS1_S1 + 34) -
                p_over_q * *(b + 403 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 34);
            *(b + 325 * OS1_S1 + 50) =
                prefactor_y * *(b + 325 * OS1_S1 + 30) -
                p_over_q * *(b + 412 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 16);
            *(b + 325 * OS1_S1 + 51) =
                prefactor_z * *(b + 325 * OS1_S1 + 30) -
                p_over_q * *(b + 413 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 30);
            *(b + 325 * OS1_S1 + 52) =
                prefactor_z * *(b + 325 * OS1_S1 + 31) -
                p_over_q * *(b + 413 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 31) +
                one_over_two_q * *(b + 325 * OS1_S1 + 16);
            *(b + 325 * OS1_S1 + 53) =
                prefactor_y * *(b + 325 * OS1_S1 + 33) -
                p_over_q * *(b + 412 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 33) +
                one_over_two_q * *(b + 325 * OS1_S1 + 19);
            *(b + 325 * OS1_S1 + 54) =
                prefactor_y * *(b + 325 * OS1_S1 + 34) -
                p_over_q * *(b + 412 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 34);
            *(b + 325 * OS1_S1 + 55) =
                prefactor_z * *(b + 325 * OS1_S1 + 34) -
                p_over_q * *(b + 413 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 19);
            *(b + 326 * OS1_S1 + 35) =
                prefactor_x * *(b + 326 * OS1_S1 + 20) -
                p_over_q * *(b + 404 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 326 * OS1_S1 + 10);
            *(b + 326 * OS1_S1 + 36) =
                prefactor_y * *(b + 326 * OS1_S1 + 20) -
                p_over_q * *(b + 413 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 20);
            *(b + 326 * OS1_S1 + 37) =
                prefactor_z * *(b + 326 * OS1_S1 + 20) -
                p_over_q * *(b + 414 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 20);
            *(b + 326 * OS1_S1 + 38) =
                prefactor_y * *(b + 326 * OS1_S1 + 21) -
                p_over_q * *(b + 413 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 21) +
                one_over_two_q * *(b + 326 * OS1_S1 + 10);
            *(b + 326 * OS1_S1 + 39) =
                prefactor_z * *(b + 326 * OS1_S1 + 21) -
                p_over_q * *(b + 414 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 21);
            *(b + 326 * OS1_S1 + 40) =
                prefactor_z * *(b + 326 * OS1_S1 + 22) -
                p_over_q * *(b + 414 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 22) +
                one_over_two_q * *(b + 326 * OS1_S1 + 10);
            *(b + 326 * OS1_S1 + 41) =
                prefactor_x * *(b + 326 * OS1_S1 + 26) -
                p_over_q * *(b + 404 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 26) +
                one_over_two_q * *(b + 326 * OS1_S1 + 16);
            *(b + 326 * OS1_S1 + 42) =
                prefactor_z * *(b + 326 * OS1_S1 + 23) -
                p_over_q * *(b + 414 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 23);
            *(b + 326 * OS1_S1 + 43) =
                prefactor_y * *(b + 326 * OS1_S1 + 25) -
                p_over_q * *(b + 413 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 25);
            *(b + 326 * OS1_S1 + 44) =
                prefactor_x * *(b + 326 * OS1_S1 + 29) -
                p_over_q * *(b + 404 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 29) +
                one_over_two_q * *(b + 326 * OS1_S1 + 19);
            *(b + 326 * OS1_S1 + 45) =
                prefactor_x * *(b + 326 * OS1_S1 + 30) -
                p_over_q * *(b + 404 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 30);
            *(b + 326 * OS1_S1 + 46) =
                prefactor_x * *(b + 326 * OS1_S1 + 31) -
                p_over_q * *(b + 404 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 31);
            *(b + 326 * OS1_S1 + 47) =
                prefactor_x * *(b + 326 * OS1_S1 + 32) -
                p_over_q * *(b + 404 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 32);
            *(b + 326 * OS1_S1 + 48) =
                prefactor_x * *(b + 326 * OS1_S1 + 33) -
                p_over_q * *(b + 404 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 33);
            *(b + 326 * OS1_S1 + 49) =
                prefactor_x * *(b + 326 * OS1_S1 + 34) -
                p_over_q * *(b + 404 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 34);
            *(b + 326 * OS1_S1 + 50) =
                prefactor_y * *(b + 326 * OS1_S1 + 30) -
                p_over_q * *(b + 413 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 326 * OS1_S1 + 16);
            *(b + 326 * OS1_S1 + 51) =
                prefactor_z * *(b + 326 * OS1_S1 + 30) -
                p_over_q * *(b + 414 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 30);
            *(b + 326 * OS1_S1 + 52) =
                prefactor_z * *(b + 326 * OS1_S1 + 31) -
                p_over_q * *(b + 414 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 31) +
                one_over_two_q * *(b + 326 * OS1_S1 + 16);
            *(b + 326 * OS1_S1 + 53) =
                prefactor_y * *(b + 326 * OS1_S1 + 33) -
                p_over_q * *(b + 413 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 33) +
                one_over_two_q * *(b + 326 * OS1_S1 + 19);
            *(b + 326 * OS1_S1 + 54) =
                prefactor_y * *(b + 326 * OS1_S1 + 34) -
                p_over_q * *(b + 413 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 34);
            *(b + 326 * OS1_S1 + 55) =
                prefactor_z * *(b + 326 * OS1_S1 + 34) -
                p_over_q * *(b + 414 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 326 * OS1_S1 + 19);
            *(b + 327 * OS1_S1 + 35) =
                prefactor_x * *(b + 327 * OS1_S1 + 20) -
                p_over_q * *(b + 405 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 10);
            *(b + 327 * OS1_S1 + 36) =
                prefactor_y * *(b + 327 * OS1_S1 + 20) -
                p_over_q * *(b + 414 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 20);
            *(b + 327 * OS1_S1 + 37) =
                prefactor_z * *(b + 327 * OS1_S1 + 20) -
                p_over_q * *(b + 415 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 20);
            *(b + 327 * OS1_S1 + 38) =
                prefactor_y * *(b + 327 * OS1_S1 + 21) -
                p_over_q * *(b + 414 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 21) +
                one_over_two_q * *(b + 327 * OS1_S1 + 10);
            *(b + 327 * OS1_S1 + 39) =
                prefactor_y * *(b + 327 * OS1_S1 + 22) -
                p_over_q * *(b + 414 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 22);
            *(b + 327 * OS1_S1 + 40) =
                prefactor_z * *(b + 327 * OS1_S1 + 22) -
                p_over_q * *(b + 415 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 22) +
                one_over_two_q * *(b + 327 * OS1_S1 + 10);
            *(b + 327 * OS1_S1 + 41) =
                prefactor_x * *(b + 327 * OS1_S1 + 26) -
                p_over_q * *(b + 405 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 26) +
                one_over_two_q * *(b + 327 * OS1_S1 + 16);
            *(b + 327 * OS1_S1 + 42) =
                prefactor_z * *(b + 327 * OS1_S1 + 23) -
                p_over_q * *(b + 415 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 23);
            *(b + 327 * OS1_S1 + 43) =
                prefactor_y * *(b + 327 * OS1_S1 + 25) -
                p_over_q * *(b + 414 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 25);
            *(b + 327 * OS1_S1 + 44) =
                prefactor_x * *(b + 327 * OS1_S1 + 29) -
                p_over_q * *(b + 405 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 29) +
                one_over_two_q * *(b + 327 * OS1_S1 + 19);
            *(b + 327 * OS1_S1 + 45) =
                prefactor_x * *(b + 327 * OS1_S1 + 30) -
                p_over_q * *(b + 405 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 30);
            *(b + 327 * OS1_S1 + 46) =
                prefactor_x * *(b + 327 * OS1_S1 + 31) -
                p_over_q * *(b + 405 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 31);
            *(b + 327 * OS1_S1 + 47) =
                prefactor_x * *(b + 327 * OS1_S1 + 32) -
                p_over_q * *(b + 405 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 32);
            *(b + 327 * OS1_S1 + 48) =
                prefactor_y * *(b + 327 * OS1_S1 + 29) -
                p_over_q * *(b + 414 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 29);
            *(b + 327 * OS1_S1 + 49) =
                prefactor_x * *(b + 327 * OS1_S1 + 34) -
                p_over_q * *(b + 405 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 34);
            *(b + 327 * OS1_S1 + 50) =
                prefactor_y * *(b + 327 * OS1_S1 + 30) -
                p_over_q * *(b + 414 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 16);
            *(b + 327 * OS1_S1 + 51) =
                prefactor_z * *(b + 327 * OS1_S1 + 30) -
                p_over_q * *(b + 415 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 30);
            *(b + 327 * OS1_S1 + 52) =
                prefactor_z * *(b + 327 * OS1_S1 + 31) -
                p_over_q * *(b + 415 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 31) +
                one_over_two_q * *(b + 327 * OS1_S1 + 16);
            *(b + 327 * OS1_S1 + 53) =
                prefactor_y * *(b + 327 * OS1_S1 + 33) -
                p_over_q * *(b + 414 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 33) +
                one_over_two_q * *(b + 327 * OS1_S1 + 19);
            *(b + 327 * OS1_S1 + 54) =
                prefactor_y * *(b + 327 * OS1_S1 + 34) -
                p_over_q * *(b + 414 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 34);
            *(b + 327 * OS1_S1 + 55) =
                prefactor_z * *(b + 327 * OS1_S1 + 34) -
                p_over_q * *(b + 415 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 19);
            *(b + 328 * OS1_S1 + 35) =
                prefactor_x * *(b + 328 * OS1_S1 + 20) -
                p_over_q * *(b + 406 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 10);
            *(b + 328 * OS1_S1 + 36) =
                prefactor_y * *(b + 328 * OS1_S1 + 20) -
                p_over_q * *(b + 415 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 20);
            *(b + 328 * OS1_S1 + 37) =
                prefactor_z * *(b + 328 * OS1_S1 + 20) -
                p_over_q * *(b + 416 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 20);
            *(b + 328 * OS1_S1 + 38) =
                prefactor_y * *(b + 328 * OS1_S1 + 21) -
                p_over_q * *(b + 415 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 21) +
                one_over_two_q * *(b + 328 * OS1_S1 + 10);
            *(b + 328 * OS1_S1 + 39) =
                prefactor_y * *(b + 328 * OS1_S1 + 22) -
                p_over_q * *(b + 415 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 22);
            *(b + 328 * OS1_S1 + 40) =
                prefactor_z * *(b + 328 * OS1_S1 + 22) -
                p_over_q * *(b + 416 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 22) +
                one_over_two_q * *(b + 328 * OS1_S1 + 10);
            *(b + 328 * OS1_S1 + 41) =
                prefactor_x * *(b + 328 * OS1_S1 + 26) -
                p_over_q * *(b + 406 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 26) +
                one_over_two_q * *(b + 328 * OS1_S1 + 16);
            *(b + 328 * OS1_S1 + 42) =
                prefactor_z * *(b + 328 * OS1_S1 + 23) -
                p_over_q * *(b + 416 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 23);
            *(b + 328 * OS1_S1 + 43) =
                prefactor_y * *(b + 328 * OS1_S1 + 25) -
                p_over_q * *(b + 415 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 25);
            *(b + 328 * OS1_S1 + 44) =
                prefactor_x * *(b + 328 * OS1_S1 + 29) -
                p_over_q * *(b + 406 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 29) +
                one_over_two_q * *(b + 328 * OS1_S1 + 19);
            *(b + 328 * OS1_S1 + 45) =
                prefactor_x * *(b + 328 * OS1_S1 + 30) -
                p_over_q * *(b + 406 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 30);
            *(b + 328 * OS1_S1 + 46) =
                prefactor_x * *(b + 328 * OS1_S1 + 31) -
                p_over_q * *(b + 406 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 31);
            *(b + 328 * OS1_S1 + 47) =
                prefactor_x * *(b + 328 * OS1_S1 + 32) -
                p_over_q * *(b + 406 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 32);
            *(b + 328 * OS1_S1 + 48) =
                prefactor_y * *(b + 328 * OS1_S1 + 29) -
                p_over_q * *(b + 415 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 29);
            *(b + 328 * OS1_S1 + 49) =
                prefactor_x * *(b + 328 * OS1_S1 + 34) -
                p_over_q * *(b + 406 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 34);
            *(b + 328 * OS1_S1 + 50) =
                prefactor_y * *(b + 328 * OS1_S1 + 30) -
                p_over_q * *(b + 415 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 16);
            *(b + 328 * OS1_S1 + 51) =
                prefactor_z * *(b + 328 * OS1_S1 + 30) -
                p_over_q * *(b + 416 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 30);
            *(b + 328 * OS1_S1 + 52) =
                prefactor_z * *(b + 328 * OS1_S1 + 31) -
                p_over_q * *(b + 416 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 31) +
                one_over_two_q * *(b + 328 * OS1_S1 + 16);
            *(b + 328 * OS1_S1 + 53) =
                prefactor_y * *(b + 328 * OS1_S1 + 33) -
                p_over_q * *(b + 415 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 33) +
                one_over_two_q * *(b + 328 * OS1_S1 + 19);
            *(b + 328 * OS1_S1 + 54) =
                prefactor_y * *(b + 328 * OS1_S1 + 34) -
                p_over_q * *(b + 415 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 34);
            *(b + 328 * OS1_S1 + 55) =
                prefactor_z * *(b + 328 * OS1_S1 + 34) -
                p_over_q * *(b + 416 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 19);
            *(b + 329 * OS1_S1 + 35) =
                prefactor_x * *(b + 329 * OS1_S1 + 20) -
                p_over_q * *(b + 407 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 10);
            *(b + 329 * OS1_S1 + 36) =
                prefactor_y * *(b + 329 * OS1_S1 + 20) -
                p_over_q * *(b + 416 * OS1_S1 + 20) +
                one_over_two_q * *(b + 255 * OS1_S1 + 20);
            *(b + 329 * OS1_S1 + 37) =
                prefactor_z * *(b + 329 * OS1_S1 + 20) -
                p_over_q * *(b + 417 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 20);
            *(b + 329 * OS1_S1 + 38) =
                prefactor_y * *(b + 329 * OS1_S1 + 21) -
                p_over_q * *(b + 416 * OS1_S1 + 21) +
                one_over_two_q * *(b + 255 * OS1_S1 + 21) +
                one_over_two_q * *(b + 329 * OS1_S1 + 10);
            *(b + 329 * OS1_S1 + 39) =
                prefactor_y * *(b + 329 * OS1_S1 + 22) -
                p_over_q * *(b + 416 * OS1_S1 + 22) +
                one_over_two_q * *(b + 255 * OS1_S1 + 22);
            *(b + 329 * OS1_S1 + 40) =
                prefactor_z * *(b + 329 * OS1_S1 + 22) -
                p_over_q * *(b + 417 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 22) +
                one_over_two_q * *(b + 329 * OS1_S1 + 10);
            *(b + 329 * OS1_S1 + 41) =
                prefactor_x * *(b + 329 * OS1_S1 + 26) -
                p_over_q * *(b + 407 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 26) +
                one_over_two_q * *(b + 329 * OS1_S1 + 16);
            *(b + 329 * OS1_S1 + 42) =
                prefactor_z * *(b + 329 * OS1_S1 + 23) -
                p_over_q * *(b + 417 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 23);
            *(b + 329 * OS1_S1 + 43) =
                prefactor_y * *(b + 329 * OS1_S1 + 25) -
                p_over_q * *(b + 416 * OS1_S1 + 25) +
                one_over_two_q * *(b + 255 * OS1_S1 + 25);
            *(b + 329 * OS1_S1 + 44) =
                prefactor_x * *(b + 329 * OS1_S1 + 29) -
                p_over_q * *(b + 407 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 29) +
                one_over_two_q * *(b + 329 * OS1_S1 + 19);
            *(b + 329 * OS1_S1 + 45) =
                prefactor_x * *(b + 329 * OS1_S1 + 30) -
                p_over_q * *(b + 407 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 30);
            *(b + 329 * OS1_S1 + 46) =
                prefactor_x * *(b + 329 * OS1_S1 + 31) -
                p_over_q * *(b + 407 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 31);
            *(b + 329 * OS1_S1 + 47) =
                prefactor_x * *(b + 329 * OS1_S1 + 32) -
                p_over_q * *(b + 407 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 32);
            *(b + 329 * OS1_S1 + 48) =
                prefactor_y * *(b + 329 * OS1_S1 + 29) -
                p_over_q * *(b + 416 * OS1_S1 + 29) +
                one_over_two_q * *(b + 255 * OS1_S1 + 29);
            *(b + 329 * OS1_S1 + 49) =
                prefactor_x * *(b + 329 * OS1_S1 + 34) -
                p_over_q * *(b + 407 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 34);
            *(b + 329 * OS1_S1 + 50) =
                prefactor_y * *(b + 329 * OS1_S1 + 30) -
                p_over_q * *(b + 416 * OS1_S1 + 30) +
                one_over_two_q * *(b + 255 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 16);
            *(b + 329 * OS1_S1 + 51) =
                prefactor_z * *(b + 329 * OS1_S1 + 30) -
                p_over_q * *(b + 417 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 30);
            *(b + 329 * OS1_S1 + 52) =
                prefactor_z * *(b + 329 * OS1_S1 + 31) -
                p_over_q * *(b + 417 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 31) +
                one_over_two_q * *(b + 329 * OS1_S1 + 16);
            *(b + 329 * OS1_S1 + 53) =
                prefactor_y * *(b + 329 * OS1_S1 + 33) -
                p_over_q * *(b + 416 * OS1_S1 + 33) +
                one_over_two_q * *(b + 255 * OS1_S1 + 33) +
                one_over_two_q * *(b + 329 * OS1_S1 + 19);
            *(b + 329 * OS1_S1 + 54) =
                prefactor_y * *(b + 329 * OS1_S1 + 34) -
                p_over_q * *(b + 416 * OS1_S1 + 34) +
                one_over_two_q * *(b + 255 * OS1_S1 + 34);
            *(b + 329 * OS1_S1 + 55) =
                prefactor_z * *(b + 329 * OS1_S1 + 34) -
                p_over_q * *(b + 417 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 19);
            *(b + 330 * OS1_S1 + 35) =
                prefactor_x * *(b + 330 * OS1_S1 + 20) -
                p_over_q * *(b + 408 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 10);
            *(b + 330 * OS1_S1 + 36) = prefactor_y * *(b + 330 * OS1_S1 + 20) -
                                       p_over_q * *(b + 417 * OS1_S1 + 20);
            *(b + 330 * OS1_S1 + 37) =
                prefactor_z * *(b + 330 * OS1_S1 + 20) -
                p_over_q * *(b + 418 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 20);
            *(b + 330 * OS1_S1 + 38) =
                prefactor_y * *(b + 330 * OS1_S1 + 21) -
                p_over_q * *(b + 417 * OS1_S1 + 21) +
                one_over_two_q * *(b + 330 * OS1_S1 + 10);
            *(b + 330 * OS1_S1 + 39) = prefactor_y * *(b + 330 * OS1_S1 + 22) -
                                       p_over_q * *(b + 417 * OS1_S1 + 22);
            *(b + 330 * OS1_S1 + 40) =
                prefactor_z * *(b + 330 * OS1_S1 + 22) -
                p_over_q * *(b + 418 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 22) +
                one_over_two_q * *(b + 330 * OS1_S1 + 10);
            *(b + 330 * OS1_S1 + 41) =
                prefactor_x * *(b + 330 * OS1_S1 + 26) -
                p_over_q * *(b + 408 * OS1_S1 + 26) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 26) +
                one_over_two_q * *(b + 330 * OS1_S1 + 16);
            *(b + 330 * OS1_S1 + 42) =
                prefactor_z * *(b + 330 * OS1_S1 + 23) -
                p_over_q * *(b + 418 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 23);
            *(b + 330 * OS1_S1 + 43) = prefactor_y * *(b + 330 * OS1_S1 + 25) -
                                       p_over_q * *(b + 417 * OS1_S1 + 25);
            *(b + 330 * OS1_S1 + 44) =
                prefactor_x * *(b + 330 * OS1_S1 + 29) -
                p_over_q * *(b + 408 * OS1_S1 + 29) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 29) +
                one_over_two_q * *(b + 330 * OS1_S1 + 19);
            *(b + 330 * OS1_S1 + 45) =
                prefactor_x * *(b + 330 * OS1_S1 + 30) -
                p_over_q * *(b + 408 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 30);
            *(b + 330 * OS1_S1 + 46) =
                prefactor_x * *(b + 330 * OS1_S1 + 31) -
                p_over_q * *(b + 408 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 31);
            *(b + 330 * OS1_S1 + 47) =
                prefactor_x * *(b + 330 * OS1_S1 + 32) -
                p_over_q * *(b + 408 * OS1_S1 + 32) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 32);
            *(b + 330 * OS1_S1 + 48) = prefactor_y * *(b + 330 * OS1_S1 + 29) -
                                       p_over_q * *(b + 417 * OS1_S1 + 29);
            *(b + 330 * OS1_S1 + 49) =
                prefactor_x * *(b + 330 * OS1_S1 + 34) -
                p_over_q * *(b + 408 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 34);
            *(b + 330 * OS1_S1 + 50) =
                prefactor_y * *(b + 330 * OS1_S1 + 30) -
                p_over_q * *(b + 417 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 16);
            *(b + 330 * OS1_S1 + 51) =
                prefactor_z * *(b + 330 * OS1_S1 + 30) -
                p_over_q * *(b + 418 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 30);
            *(b + 330 * OS1_S1 + 52) =
                prefactor_z * *(b + 330 * OS1_S1 + 31) -
                p_over_q * *(b + 418 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 31) +
                one_over_two_q * *(b + 330 * OS1_S1 + 16);
            *(b + 330 * OS1_S1 + 53) =
                prefactor_y * *(b + 330 * OS1_S1 + 33) -
                p_over_q * *(b + 417 * OS1_S1 + 33) +
                one_over_two_q * *(b + 330 * OS1_S1 + 19);
            *(b + 330 * OS1_S1 + 54) = prefactor_y * *(b + 330 * OS1_S1 + 34) -
                                       p_over_q * *(b + 417 * OS1_S1 + 34);
            *(b + 330 * OS1_S1 + 55) =
                prefactor_z * *(b + 330 * OS1_S1 + 34) -
                p_over_q * *(b + 418 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 19);
            *(b + 331 * OS1_S1 + 35) =
                prefactor_x * *(b + 331 * OS1_S1 + 20) -
                p_over_q * *(b + 409 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 331 * OS1_S1 + 10);
            *(b + 331 * OS1_S1 + 36) =
                prefactor_y * *(b + 331 * OS1_S1 + 20) -
                p_over_q * *(b + 419 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 20);
            *(b + 331 * OS1_S1 + 37) = prefactor_z * *(b + 331 * OS1_S1 + 20) -
                                       p_over_q * *(b + 420 * OS1_S1 + 20);
            *(b + 331 * OS1_S1 + 38) =
                prefactor_y * *(b + 331 * OS1_S1 + 21) -
                p_over_q * *(b + 419 * OS1_S1 + 21) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 21) +
                one_over_two_q * *(b + 331 * OS1_S1 + 10);
            *(b + 331 * OS1_S1 + 39) = prefactor_z * *(b + 331 * OS1_S1 + 21) -
                                       p_over_q * *(b + 420 * OS1_S1 + 21);
            *(b + 331 * OS1_S1 + 40) =
                prefactor_z * *(b + 331 * OS1_S1 + 22) -
                p_over_q * *(b + 420 * OS1_S1 + 22) +
                one_over_two_q * *(b + 331 * OS1_S1 + 10);
            *(b + 331 * OS1_S1 + 41) =
                prefactor_x * *(b + 331 * OS1_S1 + 26) -
                p_over_q * *(b + 409 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 26) +
                one_over_two_q * *(b + 331 * OS1_S1 + 16);
            *(b + 331 * OS1_S1 + 42) = prefactor_z * *(b + 331 * OS1_S1 + 23) -
                                       p_over_q * *(b + 420 * OS1_S1 + 23);
            *(b + 331 * OS1_S1 + 43) =
                prefactor_y * *(b + 331 * OS1_S1 + 25) -
                p_over_q * *(b + 419 * OS1_S1 + 25) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 25);
            *(b + 331 * OS1_S1 + 44) =
                prefactor_x * *(b + 331 * OS1_S1 + 29) -
                p_over_q * *(b + 409 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 29) +
                one_over_two_q * *(b + 331 * OS1_S1 + 19);
            *(b + 331 * OS1_S1 + 45) =
                prefactor_x * *(b + 331 * OS1_S1 + 30) -
                p_over_q * *(b + 409 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 30);
            *(b + 331 * OS1_S1 + 46) = prefactor_z * *(b + 331 * OS1_S1 + 26) -
                                       p_over_q * *(b + 420 * OS1_S1 + 26);
            *(b + 331 * OS1_S1 + 47) =
                prefactor_x * *(b + 331 * OS1_S1 + 32) -
                p_over_q * *(b + 409 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 32);
            *(b + 331 * OS1_S1 + 48) =
                prefactor_x * *(b + 331 * OS1_S1 + 33) -
                p_over_q * *(b + 409 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 33);
            *(b + 331 * OS1_S1 + 49) =
                prefactor_x * *(b + 331 * OS1_S1 + 34) -
                p_over_q * *(b + 409 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 34);
            *(b + 331 * OS1_S1 + 50) =
                prefactor_y * *(b + 331 * OS1_S1 + 30) -
                p_over_q * *(b + 419 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 331 * OS1_S1 + 16);
            *(b + 331 * OS1_S1 + 51) = prefactor_z * *(b + 331 * OS1_S1 + 30) -
                                       p_over_q * *(b + 420 * OS1_S1 + 30);
            *(b + 331 * OS1_S1 + 52) =
                prefactor_z * *(b + 331 * OS1_S1 + 31) -
                p_over_q * *(b + 420 * OS1_S1 + 31) +
                one_over_two_q * *(b + 331 * OS1_S1 + 16);
            *(b + 331 * OS1_S1 + 53) =
                prefactor_y * *(b + 331 * OS1_S1 + 33) -
                p_over_q * *(b + 419 * OS1_S1 + 33) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 33) +
                one_over_two_q * *(b + 331 * OS1_S1 + 19);
            *(b + 331 * OS1_S1 + 54) =
                prefactor_y * *(b + 331 * OS1_S1 + 34) -
                p_over_q * *(b + 419 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 34);
            *(b + 331 * OS1_S1 + 55) =
                prefactor_z * *(b + 331 * OS1_S1 + 34) -
                p_over_q * *(b + 420 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 331 * OS1_S1 + 19);
            *(b + 332 * OS1_S1 + 35) =
                prefactor_x * *(b + 332 * OS1_S1 + 20) -
                p_over_q * *(b + 410 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 332 * OS1_S1 + 10);
            *(b + 332 * OS1_S1 + 36) =
                prefactor_y * *(b + 332 * OS1_S1 + 20) -
                p_over_q * *(b + 420 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 20);
            *(b + 332 * OS1_S1 + 37) =
                prefactor_z * *(b + 332 * OS1_S1 + 20) -
                p_over_q * *(b + 421 * OS1_S1 + 20) +
                one_over_two_q * *(b + 256 * OS1_S1 + 20);
            *(b + 332 * OS1_S1 + 38) =
                prefactor_y * *(b + 332 * OS1_S1 + 21) -
                p_over_q * *(b + 420 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 21) +
                one_over_two_q * *(b + 332 * OS1_S1 + 10);
            *(b + 332 * OS1_S1 + 39) =
                prefactor_z * *(b + 332 * OS1_S1 + 21) -
                p_over_q * *(b + 421 * OS1_S1 + 21) +
                one_over_two_q * *(b + 256 * OS1_S1 + 21);
            *(b + 332 * OS1_S1 + 40) =
                prefactor_z * *(b + 332 * OS1_S1 + 22) -
                p_over_q * *(b + 421 * OS1_S1 + 22) +
                one_over_two_q * *(b + 256 * OS1_S1 + 22) +
                one_over_two_q * *(b + 332 * OS1_S1 + 10);
            *(b + 332 * OS1_S1 + 41) =
                prefactor_x * *(b + 332 * OS1_S1 + 26) -
                p_over_q * *(b + 410 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 26) +
                one_over_two_q * *(b + 332 * OS1_S1 + 16);
            *(b + 332 * OS1_S1 + 42) =
                prefactor_z * *(b + 332 * OS1_S1 + 23) -
                p_over_q * *(b + 421 * OS1_S1 + 23) +
                one_over_two_q * *(b + 256 * OS1_S1 + 23);
            *(b + 332 * OS1_S1 + 43) =
                prefactor_y * *(b + 332 * OS1_S1 + 25) -
                p_over_q * *(b + 420 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 25);
            *(b + 332 * OS1_S1 + 44) =
                prefactor_x * *(b + 332 * OS1_S1 + 29) -
                p_over_q * *(b + 410 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 29) +
                one_over_two_q * *(b + 332 * OS1_S1 + 19);
            *(b + 332 * OS1_S1 + 45) =
                prefactor_x * *(b + 332 * OS1_S1 + 30) -
                p_over_q * *(b + 410 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 30);
            *(b + 332 * OS1_S1 + 46) =
                prefactor_z * *(b + 332 * OS1_S1 + 26) -
                p_over_q * *(b + 421 * OS1_S1 + 26) +
                one_over_two_q * *(b + 256 * OS1_S1 + 26);
            *(b + 332 * OS1_S1 + 47) =
                prefactor_x * *(b + 332 * OS1_S1 + 32) -
                p_over_q * *(b + 410 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 32);
            *(b + 332 * OS1_S1 + 48) =
                prefactor_x * *(b + 332 * OS1_S1 + 33) -
                p_over_q * *(b + 410 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 33);
            *(b + 332 * OS1_S1 + 49) =
                prefactor_x * *(b + 332 * OS1_S1 + 34) -
                p_over_q * *(b + 410 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 34);
            *(b + 332 * OS1_S1 + 50) =
                prefactor_y * *(b + 332 * OS1_S1 + 30) -
                p_over_q * *(b + 420 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 332 * OS1_S1 + 16);
            *(b + 332 * OS1_S1 + 51) =
                prefactor_z * *(b + 332 * OS1_S1 + 30) -
                p_over_q * *(b + 421 * OS1_S1 + 30) +
                one_over_two_q * *(b + 256 * OS1_S1 + 30);
            *(b + 332 * OS1_S1 + 52) =
                prefactor_z * *(b + 332 * OS1_S1 + 31) -
                p_over_q * *(b + 421 * OS1_S1 + 31) +
                one_over_two_q * *(b + 256 * OS1_S1 + 31) +
                one_over_two_q * *(b + 332 * OS1_S1 + 16);
            *(b + 332 * OS1_S1 + 53) =
                prefactor_y * *(b + 332 * OS1_S1 + 33) -
                p_over_q * *(b + 420 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 33) +
                one_over_two_q * *(b + 332 * OS1_S1 + 19);
            *(b + 332 * OS1_S1 + 54) =
                prefactor_y * *(b + 332 * OS1_S1 + 34) -
                p_over_q * *(b + 420 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 34);
            *(b + 332 * OS1_S1 + 55) =
                prefactor_z * *(b + 332 * OS1_S1 + 34) -
                p_over_q * *(b + 421 * OS1_S1 + 34) +
                one_over_two_q * *(b + 256 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 332 * OS1_S1 + 19);
            *(b + 333 * OS1_S1 + 35) =
                prefactor_x * *(b + 333 * OS1_S1 + 20) -
                p_over_q * *(b + 411 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 333 * OS1_S1 + 10);
            *(b + 333 * OS1_S1 + 36) =
                prefactor_y * *(b + 333 * OS1_S1 + 20) -
                p_over_q * *(b + 421 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 20);
            *(b + 333 * OS1_S1 + 37) =
                prefactor_z * *(b + 333 * OS1_S1 + 20) -
                p_over_q * *(b + 422 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 20);
            *(b + 333 * OS1_S1 + 38) =
                prefactor_y * *(b + 333 * OS1_S1 + 21) -
                p_over_q * *(b + 421 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 21) +
                one_over_two_q * *(b + 333 * OS1_S1 + 10);
            *(b + 333 * OS1_S1 + 39) =
                prefactor_z * *(b + 333 * OS1_S1 + 21) -
                p_over_q * *(b + 422 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 21);
            *(b + 333 * OS1_S1 + 40) =
                prefactor_z * *(b + 333 * OS1_S1 + 22) -
                p_over_q * *(b + 422 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 22) +
                one_over_two_q * *(b + 333 * OS1_S1 + 10);
            *(b + 333 * OS1_S1 + 41) =
                prefactor_x * *(b + 333 * OS1_S1 + 26) -
                p_over_q * *(b + 411 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 26) +
                one_over_two_q * *(b + 333 * OS1_S1 + 16);
            *(b + 333 * OS1_S1 + 42) =
                prefactor_z * *(b + 333 * OS1_S1 + 23) -
                p_over_q * *(b + 422 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 23);
            *(b + 333 * OS1_S1 + 43) =
                prefactor_y * *(b + 333 * OS1_S1 + 25) -
                p_over_q * *(b + 421 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 25);
            *(b + 333 * OS1_S1 + 44) =
                prefactor_x * *(b + 333 * OS1_S1 + 29) -
                p_over_q * *(b + 411 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 29) +
                one_over_two_q * *(b + 333 * OS1_S1 + 19);
            *(b + 333 * OS1_S1 + 45) =
                prefactor_x * *(b + 333 * OS1_S1 + 30) -
                p_over_q * *(b + 411 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 30);
            *(b + 333 * OS1_S1 + 46) =
                prefactor_z * *(b + 333 * OS1_S1 + 26) -
                p_over_q * *(b + 422 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 26);
            *(b + 333 * OS1_S1 + 47) =
                prefactor_x * *(b + 333 * OS1_S1 + 32) -
                p_over_q * *(b + 411 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 32);
            *(b + 333 * OS1_S1 + 48) =
                prefactor_x * *(b + 333 * OS1_S1 + 33) -
                p_over_q * *(b + 411 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 33);
            *(b + 333 * OS1_S1 + 49) =
                prefactor_x * *(b + 333 * OS1_S1 + 34) -
                p_over_q * *(b + 411 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 34);
            *(b + 333 * OS1_S1 + 50) =
                prefactor_y * *(b + 333 * OS1_S1 + 30) -
                p_over_q * *(b + 421 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 333 * OS1_S1 + 16);
            *(b + 333 * OS1_S1 + 51) =
                prefactor_z * *(b + 333 * OS1_S1 + 30) -
                p_over_q * *(b + 422 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 30);
            *(b + 333 * OS1_S1 + 52) =
                prefactor_z * *(b + 333 * OS1_S1 + 31) -
                p_over_q * *(b + 422 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 31) +
                one_over_two_q * *(b + 333 * OS1_S1 + 16);
            *(b + 333 * OS1_S1 + 53) =
                prefactor_y * *(b + 333 * OS1_S1 + 33) -
                p_over_q * *(b + 421 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 33) +
                one_over_two_q * *(b + 333 * OS1_S1 + 19);
            *(b + 333 * OS1_S1 + 54) =
                prefactor_y * *(b + 333 * OS1_S1 + 34) -
                p_over_q * *(b + 421 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 34);
            *(b + 333 * OS1_S1 + 55) =
                prefactor_z * *(b + 333 * OS1_S1 + 34) -
                p_over_q * *(b + 422 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 333 * OS1_S1 + 19);
            *(b + 334 * OS1_S1 + 35) =
                prefactor_x * *(b + 334 * OS1_S1 + 20) -
                p_over_q * *(b + 412 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 10);
            *(b + 334 * OS1_S1 + 36) =
                prefactor_y * *(b + 334 * OS1_S1 + 20) -
                p_over_q * *(b + 422 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 20);
            *(b + 334 * OS1_S1 + 37) =
                prefactor_z * *(b + 334 * OS1_S1 + 20) -
                p_over_q * *(b + 423 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 20);
            *(b + 334 * OS1_S1 + 38) =
                prefactor_y * *(b + 334 * OS1_S1 + 21) -
                p_over_q * *(b + 422 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 21) +
                one_over_two_q * *(b + 334 * OS1_S1 + 10);
            *(b + 334 * OS1_S1 + 39) =
                prefactor_z * *(b + 334 * OS1_S1 + 21) -
                p_over_q * *(b + 423 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 21);
            *(b + 334 * OS1_S1 + 40) =
                prefactor_z * *(b + 334 * OS1_S1 + 22) -
                p_over_q * *(b + 423 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 22) +
                one_over_two_q * *(b + 334 * OS1_S1 + 10);
            *(b + 334 * OS1_S1 + 41) =
                prefactor_x * *(b + 334 * OS1_S1 + 26) -
                p_over_q * *(b + 412 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 26) +
                one_over_two_q * *(b + 334 * OS1_S1 + 16);
            *(b + 334 * OS1_S1 + 42) =
                prefactor_z * *(b + 334 * OS1_S1 + 23) -
                p_over_q * *(b + 423 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 23);
            *(b + 334 * OS1_S1 + 43) =
                prefactor_y * *(b + 334 * OS1_S1 + 25) -
                p_over_q * *(b + 422 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 25);
            *(b + 334 * OS1_S1 + 44) =
                prefactor_x * *(b + 334 * OS1_S1 + 29) -
                p_over_q * *(b + 412 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 29) +
                one_over_two_q * *(b + 334 * OS1_S1 + 19);
            *(b + 334 * OS1_S1 + 45) =
                prefactor_x * *(b + 334 * OS1_S1 + 30) -
                p_over_q * *(b + 412 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 30);
            *(b + 334 * OS1_S1 + 46) =
                prefactor_x * *(b + 334 * OS1_S1 + 31) -
                p_over_q * *(b + 412 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 31);
            *(b + 334 * OS1_S1 + 47) =
                prefactor_x * *(b + 334 * OS1_S1 + 32) -
                p_over_q * *(b + 412 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 32);
            *(b + 334 * OS1_S1 + 48) =
                prefactor_x * *(b + 334 * OS1_S1 + 33) -
                p_over_q * *(b + 412 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 33);
            *(b + 334 * OS1_S1 + 49) =
                prefactor_x * *(b + 334 * OS1_S1 + 34) -
                p_over_q * *(b + 412 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 34);
            *(b + 334 * OS1_S1 + 50) =
                prefactor_y * *(b + 334 * OS1_S1 + 30) -
                p_over_q * *(b + 422 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 16);
            *(b + 334 * OS1_S1 + 51) =
                prefactor_z * *(b + 334 * OS1_S1 + 30) -
                p_over_q * *(b + 423 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 30);
            *(b + 334 * OS1_S1 + 52) =
                prefactor_z * *(b + 334 * OS1_S1 + 31) -
                p_over_q * *(b + 423 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 31) +
                one_over_two_q * *(b + 334 * OS1_S1 + 16);
            *(b + 334 * OS1_S1 + 53) =
                prefactor_y * *(b + 334 * OS1_S1 + 33) -
                p_over_q * *(b + 422 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 33) +
                one_over_two_q * *(b + 334 * OS1_S1 + 19);
            *(b + 334 * OS1_S1 + 54) =
                prefactor_y * *(b + 334 * OS1_S1 + 34) -
                p_over_q * *(b + 422 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 34);
            *(b + 334 * OS1_S1 + 55) =
                prefactor_z * *(b + 334 * OS1_S1 + 34) -
                p_over_q * *(b + 423 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 19);
            *(b + 335 * OS1_S1 + 35) =
                prefactor_x * *(b + 335 * OS1_S1 + 20) -
                p_over_q * *(b + 413 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 335 * OS1_S1 + 10);
            *(b + 335 * OS1_S1 + 36) =
                prefactor_y * *(b + 335 * OS1_S1 + 20) -
                p_over_q * *(b + 423 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 20);
            *(b + 335 * OS1_S1 + 37) =
                prefactor_z * *(b + 335 * OS1_S1 + 20) -
                p_over_q * *(b + 424 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 20);
            *(b + 335 * OS1_S1 + 38) =
                prefactor_y * *(b + 335 * OS1_S1 + 21) -
                p_over_q * *(b + 423 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 21) +
                one_over_two_q * *(b + 335 * OS1_S1 + 10);
            *(b + 335 * OS1_S1 + 39) =
                prefactor_z * *(b + 335 * OS1_S1 + 21) -
                p_over_q * *(b + 424 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 21);
            *(b + 335 * OS1_S1 + 40) =
                prefactor_z * *(b + 335 * OS1_S1 + 22) -
                p_over_q * *(b + 424 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 22) +
                one_over_two_q * *(b + 335 * OS1_S1 + 10);
            *(b + 335 * OS1_S1 + 41) =
                prefactor_x * *(b + 335 * OS1_S1 + 26) -
                p_over_q * *(b + 413 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 26) +
                one_over_two_q * *(b + 335 * OS1_S1 + 16);
            *(b + 335 * OS1_S1 + 42) =
                prefactor_z * *(b + 335 * OS1_S1 + 23) -
                p_over_q * *(b + 424 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 23);
            *(b + 335 * OS1_S1 + 43) =
                prefactor_y * *(b + 335 * OS1_S1 + 25) -
                p_over_q * *(b + 423 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 25);
            *(b + 335 * OS1_S1 + 44) =
                prefactor_x * *(b + 335 * OS1_S1 + 29) -
                p_over_q * *(b + 413 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 29) +
                one_over_two_q * *(b + 335 * OS1_S1 + 19);
            *(b + 335 * OS1_S1 + 45) =
                prefactor_x * *(b + 335 * OS1_S1 + 30) -
                p_over_q * *(b + 413 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 30);
            *(b + 335 * OS1_S1 + 46) =
                prefactor_x * *(b + 335 * OS1_S1 + 31) -
                p_over_q * *(b + 413 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 31);
            *(b + 335 * OS1_S1 + 47) =
                prefactor_x * *(b + 335 * OS1_S1 + 32) -
                p_over_q * *(b + 413 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 32);
            *(b + 335 * OS1_S1 + 48) =
                prefactor_x * *(b + 335 * OS1_S1 + 33) -
                p_over_q * *(b + 413 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 33);
            *(b + 335 * OS1_S1 + 49) =
                prefactor_x * *(b + 335 * OS1_S1 + 34) -
                p_over_q * *(b + 413 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 34);
            *(b + 335 * OS1_S1 + 50) =
                prefactor_y * *(b + 335 * OS1_S1 + 30) -
                p_over_q * *(b + 423 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 335 * OS1_S1 + 16);
            *(b + 335 * OS1_S1 + 51) =
                prefactor_z * *(b + 335 * OS1_S1 + 30) -
                p_over_q * *(b + 424 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 30);
            *(b + 335 * OS1_S1 + 52) =
                prefactor_z * *(b + 335 * OS1_S1 + 31) -
                p_over_q * *(b + 424 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 31) +
                one_over_two_q * *(b + 335 * OS1_S1 + 16);
            *(b + 335 * OS1_S1 + 53) =
                prefactor_y * *(b + 335 * OS1_S1 + 33) -
                p_over_q * *(b + 423 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 33) +
                one_over_two_q * *(b + 335 * OS1_S1 + 19);
            *(b + 335 * OS1_S1 + 54) =
                prefactor_y * *(b + 335 * OS1_S1 + 34) -
                p_over_q * *(b + 423 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 34);
            *(b + 335 * OS1_S1 + 55) =
                prefactor_z * *(b + 335 * OS1_S1 + 34) -
                p_over_q * *(b + 424 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 335 * OS1_S1 + 19);
            *(b + 336 * OS1_S1 + 35) =
                prefactor_x * *(b + 336 * OS1_S1 + 20) -
                p_over_q * *(b + 414 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 336 * OS1_S1 + 10);
            *(b + 336 * OS1_S1 + 36) =
                prefactor_y * *(b + 336 * OS1_S1 + 20) -
                p_over_q * *(b + 424 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 20);
            *(b + 336 * OS1_S1 + 37) =
                prefactor_z * *(b + 336 * OS1_S1 + 20) -
                p_over_q * *(b + 425 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 20);
            *(b + 336 * OS1_S1 + 38) =
                prefactor_y * *(b + 336 * OS1_S1 + 21) -
                p_over_q * *(b + 424 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 21) +
                one_over_two_q * *(b + 336 * OS1_S1 + 10);
            *(b + 336 * OS1_S1 + 39) =
                prefactor_y * *(b + 336 * OS1_S1 + 22) -
                p_over_q * *(b + 424 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 22);
            *(b + 336 * OS1_S1 + 40) =
                prefactor_z * *(b + 336 * OS1_S1 + 22) -
                p_over_q * *(b + 425 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 22) +
                one_over_two_q * *(b + 336 * OS1_S1 + 10);
            *(b + 336 * OS1_S1 + 41) =
                prefactor_x * *(b + 336 * OS1_S1 + 26) -
                p_over_q * *(b + 414 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 26) +
                one_over_two_q * *(b + 336 * OS1_S1 + 16);
            *(b + 336 * OS1_S1 + 42) =
                prefactor_z * *(b + 336 * OS1_S1 + 23) -
                p_over_q * *(b + 425 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 23);
            *(b + 336 * OS1_S1 + 43) =
                prefactor_y * *(b + 336 * OS1_S1 + 25) -
                p_over_q * *(b + 424 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 25);
            *(b + 336 * OS1_S1 + 44) =
                prefactor_x * *(b + 336 * OS1_S1 + 29) -
                p_over_q * *(b + 414 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 29) +
                one_over_two_q * *(b + 336 * OS1_S1 + 19);
            *(b + 336 * OS1_S1 + 45) =
                prefactor_x * *(b + 336 * OS1_S1 + 30) -
                p_over_q * *(b + 414 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 30);
            *(b + 336 * OS1_S1 + 46) =
                prefactor_x * *(b + 336 * OS1_S1 + 31) -
                p_over_q * *(b + 414 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 31);
            *(b + 336 * OS1_S1 + 47) =
                prefactor_x * *(b + 336 * OS1_S1 + 32) -
                p_over_q * *(b + 414 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 32);
            *(b + 336 * OS1_S1 + 48) =
                prefactor_x * *(b + 336 * OS1_S1 + 33) -
                p_over_q * *(b + 414 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 33);
            *(b + 336 * OS1_S1 + 49) =
                prefactor_x * *(b + 336 * OS1_S1 + 34) -
                p_over_q * *(b + 414 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 34);
            *(b + 336 * OS1_S1 + 50) =
                prefactor_y * *(b + 336 * OS1_S1 + 30) -
                p_over_q * *(b + 424 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 336 * OS1_S1 + 16);
            *(b + 336 * OS1_S1 + 51) =
                prefactor_z * *(b + 336 * OS1_S1 + 30) -
                p_over_q * *(b + 425 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 30);
            *(b + 336 * OS1_S1 + 52) =
                prefactor_z * *(b + 336 * OS1_S1 + 31) -
                p_over_q * *(b + 425 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 31) +
                one_over_two_q * *(b + 336 * OS1_S1 + 16);
            *(b + 336 * OS1_S1 + 53) =
                prefactor_y * *(b + 336 * OS1_S1 + 33) -
                p_over_q * *(b + 424 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 33) +
                one_over_two_q * *(b + 336 * OS1_S1 + 19);
            *(b + 336 * OS1_S1 + 54) =
                prefactor_y * *(b + 336 * OS1_S1 + 34) -
                p_over_q * *(b + 424 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 34);
            *(b + 336 * OS1_S1 + 55) =
                prefactor_z * *(b + 336 * OS1_S1 + 34) -
                p_over_q * *(b + 425 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 336 * OS1_S1 + 19);
            *(b + 337 * OS1_S1 + 35) =
                prefactor_x * *(b + 337 * OS1_S1 + 20) -
                p_over_q * *(b + 415 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 10);
            *(b + 337 * OS1_S1 + 36) =
                prefactor_y * *(b + 337 * OS1_S1 + 20) -
                p_over_q * *(b + 425 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 20);
            *(b + 337 * OS1_S1 + 37) =
                prefactor_z * *(b + 337 * OS1_S1 + 20) -
                p_over_q * *(b + 426 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 20);
            *(b + 337 * OS1_S1 + 38) =
                prefactor_y * *(b + 337 * OS1_S1 + 21) -
                p_over_q * *(b + 425 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 21) +
                one_over_two_q * *(b + 337 * OS1_S1 + 10);
            *(b + 337 * OS1_S1 + 39) =
                prefactor_y * *(b + 337 * OS1_S1 + 22) -
                p_over_q * *(b + 425 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 22);
            *(b + 337 * OS1_S1 + 40) =
                prefactor_z * *(b + 337 * OS1_S1 + 22) -
                p_over_q * *(b + 426 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 22) +
                one_over_two_q * *(b + 337 * OS1_S1 + 10);
            *(b + 337 * OS1_S1 + 41) =
                prefactor_x * *(b + 337 * OS1_S1 + 26) -
                p_over_q * *(b + 415 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 26) +
                one_over_two_q * *(b + 337 * OS1_S1 + 16);
            *(b + 337 * OS1_S1 + 42) =
                prefactor_z * *(b + 337 * OS1_S1 + 23) -
                p_over_q * *(b + 426 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 23);
            *(b + 337 * OS1_S1 + 43) =
                prefactor_y * *(b + 337 * OS1_S1 + 25) -
                p_over_q * *(b + 425 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 25);
            *(b + 337 * OS1_S1 + 44) =
                prefactor_x * *(b + 337 * OS1_S1 + 29) -
                p_over_q * *(b + 415 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 29) +
                one_over_two_q * *(b + 337 * OS1_S1 + 19);
            *(b + 337 * OS1_S1 + 45) =
                prefactor_x * *(b + 337 * OS1_S1 + 30) -
                p_over_q * *(b + 415 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 30);
            *(b + 337 * OS1_S1 + 46) =
                prefactor_x * *(b + 337 * OS1_S1 + 31) -
                p_over_q * *(b + 415 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 31);
            *(b + 337 * OS1_S1 + 47) =
                prefactor_x * *(b + 337 * OS1_S1 + 32) -
                p_over_q * *(b + 415 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 32);
            *(b + 337 * OS1_S1 + 48) =
                prefactor_x * *(b + 337 * OS1_S1 + 33) -
                p_over_q * *(b + 415 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 33);
            *(b + 337 * OS1_S1 + 49) =
                prefactor_x * *(b + 337 * OS1_S1 + 34) -
                p_over_q * *(b + 415 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 34);
            *(b + 337 * OS1_S1 + 50) =
                prefactor_y * *(b + 337 * OS1_S1 + 30) -
                p_over_q * *(b + 425 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 16);
            *(b + 337 * OS1_S1 + 51) =
                prefactor_z * *(b + 337 * OS1_S1 + 30) -
                p_over_q * *(b + 426 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 30);
            *(b + 337 * OS1_S1 + 52) =
                prefactor_z * *(b + 337 * OS1_S1 + 31) -
                p_over_q * *(b + 426 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 31) +
                one_over_two_q * *(b + 337 * OS1_S1 + 16);
            *(b + 337 * OS1_S1 + 53) =
                prefactor_y * *(b + 337 * OS1_S1 + 33) -
                p_over_q * *(b + 425 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 33) +
                one_over_two_q * *(b + 337 * OS1_S1 + 19);
            *(b + 337 * OS1_S1 + 54) =
                prefactor_y * *(b + 337 * OS1_S1 + 34) -
                p_over_q * *(b + 425 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 34);
            *(b + 337 * OS1_S1 + 55) =
                prefactor_z * *(b + 337 * OS1_S1 + 34) -
                p_over_q * *(b + 426 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 19);
            *(b + 338 * OS1_S1 + 35) =
                prefactor_x * *(b + 338 * OS1_S1 + 20) -
                p_over_q * *(b + 416 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 338 * OS1_S1 + 10);
            *(b + 338 * OS1_S1 + 36) =
                prefactor_y * *(b + 338 * OS1_S1 + 20) -
                p_over_q * *(b + 426 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 20);
            *(b + 338 * OS1_S1 + 37) =
                prefactor_z * *(b + 338 * OS1_S1 + 20) -
                p_over_q * *(b + 427 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 20);
            *(b + 338 * OS1_S1 + 38) =
                prefactor_y * *(b + 338 * OS1_S1 + 21) -
                p_over_q * *(b + 426 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 21) +
                one_over_two_q * *(b + 338 * OS1_S1 + 10);
            *(b + 338 * OS1_S1 + 39) =
                prefactor_y * *(b + 338 * OS1_S1 + 22) -
                p_over_q * *(b + 426 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 22);
            *(b + 338 * OS1_S1 + 40) =
                prefactor_z * *(b + 338 * OS1_S1 + 22) -
                p_over_q * *(b + 427 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 22) +
                one_over_two_q * *(b + 338 * OS1_S1 + 10);
            *(b + 338 * OS1_S1 + 41) =
                prefactor_x * *(b + 338 * OS1_S1 + 26) -
                p_over_q * *(b + 416 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 26) +
                one_over_two_q * *(b + 338 * OS1_S1 + 16);
            *(b + 338 * OS1_S1 + 42) =
                prefactor_z * *(b + 338 * OS1_S1 + 23) -
                p_over_q * *(b + 427 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 23);
            *(b + 338 * OS1_S1 + 43) =
                prefactor_y * *(b + 338 * OS1_S1 + 25) -
                p_over_q * *(b + 426 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 25);
            *(b + 338 * OS1_S1 + 44) =
                prefactor_x * *(b + 338 * OS1_S1 + 29) -
                p_over_q * *(b + 416 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 29) +
                one_over_two_q * *(b + 338 * OS1_S1 + 19);
            *(b + 338 * OS1_S1 + 45) =
                prefactor_x * *(b + 338 * OS1_S1 + 30) -
                p_over_q * *(b + 416 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 30);
            *(b + 338 * OS1_S1 + 46) =
                prefactor_x * *(b + 338 * OS1_S1 + 31) -
                p_over_q * *(b + 416 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 31);
            *(b + 338 * OS1_S1 + 47) =
                prefactor_x * *(b + 338 * OS1_S1 + 32) -
                p_over_q * *(b + 416 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 32);
            *(b + 338 * OS1_S1 + 48) =
                prefactor_y * *(b + 338 * OS1_S1 + 29) -
                p_over_q * *(b + 426 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 29);
            *(b + 338 * OS1_S1 + 49) =
                prefactor_x * *(b + 338 * OS1_S1 + 34) -
                p_over_q * *(b + 416 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 34);
            *(b + 338 * OS1_S1 + 50) =
                prefactor_y * *(b + 338 * OS1_S1 + 30) -
                p_over_q * *(b + 426 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 338 * OS1_S1 + 16);
            *(b + 338 * OS1_S1 + 51) =
                prefactor_z * *(b + 338 * OS1_S1 + 30) -
                p_over_q * *(b + 427 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 30);
            *(b + 338 * OS1_S1 + 52) =
                prefactor_z * *(b + 338 * OS1_S1 + 31) -
                p_over_q * *(b + 427 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 31) +
                one_over_two_q * *(b + 338 * OS1_S1 + 16);
            *(b + 338 * OS1_S1 + 53) =
                prefactor_y * *(b + 338 * OS1_S1 + 33) -
                p_over_q * *(b + 426 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 33) +
                one_over_two_q * *(b + 338 * OS1_S1 + 19);
            *(b + 338 * OS1_S1 + 54) =
                prefactor_y * *(b + 338 * OS1_S1 + 34) -
                p_over_q * *(b + 426 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 34);
            *(b + 338 * OS1_S1 + 55) =
                prefactor_z * *(b + 338 * OS1_S1 + 34) -
                p_over_q * *(b + 427 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 338 * OS1_S1 + 19);
            *(b + 339 * OS1_S1 + 35) =
                prefactor_x * *(b + 339 * OS1_S1 + 20) -
                p_over_q * *(b + 417 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 339 * OS1_S1 + 10);
            *(b + 339 * OS1_S1 + 36) =
                prefactor_y * *(b + 339 * OS1_S1 + 20) -
                p_over_q * *(b + 427 * OS1_S1 + 20) +
                one_over_two_q * *(b + 264 * OS1_S1 + 20);
            *(b + 339 * OS1_S1 + 37) =
                prefactor_z * *(b + 339 * OS1_S1 + 20) -
                p_over_q * *(b + 428 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 20);
            *(b + 339 * OS1_S1 + 38) =
                prefactor_y * *(b + 339 * OS1_S1 + 21) -
                p_over_q * *(b + 427 * OS1_S1 + 21) +
                one_over_two_q * *(b + 264 * OS1_S1 + 21) +
                one_over_two_q * *(b + 339 * OS1_S1 + 10);
            *(b + 339 * OS1_S1 + 39) =
                prefactor_y * *(b + 339 * OS1_S1 + 22) -
                p_over_q * *(b + 427 * OS1_S1 + 22) +
                one_over_two_q * *(b + 264 * OS1_S1 + 22);
            *(b + 339 * OS1_S1 + 40) =
                prefactor_z * *(b + 339 * OS1_S1 + 22) -
                p_over_q * *(b + 428 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 22) +
                one_over_two_q * *(b + 339 * OS1_S1 + 10);
            *(b + 339 * OS1_S1 + 41) =
                prefactor_x * *(b + 339 * OS1_S1 + 26) -
                p_over_q * *(b + 417 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 26) +
                one_over_two_q * *(b + 339 * OS1_S1 + 16);
            *(b + 339 * OS1_S1 + 42) =
                prefactor_z * *(b + 339 * OS1_S1 + 23) -
                p_over_q * *(b + 428 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 23);
            *(b + 339 * OS1_S1 + 43) =
                prefactor_y * *(b + 339 * OS1_S1 + 25) -
                p_over_q * *(b + 427 * OS1_S1 + 25) +
                one_over_two_q * *(b + 264 * OS1_S1 + 25);
            *(b + 339 * OS1_S1 + 44) =
                prefactor_x * *(b + 339 * OS1_S1 + 29) -
                p_over_q * *(b + 417 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 29) +
                one_over_two_q * *(b + 339 * OS1_S1 + 19);
            *(b + 339 * OS1_S1 + 45) =
                prefactor_x * *(b + 339 * OS1_S1 + 30) -
                p_over_q * *(b + 417 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 30);
            *(b + 339 * OS1_S1 + 46) =
                prefactor_x * *(b + 339 * OS1_S1 + 31) -
                p_over_q * *(b + 417 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 31);
            *(b + 339 * OS1_S1 + 47) =
                prefactor_x * *(b + 339 * OS1_S1 + 32) -
                p_over_q * *(b + 417 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 32);
            *(b + 339 * OS1_S1 + 48) =
                prefactor_y * *(b + 339 * OS1_S1 + 29) -
                p_over_q * *(b + 427 * OS1_S1 + 29) +
                one_over_two_q * *(b + 264 * OS1_S1 + 29);
            *(b + 339 * OS1_S1 + 49) =
                prefactor_x * *(b + 339 * OS1_S1 + 34) -
                p_over_q * *(b + 417 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 34);
            *(b + 339 * OS1_S1 + 50) =
                prefactor_y * *(b + 339 * OS1_S1 + 30) -
                p_over_q * *(b + 427 * OS1_S1 + 30) +
                one_over_two_q * *(b + 264 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 339 * OS1_S1 + 16);
            *(b + 339 * OS1_S1 + 51) =
                prefactor_z * *(b + 339 * OS1_S1 + 30) -
                p_over_q * *(b + 428 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 30);
            *(b + 339 * OS1_S1 + 52) =
                prefactor_z * *(b + 339 * OS1_S1 + 31) -
                p_over_q * *(b + 428 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 31) +
                one_over_two_q * *(b + 339 * OS1_S1 + 16);
            *(b + 339 * OS1_S1 + 53) =
                prefactor_y * *(b + 339 * OS1_S1 + 33) -
                p_over_q * *(b + 427 * OS1_S1 + 33) +
                one_over_two_q * *(b + 264 * OS1_S1 + 33) +
                one_over_two_q * *(b + 339 * OS1_S1 + 19);
            *(b + 339 * OS1_S1 + 54) =
                prefactor_y * *(b + 339 * OS1_S1 + 34) -
                p_over_q * *(b + 427 * OS1_S1 + 34) +
                one_over_two_q * *(b + 264 * OS1_S1 + 34);
            *(b + 339 * OS1_S1 + 55) =
                prefactor_z * *(b + 339 * OS1_S1 + 34) -
                p_over_q * *(b + 428 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 339 * OS1_S1 + 19);
            *(b + 340 * OS1_S1 + 35) =
                prefactor_x * *(b + 340 * OS1_S1 + 20) -
                p_over_q * *(b + 418 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 340 * OS1_S1 + 10);
            *(b + 340 * OS1_S1 + 36) = prefactor_y * *(b + 340 * OS1_S1 + 20) -
                                       p_over_q * *(b + 428 * OS1_S1 + 20);
            *(b + 340 * OS1_S1 + 37) =
                prefactor_z * *(b + 340 * OS1_S1 + 20) -
                p_over_q * *(b + 429 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 20);
            *(b + 340 * OS1_S1 + 38) =
                prefactor_y * *(b + 340 * OS1_S1 + 21) -
                p_over_q * *(b + 428 * OS1_S1 + 21) +
                one_over_two_q * *(b + 340 * OS1_S1 + 10);
            *(b + 340 * OS1_S1 + 39) = prefactor_y * *(b + 340 * OS1_S1 + 22) -
                                       p_over_q * *(b + 428 * OS1_S1 + 22);
            *(b + 340 * OS1_S1 + 40) =
                prefactor_z * *(b + 340 * OS1_S1 + 22) -
                p_over_q * *(b + 429 * OS1_S1 + 22) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 22) +
                one_over_two_q * *(b + 340 * OS1_S1 + 10);
            *(b + 340 * OS1_S1 + 41) =
                prefactor_x * *(b + 340 * OS1_S1 + 26) -
                p_over_q * *(b + 418 * OS1_S1 + 26) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 26) +
                one_over_two_q * *(b + 340 * OS1_S1 + 16);
            *(b + 340 * OS1_S1 + 42) =
                prefactor_z * *(b + 340 * OS1_S1 + 23) -
                p_over_q * *(b + 429 * OS1_S1 + 23) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 23);
            *(b + 340 * OS1_S1 + 43) = prefactor_y * *(b + 340 * OS1_S1 + 25) -
                                       p_over_q * *(b + 428 * OS1_S1 + 25);
            *(b + 340 * OS1_S1 + 44) =
                prefactor_x * *(b + 340 * OS1_S1 + 29) -
                p_over_q * *(b + 418 * OS1_S1 + 29) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 29) +
                one_over_two_q * *(b + 340 * OS1_S1 + 19);
            *(b + 340 * OS1_S1 + 45) =
                prefactor_x * *(b + 340 * OS1_S1 + 30) -
                p_over_q * *(b + 418 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 30);
            *(b + 340 * OS1_S1 + 46) =
                prefactor_x * *(b + 340 * OS1_S1 + 31) -
                p_over_q * *(b + 418 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 31);
            *(b + 340 * OS1_S1 + 47) =
                prefactor_x * *(b + 340 * OS1_S1 + 32) -
                p_over_q * *(b + 418 * OS1_S1 + 32) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 32);
            *(b + 340 * OS1_S1 + 48) = prefactor_y * *(b + 340 * OS1_S1 + 29) -
                                       p_over_q * *(b + 428 * OS1_S1 + 29);
            *(b + 340 * OS1_S1 + 49) =
                prefactor_x * *(b + 340 * OS1_S1 + 34) -
                p_over_q * *(b + 418 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 34);
            *(b + 340 * OS1_S1 + 50) =
                prefactor_y * *(b + 340 * OS1_S1 + 30) -
                p_over_q * *(b + 428 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 340 * OS1_S1 + 16);
            *(b + 340 * OS1_S1 + 51) =
                prefactor_z * *(b + 340 * OS1_S1 + 30) -
                p_over_q * *(b + 429 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 30);
            *(b + 340 * OS1_S1 + 52) =
                prefactor_z * *(b + 340 * OS1_S1 + 31) -
                p_over_q * *(b + 429 * OS1_S1 + 31) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 31) +
                one_over_two_q * *(b + 340 * OS1_S1 + 16);
            *(b + 340 * OS1_S1 + 53) =
                prefactor_y * *(b + 340 * OS1_S1 + 33) -
                p_over_q * *(b + 428 * OS1_S1 + 33) +
                one_over_two_q * *(b + 340 * OS1_S1 + 19);
            *(b + 340 * OS1_S1 + 54) = prefactor_y * *(b + 340 * OS1_S1 + 34) -
                                       p_over_q * *(b + 428 * OS1_S1 + 34);
            *(b + 340 * OS1_S1 + 55) =
                prefactor_z * *(b + 340 * OS1_S1 + 34) -
                p_over_q * *(b + 429 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 340 * OS1_S1 + 19);
            *(b + 341 * OS1_S1 + 35) =
                prefactor_x * *(b + 341 * OS1_S1 + 20) -
                p_over_q * *(b + 419 * OS1_S1 + 20) +
                one_over_two_q * *(b + 275 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 341 * OS1_S1 + 10);
            *(b + 341 * OS1_S1 + 36) =
                prefactor_y * *(b + 341 * OS1_S1 + 20) -
                p_over_q * *(b + 430 * OS1_S1 + 20) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 20);
            *(b + 341 * OS1_S1 + 37) = prefactor_z * *(b + 341 * OS1_S1 + 20) -
                                       p_over_q * *(b + 431 * OS1_S1 + 20);
            *(b + 341 * OS1_S1 + 38) =
                prefactor_y * *(b + 341 * OS1_S1 + 21) -
                p_over_q * *(b + 430 * OS1_S1 + 21) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 21) +
                one_over_two_q * *(b + 341 * OS1_S1 + 10);
            *(b + 341 * OS1_S1 + 39) = prefactor_z * *(b + 341 * OS1_S1 + 21) -
                                       p_over_q * *(b + 431 * OS1_S1 + 21);
            *(b + 341 * OS1_S1 + 40) =
                prefactor_z * *(b + 341 * OS1_S1 + 22) -
                p_over_q * *(b + 431 * OS1_S1 + 22) +
                one_over_two_q * *(b + 341 * OS1_S1 + 10);
            *(b + 341 * OS1_S1 + 41) =
                prefactor_x * *(b + 341 * OS1_S1 + 26) -
                p_over_q * *(b + 419 * OS1_S1 + 26) +
                one_over_two_q * *(b + 275 * OS1_S1 + 26) +
                one_over_two_q * *(b + 341 * OS1_S1 + 16);
            *(b + 341 * OS1_S1 + 42) = prefactor_z * *(b + 341 * OS1_S1 + 23) -
                                       p_over_q * *(b + 431 * OS1_S1 + 23);
            *(b + 341 * OS1_S1 + 43) =
                prefactor_y * *(b + 341 * OS1_S1 + 25) -
                p_over_q * *(b + 430 * OS1_S1 + 25) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 25);
            *(b + 341 * OS1_S1 + 44) =
                prefactor_x * *(b + 341 * OS1_S1 + 29) -
                p_over_q * *(b + 419 * OS1_S1 + 29) +
                one_over_two_q * *(b + 275 * OS1_S1 + 29) +
                one_over_two_q * *(b + 341 * OS1_S1 + 19);
            *(b + 341 * OS1_S1 + 45) =
                prefactor_x * *(b + 341 * OS1_S1 + 30) -
                p_over_q * *(b + 419 * OS1_S1 + 30) +
                one_over_two_q * *(b + 275 * OS1_S1 + 30);
            *(b + 341 * OS1_S1 + 46) = prefactor_z * *(b + 341 * OS1_S1 + 26) -
                                       p_over_q * *(b + 431 * OS1_S1 + 26);
            *(b + 341 * OS1_S1 + 47) =
                prefactor_x * *(b + 341 * OS1_S1 + 32) -
                p_over_q * *(b + 419 * OS1_S1 + 32) +
                one_over_two_q * *(b + 275 * OS1_S1 + 32);
            *(b + 341 * OS1_S1 + 48) =
                prefactor_x * *(b + 341 * OS1_S1 + 33) -
                p_over_q * *(b + 419 * OS1_S1 + 33) +
                one_over_two_q * *(b + 275 * OS1_S1 + 33);
            *(b + 341 * OS1_S1 + 49) =
                prefactor_x * *(b + 341 * OS1_S1 + 34) -
                p_over_q * *(b + 419 * OS1_S1 + 34) +
                one_over_two_q * *(b + 275 * OS1_S1 + 34);
            *(b + 341 * OS1_S1 + 50) =
                prefactor_y * *(b + 341 * OS1_S1 + 30) -
                p_over_q * *(b + 430 * OS1_S1 + 30) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 341 * OS1_S1 + 16);
            *(b + 341 * OS1_S1 + 51) = prefactor_z * *(b + 341 * OS1_S1 + 30) -
                                       p_over_q * *(b + 431 * OS1_S1 + 30);
            *(b + 341 * OS1_S1 + 52) =
                prefactor_z * *(b + 341 * OS1_S1 + 31) -
                p_over_q * *(b + 431 * OS1_S1 + 31) +
                one_over_two_q * *(b + 341 * OS1_S1 + 16);
            *(b + 341 * OS1_S1 + 53) =
                prefactor_y * *(b + 341 * OS1_S1 + 33) -
                p_over_q * *(b + 430 * OS1_S1 + 33) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 33) +
                one_over_two_q * *(b + 341 * OS1_S1 + 19);
            *(b + 341 * OS1_S1 + 54) =
                prefactor_y * *(b + 341 * OS1_S1 + 34) -
                p_over_q * *(b + 430 * OS1_S1 + 34) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 34);
            *(b + 341 * OS1_S1 + 55) =
                prefactor_z * *(b + 341 * OS1_S1 + 34) -
                p_over_q * *(b + 431 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 341 * OS1_S1 + 19);
            *(b + 342 * OS1_S1 + 35) =
                prefactor_x * *(b + 342 * OS1_S1 + 20) -
                p_over_q * *(b + 420 * OS1_S1 + 20) +
                one_over_two_q * *(b + 276 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 342 * OS1_S1 + 10);
            *(b + 342 * OS1_S1 + 36) =
                prefactor_y * *(b + 342 * OS1_S1 + 20) -
                p_over_q * *(b + 431 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 20);
            *(b + 342 * OS1_S1 + 37) =
                prefactor_z * *(b + 342 * OS1_S1 + 20) -
                p_over_q * *(b + 432 * OS1_S1 + 20) +
                one_over_two_q * *(b + 265 * OS1_S1 + 20);
            *(b + 342 * OS1_S1 + 38) =
                prefactor_y * *(b + 342 * OS1_S1 + 21) -
                p_over_q * *(b + 431 * OS1_S1 + 21) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 21) +
                one_over_two_q * *(b + 342 * OS1_S1 + 10);
            *(b + 342 * OS1_S1 + 39) =
                prefactor_z * *(b + 342 * OS1_S1 + 21) -
                p_over_q * *(b + 432 * OS1_S1 + 21) +
                one_over_two_q * *(b + 265 * OS1_S1 + 21);
            *(b + 342 * OS1_S1 + 40) =
                prefactor_z * *(b + 342 * OS1_S1 + 22) -
                p_over_q * *(b + 432 * OS1_S1 + 22) +
                one_over_two_q * *(b + 265 * OS1_S1 + 22) +
                one_over_two_q * *(b + 342 * OS1_S1 + 10);
            *(b + 342 * OS1_S1 + 41) =
                prefactor_x * *(b + 342 * OS1_S1 + 26) -
                p_over_q * *(b + 420 * OS1_S1 + 26) +
                one_over_two_q * *(b + 276 * OS1_S1 + 26) +
                one_over_two_q * *(b + 342 * OS1_S1 + 16);
            *(b + 342 * OS1_S1 + 42) =
                prefactor_z * *(b + 342 * OS1_S1 + 23) -
                p_over_q * *(b + 432 * OS1_S1 + 23) +
                one_over_two_q * *(b + 265 * OS1_S1 + 23);
            *(b + 342 * OS1_S1 + 43) =
                prefactor_y * *(b + 342 * OS1_S1 + 25) -
                p_over_q * *(b + 431 * OS1_S1 + 25) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 25);
            *(b + 342 * OS1_S1 + 44) =
                prefactor_x * *(b + 342 * OS1_S1 + 29) -
                p_over_q * *(b + 420 * OS1_S1 + 29) +
                one_over_two_q * *(b + 276 * OS1_S1 + 29) +
                one_over_two_q * *(b + 342 * OS1_S1 + 19);
            *(b + 342 * OS1_S1 + 45) =
                prefactor_x * *(b + 342 * OS1_S1 + 30) -
                p_over_q * *(b + 420 * OS1_S1 + 30) +
                one_over_two_q * *(b + 276 * OS1_S1 + 30);
            *(b + 342 * OS1_S1 + 46) =
                prefactor_z * *(b + 342 * OS1_S1 + 26) -
                p_over_q * *(b + 432 * OS1_S1 + 26) +
                one_over_two_q * *(b + 265 * OS1_S1 + 26);
            *(b + 342 * OS1_S1 + 47) =
                prefactor_x * *(b + 342 * OS1_S1 + 32) -
                p_over_q * *(b + 420 * OS1_S1 + 32) +
                one_over_two_q * *(b + 276 * OS1_S1 + 32);
            *(b + 342 * OS1_S1 + 48) =
                prefactor_x * *(b + 342 * OS1_S1 + 33) -
                p_over_q * *(b + 420 * OS1_S1 + 33) +
                one_over_two_q * *(b + 276 * OS1_S1 + 33);
            *(b + 342 * OS1_S1 + 49) =
                prefactor_x * *(b + 342 * OS1_S1 + 34) -
                p_over_q * *(b + 420 * OS1_S1 + 34) +
                one_over_two_q * *(b + 276 * OS1_S1 + 34);
            *(b + 342 * OS1_S1 + 50) =
                prefactor_y * *(b + 342 * OS1_S1 + 30) -
                p_over_q * *(b + 431 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 342 * OS1_S1 + 16);
            *(b + 342 * OS1_S1 + 51) =
                prefactor_z * *(b + 342 * OS1_S1 + 30) -
                p_over_q * *(b + 432 * OS1_S1 + 30) +
                one_over_two_q * *(b + 265 * OS1_S1 + 30);
            *(b + 342 * OS1_S1 + 52) =
                prefactor_z * *(b + 342 * OS1_S1 + 31) -
                p_over_q * *(b + 432 * OS1_S1 + 31) +
                one_over_two_q * *(b + 265 * OS1_S1 + 31) +
                one_over_two_q * *(b + 342 * OS1_S1 + 16);
            *(b + 342 * OS1_S1 + 53) =
                prefactor_y * *(b + 342 * OS1_S1 + 33) -
                p_over_q * *(b + 431 * OS1_S1 + 33) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 33) +
                one_over_two_q * *(b + 342 * OS1_S1 + 19);
            *(b + 342 * OS1_S1 + 54) =
                prefactor_y * *(b + 342 * OS1_S1 + 34) -
                p_over_q * *(b + 431 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 34);
            *(b + 342 * OS1_S1 + 55) =
                prefactor_z * *(b + 342 * OS1_S1 + 34) -
                p_over_q * *(b + 432 * OS1_S1 + 34) +
                one_over_two_q * *(b + 265 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 342 * OS1_S1 + 19);
            *(b + 343 * OS1_S1 + 35) =
                prefactor_x * *(b + 343 * OS1_S1 + 20) -
                p_over_q * *(b + 421 * OS1_S1 + 20) +
                one_over_two_q * *(b + 277 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 343 * OS1_S1 + 10);
            *(b + 343 * OS1_S1 + 36) =
                prefactor_y * *(b + 343 * OS1_S1 + 20) -
                p_over_q * *(b + 432 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 20);
            *(b + 343 * OS1_S1 + 37) =
                prefactor_z * *(b + 343 * OS1_S1 + 20) -
                p_over_q * *(b + 433 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 20);
            *(b + 343 * OS1_S1 + 38) =
                prefactor_y * *(b + 343 * OS1_S1 + 21) -
                p_over_q * *(b + 432 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 21) +
                one_over_two_q * *(b + 343 * OS1_S1 + 10);
            *(b + 343 * OS1_S1 + 39) =
                prefactor_z * *(b + 343 * OS1_S1 + 21) -
                p_over_q * *(b + 433 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 21);
            *(b + 343 * OS1_S1 + 40) =
                prefactor_z * *(b + 343 * OS1_S1 + 22) -
                p_over_q * *(b + 433 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 22) +
                one_over_two_q * *(b + 343 * OS1_S1 + 10);
            *(b + 343 * OS1_S1 + 41) =
                prefactor_x * *(b + 343 * OS1_S1 + 26) -
                p_over_q * *(b + 421 * OS1_S1 + 26) +
                one_over_two_q * *(b + 277 * OS1_S1 + 26) +
                one_over_two_q * *(b + 343 * OS1_S1 + 16);
            *(b + 343 * OS1_S1 + 42) =
                prefactor_z * *(b + 343 * OS1_S1 + 23) -
                p_over_q * *(b + 433 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 23);
            *(b + 343 * OS1_S1 + 43) =
                prefactor_y * *(b + 343 * OS1_S1 + 25) -
                p_over_q * *(b + 432 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 25);
            *(b + 343 * OS1_S1 + 44) =
                prefactor_x * *(b + 343 * OS1_S1 + 29) -
                p_over_q * *(b + 421 * OS1_S1 + 29) +
                one_over_two_q * *(b + 277 * OS1_S1 + 29) +
                one_over_two_q * *(b + 343 * OS1_S1 + 19);
            *(b + 343 * OS1_S1 + 45) =
                prefactor_x * *(b + 343 * OS1_S1 + 30) -
                p_over_q * *(b + 421 * OS1_S1 + 30) +
                one_over_two_q * *(b + 277 * OS1_S1 + 30);
            *(b + 343 * OS1_S1 + 46) =
                prefactor_x * *(b + 343 * OS1_S1 + 31) -
                p_over_q * *(b + 421 * OS1_S1 + 31) +
                one_over_two_q * *(b + 277 * OS1_S1 + 31);
            *(b + 343 * OS1_S1 + 47) =
                prefactor_x * *(b + 343 * OS1_S1 + 32) -
                p_over_q * *(b + 421 * OS1_S1 + 32) +
                one_over_two_q * *(b + 277 * OS1_S1 + 32);
            *(b + 343 * OS1_S1 + 48) =
                prefactor_x * *(b + 343 * OS1_S1 + 33) -
                p_over_q * *(b + 421 * OS1_S1 + 33) +
                one_over_two_q * *(b + 277 * OS1_S1 + 33);
            *(b + 343 * OS1_S1 + 49) =
                prefactor_x * *(b + 343 * OS1_S1 + 34) -
                p_over_q * *(b + 421 * OS1_S1 + 34) +
                one_over_two_q * *(b + 277 * OS1_S1 + 34);
            *(b + 343 * OS1_S1 + 50) =
                prefactor_y * *(b + 343 * OS1_S1 + 30) -
                p_over_q * *(b + 432 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 343 * OS1_S1 + 16);
            *(b + 343 * OS1_S1 + 51) =
                prefactor_z * *(b + 343 * OS1_S1 + 30) -
                p_over_q * *(b + 433 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 30);
            *(b + 343 * OS1_S1 + 52) =
                prefactor_z * *(b + 343 * OS1_S1 + 31) -
                p_over_q * *(b + 433 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 31) +
                one_over_two_q * *(b + 343 * OS1_S1 + 16);
            *(b + 343 * OS1_S1 + 53) =
                prefactor_y * *(b + 343 * OS1_S1 + 33) -
                p_over_q * *(b + 432 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 33) +
                one_over_two_q * *(b + 343 * OS1_S1 + 19);
            *(b + 343 * OS1_S1 + 54) =
                prefactor_y * *(b + 343 * OS1_S1 + 34) -
                p_over_q * *(b + 432 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 34);
            *(b + 343 * OS1_S1 + 55) =
                prefactor_z * *(b + 343 * OS1_S1 + 34) -
                p_over_q * *(b + 433 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 343 * OS1_S1 + 19);
            *(b + 344 * OS1_S1 + 35) =
                prefactor_x * *(b + 344 * OS1_S1 + 20) -
                p_over_q * *(b + 422 * OS1_S1 + 20) +
                one_over_two_q * *(b + 278 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 10);
            *(b + 344 * OS1_S1 + 36) =
                prefactor_y * *(b + 344 * OS1_S1 + 20) -
                p_over_q * *(b + 433 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 20);
            *(b + 344 * OS1_S1 + 37) =
                prefactor_z * *(b + 344 * OS1_S1 + 20) -
                p_over_q * *(b + 434 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 20);
            *(b + 344 * OS1_S1 + 38) =
                prefactor_y * *(b + 344 * OS1_S1 + 21) -
                p_over_q * *(b + 433 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 21) +
                one_over_two_q * *(b + 344 * OS1_S1 + 10);
            *(b + 344 * OS1_S1 + 39) =
                prefactor_z * *(b + 344 * OS1_S1 + 21) -
                p_over_q * *(b + 434 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 21);
            *(b + 344 * OS1_S1 + 40) =
                prefactor_z * *(b + 344 * OS1_S1 + 22) -
                p_over_q * *(b + 434 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 22) +
                one_over_two_q * *(b + 344 * OS1_S1 + 10);
            *(b + 344 * OS1_S1 + 41) =
                prefactor_x * *(b + 344 * OS1_S1 + 26) -
                p_over_q * *(b + 422 * OS1_S1 + 26) +
                one_over_two_q * *(b + 278 * OS1_S1 + 26) +
                one_over_two_q * *(b + 344 * OS1_S1 + 16);
            *(b + 344 * OS1_S1 + 42) =
                prefactor_z * *(b + 344 * OS1_S1 + 23) -
                p_over_q * *(b + 434 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 23);
            *(b + 344 * OS1_S1 + 43) =
                prefactor_y * *(b + 344 * OS1_S1 + 25) -
                p_over_q * *(b + 433 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 25);
            *(b + 344 * OS1_S1 + 44) =
                prefactor_x * *(b + 344 * OS1_S1 + 29) -
                p_over_q * *(b + 422 * OS1_S1 + 29) +
                one_over_two_q * *(b + 278 * OS1_S1 + 29) +
                one_over_two_q * *(b + 344 * OS1_S1 + 19);
            *(b + 344 * OS1_S1 + 45) =
                prefactor_x * *(b + 344 * OS1_S1 + 30) -
                p_over_q * *(b + 422 * OS1_S1 + 30) +
                one_over_two_q * *(b + 278 * OS1_S1 + 30);
            *(b + 344 * OS1_S1 + 46) =
                prefactor_x * *(b + 344 * OS1_S1 + 31) -
                p_over_q * *(b + 422 * OS1_S1 + 31) +
                one_over_two_q * *(b + 278 * OS1_S1 + 31);
            *(b + 344 * OS1_S1 + 47) =
                prefactor_x * *(b + 344 * OS1_S1 + 32) -
                p_over_q * *(b + 422 * OS1_S1 + 32) +
                one_over_two_q * *(b + 278 * OS1_S1 + 32);
            *(b + 344 * OS1_S1 + 48) =
                prefactor_x * *(b + 344 * OS1_S1 + 33) -
                p_over_q * *(b + 422 * OS1_S1 + 33) +
                one_over_two_q * *(b + 278 * OS1_S1 + 33);
            *(b + 344 * OS1_S1 + 49) =
                prefactor_x * *(b + 344 * OS1_S1 + 34) -
                p_over_q * *(b + 422 * OS1_S1 + 34) +
                one_over_two_q * *(b + 278 * OS1_S1 + 34);
            *(b + 344 * OS1_S1 + 50) =
                prefactor_y * *(b + 344 * OS1_S1 + 30) -
                p_over_q * *(b + 433 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 16);
            *(b + 344 * OS1_S1 + 51) =
                prefactor_z * *(b + 344 * OS1_S1 + 30) -
                p_over_q * *(b + 434 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 30);
            *(b + 344 * OS1_S1 + 52) =
                prefactor_z * *(b + 344 * OS1_S1 + 31) -
                p_over_q * *(b + 434 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 31) +
                one_over_two_q * *(b + 344 * OS1_S1 + 16);
            *(b + 344 * OS1_S1 + 53) =
                prefactor_y * *(b + 344 * OS1_S1 + 33) -
                p_over_q * *(b + 433 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 33) +
                one_over_two_q * *(b + 344 * OS1_S1 + 19);
            *(b + 344 * OS1_S1 + 54) =
                prefactor_y * *(b + 344 * OS1_S1 + 34) -
                p_over_q * *(b + 433 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 34);
            *(b + 344 * OS1_S1 + 55) =
                prefactor_z * *(b + 344 * OS1_S1 + 34) -
                p_over_q * *(b + 434 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 19);
            *(b + 345 * OS1_S1 + 35) =
                prefactor_x * *(b + 345 * OS1_S1 + 20) -
                p_over_q * *(b + 423 * OS1_S1 + 20) +
                one_over_two_q * *(b + 279 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 345 * OS1_S1 + 10);
            *(b + 345 * OS1_S1 + 36) =
                prefactor_y * *(b + 345 * OS1_S1 + 20) -
                p_over_q * *(b + 434 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 20);
            *(b + 345 * OS1_S1 + 37) =
                prefactor_z * *(b + 345 * OS1_S1 + 20) -
                p_over_q * *(b + 435 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 20);
            *(b + 345 * OS1_S1 + 38) =
                prefactor_y * *(b + 345 * OS1_S1 + 21) -
                p_over_q * *(b + 434 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 21) +
                one_over_two_q * *(b + 345 * OS1_S1 + 10);
            *(b + 345 * OS1_S1 + 39) =
                prefactor_z * *(b + 345 * OS1_S1 + 21) -
                p_over_q * *(b + 435 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 21);
            *(b + 345 * OS1_S1 + 40) =
                prefactor_z * *(b + 345 * OS1_S1 + 22) -
                p_over_q * *(b + 435 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 22) +
                one_over_two_q * *(b + 345 * OS1_S1 + 10);
            *(b + 345 * OS1_S1 + 41) =
                prefactor_x * *(b + 345 * OS1_S1 + 26) -
                p_over_q * *(b + 423 * OS1_S1 + 26) +
                one_over_two_q * *(b + 279 * OS1_S1 + 26) +
                one_over_two_q * *(b + 345 * OS1_S1 + 16);
            *(b + 345 * OS1_S1 + 42) =
                prefactor_z * *(b + 345 * OS1_S1 + 23) -
                p_over_q * *(b + 435 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 23);
            *(b + 345 * OS1_S1 + 43) =
                prefactor_y * *(b + 345 * OS1_S1 + 25) -
                p_over_q * *(b + 434 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 25);
            *(b + 345 * OS1_S1 + 44) =
                prefactor_x * *(b + 345 * OS1_S1 + 29) -
                p_over_q * *(b + 423 * OS1_S1 + 29) +
                one_over_two_q * *(b + 279 * OS1_S1 + 29) +
                one_over_two_q * *(b + 345 * OS1_S1 + 19);
            *(b + 345 * OS1_S1 + 45) =
                prefactor_x * *(b + 345 * OS1_S1 + 30) -
                p_over_q * *(b + 423 * OS1_S1 + 30) +
                one_over_two_q * *(b + 279 * OS1_S1 + 30);
            *(b + 345 * OS1_S1 + 46) =
                prefactor_x * *(b + 345 * OS1_S1 + 31) -
                p_over_q * *(b + 423 * OS1_S1 + 31) +
                one_over_two_q * *(b + 279 * OS1_S1 + 31);
            *(b + 345 * OS1_S1 + 47) =
                prefactor_x * *(b + 345 * OS1_S1 + 32) -
                p_over_q * *(b + 423 * OS1_S1 + 32) +
                one_over_two_q * *(b + 279 * OS1_S1 + 32);
            *(b + 345 * OS1_S1 + 48) =
                prefactor_x * *(b + 345 * OS1_S1 + 33) -
                p_over_q * *(b + 423 * OS1_S1 + 33) +
                one_over_two_q * *(b + 279 * OS1_S1 + 33);
            *(b + 345 * OS1_S1 + 49) =
                prefactor_x * *(b + 345 * OS1_S1 + 34) -
                p_over_q * *(b + 423 * OS1_S1 + 34) +
                one_over_two_q * *(b + 279 * OS1_S1 + 34);
            *(b + 345 * OS1_S1 + 50) =
                prefactor_y * *(b + 345 * OS1_S1 + 30) -
                p_over_q * *(b + 434 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 345 * OS1_S1 + 16);
            *(b + 345 * OS1_S1 + 51) =
                prefactor_z * *(b + 345 * OS1_S1 + 30) -
                p_over_q * *(b + 435 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 30);
            *(b + 345 * OS1_S1 + 52) =
                prefactor_z * *(b + 345 * OS1_S1 + 31) -
                p_over_q * *(b + 435 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 31) +
                one_over_two_q * *(b + 345 * OS1_S1 + 16);
            *(b + 345 * OS1_S1 + 53) =
                prefactor_y * *(b + 345 * OS1_S1 + 33) -
                p_over_q * *(b + 434 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 33) +
                one_over_two_q * *(b + 345 * OS1_S1 + 19);
            *(b + 345 * OS1_S1 + 54) =
                prefactor_y * *(b + 345 * OS1_S1 + 34) -
                p_over_q * *(b + 434 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 34);
            *(b + 345 * OS1_S1 + 55) =
                prefactor_z * *(b + 345 * OS1_S1 + 34) -
                p_over_q * *(b + 435 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 345 * OS1_S1 + 19);
            *(b + 346 * OS1_S1 + 35) =
                prefactor_x * *(b + 346 * OS1_S1 + 20) -
                p_over_q * *(b + 424 * OS1_S1 + 20) +
                one_over_two_q * *(b + 280 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 346 * OS1_S1 + 10);
            *(b + 346 * OS1_S1 + 36) =
                prefactor_y * *(b + 346 * OS1_S1 + 20) -
                p_over_q * *(b + 435 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 20);
            *(b + 346 * OS1_S1 + 37) =
                prefactor_z * *(b + 346 * OS1_S1 + 20) -
                p_over_q * *(b + 436 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 20);
            *(b + 346 * OS1_S1 + 38) =
                prefactor_y * *(b + 346 * OS1_S1 + 21) -
                p_over_q * *(b + 435 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 21) +
                one_over_two_q * *(b + 346 * OS1_S1 + 10);
            *(b + 346 * OS1_S1 + 39) =
                prefactor_z * *(b + 346 * OS1_S1 + 21) -
                p_over_q * *(b + 436 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 21);
            *(b + 346 * OS1_S1 + 40) =
                prefactor_z * *(b + 346 * OS1_S1 + 22) -
                p_over_q * *(b + 436 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 22) +
                one_over_two_q * *(b + 346 * OS1_S1 + 10);
            *(b + 346 * OS1_S1 + 41) =
                prefactor_x * *(b + 346 * OS1_S1 + 26) -
                p_over_q * *(b + 424 * OS1_S1 + 26) +
                one_over_two_q * *(b + 280 * OS1_S1 + 26) +
                one_over_two_q * *(b + 346 * OS1_S1 + 16);
            *(b + 346 * OS1_S1 + 42) =
                prefactor_z * *(b + 346 * OS1_S1 + 23) -
                p_over_q * *(b + 436 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 23);
            *(b + 346 * OS1_S1 + 43) =
                prefactor_y * *(b + 346 * OS1_S1 + 25) -
                p_over_q * *(b + 435 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 25);
            *(b + 346 * OS1_S1 + 44) =
                prefactor_x * *(b + 346 * OS1_S1 + 29) -
                p_over_q * *(b + 424 * OS1_S1 + 29) +
                one_over_two_q * *(b + 280 * OS1_S1 + 29) +
                one_over_two_q * *(b + 346 * OS1_S1 + 19);
            *(b + 346 * OS1_S1 + 45) =
                prefactor_x * *(b + 346 * OS1_S1 + 30) -
                p_over_q * *(b + 424 * OS1_S1 + 30) +
                one_over_two_q * *(b + 280 * OS1_S1 + 30);
            *(b + 346 * OS1_S1 + 46) =
                prefactor_x * *(b + 346 * OS1_S1 + 31) -
                p_over_q * *(b + 424 * OS1_S1 + 31) +
                one_over_two_q * *(b + 280 * OS1_S1 + 31);
            *(b + 346 * OS1_S1 + 47) =
                prefactor_x * *(b + 346 * OS1_S1 + 32) -
                p_over_q * *(b + 424 * OS1_S1 + 32) +
                one_over_two_q * *(b + 280 * OS1_S1 + 32);
            *(b + 346 * OS1_S1 + 48) =
                prefactor_x * *(b + 346 * OS1_S1 + 33) -
                p_over_q * *(b + 424 * OS1_S1 + 33) +
                one_over_two_q * *(b + 280 * OS1_S1 + 33);
            *(b + 346 * OS1_S1 + 49) =
                prefactor_x * *(b + 346 * OS1_S1 + 34) -
                p_over_q * *(b + 424 * OS1_S1 + 34) +
                one_over_two_q * *(b + 280 * OS1_S1 + 34);
            *(b + 346 * OS1_S1 + 50) =
                prefactor_y * *(b + 346 * OS1_S1 + 30) -
                p_over_q * *(b + 435 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 346 * OS1_S1 + 16);
            *(b + 346 * OS1_S1 + 51) =
                prefactor_z * *(b + 346 * OS1_S1 + 30) -
                p_over_q * *(b + 436 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 30);
            *(b + 346 * OS1_S1 + 52) =
                prefactor_z * *(b + 346 * OS1_S1 + 31) -
                p_over_q * *(b + 436 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 31) +
                one_over_two_q * *(b + 346 * OS1_S1 + 16);
            *(b + 346 * OS1_S1 + 53) =
                prefactor_y * *(b + 346 * OS1_S1 + 33) -
                p_over_q * *(b + 435 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 33) +
                one_over_two_q * *(b + 346 * OS1_S1 + 19);
            *(b + 346 * OS1_S1 + 54) =
                prefactor_y * *(b + 346 * OS1_S1 + 34) -
                p_over_q * *(b + 435 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 34);
            *(b + 346 * OS1_S1 + 55) =
                prefactor_z * *(b + 346 * OS1_S1 + 34) -
                p_over_q * *(b + 436 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 346 * OS1_S1 + 19);
            *(b + 347 * OS1_S1 + 35) =
                prefactor_x * *(b + 347 * OS1_S1 + 20) -
                p_over_q * *(b + 425 * OS1_S1 + 20) +
                one_over_two_q * *(b + 281 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 347 * OS1_S1 + 10);
            *(b + 347 * OS1_S1 + 36) =
                prefactor_y * *(b + 347 * OS1_S1 + 20) -
                p_over_q * *(b + 436 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 20);
            *(b + 347 * OS1_S1 + 37) =
                prefactor_z * *(b + 347 * OS1_S1 + 20) -
                p_over_q * *(b + 437 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 20);
            *(b + 347 * OS1_S1 + 38) =
                prefactor_y * *(b + 347 * OS1_S1 + 21) -
                p_over_q * *(b + 436 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 21) +
                one_over_two_q * *(b + 347 * OS1_S1 + 10);
            *(b + 347 * OS1_S1 + 39) =
                prefactor_y * *(b + 347 * OS1_S1 + 22) -
                p_over_q * *(b + 436 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 22);
            *(b + 347 * OS1_S1 + 40) =
                prefactor_z * *(b + 347 * OS1_S1 + 22) -
                p_over_q * *(b + 437 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 22) +
                one_over_two_q * *(b + 347 * OS1_S1 + 10);
            *(b + 347 * OS1_S1 + 41) =
                prefactor_x * *(b + 347 * OS1_S1 + 26) -
                p_over_q * *(b + 425 * OS1_S1 + 26) +
                one_over_two_q * *(b + 281 * OS1_S1 + 26) +
                one_over_two_q * *(b + 347 * OS1_S1 + 16);
            *(b + 347 * OS1_S1 + 42) =
                prefactor_z * *(b + 347 * OS1_S1 + 23) -
                p_over_q * *(b + 437 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 23);
            *(b + 347 * OS1_S1 + 43) =
                prefactor_y * *(b + 347 * OS1_S1 + 25) -
                p_over_q * *(b + 436 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 25);
            *(b + 347 * OS1_S1 + 44) =
                prefactor_x * *(b + 347 * OS1_S1 + 29) -
                p_over_q * *(b + 425 * OS1_S1 + 29) +
                one_over_two_q * *(b + 281 * OS1_S1 + 29) +
                one_over_two_q * *(b + 347 * OS1_S1 + 19);
            *(b + 347 * OS1_S1 + 45) =
                prefactor_x * *(b + 347 * OS1_S1 + 30) -
                p_over_q * *(b + 425 * OS1_S1 + 30) +
                one_over_two_q * *(b + 281 * OS1_S1 + 30);
            *(b + 347 * OS1_S1 + 46) =
                prefactor_x * *(b + 347 * OS1_S1 + 31) -
                p_over_q * *(b + 425 * OS1_S1 + 31) +
                one_over_two_q * *(b + 281 * OS1_S1 + 31);
            *(b + 347 * OS1_S1 + 47) =
                prefactor_x * *(b + 347 * OS1_S1 + 32) -
                p_over_q * *(b + 425 * OS1_S1 + 32) +
                one_over_two_q * *(b + 281 * OS1_S1 + 32);
            *(b + 347 * OS1_S1 + 48) =
                prefactor_x * *(b + 347 * OS1_S1 + 33) -
                p_over_q * *(b + 425 * OS1_S1 + 33) +
                one_over_two_q * *(b + 281 * OS1_S1 + 33);
            *(b + 347 * OS1_S1 + 49) =
                prefactor_x * *(b + 347 * OS1_S1 + 34) -
                p_over_q * *(b + 425 * OS1_S1 + 34) +
                one_over_two_q * *(b + 281 * OS1_S1 + 34);
            *(b + 347 * OS1_S1 + 50) =
                prefactor_y * *(b + 347 * OS1_S1 + 30) -
                p_over_q * *(b + 436 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 347 * OS1_S1 + 16);
            *(b + 347 * OS1_S1 + 51) =
                prefactor_z * *(b + 347 * OS1_S1 + 30) -
                p_over_q * *(b + 437 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 30);
            *(b + 347 * OS1_S1 + 52) =
                prefactor_z * *(b + 347 * OS1_S1 + 31) -
                p_over_q * *(b + 437 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 31) +
                one_over_two_q * *(b + 347 * OS1_S1 + 16);
            *(b + 347 * OS1_S1 + 53) =
                prefactor_y * *(b + 347 * OS1_S1 + 33) -
                p_over_q * *(b + 436 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 33) +
                one_over_two_q * *(b + 347 * OS1_S1 + 19);
            *(b + 347 * OS1_S1 + 54) =
                prefactor_y * *(b + 347 * OS1_S1 + 34) -
                p_over_q * *(b + 436 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 34);
            *(b + 347 * OS1_S1 + 55) =
                prefactor_z * *(b + 347 * OS1_S1 + 34) -
                p_over_q * *(b + 437 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 347 * OS1_S1 + 19);
            *(b + 348 * OS1_S1 + 35) =
                prefactor_x * *(b + 348 * OS1_S1 + 20) -
                p_over_q * *(b + 426 * OS1_S1 + 20) +
                one_over_two_q * *(b + 282 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 10);
            *(b + 348 * OS1_S1 + 36) =
                prefactor_y * *(b + 348 * OS1_S1 + 20) -
                p_over_q * *(b + 437 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 20);
            *(b + 348 * OS1_S1 + 37) =
                prefactor_z * *(b + 348 * OS1_S1 + 20) -
                p_over_q * *(b + 438 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 20);
            *(b + 348 * OS1_S1 + 38) =
                prefactor_y * *(b + 348 * OS1_S1 + 21) -
                p_over_q * *(b + 437 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 21) +
                one_over_two_q * *(b + 348 * OS1_S1 + 10);
            *(b + 348 * OS1_S1 + 39) =
                prefactor_y * *(b + 348 * OS1_S1 + 22) -
                p_over_q * *(b + 437 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 22);
            *(b + 348 * OS1_S1 + 40) =
                prefactor_z * *(b + 348 * OS1_S1 + 22) -
                p_over_q * *(b + 438 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 22) +
                one_over_two_q * *(b + 348 * OS1_S1 + 10);
            *(b + 348 * OS1_S1 + 41) =
                prefactor_x * *(b + 348 * OS1_S1 + 26) -
                p_over_q * *(b + 426 * OS1_S1 + 26) +
                one_over_two_q * *(b + 282 * OS1_S1 + 26) +
                one_over_two_q * *(b + 348 * OS1_S1 + 16);
            *(b + 348 * OS1_S1 + 42) =
                prefactor_z * *(b + 348 * OS1_S1 + 23) -
                p_over_q * *(b + 438 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 23);
            *(b + 348 * OS1_S1 + 43) =
                prefactor_y * *(b + 348 * OS1_S1 + 25) -
                p_over_q * *(b + 437 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 25);
            *(b + 348 * OS1_S1 + 44) =
                prefactor_x * *(b + 348 * OS1_S1 + 29) -
                p_over_q * *(b + 426 * OS1_S1 + 29) +
                one_over_two_q * *(b + 282 * OS1_S1 + 29) +
                one_over_two_q * *(b + 348 * OS1_S1 + 19);
            *(b + 348 * OS1_S1 + 45) =
                prefactor_x * *(b + 348 * OS1_S1 + 30) -
                p_over_q * *(b + 426 * OS1_S1 + 30) +
                one_over_two_q * *(b + 282 * OS1_S1 + 30);
            *(b + 348 * OS1_S1 + 46) =
                prefactor_x * *(b + 348 * OS1_S1 + 31) -
                p_over_q * *(b + 426 * OS1_S1 + 31) +
                one_over_two_q * *(b + 282 * OS1_S1 + 31);
            *(b + 348 * OS1_S1 + 47) =
                prefactor_x * *(b + 348 * OS1_S1 + 32) -
                p_over_q * *(b + 426 * OS1_S1 + 32) +
                one_over_two_q * *(b + 282 * OS1_S1 + 32);
            *(b + 348 * OS1_S1 + 48) =
                prefactor_x * *(b + 348 * OS1_S1 + 33) -
                p_over_q * *(b + 426 * OS1_S1 + 33) +
                one_over_two_q * *(b + 282 * OS1_S1 + 33);
            *(b + 348 * OS1_S1 + 49) =
                prefactor_x * *(b + 348 * OS1_S1 + 34) -
                p_over_q * *(b + 426 * OS1_S1 + 34) +
                one_over_two_q * *(b + 282 * OS1_S1 + 34);
            *(b + 348 * OS1_S1 + 50) =
                prefactor_y * *(b + 348 * OS1_S1 + 30) -
                p_over_q * *(b + 437 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 16);
            *(b + 348 * OS1_S1 + 51) =
                prefactor_z * *(b + 348 * OS1_S1 + 30) -
                p_over_q * *(b + 438 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 30);
            *(b + 348 * OS1_S1 + 52) =
                prefactor_z * *(b + 348 * OS1_S1 + 31) -
                p_over_q * *(b + 438 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 31) +
                one_over_two_q * *(b + 348 * OS1_S1 + 16);
            *(b + 348 * OS1_S1 + 53) =
                prefactor_y * *(b + 348 * OS1_S1 + 33) -
                p_over_q * *(b + 437 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 33) +
                one_over_two_q * *(b + 348 * OS1_S1 + 19);
            *(b + 348 * OS1_S1 + 54) =
                prefactor_y * *(b + 348 * OS1_S1 + 34) -
                p_over_q * *(b + 437 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 34);
            *(b + 348 * OS1_S1 + 55) =
                prefactor_z * *(b + 348 * OS1_S1 + 34) -
                p_over_q * *(b + 438 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 19);
            *(b + 349 * OS1_S1 + 35) =
                prefactor_x * *(b + 349 * OS1_S1 + 20) -
                p_over_q * *(b + 427 * OS1_S1 + 20) +
                one_over_two_q * *(b + 283 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 349 * OS1_S1 + 10);
            *(b + 349 * OS1_S1 + 36) =
                prefactor_y * *(b + 349 * OS1_S1 + 20) -
                p_over_q * *(b + 438 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 20);
            *(b + 349 * OS1_S1 + 37) =
                prefactor_z * *(b + 349 * OS1_S1 + 20) -
                p_over_q * *(b + 439 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 20);
            *(b + 349 * OS1_S1 + 38) =
                prefactor_y * *(b + 349 * OS1_S1 + 21) -
                p_over_q * *(b + 438 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 21) +
                one_over_two_q * *(b + 349 * OS1_S1 + 10);
            *(b + 349 * OS1_S1 + 39) =
                prefactor_y * *(b + 349 * OS1_S1 + 22) -
                p_over_q * *(b + 438 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 22);
            *(b + 349 * OS1_S1 + 40) =
                prefactor_z * *(b + 349 * OS1_S1 + 22) -
                p_over_q * *(b + 439 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 22) +
                one_over_two_q * *(b + 349 * OS1_S1 + 10);
            *(b + 349 * OS1_S1 + 41) =
                prefactor_x * *(b + 349 * OS1_S1 + 26) -
                p_over_q * *(b + 427 * OS1_S1 + 26) +
                one_over_two_q * *(b + 283 * OS1_S1 + 26) +
                one_over_two_q * *(b + 349 * OS1_S1 + 16);
            *(b + 349 * OS1_S1 + 42) =
                prefactor_z * *(b + 349 * OS1_S1 + 23) -
                p_over_q * *(b + 439 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 23);
            *(b + 349 * OS1_S1 + 43) =
                prefactor_y * *(b + 349 * OS1_S1 + 25) -
                p_over_q * *(b + 438 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 25);
            *(b + 349 * OS1_S1 + 44) =
                prefactor_x * *(b + 349 * OS1_S1 + 29) -
                p_over_q * *(b + 427 * OS1_S1 + 29) +
                one_over_two_q * *(b + 283 * OS1_S1 + 29) +
                one_over_two_q * *(b + 349 * OS1_S1 + 19);
            *(b + 349 * OS1_S1 + 45) =
                prefactor_x * *(b + 349 * OS1_S1 + 30) -
                p_over_q * *(b + 427 * OS1_S1 + 30) +
                one_over_two_q * *(b + 283 * OS1_S1 + 30);
            *(b + 349 * OS1_S1 + 46) =
                prefactor_x * *(b + 349 * OS1_S1 + 31) -
                p_over_q * *(b + 427 * OS1_S1 + 31) +
                one_over_two_q * *(b + 283 * OS1_S1 + 31);
            *(b + 349 * OS1_S1 + 47) =
                prefactor_x * *(b + 349 * OS1_S1 + 32) -
                p_over_q * *(b + 427 * OS1_S1 + 32) +
                one_over_two_q * *(b + 283 * OS1_S1 + 32);
            *(b + 349 * OS1_S1 + 48) =
                prefactor_x * *(b + 349 * OS1_S1 + 33) -
                p_over_q * *(b + 427 * OS1_S1 + 33) +
                one_over_two_q * *(b + 283 * OS1_S1 + 33);
            *(b + 349 * OS1_S1 + 49) =
                prefactor_x * *(b + 349 * OS1_S1 + 34) -
                p_over_q * *(b + 427 * OS1_S1 + 34) +
                one_over_two_q * *(b + 283 * OS1_S1 + 34);
            *(b + 349 * OS1_S1 + 50) =
                prefactor_y * *(b + 349 * OS1_S1 + 30) -
                p_over_q * *(b + 438 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 349 * OS1_S1 + 16);
            *(b + 349 * OS1_S1 + 51) =
                prefactor_z * *(b + 349 * OS1_S1 + 30) -
                p_over_q * *(b + 439 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 30);
            *(b + 349 * OS1_S1 + 52) =
                prefactor_z * *(b + 349 * OS1_S1 + 31) -
                p_over_q * *(b + 439 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 31) +
                one_over_two_q * *(b + 349 * OS1_S1 + 16);
            *(b + 349 * OS1_S1 + 53) =
                prefactor_y * *(b + 349 * OS1_S1 + 33) -
                p_over_q * *(b + 438 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 33) +
                one_over_two_q * *(b + 349 * OS1_S1 + 19);
            *(b + 349 * OS1_S1 + 54) =
                prefactor_y * *(b + 349 * OS1_S1 + 34) -
                p_over_q * *(b + 438 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 34);
            *(b + 349 * OS1_S1 + 55) =
                prefactor_z * *(b + 349 * OS1_S1 + 34) -
                p_over_q * *(b + 439 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 349 * OS1_S1 + 19);
            *(b + 350 * OS1_S1 + 35) =
                prefactor_x * *(b + 350 * OS1_S1 + 20) -
                p_over_q * *(b + 428 * OS1_S1 + 20) +
                one_over_two_q * *(b + 284 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 350 * OS1_S1 + 10);
            *(b + 350 * OS1_S1 + 36) =
                prefactor_y * *(b + 350 * OS1_S1 + 20) -
                p_over_q * *(b + 439 * OS1_S1 + 20) +
                one_over_two_q * *(b + 274 * OS1_S1 + 20);
            *(b + 350 * OS1_S1 + 37) =
                prefactor_z * *(b + 350 * OS1_S1 + 20) -
                p_over_q * *(b + 440 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 20);
            *(b + 350 * OS1_S1 + 38) =
                prefactor_y * *(b + 350 * OS1_S1 + 21) -
                p_over_q * *(b + 439 * OS1_S1 + 21) +
                one_over_two_q * *(b + 274 * OS1_S1 + 21) +
                one_over_two_q * *(b + 350 * OS1_S1 + 10);
            *(b + 350 * OS1_S1 + 39) =
                prefactor_y * *(b + 350 * OS1_S1 + 22) -
                p_over_q * *(b + 439 * OS1_S1 + 22) +
                one_over_two_q * *(b + 274 * OS1_S1 + 22);
            *(b + 350 * OS1_S1 + 40) =
                prefactor_z * *(b + 350 * OS1_S1 + 22) -
                p_over_q * *(b + 440 * OS1_S1 + 22) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 22) +
                one_over_two_q * *(b + 350 * OS1_S1 + 10);
            *(b + 350 * OS1_S1 + 41) =
                prefactor_x * *(b + 350 * OS1_S1 + 26) -
                p_over_q * *(b + 428 * OS1_S1 + 26) +
                one_over_two_q * *(b + 284 * OS1_S1 + 26) +
                one_over_two_q * *(b + 350 * OS1_S1 + 16);
            *(b + 350 * OS1_S1 + 42) =
                prefactor_z * *(b + 350 * OS1_S1 + 23) -
                p_over_q * *(b + 440 * OS1_S1 + 23) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 23);
            *(b + 350 * OS1_S1 + 43) =
                prefactor_y * *(b + 350 * OS1_S1 + 25) -
                p_over_q * *(b + 439 * OS1_S1 + 25) +
                one_over_two_q * *(b + 274 * OS1_S1 + 25);
            *(b + 350 * OS1_S1 + 44) =
                prefactor_x * *(b + 350 * OS1_S1 + 29) -
                p_over_q * *(b + 428 * OS1_S1 + 29) +
                one_over_two_q * *(b + 284 * OS1_S1 + 29) +
                one_over_two_q * *(b + 350 * OS1_S1 + 19);
            *(b + 350 * OS1_S1 + 45) =
                prefactor_x * *(b + 350 * OS1_S1 + 30) -
                p_over_q * *(b + 428 * OS1_S1 + 30) +
                one_over_two_q * *(b + 284 * OS1_S1 + 30);
            *(b + 350 * OS1_S1 + 46) =
                prefactor_x * *(b + 350 * OS1_S1 + 31) -
                p_over_q * *(b + 428 * OS1_S1 + 31) +
                one_over_two_q * *(b + 284 * OS1_S1 + 31);
            *(b + 350 * OS1_S1 + 47) =
                prefactor_x * *(b + 350 * OS1_S1 + 32) -
                p_over_q * *(b + 428 * OS1_S1 + 32) +
                one_over_two_q * *(b + 284 * OS1_S1 + 32);
            *(b + 350 * OS1_S1 + 48) =
                prefactor_y * *(b + 350 * OS1_S1 + 29) -
                p_over_q * *(b + 439 * OS1_S1 + 29) +
                one_over_two_q * *(b + 274 * OS1_S1 + 29);
            *(b + 350 * OS1_S1 + 49) =
                prefactor_x * *(b + 350 * OS1_S1 + 34) -
                p_over_q * *(b + 428 * OS1_S1 + 34) +
                one_over_two_q * *(b + 284 * OS1_S1 + 34);
            *(b + 350 * OS1_S1 + 50) =
                prefactor_y * *(b + 350 * OS1_S1 + 30) -
                p_over_q * *(b + 439 * OS1_S1 + 30) +
                one_over_two_q * *(b + 274 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 350 * OS1_S1 + 16);
            *(b + 350 * OS1_S1 + 51) =
                prefactor_z * *(b + 350 * OS1_S1 + 30) -
                p_over_q * *(b + 440 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 30);
            *(b + 350 * OS1_S1 + 52) =
                prefactor_z * *(b + 350 * OS1_S1 + 31) -
                p_over_q * *(b + 440 * OS1_S1 + 31) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 31) +
                one_over_two_q * *(b + 350 * OS1_S1 + 16);
            *(b + 350 * OS1_S1 + 53) =
                prefactor_y * *(b + 350 * OS1_S1 + 33) -
                p_over_q * *(b + 439 * OS1_S1 + 33) +
                one_over_two_q * *(b + 274 * OS1_S1 + 33) +
                one_over_two_q * *(b + 350 * OS1_S1 + 19);
            *(b + 350 * OS1_S1 + 54) =
                prefactor_y * *(b + 350 * OS1_S1 + 34) -
                p_over_q * *(b + 439 * OS1_S1 + 34) +
                one_over_two_q * *(b + 274 * OS1_S1 + 34);
            *(b + 350 * OS1_S1 + 55) =
                prefactor_z * *(b + 350 * OS1_S1 + 34) -
                p_over_q * *(b + 440 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 350 * OS1_S1 + 19);
            *(b + 351 * OS1_S1 + 35) =
                prefactor_x * *(b + 351 * OS1_S1 + 20) -
                p_over_q * *(b + 429 * OS1_S1 + 20) +
                one_over_two_q * *(b + 285 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 351 * OS1_S1 + 10);
            *(b + 351 * OS1_S1 + 36) = prefactor_y * *(b + 351 * OS1_S1 + 20) -
                                       p_over_q * *(b + 440 * OS1_S1 + 20);
            *(b + 351 * OS1_S1 + 37) =
                prefactor_z * *(b + 351 * OS1_S1 + 20) -
                p_over_q * *(b + 441 * OS1_S1 + 20) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 20);
            *(b + 351 * OS1_S1 + 38) =
                prefactor_y * *(b + 351 * OS1_S1 + 21) -
                p_over_q * *(b + 440 * OS1_S1 + 21) +
                one_over_two_q * *(b + 351 * OS1_S1 + 10);
            *(b + 351 * OS1_S1 + 39) = prefactor_y * *(b + 351 * OS1_S1 + 22) -
                                       p_over_q * *(b + 440 * OS1_S1 + 22);
            *(b + 351 * OS1_S1 + 40) =
                prefactor_z * *(b + 351 * OS1_S1 + 22) -
                p_over_q * *(b + 441 * OS1_S1 + 22) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 22) +
                one_over_two_q * *(b + 351 * OS1_S1 + 10);
            *(b + 351 * OS1_S1 + 41) =
                prefactor_x * *(b + 351 * OS1_S1 + 26) -
                p_over_q * *(b + 429 * OS1_S1 + 26) +
                one_over_two_q * *(b + 285 * OS1_S1 + 26) +
                one_over_two_q * *(b + 351 * OS1_S1 + 16);
            *(b + 351 * OS1_S1 + 42) =
                prefactor_z * *(b + 351 * OS1_S1 + 23) -
                p_over_q * *(b + 441 * OS1_S1 + 23) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 23);
            *(b + 351 * OS1_S1 + 43) = prefactor_y * *(b + 351 * OS1_S1 + 25) -
                                       p_over_q * *(b + 440 * OS1_S1 + 25);
            *(b + 351 * OS1_S1 + 44) =
                prefactor_x * *(b + 351 * OS1_S1 + 29) -
                p_over_q * *(b + 429 * OS1_S1 + 29) +
                one_over_two_q * *(b + 285 * OS1_S1 + 29) +
                one_over_two_q * *(b + 351 * OS1_S1 + 19);
            *(b + 351 * OS1_S1 + 45) =
                prefactor_x * *(b + 351 * OS1_S1 + 30) -
                p_over_q * *(b + 429 * OS1_S1 + 30) +
                one_over_two_q * *(b + 285 * OS1_S1 + 30);
            *(b + 351 * OS1_S1 + 46) =
                prefactor_x * *(b + 351 * OS1_S1 + 31) -
                p_over_q * *(b + 429 * OS1_S1 + 31) +
                one_over_two_q * *(b + 285 * OS1_S1 + 31);
            *(b + 351 * OS1_S1 + 47) =
                prefactor_x * *(b + 351 * OS1_S1 + 32) -
                p_over_q * *(b + 429 * OS1_S1 + 32) +
                one_over_two_q * *(b + 285 * OS1_S1 + 32);
            *(b + 351 * OS1_S1 + 48) = prefactor_y * *(b + 351 * OS1_S1 + 29) -
                                       p_over_q * *(b + 440 * OS1_S1 + 29);
            *(b + 351 * OS1_S1 + 49) =
                prefactor_x * *(b + 351 * OS1_S1 + 34) -
                p_over_q * *(b + 429 * OS1_S1 + 34) +
                one_over_two_q * *(b + 285 * OS1_S1 + 34);
            *(b + 351 * OS1_S1 + 50) =
                prefactor_y * *(b + 351 * OS1_S1 + 30) -
                p_over_q * *(b + 440 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 351 * OS1_S1 + 16);
            *(b + 351 * OS1_S1 + 51) =
                prefactor_z * *(b + 351 * OS1_S1 + 30) -
                p_over_q * *(b + 441 * OS1_S1 + 30) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 30);
            *(b + 351 * OS1_S1 + 52) =
                prefactor_z * *(b + 351 * OS1_S1 + 31) -
                p_over_q * *(b + 441 * OS1_S1 + 31) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 31) +
                one_over_two_q * *(b + 351 * OS1_S1 + 16);
            *(b + 351 * OS1_S1 + 53) =
                prefactor_y * *(b + 351 * OS1_S1 + 33) -
                p_over_q * *(b + 440 * OS1_S1 + 33) +
                one_over_two_q * *(b + 351 * OS1_S1 + 19);
            *(b + 351 * OS1_S1 + 54) = prefactor_y * *(b + 351 * OS1_S1 + 34) -
                                       p_over_q * *(b + 440 * OS1_S1 + 34);
            *(b + 351 * OS1_S1 + 55) =
                prefactor_z * *(b + 351 * OS1_S1 + 34) -
                p_over_q * *(b + 441 * OS1_S1 + 34) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 351 * OS1_S1 + 19);
            *(b + 352 * OS1_S1 + 35) =
                prefactor_x * *(b + 352 * OS1_S1 + 20) -
                p_over_q * *(b + 430 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 352 * OS1_S1 + 10);
            *(b + 352 * OS1_S1 + 36) =
                prefactor_y * *(b + 352 * OS1_S1 + 20) -
                p_over_q * *(b + 442 * OS1_S1 + 20) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 20);
            *(b + 352 * OS1_S1 + 37) = prefactor_z * *(b + 352 * OS1_S1 + 20) -
                                       p_over_q * *(b + 443 * OS1_S1 + 20);
            *(b + 352 * OS1_S1 + 38) =
                prefactor_y * *(b + 352 * OS1_S1 + 21) -
                p_over_q * *(b + 442 * OS1_S1 + 21) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 21) +
                one_over_two_q * *(b + 352 * OS1_S1 + 10);
            *(b + 352 * OS1_S1 + 39) = prefactor_z * *(b + 352 * OS1_S1 + 21) -
                                       p_over_q * *(b + 443 * OS1_S1 + 21);
            *(b + 352 * OS1_S1 + 40) =
                prefactor_z * *(b + 352 * OS1_S1 + 22) -
                p_over_q * *(b + 443 * OS1_S1 + 22) +
                one_over_two_q * *(b + 352 * OS1_S1 + 10);
            *(b + 352 * OS1_S1 + 41) =
                prefactor_x * *(b + 352 * OS1_S1 + 26) -
                p_over_q * *(b + 430 * OS1_S1 + 26) +
                one_over_two_q * *(b + 352 * OS1_S1 + 16);
            *(b + 352 * OS1_S1 + 42) = prefactor_z * *(b + 352 * OS1_S1 + 23) -
                                       p_over_q * *(b + 443 * OS1_S1 + 23);
            *(b + 352 * OS1_S1 + 43) =
                prefactor_y * *(b + 352 * OS1_S1 + 25) -
                p_over_q * *(b + 442 * OS1_S1 + 25) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 25);
            *(b + 352 * OS1_S1 + 44) =
                prefactor_x * *(b + 352 * OS1_S1 + 29) -
                p_over_q * *(b + 430 * OS1_S1 + 29) +
                one_over_two_q * *(b + 352 * OS1_S1 + 19);
            *(b + 352 * OS1_S1 + 45) = prefactor_x * *(b + 352 * OS1_S1 + 30) -
                                       p_over_q * *(b + 430 * OS1_S1 + 30);
            *(b + 352 * OS1_S1 + 46) = prefactor_z * *(b + 352 * OS1_S1 + 26) -
                                       p_over_q * *(b + 443 * OS1_S1 + 26);
            *(b + 352 * OS1_S1 + 47) = prefactor_x * *(b + 352 * OS1_S1 + 32) -
                                       p_over_q * *(b + 430 * OS1_S1 + 32);
            *(b + 352 * OS1_S1 + 48) = prefactor_x * *(b + 352 * OS1_S1 + 33) -
                                       p_over_q * *(b + 430 * OS1_S1 + 33);
            *(b + 352 * OS1_S1 + 49) = prefactor_x * *(b + 352 * OS1_S1 + 34) -
                                       p_over_q * *(b + 430 * OS1_S1 + 34);
            *(b + 352 * OS1_S1 + 50) =
                prefactor_y * *(b + 352 * OS1_S1 + 30) -
                p_over_q * *(b + 442 * OS1_S1 + 30) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 352 * OS1_S1 + 16);
            *(b + 352 * OS1_S1 + 51) = prefactor_z * *(b + 352 * OS1_S1 + 30) -
                                       p_over_q * *(b + 443 * OS1_S1 + 30);
            *(b + 352 * OS1_S1 + 52) =
                prefactor_z * *(b + 352 * OS1_S1 + 31) -
                p_over_q * *(b + 443 * OS1_S1 + 31) +
                one_over_two_q * *(b + 352 * OS1_S1 + 16);
            *(b + 352 * OS1_S1 + 53) =
                prefactor_y * *(b + 352 * OS1_S1 + 33) -
                p_over_q * *(b + 442 * OS1_S1 + 33) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 33) +
                one_over_two_q * *(b + 352 * OS1_S1 + 19);
            *(b + 352 * OS1_S1 + 54) =
                prefactor_y * *(b + 352 * OS1_S1 + 34) -
                p_over_q * *(b + 442 * OS1_S1 + 34) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 34);
            *(b + 352 * OS1_S1 + 55) =
                prefactor_z * *(b + 352 * OS1_S1 + 34) -
                p_over_q * *(b + 443 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 352 * OS1_S1 + 19);
            *(b + 353 * OS1_S1 + 35) =
                prefactor_x * *(b + 353 * OS1_S1 + 20) -
                p_over_q * *(b + 431 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 353 * OS1_S1 + 10);
            *(b + 353 * OS1_S1 + 36) =
                prefactor_y * *(b + 353 * OS1_S1 + 20) -
                p_over_q * *(b + 443 * OS1_S1 + 20) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 20);
            *(b + 353 * OS1_S1 + 37) =
                prefactor_z * *(b + 353 * OS1_S1 + 20) -
                p_over_q * *(b + 444 * OS1_S1 + 20) +
                one_over_two_q * *(b + 275 * OS1_S1 + 20);
            *(b + 353 * OS1_S1 + 38) =
                prefactor_y * *(b + 353 * OS1_S1 + 21) -
                p_over_q * *(b + 443 * OS1_S1 + 21) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 21) +
                one_over_two_q * *(b + 353 * OS1_S1 + 10);
            *(b + 353 * OS1_S1 + 39) =
                prefactor_z * *(b + 353 * OS1_S1 + 21) -
                p_over_q * *(b + 444 * OS1_S1 + 21) +
                one_over_two_q * *(b + 275 * OS1_S1 + 21);
            *(b + 353 * OS1_S1 + 40) =
                prefactor_z * *(b + 353 * OS1_S1 + 22) -
                p_over_q * *(b + 444 * OS1_S1 + 22) +
                one_over_two_q * *(b + 275 * OS1_S1 + 22) +
                one_over_two_q * *(b + 353 * OS1_S1 + 10);
            *(b + 353 * OS1_S1 + 41) =
                prefactor_x * *(b + 353 * OS1_S1 + 26) -
                p_over_q * *(b + 431 * OS1_S1 + 26) +
                one_over_two_q * *(b + 353 * OS1_S1 + 16);
            *(b + 353 * OS1_S1 + 42) =
                prefactor_z * *(b + 353 * OS1_S1 + 23) -
                p_over_q * *(b + 444 * OS1_S1 + 23) +
                one_over_two_q * *(b + 275 * OS1_S1 + 23);
            *(b + 353 * OS1_S1 + 43) =
                prefactor_y * *(b + 353 * OS1_S1 + 25) -
                p_over_q * *(b + 443 * OS1_S1 + 25) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 25);
            *(b + 353 * OS1_S1 + 44) =
                prefactor_x * *(b + 353 * OS1_S1 + 29) -
                p_over_q * *(b + 431 * OS1_S1 + 29) +
                one_over_two_q * *(b + 353 * OS1_S1 + 19);
            *(b + 353 * OS1_S1 + 45) = prefactor_x * *(b + 353 * OS1_S1 + 30) -
                                       p_over_q * *(b + 431 * OS1_S1 + 30);
            *(b + 353 * OS1_S1 + 46) = prefactor_x * *(b + 353 * OS1_S1 + 31) -
                                       p_over_q * *(b + 431 * OS1_S1 + 31);
            *(b + 353 * OS1_S1 + 47) = prefactor_x * *(b + 353 * OS1_S1 + 32) -
                                       p_over_q * *(b + 431 * OS1_S1 + 32);
            *(b + 353 * OS1_S1 + 48) = prefactor_x * *(b + 353 * OS1_S1 + 33) -
                                       p_over_q * *(b + 431 * OS1_S1 + 33);
            *(b + 353 * OS1_S1 + 49) = prefactor_x * *(b + 353 * OS1_S1 + 34) -
                                       p_over_q * *(b + 431 * OS1_S1 + 34);
            *(b + 353 * OS1_S1 + 50) =
                prefactor_y * *(b + 353 * OS1_S1 + 30) -
                p_over_q * *(b + 443 * OS1_S1 + 30) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 353 * OS1_S1 + 16);
            *(b + 353 * OS1_S1 + 51) =
                prefactor_z * *(b + 353 * OS1_S1 + 30) -
                p_over_q * *(b + 444 * OS1_S1 + 30) +
                one_over_two_q * *(b + 275 * OS1_S1 + 30);
            *(b + 353 * OS1_S1 + 52) =
                prefactor_z * *(b + 353 * OS1_S1 + 31) -
                p_over_q * *(b + 444 * OS1_S1 + 31) +
                one_over_two_q * *(b + 275 * OS1_S1 + 31) +
                one_over_two_q * *(b + 353 * OS1_S1 + 16);
            *(b + 353 * OS1_S1 + 53) =
                prefactor_y * *(b + 353 * OS1_S1 + 33) -
                p_over_q * *(b + 443 * OS1_S1 + 33) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 33) +
                one_over_two_q * *(b + 353 * OS1_S1 + 19);
            *(b + 353 * OS1_S1 + 54) =
                prefactor_y * *(b + 353 * OS1_S1 + 34) -
                p_over_q * *(b + 443 * OS1_S1 + 34) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 34);
            *(b + 353 * OS1_S1 + 55) =
                prefactor_z * *(b + 353 * OS1_S1 + 34) -
                p_over_q * *(b + 444 * OS1_S1 + 34) +
                one_over_two_q * *(b + 275 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 353 * OS1_S1 + 19);
            *(b + 354 * OS1_S1 + 35) =
                prefactor_x * *(b + 354 * OS1_S1 + 20) -
                p_over_q * *(b + 432 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 354 * OS1_S1 + 10);
            *(b + 354 * OS1_S1 + 36) =
                prefactor_y * *(b + 354 * OS1_S1 + 20) -
                p_over_q * *(b + 444 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 20);
            *(b + 354 * OS1_S1 + 37) =
                prefactor_z * *(b + 354 * OS1_S1 + 20) -
                p_over_q * *(b + 445 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 20);
            *(b + 354 * OS1_S1 + 38) =
                prefactor_y * *(b + 354 * OS1_S1 + 21) -
                p_over_q * *(b + 444 * OS1_S1 + 21) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 21) +
                one_over_two_q * *(b + 354 * OS1_S1 + 10);
            *(b + 354 * OS1_S1 + 39) =
                prefactor_z * *(b + 354 * OS1_S1 + 21) -
                p_over_q * *(b + 445 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 21);
            *(b + 354 * OS1_S1 + 40) =
                prefactor_z * *(b + 354 * OS1_S1 + 22) -
                p_over_q * *(b + 445 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 22) +
                one_over_two_q * *(b + 354 * OS1_S1 + 10);
            *(b + 354 * OS1_S1 + 41) =
                prefactor_x * *(b + 354 * OS1_S1 + 26) -
                p_over_q * *(b + 432 * OS1_S1 + 26) +
                one_over_two_q * *(b + 354 * OS1_S1 + 16);
            *(b + 354 * OS1_S1 + 42) =
                prefactor_z * *(b + 354 * OS1_S1 + 23) -
                p_over_q * *(b + 445 * OS1_S1 + 23) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 23);
            *(b + 354 * OS1_S1 + 43) =
                prefactor_y * *(b + 354 * OS1_S1 + 25) -
                p_over_q * *(b + 444 * OS1_S1 + 25) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 25);
            *(b + 354 * OS1_S1 + 44) =
                prefactor_x * *(b + 354 * OS1_S1 + 29) -
                p_over_q * *(b + 432 * OS1_S1 + 29) +
                one_over_two_q * *(b + 354 * OS1_S1 + 19);
            *(b + 354 * OS1_S1 + 45) = prefactor_x * *(b + 354 * OS1_S1 + 30) -
                                       p_over_q * *(b + 432 * OS1_S1 + 30);
            *(b + 354 * OS1_S1 + 46) = prefactor_x * *(b + 354 * OS1_S1 + 31) -
                                       p_over_q * *(b + 432 * OS1_S1 + 31);
            *(b + 354 * OS1_S1 + 47) = prefactor_x * *(b + 354 * OS1_S1 + 32) -
                                       p_over_q * *(b + 432 * OS1_S1 + 32);
            *(b + 354 * OS1_S1 + 48) = prefactor_x * *(b + 354 * OS1_S1 + 33) -
                                       p_over_q * *(b + 432 * OS1_S1 + 33);
            *(b + 354 * OS1_S1 + 49) = prefactor_x * *(b + 354 * OS1_S1 + 34) -
                                       p_over_q * *(b + 432 * OS1_S1 + 34);
            *(b + 354 * OS1_S1 + 50) =
                prefactor_y * *(b + 354 * OS1_S1 + 30) -
                p_over_q * *(b + 444 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 354 * OS1_S1 + 16);
            *(b + 354 * OS1_S1 + 51) =
                prefactor_z * *(b + 354 * OS1_S1 + 30) -
                p_over_q * *(b + 445 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 30);
            *(b + 354 * OS1_S1 + 52) =
                prefactor_z * *(b + 354 * OS1_S1 + 31) -
                p_over_q * *(b + 445 * OS1_S1 + 31) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 31) +
                one_over_two_q * *(b + 354 * OS1_S1 + 16);
            *(b + 354 * OS1_S1 + 53) =
                prefactor_y * *(b + 354 * OS1_S1 + 33) -
                p_over_q * *(b + 444 * OS1_S1 + 33) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 33) +
                one_over_two_q * *(b + 354 * OS1_S1 + 19);
            *(b + 354 * OS1_S1 + 54) =
                prefactor_y * *(b + 354 * OS1_S1 + 34) -
                p_over_q * *(b + 444 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 34);
            *(b + 354 * OS1_S1 + 55) =
                prefactor_z * *(b + 354 * OS1_S1 + 34) -
                p_over_q * *(b + 445 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 354 * OS1_S1 + 19);
            *(b + 355 * OS1_S1 + 35) =
                prefactor_x * *(b + 355 * OS1_S1 + 20) -
                p_over_q * *(b + 433 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 10);
            *(b + 355 * OS1_S1 + 36) =
                prefactor_y * *(b + 355 * OS1_S1 + 20) -
                p_over_q * *(b + 445 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 20);
            *(b + 355 * OS1_S1 + 37) =
                prefactor_z * *(b + 355 * OS1_S1 + 20) -
                p_over_q * *(b + 446 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 20);
            *(b + 355 * OS1_S1 + 38) =
                prefactor_y * *(b + 355 * OS1_S1 + 21) -
                p_over_q * *(b + 445 * OS1_S1 + 21) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 21) +
                one_over_two_q * *(b + 355 * OS1_S1 + 10);
            *(b + 355 * OS1_S1 + 39) =
                prefactor_z * *(b + 355 * OS1_S1 + 21) -
                p_over_q * *(b + 446 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 21);
            *(b + 355 * OS1_S1 + 40) =
                prefactor_z * *(b + 355 * OS1_S1 + 22) -
                p_over_q * *(b + 446 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 22) +
                one_over_two_q * *(b + 355 * OS1_S1 + 10);
            *(b + 355 * OS1_S1 + 41) =
                prefactor_x * *(b + 355 * OS1_S1 + 26) -
                p_over_q * *(b + 433 * OS1_S1 + 26) +
                one_over_two_q * *(b + 355 * OS1_S1 + 16);
            *(b + 355 * OS1_S1 + 42) =
                prefactor_z * *(b + 355 * OS1_S1 + 23) -
                p_over_q * *(b + 446 * OS1_S1 + 23) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 23);
            *(b + 355 * OS1_S1 + 43) =
                prefactor_y * *(b + 355 * OS1_S1 + 25) -
                p_over_q * *(b + 445 * OS1_S1 + 25) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 25);
            *(b + 355 * OS1_S1 + 44) =
                prefactor_x * *(b + 355 * OS1_S1 + 29) -
                p_over_q * *(b + 433 * OS1_S1 + 29) +
                one_over_two_q * *(b + 355 * OS1_S1 + 19);
            *(b + 355 * OS1_S1 + 45) = prefactor_x * *(b + 355 * OS1_S1 + 30) -
                                       p_over_q * *(b + 433 * OS1_S1 + 30);
            *(b + 355 * OS1_S1 + 46) = prefactor_x * *(b + 355 * OS1_S1 + 31) -
                                       p_over_q * *(b + 433 * OS1_S1 + 31);
            *(b + 355 * OS1_S1 + 47) = prefactor_x * *(b + 355 * OS1_S1 + 32) -
                                       p_over_q * *(b + 433 * OS1_S1 + 32);
            *(b + 355 * OS1_S1 + 48) = prefactor_x * *(b + 355 * OS1_S1 + 33) -
                                       p_over_q * *(b + 433 * OS1_S1 + 33);
            *(b + 355 * OS1_S1 + 49) = prefactor_x * *(b + 355 * OS1_S1 + 34) -
                                       p_over_q * *(b + 433 * OS1_S1 + 34);
            *(b + 355 * OS1_S1 + 50) =
                prefactor_y * *(b + 355 * OS1_S1 + 30) -
                p_over_q * *(b + 445 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 16);
            *(b + 355 * OS1_S1 + 51) =
                prefactor_z * *(b + 355 * OS1_S1 + 30) -
                p_over_q * *(b + 446 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 30);
            *(b + 355 * OS1_S1 + 52) =
                prefactor_z * *(b + 355 * OS1_S1 + 31) -
                p_over_q * *(b + 446 * OS1_S1 + 31) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 31) +
                one_over_two_q * *(b + 355 * OS1_S1 + 16);
            *(b + 355 * OS1_S1 + 53) =
                prefactor_y * *(b + 355 * OS1_S1 + 33) -
                p_over_q * *(b + 445 * OS1_S1 + 33) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 33) +
                one_over_two_q * *(b + 355 * OS1_S1 + 19);
            *(b + 355 * OS1_S1 + 54) =
                prefactor_y * *(b + 355 * OS1_S1 + 34) -
                p_over_q * *(b + 445 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 34);
            *(b + 355 * OS1_S1 + 55) =
                prefactor_z * *(b + 355 * OS1_S1 + 34) -
                p_over_q * *(b + 446 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 19);
            *(b + 356 * OS1_S1 + 35) =
                prefactor_x * *(b + 356 * OS1_S1 + 20) -
                p_over_q * *(b + 434 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 356 * OS1_S1 + 10);
            *(b + 356 * OS1_S1 + 36) =
                prefactor_y * *(b + 356 * OS1_S1 + 20) -
                p_over_q * *(b + 446 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 20);
            *(b + 356 * OS1_S1 + 37) =
                prefactor_z * *(b + 356 * OS1_S1 + 20) -
                p_over_q * *(b + 447 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 20);
            *(b + 356 * OS1_S1 + 38) =
                prefactor_y * *(b + 356 * OS1_S1 + 21) -
                p_over_q * *(b + 446 * OS1_S1 + 21) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 21) +
                one_over_two_q * *(b + 356 * OS1_S1 + 10);
            *(b + 356 * OS1_S1 + 39) =
                prefactor_z * *(b + 356 * OS1_S1 + 21) -
                p_over_q * *(b + 447 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 21);
            *(b + 356 * OS1_S1 + 40) =
                prefactor_z * *(b + 356 * OS1_S1 + 22) -
                p_over_q * *(b + 447 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 22) +
                one_over_two_q * *(b + 356 * OS1_S1 + 10);
            *(b + 356 * OS1_S1 + 41) =
                prefactor_x * *(b + 356 * OS1_S1 + 26) -
                p_over_q * *(b + 434 * OS1_S1 + 26) +
                one_over_two_q * *(b + 356 * OS1_S1 + 16);
            *(b + 356 * OS1_S1 + 42) =
                prefactor_z * *(b + 356 * OS1_S1 + 23) -
                p_over_q * *(b + 447 * OS1_S1 + 23) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 23);
            *(b + 356 * OS1_S1 + 43) =
                prefactor_y * *(b + 356 * OS1_S1 + 25) -
                p_over_q * *(b + 446 * OS1_S1 + 25) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 25);
            *(b + 356 * OS1_S1 + 44) =
                prefactor_x * *(b + 356 * OS1_S1 + 29) -
                p_over_q * *(b + 434 * OS1_S1 + 29) +
                one_over_two_q * *(b + 356 * OS1_S1 + 19);
            *(b + 356 * OS1_S1 + 45) = prefactor_x * *(b + 356 * OS1_S1 + 30) -
                                       p_over_q * *(b + 434 * OS1_S1 + 30);
            *(b + 356 * OS1_S1 + 46) = prefactor_x * *(b + 356 * OS1_S1 + 31) -
                                       p_over_q * *(b + 434 * OS1_S1 + 31);
            *(b + 356 * OS1_S1 + 47) = prefactor_x * *(b + 356 * OS1_S1 + 32) -
                                       p_over_q * *(b + 434 * OS1_S1 + 32);
            *(b + 356 * OS1_S1 + 48) = prefactor_x * *(b + 356 * OS1_S1 + 33) -
                                       p_over_q * *(b + 434 * OS1_S1 + 33);
            *(b + 356 * OS1_S1 + 49) = prefactor_x * *(b + 356 * OS1_S1 + 34) -
                                       p_over_q * *(b + 434 * OS1_S1 + 34);
            *(b + 356 * OS1_S1 + 50) =
                prefactor_y * *(b + 356 * OS1_S1 + 30) -
                p_over_q * *(b + 446 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 356 * OS1_S1 + 16);
            *(b + 356 * OS1_S1 + 51) =
                prefactor_z * *(b + 356 * OS1_S1 + 30) -
                p_over_q * *(b + 447 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 30);
            *(b + 356 * OS1_S1 + 52) =
                prefactor_z * *(b + 356 * OS1_S1 + 31) -
                p_over_q * *(b + 447 * OS1_S1 + 31) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 31) +
                one_over_two_q * *(b + 356 * OS1_S1 + 16);
            *(b + 356 * OS1_S1 + 53) =
                prefactor_y * *(b + 356 * OS1_S1 + 33) -
                p_over_q * *(b + 446 * OS1_S1 + 33) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 33) +
                one_over_two_q * *(b + 356 * OS1_S1 + 19);
            *(b + 356 * OS1_S1 + 54) =
                prefactor_y * *(b + 356 * OS1_S1 + 34) -
                p_over_q * *(b + 446 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 34);
            *(b + 356 * OS1_S1 + 55) =
                prefactor_z * *(b + 356 * OS1_S1 + 34) -
                p_over_q * *(b + 447 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 356 * OS1_S1 + 19);
            *(b + 357 * OS1_S1 + 35) =
                prefactor_x * *(b + 357 * OS1_S1 + 20) -
                p_over_q * *(b + 435 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 357 * OS1_S1 + 10);
            *(b + 357 * OS1_S1 + 36) =
                prefactor_y * *(b + 357 * OS1_S1 + 20) -
                p_over_q * *(b + 447 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 20);
            *(b + 357 * OS1_S1 + 37) =
                prefactor_z * *(b + 357 * OS1_S1 + 20) -
                p_over_q * *(b + 448 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 20);
            *(b + 357 * OS1_S1 + 38) =
                prefactor_y * *(b + 357 * OS1_S1 + 21) -
                p_over_q * *(b + 447 * OS1_S1 + 21) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 21) +
                one_over_two_q * *(b + 357 * OS1_S1 + 10);
            *(b + 357 * OS1_S1 + 39) =
                prefactor_z * *(b + 357 * OS1_S1 + 21) -
                p_over_q * *(b + 448 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 21);
            *(b + 357 * OS1_S1 + 40) =
                prefactor_z * *(b + 357 * OS1_S1 + 22) -
                p_over_q * *(b + 448 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 22) +
                one_over_two_q * *(b + 357 * OS1_S1 + 10);
            *(b + 357 * OS1_S1 + 41) =
                prefactor_x * *(b + 357 * OS1_S1 + 26) -
                p_over_q * *(b + 435 * OS1_S1 + 26) +
                one_over_two_q * *(b + 357 * OS1_S1 + 16);
            *(b + 357 * OS1_S1 + 42) =
                prefactor_z * *(b + 357 * OS1_S1 + 23) -
                p_over_q * *(b + 448 * OS1_S1 + 23) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 23);
            *(b + 357 * OS1_S1 + 43) =
                prefactor_y * *(b + 357 * OS1_S1 + 25) -
                p_over_q * *(b + 447 * OS1_S1 + 25) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 25);
            *(b + 357 * OS1_S1 + 44) =
                prefactor_x * *(b + 357 * OS1_S1 + 29) -
                p_over_q * *(b + 435 * OS1_S1 + 29) +
                one_over_two_q * *(b + 357 * OS1_S1 + 19);
            *(b + 357 * OS1_S1 + 45) = prefactor_x * *(b + 357 * OS1_S1 + 30) -
                                       p_over_q * *(b + 435 * OS1_S1 + 30);
            *(b + 357 * OS1_S1 + 46) = prefactor_x * *(b + 357 * OS1_S1 + 31) -
                                       p_over_q * *(b + 435 * OS1_S1 + 31);
            *(b + 357 * OS1_S1 + 47) = prefactor_x * *(b + 357 * OS1_S1 + 32) -
                                       p_over_q * *(b + 435 * OS1_S1 + 32);
            *(b + 357 * OS1_S1 + 48) = prefactor_x * *(b + 357 * OS1_S1 + 33) -
                                       p_over_q * *(b + 435 * OS1_S1 + 33);
            *(b + 357 * OS1_S1 + 49) = prefactor_x * *(b + 357 * OS1_S1 + 34) -
                                       p_over_q * *(b + 435 * OS1_S1 + 34);
            *(b + 357 * OS1_S1 + 50) =
                prefactor_y * *(b + 357 * OS1_S1 + 30) -
                p_over_q * *(b + 447 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 357 * OS1_S1 + 16);
            *(b + 357 * OS1_S1 + 51) =
                prefactor_z * *(b + 357 * OS1_S1 + 30) -
                p_over_q * *(b + 448 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 30);
            *(b + 357 * OS1_S1 + 52) =
                prefactor_z * *(b + 357 * OS1_S1 + 31) -
                p_over_q * *(b + 448 * OS1_S1 + 31) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 31) +
                one_over_two_q * *(b + 357 * OS1_S1 + 16);
            *(b + 357 * OS1_S1 + 53) =
                prefactor_y * *(b + 357 * OS1_S1 + 33) -
                p_over_q * *(b + 447 * OS1_S1 + 33) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 33) +
                one_over_two_q * *(b + 357 * OS1_S1 + 19);
            *(b + 357 * OS1_S1 + 54) =
                prefactor_y * *(b + 357 * OS1_S1 + 34) -
                p_over_q * *(b + 447 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 34);
            *(b + 357 * OS1_S1 + 55) =
                prefactor_z * *(b + 357 * OS1_S1 + 34) -
                p_over_q * *(b + 448 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 357 * OS1_S1 + 19);
            *(b + 358 * OS1_S1 + 35) =
                prefactor_x * *(b + 358 * OS1_S1 + 20) -
                p_over_q * *(b + 436 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 358 * OS1_S1 + 10);
            *(b + 358 * OS1_S1 + 36) =
                prefactor_y * *(b + 358 * OS1_S1 + 20) -
                p_over_q * *(b + 448 * OS1_S1 + 20) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 20);
            *(b + 358 * OS1_S1 + 37) =
                prefactor_z * *(b + 358 * OS1_S1 + 20) -
                p_over_q * *(b + 449 * OS1_S1 + 20) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 20);
            *(b + 358 * OS1_S1 + 38) =
                prefactor_y * *(b + 358 * OS1_S1 + 21) -
                p_over_q * *(b + 448 * OS1_S1 + 21) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 21) +
                one_over_two_q * *(b + 358 * OS1_S1 + 10);
            *(b + 358 * OS1_S1 + 39) =
                prefactor_y * *(b + 358 * OS1_S1 + 22) -
                p_over_q * *(b + 448 * OS1_S1 + 22) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 22);
            *(b + 358 * OS1_S1 + 40) =
                prefactor_z * *(b + 358 * OS1_S1 + 22) -
                p_over_q * *(b + 449 * OS1_S1 + 22) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 22) +
                one_over_two_q * *(b + 358 * OS1_S1 + 10);
            *(b + 358 * OS1_S1 + 41) =
                prefactor_x * *(b + 358 * OS1_S1 + 26) -
                p_over_q * *(b + 436 * OS1_S1 + 26) +
                one_over_two_q * *(b + 358 * OS1_S1 + 16);
            *(b + 358 * OS1_S1 + 42) =
                prefactor_z * *(b + 358 * OS1_S1 + 23) -
                p_over_q * *(b + 449 * OS1_S1 + 23) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 23);
            *(b + 358 * OS1_S1 + 43) =
                prefactor_y * *(b + 358 * OS1_S1 + 25) -
                p_over_q * *(b + 448 * OS1_S1 + 25) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 25);
            *(b + 358 * OS1_S1 + 44) =
                prefactor_x * *(b + 358 * OS1_S1 + 29) -
                p_over_q * *(b + 436 * OS1_S1 + 29) +
                one_over_two_q * *(b + 358 * OS1_S1 + 19);
            *(b + 358 * OS1_S1 + 45) = prefactor_x * *(b + 358 * OS1_S1 + 30) -
                                       p_over_q * *(b + 436 * OS1_S1 + 30);
            *(b + 358 * OS1_S1 + 46) = prefactor_x * *(b + 358 * OS1_S1 + 31) -
                                       p_over_q * *(b + 436 * OS1_S1 + 31);
            *(b + 358 * OS1_S1 + 47) = prefactor_x * *(b + 358 * OS1_S1 + 32) -
                                       p_over_q * *(b + 436 * OS1_S1 + 32);
            *(b + 358 * OS1_S1 + 48) = prefactor_x * *(b + 358 * OS1_S1 + 33) -
                                       p_over_q * *(b + 436 * OS1_S1 + 33);
            *(b + 358 * OS1_S1 + 49) = prefactor_x * *(b + 358 * OS1_S1 + 34) -
                                       p_over_q * *(b + 436 * OS1_S1 + 34);
            *(b + 358 * OS1_S1 + 50) =
                prefactor_y * *(b + 358 * OS1_S1 + 30) -
                p_over_q * *(b + 448 * OS1_S1 + 30) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 358 * OS1_S1 + 16);
            *(b + 358 * OS1_S1 + 51) =
                prefactor_z * *(b + 358 * OS1_S1 + 30) -
                p_over_q * *(b + 449 * OS1_S1 + 30) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 30);
            *(b + 358 * OS1_S1 + 52) =
                prefactor_z * *(b + 358 * OS1_S1 + 31) -
                p_over_q * *(b + 449 * OS1_S1 + 31) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 31) +
                one_over_two_q * *(b + 358 * OS1_S1 + 16);
            *(b + 358 * OS1_S1 + 53) =
                prefactor_y * *(b + 358 * OS1_S1 + 33) -
                p_over_q * *(b + 448 * OS1_S1 + 33) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 33) +
                one_over_two_q * *(b + 358 * OS1_S1 + 19);
            *(b + 358 * OS1_S1 + 54) =
                prefactor_y * *(b + 358 * OS1_S1 + 34) -
                p_over_q * *(b + 448 * OS1_S1 + 34) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 34);
            *(b + 358 * OS1_S1 + 55) =
                prefactor_z * *(b + 358 * OS1_S1 + 34) -
                p_over_q * *(b + 449 * OS1_S1 + 34) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 358 * OS1_S1 + 19);
            *(b + 359 * OS1_S1 + 35) =
                prefactor_x * *(b + 359 * OS1_S1 + 20) -
                p_over_q * *(b + 437 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 359 * OS1_S1 + 10);
            *(b + 359 * OS1_S1 + 36) =
                prefactor_y * *(b + 359 * OS1_S1 + 20) -
                p_over_q * *(b + 449 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 20);
            *(b + 359 * OS1_S1 + 37) =
                prefactor_z * *(b + 359 * OS1_S1 + 20) -
                p_over_q * *(b + 450 * OS1_S1 + 20) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 20);
            *(b + 359 * OS1_S1 + 38) =
                prefactor_y * *(b + 359 * OS1_S1 + 21) -
                p_over_q * *(b + 449 * OS1_S1 + 21) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 21) +
                one_over_two_q * *(b + 359 * OS1_S1 + 10);
            *(b + 359 * OS1_S1 + 39) =
                prefactor_y * *(b + 359 * OS1_S1 + 22) -
                p_over_q * *(b + 449 * OS1_S1 + 22) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 22);
            *(b + 359 * OS1_S1 + 40) =
                prefactor_z * *(b + 359 * OS1_S1 + 22) -
                p_over_q * *(b + 450 * OS1_S1 + 22) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 22) +
                one_over_two_q * *(b + 359 * OS1_S1 + 10);
            *(b + 359 * OS1_S1 + 41) =
                prefactor_x * *(b + 359 * OS1_S1 + 26) -
                p_over_q * *(b + 437 * OS1_S1 + 26) +
                one_over_two_q * *(b + 359 * OS1_S1 + 16);
            *(b + 359 * OS1_S1 + 42) =
                prefactor_z * *(b + 359 * OS1_S1 + 23) -
                p_over_q * *(b + 450 * OS1_S1 + 23) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 23);
            *(b + 359 * OS1_S1 + 43) =
                prefactor_y * *(b + 359 * OS1_S1 + 25) -
                p_over_q * *(b + 449 * OS1_S1 + 25) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 25);
            *(b + 359 * OS1_S1 + 44) =
                prefactor_x * *(b + 359 * OS1_S1 + 29) -
                p_over_q * *(b + 437 * OS1_S1 + 29) +
                one_over_two_q * *(b + 359 * OS1_S1 + 19);
            *(b + 359 * OS1_S1 + 45) = prefactor_x * *(b + 359 * OS1_S1 + 30) -
                                       p_over_q * *(b + 437 * OS1_S1 + 30);
            *(b + 359 * OS1_S1 + 46) = prefactor_x * *(b + 359 * OS1_S1 + 31) -
                                       p_over_q * *(b + 437 * OS1_S1 + 31);
            *(b + 359 * OS1_S1 + 47) = prefactor_x * *(b + 359 * OS1_S1 + 32) -
                                       p_over_q * *(b + 437 * OS1_S1 + 32);
            *(b + 359 * OS1_S1 + 48) = prefactor_x * *(b + 359 * OS1_S1 + 33) -
                                       p_over_q * *(b + 437 * OS1_S1 + 33);
            *(b + 359 * OS1_S1 + 49) = prefactor_x * *(b + 359 * OS1_S1 + 34) -
                                       p_over_q * *(b + 437 * OS1_S1 + 34);
            *(b + 359 * OS1_S1 + 50) =
                prefactor_y * *(b + 359 * OS1_S1 + 30) -
                p_over_q * *(b + 449 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 359 * OS1_S1 + 16);
            *(b + 359 * OS1_S1 + 51) =
                prefactor_z * *(b + 359 * OS1_S1 + 30) -
                p_over_q * *(b + 450 * OS1_S1 + 30) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 30);
            *(b + 359 * OS1_S1 + 52) =
                prefactor_z * *(b + 359 * OS1_S1 + 31) -
                p_over_q * *(b + 450 * OS1_S1 + 31) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 31) +
                one_over_two_q * *(b + 359 * OS1_S1 + 16);
            *(b + 359 * OS1_S1 + 53) =
                prefactor_y * *(b + 359 * OS1_S1 + 33) -
                p_over_q * *(b + 449 * OS1_S1 + 33) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 33) +
                one_over_two_q * *(b + 359 * OS1_S1 + 19);
            *(b + 359 * OS1_S1 + 54) =
                prefactor_y * *(b + 359 * OS1_S1 + 34) -
                p_over_q * *(b + 449 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 34);
            *(b + 359 * OS1_S1 + 55) =
                prefactor_z * *(b + 359 * OS1_S1 + 34) -
                p_over_q * *(b + 450 * OS1_S1 + 34) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 359 * OS1_S1 + 19);
            *(b + 360 * OS1_S1 + 35) =
                prefactor_x * *(b + 360 * OS1_S1 + 20) -
                p_over_q * *(b + 438 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 10);
            *(b + 360 * OS1_S1 + 36) =
                prefactor_y * *(b + 360 * OS1_S1 + 20) -
                p_over_q * *(b + 450 * OS1_S1 + 20) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 20);
            *(b + 360 * OS1_S1 + 37) =
                prefactor_z * *(b + 360 * OS1_S1 + 20) -
                p_over_q * *(b + 451 * OS1_S1 + 20) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 20);
            *(b + 360 * OS1_S1 + 38) =
                prefactor_y * *(b + 360 * OS1_S1 + 21) -
                p_over_q * *(b + 450 * OS1_S1 + 21) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 21) +
                one_over_two_q * *(b + 360 * OS1_S1 + 10);
            *(b + 360 * OS1_S1 + 39) =
                prefactor_y * *(b + 360 * OS1_S1 + 22) -
                p_over_q * *(b + 450 * OS1_S1 + 22) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 22);
            *(b + 360 * OS1_S1 + 40) =
                prefactor_z * *(b + 360 * OS1_S1 + 22) -
                p_over_q * *(b + 451 * OS1_S1 + 22) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 22) +
                one_over_two_q * *(b + 360 * OS1_S1 + 10);
            *(b + 360 * OS1_S1 + 41) =
                prefactor_x * *(b + 360 * OS1_S1 + 26) -
                p_over_q * *(b + 438 * OS1_S1 + 26) +
                one_over_two_q * *(b + 360 * OS1_S1 + 16);
            *(b + 360 * OS1_S1 + 42) =
                prefactor_z * *(b + 360 * OS1_S1 + 23) -
                p_over_q * *(b + 451 * OS1_S1 + 23) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 23);
            *(b + 360 * OS1_S1 + 43) =
                prefactor_y * *(b + 360 * OS1_S1 + 25) -
                p_over_q * *(b + 450 * OS1_S1 + 25) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 25);
            *(b + 360 * OS1_S1 + 44) =
                prefactor_x * *(b + 360 * OS1_S1 + 29) -
                p_over_q * *(b + 438 * OS1_S1 + 29) +
                one_over_two_q * *(b + 360 * OS1_S1 + 19);
            *(b + 360 * OS1_S1 + 45) = prefactor_x * *(b + 360 * OS1_S1 + 30) -
                                       p_over_q * *(b + 438 * OS1_S1 + 30);
            *(b + 360 * OS1_S1 + 46) = prefactor_x * *(b + 360 * OS1_S1 + 31) -
                                       p_over_q * *(b + 438 * OS1_S1 + 31);
            *(b + 360 * OS1_S1 + 47) = prefactor_x * *(b + 360 * OS1_S1 + 32) -
                                       p_over_q * *(b + 438 * OS1_S1 + 32);
            *(b + 360 * OS1_S1 + 48) = prefactor_x * *(b + 360 * OS1_S1 + 33) -
                                       p_over_q * *(b + 438 * OS1_S1 + 33);
            *(b + 360 * OS1_S1 + 49) = prefactor_x * *(b + 360 * OS1_S1 + 34) -
                                       p_over_q * *(b + 438 * OS1_S1 + 34);
            *(b + 360 * OS1_S1 + 50) =
                prefactor_y * *(b + 360 * OS1_S1 + 30) -
                p_over_q * *(b + 450 * OS1_S1 + 30) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 16);
            *(b + 360 * OS1_S1 + 51) =
                prefactor_z * *(b + 360 * OS1_S1 + 30) -
                p_over_q * *(b + 451 * OS1_S1 + 30) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 30);
            *(b + 360 * OS1_S1 + 52) =
                prefactor_z * *(b + 360 * OS1_S1 + 31) -
                p_over_q * *(b + 451 * OS1_S1 + 31) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 31) +
                one_over_two_q * *(b + 360 * OS1_S1 + 16);
            *(b + 360 * OS1_S1 + 53) =
                prefactor_y * *(b + 360 * OS1_S1 + 33) -
                p_over_q * *(b + 450 * OS1_S1 + 33) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 33) +
                one_over_two_q * *(b + 360 * OS1_S1 + 19);
            *(b + 360 * OS1_S1 + 54) =
                prefactor_y * *(b + 360 * OS1_S1 + 34) -
                p_over_q * *(b + 450 * OS1_S1 + 34) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 34);
            *(b + 360 * OS1_S1 + 55) =
                prefactor_z * *(b + 360 * OS1_S1 + 34) -
                p_over_q * *(b + 451 * OS1_S1 + 34) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 19);
            *(b + 361 * OS1_S1 + 35) =
                prefactor_x * *(b + 361 * OS1_S1 + 20) -
                p_over_q * *(b + 439 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 361 * OS1_S1 + 10);
            *(b + 361 * OS1_S1 + 36) =
                prefactor_y * *(b + 361 * OS1_S1 + 20) -
                p_over_q * *(b + 451 * OS1_S1 + 20) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 20);
            *(b + 361 * OS1_S1 + 37) =
                prefactor_z * *(b + 361 * OS1_S1 + 20) -
                p_over_q * *(b + 452 * OS1_S1 + 20) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 20);
            *(b + 361 * OS1_S1 + 38) =
                prefactor_y * *(b + 361 * OS1_S1 + 21) -
                p_over_q * *(b + 451 * OS1_S1 + 21) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 21) +
                one_over_two_q * *(b + 361 * OS1_S1 + 10);
            *(b + 361 * OS1_S1 + 39) =
                prefactor_y * *(b + 361 * OS1_S1 + 22) -
                p_over_q * *(b + 451 * OS1_S1 + 22) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 22);
            *(b + 361 * OS1_S1 + 40) =
                prefactor_z * *(b + 361 * OS1_S1 + 22) -
                p_over_q * *(b + 452 * OS1_S1 + 22) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 22) +
                one_over_two_q * *(b + 361 * OS1_S1 + 10);
            *(b + 361 * OS1_S1 + 41) =
                prefactor_x * *(b + 361 * OS1_S1 + 26) -
                p_over_q * *(b + 439 * OS1_S1 + 26) +
                one_over_two_q * *(b + 361 * OS1_S1 + 16);
            *(b + 361 * OS1_S1 + 42) =
                prefactor_z * *(b + 361 * OS1_S1 + 23) -
                p_over_q * *(b + 452 * OS1_S1 + 23) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 23);
            *(b + 361 * OS1_S1 + 43) =
                prefactor_y * *(b + 361 * OS1_S1 + 25) -
                p_over_q * *(b + 451 * OS1_S1 + 25) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 25);
            *(b + 361 * OS1_S1 + 44) =
                prefactor_x * *(b + 361 * OS1_S1 + 29) -
                p_over_q * *(b + 439 * OS1_S1 + 29) +
                one_over_two_q * *(b + 361 * OS1_S1 + 19);
            *(b + 361 * OS1_S1 + 45) = prefactor_x * *(b + 361 * OS1_S1 + 30) -
                                       p_over_q * *(b + 439 * OS1_S1 + 30);
            *(b + 361 * OS1_S1 + 46) = prefactor_x * *(b + 361 * OS1_S1 + 31) -
                                       p_over_q * *(b + 439 * OS1_S1 + 31);
            *(b + 361 * OS1_S1 + 47) = prefactor_x * *(b + 361 * OS1_S1 + 32) -
                                       p_over_q * *(b + 439 * OS1_S1 + 32);
            *(b + 361 * OS1_S1 + 48) = prefactor_x * *(b + 361 * OS1_S1 + 33) -
                                       p_over_q * *(b + 439 * OS1_S1 + 33);
            *(b + 361 * OS1_S1 + 49) = prefactor_x * *(b + 361 * OS1_S1 + 34) -
                                       p_over_q * *(b + 439 * OS1_S1 + 34);
            *(b + 361 * OS1_S1 + 50) =
                prefactor_y * *(b + 361 * OS1_S1 + 30) -
                p_over_q * *(b + 451 * OS1_S1 + 30) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 361 * OS1_S1 + 16);
            *(b + 361 * OS1_S1 + 51) =
                prefactor_z * *(b + 361 * OS1_S1 + 30) -
                p_over_q * *(b + 452 * OS1_S1 + 30) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 30);
            *(b + 361 * OS1_S1 + 52) =
                prefactor_z * *(b + 361 * OS1_S1 + 31) -
                p_over_q * *(b + 452 * OS1_S1 + 31) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 31) +
                one_over_two_q * *(b + 361 * OS1_S1 + 16);
            *(b + 361 * OS1_S1 + 53) =
                prefactor_y * *(b + 361 * OS1_S1 + 33) -
                p_over_q * *(b + 451 * OS1_S1 + 33) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 33) +
                one_over_two_q * *(b + 361 * OS1_S1 + 19);
            *(b + 361 * OS1_S1 + 54) =
                prefactor_y * *(b + 361 * OS1_S1 + 34) -
                p_over_q * *(b + 451 * OS1_S1 + 34) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 34);
            *(b + 361 * OS1_S1 + 55) =
                prefactor_z * *(b + 361 * OS1_S1 + 34) -
                p_over_q * *(b + 452 * OS1_S1 + 34) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 361 * OS1_S1 + 19);
            *(b + 362 * OS1_S1 + 35) =
                prefactor_x * *(b + 362 * OS1_S1 + 20) -
                p_over_q * *(b + 440 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 362 * OS1_S1 + 10);
            *(b + 362 * OS1_S1 + 36) =
                prefactor_y * *(b + 362 * OS1_S1 + 20) -
                p_over_q * *(b + 452 * OS1_S1 + 20) +
                one_over_two_q * *(b + 285 * OS1_S1 + 20);
            *(b + 362 * OS1_S1 + 37) =
                prefactor_z * *(b + 362 * OS1_S1 + 20) -
                p_over_q * *(b + 453 * OS1_S1 + 20) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 20);
            *(b + 362 * OS1_S1 + 38) =
                prefactor_y * *(b + 362 * OS1_S1 + 21) -
                p_over_q * *(b + 452 * OS1_S1 + 21) +
                one_over_two_q * *(b + 285 * OS1_S1 + 21) +
                one_over_two_q * *(b + 362 * OS1_S1 + 10);
            *(b + 362 * OS1_S1 + 39) =
                prefactor_y * *(b + 362 * OS1_S1 + 22) -
                p_over_q * *(b + 452 * OS1_S1 + 22) +
                one_over_two_q * *(b + 285 * OS1_S1 + 22);
            *(b + 362 * OS1_S1 + 40) =
                prefactor_z * *(b + 362 * OS1_S1 + 22) -
                p_over_q * *(b + 453 * OS1_S1 + 22) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 22) +
                one_over_two_q * *(b + 362 * OS1_S1 + 10);
            *(b + 362 * OS1_S1 + 41) =
                prefactor_x * *(b + 362 * OS1_S1 + 26) -
                p_over_q * *(b + 440 * OS1_S1 + 26) +
                one_over_two_q * *(b + 362 * OS1_S1 + 16);
            *(b + 362 * OS1_S1 + 42) =
                prefactor_z * *(b + 362 * OS1_S1 + 23) -
                p_over_q * *(b + 453 * OS1_S1 + 23) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 23);
            *(b + 362 * OS1_S1 + 43) =
                prefactor_y * *(b + 362 * OS1_S1 + 25) -
                p_over_q * *(b + 452 * OS1_S1 + 25) +
                one_over_two_q * *(b + 285 * OS1_S1 + 25);
            *(b + 362 * OS1_S1 + 44) =
                prefactor_x * *(b + 362 * OS1_S1 + 29) -
                p_over_q * *(b + 440 * OS1_S1 + 29) +
                one_over_two_q * *(b + 362 * OS1_S1 + 19);
            *(b + 362 * OS1_S1 + 45) = prefactor_x * *(b + 362 * OS1_S1 + 30) -
                                       p_over_q * *(b + 440 * OS1_S1 + 30);
            *(b + 362 * OS1_S1 + 46) = prefactor_x * *(b + 362 * OS1_S1 + 31) -
                                       p_over_q * *(b + 440 * OS1_S1 + 31);
            *(b + 362 * OS1_S1 + 47) = prefactor_x * *(b + 362 * OS1_S1 + 32) -
                                       p_over_q * *(b + 440 * OS1_S1 + 32);
            *(b + 362 * OS1_S1 + 48) = prefactor_x * *(b + 362 * OS1_S1 + 33) -
                                       p_over_q * *(b + 440 * OS1_S1 + 33);
            *(b + 362 * OS1_S1 + 49) = prefactor_x * *(b + 362 * OS1_S1 + 34) -
                                       p_over_q * *(b + 440 * OS1_S1 + 34);
            *(b + 362 * OS1_S1 + 50) =
                prefactor_y * *(b + 362 * OS1_S1 + 30) -
                p_over_q * *(b + 452 * OS1_S1 + 30) +
                one_over_two_q * *(b + 285 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 362 * OS1_S1 + 16);
            *(b + 362 * OS1_S1 + 51) =
                prefactor_z * *(b + 362 * OS1_S1 + 30) -
                p_over_q * *(b + 453 * OS1_S1 + 30) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 30);
            *(b + 362 * OS1_S1 + 52) =
                prefactor_z * *(b + 362 * OS1_S1 + 31) -
                p_over_q * *(b + 453 * OS1_S1 + 31) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 31) +
                one_over_two_q * *(b + 362 * OS1_S1 + 16);
            *(b + 362 * OS1_S1 + 53) =
                prefactor_y * *(b + 362 * OS1_S1 + 33) -
                p_over_q * *(b + 452 * OS1_S1 + 33) +
                one_over_two_q * *(b + 285 * OS1_S1 + 33) +
                one_over_two_q * *(b + 362 * OS1_S1 + 19);
            *(b + 362 * OS1_S1 + 54) =
                prefactor_y * *(b + 362 * OS1_S1 + 34) -
                p_over_q * *(b + 452 * OS1_S1 + 34) +
                one_over_two_q * *(b + 285 * OS1_S1 + 34);
            *(b + 362 * OS1_S1 + 55) =
                prefactor_z * *(b + 362 * OS1_S1 + 34) -
                p_over_q * *(b + 453 * OS1_S1 + 34) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 362 * OS1_S1 + 19);
            *(b + 363 * OS1_S1 + 35) =
                prefactor_x * *(b + 363 * OS1_S1 + 20) -
                p_over_q * *(b + 441 * OS1_S1 + 20) +
                4 * one_over_two_q * *(b + 363 * OS1_S1 + 10);
            *(b + 363 * OS1_S1 + 36) = prefactor_y * *(b + 363 * OS1_S1 + 20) -
                                       p_over_q * *(b + 453 * OS1_S1 + 20);
            *(b + 363 * OS1_S1 + 37) =
                prefactor_z * *(b + 363 * OS1_S1 + 20) -
                p_over_q * *(b + 454 * OS1_S1 + 20) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 20);
            *(b + 363 * OS1_S1 + 38) =
                prefactor_y * *(b + 363 * OS1_S1 + 21) -
                p_over_q * *(b + 453 * OS1_S1 + 21) +
                one_over_two_q * *(b + 363 * OS1_S1 + 10);
            *(b + 363 * OS1_S1 + 39) = prefactor_y * *(b + 363 * OS1_S1 + 22) -
                                       p_over_q * *(b + 453 * OS1_S1 + 22);
            *(b + 363 * OS1_S1 + 40) =
                prefactor_z * *(b + 363 * OS1_S1 + 22) -
                p_over_q * *(b + 454 * OS1_S1 + 22) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 22) +
                one_over_two_q * *(b + 363 * OS1_S1 + 10);
            *(b + 363 * OS1_S1 + 41) =
                prefactor_x * *(b + 363 * OS1_S1 + 26) -
                p_over_q * *(b + 441 * OS1_S1 + 26) +
                one_over_two_q * *(b + 363 * OS1_S1 + 16);
            *(b + 363 * OS1_S1 + 42) =
                prefactor_z * *(b + 363 * OS1_S1 + 23) -
                p_over_q * *(b + 454 * OS1_S1 + 23) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 23);
            *(b + 363 * OS1_S1 + 43) = prefactor_y * *(b + 363 * OS1_S1 + 25) -
                                       p_over_q * *(b + 453 * OS1_S1 + 25);
            *(b + 363 * OS1_S1 + 44) =
                prefactor_x * *(b + 363 * OS1_S1 + 29) -
                p_over_q * *(b + 441 * OS1_S1 + 29) +
                one_over_two_q * *(b + 363 * OS1_S1 + 19);
            *(b + 363 * OS1_S1 + 45) = prefactor_x * *(b + 363 * OS1_S1 + 30) -
                                       p_over_q * *(b + 441 * OS1_S1 + 30);
            *(b + 363 * OS1_S1 + 46) = prefactor_x * *(b + 363 * OS1_S1 + 31) -
                                       p_over_q * *(b + 441 * OS1_S1 + 31);
            *(b + 363 * OS1_S1 + 47) = prefactor_x * *(b + 363 * OS1_S1 + 32) -
                                       p_over_q * *(b + 441 * OS1_S1 + 32);
            *(b + 363 * OS1_S1 + 48) = prefactor_y * *(b + 363 * OS1_S1 + 29) -
                                       p_over_q * *(b + 453 * OS1_S1 + 29);
            *(b + 363 * OS1_S1 + 49) = prefactor_x * *(b + 363 * OS1_S1 + 34) -
                                       p_over_q * *(b + 441 * OS1_S1 + 34);
            *(b + 363 * OS1_S1 + 50) =
                prefactor_y * *(b + 363 * OS1_S1 + 30) -
                p_over_q * *(b + 453 * OS1_S1 + 30) +
                4 * one_over_two_q * *(b + 363 * OS1_S1 + 16);
            *(b + 363 * OS1_S1 + 51) =
                prefactor_z * *(b + 363 * OS1_S1 + 30) -
                p_over_q * *(b + 454 * OS1_S1 + 30) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 30);
            *(b + 363 * OS1_S1 + 52) =
                prefactor_z * *(b + 363 * OS1_S1 + 31) -
                p_over_q * *(b + 454 * OS1_S1 + 31) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 31) +
                one_over_two_q * *(b + 363 * OS1_S1 + 16);
            *(b + 363 * OS1_S1 + 53) =
                prefactor_y * *(b + 363 * OS1_S1 + 33) -
                p_over_q * *(b + 453 * OS1_S1 + 33) +
                one_over_two_q * *(b + 363 * OS1_S1 + 19);
            *(b + 363 * OS1_S1 + 54) = prefactor_y * *(b + 363 * OS1_S1 + 34) -
                                       p_over_q * *(b + 453 * OS1_S1 + 34);
            *(b + 363 * OS1_S1 + 55) =
                prefactor_z * *(b + 363 * OS1_S1 + 34) -
                p_over_q * *(b + 454 * OS1_S1 + 34) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 34) +
                4 * one_over_two_q * *(b + 363 * OS1_S1 + 19);
            return;
        }
    }
}
