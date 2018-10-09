/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_11_4(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 286 * OS1_S1 + 20) =
                prefactor_x * *(b + 286 * OS1_S1 + 10) -
                p_over_q * *(b + 364 * OS1_S1 + 10) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 286 * OS1_S1 + 4);
            *(b + 286 * OS1_S1 + 21) = prefactor_y * *(b + 286 * OS1_S1 + 10) -
                                       p_over_q * *(b + 365 * OS1_S1 + 10);
            *(b + 286 * OS1_S1 + 22) = prefactor_z * *(b + 286 * OS1_S1 + 10) -
                                       p_over_q * *(b + 366 * OS1_S1 + 10);
            *(b + 286 * OS1_S1 + 23) = prefactor_y * *(b + 286 * OS1_S1 + 11) -
                                       p_over_q * *(b + 365 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 286 * OS1_S1 + 4);
            *(b + 286 * OS1_S1 + 24) = prefactor_z * *(b + 286 * OS1_S1 + 11) -
                                       p_over_q * *(b + 366 * OS1_S1 + 11);
            *(b + 286 * OS1_S1 + 25) = prefactor_z * *(b + 286 * OS1_S1 + 12) -
                                       p_over_q * *(b + 366 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 286 * OS1_S1 + 4);
            *(b + 286 * OS1_S1 + 26) =
                prefactor_x * *(b + 286 * OS1_S1 + 16) -
                p_over_q * *(b + 364 * OS1_S1 + 16) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 16);
            *(b + 286 * OS1_S1 + 27) = prefactor_z * *(b + 286 * OS1_S1 + 13) -
                                       p_over_q * *(b + 366 * OS1_S1 + 13);
            *(b + 286 * OS1_S1 + 28) = prefactor_y * *(b + 286 * OS1_S1 + 15) -
                                       p_over_q * *(b + 365 * OS1_S1 + 15);
            *(b + 286 * OS1_S1 + 29) =
                prefactor_x * *(b + 286 * OS1_S1 + 19) -
                p_over_q * *(b + 364 * OS1_S1 + 19) +
                11 * one_over_two_q * *(b + 220 * OS1_S1 + 19);
            *(b + 286 * OS1_S1 + 30) =
                prefactor_y * *(b + 286 * OS1_S1 + 16) -
                p_over_q * *(b + 365 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 286 * OS1_S1 + 7);
            *(b + 286 * OS1_S1 + 31) = prefactor_z * *(b + 286 * OS1_S1 + 16) -
                                       p_over_q * *(b + 366 * OS1_S1 + 16);
            *(b + 286 * OS1_S1 + 32) = prefactor_z * *(b + 286 * OS1_S1 + 17) -
                                       p_over_q * *(b + 366 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 286 * OS1_S1 + 7);
            *(b + 286 * OS1_S1 + 33) = prefactor_y * *(b + 286 * OS1_S1 + 19) -
                                       p_over_q * *(b + 365 * OS1_S1 + 19);
            *(b + 286 * OS1_S1 + 34) =
                prefactor_z * *(b + 286 * OS1_S1 + 19) -
                p_over_q * *(b + 366 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 286 * OS1_S1 + 9);
            *(b + 287 * OS1_S1 + 20) =
                prefactor_x * *(b + 287 * OS1_S1 + 10) -
                p_over_q * *(b + 365 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 287 * OS1_S1 + 4);
            *(b + 287 * OS1_S1 + 21) =
                prefactor_y * *(b + 287 * OS1_S1 + 10) -
                p_over_q * *(b + 367 * OS1_S1 + 10) +
                one_over_two_q * *(b + 220 * OS1_S1 + 10);
            *(b + 287 * OS1_S1 + 22) = prefactor_z * *(b + 287 * OS1_S1 + 10) -
                                       p_over_q * *(b + 368 * OS1_S1 + 10);
            *(b + 287 * OS1_S1 + 23) =
                prefactor_y * *(b + 287 * OS1_S1 + 11) -
                p_over_q * *(b + 367 * OS1_S1 + 11) +
                one_over_two_q * *(b + 220 * OS1_S1 + 11) +
                one_over_two_q * *(b + 287 * OS1_S1 + 4);
            *(b + 287 * OS1_S1 + 24) = prefactor_z * *(b + 287 * OS1_S1 + 11) -
                                       p_over_q * *(b + 368 * OS1_S1 + 11);
            *(b + 287 * OS1_S1 + 25) = prefactor_z * *(b + 287 * OS1_S1 + 12) -
                                       p_over_q * *(b + 368 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 287 * OS1_S1 + 4);
            *(b + 287 * OS1_S1 + 26) =
                prefactor_x * *(b + 287 * OS1_S1 + 16) -
                p_over_q * *(b + 365 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 16);
            *(b + 287 * OS1_S1 + 27) = prefactor_z * *(b + 287 * OS1_S1 + 13) -
                                       p_over_q * *(b + 368 * OS1_S1 + 13);
            *(b + 287 * OS1_S1 + 28) =
                prefactor_y * *(b + 287 * OS1_S1 + 15) -
                p_over_q * *(b + 367 * OS1_S1 + 15) +
                one_over_two_q * *(b + 220 * OS1_S1 + 15);
            *(b + 287 * OS1_S1 + 29) =
                prefactor_x * *(b + 287 * OS1_S1 + 19) -
                p_over_q * *(b + 365 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 221 * OS1_S1 + 19);
            *(b + 287 * OS1_S1 + 30) =
                prefactor_y * *(b + 287 * OS1_S1 + 16) -
                p_over_q * *(b + 367 * OS1_S1 + 16) +
                one_over_two_q * *(b + 220 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 287 * OS1_S1 + 7);
            *(b + 287 * OS1_S1 + 31) = prefactor_z * *(b + 287 * OS1_S1 + 16) -
                                       p_over_q * *(b + 368 * OS1_S1 + 16);
            *(b + 287 * OS1_S1 + 32) = prefactor_z * *(b + 287 * OS1_S1 + 17) -
                                       p_over_q * *(b + 368 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 287 * OS1_S1 + 7);
            *(b + 287 * OS1_S1 + 33) =
                prefactor_y * *(b + 287 * OS1_S1 + 19) -
                p_over_q * *(b + 367 * OS1_S1 + 19) +
                one_over_two_q * *(b + 220 * OS1_S1 + 19);
            *(b + 287 * OS1_S1 + 34) =
                prefactor_z * *(b + 287 * OS1_S1 + 19) -
                p_over_q * *(b + 368 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 287 * OS1_S1 + 9);
            *(b + 288 * OS1_S1 + 20) =
                prefactor_x * *(b + 288 * OS1_S1 + 10) -
                p_over_q * *(b + 366 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 288 * OS1_S1 + 4);
            *(b + 288 * OS1_S1 + 21) = prefactor_y * *(b + 288 * OS1_S1 + 10) -
                                       p_over_q * *(b + 368 * OS1_S1 + 10);
            *(b + 288 * OS1_S1 + 22) =
                prefactor_z * *(b + 288 * OS1_S1 + 10) -
                p_over_q * *(b + 369 * OS1_S1 + 10) +
                one_over_two_q * *(b + 220 * OS1_S1 + 10);
            *(b + 288 * OS1_S1 + 23) = prefactor_y * *(b + 288 * OS1_S1 + 11) -
                                       p_over_q * *(b + 368 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 288 * OS1_S1 + 4);
            *(b + 288 * OS1_S1 + 24) = prefactor_y * *(b + 288 * OS1_S1 + 12) -
                                       p_over_q * *(b + 368 * OS1_S1 + 12);
            *(b + 288 * OS1_S1 + 25) =
                prefactor_z * *(b + 288 * OS1_S1 + 12) -
                p_over_q * *(b + 369 * OS1_S1 + 12) +
                one_over_two_q * *(b + 220 * OS1_S1 + 12) +
                one_over_two_q * *(b + 288 * OS1_S1 + 4);
            *(b + 288 * OS1_S1 + 26) =
                prefactor_x * *(b + 288 * OS1_S1 + 16) -
                p_over_q * *(b + 366 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 16);
            *(b + 288 * OS1_S1 + 27) =
                prefactor_z * *(b + 288 * OS1_S1 + 13) -
                p_over_q * *(b + 369 * OS1_S1 + 13) +
                one_over_two_q * *(b + 220 * OS1_S1 + 13);
            *(b + 288 * OS1_S1 + 28) = prefactor_y * *(b + 288 * OS1_S1 + 15) -
                                       p_over_q * *(b + 368 * OS1_S1 + 15);
            *(b + 288 * OS1_S1 + 29) =
                prefactor_x * *(b + 288 * OS1_S1 + 19) -
                p_over_q * *(b + 366 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 222 * OS1_S1 + 19);
            *(b + 288 * OS1_S1 + 30) =
                prefactor_y * *(b + 288 * OS1_S1 + 16) -
                p_over_q * *(b + 368 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 288 * OS1_S1 + 7);
            *(b + 288 * OS1_S1 + 31) =
                prefactor_z * *(b + 288 * OS1_S1 + 16) -
                p_over_q * *(b + 369 * OS1_S1 + 16) +
                one_over_two_q * *(b + 220 * OS1_S1 + 16);
            *(b + 288 * OS1_S1 + 32) = prefactor_y * *(b + 288 * OS1_S1 + 18) -
                                       p_over_q * *(b + 368 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 288 * OS1_S1 + 9);
            *(b + 288 * OS1_S1 + 33) = prefactor_y * *(b + 288 * OS1_S1 + 19) -
                                       p_over_q * *(b + 368 * OS1_S1 + 19);
            *(b + 288 * OS1_S1 + 34) =
                prefactor_z * *(b + 288 * OS1_S1 + 19) -
                p_over_q * *(b + 369 * OS1_S1 + 19) +
                one_over_two_q * *(b + 220 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 288 * OS1_S1 + 9);
            *(b + 289 * OS1_S1 + 20) =
                prefactor_x * *(b + 289 * OS1_S1 + 10) -
                p_over_q * *(b + 367 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 4);
            *(b + 289 * OS1_S1 + 21) =
                prefactor_y * *(b + 289 * OS1_S1 + 10) -
                p_over_q * *(b + 370 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 10);
            *(b + 289 * OS1_S1 + 22) = prefactor_z * *(b + 289 * OS1_S1 + 10) -
                                       p_over_q * *(b + 371 * OS1_S1 + 10);
            *(b + 289 * OS1_S1 + 23) =
                prefactor_y * *(b + 289 * OS1_S1 + 11) -
                p_over_q * *(b + 370 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 11) +
                one_over_two_q * *(b + 289 * OS1_S1 + 4);
            *(b + 289 * OS1_S1 + 24) = prefactor_z * *(b + 289 * OS1_S1 + 11) -
                                       p_over_q * *(b + 371 * OS1_S1 + 11);
            *(b + 289 * OS1_S1 + 25) = prefactor_z * *(b + 289 * OS1_S1 + 12) -
                                       p_over_q * *(b + 371 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 289 * OS1_S1 + 4);
            *(b + 289 * OS1_S1 + 26) =
                prefactor_x * *(b + 289 * OS1_S1 + 16) -
                p_over_q * *(b + 367 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 16);
            *(b + 289 * OS1_S1 + 27) = prefactor_z * *(b + 289 * OS1_S1 + 13) -
                                       p_over_q * *(b + 371 * OS1_S1 + 13);
            *(b + 289 * OS1_S1 + 28) =
                prefactor_y * *(b + 289 * OS1_S1 + 15) -
                p_over_q * *(b + 370 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 15);
            *(b + 289 * OS1_S1 + 29) =
                prefactor_x * *(b + 289 * OS1_S1 + 19) -
                p_over_q * *(b + 367 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 223 * OS1_S1 + 19);
            *(b + 289 * OS1_S1 + 30) =
                prefactor_y * *(b + 289 * OS1_S1 + 16) -
                p_over_q * *(b + 370 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 7);
            *(b + 289 * OS1_S1 + 31) = prefactor_z * *(b + 289 * OS1_S1 + 16) -
                                       p_over_q * *(b + 371 * OS1_S1 + 16);
            *(b + 289 * OS1_S1 + 32) = prefactor_z * *(b + 289 * OS1_S1 + 17) -
                                       p_over_q * *(b + 371 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 289 * OS1_S1 + 7);
            *(b + 289 * OS1_S1 + 33) =
                prefactor_y * *(b + 289 * OS1_S1 + 19) -
                p_over_q * *(b + 370 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 221 * OS1_S1 + 19);
            *(b + 289 * OS1_S1 + 34) =
                prefactor_z * *(b + 289 * OS1_S1 + 19) -
                p_over_q * *(b + 371 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 9);
            *(b + 290 * OS1_S1 + 20) =
                prefactor_x * *(b + 290 * OS1_S1 + 10) -
                p_over_q * *(b + 368 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 290 * OS1_S1 + 4);
            *(b + 290 * OS1_S1 + 21) =
                prefactor_y * *(b + 290 * OS1_S1 + 10) -
                p_over_q * *(b + 371 * OS1_S1 + 10) +
                one_over_two_q * *(b + 222 * OS1_S1 + 10);
            *(b + 290 * OS1_S1 + 22) =
                prefactor_z * *(b + 290 * OS1_S1 + 10) -
                p_over_q * *(b + 372 * OS1_S1 + 10) +
                one_over_two_q * *(b + 221 * OS1_S1 + 10);
            *(b + 290 * OS1_S1 + 23) =
                prefactor_y * *(b + 290 * OS1_S1 + 11) -
                p_over_q * *(b + 371 * OS1_S1 + 11) +
                one_over_two_q * *(b + 222 * OS1_S1 + 11) +
                one_over_two_q * *(b + 290 * OS1_S1 + 4);
            *(b + 290 * OS1_S1 + 24) =
                prefactor_z * *(b + 290 * OS1_S1 + 11) -
                p_over_q * *(b + 372 * OS1_S1 + 11) +
                one_over_two_q * *(b + 221 * OS1_S1 + 11);
            *(b + 290 * OS1_S1 + 25) =
                prefactor_z * *(b + 290 * OS1_S1 + 12) -
                p_over_q * *(b + 372 * OS1_S1 + 12) +
                one_over_two_q * *(b + 221 * OS1_S1 + 12) +
                one_over_two_q * *(b + 290 * OS1_S1 + 4);
            *(b + 290 * OS1_S1 + 26) =
                prefactor_x * *(b + 290 * OS1_S1 + 16) -
                p_over_q * *(b + 368 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 16);
            *(b + 290 * OS1_S1 + 27) =
                prefactor_z * *(b + 290 * OS1_S1 + 13) -
                p_over_q * *(b + 372 * OS1_S1 + 13) +
                one_over_two_q * *(b + 221 * OS1_S1 + 13);
            *(b + 290 * OS1_S1 + 28) =
                prefactor_y * *(b + 290 * OS1_S1 + 15) -
                p_over_q * *(b + 371 * OS1_S1 + 15) +
                one_over_two_q * *(b + 222 * OS1_S1 + 15);
            *(b + 290 * OS1_S1 + 29) =
                prefactor_x * *(b + 290 * OS1_S1 + 19) -
                p_over_q * *(b + 368 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 224 * OS1_S1 + 19);
            *(b + 290 * OS1_S1 + 30) =
                prefactor_y * *(b + 290 * OS1_S1 + 16) -
                p_over_q * *(b + 371 * OS1_S1 + 16) +
                one_over_two_q * *(b + 222 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 290 * OS1_S1 + 7);
            *(b + 290 * OS1_S1 + 31) =
                prefactor_z * *(b + 290 * OS1_S1 + 16) -
                p_over_q * *(b + 372 * OS1_S1 + 16) +
                one_over_two_q * *(b + 221 * OS1_S1 + 16);
            *(b + 290 * OS1_S1 + 32) =
                prefactor_z * *(b + 290 * OS1_S1 + 17) -
                p_over_q * *(b + 372 * OS1_S1 + 17) +
                one_over_two_q * *(b + 221 * OS1_S1 + 17) +
                one_over_two_q * *(b + 290 * OS1_S1 + 7);
            *(b + 290 * OS1_S1 + 33) =
                prefactor_y * *(b + 290 * OS1_S1 + 19) -
                p_over_q * *(b + 371 * OS1_S1 + 19) +
                one_over_two_q * *(b + 222 * OS1_S1 + 19);
            *(b + 290 * OS1_S1 + 34) =
                prefactor_z * *(b + 290 * OS1_S1 + 19) -
                p_over_q * *(b + 372 * OS1_S1 + 19) +
                one_over_two_q * *(b + 221 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 290 * OS1_S1 + 9);
            *(b + 291 * OS1_S1 + 20) =
                prefactor_x * *(b + 291 * OS1_S1 + 10) -
                p_over_q * *(b + 369 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 4);
            *(b + 291 * OS1_S1 + 21) = prefactor_y * *(b + 291 * OS1_S1 + 10) -
                                       p_over_q * *(b + 372 * OS1_S1 + 10);
            *(b + 291 * OS1_S1 + 22) =
                prefactor_z * *(b + 291 * OS1_S1 + 10) -
                p_over_q * *(b + 373 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 10);
            *(b + 291 * OS1_S1 + 23) = prefactor_y * *(b + 291 * OS1_S1 + 11) -
                                       p_over_q * *(b + 372 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 291 * OS1_S1 + 4);
            *(b + 291 * OS1_S1 + 24) = prefactor_y * *(b + 291 * OS1_S1 + 12) -
                                       p_over_q * *(b + 372 * OS1_S1 + 12);
            *(b + 291 * OS1_S1 + 25) =
                prefactor_z * *(b + 291 * OS1_S1 + 12) -
                p_over_q * *(b + 373 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 12) +
                one_over_two_q * *(b + 291 * OS1_S1 + 4);
            *(b + 291 * OS1_S1 + 26) =
                prefactor_x * *(b + 291 * OS1_S1 + 16) -
                p_over_q * *(b + 369 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 16);
            *(b + 291 * OS1_S1 + 27) =
                prefactor_z * *(b + 291 * OS1_S1 + 13) -
                p_over_q * *(b + 373 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 13);
            *(b + 291 * OS1_S1 + 28) = prefactor_y * *(b + 291 * OS1_S1 + 15) -
                                       p_over_q * *(b + 372 * OS1_S1 + 15);
            *(b + 291 * OS1_S1 + 29) =
                prefactor_x * *(b + 291 * OS1_S1 + 19) -
                p_over_q * *(b + 369 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 225 * OS1_S1 + 19);
            *(b + 291 * OS1_S1 + 30) =
                prefactor_y * *(b + 291 * OS1_S1 + 16) -
                p_over_q * *(b + 372 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 7);
            *(b + 291 * OS1_S1 + 31) =
                prefactor_z * *(b + 291 * OS1_S1 + 16) -
                p_over_q * *(b + 373 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 16);
            *(b + 291 * OS1_S1 + 32) = prefactor_y * *(b + 291 * OS1_S1 + 18) -
                                       p_over_q * *(b + 372 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 291 * OS1_S1 + 9);
            *(b + 291 * OS1_S1 + 33) = prefactor_y * *(b + 291 * OS1_S1 + 19) -
                                       p_over_q * *(b + 372 * OS1_S1 + 19);
            *(b + 291 * OS1_S1 + 34) =
                prefactor_z * *(b + 291 * OS1_S1 + 19) -
                p_over_q * *(b + 373 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 222 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 9);
            *(b + 292 * OS1_S1 + 20) =
                prefactor_x * *(b + 292 * OS1_S1 + 10) -
                p_over_q * *(b + 370 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 292 * OS1_S1 + 4);
            *(b + 292 * OS1_S1 + 21) =
                prefactor_y * *(b + 292 * OS1_S1 + 10) -
                p_over_q * *(b + 374 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 10);
            *(b + 292 * OS1_S1 + 22) = prefactor_z * *(b + 292 * OS1_S1 + 10) -
                                       p_over_q * *(b + 375 * OS1_S1 + 10);
            *(b + 292 * OS1_S1 + 23) =
                prefactor_y * *(b + 292 * OS1_S1 + 11) -
                p_over_q * *(b + 374 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 11) +
                one_over_two_q * *(b + 292 * OS1_S1 + 4);
            *(b + 292 * OS1_S1 + 24) = prefactor_z * *(b + 292 * OS1_S1 + 11) -
                                       p_over_q * *(b + 375 * OS1_S1 + 11);
            *(b + 292 * OS1_S1 + 25) = prefactor_z * *(b + 292 * OS1_S1 + 12) -
                                       p_over_q * *(b + 375 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 292 * OS1_S1 + 4);
            *(b + 292 * OS1_S1 + 26) =
                prefactor_x * *(b + 292 * OS1_S1 + 16) -
                p_over_q * *(b + 370 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 16);
            *(b + 292 * OS1_S1 + 27) = prefactor_z * *(b + 292 * OS1_S1 + 13) -
                                       p_over_q * *(b + 375 * OS1_S1 + 13);
            *(b + 292 * OS1_S1 + 28) =
                prefactor_y * *(b + 292 * OS1_S1 + 15) -
                p_over_q * *(b + 374 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 15);
            *(b + 292 * OS1_S1 + 29) =
                prefactor_x * *(b + 292 * OS1_S1 + 19) -
                p_over_q * *(b + 370 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 226 * OS1_S1 + 19);
            *(b + 292 * OS1_S1 + 30) =
                prefactor_y * *(b + 292 * OS1_S1 + 16) -
                p_over_q * *(b + 374 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 292 * OS1_S1 + 7);
            *(b + 292 * OS1_S1 + 31) = prefactor_z * *(b + 292 * OS1_S1 + 16) -
                                       p_over_q * *(b + 375 * OS1_S1 + 16);
            *(b + 292 * OS1_S1 + 32) = prefactor_z * *(b + 292 * OS1_S1 + 17) -
                                       p_over_q * *(b + 375 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 292 * OS1_S1 + 7);
            *(b + 292 * OS1_S1 + 33) =
                prefactor_y * *(b + 292 * OS1_S1 + 19) -
                p_over_q * *(b + 374 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 223 * OS1_S1 + 19);
            *(b + 292 * OS1_S1 + 34) =
                prefactor_z * *(b + 292 * OS1_S1 + 19) -
                p_over_q * *(b + 375 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 292 * OS1_S1 + 9);
            *(b + 293 * OS1_S1 + 20) =
                prefactor_x * *(b + 293 * OS1_S1 + 10) -
                p_over_q * *(b + 371 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 4);
            *(b + 293 * OS1_S1 + 21) =
                prefactor_y * *(b + 293 * OS1_S1 + 10) -
                p_over_q * *(b + 375 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 10);
            *(b + 293 * OS1_S1 + 22) =
                prefactor_z * *(b + 293 * OS1_S1 + 10) -
                p_over_q * *(b + 376 * OS1_S1 + 10) +
                one_over_two_q * *(b + 223 * OS1_S1 + 10);
            *(b + 293 * OS1_S1 + 23) =
                prefactor_y * *(b + 293 * OS1_S1 + 11) -
                p_over_q * *(b + 375 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 11) +
                one_over_two_q * *(b + 293 * OS1_S1 + 4);
            *(b + 293 * OS1_S1 + 24) =
                prefactor_z * *(b + 293 * OS1_S1 + 11) -
                p_over_q * *(b + 376 * OS1_S1 + 11) +
                one_over_two_q * *(b + 223 * OS1_S1 + 11);
            *(b + 293 * OS1_S1 + 25) =
                prefactor_z * *(b + 293 * OS1_S1 + 12) -
                p_over_q * *(b + 376 * OS1_S1 + 12) +
                one_over_two_q * *(b + 223 * OS1_S1 + 12) +
                one_over_two_q * *(b + 293 * OS1_S1 + 4);
            *(b + 293 * OS1_S1 + 26) =
                prefactor_x * *(b + 293 * OS1_S1 + 16) -
                p_over_q * *(b + 371 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 16);
            *(b + 293 * OS1_S1 + 27) =
                prefactor_z * *(b + 293 * OS1_S1 + 13) -
                p_over_q * *(b + 376 * OS1_S1 + 13) +
                one_over_two_q * *(b + 223 * OS1_S1 + 13);
            *(b + 293 * OS1_S1 + 28) =
                prefactor_y * *(b + 293 * OS1_S1 + 15) -
                p_over_q * *(b + 375 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 15);
            *(b + 293 * OS1_S1 + 29) =
                prefactor_x * *(b + 293 * OS1_S1 + 19) -
                p_over_q * *(b + 371 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 227 * OS1_S1 + 19);
            *(b + 293 * OS1_S1 + 30) =
                prefactor_y * *(b + 293 * OS1_S1 + 16) -
                p_over_q * *(b + 375 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 7);
            *(b + 293 * OS1_S1 + 31) =
                prefactor_z * *(b + 293 * OS1_S1 + 16) -
                p_over_q * *(b + 376 * OS1_S1 + 16) +
                one_over_two_q * *(b + 223 * OS1_S1 + 16);
            *(b + 293 * OS1_S1 + 32) =
                prefactor_z * *(b + 293 * OS1_S1 + 17) -
                p_over_q * *(b + 376 * OS1_S1 + 17) +
                one_over_two_q * *(b + 223 * OS1_S1 + 17) +
                one_over_two_q * *(b + 293 * OS1_S1 + 7);
            *(b + 293 * OS1_S1 + 33) =
                prefactor_y * *(b + 293 * OS1_S1 + 19) -
                p_over_q * *(b + 375 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 19);
            *(b + 293 * OS1_S1 + 34) =
                prefactor_z * *(b + 293 * OS1_S1 + 19) -
                p_over_q * *(b + 376 * OS1_S1 + 19) +
                one_over_two_q * *(b + 223 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 9);
            *(b + 294 * OS1_S1 + 20) =
                prefactor_x * *(b + 294 * OS1_S1 + 10) -
                p_over_q * *(b + 372 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 4);
            *(b + 294 * OS1_S1 + 21) =
                prefactor_y * *(b + 294 * OS1_S1 + 10) -
                p_over_q * *(b + 376 * OS1_S1 + 10) +
                one_over_two_q * *(b + 225 * OS1_S1 + 10);
            *(b + 294 * OS1_S1 + 22) =
                prefactor_z * *(b + 294 * OS1_S1 + 10) -
                p_over_q * *(b + 377 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 10);
            *(b + 294 * OS1_S1 + 23) =
                prefactor_y * *(b + 294 * OS1_S1 + 11) -
                p_over_q * *(b + 376 * OS1_S1 + 11) +
                one_over_two_q * *(b + 225 * OS1_S1 + 11) +
                one_over_two_q * *(b + 294 * OS1_S1 + 4);
            *(b + 294 * OS1_S1 + 24) =
                prefactor_y * *(b + 294 * OS1_S1 + 12) -
                p_over_q * *(b + 376 * OS1_S1 + 12) +
                one_over_two_q * *(b + 225 * OS1_S1 + 12);
            *(b + 294 * OS1_S1 + 25) =
                prefactor_z * *(b + 294 * OS1_S1 + 12) -
                p_over_q * *(b + 377 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 12) +
                one_over_two_q * *(b + 294 * OS1_S1 + 4);
            *(b + 294 * OS1_S1 + 26) =
                prefactor_x * *(b + 294 * OS1_S1 + 16) -
                p_over_q * *(b + 372 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 16);
            *(b + 294 * OS1_S1 + 27) =
                prefactor_z * *(b + 294 * OS1_S1 + 13) -
                p_over_q * *(b + 377 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 13);
            *(b + 294 * OS1_S1 + 28) =
                prefactor_y * *(b + 294 * OS1_S1 + 15) -
                p_over_q * *(b + 376 * OS1_S1 + 15) +
                one_over_two_q * *(b + 225 * OS1_S1 + 15);
            *(b + 294 * OS1_S1 + 29) =
                prefactor_x * *(b + 294 * OS1_S1 + 19) -
                p_over_q * *(b + 372 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 228 * OS1_S1 + 19);
            *(b + 294 * OS1_S1 + 30) =
                prefactor_y * *(b + 294 * OS1_S1 + 16) -
                p_over_q * *(b + 376 * OS1_S1 + 16) +
                one_over_two_q * *(b + 225 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 7);
            *(b + 294 * OS1_S1 + 31) =
                prefactor_z * *(b + 294 * OS1_S1 + 16) -
                p_over_q * *(b + 377 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 16);
            *(b + 294 * OS1_S1 + 32) =
                prefactor_y * *(b + 294 * OS1_S1 + 18) -
                p_over_q * *(b + 376 * OS1_S1 + 18) +
                one_over_two_q * *(b + 225 * OS1_S1 + 18) +
                one_over_two_q * *(b + 294 * OS1_S1 + 9);
            *(b + 294 * OS1_S1 + 33) =
                prefactor_y * *(b + 294 * OS1_S1 + 19) -
                p_over_q * *(b + 376 * OS1_S1 + 19) +
                one_over_two_q * *(b + 225 * OS1_S1 + 19);
            *(b + 294 * OS1_S1 + 34) =
                prefactor_z * *(b + 294 * OS1_S1 + 19) -
                p_over_q * *(b + 377 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 224 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 9);
            *(b + 295 * OS1_S1 + 20) =
                prefactor_x * *(b + 295 * OS1_S1 + 10) -
                p_over_q * *(b + 373 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 295 * OS1_S1 + 4);
            *(b + 295 * OS1_S1 + 21) = prefactor_y * *(b + 295 * OS1_S1 + 10) -
                                       p_over_q * *(b + 377 * OS1_S1 + 10);
            *(b + 295 * OS1_S1 + 22) =
                prefactor_z * *(b + 295 * OS1_S1 + 10) -
                p_over_q * *(b + 378 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 10);
            *(b + 295 * OS1_S1 + 23) = prefactor_y * *(b + 295 * OS1_S1 + 11) -
                                       p_over_q * *(b + 377 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 295 * OS1_S1 + 4);
            *(b + 295 * OS1_S1 + 24) = prefactor_y * *(b + 295 * OS1_S1 + 12) -
                                       p_over_q * *(b + 377 * OS1_S1 + 12);
            *(b + 295 * OS1_S1 + 25) =
                prefactor_z * *(b + 295 * OS1_S1 + 12) -
                p_over_q * *(b + 378 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 12) +
                one_over_two_q * *(b + 295 * OS1_S1 + 4);
            *(b + 295 * OS1_S1 + 26) =
                prefactor_x * *(b + 295 * OS1_S1 + 16) -
                p_over_q * *(b + 373 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 16);
            *(b + 295 * OS1_S1 + 27) =
                prefactor_z * *(b + 295 * OS1_S1 + 13) -
                p_over_q * *(b + 378 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 13);
            *(b + 295 * OS1_S1 + 28) = prefactor_y * *(b + 295 * OS1_S1 + 15) -
                                       p_over_q * *(b + 377 * OS1_S1 + 15);
            *(b + 295 * OS1_S1 + 29) =
                prefactor_x * *(b + 295 * OS1_S1 + 19) -
                p_over_q * *(b + 373 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 229 * OS1_S1 + 19);
            *(b + 295 * OS1_S1 + 30) =
                prefactor_y * *(b + 295 * OS1_S1 + 16) -
                p_over_q * *(b + 377 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 295 * OS1_S1 + 7);
            *(b + 295 * OS1_S1 + 31) =
                prefactor_z * *(b + 295 * OS1_S1 + 16) -
                p_over_q * *(b + 378 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 16);
            *(b + 295 * OS1_S1 + 32) = prefactor_y * *(b + 295 * OS1_S1 + 18) -
                                       p_over_q * *(b + 377 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 295 * OS1_S1 + 9);
            *(b + 295 * OS1_S1 + 33) = prefactor_y * *(b + 295 * OS1_S1 + 19) -
                                       p_over_q * *(b + 377 * OS1_S1 + 19);
            *(b + 295 * OS1_S1 + 34) =
                prefactor_z * *(b + 295 * OS1_S1 + 19) -
                p_over_q * *(b + 378 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 225 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 295 * OS1_S1 + 9);
            *(b + 296 * OS1_S1 + 20) =
                prefactor_x * *(b + 296 * OS1_S1 + 10) -
                p_over_q * *(b + 374 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 296 * OS1_S1 + 4);
            *(b + 296 * OS1_S1 + 21) =
                prefactor_y * *(b + 296 * OS1_S1 + 10) -
                p_over_q * *(b + 379 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 10);
            *(b + 296 * OS1_S1 + 22) = prefactor_z * *(b + 296 * OS1_S1 + 10) -
                                       p_over_q * *(b + 380 * OS1_S1 + 10);
            *(b + 296 * OS1_S1 + 23) =
                prefactor_y * *(b + 296 * OS1_S1 + 11) -
                p_over_q * *(b + 379 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 11) +
                one_over_two_q * *(b + 296 * OS1_S1 + 4);
            *(b + 296 * OS1_S1 + 24) = prefactor_z * *(b + 296 * OS1_S1 + 11) -
                                       p_over_q * *(b + 380 * OS1_S1 + 11);
            *(b + 296 * OS1_S1 + 25) = prefactor_z * *(b + 296 * OS1_S1 + 12) -
                                       p_over_q * *(b + 380 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 296 * OS1_S1 + 4);
            *(b + 296 * OS1_S1 + 26) =
                prefactor_x * *(b + 296 * OS1_S1 + 16) -
                p_over_q * *(b + 374 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 16);
            *(b + 296 * OS1_S1 + 27) = prefactor_z * *(b + 296 * OS1_S1 + 13) -
                                       p_over_q * *(b + 380 * OS1_S1 + 13);
            *(b + 296 * OS1_S1 + 28) =
                prefactor_y * *(b + 296 * OS1_S1 + 15) -
                p_over_q * *(b + 379 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 15);
            *(b + 296 * OS1_S1 + 29) =
                prefactor_x * *(b + 296 * OS1_S1 + 19) -
                p_over_q * *(b + 374 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 230 * OS1_S1 + 19);
            *(b + 296 * OS1_S1 + 30) =
                prefactor_y * *(b + 296 * OS1_S1 + 16) -
                p_over_q * *(b + 379 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 296 * OS1_S1 + 7);
            *(b + 296 * OS1_S1 + 31) = prefactor_z * *(b + 296 * OS1_S1 + 16) -
                                       p_over_q * *(b + 380 * OS1_S1 + 16);
            *(b + 296 * OS1_S1 + 32) = prefactor_z * *(b + 296 * OS1_S1 + 17) -
                                       p_over_q * *(b + 380 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 296 * OS1_S1 + 7);
            *(b + 296 * OS1_S1 + 33) =
                prefactor_y * *(b + 296 * OS1_S1 + 19) -
                p_over_q * *(b + 379 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 226 * OS1_S1 + 19);
            *(b + 296 * OS1_S1 + 34) =
                prefactor_z * *(b + 296 * OS1_S1 + 19) -
                p_over_q * *(b + 380 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 296 * OS1_S1 + 9);
            *(b + 297 * OS1_S1 + 20) =
                prefactor_x * *(b + 297 * OS1_S1 + 10) -
                p_over_q * *(b + 375 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 297 * OS1_S1 + 4);
            *(b + 297 * OS1_S1 + 21) =
                prefactor_y * *(b + 297 * OS1_S1 + 10) -
                p_over_q * *(b + 380 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 10);
            *(b + 297 * OS1_S1 + 22) =
                prefactor_z * *(b + 297 * OS1_S1 + 10) -
                p_over_q * *(b + 381 * OS1_S1 + 10) +
                one_over_two_q * *(b + 226 * OS1_S1 + 10);
            *(b + 297 * OS1_S1 + 23) =
                prefactor_y * *(b + 297 * OS1_S1 + 11) -
                p_over_q * *(b + 380 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 11) +
                one_over_two_q * *(b + 297 * OS1_S1 + 4);
            *(b + 297 * OS1_S1 + 24) =
                prefactor_z * *(b + 297 * OS1_S1 + 11) -
                p_over_q * *(b + 381 * OS1_S1 + 11) +
                one_over_two_q * *(b + 226 * OS1_S1 + 11);
            *(b + 297 * OS1_S1 + 25) =
                prefactor_z * *(b + 297 * OS1_S1 + 12) -
                p_over_q * *(b + 381 * OS1_S1 + 12) +
                one_over_two_q * *(b + 226 * OS1_S1 + 12) +
                one_over_two_q * *(b + 297 * OS1_S1 + 4);
            *(b + 297 * OS1_S1 + 26) =
                prefactor_x * *(b + 297 * OS1_S1 + 16) -
                p_over_q * *(b + 375 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 16);
            *(b + 297 * OS1_S1 + 27) =
                prefactor_z * *(b + 297 * OS1_S1 + 13) -
                p_over_q * *(b + 381 * OS1_S1 + 13) +
                one_over_two_q * *(b + 226 * OS1_S1 + 13);
            *(b + 297 * OS1_S1 + 28) =
                prefactor_y * *(b + 297 * OS1_S1 + 15) -
                p_over_q * *(b + 380 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 15);
            *(b + 297 * OS1_S1 + 29) =
                prefactor_x * *(b + 297 * OS1_S1 + 19) -
                p_over_q * *(b + 375 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 231 * OS1_S1 + 19);
            *(b + 297 * OS1_S1 + 30) =
                prefactor_y * *(b + 297 * OS1_S1 + 16) -
                p_over_q * *(b + 380 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 297 * OS1_S1 + 7);
            *(b + 297 * OS1_S1 + 31) =
                prefactor_z * *(b + 297 * OS1_S1 + 16) -
                p_over_q * *(b + 381 * OS1_S1 + 16) +
                one_over_two_q * *(b + 226 * OS1_S1 + 16);
            *(b + 297 * OS1_S1 + 32) =
                prefactor_z * *(b + 297 * OS1_S1 + 17) -
                p_over_q * *(b + 381 * OS1_S1 + 17) +
                one_over_two_q * *(b + 226 * OS1_S1 + 17) +
                one_over_two_q * *(b + 297 * OS1_S1 + 7);
            *(b + 297 * OS1_S1 + 33) =
                prefactor_y * *(b + 297 * OS1_S1 + 19) -
                p_over_q * *(b + 380 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 227 * OS1_S1 + 19);
            *(b + 297 * OS1_S1 + 34) =
                prefactor_z * *(b + 297 * OS1_S1 + 19) -
                p_over_q * *(b + 381 * OS1_S1 + 19) +
                one_over_two_q * *(b + 226 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 297 * OS1_S1 + 9);
            *(b + 298 * OS1_S1 + 20) =
                prefactor_x * *(b + 298 * OS1_S1 + 10) -
                p_over_q * *(b + 376 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 4);
            *(b + 298 * OS1_S1 + 21) =
                prefactor_y * *(b + 298 * OS1_S1 + 10) -
                p_over_q * *(b + 381 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 10);
            *(b + 298 * OS1_S1 + 22) =
                prefactor_z * *(b + 298 * OS1_S1 + 10) -
                p_over_q * *(b + 382 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 10);
            *(b + 298 * OS1_S1 + 23) =
                prefactor_y * *(b + 298 * OS1_S1 + 11) -
                p_over_q * *(b + 381 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 11) +
                one_over_two_q * *(b + 298 * OS1_S1 + 4);
            *(b + 298 * OS1_S1 + 24) =
                prefactor_z * *(b + 298 * OS1_S1 + 11) -
                p_over_q * *(b + 382 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 11);
            *(b + 298 * OS1_S1 + 25) =
                prefactor_z * *(b + 298 * OS1_S1 + 12) -
                p_over_q * *(b + 382 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 12) +
                one_over_two_q * *(b + 298 * OS1_S1 + 4);
            *(b + 298 * OS1_S1 + 26) =
                prefactor_x * *(b + 298 * OS1_S1 + 16) -
                p_over_q * *(b + 376 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 16);
            *(b + 298 * OS1_S1 + 27) =
                prefactor_z * *(b + 298 * OS1_S1 + 13) -
                p_over_q * *(b + 382 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 13);
            *(b + 298 * OS1_S1 + 28) =
                prefactor_y * *(b + 298 * OS1_S1 + 15) -
                p_over_q * *(b + 381 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 15);
            *(b + 298 * OS1_S1 + 29) =
                prefactor_x * *(b + 298 * OS1_S1 + 19) -
                p_over_q * *(b + 376 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 232 * OS1_S1 + 19);
            *(b + 298 * OS1_S1 + 30) =
                prefactor_y * *(b + 298 * OS1_S1 + 16) -
                p_over_q * *(b + 381 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 7);
            *(b + 298 * OS1_S1 + 31) =
                prefactor_z * *(b + 298 * OS1_S1 + 16) -
                p_over_q * *(b + 382 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 16);
            *(b + 298 * OS1_S1 + 32) =
                prefactor_z * *(b + 298 * OS1_S1 + 17) -
                p_over_q * *(b + 382 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 17) +
                one_over_two_q * *(b + 298 * OS1_S1 + 7);
            *(b + 298 * OS1_S1 + 33) =
                prefactor_y * *(b + 298 * OS1_S1 + 19) -
                p_over_q * *(b + 381 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 228 * OS1_S1 + 19);
            *(b + 298 * OS1_S1 + 34) =
                prefactor_z * *(b + 298 * OS1_S1 + 19) -
                p_over_q * *(b + 382 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 227 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 9);
            *(b + 299 * OS1_S1 + 20) =
                prefactor_x * *(b + 299 * OS1_S1 + 10) -
                p_over_q * *(b + 377 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 299 * OS1_S1 + 4);
            *(b + 299 * OS1_S1 + 21) =
                prefactor_y * *(b + 299 * OS1_S1 + 10) -
                p_over_q * *(b + 382 * OS1_S1 + 10) +
                one_over_two_q * *(b + 229 * OS1_S1 + 10);
            *(b + 299 * OS1_S1 + 22) =
                prefactor_z * *(b + 299 * OS1_S1 + 10) -
                p_over_q * *(b + 383 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 10);
            *(b + 299 * OS1_S1 + 23) =
                prefactor_y * *(b + 299 * OS1_S1 + 11) -
                p_over_q * *(b + 382 * OS1_S1 + 11) +
                one_over_two_q * *(b + 229 * OS1_S1 + 11) +
                one_over_two_q * *(b + 299 * OS1_S1 + 4);
            *(b + 299 * OS1_S1 + 24) =
                prefactor_y * *(b + 299 * OS1_S1 + 12) -
                p_over_q * *(b + 382 * OS1_S1 + 12) +
                one_over_two_q * *(b + 229 * OS1_S1 + 12);
            *(b + 299 * OS1_S1 + 25) =
                prefactor_z * *(b + 299 * OS1_S1 + 12) -
                p_over_q * *(b + 383 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 12) +
                one_over_two_q * *(b + 299 * OS1_S1 + 4);
            *(b + 299 * OS1_S1 + 26) =
                prefactor_x * *(b + 299 * OS1_S1 + 16) -
                p_over_q * *(b + 377 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 16);
            *(b + 299 * OS1_S1 + 27) =
                prefactor_z * *(b + 299 * OS1_S1 + 13) -
                p_over_q * *(b + 383 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 13);
            *(b + 299 * OS1_S1 + 28) =
                prefactor_y * *(b + 299 * OS1_S1 + 15) -
                p_over_q * *(b + 382 * OS1_S1 + 15) +
                one_over_two_q * *(b + 229 * OS1_S1 + 15);
            *(b + 299 * OS1_S1 + 29) =
                prefactor_x * *(b + 299 * OS1_S1 + 19) -
                p_over_q * *(b + 377 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 233 * OS1_S1 + 19);
            *(b + 299 * OS1_S1 + 30) =
                prefactor_y * *(b + 299 * OS1_S1 + 16) -
                p_over_q * *(b + 382 * OS1_S1 + 16) +
                one_over_two_q * *(b + 229 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 299 * OS1_S1 + 7);
            *(b + 299 * OS1_S1 + 31) =
                prefactor_z * *(b + 299 * OS1_S1 + 16) -
                p_over_q * *(b + 383 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 16);
            *(b + 299 * OS1_S1 + 32) =
                prefactor_y * *(b + 299 * OS1_S1 + 18) -
                p_over_q * *(b + 382 * OS1_S1 + 18) +
                one_over_two_q * *(b + 229 * OS1_S1 + 18) +
                one_over_two_q * *(b + 299 * OS1_S1 + 9);
            *(b + 299 * OS1_S1 + 33) =
                prefactor_y * *(b + 299 * OS1_S1 + 19) -
                p_over_q * *(b + 382 * OS1_S1 + 19) +
                one_over_two_q * *(b + 229 * OS1_S1 + 19);
            *(b + 299 * OS1_S1 + 34) =
                prefactor_z * *(b + 299 * OS1_S1 + 19) -
                p_over_q * *(b + 383 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 228 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 299 * OS1_S1 + 9);
            *(b + 300 * OS1_S1 + 20) =
                prefactor_x * *(b + 300 * OS1_S1 + 10) -
                p_over_q * *(b + 378 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 300 * OS1_S1 + 4);
            *(b + 300 * OS1_S1 + 21) = prefactor_y * *(b + 300 * OS1_S1 + 10) -
                                       p_over_q * *(b + 383 * OS1_S1 + 10);
            *(b + 300 * OS1_S1 + 22) =
                prefactor_z * *(b + 300 * OS1_S1 + 10) -
                p_over_q * *(b + 384 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 10);
            *(b + 300 * OS1_S1 + 23) = prefactor_y * *(b + 300 * OS1_S1 + 11) -
                                       p_over_q * *(b + 383 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 300 * OS1_S1 + 4);
            *(b + 300 * OS1_S1 + 24) = prefactor_y * *(b + 300 * OS1_S1 + 12) -
                                       p_over_q * *(b + 383 * OS1_S1 + 12);
            *(b + 300 * OS1_S1 + 25) =
                prefactor_z * *(b + 300 * OS1_S1 + 12) -
                p_over_q * *(b + 384 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 12) +
                one_over_two_q * *(b + 300 * OS1_S1 + 4);
            *(b + 300 * OS1_S1 + 26) =
                prefactor_x * *(b + 300 * OS1_S1 + 16) -
                p_over_q * *(b + 378 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 16);
            *(b + 300 * OS1_S1 + 27) =
                prefactor_z * *(b + 300 * OS1_S1 + 13) -
                p_over_q * *(b + 384 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 13);
            *(b + 300 * OS1_S1 + 28) = prefactor_y * *(b + 300 * OS1_S1 + 15) -
                                       p_over_q * *(b + 383 * OS1_S1 + 15);
            *(b + 300 * OS1_S1 + 29) =
                prefactor_x * *(b + 300 * OS1_S1 + 19) -
                p_over_q * *(b + 378 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 234 * OS1_S1 + 19);
            *(b + 300 * OS1_S1 + 30) =
                prefactor_y * *(b + 300 * OS1_S1 + 16) -
                p_over_q * *(b + 383 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 300 * OS1_S1 + 7);
            *(b + 300 * OS1_S1 + 31) =
                prefactor_z * *(b + 300 * OS1_S1 + 16) -
                p_over_q * *(b + 384 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 16);
            *(b + 300 * OS1_S1 + 32) = prefactor_y * *(b + 300 * OS1_S1 + 18) -
                                       p_over_q * *(b + 383 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 300 * OS1_S1 + 9);
            *(b + 300 * OS1_S1 + 33) = prefactor_y * *(b + 300 * OS1_S1 + 19) -
                                       p_over_q * *(b + 383 * OS1_S1 + 19);
            *(b + 300 * OS1_S1 + 34) =
                prefactor_z * *(b + 300 * OS1_S1 + 19) -
                p_over_q * *(b + 384 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 229 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 300 * OS1_S1 + 9);
            *(b + 301 * OS1_S1 + 20) =
                prefactor_x * *(b + 301 * OS1_S1 + 10) -
                p_over_q * *(b + 379 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 301 * OS1_S1 + 4);
            *(b + 301 * OS1_S1 + 21) =
                prefactor_y * *(b + 301 * OS1_S1 + 10) -
                p_over_q * *(b + 385 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 10);
            *(b + 301 * OS1_S1 + 22) = prefactor_z * *(b + 301 * OS1_S1 + 10) -
                                       p_over_q * *(b + 386 * OS1_S1 + 10);
            *(b + 301 * OS1_S1 + 23) =
                prefactor_y * *(b + 301 * OS1_S1 + 11) -
                p_over_q * *(b + 385 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 11) +
                one_over_two_q * *(b + 301 * OS1_S1 + 4);
            *(b + 301 * OS1_S1 + 24) = prefactor_z * *(b + 301 * OS1_S1 + 11) -
                                       p_over_q * *(b + 386 * OS1_S1 + 11);
            *(b + 301 * OS1_S1 + 25) = prefactor_z * *(b + 301 * OS1_S1 + 12) -
                                       p_over_q * *(b + 386 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 301 * OS1_S1 + 4);
            *(b + 301 * OS1_S1 + 26) =
                prefactor_x * *(b + 301 * OS1_S1 + 16) -
                p_over_q * *(b + 379 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 16);
            *(b + 301 * OS1_S1 + 27) = prefactor_z * *(b + 301 * OS1_S1 + 13) -
                                       p_over_q * *(b + 386 * OS1_S1 + 13);
            *(b + 301 * OS1_S1 + 28) =
                prefactor_y * *(b + 301 * OS1_S1 + 15) -
                p_over_q * *(b + 385 * OS1_S1 + 15) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 15);
            *(b + 301 * OS1_S1 + 29) =
                prefactor_x * *(b + 301 * OS1_S1 + 19) -
                p_over_q * *(b + 379 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 19);
            *(b + 301 * OS1_S1 + 30) =
                prefactor_y * *(b + 301 * OS1_S1 + 16) -
                p_over_q * *(b + 385 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 301 * OS1_S1 + 7);
            *(b + 301 * OS1_S1 + 31) = prefactor_z * *(b + 301 * OS1_S1 + 16) -
                                       p_over_q * *(b + 386 * OS1_S1 + 16);
            *(b + 301 * OS1_S1 + 32) = prefactor_z * *(b + 301 * OS1_S1 + 17) -
                                       p_over_q * *(b + 386 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 301 * OS1_S1 + 7);
            *(b + 301 * OS1_S1 + 33) =
                prefactor_y * *(b + 301 * OS1_S1 + 19) -
                p_over_q * *(b + 385 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 230 * OS1_S1 + 19);
            *(b + 301 * OS1_S1 + 34) =
                prefactor_z * *(b + 301 * OS1_S1 + 19) -
                p_over_q * *(b + 386 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 301 * OS1_S1 + 9);
            *(b + 302 * OS1_S1 + 20) =
                prefactor_x * *(b + 302 * OS1_S1 + 10) -
                p_over_q * *(b + 380 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 302 * OS1_S1 + 4);
            *(b + 302 * OS1_S1 + 21) =
                prefactor_y * *(b + 302 * OS1_S1 + 10) -
                p_over_q * *(b + 386 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 10);
            *(b + 302 * OS1_S1 + 22) =
                prefactor_z * *(b + 302 * OS1_S1 + 10) -
                p_over_q * *(b + 387 * OS1_S1 + 10) +
                one_over_two_q * *(b + 230 * OS1_S1 + 10);
            *(b + 302 * OS1_S1 + 23) =
                prefactor_y * *(b + 302 * OS1_S1 + 11) -
                p_over_q * *(b + 386 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 11) +
                one_over_two_q * *(b + 302 * OS1_S1 + 4);
            *(b + 302 * OS1_S1 + 24) =
                prefactor_z * *(b + 302 * OS1_S1 + 11) -
                p_over_q * *(b + 387 * OS1_S1 + 11) +
                one_over_two_q * *(b + 230 * OS1_S1 + 11);
            *(b + 302 * OS1_S1 + 25) =
                prefactor_z * *(b + 302 * OS1_S1 + 12) -
                p_over_q * *(b + 387 * OS1_S1 + 12) +
                one_over_two_q * *(b + 230 * OS1_S1 + 12) +
                one_over_two_q * *(b + 302 * OS1_S1 + 4);
            *(b + 302 * OS1_S1 + 26) =
                prefactor_x * *(b + 302 * OS1_S1 + 16) -
                p_over_q * *(b + 380 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 16);
            *(b + 302 * OS1_S1 + 27) =
                prefactor_z * *(b + 302 * OS1_S1 + 13) -
                p_over_q * *(b + 387 * OS1_S1 + 13) +
                one_over_two_q * *(b + 230 * OS1_S1 + 13);
            *(b + 302 * OS1_S1 + 28) =
                prefactor_y * *(b + 302 * OS1_S1 + 15) -
                p_over_q * *(b + 386 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 15);
            *(b + 302 * OS1_S1 + 29) =
                prefactor_x * *(b + 302 * OS1_S1 + 19) -
                p_over_q * *(b + 380 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 236 * OS1_S1 + 19);
            *(b + 302 * OS1_S1 + 30) =
                prefactor_y * *(b + 302 * OS1_S1 + 16) -
                p_over_q * *(b + 386 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 302 * OS1_S1 + 7);
            *(b + 302 * OS1_S1 + 31) =
                prefactor_z * *(b + 302 * OS1_S1 + 16) -
                p_over_q * *(b + 387 * OS1_S1 + 16) +
                one_over_two_q * *(b + 230 * OS1_S1 + 16);
            *(b + 302 * OS1_S1 + 32) =
                prefactor_z * *(b + 302 * OS1_S1 + 17) -
                p_over_q * *(b + 387 * OS1_S1 + 17) +
                one_over_two_q * *(b + 230 * OS1_S1 + 17) +
                one_over_two_q * *(b + 302 * OS1_S1 + 7);
            *(b + 302 * OS1_S1 + 33) =
                prefactor_y * *(b + 302 * OS1_S1 + 19) -
                p_over_q * *(b + 386 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 231 * OS1_S1 + 19);
            *(b + 302 * OS1_S1 + 34) =
                prefactor_z * *(b + 302 * OS1_S1 + 19) -
                p_over_q * *(b + 387 * OS1_S1 + 19) +
                one_over_two_q * *(b + 230 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 302 * OS1_S1 + 9);
            *(b + 303 * OS1_S1 + 20) =
                prefactor_x * *(b + 303 * OS1_S1 + 10) -
                p_over_q * *(b + 381 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 4);
            *(b + 303 * OS1_S1 + 21) =
                prefactor_y * *(b + 303 * OS1_S1 + 10) -
                p_over_q * *(b + 387 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 10);
            *(b + 303 * OS1_S1 + 22) =
                prefactor_z * *(b + 303 * OS1_S1 + 10) -
                p_over_q * *(b + 388 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 10);
            *(b + 303 * OS1_S1 + 23) =
                prefactor_y * *(b + 303 * OS1_S1 + 11) -
                p_over_q * *(b + 387 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 11) +
                one_over_two_q * *(b + 303 * OS1_S1 + 4);
            *(b + 303 * OS1_S1 + 24) =
                prefactor_z * *(b + 303 * OS1_S1 + 11) -
                p_over_q * *(b + 388 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 11);
            *(b + 303 * OS1_S1 + 25) =
                prefactor_z * *(b + 303 * OS1_S1 + 12) -
                p_over_q * *(b + 388 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 12) +
                one_over_two_q * *(b + 303 * OS1_S1 + 4);
            *(b + 303 * OS1_S1 + 26) =
                prefactor_x * *(b + 303 * OS1_S1 + 16) -
                p_over_q * *(b + 381 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 16);
            *(b + 303 * OS1_S1 + 27) =
                prefactor_z * *(b + 303 * OS1_S1 + 13) -
                p_over_q * *(b + 388 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 13);
            *(b + 303 * OS1_S1 + 28) =
                prefactor_y * *(b + 303 * OS1_S1 + 15) -
                p_over_q * *(b + 387 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 15);
            *(b + 303 * OS1_S1 + 29) =
                prefactor_x * *(b + 303 * OS1_S1 + 19) -
                p_over_q * *(b + 381 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 237 * OS1_S1 + 19);
            *(b + 303 * OS1_S1 + 30) =
                prefactor_y * *(b + 303 * OS1_S1 + 16) -
                p_over_q * *(b + 387 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 7);
            *(b + 303 * OS1_S1 + 31) =
                prefactor_z * *(b + 303 * OS1_S1 + 16) -
                p_over_q * *(b + 388 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 16);
            *(b + 303 * OS1_S1 + 32) =
                prefactor_z * *(b + 303 * OS1_S1 + 17) -
                p_over_q * *(b + 388 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 17) +
                one_over_two_q * *(b + 303 * OS1_S1 + 7);
            *(b + 303 * OS1_S1 + 33) =
                prefactor_y * *(b + 303 * OS1_S1 + 19) -
                p_over_q * *(b + 387 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 19);
            *(b + 303 * OS1_S1 + 34) =
                prefactor_z * *(b + 303 * OS1_S1 + 19) -
                p_over_q * *(b + 388 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 231 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 9);
            *(b + 304 * OS1_S1 + 20) =
                prefactor_x * *(b + 304 * OS1_S1 + 10) -
                p_over_q * *(b + 382 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 4);
            *(b + 304 * OS1_S1 + 21) =
                prefactor_y * *(b + 304 * OS1_S1 + 10) -
                p_over_q * *(b + 388 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 10);
            *(b + 304 * OS1_S1 + 22) =
                prefactor_z * *(b + 304 * OS1_S1 + 10) -
                p_over_q * *(b + 389 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 10);
            *(b + 304 * OS1_S1 + 23) =
                prefactor_y * *(b + 304 * OS1_S1 + 11) -
                p_over_q * *(b + 388 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 11) +
                one_over_two_q * *(b + 304 * OS1_S1 + 4);
            *(b + 304 * OS1_S1 + 24) =
                prefactor_y * *(b + 304 * OS1_S1 + 12) -
                p_over_q * *(b + 388 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 12);
            *(b + 304 * OS1_S1 + 25) =
                prefactor_z * *(b + 304 * OS1_S1 + 12) -
                p_over_q * *(b + 389 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 12) +
                one_over_two_q * *(b + 304 * OS1_S1 + 4);
            *(b + 304 * OS1_S1 + 26) =
                prefactor_x * *(b + 304 * OS1_S1 + 16) -
                p_over_q * *(b + 382 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 16);
            *(b + 304 * OS1_S1 + 27) =
                prefactor_z * *(b + 304 * OS1_S1 + 13) -
                p_over_q * *(b + 389 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 13);
            *(b + 304 * OS1_S1 + 28) =
                prefactor_y * *(b + 304 * OS1_S1 + 15) -
                p_over_q * *(b + 388 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 15);
            *(b + 304 * OS1_S1 + 29) =
                prefactor_x * *(b + 304 * OS1_S1 + 19) -
                p_over_q * *(b + 382 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 238 * OS1_S1 + 19);
            *(b + 304 * OS1_S1 + 30) =
                prefactor_y * *(b + 304 * OS1_S1 + 16) -
                p_over_q * *(b + 388 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 7);
            *(b + 304 * OS1_S1 + 31) =
                prefactor_z * *(b + 304 * OS1_S1 + 16) -
                p_over_q * *(b + 389 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 16);
            *(b + 304 * OS1_S1 + 32) =
                prefactor_y * *(b + 304 * OS1_S1 + 18) -
                p_over_q * *(b + 388 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 18) +
                one_over_two_q * *(b + 304 * OS1_S1 + 9);
            *(b + 304 * OS1_S1 + 33) =
                prefactor_y * *(b + 304 * OS1_S1 + 19) -
                p_over_q * *(b + 388 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 233 * OS1_S1 + 19);
            *(b + 304 * OS1_S1 + 34) =
                prefactor_z * *(b + 304 * OS1_S1 + 19) -
                p_over_q * *(b + 389 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 232 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 9);
            *(b + 305 * OS1_S1 + 20) =
                prefactor_x * *(b + 305 * OS1_S1 + 10) -
                p_over_q * *(b + 383 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 305 * OS1_S1 + 4);
            *(b + 305 * OS1_S1 + 21) =
                prefactor_y * *(b + 305 * OS1_S1 + 10) -
                p_over_q * *(b + 389 * OS1_S1 + 10) +
                one_over_two_q * *(b + 234 * OS1_S1 + 10);
            *(b + 305 * OS1_S1 + 22) =
                prefactor_z * *(b + 305 * OS1_S1 + 10) -
                p_over_q * *(b + 390 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 10);
            *(b + 305 * OS1_S1 + 23) =
                prefactor_y * *(b + 305 * OS1_S1 + 11) -
                p_over_q * *(b + 389 * OS1_S1 + 11) +
                one_over_two_q * *(b + 234 * OS1_S1 + 11) +
                one_over_two_q * *(b + 305 * OS1_S1 + 4);
            *(b + 305 * OS1_S1 + 24) =
                prefactor_y * *(b + 305 * OS1_S1 + 12) -
                p_over_q * *(b + 389 * OS1_S1 + 12) +
                one_over_two_q * *(b + 234 * OS1_S1 + 12);
            *(b + 305 * OS1_S1 + 25) =
                prefactor_z * *(b + 305 * OS1_S1 + 12) -
                p_over_q * *(b + 390 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 12) +
                one_over_two_q * *(b + 305 * OS1_S1 + 4);
            *(b + 305 * OS1_S1 + 26) =
                prefactor_x * *(b + 305 * OS1_S1 + 16) -
                p_over_q * *(b + 383 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 16);
            *(b + 305 * OS1_S1 + 27) =
                prefactor_z * *(b + 305 * OS1_S1 + 13) -
                p_over_q * *(b + 390 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 13);
            *(b + 305 * OS1_S1 + 28) =
                prefactor_y * *(b + 305 * OS1_S1 + 15) -
                p_over_q * *(b + 389 * OS1_S1 + 15) +
                one_over_two_q * *(b + 234 * OS1_S1 + 15);
            *(b + 305 * OS1_S1 + 29) =
                prefactor_x * *(b + 305 * OS1_S1 + 19) -
                p_over_q * *(b + 383 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 239 * OS1_S1 + 19);
            *(b + 305 * OS1_S1 + 30) =
                prefactor_y * *(b + 305 * OS1_S1 + 16) -
                p_over_q * *(b + 389 * OS1_S1 + 16) +
                one_over_two_q * *(b + 234 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 305 * OS1_S1 + 7);
            *(b + 305 * OS1_S1 + 31) =
                prefactor_z * *(b + 305 * OS1_S1 + 16) -
                p_over_q * *(b + 390 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 16);
            *(b + 305 * OS1_S1 + 32) =
                prefactor_y * *(b + 305 * OS1_S1 + 18) -
                p_over_q * *(b + 389 * OS1_S1 + 18) +
                one_over_two_q * *(b + 234 * OS1_S1 + 18) +
                one_over_two_q * *(b + 305 * OS1_S1 + 9);
            *(b + 305 * OS1_S1 + 33) =
                prefactor_y * *(b + 305 * OS1_S1 + 19) -
                p_over_q * *(b + 389 * OS1_S1 + 19) +
                one_over_two_q * *(b + 234 * OS1_S1 + 19);
            *(b + 305 * OS1_S1 + 34) =
                prefactor_z * *(b + 305 * OS1_S1 + 19) -
                p_over_q * *(b + 390 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 233 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 305 * OS1_S1 + 9);
            *(b + 306 * OS1_S1 + 20) =
                prefactor_x * *(b + 306 * OS1_S1 + 10) -
                p_over_q * *(b + 384 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 306 * OS1_S1 + 4);
            *(b + 306 * OS1_S1 + 21) = prefactor_y * *(b + 306 * OS1_S1 + 10) -
                                       p_over_q * *(b + 390 * OS1_S1 + 10);
            *(b + 306 * OS1_S1 + 22) =
                prefactor_z * *(b + 306 * OS1_S1 + 10) -
                p_over_q * *(b + 391 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 10);
            *(b + 306 * OS1_S1 + 23) = prefactor_y * *(b + 306 * OS1_S1 + 11) -
                                       p_over_q * *(b + 390 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 306 * OS1_S1 + 4);
            *(b + 306 * OS1_S1 + 24) = prefactor_y * *(b + 306 * OS1_S1 + 12) -
                                       p_over_q * *(b + 390 * OS1_S1 + 12);
            *(b + 306 * OS1_S1 + 25) =
                prefactor_z * *(b + 306 * OS1_S1 + 12) -
                p_over_q * *(b + 391 * OS1_S1 + 12) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 12) +
                one_over_two_q * *(b + 306 * OS1_S1 + 4);
            *(b + 306 * OS1_S1 + 26) =
                prefactor_x * *(b + 306 * OS1_S1 + 16) -
                p_over_q * *(b + 384 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 16);
            *(b + 306 * OS1_S1 + 27) =
                prefactor_z * *(b + 306 * OS1_S1 + 13) -
                p_over_q * *(b + 391 * OS1_S1 + 13) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 13);
            *(b + 306 * OS1_S1 + 28) = prefactor_y * *(b + 306 * OS1_S1 + 15) -
                                       p_over_q * *(b + 390 * OS1_S1 + 15);
            *(b + 306 * OS1_S1 + 29) =
                prefactor_x * *(b + 306 * OS1_S1 + 19) -
                p_over_q * *(b + 384 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 19);
            *(b + 306 * OS1_S1 + 30) =
                prefactor_y * *(b + 306 * OS1_S1 + 16) -
                p_over_q * *(b + 390 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 306 * OS1_S1 + 7);
            *(b + 306 * OS1_S1 + 31) =
                prefactor_z * *(b + 306 * OS1_S1 + 16) -
                p_over_q * *(b + 391 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 16);
            *(b + 306 * OS1_S1 + 32) = prefactor_y * *(b + 306 * OS1_S1 + 18) -
                                       p_over_q * *(b + 390 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 306 * OS1_S1 + 9);
            *(b + 306 * OS1_S1 + 33) = prefactor_y * *(b + 306 * OS1_S1 + 19) -
                                       p_over_q * *(b + 390 * OS1_S1 + 19);
            *(b + 306 * OS1_S1 + 34) =
                prefactor_z * *(b + 306 * OS1_S1 + 19) -
                p_over_q * *(b + 391 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 234 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 306 * OS1_S1 + 9);
            *(b + 307 * OS1_S1 + 20) =
                prefactor_x * *(b + 307 * OS1_S1 + 10) -
                p_over_q * *(b + 385 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 307 * OS1_S1 + 4);
            *(b + 307 * OS1_S1 + 21) =
                prefactor_y * *(b + 307 * OS1_S1 + 10) -
                p_over_q * *(b + 392 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 10);
            *(b + 307 * OS1_S1 + 22) = prefactor_z * *(b + 307 * OS1_S1 + 10) -
                                       p_over_q * *(b + 393 * OS1_S1 + 10);
            *(b + 307 * OS1_S1 + 23) =
                prefactor_x * *(b + 307 * OS1_S1 + 13) -
                p_over_q * *(b + 385 * OS1_S1 + 13) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 13) +
                one_over_two_q * *(b + 307 * OS1_S1 + 7);
            *(b + 307 * OS1_S1 + 24) = prefactor_z * *(b + 307 * OS1_S1 + 11) -
                                       p_over_q * *(b + 393 * OS1_S1 + 11);
            *(b + 307 * OS1_S1 + 25) = prefactor_z * *(b + 307 * OS1_S1 + 12) -
                                       p_over_q * *(b + 393 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 307 * OS1_S1 + 4);
            *(b + 307 * OS1_S1 + 26) =
                prefactor_x * *(b + 307 * OS1_S1 + 16) -
                p_over_q * *(b + 385 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 16);
            *(b + 307 * OS1_S1 + 27) = prefactor_z * *(b + 307 * OS1_S1 + 13) -
                                       p_over_q * *(b + 393 * OS1_S1 + 13);
            *(b + 307 * OS1_S1 + 28) =
                prefactor_x * *(b + 307 * OS1_S1 + 18) -
                p_over_q * *(b + 385 * OS1_S1 + 18) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 18);
            *(b + 307 * OS1_S1 + 29) =
                prefactor_x * *(b + 307 * OS1_S1 + 19) -
                p_over_q * *(b + 385 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 241 * OS1_S1 + 19);
            *(b + 307 * OS1_S1 + 30) =
                prefactor_y * *(b + 307 * OS1_S1 + 16) -
                p_over_q * *(b + 392 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 307 * OS1_S1 + 7);
            *(b + 307 * OS1_S1 + 31) = prefactor_z * *(b + 307 * OS1_S1 + 16) -
                                       p_over_q * *(b + 393 * OS1_S1 + 16);
            *(b + 307 * OS1_S1 + 32) = prefactor_z * *(b + 307 * OS1_S1 + 17) -
                                       p_over_q * *(b + 393 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 307 * OS1_S1 + 7);
            *(b + 307 * OS1_S1 + 33) =
                prefactor_y * *(b + 307 * OS1_S1 + 19) -
                p_over_q * *(b + 392 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 235 * OS1_S1 + 19);
            *(b + 307 * OS1_S1 + 34) =
                prefactor_z * *(b + 307 * OS1_S1 + 19) -
                p_over_q * *(b + 393 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 307 * OS1_S1 + 9);
            *(b + 308 * OS1_S1 + 20) =
                prefactor_x * *(b + 308 * OS1_S1 + 10) -
                p_over_q * *(b + 386 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 308 * OS1_S1 + 4);
            *(b + 308 * OS1_S1 + 21) =
                prefactor_y * *(b + 308 * OS1_S1 + 10) -
                p_over_q * *(b + 393 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 10);
            *(b + 308 * OS1_S1 + 22) =
                prefactor_z * *(b + 308 * OS1_S1 + 10) -
                p_over_q * *(b + 394 * OS1_S1 + 10) +
                one_over_two_q * *(b + 235 * OS1_S1 + 10);
            *(b + 308 * OS1_S1 + 23) =
                prefactor_y * *(b + 308 * OS1_S1 + 11) -
                p_over_q * *(b + 393 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 11) +
                one_over_two_q * *(b + 308 * OS1_S1 + 4);
            *(b + 308 * OS1_S1 + 24) =
                prefactor_z * *(b + 308 * OS1_S1 + 11) -
                p_over_q * *(b + 394 * OS1_S1 + 11) +
                one_over_two_q * *(b + 235 * OS1_S1 + 11);
            *(b + 308 * OS1_S1 + 25) =
                prefactor_z * *(b + 308 * OS1_S1 + 12) -
                p_over_q * *(b + 394 * OS1_S1 + 12) +
                one_over_two_q * *(b + 235 * OS1_S1 + 12) +
                one_over_two_q * *(b + 308 * OS1_S1 + 4);
            *(b + 308 * OS1_S1 + 26) =
                prefactor_x * *(b + 308 * OS1_S1 + 16) -
                p_over_q * *(b + 386 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 16);
            *(b + 308 * OS1_S1 + 27) =
                prefactor_z * *(b + 308 * OS1_S1 + 13) -
                p_over_q * *(b + 394 * OS1_S1 + 13) +
                one_over_two_q * *(b + 235 * OS1_S1 + 13);
            *(b + 308 * OS1_S1 + 28) =
                prefactor_y * *(b + 308 * OS1_S1 + 15) -
                p_over_q * *(b + 393 * OS1_S1 + 15) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 15);
            *(b + 308 * OS1_S1 + 29) =
                prefactor_x * *(b + 308 * OS1_S1 + 19) -
                p_over_q * *(b + 386 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 242 * OS1_S1 + 19);
            *(b + 308 * OS1_S1 + 30) =
                prefactor_y * *(b + 308 * OS1_S1 + 16) -
                p_over_q * *(b + 393 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 308 * OS1_S1 + 7);
            *(b + 308 * OS1_S1 + 31) =
                prefactor_z * *(b + 308 * OS1_S1 + 16) -
                p_over_q * *(b + 394 * OS1_S1 + 16) +
                one_over_two_q * *(b + 235 * OS1_S1 + 16);
            *(b + 308 * OS1_S1 + 32) =
                prefactor_z * *(b + 308 * OS1_S1 + 17) -
                p_over_q * *(b + 394 * OS1_S1 + 17) +
                one_over_two_q * *(b + 235 * OS1_S1 + 17) +
                one_over_two_q * *(b + 308 * OS1_S1 + 7);
            *(b + 308 * OS1_S1 + 33) =
                prefactor_y * *(b + 308 * OS1_S1 + 19) -
                p_over_q * *(b + 393 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 236 * OS1_S1 + 19);
            *(b + 308 * OS1_S1 + 34) =
                prefactor_z * *(b + 308 * OS1_S1 + 19) -
                p_over_q * *(b + 394 * OS1_S1 + 19) +
                one_over_two_q * *(b + 235 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 308 * OS1_S1 + 9);
            *(b + 309 * OS1_S1 + 20) =
                prefactor_x * *(b + 309 * OS1_S1 + 10) -
                p_over_q * *(b + 387 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 4);
            *(b + 309 * OS1_S1 + 21) =
                prefactor_y * *(b + 309 * OS1_S1 + 10) -
                p_over_q * *(b + 394 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 10);
            *(b + 309 * OS1_S1 + 22) =
                prefactor_z * *(b + 309 * OS1_S1 + 10) -
                p_over_q * *(b + 395 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 10);
            *(b + 309 * OS1_S1 + 23) =
                prefactor_y * *(b + 309 * OS1_S1 + 11) -
                p_over_q * *(b + 394 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 11) +
                one_over_two_q * *(b + 309 * OS1_S1 + 4);
            *(b + 309 * OS1_S1 + 24) =
                prefactor_z * *(b + 309 * OS1_S1 + 11) -
                p_over_q * *(b + 395 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 11);
            *(b + 309 * OS1_S1 + 25) =
                prefactor_z * *(b + 309 * OS1_S1 + 12) -
                p_over_q * *(b + 395 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 12) +
                one_over_two_q * *(b + 309 * OS1_S1 + 4);
            *(b + 309 * OS1_S1 + 26) =
                prefactor_x * *(b + 309 * OS1_S1 + 16) -
                p_over_q * *(b + 387 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 16);
            *(b + 309 * OS1_S1 + 27) =
                prefactor_z * *(b + 309 * OS1_S1 + 13) -
                p_over_q * *(b + 395 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 13);
            *(b + 309 * OS1_S1 + 28) =
                prefactor_y * *(b + 309 * OS1_S1 + 15) -
                p_over_q * *(b + 394 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 15);
            *(b + 309 * OS1_S1 + 29) =
                prefactor_x * *(b + 309 * OS1_S1 + 19) -
                p_over_q * *(b + 387 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 19);
            *(b + 309 * OS1_S1 + 30) =
                prefactor_y * *(b + 309 * OS1_S1 + 16) -
                p_over_q * *(b + 394 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 7);
            *(b + 309 * OS1_S1 + 31) =
                prefactor_z * *(b + 309 * OS1_S1 + 16) -
                p_over_q * *(b + 395 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 16);
            *(b + 309 * OS1_S1 + 32) =
                prefactor_z * *(b + 309 * OS1_S1 + 17) -
                p_over_q * *(b + 395 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 17) +
                one_over_two_q * *(b + 309 * OS1_S1 + 7);
            *(b + 309 * OS1_S1 + 33) =
                prefactor_y * *(b + 309 * OS1_S1 + 19) -
                p_over_q * *(b + 394 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 237 * OS1_S1 + 19);
            *(b + 309 * OS1_S1 + 34) =
                prefactor_z * *(b + 309 * OS1_S1 + 19) -
                p_over_q * *(b + 395 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 236 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 9);
            *(b + 310 * OS1_S1 + 20) =
                prefactor_x * *(b + 310 * OS1_S1 + 10) -
                p_over_q * *(b + 388 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 310 * OS1_S1 + 4);
            *(b + 310 * OS1_S1 + 21) =
                prefactor_y * *(b + 310 * OS1_S1 + 10) -
                p_over_q * *(b + 395 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 10);
            *(b + 310 * OS1_S1 + 22) =
                prefactor_z * *(b + 310 * OS1_S1 + 10) -
                p_over_q * *(b + 396 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 10);
            *(b + 310 * OS1_S1 + 23) =
                prefactor_y * *(b + 310 * OS1_S1 + 11) -
                p_over_q * *(b + 395 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 11) +
                one_over_two_q * *(b + 310 * OS1_S1 + 4);
            *(b + 310 * OS1_S1 + 24) =
                prefactor_z * *(b + 310 * OS1_S1 + 11) -
                p_over_q * *(b + 396 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 11);
            *(b + 310 * OS1_S1 + 25) =
                prefactor_z * *(b + 310 * OS1_S1 + 12) -
                p_over_q * *(b + 396 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 12) +
                one_over_two_q * *(b + 310 * OS1_S1 + 4);
            *(b + 310 * OS1_S1 + 26) =
                prefactor_x * *(b + 310 * OS1_S1 + 16) -
                p_over_q * *(b + 388 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 16);
            *(b + 310 * OS1_S1 + 27) =
                prefactor_z * *(b + 310 * OS1_S1 + 13) -
                p_over_q * *(b + 396 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 13);
            *(b + 310 * OS1_S1 + 28) =
                prefactor_y * *(b + 310 * OS1_S1 + 15) -
                p_over_q * *(b + 395 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 15);
            *(b + 310 * OS1_S1 + 29) =
                prefactor_x * *(b + 310 * OS1_S1 + 19) -
                p_over_q * *(b + 388 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 244 * OS1_S1 + 19);
            *(b + 310 * OS1_S1 + 30) =
                prefactor_y * *(b + 310 * OS1_S1 + 16) -
                p_over_q * *(b + 395 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 310 * OS1_S1 + 7);
            *(b + 310 * OS1_S1 + 31) =
                prefactor_z * *(b + 310 * OS1_S1 + 16) -
                p_over_q * *(b + 396 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 16);
            *(b + 310 * OS1_S1 + 32) =
                prefactor_z * *(b + 310 * OS1_S1 + 17) -
                p_over_q * *(b + 396 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 17) +
                one_over_two_q * *(b + 310 * OS1_S1 + 7);
            *(b + 310 * OS1_S1 + 33) =
                prefactor_y * *(b + 310 * OS1_S1 + 19) -
                p_over_q * *(b + 395 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 238 * OS1_S1 + 19);
            *(b + 310 * OS1_S1 + 34) =
                prefactor_z * *(b + 310 * OS1_S1 + 19) -
                p_over_q * *(b + 396 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 237 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 310 * OS1_S1 + 9);
            *(b + 311 * OS1_S1 + 20) =
                prefactor_x * *(b + 311 * OS1_S1 + 10) -
                p_over_q * *(b + 389 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 4);
            *(b + 311 * OS1_S1 + 21) =
                prefactor_y * *(b + 311 * OS1_S1 + 10) -
                p_over_q * *(b + 396 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 10);
            *(b + 311 * OS1_S1 + 22) =
                prefactor_z * *(b + 311 * OS1_S1 + 10) -
                p_over_q * *(b + 397 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 10);
            *(b + 311 * OS1_S1 + 23) =
                prefactor_y * *(b + 311 * OS1_S1 + 11) -
                p_over_q * *(b + 396 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 11) +
                one_over_two_q * *(b + 311 * OS1_S1 + 4);
            *(b + 311 * OS1_S1 + 24) =
                prefactor_y * *(b + 311 * OS1_S1 + 12) -
                p_over_q * *(b + 396 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 12);
            *(b + 311 * OS1_S1 + 25) =
                prefactor_z * *(b + 311 * OS1_S1 + 12) -
                p_over_q * *(b + 397 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 12) +
                one_over_two_q * *(b + 311 * OS1_S1 + 4);
            *(b + 311 * OS1_S1 + 26) =
                prefactor_x * *(b + 311 * OS1_S1 + 16) -
                p_over_q * *(b + 389 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 16);
            *(b + 311 * OS1_S1 + 27) =
                prefactor_z * *(b + 311 * OS1_S1 + 13) -
                p_over_q * *(b + 397 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 13);
            *(b + 311 * OS1_S1 + 28) =
                prefactor_y * *(b + 311 * OS1_S1 + 15) -
                p_over_q * *(b + 396 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 15);
            *(b + 311 * OS1_S1 + 29) =
                prefactor_x * *(b + 311 * OS1_S1 + 19) -
                p_over_q * *(b + 389 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 19);
            *(b + 311 * OS1_S1 + 30) =
                prefactor_y * *(b + 311 * OS1_S1 + 16) -
                p_over_q * *(b + 396 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 7);
            *(b + 311 * OS1_S1 + 31) =
                prefactor_z * *(b + 311 * OS1_S1 + 16) -
                p_over_q * *(b + 397 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 16);
            *(b + 311 * OS1_S1 + 32) =
                prefactor_y * *(b + 311 * OS1_S1 + 18) -
                p_over_q * *(b + 396 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 18) +
                one_over_two_q * *(b + 311 * OS1_S1 + 9);
            *(b + 311 * OS1_S1 + 33) =
                prefactor_y * *(b + 311 * OS1_S1 + 19) -
                p_over_q * *(b + 396 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 239 * OS1_S1 + 19);
            *(b + 311 * OS1_S1 + 34) =
                prefactor_z * *(b + 311 * OS1_S1 + 19) -
                p_over_q * *(b + 397 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 238 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 9);
            *(b + 312 * OS1_S1 + 20) =
                prefactor_x * *(b + 312 * OS1_S1 + 10) -
                p_over_q * *(b + 390 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 312 * OS1_S1 + 4);
            *(b + 312 * OS1_S1 + 21) =
                prefactor_y * *(b + 312 * OS1_S1 + 10) -
                p_over_q * *(b + 397 * OS1_S1 + 10) +
                one_over_two_q * *(b + 240 * OS1_S1 + 10);
            *(b + 312 * OS1_S1 + 22) =
                prefactor_z * *(b + 312 * OS1_S1 + 10) -
                p_over_q * *(b + 398 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 10);
            *(b + 312 * OS1_S1 + 23) =
                prefactor_y * *(b + 312 * OS1_S1 + 11) -
                p_over_q * *(b + 397 * OS1_S1 + 11) +
                one_over_two_q * *(b + 240 * OS1_S1 + 11) +
                one_over_two_q * *(b + 312 * OS1_S1 + 4);
            *(b + 312 * OS1_S1 + 24) =
                prefactor_y * *(b + 312 * OS1_S1 + 12) -
                p_over_q * *(b + 397 * OS1_S1 + 12) +
                one_over_two_q * *(b + 240 * OS1_S1 + 12);
            *(b + 312 * OS1_S1 + 25) =
                prefactor_z * *(b + 312 * OS1_S1 + 12) -
                p_over_q * *(b + 398 * OS1_S1 + 12) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 12) +
                one_over_two_q * *(b + 312 * OS1_S1 + 4);
            *(b + 312 * OS1_S1 + 26) =
                prefactor_x * *(b + 312 * OS1_S1 + 16) -
                p_over_q * *(b + 390 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 16);
            *(b + 312 * OS1_S1 + 27) =
                prefactor_z * *(b + 312 * OS1_S1 + 13) -
                p_over_q * *(b + 398 * OS1_S1 + 13) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 13);
            *(b + 312 * OS1_S1 + 28) =
                prefactor_y * *(b + 312 * OS1_S1 + 15) -
                p_over_q * *(b + 397 * OS1_S1 + 15) +
                one_over_two_q * *(b + 240 * OS1_S1 + 15);
            *(b + 312 * OS1_S1 + 29) =
                prefactor_x * *(b + 312 * OS1_S1 + 19) -
                p_over_q * *(b + 390 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 246 * OS1_S1 + 19);
            *(b + 312 * OS1_S1 + 30) =
                prefactor_y * *(b + 312 * OS1_S1 + 16) -
                p_over_q * *(b + 397 * OS1_S1 + 16) +
                one_over_two_q * *(b + 240 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 312 * OS1_S1 + 7);
            *(b + 312 * OS1_S1 + 31) =
                prefactor_z * *(b + 312 * OS1_S1 + 16) -
                p_over_q * *(b + 398 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 16);
            *(b + 312 * OS1_S1 + 32) =
                prefactor_y * *(b + 312 * OS1_S1 + 18) -
                p_over_q * *(b + 397 * OS1_S1 + 18) +
                one_over_two_q * *(b + 240 * OS1_S1 + 18) +
                one_over_two_q * *(b + 312 * OS1_S1 + 9);
            *(b + 312 * OS1_S1 + 33) =
                prefactor_y * *(b + 312 * OS1_S1 + 19) -
                p_over_q * *(b + 397 * OS1_S1 + 19) +
                one_over_two_q * *(b + 240 * OS1_S1 + 19);
            *(b + 312 * OS1_S1 + 34) =
                prefactor_z * *(b + 312 * OS1_S1 + 19) -
                p_over_q * *(b + 398 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 239 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 312 * OS1_S1 + 9);
            *(b + 313 * OS1_S1 + 20) =
                prefactor_x * *(b + 313 * OS1_S1 + 10) -
                p_over_q * *(b + 391 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 313 * OS1_S1 + 4);
            *(b + 313 * OS1_S1 + 21) = prefactor_y * *(b + 313 * OS1_S1 + 10) -
                                       p_over_q * *(b + 398 * OS1_S1 + 10);
            *(b + 313 * OS1_S1 + 22) =
                prefactor_z * *(b + 313 * OS1_S1 + 10) -
                p_over_q * *(b + 399 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 10);
            *(b + 313 * OS1_S1 + 23) = prefactor_y * *(b + 313 * OS1_S1 + 11) -
                                       p_over_q * *(b + 398 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 313 * OS1_S1 + 4);
            *(b + 313 * OS1_S1 + 24) = prefactor_y * *(b + 313 * OS1_S1 + 12) -
                                       p_over_q * *(b + 398 * OS1_S1 + 12);
            *(b + 313 * OS1_S1 + 25) =
                prefactor_x * *(b + 313 * OS1_S1 + 15) -
                p_over_q * *(b + 391 * OS1_S1 + 15) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 15) +
                one_over_two_q * *(b + 313 * OS1_S1 + 9);
            *(b + 313 * OS1_S1 + 26) =
                prefactor_x * *(b + 313 * OS1_S1 + 16) -
                p_over_q * *(b + 391 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 16);
            *(b + 313 * OS1_S1 + 27) =
                prefactor_x * *(b + 313 * OS1_S1 + 17) -
                p_over_q * *(b + 391 * OS1_S1 + 17) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 17);
            *(b + 313 * OS1_S1 + 28) = prefactor_y * *(b + 313 * OS1_S1 + 15) -
                                       p_over_q * *(b + 398 * OS1_S1 + 15);
            *(b + 313 * OS1_S1 + 29) =
                prefactor_x * *(b + 313 * OS1_S1 + 19) -
                p_over_q * *(b + 391 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 247 * OS1_S1 + 19);
            *(b + 313 * OS1_S1 + 30) =
                prefactor_y * *(b + 313 * OS1_S1 + 16) -
                p_over_q * *(b + 398 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 313 * OS1_S1 + 7);
            *(b + 313 * OS1_S1 + 31) =
                prefactor_z * *(b + 313 * OS1_S1 + 16) -
                p_over_q * *(b + 399 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 16);
            *(b + 313 * OS1_S1 + 32) = prefactor_y * *(b + 313 * OS1_S1 + 18) -
                                       p_over_q * *(b + 398 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 313 * OS1_S1 + 9);
            *(b + 313 * OS1_S1 + 33) = prefactor_y * *(b + 313 * OS1_S1 + 19) -
                                       p_over_q * *(b + 398 * OS1_S1 + 19);
            *(b + 313 * OS1_S1 + 34) =
                prefactor_z * *(b + 313 * OS1_S1 + 19) -
                p_over_q * *(b + 399 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 240 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 313 * OS1_S1 + 9);
            *(b + 314 * OS1_S1 + 20) =
                prefactor_x * *(b + 314 * OS1_S1 + 10) -
                p_over_q * *(b + 392 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 314 * OS1_S1 + 4);
            *(b + 314 * OS1_S1 + 21) =
                prefactor_y * *(b + 314 * OS1_S1 + 10) -
                p_over_q * *(b + 400 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 10);
            *(b + 314 * OS1_S1 + 22) = prefactor_z * *(b + 314 * OS1_S1 + 10) -
                                       p_over_q * *(b + 401 * OS1_S1 + 10);
            *(b + 314 * OS1_S1 + 23) =
                prefactor_x * *(b + 314 * OS1_S1 + 13) -
                p_over_q * *(b + 392 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 13) +
                one_over_two_q * *(b + 314 * OS1_S1 + 7);
            *(b + 314 * OS1_S1 + 24) = prefactor_z * *(b + 314 * OS1_S1 + 11) -
                                       p_over_q * *(b + 401 * OS1_S1 + 11);
            *(b + 314 * OS1_S1 + 25) = prefactor_z * *(b + 314 * OS1_S1 + 12) -
                                       p_over_q * *(b + 401 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 314 * OS1_S1 + 4);
            *(b + 314 * OS1_S1 + 26) =
                prefactor_x * *(b + 314 * OS1_S1 + 16) -
                p_over_q * *(b + 392 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 16);
            *(b + 314 * OS1_S1 + 27) = prefactor_z * *(b + 314 * OS1_S1 + 13) -
                                       p_over_q * *(b + 401 * OS1_S1 + 13);
            *(b + 314 * OS1_S1 + 28) =
                prefactor_x * *(b + 314 * OS1_S1 + 18) -
                p_over_q * *(b + 392 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 18);
            *(b + 314 * OS1_S1 + 29) =
                prefactor_x * *(b + 314 * OS1_S1 + 19) -
                p_over_q * *(b + 392 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 248 * OS1_S1 + 19);
            *(b + 314 * OS1_S1 + 30) =
                prefactor_y * *(b + 314 * OS1_S1 + 16) -
                p_over_q * *(b + 400 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 314 * OS1_S1 + 7);
            *(b + 314 * OS1_S1 + 31) = prefactor_z * *(b + 314 * OS1_S1 + 16) -
                                       p_over_q * *(b + 401 * OS1_S1 + 16);
            *(b + 314 * OS1_S1 + 32) = prefactor_z * *(b + 314 * OS1_S1 + 17) -
                                       p_over_q * *(b + 401 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 314 * OS1_S1 + 7);
            *(b + 314 * OS1_S1 + 33) =
                prefactor_y * *(b + 314 * OS1_S1 + 19) -
                p_over_q * *(b + 400 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 241 * OS1_S1 + 19);
            *(b + 314 * OS1_S1 + 34) =
                prefactor_z * *(b + 314 * OS1_S1 + 19) -
                p_over_q * *(b + 401 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 314 * OS1_S1 + 9);
            *(b + 315 * OS1_S1 + 20) =
                prefactor_x * *(b + 315 * OS1_S1 + 10) -
                p_over_q * *(b + 393 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 315 * OS1_S1 + 4);
            *(b + 315 * OS1_S1 + 21) =
                prefactor_y * *(b + 315 * OS1_S1 + 10) -
                p_over_q * *(b + 401 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 10);
            *(b + 315 * OS1_S1 + 22) =
                prefactor_z * *(b + 315 * OS1_S1 + 10) -
                p_over_q * *(b + 402 * OS1_S1 + 10) +
                one_over_two_q * *(b + 241 * OS1_S1 + 10);
            *(b + 315 * OS1_S1 + 23) =
                prefactor_x * *(b + 315 * OS1_S1 + 13) -
                p_over_q * *(b + 393 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 13) +
                one_over_two_q * *(b + 315 * OS1_S1 + 7);
            *(b + 315 * OS1_S1 + 24) =
                prefactor_z * *(b + 315 * OS1_S1 + 11) -
                p_over_q * *(b + 402 * OS1_S1 + 11) +
                one_over_two_q * *(b + 241 * OS1_S1 + 11);
            *(b + 315 * OS1_S1 + 25) =
                prefactor_z * *(b + 315 * OS1_S1 + 12) -
                p_over_q * *(b + 402 * OS1_S1 + 12) +
                one_over_two_q * *(b + 241 * OS1_S1 + 12) +
                one_over_two_q * *(b + 315 * OS1_S1 + 4);
            *(b + 315 * OS1_S1 + 26) =
                prefactor_x * *(b + 315 * OS1_S1 + 16) -
                p_over_q * *(b + 393 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 16);
            *(b + 315 * OS1_S1 + 27) =
                prefactor_z * *(b + 315 * OS1_S1 + 13) -
                p_over_q * *(b + 402 * OS1_S1 + 13) +
                one_over_two_q * *(b + 241 * OS1_S1 + 13);
            *(b + 315 * OS1_S1 + 28) =
                prefactor_x * *(b + 315 * OS1_S1 + 18) -
                p_over_q * *(b + 393 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 18);
            *(b + 315 * OS1_S1 + 29) =
                prefactor_x * *(b + 315 * OS1_S1 + 19) -
                p_over_q * *(b + 393 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 249 * OS1_S1 + 19);
            *(b + 315 * OS1_S1 + 30) =
                prefactor_y * *(b + 315 * OS1_S1 + 16) -
                p_over_q * *(b + 401 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 315 * OS1_S1 + 7);
            *(b + 315 * OS1_S1 + 31) =
                prefactor_z * *(b + 315 * OS1_S1 + 16) -
                p_over_q * *(b + 402 * OS1_S1 + 16) +
                one_over_two_q * *(b + 241 * OS1_S1 + 16);
            *(b + 315 * OS1_S1 + 32) =
                prefactor_z * *(b + 315 * OS1_S1 + 17) -
                p_over_q * *(b + 402 * OS1_S1 + 17) +
                one_over_two_q * *(b + 241 * OS1_S1 + 17) +
                one_over_two_q * *(b + 315 * OS1_S1 + 7);
            *(b + 315 * OS1_S1 + 33) =
                prefactor_y * *(b + 315 * OS1_S1 + 19) -
                p_over_q * *(b + 401 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 242 * OS1_S1 + 19);
            *(b + 315 * OS1_S1 + 34) =
                prefactor_z * *(b + 315 * OS1_S1 + 19) -
                p_over_q * *(b + 402 * OS1_S1 + 19) +
                one_over_two_q * *(b + 241 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 315 * OS1_S1 + 9);
            *(b + 316 * OS1_S1 + 20) =
                prefactor_x * *(b + 316 * OS1_S1 + 10) -
                p_over_q * *(b + 394 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 4);
            *(b + 316 * OS1_S1 + 21) =
                prefactor_y * *(b + 316 * OS1_S1 + 10) -
                p_over_q * *(b + 402 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 10);
            *(b + 316 * OS1_S1 + 22) =
                prefactor_z * *(b + 316 * OS1_S1 + 10) -
                p_over_q * *(b + 403 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 10);
            *(b + 316 * OS1_S1 + 23) =
                prefactor_x * *(b + 316 * OS1_S1 + 13) -
                p_over_q * *(b + 394 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 13) +
                one_over_two_q * *(b + 316 * OS1_S1 + 7);
            *(b + 316 * OS1_S1 + 24) =
                prefactor_z * *(b + 316 * OS1_S1 + 11) -
                p_over_q * *(b + 403 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 11);
            *(b + 316 * OS1_S1 + 25) =
                prefactor_z * *(b + 316 * OS1_S1 + 12) -
                p_over_q * *(b + 403 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 12) +
                one_over_two_q * *(b + 316 * OS1_S1 + 4);
            *(b + 316 * OS1_S1 + 26) =
                prefactor_x * *(b + 316 * OS1_S1 + 16) -
                p_over_q * *(b + 394 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 16);
            *(b + 316 * OS1_S1 + 27) =
                prefactor_z * *(b + 316 * OS1_S1 + 13) -
                p_over_q * *(b + 403 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 13);
            *(b + 316 * OS1_S1 + 28) =
                prefactor_x * *(b + 316 * OS1_S1 + 18) -
                p_over_q * *(b + 394 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 18);
            *(b + 316 * OS1_S1 + 29) =
                prefactor_x * *(b + 316 * OS1_S1 + 19) -
                p_over_q * *(b + 394 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 250 * OS1_S1 + 19);
            *(b + 316 * OS1_S1 + 30) =
                prefactor_y * *(b + 316 * OS1_S1 + 16) -
                p_over_q * *(b + 402 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 7);
            *(b + 316 * OS1_S1 + 31) =
                prefactor_z * *(b + 316 * OS1_S1 + 16) -
                p_over_q * *(b + 403 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 16);
            *(b + 316 * OS1_S1 + 32) =
                prefactor_z * *(b + 316 * OS1_S1 + 17) -
                p_over_q * *(b + 403 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 17) +
                one_over_two_q * *(b + 316 * OS1_S1 + 7);
            *(b + 316 * OS1_S1 + 33) =
                prefactor_y * *(b + 316 * OS1_S1 + 19) -
                p_over_q * *(b + 402 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 243 * OS1_S1 + 19);
            *(b + 316 * OS1_S1 + 34) =
                prefactor_z * *(b + 316 * OS1_S1 + 19) -
                p_over_q * *(b + 403 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 242 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 9);
            *(b + 317 * OS1_S1 + 20) =
                prefactor_x * *(b + 317 * OS1_S1 + 10) -
                p_over_q * *(b + 395 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 317 * OS1_S1 + 4);
            *(b + 317 * OS1_S1 + 21) =
                prefactor_y * *(b + 317 * OS1_S1 + 10) -
                p_over_q * *(b + 403 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 10);
            *(b + 317 * OS1_S1 + 22) =
                prefactor_z * *(b + 317 * OS1_S1 + 10) -
                p_over_q * *(b + 404 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 10);
            *(b + 317 * OS1_S1 + 23) =
                prefactor_y * *(b + 317 * OS1_S1 + 11) -
                p_over_q * *(b + 403 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 11) +
                one_over_two_q * *(b + 317 * OS1_S1 + 4);
            *(b + 317 * OS1_S1 + 24) =
                prefactor_z * *(b + 317 * OS1_S1 + 11) -
                p_over_q * *(b + 404 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 11);
            *(b + 317 * OS1_S1 + 25) =
                prefactor_z * *(b + 317 * OS1_S1 + 12) -
                p_over_q * *(b + 404 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 12) +
                one_over_two_q * *(b + 317 * OS1_S1 + 4);
            *(b + 317 * OS1_S1 + 26) =
                prefactor_x * *(b + 317 * OS1_S1 + 16) -
                p_over_q * *(b + 395 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 16);
            *(b + 317 * OS1_S1 + 27) =
                prefactor_z * *(b + 317 * OS1_S1 + 13) -
                p_over_q * *(b + 404 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 13);
            *(b + 317 * OS1_S1 + 28) =
                prefactor_y * *(b + 317 * OS1_S1 + 15) -
                p_over_q * *(b + 403 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 15);
            *(b + 317 * OS1_S1 + 29) =
                prefactor_x * *(b + 317 * OS1_S1 + 19) -
                p_over_q * *(b + 395 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 19);
            *(b + 317 * OS1_S1 + 30) =
                prefactor_y * *(b + 317 * OS1_S1 + 16) -
                p_over_q * *(b + 403 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 317 * OS1_S1 + 7);
            *(b + 317 * OS1_S1 + 31) =
                prefactor_z * *(b + 317 * OS1_S1 + 16) -
                p_over_q * *(b + 404 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 16);
            *(b + 317 * OS1_S1 + 32) =
                prefactor_z * *(b + 317 * OS1_S1 + 17) -
                p_over_q * *(b + 404 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 17) +
                one_over_two_q * *(b + 317 * OS1_S1 + 7);
            *(b + 317 * OS1_S1 + 33) =
                prefactor_y * *(b + 317 * OS1_S1 + 19) -
                p_over_q * *(b + 403 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 19);
            *(b + 317 * OS1_S1 + 34) =
                prefactor_z * *(b + 317 * OS1_S1 + 19) -
                p_over_q * *(b + 404 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 243 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 317 * OS1_S1 + 9);
            *(b + 318 * OS1_S1 + 20) =
                prefactor_x * *(b + 318 * OS1_S1 + 10) -
                p_over_q * *(b + 396 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 318 * OS1_S1 + 4);
            *(b + 318 * OS1_S1 + 21) =
                prefactor_y * *(b + 318 * OS1_S1 + 10) -
                p_over_q * *(b + 404 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 10);
            *(b + 318 * OS1_S1 + 22) =
                prefactor_z * *(b + 318 * OS1_S1 + 10) -
                p_over_q * *(b + 405 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 10);
            *(b + 318 * OS1_S1 + 23) =
                prefactor_y * *(b + 318 * OS1_S1 + 11) -
                p_over_q * *(b + 404 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 11) +
                one_over_two_q * *(b + 318 * OS1_S1 + 4);
            *(b + 318 * OS1_S1 + 24) =
                prefactor_y * *(b + 318 * OS1_S1 + 12) -
                p_over_q * *(b + 404 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 12);
            *(b + 318 * OS1_S1 + 25) =
                prefactor_z * *(b + 318 * OS1_S1 + 12) -
                p_over_q * *(b + 405 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 12) +
                one_over_two_q * *(b + 318 * OS1_S1 + 4);
            *(b + 318 * OS1_S1 + 26) =
                prefactor_x * *(b + 318 * OS1_S1 + 16) -
                p_over_q * *(b + 396 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 16);
            *(b + 318 * OS1_S1 + 27) =
                prefactor_z * *(b + 318 * OS1_S1 + 13) -
                p_over_q * *(b + 405 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 13);
            *(b + 318 * OS1_S1 + 28) =
                prefactor_y * *(b + 318 * OS1_S1 + 15) -
                p_over_q * *(b + 404 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 15);
            *(b + 318 * OS1_S1 + 29) =
                prefactor_x * *(b + 318 * OS1_S1 + 19) -
                p_over_q * *(b + 396 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 19);
            *(b + 318 * OS1_S1 + 30) =
                prefactor_y * *(b + 318 * OS1_S1 + 16) -
                p_over_q * *(b + 404 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 318 * OS1_S1 + 7);
            *(b + 318 * OS1_S1 + 31) =
                prefactor_z * *(b + 318 * OS1_S1 + 16) -
                p_over_q * *(b + 405 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 16);
            *(b + 318 * OS1_S1 + 32) =
                prefactor_y * *(b + 318 * OS1_S1 + 18) -
                p_over_q * *(b + 404 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 18) +
                one_over_two_q * *(b + 318 * OS1_S1 + 9);
            *(b + 318 * OS1_S1 + 33) =
                prefactor_y * *(b + 318 * OS1_S1 + 19) -
                p_over_q * *(b + 404 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 245 * OS1_S1 + 19);
            *(b + 318 * OS1_S1 + 34) =
                prefactor_z * *(b + 318 * OS1_S1 + 19) -
                p_over_q * *(b + 405 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 244 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 318 * OS1_S1 + 9);
            *(b + 319 * OS1_S1 + 20) =
                prefactor_x * *(b + 319 * OS1_S1 + 10) -
                p_over_q * *(b + 397 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 4);
            *(b + 319 * OS1_S1 + 21) =
                prefactor_y * *(b + 319 * OS1_S1 + 10) -
                p_over_q * *(b + 405 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 10);
            *(b + 319 * OS1_S1 + 22) =
                prefactor_z * *(b + 319 * OS1_S1 + 10) -
                p_over_q * *(b + 406 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 10);
            *(b + 319 * OS1_S1 + 23) =
                prefactor_y * *(b + 319 * OS1_S1 + 11) -
                p_over_q * *(b + 405 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 11) +
                one_over_two_q * *(b + 319 * OS1_S1 + 4);
            *(b + 319 * OS1_S1 + 24) =
                prefactor_y * *(b + 319 * OS1_S1 + 12) -
                p_over_q * *(b + 405 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 12);
            *(b + 319 * OS1_S1 + 25) =
                prefactor_x * *(b + 319 * OS1_S1 + 15) -
                p_over_q * *(b + 397 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 15) +
                one_over_two_q * *(b + 319 * OS1_S1 + 9);
            *(b + 319 * OS1_S1 + 26) =
                prefactor_x * *(b + 319 * OS1_S1 + 16) -
                p_over_q * *(b + 397 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 16);
            *(b + 319 * OS1_S1 + 27) =
                prefactor_x * *(b + 319 * OS1_S1 + 17) -
                p_over_q * *(b + 397 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 17);
            *(b + 319 * OS1_S1 + 28) =
                prefactor_y * *(b + 319 * OS1_S1 + 15) -
                p_over_q * *(b + 405 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 15);
            *(b + 319 * OS1_S1 + 29) =
                prefactor_x * *(b + 319 * OS1_S1 + 19) -
                p_over_q * *(b + 397 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 253 * OS1_S1 + 19);
            *(b + 319 * OS1_S1 + 30) =
                prefactor_y * *(b + 319 * OS1_S1 + 16) -
                p_over_q * *(b + 405 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 7);
            *(b + 319 * OS1_S1 + 31) =
                prefactor_z * *(b + 319 * OS1_S1 + 16) -
                p_over_q * *(b + 406 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 16);
            *(b + 319 * OS1_S1 + 32) =
                prefactor_y * *(b + 319 * OS1_S1 + 18) -
                p_over_q * *(b + 405 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 18) +
                one_over_two_q * *(b + 319 * OS1_S1 + 9);
            *(b + 319 * OS1_S1 + 33) =
                prefactor_y * *(b + 319 * OS1_S1 + 19) -
                p_over_q * *(b + 405 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 246 * OS1_S1 + 19);
            *(b + 319 * OS1_S1 + 34) =
                prefactor_z * *(b + 319 * OS1_S1 + 19) -
                p_over_q * *(b + 406 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 245 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 9);
            *(b + 320 * OS1_S1 + 20) =
                prefactor_x * *(b + 320 * OS1_S1 + 10) -
                p_over_q * *(b + 398 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 320 * OS1_S1 + 4);
            *(b + 320 * OS1_S1 + 21) =
                prefactor_y * *(b + 320 * OS1_S1 + 10) -
                p_over_q * *(b + 406 * OS1_S1 + 10) +
                one_over_two_q * *(b + 247 * OS1_S1 + 10);
            *(b + 320 * OS1_S1 + 22) =
                prefactor_z * *(b + 320 * OS1_S1 + 10) -
                p_over_q * *(b + 407 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 10);
            *(b + 320 * OS1_S1 + 23) =
                prefactor_y * *(b + 320 * OS1_S1 + 11) -
                p_over_q * *(b + 406 * OS1_S1 + 11) +
                one_over_two_q * *(b + 247 * OS1_S1 + 11) +
                one_over_two_q * *(b + 320 * OS1_S1 + 4);
            *(b + 320 * OS1_S1 + 24) =
                prefactor_y * *(b + 320 * OS1_S1 + 12) -
                p_over_q * *(b + 406 * OS1_S1 + 12) +
                one_over_two_q * *(b + 247 * OS1_S1 + 12);
            *(b + 320 * OS1_S1 + 25) =
                prefactor_x * *(b + 320 * OS1_S1 + 15) -
                p_over_q * *(b + 398 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 15) +
                one_over_two_q * *(b + 320 * OS1_S1 + 9);
            *(b + 320 * OS1_S1 + 26) =
                prefactor_x * *(b + 320 * OS1_S1 + 16) -
                p_over_q * *(b + 398 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 16);
            *(b + 320 * OS1_S1 + 27) =
                prefactor_x * *(b + 320 * OS1_S1 + 17) -
                p_over_q * *(b + 398 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 17);
            *(b + 320 * OS1_S1 + 28) =
                prefactor_y * *(b + 320 * OS1_S1 + 15) -
                p_over_q * *(b + 406 * OS1_S1 + 15) +
                one_over_two_q * *(b + 247 * OS1_S1 + 15);
            *(b + 320 * OS1_S1 + 29) =
                prefactor_x * *(b + 320 * OS1_S1 + 19) -
                p_over_q * *(b + 398 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 254 * OS1_S1 + 19);
            *(b + 320 * OS1_S1 + 30) =
                prefactor_y * *(b + 320 * OS1_S1 + 16) -
                p_over_q * *(b + 406 * OS1_S1 + 16) +
                one_over_two_q * *(b + 247 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 320 * OS1_S1 + 7);
            *(b + 320 * OS1_S1 + 31) =
                prefactor_z * *(b + 320 * OS1_S1 + 16) -
                p_over_q * *(b + 407 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 16);
            *(b + 320 * OS1_S1 + 32) =
                prefactor_y * *(b + 320 * OS1_S1 + 18) -
                p_over_q * *(b + 406 * OS1_S1 + 18) +
                one_over_two_q * *(b + 247 * OS1_S1 + 18) +
                one_over_two_q * *(b + 320 * OS1_S1 + 9);
            *(b + 320 * OS1_S1 + 33) =
                prefactor_y * *(b + 320 * OS1_S1 + 19) -
                p_over_q * *(b + 406 * OS1_S1 + 19) +
                one_over_two_q * *(b + 247 * OS1_S1 + 19);
            *(b + 320 * OS1_S1 + 34) =
                prefactor_z * *(b + 320 * OS1_S1 + 19) -
                p_over_q * *(b + 407 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 246 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 320 * OS1_S1 + 9);
            *(b + 321 * OS1_S1 + 20) =
                prefactor_x * *(b + 321 * OS1_S1 + 10) -
                p_over_q * *(b + 399 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 321 * OS1_S1 + 4);
            *(b + 321 * OS1_S1 + 21) = prefactor_y * *(b + 321 * OS1_S1 + 10) -
                                       p_over_q * *(b + 407 * OS1_S1 + 10);
            *(b + 321 * OS1_S1 + 22) =
                prefactor_z * *(b + 321 * OS1_S1 + 10) -
                p_over_q * *(b + 408 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 10);
            *(b + 321 * OS1_S1 + 23) = prefactor_y * *(b + 321 * OS1_S1 + 11) -
                                       p_over_q * *(b + 407 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 321 * OS1_S1 + 4);
            *(b + 321 * OS1_S1 + 24) = prefactor_y * *(b + 321 * OS1_S1 + 12) -
                                       p_over_q * *(b + 407 * OS1_S1 + 12);
            *(b + 321 * OS1_S1 + 25) =
                prefactor_x * *(b + 321 * OS1_S1 + 15) -
                p_over_q * *(b + 399 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 15) +
                one_over_two_q * *(b + 321 * OS1_S1 + 9);
            *(b + 321 * OS1_S1 + 26) =
                prefactor_x * *(b + 321 * OS1_S1 + 16) -
                p_over_q * *(b + 399 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 16);
            *(b + 321 * OS1_S1 + 27) =
                prefactor_x * *(b + 321 * OS1_S1 + 17) -
                p_over_q * *(b + 399 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 17);
            *(b + 321 * OS1_S1 + 28) = prefactor_y * *(b + 321 * OS1_S1 + 15) -
                                       p_over_q * *(b + 407 * OS1_S1 + 15);
            *(b + 321 * OS1_S1 + 29) =
                prefactor_x * *(b + 321 * OS1_S1 + 19) -
                p_over_q * *(b + 399 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 255 * OS1_S1 + 19);
            *(b + 321 * OS1_S1 + 30) =
                prefactor_y * *(b + 321 * OS1_S1 + 16) -
                p_over_q * *(b + 407 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 321 * OS1_S1 + 7);
            *(b + 321 * OS1_S1 + 31) =
                prefactor_z * *(b + 321 * OS1_S1 + 16) -
                p_over_q * *(b + 408 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 16);
            *(b + 321 * OS1_S1 + 32) = prefactor_y * *(b + 321 * OS1_S1 + 18) -
                                       p_over_q * *(b + 407 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 321 * OS1_S1 + 9);
            *(b + 321 * OS1_S1 + 33) = prefactor_y * *(b + 321 * OS1_S1 + 19) -
                                       p_over_q * *(b + 407 * OS1_S1 + 19);
            *(b + 321 * OS1_S1 + 34) =
                prefactor_z * *(b + 321 * OS1_S1 + 19) -
                p_over_q * *(b + 408 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 247 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 321 * OS1_S1 + 9);
            *(b + 322 * OS1_S1 + 20) =
                prefactor_x * *(b + 322 * OS1_S1 + 10) -
                p_over_q * *(b + 400 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 322 * OS1_S1 + 4);
            *(b + 322 * OS1_S1 + 21) =
                prefactor_y * *(b + 322 * OS1_S1 + 10) -
                p_over_q * *(b + 409 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 10);
            *(b + 322 * OS1_S1 + 22) = prefactor_z * *(b + 322 * OS1_S1 + 10) -
                                       p_over_q * *(b + 410 * OS1_S1 + 10);
            *(b + 322 * OS1_S1 + 23) =
                prefactor_x * *(b + 322 * OS1_S1 + 13) -
                p_over_q * *(b + 400 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 13) +
                one_over_two_q * *(b + 322 * OS1_S1 + 7);
            *(b + 322 * OS1_S1 + 24) = prefactor_z * *(b + 322 * OS1_S1 + 11) -
                                       p_over_q * *(b + 410 * OS1_S1 + 11);
            *(b + 322 * OS1_S1 + 25) = prefactor_z * *(b + 322 * OS1_S1 + 12) -
                                       p_over_q * *(b + 410 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 322 * OS1_S1 + 4);
            *(b + 322 * OS1_S1 + 26) =
                prefactor_x * *(b + 322 * OS1_S1 + 16) -
                p_over_q * *(b + 400 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 16);
            *(b + 322 * OS1_S1 + 27) = prefactor_z * *(b + 322 * OS1_S1 + 13) -
                                       p_over_q * *(b + 410 * OS1_S1 + 13);
            *(b + 322 * OS1_S1 + 28) =
                prefactor_x * *(b + 322 * OS1_S1 + 18) -
                p_over_q * *(b + 400 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 18);
            *(b + 322 * OS1_S1 + 29) =
                prefactor_x * *(b + 322 * OS1_S1 + 19) -
                p_over_q * *(b + 400 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 256 * OS1_S1 + 19);
            *(b + 322 * OS1_S1 + 30) =
                prefactor_y * *(b + 322 * OS1_S1 + 16) -
                p_over_q * *(b + 409 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 322 * OS1_S1 + 7);
            *(b + 322 * OS1_S1 + 31) = prefactor_z * *(b + 322 * OS1_S1 + 16) -
                                       p_over_q * *(b + 410 * OS1_S1 + 16);
            *(b + 322 * OS1_S1 + 32) = prefactor_z * *(b + 322 * OS1_S1 + 17) -
                                       p_over_q * *(b + 410 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 322 * OS1_S1 + 7);
            *(b + 322 * OS1_S1 + 33) =
                prefactor_y * *(b + 322 * OS1_S1 + 19) -
                p_over_q * *(b + 409 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 248 * OS1_S1 + 19);
            *(b + 322 * OS1_S1 + 34) =
                prefactor_z * *(b + 322 * OS1_S1 + 19) -
                p_over_q * *(b + 410 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 322 * OS1_S1 + 9);
            *(b + 323 * OS1_S1 + 20) =
                prefactor_x * *(b + 323 * OS1_S1 + 10) -
                p_over_q * *(b + 401 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 323 * OS1_S1 + 4);
            *(b + 323 * OS1_S1 + 21) =
                prefactor_y * *(b + 323 * OS1_S1 + 10) -
                p_over_q * *(b + 410 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 10);
            *(b + 323 * OS1_S1 + 22) =
                prefactor_z * *(b + 323 * OS1_S1 + 10) -
                p_over_q * *(b + 411 * OS1_S1 + 10) +
                one_over_two_q * *(b + 248 * OS1_S1 + 10);
            *(b + 323 * OS1_S1 + 23) =
                prefactor_x * *(b + 323 * OS1_S1 + 13) -
                p_over_q * *(b + 401 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 13) +
                one_over_two_q * *(b + 323 * OS1_S1 + 7);
            *(b + 323 * OS1_S1 + 24) =
                prefactor_z * *(b + 323 * OS1_S1 + 11) -
                p_over_q * *(b + 411 * OS1_S1 + 11) +
                one_over_two_q * *(b + 248 * OS1_S1 + 11);
            *(b + 323 * OS1_S1 + 25) =
                prefactor_z * *(b + 323 * OS1_S1 + 12) -
                p_over_q * *(b + 411 * OS1_S1 + 12) +
                one_over_two_q * *(b + 248 * OS1_S1 + 12) +
                one_over_two_q * *(b + 323 * OS1_S1 + 4);
            *(b + 323 * OS1_S1 + 26) =
                prefactor_x * *(b + 323 * OS1_S1 + 16) -
                p_over_q * *(b + 401 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 16);
            *(b + 323 * OS1_S1 + 27) =
                prefactor_z * *(b + 323 * OS1_S1 + 13) -
                p_over_q * *(b + 411 * OS1_S1 + 13) +
                one_over_two_q * *(b + 248 * OS1_S1 + 13);
            *(b + 323 * OS1_S1 + 28) =
                prefactor_x * *(b + 323 * OS1_S1 + 18) -
                p_over_q * *(b + 401 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 18);
            *(b + 323 * OS1_S1 + 29) =
                prefactor_x * *(b + 323 * OS1_S1 + 19) -
                p_over_q * *(b + 401 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 257 * OS1_S1 + 19);
            *(b + 323 * OS1_S1 + 30) =
                prefactor_y * *(b + 323 * OS1_S1 + 16) -
                p_over_q * *(b + 410 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 323 * OS1_S1 + 7);
            *(b + 323 * OS1_S1 + 31) =
                prefactor_z * *(b + 323 * OS1_S1 + 16) -
                p_over_q * *(b + 411 * OS1_S1 + 16) +
                one_over_two_q * *(b + 248 * OS1_S1 + 16);
            *(b + 323 * OS1_S1 + 32) =
                prefactor_z * *(b + 323 * OS1_S1 + 17) -
                p_over_q * *(b + 411 * OS1_S1 + 17) +
                one_over_two_q * *(b + 248 * OS1_S1 + 17) +
                one_over_two_q * *(b + 323 * OS1_S1 + 7);
            *(b + 323 * OS1_S1 + 33) =
                prefactor_y * *(b + 323 * OS1_S1 + 19) -
                p_over_q * *(b + 410 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 249 * OS1_S1 + 19);
            *(b + 323 * OS1_S1 + 34) =
                prefactor_z * *(b + 323 * OS1_S1 + 19) -
                p_over_q * *(b + 411 * OS1_S1 + 19) +
                one_over_two_q * *(b + 248 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 323 * OS1_S1 + 9);
            *(b + 324 * OS1_S1 + 20) =
                prefactor_x * *(b + 324 * OS1_S1 + 10) -
                p_over_q * *(b + 402 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 4);
            *(b + 324 * OS1_S1 + 21) =
                prefactor_y * *(b + 324 * OS1_S1 + 10) -
                p_over_q * *(b + 411 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 10);
            *(b + 324 * OS1_S1 + 22) =
                prefactor_z * *(b + 324 * OS1_S1 + 10) -
                p_over_q * *(b + 412 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 10);
            *(b + 324 * OS1_S1 + 23) =
                prefactor_x * *(b + 324 * OS1_S1 + 13) -
                p_over_q * *(b + 402 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 13) +
                one_over_two_q * *(b + 324 * OS1_S1 + 7);
            *(b + 324 * OS1_S1 + 24) =
                prefactor_z * *(b + 324 * OS1_S1 + 11) -
                p_over_q * *(b + 412 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 11);
            *(b + 324 * OS1_S1 + 25) =
                prefactor_z * *(b + 324 * OS1_S1 + 12) -
                p_over_q * *(b + 412 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 12) +
                one_over_two_q * *(b + 324 * OS1_S1 + 4);
            *(b + 324 * OS1_S1 + 26) =
                prefactor_x * *(b + 324 * OS1_S1 + 16) -
                p_over_q * *(b + 402 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 16);
            *(b + 324 * OS1_S1 + 27) =
                prefactor_z * *(b + 324 * OS1_S1 + 13) -
                p_over_q * *(b + 412 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 13);
            *(b + 324 * OS1_S1 + 28) =
                prefactor_x * *(b + 324 * OS1_S1 + 18) -
                p_over_q * *(b + 402 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 18);
            *(b + 324 * OS1_S1 + 29) =
                prefactor_x * *(b + 324 * OS1_S1 + 19) -
                p_over_q * *(b + 402 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 19);
            *(b + 324 * OS1_S1 + 30) =
                prefactor_y * *(b + 324 * OS1_S1 + 16) -
                p_over_q * *(b + 411 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 7);
            *(b + 324 * OS1_S1 + 31) =
                prefactor_z * *(b + 324 * OS1_S1 + 16) -
                p_over_q * *(b + 412 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 16);
            *(b + 324 * OS1_S1 + 32) =
                prefactor_z * *(b + 324 * OS1_S1 + 17) -
                p_over_q * *(b + 412 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 17) +
                one_over_two_q * *(b + 324 * OS1_S1 + 7);
            *(b + 324 * OS1_S1 + 33) =
                prefactor_y * *(b + 324 * OS1_S1 + 19) -
                p_over_q * *(b + 411 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 250 * OS1_S1 + 19);
            *(b + 324 * OS1_S1 + 34) =
                prefactor_z * *(b + 324 * OS1_S1 + 19) -
                p_over_q * *(b + 412 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 249 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 9);
            *(b + 325 * OS1_S1 + 20) =
                prefactor_x * *(b + 325 * OS1_S1 + 10) -
                p_over_q * *(b + 403 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 325 * OS1_S1 + 4);
            *(b + 325 * OS1_S1 + 21) =
                prefactor_y * *(b + 325 * OS1_S1 + 10) -
                p_over_q * *(b + 412 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 10);
            *(b + 325 * OS1_S1 + 22) =
                prefactor_z * *(b + 325 * OS1_S1 + 10) -
                p_over_q * *(b + 413 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 10);
            *(b + 325 * OS1_S1 + 23) =
                prefactor_x * *(b + 325 * OS1_S1 + 13) -
                p_over_q * *(b + 403 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 13) +
                one_over_two_q * *(b + 325 * OS1_S1 + 7);
            *(b + 325 * OS1_S1 + 24) =
                prefactor_z * *(b + 325 * OS1_S1 + 11) -
                p_over_q * *(b + 413 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 11);
            *(b + 325 * OS1_S1 + 25) =
                prefactor_z * *(b + 325 * OS1_S1 + 12) -
                p_over_q * *(b + 413 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 12) +
                one_over_two_q * *(b + 325 * OS1_S1 + 4);
            *(b + 325 * OS1_S1 + 26) =
                prefactor_x * *(b + 325 * OS1_S1 + 16) -
                p_over_q * *(b + 403 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 16);
            *(b + 325 * OS1_S1 + 27) =
                prefactor_z * *(b + 325 * OS1_S1 + 13) -
                p_over_q * *(b + 413 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 13);
            *(b + 325 * OS1_S1 + 28) =
                prefactor_x * *(b + 325 * OS1_S1 + 18) -
                p_over_q * *(b + 403 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 18);
            *(b + 325 * OS1_S1 + 29) =
                prefactor_x * *(b + 325 * OS1_S1 + 19) -
                p_over_q * *(b + 403 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 259 * OS1_S1 + 19);
            *(b + 325 * OS1_S1 + 30) =
                prefactor_y * *(b + 325 * OS1_S1 + 16) -
                p_over_q * *(b + 412 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 325 * OS1_S1 + 7);
            *(b + 325 * OS1_S1 + 31) =
                prefactor_z * *(b + 325 * OS1_S1 + 16) -
                p_over_q * *(b + 413 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 16);
            *(b + 325 * OS1_S1 + 32) =
                prefactor_z * *(b + 325 * OS1_S1 + 17) -
                p_over_q * *(b + 413 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 17) +
                one_over_two_q * *(b + 325 * OS1_S1 + 7);
            *(b + 325 * OS1_S1 + 33) =
                prefactor_y * *(b + 325 * OS1_S1 + 19) -
                p_over_q * *(b + 412 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 251 * OS1_S1 + 19);
            *(b + 325 * OS1_S1 + 34) =
                prefactor_z * *(b + 325 * OS1_S1 + 19) -
                p_over_q * *(b + 413 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 250 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 325 * OS1_S1 + 9);
            *(b + 326 * OS1_S1 + 20) =
                prefactor_x * *(b + 326 * OS1_S1 + 10) -
                p_over_q * *(b + 404 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 326 * OS1_S1 + 4);
            *(b + 326 * OS1_S1 + 21) =
                prefactor_y * *(b + 326 * OS1_S1 + 10) -
                p_over_q * *(b + 413 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 10);
            *(b + 326 * OS1_S1 + 22) =
                prefactor_z * *(b + 326 * OS1_S1 + 10) -
                p_over_q * *(b + 414 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 10);
            *(b + 326 * OS1_S1 + 23) =
                prefactor_x * *(b + 326 * OS1_S1 + 13) -
                p_over_q * *(b + 404 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 13) +
                one_over_two_q * *(b + 326 * OS1_S1 + 7);
            *(b + 326 * OS1_S1 + 24) =
                prefactor_z * *(b + 326 * OS1_S1 + 11) -
                p_over_q * *(b + 414 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 11);
            *(b + 326 * OS1_S1 + 25) =
                prefactor_x * *(b + 326 * OS1_S1 + 15) -
                p_over_q * *(b + 404 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 15) +
                one_over_two_q * *(b + 326 * OS1_S1 + 9);
            *(b + 326 * OS1_S1 + 26) =
                prefactor_x * *(b + 326 * OS1_S1 + 16) -
                p_over_q * *(b + 404 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 16);
            *(b + 326 * OS1_S1 + 27) =
                prefactor_x * *(b + 326 * OS1_S1 + 17) -
                p_over_q * *(b + 404 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 17);
            *(b + 326 * OS1_S1 + 28) =
                prefactor_x * *(b + 326 * OS1_S1 + 18) -
                p_over_q * *(b + 404 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 18);
            *(b + 326 * OS1_S1 + 29) =
                prefactor_x * *(b + 326 * OS1_S1 + 19) -
                p_over_q * *(b + 404 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 260 * OS1_S1 + 19);
            *(b + 326 * OS1_S1 + 30) =
                prefactor_y * *(b + 326 * OS1_S1 + 16) -
                p_over_q * *(b + 413 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 326 * OS1_S1 + 7);
            *(b + 326 * OS1_S1 + 31) =
                prefactor_z * *(b + 326 * OS1_S1 + 16) -
                p_over_q * *(b + 414 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 16);
            *(b + 326 * OS1_S1 + 32) =
                prefactor_z * *(b + 326 * OS1_S1 + 17) -
                p_over_q * *(b + 414 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 17) +
                one_over_two_q * *(b + 326 * OS1_S1 + 7);
            *(b + 326 * OS1_S1 + 33) =
                prefactor_y * *(b + 326 * OS1_S1 + 19) -
                p_over_q * *(b + 413 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 252 * OS1_S1 + 19);
            *(b + 326 * OS1_S1 + 34) =
                prefactor_z * *(b + 326 * OS1_S1 + 19) -
                p_over_q * *(b + 414 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 251 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 326 * OS1_S1 + 9);
            *(b + 327 * OS1_S1 + 20) =
                prefactor_x * *(b + 327 * OS1_S1 + 10) -
                p_over_q * *(b + 405 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 327 * OS1_S1 + 4);
            *(b + 327 * OS1_S1 + 21) =
                prefactor_y * *(b + 327 * OS1_S1 + 10) -
                p_over_q * *(b + 414 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 10);
            *(b + 327 * OS1_S1 + 22) =
                prefactor_z * *(b + 327 * OS1_S1 + 10) -
                p_over_q * *(b + 415 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 10);
            *(b + 327 * OS1_S1 + 23) =
                prefactor_y * *(b + 327 * OS1_S1 + 11) -
                p_over_q * *(b + 414 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 11) +
                one_over_two_q * *(b + 327 * OS1_S1 + 4);
            *(b + 327 * OS1_S1 + 24) =
                prefactor_y * *(b + 327 * OS1_S1 + 12) -
                p_over_q * *(b + 414 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 12);
            *(b + 327 * OS1_S1 + 25) =
                prefactor_x * *(b + 327 * OS1_S1 + 15) -
                p_over_q * *(b + 405 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 15) +
                one_over_two_q * *(b + 327 * OS1_S1 + 9);
            *(b + 327 * OS1_S1 + 26) =
                prefactor_x * *(b + 327 * OS1_S1 + 16) -
                p_over_q * *(b + 405 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 16);
            *(b + 327 * OS1_S1 + 27) =
                prefactor_x * *(b + 327 * OS1_S1 + 17) -
                p_over_q * *(b + 405 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 17);
            *(b + 327 * OS1_S1 + 28) =
                prefactor_y * *(b + 327 * OS1_S1 + 15) -
                p_over_q * *(b + 414 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 15);
            *(b + 327 * OS1_S1 + 29) =
                prefactor_x * *(b + 327 * OS1_S1 + 19) -
                p_over_q * *(b + 405 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 261 * OS1_S1 + 19);
            *(b + 327 * OS1_S1 + 30) =
                prefactor_y * *(b + 327 * OS1_S1 + 16) -
                p_over_q * *(b + 414 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 327 * OS1_S1 + 7);
            *(b + 327 * OS1_S1 + 31) =
                prefactor_z * *(b + 327 * OS1_S1 + 16) -
                p_over_q * *(b + 415 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 16);
            *(b + 327 * OS1_S1 + 32) =
                prefactor_y * *(b + 327 * OS1_S1 + 18) -
                p_over_q * *(b + 414 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 18) +
                one_over_two_q * *(b + 327 * OS1_S1 + 9);
            *(b + 327 * OS1_S1 + 33) =
                prefactor_y * *(b + 327 * OS1_S1 + 19) -
                p_over_q * *(b + 414 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 253 * OS1_S1 + 19);
            *(b + 327 * OS1_S1 + 34) =
                prefactor_z * *(b + 327 * OS1_S1 + 19) -
                p_over_q * *(b + 415 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 252 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 327 * OS1_S1 + 9);
            *(b + 328 * OS1_S1 + 20) =
                prefactor_x * *(b + 328 * OS1_S1 + 10) -
                p_over_q * *(b + 406 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 4);
            *(b + 328 * OS1_S1 + 21) =
                prefactor_y * *(b + 328 * OS1_S1 + 10) -
                p_over_q * *(b + 415 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 10);
            *(b + 328 * OS1_S1 + 22) =
                prefactor_z * *(b + 328 * OS1_S1 + 10) -
                p_over_q * *(b + 416 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 10);
            *(b + 328 * OS1_S1 + 23) =
                prefactor_y * *(b + 328 * OS1_S1 + 11) -
                p_over_q * *(b + 415 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 11) +
                one_over_two_q * *(b + 328 * OS1_S1 + 4);
            *(b + 328 * OS1_S1 + 24) =
                prefactor_y * *(b + 328 * OS1_S1 + 12) -
                p_over_q * *(b + 415 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 12);
            *(b + 328 * OS1_S1 + 25) =
                prefactor_x * *(b + 328 * OS1_S1 + 15) -
                p_over_q * *(b + 406 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 15) +
                one_over_two_q * *(b + 328 * OS1_S1 + 9);
            *(b + 328 * OS1_S1 + 26) =
                prefactor_x * *(b + 328 * OS1_S1 + 16) -
                p_over_q * *(b + 406 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 16);
            *(b + 328 * OS1_S1 + 27) =
                prefactor_x * *(b + 328 * OS1_S1 + 17) -
                p_over_q * *(b + 406 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 17);
            *(b + 328 * OS1_S1 + 28) =
                prefactor_y * *(b + 328 * OS1_S1 + 15) -
                p_over_q * *(b + 415 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 15);
            *(b + 328 * OS1_S1 + 29) =
                prefactor_x * *(b + 328 * OS1_S1 + 19) -
                p_over_q * *(b + 406 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 19);
            *(b + 328 * OS1_S1 + 30) =
                prefactor_y * *(b + 328 * OS1_S1 + 16) -
                p_over_q * *(b + 415 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 7);
            *(b + 328 * OS1_S1 + 31) =
                prefactor_z * *(b + 328 * OS1_S1 + 16) -
                p_over_q * *(b + 416 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 16);
            *(b + 328 * OS1_S1 + 32) =
                prefactor_y * *(b + 328 * OS1_S1 + 18) -
                p_over_q * *(b + 415 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 18) +
                one_over_two_q * *(b + 328 * OS1_S1 + 9);
            *(b + 328 * OS1_S1 + 33) =
                prefactor_y * *(b + 328 * OS1_S1 + 19) -
                p_over_q * *(b + 415 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 254 * OS1_S1 + 19);
            *(b + 328 * OS1_S1 + 34) =
                prefactor_z * *(b + 328 * OS1_S1 + 19) -
                p_over_q * *(b + 416 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 253 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 9);
            *(b + 329 * OS1_S1 + 20) =
                prefactor_x * *(b + 329 * OS1_S1 + 10) -
                p_over_q * *(b + 407 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 329 * OS1_S1 + 4);
            *(b + 329 * OS1_S1 + 21) =
                prefactor_y * *(b + 329 * OS1_S1 + 10) -
                p_over_q * *(b + 416 * OS1_S1 + 10) +
                one_over_two_q * *(b + 255 * OS1_S1 + 10);
            *(b + 329 * OS1_S1 + 22) =
                prefactor_z * *(b + 329 * OS1_S1 + 10) -
                p_over_q * *(b + 417 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 10);
            *(b + 329 * OS1_S1 + 23) =
                prefactor_y * *(b + 329 * OS1_S1 + 11) -
                p_over_q * *(b + 416 * OS1_S1 + 11) +
                one_over_two_q * *(b + 255 * OS1_S1 + 11) +
                one_over_two_q * *(b + 329 * OS1_S1 + 4);
            *(b + 329 * OS1_S1 + 24) =
                prefactor_y * *(b + 329 * OS1_S1 + 12) -
                p_over_q * *(b + 416 * OS1_S1 + 12) +
                one_over_two_q * *(b + 255 * OS1_S1 + 12);
            *(b + 329 * OS1_S1 + 25) =
                prefactor_x * *(b + 329 * OS1_S1 + 15) -
                p_over_q * *(b + 407 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 15) +
                one_over_two_q * *(b + 329 * OS1_S1 + 9);
            *(b + 329 * OS1_S1 + 26) =
                prefactor_x * *(b + 329 * OS1_S1 + 16) -
                p_over_q * *(b + 407 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 16);
            *(b + 329 * OS1_S1 + 27) =
                prefactor_x * *(b + 329 * OS1_S1 + 17) -
                p_over_q * *(b + 407 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 17);
            *(b + 329 * OS1_S1 + 28) =
                prefactor_y * *(b + 329 * OS1_S1 + 15) -
                p_over_q * *(b + 416 * OS1_S1 + 15) +
                one_over_two_q * *(b + 255 * OS1_S1 + 15);
            *(b + 329 * OS1_S1 + 29) =
                prefactor_x * *(b + 329 * OS1_S1 + 19) -
                p_over_q * *(b + 407 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 263 * OS1_S1 + 19);
            *(b + 329 * OS1_S1 + 30) =
                prefactor_y * *(b + 329 * OS1_S1 + 16) -
                p_over_q * *(b + 416 * OS1_S1 + 16) +
                one_over_two_q * *(b + 255 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 329 * OS1_S1 + 7);
            *(b + 329 * OS1_S1 + 31) =
                prefactor_z * *(b + 329 * OS1_S1 + 16) -
                p_over_q * *(b + 417 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 16);
            *(b + 329 * OS1_S1 + 32) =
                prefactor_y * *(b + 329 * OS1_S1 + 18) -
                p_over_q * *(b + 416 * OS1_S1 + 18) +
                one_over_two_q * *(b + 255 * OS1_S1 + 18) +
                one_over_two_q * *(b + 329 * OS1_S1 + 9);
            *(b + 329 * OS1_S1 + 33) =
                prefactor_y * *(b + 329 * OS1_S1 + 19) -
                p_over_q * *(b + 416 * OS1_S1 + 19) +
                one_over_two_q * *(b + 255 * OS1_S1 + 19);
            *(b + 329 * OS1_S1 + 34) =
                prefactor_z * *(b + 329 * OS1_S1 + 19) -
                p_over_q * *(b + 417 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 254 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 329 * OS1_S1 + 9);
            *(b + 330 * OS1_S1 + 20) =
                prefactor_x * *(b + 330 * OS1_S1 + 10) -
                p_over_q * *(b + 408 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 330 * OS1_S1 + 4);
            *(b + 330 * OS1_S1 + 21) = prefactor_y * *(b + 330 * OS1_S1 + 10) -
                                       p_over_q * *(b + 417 * OS1_S1 + 10);
            *(b + 330 * OS1_S1 + 22) =
                prefactor_z * *(b + 330 * OS1_S1 + 10) -
                p_over_q * *(b + 418 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 10);
            *(b + 330 * OS1_S1 + 23) = prefactor_y * *(b + 330 * OS1_S1 + 11) -
                                       p_over_q * *(b + 417 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 330 * OS1_S1 + 4);
            *(b + 330 * OS1_S1 + 24) = prefactor_y * *(b + 330 * OS1_S1 + 12) -
                                       p_over_q * *(b + 417 * OS1_S1 + 12);
            *(b + 330 * OS1_S1 + 25) =
                prefactor_x * *(b + 330 * OS1_S1 + 15) -
                p_over_q * *(b + 408 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 15) +
                one_over_two_q * *(b + 330 * OS1_S1 + 9);
            *(b + 330 * OS1_S1 + 26) =
                prefactor_x * *(b + 330 * OS1_S1 + 16) -
                p_over_q * *(b + 408 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 16);
            *(b + 330 * OS1_S1 + 27) =
                prefactor_x * *(b + 330 * OS1_S1 + 17) -
                p_over_q * *(b + 408 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 17);
            *(b + 330 * OS1_S1 + 28) = prefactor_y * *(b + 330 * OS1_S1 + 15) -
                                       p_over_q * *(b + 417 * OS1_S1 + 15);
            *(b + 330 * OS1_S1 + 29) =
                prefactor_x * *(b + 330 * OS1_S1 + 19) -
                p_over_q * *(b + 408 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 264 * OS1_S1 + 19);
            *(b + 330 * OS1_S1 + 30) =
                prefactor_y * *(b + 330 * OS1_S1 + 16) -
                p_over_q * *(b + 417 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 330 * OS1_S1 + 7);
            *(b + 330 * OS1_S1 + 31) =
                prefactor_z * *(b + 330 * OS1_S1 + 16) -
                p_over_q * *(b + 418 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 16);
            *(b + 330 * OS1_S1 + 32) = prefactor_y * *(b + 330 * OS1_S1 + 18) -
                                       p_over_q * *(b + 417 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 330 * OS1_S1 + 9);
            *(b + 330 * OS1_S1 + 33) = prefactor_y * *(b + 330 * OS1_S1 + 19) -
                                       p_over_q * *(b + 417 * OS1_S1 + 19);
            *(b + 330 * OS1_S1 + 34) =
                prefactor_z * *(b + 330 * OS1_S1 + 19) -
                p_over_q * *(b + 418 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 255 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 330 * OS1_S1 + 9);
            *(b + 331 * OS1_S1 + 20) =
                prefactor_x * *(b + 331 * OS1_S1 + 10) -
                p_over_q * *(b + 409 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 4);
            *(b + 331 * OS1_S1 + 21) =
                prefactor_y * *(b + 331 * OS1_S1 + 10) -
                p_over_q * *(b + 419 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 10);
            *(b + 331 * OS1_S1 + 22) = prefactor_z * *(b + 331 * OS1_S1 + 10) -
                                       p_over_q * *(b + 420 * OS1_S1 + 10);
            *(b + 331 * OS1_S1 + 23) =
                prefactor_x * *(b + 331 * OS1_S1 + 13) -
                p_over_q * *(b + 409 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 13) +
                one_over_two_q * *(b + 331 * OS1_S1 + 7);
            *(b + 331 * OS1_S1 + 24) = prefactor_z * *(b + 331 * OS1_S1 + 11) -
                                       p_over_q * *(b + 420 * OS1_S1 + 11);
            *(b + 331 * OS1_S1 + 25) = prefactor_z * *(b + 331 * OS1_S1 + 12) -
                                       p_over_q * *(b + 420 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 331 * OS1_S1 + 4);
            *(b + 331 * OS1_S1 + 26) =
                prefactor_x * *(b + 331 * OS1_S1 + 16) -
                p_over_q * *(b + 409 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 16);
            *(b + 331 * OS1_S1 + 27) = prefactor_z * *(b + 331 * OS1_S1 + 13) -
                                       p_over_q * *(b + 420 * OS1_S1 + 13);
            *(b + 331 * OS1_S1 + 28) =
                prefactor_x * *(b + 331 * OS1_S1 + 18) -
                p_over_q * *(b + 409 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 18);
            *(b + 331 * OS1_S1 + 29) =
                prefactor_x * *(b + 331 * OS1_S1 + 19) -
                p_over_q * *(b + 409 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 265 * OS1_S1 + 19);
            *(b + 331 * OS1_S1 + 30) =
                prefactor_y * *(b + 331 * OS1_S1 + 16) -
                p_over_q * *(b + 419 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 7);
            *(b + 331 * OS1_S1 + 31) = prefactor_z * *(b + 331 * OS1_S1 + 16) -
                                       p_over_q * *(b + 420 * OS1_S1 + 16);
            *(b + 331 * OS1_S1 + 32) = prefactor_z * *(b + 331 * OS1_S1 + 17) -
                                       p_over_q * *(b + 420 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 331 * OS1_S1 + 7);
            *(b + 331 * OS1_S1 + 33) =
                prefactor_y * *(b + 331 * OS1_S1 + 19) -
                p_over_q * *(b + 419 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 256 * OS1_S1 + 19);
            *(b + 331 * OS1_S1 + 34) =
                prefactor_z * *(b + 331 * OS1_S1 + 19) -
                p_over_q * *(b + 420 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 9);
            *(b + 332 * OS1_S1 + 20) =
                prefactor_x * *(b + 332 * OS1_S1 + 10) -
                p_over_q * *(b + 410 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 4);
            *(b + 332 * OS1_S1 + 21) =
                prefactor_y * *(b + 332 * OS1_S1 + 10) -
                p_over_q * *(b + 420 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 10);
            *(b + 332 * OS1_S1 + 22) =
                prefactor_z * *(b + 332 * OS1_S1 + 10) -
                p_over_q * *(b + 421 * OS1_S1 + 10) +
                one_over_two_q * *(b + 256 * OS1_S1 + 10);
            *(b + 332 * OS1_S1 + 23) =
                prefactor_x * *(b + 332 * OS1_S1 + 13) -
                p_over_q * *(b + 410 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 13) +
                one_over_two_q * *(b + 332 * OS1_S1 + 7);
            *(b + 332 * OS1_S1 + 24) =
                prefactor_z * *(b + 332 * OS1_S1 + 11) -
                p_over_q * *(b + 421 * OS1_S1 + 11) +
                one_over_two_q * *(b + 256 * OS1_S1 + 11);
            *(b + 332 * OS1_S1 + 25) =
                prefactor_z * *(b + 332 * OS1_S1 + 12) -
                p_over_q * *(b + 421 * OS1_S1 + 12) +
                one_over_two_q * *(b + 256 * OS1_S1 + 12) +
                one_over_two_q * *(b + 332 * OS1_S1 + 4);
            *(b + 332 * OS1_S1 + 26) =
                prefactor_x * *(b + 332 * OS1_S1 + 16) -
                p_over_q * *(b + 410 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 16);
            *(b + 332 * OS1_S1 + 27) =
                prefactor_z * *(b + 332 * OS1_S1 + 13) -
                p_over_q * *(b + 421 * OS1_S1 + 13) +
                one_over_two_q * *(b + 256 * OS1_S1 + 13);
            *(b + 332 * OS1_S1 + 28) =
                prefactor_x * *(b + 332 * OS1_S1 + 18) -
                p_over_q * *(b + 410 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 18);
            *(b + 332 * OS1_S1 + 29) =
                prefactor_x * *(b + 332 * OS1_S1 + 19) -
                p_over_q * *(b + 410 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 19);
            *(b + 332 * OS1_S1 + 30) =
                prefactor_y * *(b + 332 * OS1_S1 + 16) -
                p_over_q * *(b + 420 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 7);
            *(b + 332 * OS1_S1 + 31) =
                prefactor_z * *(b + 332 * OS1_S1 + 16) -
                p_over_q * *(b + 421 * OS1_S1 + 16) +
                one_over_two_q * *(b + 256 * OS1_S1 + 16);
            *(b + 332 * OS1_S1 + 32) =
                prefactor_z * *(b + 332 * OS1_S1 + 17) -
                p_over_q * *(b + 421 * OS1_S1 + 17) +
                one_over_two_q * *(b + 256 * OS1_S1 + 17) +
                one_over_two_q * *(b + 332 * OS1_S1 + 7);
            *(b + 332 * OS1_S1 + 33) =
                prefactor_y * *(b + 332 * OS1_S1 + 19) -
                p_over_q * *(b + 420 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 257 * OS1_S1 + 19);
            *(b + 332 * OS1_S1 + 34) =
                prefactor_z * *(b + 332 * OS1_S1 + 19) -
                p_over_q * *(b + 421 * OS1_S1 + 19) +
                one_over_two_q * *(b + 256 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 9);
            *(b + 333 * OS1_S1 + 20) =
                prefactor_x * *(b + 333 * OS1_S1 + 10) -
                p_over_q * *(b + 411 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 4);
            *(b + 333 * OS1_S1 + 21) =
                prefactor_y * *(b + 333 * OS1_S1 + 10) -
                p_over_q * *(b + 421 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 10);
            *(b + 333 * OS1_S1 + 22) =
                prefactor_z * *(b + 333 * OS1_S1 + 10) -
                p_over_q * *(b + 422 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 10);
            *(b + 333 * OS1_S1 + 23) =
                prefactor_x * *(b + 333 * OS1_S1 + 13) -
                p_over_q * *(b + 411 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 13) +
                one_over_two_q * *(b + 333 * OS1_S1 + 7);
            *(b + 333 * OS1_S1 + 24) =
                prefactor_z * *(b + 333 * OS1_S1 + 11) -
                p_over_q * *(b + 422 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 11);
            *(b + 333 * OS1_S1 + 25) =
                prefactor_z * *(b + 333 * OS1_S1 + 12) -
                p_over_q * *(b + 422 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 12) +
                one_over_two_q * *(b + 333 * OS1_S1 + 4);
            *(b + 333 * OS1_S1 + 26) =
                prefactor_x * *(b + 333 * OS1_S1 + 16) -
                p_over_q * *(b + 411 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 16);
            *(b + 333 * OS1_S1 + 27) =
                prefactor_z * *(b + 333 * OS1_S1 + 13) -
                p_over_q * *(b + 422 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 13);
            *(b + 333 * OS1_S1 + 28) =
                prefactor_x * *(b + 333 * OS1_S1 + 18) -
                p_over_q * *(b + 411 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 18);
            *(b + 333 * OS1_S1 + 29) =
                prefactor_x * *(b + 333 * OS1_S1 + 19) -
                p_over_q * *(b + 411 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 267 * OS1_S1 + 19);
            *(b + 333 * OS1_S1 + 30) =
                prefactor_y * *(b + 333 * OS1_S1 + 16) -
                p_over_q * *(b + 421 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 7);
            *(b + 333 * OS1_S1 + 31) =
                prefactor_z * *(b + 333 * OS1_S1 + 16) -
                p_over_q * *(b + 422 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 16);
            *(b + 333 * OS1_S1 + 32) =
                prefactor_z * *(b + 333 * OS1_S1 + 17) -
                p_over_q * *(b + 422 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 17) +
                one_over_two_q * *(b + 333 * OS1_S1 + 7);
            *(b + 333 * OS1_S1 + 33) =
                prefactor_y * *(b + 333 * OS1_S1 + 19) -
                p_over_q * *(b + 421 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 258 * OS1_S1 + 19);
            *(b + 333 * OS1_S1 + 34) =
                prefactor_z * *(b + 333 * OS1_S1 + 19) -
                p_over_q * *(b + 422 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 257 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 9);
            *(b + 334 * OS1_S1 + 20) =
                prefactor_x * *(b + 334 * OS1_S1 + 10) -
                p_over_q * *(b + 412 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 4);
            *(b + 334 * OS1_S1 + 21) =
                prefactor_y * *(b + 334 * OS1_S1 + 10) -
                p_over_q * *(b + 422 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 10);
            *(b + 334 * OS1_S1 + 22) =
                prefactor_z * *(b + 334 * OS1_S1 + 10) -
                p_over_q * *(b + 423 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 10);
            *(b + 334 * OS1_S1 + 23) =
                prefactor_x * *(b + 334 * OS1_S1 + 13) -
                p_over_q * *(b + 412 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 13) +
                one_over_two_q * *(b + 334 * OS1_S1 + 7);
            *(b + 334 * OS1_S1 + 24) =
                prefactor_z * *(b + 334 * OS1_S1 + 11) -
                p_over_q * *(b + 423 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 11);
            *(b + 334 * OS1_S1 + 25) =
                prefactor_x * *(b + 334 * OS1_S1 + 15) -
                p_over_q * *(b + 412 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 15) +
                one_over_two_q * *(b + 334 * OS1_S1 + 9);
            *(b + 334 * OS1_S1 + 26) =
                prefactor_x * *(b + 334 * OS1_S1 + 16) -
                p_over_q * *(b + 412 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 16);
            *(b + 334 * OS1_S1 + 27) =
                prefactor_x * *(b + 334 * OS1_S1 + 17) -
                p_over_q * *(b + 412 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 17);
            *(b + 334 * OS1_S1 + 28) =
                prefactor_x * *(b + 334 * OS1_S1 + 18) -
                p_over_q * *(b + 412 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 18);
            *(b + 334 * OS1_S1 + 29) =
                prefactor_x * *(b + 334 * OS1_S1 + 19) -
                p_over_q * *(b + 412 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 268 * OS1_S1 + 19);
            *(b + 334 * OS1_S1 + 30) =
                prefactor_y * *(b + 334 * OS1_S1 + 16) -
                p_over_q * *(b + 422 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 7);
            *(b + 334 * OS1_S1 + 31) =
                prefactor_z * *(b + 334 * OS1_S1 + 16) -
                p_over_q * *(b + 423 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 16);
            *(b + 334 * OS1_S1 + 32) =
                prefactor_z * *(b + 334 * OS1_S1 + 17) -
                p_over_q * *(b + 423 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 17) +
                one_over_two_q * *(b + 334 * OS1_S1 + 7);
            *(b + 334 * OS1_S1 + 33) =
                prefactor_y * *(b + 334 * OS1_S1 + 19) -
                p_over_q * *(b + 422 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 259 * OS1_S1 + 19);
            *(b + 334 * OS1_S1 + 34) =
                prefactor_z * *(b + 334 * OS1_S1 + 19) -
                p_over_q * *(b + 423 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 258 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 9);
            *(b + 335 * OS1_S1 + 20) =
                prefactor_x * *(b + 335 * OS1_S1 + 10) -
                p_over_q * *(b + 413 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 4);
            *(b + 335 * OS1_S1 + 21) =
                prefactor_y * *(b + 335 * OS1_S1 + 10) -
                p_over_q * *(b + 423 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 10);
            *(b + 335 * OS1_S1 + 22) =
                prefactor_z * *(b + 335 * OS1_S1 + 10) -
                p_over_q * *(b + 424 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 10);
            *(b + 335 * OS1_S1 + 23) =
                prefactor_x * *(b + 335 * OS1_S1 + 13) -
                p_over_q * *(b + 413 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 13) +
                one_over_two_q * *(b + 335 * OS1_S1 + 7);
            *(b + 335 * OS1_S1 + 24) =
                prefactor_z * *(b + 335 * OS1_S1 + 11) -
                p_over_q * *(b + 424 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 11);
            *(b + 335 * OS1_S1 + 25) =
                prefactor_x * *(b + 335 * OS1_S1 + 15) -
                p_over_q * *(b + 413 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 15) +
                one_over_two_q * *(b + 335 * OS1_S1 + 9);
            *(b + 335 * OS1_S1 + 26) =
                prefactor_x * *(b + 335 * OS1_S1 + 16) -
                p_over_q * *(b + 413 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 16);
            *(b + 335 * OS1_S1 + 27) =
                prefactor_x * *(b + 335 * OS1_S1 + 17) -
                p_over_q * *(b + 413 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 17);
            *(b + 335 * OS1_S1 + 28) =
                prefactor_x * *(b + 335 * OS1_S1 + 18) -
                p_over_q * *(b + 413 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 18);
            *(b + 335 * OS1_S1 + 29) =
                prefactor_x * *(b + 335 * OS1_S1 + 19) -
                p_over_q * *(b + 413 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 269 * OS1_S1 + 19);
            *(b + 335 * OS1_S1 + 30) =
                prefactor_y * *(b + 335 * OS1_S1 + 16) -
                p_over_q * *(b + 423 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 7);
            *(b + 335 * OS1_S1 + 31) =
                prefactor_z * *(b + 335 * OS1_S1 + 16) -
                p_over_q * *(b + 424 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 16);
            *(b + 335 * OS1_S1 + 32) =
                prefactor_z * *(b + 335 * OS1_S1 + 17) -
                p_over_q * *(b + 424 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 17) +
                one_over_two_q * *(b + 335 * OS1_S1 + 7);
            *(b + 335 * OS1_S1 + 33) =
                prefactor_y * *(b + 335 * OS1_S1 + 19) -
                p_over_q * *(b + 423 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 19);
            *(b + 335 * OS1_S1 + 34) =
                prefactor_z * *(b + 335 * OS1_S1 + 19) -
                p_over_q * *(b + 424 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 259 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 9);
            *(b + 336 * OS1_S1 + 20) =
                prefactor_x * *(b + 336 * OS1_S1 + 10) -
                p_over_q * *(b + 414 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 4);
            *(b + 336 * OS1_S1 + 21) =
                prefactor_y * *(b + 336 * OS1_S1 + 10) -
                p_over_q * *(b + 424 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 10);
            *(b + 336 * OS1_S1 + 22) =
                prefactor_z * *(b + 336 * OS1_S1 + 10) -
                p_over_q * *(b + 425 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 10);
            *(b + 336 * OS1_S1 + 23) =
                prefactor_x * *(b + 336 * OS1_S1 + 13) -
                p_over_q * *(b + 414 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 13) +
                one_over_two_q * *(b + 336 * OS1_S1 + 7);
            *(b + 336 * OS1_S1 + 24) =
                prefactor_y * *(b + 336 * OS1_S1 + 12) -
                p_over_q * *(b + 424 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 12);
            *(b + 336 * OS1_S1 + 25) =
                prefactor_x * *(b + 336 * OS1_S1 + 15) -
                p_over_q * *(b + 414 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 15) +
                one_over_two_q * *(b + 336 * OS1_S1 + 9);
            *(b + 336 * OS1_S1 + 26) =
                prefactor_x * *(b + 336 * OS1_S1 + 16) -
                p_over_q * *(b + 414 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 16);
            *(b + 336 * OS1_S1 + 27) =
                prefactor_x * *(b + 336 * OS1_S1 + 17) -
                p_over_q * *(b + 414 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 17);
            *(b + 336 * OS1_S1 + 28) =
                prefactor_x * *(b + 336 * OS1_S1 + 18) -
                p_over_q * *(b + 414 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 18);
            *(b + 336 * OS1_S1 + 29) =
                prefactor_x * *(b + 336 * OS1_S1 + 19) -
                p_over_q * *(b + 414 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 270 * OS1_S1 + 19);
            *(b + 336 * OS1_S1 + 30) =
                prefactor_y * *(b + 336 * OS1_S1 + 16) -
                p_over_q * *(b + 424 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 7);
            *(b + 336 * OS1_S1 + 31) =
                prefactor_z * *(b + 336 * OS1_S1 + 16) -
                p_over_q * *(b + 425 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 16);
            *(b + 336 * OS1_S1 + 32) =
                prefactor_y * *(b + 336 * OS1_S1 + 18) -
                p_over_q * *(b + 424 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 18) +
                one_over_two_q * *(b + 336 * OS1_S1 + 9);
            *(b + 336 * OS1_S1 + 33) =
                prefactor_y * *(b + 336 * OS1_S1 + 19) -
                p_over_q * *(b + 424 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 261 * OS1_S1 + 19);
            *(b + 336 * OS1_S1 + 34) =
                prefactor_z * *(b + 336 * OS1_S1 + 19) -
                p_over_q * *(b + 425 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 260 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 9);
            *(b + 337 * OS1_S1 + 20) =
                prefactor_x * *(b + 337 * OS1_S1 + 10) -
                p_over_q * *(b + 415 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 4);
            *(b + 337 * OS1_S1 + 21) =
                prefactor_y * *(b + 337 * OS1_S1 + 10) -
                p_over_q * *(b + 425 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 10);
            *(b + 337 * OS1_S1 + 22) =
                prefactor_z * *(b + 337 * OS1_S1 + 10) -
                p_over_q * *(b + 426 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 10);
            *(b + 337 * OS1_S1 + 23) =
                prefactor_x * *(b + 337 * OS1_S1 + 13) -
                p_over_q * *(b + 415 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 13) +
                one_over_two_q * *(b + 337 * OS1_S1 + 7);
            *(b + 337 * OS1_S1 + 24) =
                prefactor_y * *(b + 337 * OS1_S1 + 12) -
                p_over_q * *(b + 425 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 12);
            *(b + 337 * OS1_S1 + 25) =
                prefactor_x * *(b + 337 * OS1_S1 + 15) -
                p_over_q * *(b + 415 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 15) +
                one_over_two_q * *(b + 337 * OS1_S1 + 9);
            *(b + 337 * OS1_S1 + 26) =
                prefactor_x * *(b + 337 * OS1_S1 + 16) -
                p_over_q * *(b + 415 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 16);
            *(b + 337 * OS1_S1 + 27) =
                prefactor_x * *(b + 337 * OS1_S1 + 17) -
                p_over_q * *(b + 415 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 17);
            *(b + 337 * OS1_S1 + 28) =
                prefactor_x * *(b + 337 * OS1_S1 + 18) -
                p_over_q * *(b + 415 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 18);
            *(b + 337 * OS1_S1 + 29) =
                prefactor_x * *(b + 337 * OS1_S1 + 19) -
                p_over_q * *(b + 415 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 271 * OS1_S1 + 19);
            *(b + 337 * OS1_S1 + 30) =
                prefactor_y * *(b + 337 * OS1_S1 + 16) -
                p_over_q * *(b + 425 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 7);
            *(b + 337 * OS1_S1 + 31) =
                prefactor_z * *(b + 337 * OS1_S1 + 16) -
                p_over_q * *(b + 426 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 16);
            *(b + 337 * OS1_S1 + 32) =
                prefactor_y * *(b + 337 * OS1_S1 + 18) -
                p_over_q * *(b + 425 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 18) +
                one_over_two_q * *(b + 337 * OS1_S1 + 9);
            *(b + 337 * OS1_S1 + 33) =
                prefactor_y * *(b + 337 * OS1_S1 + 19) -
                p_over_q * *(b + 425 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 262 * OS1_S1 + 19);
            *(b + 337 * OS1_S1 + 34) =
                prefactor_z * *(b + 337 * OS1_S1 + 19) -
                p_over_q * *(b + 426 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 261 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 9);
            *(b + 338 * OS1_S1 + 20) =
                prefactor_x * *(b + 338 * OS1_S1 + 10) -
                p_over_q * *(b + 416 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 4);
            *(b + 338 * OS1_S1 + 21) =
                prefactor_y * *(b + 338 * OS1_S1 + 10) -
                p_over_q * *(b + 426 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 10);
            *(b + 338 * OS1_S1 + 22) =
                prefactor_z * *(b + 338 * OS1_S1 + 10) -
                p_over_q * *(b + 427 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 10);
            *(b + 338 * OS1_S1 + 23) =
                prefactor_y * *(b + 338 * OS1_S1 + 11) -
                p_over_q * *(b + 426 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 11) +
                one_over_two_q * *(b + 338 * OS1_S1 + 4);
            *(b + 338 * OS1_S1 + 24) =
                prefactor_y * *(b + 338 * OS1_S1 + 12) -
                p_over_q * *(b + 426 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 12);
            *(b + 338 * OS1_S1 + 25) =
                prefactor_x * *(b + 338 * OS1_S1 + 15) -
                p_over_q * *(b + 416 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 15) +
                one_over_two_q * *(b + 338 * OS1_S1 + 9);
            *(b + 338 * OS1_S1 + 26) =
                prefactor_x * *(b + 338 * OS1_S1 + 16) -
                p_over_q * *(b + 416 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 16);
            *(b + 338 * OS1_S1 + 27) =
                prefactor_x * *(b + 338 * OS1_S1 + 17) -
                p_over_q * *(b + 416 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 17);
            *(b + 338 * OS1_S1 + 28) =
                prefactor_y * *(b + 338 * OS1_S1 + 15) -
                p_over_q * *(b + 426 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 15);
            *(b + 338 * OS1_S1 + 29) =
                prefactor_x * *(b + 338 * OS1_S1 + 19) -
                p_over_q * *(b + 416 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 272 * OS1_S1 + 19);
            *(b + 338 * OS1_S1 + 30) =
                prefactor_y * *(b + 338 * OS1_S1 + 16) -
                p_over_q * *(b + 426 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 7);
            *(b + 338 * OS1_S1 + 31) =
                prefactor_z * *(b + 338 * OS1_S1 + 16) -
                p_over_q * *(b + 427 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 16);
            *(b + 338 * OS1_S1 + 32) =
                prefactor_y * *(b + 338 * OS1_S1 + 18) -
                p_over_q * *(b + 426 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 18) +
                one_over_two_q * *(b + 338 * OS1_S1 + 9);
            *(b + 338 * OS1_S1 + 33) =
                prefactor_y * *(b + 338 * OS1_S1 + 19) -
                p_over_q * *(b + 426 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 263 * OS1_S1 + 19);
            *(b + 338 * OS1_S1 + 34) =
                prefactor_z * *(b + 338 * OS1_S1 + 19) -
                p_over_q * *(b + 427 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 262 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 9);
            *(b + 339 * OS1_S1 + 20) =
                prefactor_x * *(b + 339 * OS1_S1 + 10) -
                p_over_q * *(b + 417 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 4);
            *(b + 339 * OS1_S1 + 21) =
                prefactor_y * *(b + 339 * OS1_S1 + 10) -
                p_over_q * *(b + 427 * OS1_S1 + 10) +
                one_over_two_q * *(b + 264 * OS1_S1 + 10);
            *(b + 339 * OS1_S1 + 22) =
                prefactor_z * *(b + 339 * OS1_S1 + 10) -
                p_over_q * *(b + 428 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 10);
            *(b + 339 * OS1_S1 + 23) =
                prefactor_y * *(b + 339 * OS1_S1 + 11) -
                p_over_q * *(b + 427 * OS1_S1 + 11) +
                one_over_two_q * *(b + 264 * OS1_S1 + 11) +
                one_over_two_q * *(b + 339 * OS1_S1 + 4);
            *(b + 339 * OS1_S1 + 24) =
                prefactor_y * *(b + 339 * OS1_S1 + 12) -
                p_over_q * *(b + 427 * OS1_S1 + 12) +
                one_over_two_q * *(b + 264 * OS1_S1 + 12);
            *(b + 339 * OS1_S1 + 25) =
                prefactor_x * *(b + 339 * OS1_S1 + 15) -
                p_over_q * *(b + 417 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 15) +
                one_over_two_q * *(b + 339 * OS1_S1 + 9);
            *(b + 339 * OS1_S1 + 26) =
                prefactor_x * *(b + 339 * OS1_S1 + 16) -
                p_over_q * *(b + 417 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 16);
            *(b + 339 * OS1_S1 + 27) =
                prefactor_x * *(b + 339 * OS1_S1 + 17) -
                p_over_q * *(b + 417 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 17);
            *(b + 339 * OS1_S1 + 28) =
                prefactor_y * *(b + 339 * OS1_S1 + 15) -
                p_over_q * *(b + 427 * OS1_S1 + 15) +
                one_over_two_q * *(b + 264 * OS1_S1 + 15);
            *(b + 339 * OS1_S1 + 29) =
                prefactor_x * *(b + 339 * OS1_S1 + 19) -
                p_over_q * *(b + 417 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 19);
            *(b + 339 * OS1_S1 + 30) =
                prefactor_y * *(b + 339 * OS1_S1 + 16) -
                p_over_q * *(b + 427 * OS1_S1 + 16) +
                one_over_two_q * *(b + 264 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 7);
            *(b + 339 * OS1_S1 + 31) =
                prefactor_z * *(b + 339 * OS1_S1 + 16) -
                p_over_q * *(b + 428 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 16);
            *(b + 339 * OS1_S1 + 32) =
                prefactor_y * *(b + 339 * OS1_S1 + 18) -
                p_over_q * *(b + 427 * OS1_S1 + 18) +
                one_over_two_q * *(b + 264 * OS1_S1 + 18) +
                one_over_two_q * *(b + 339 * OS1_S1 + 9);
            *(b + 339 * OS1_S1 + 33) =
                prefactor_y * *(b + 339 * OS1_S1 + 19) -
                p_over_q * *(b + 427 * OS1_S1 + 19) +
                one_over_two_q * *(b + 264 * OS1_S1 + 19);
            *(b + 339 * OS1_S1 + 34) =
                prefactor_z * *(b + 339 * OS1_S1 + 19) -
                p_over_q * *(b + 428 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 263 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 9);
            *(b + 340 * OS1_S1 + 20) =
                prefactor_x * *(b + 340 * OS1_S1 + 10) -
                p_over_q * *(b + 418 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 4);
            *(b + 340 * OS1_S1 + 21) = prefactor_y * *(b + 340 * OS1_S1 + 10) -
                                       p_over_q * *(b + 428 * OS1_S1 + 10);
            *(b + 340 * OS1_S1 + 22) =
                prefactor_z * *(b + 340 * OS1_S1 + 10) -
                p_over_q * *(b + 429 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 10);
            *(b + 340 * OS1_S1 + 23) = prefactor_y * *(b + 340 * OS1_S1 + 11) -
                                       p_over_q * *(b + 428 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 340 * OS1_S1 + 4);
            *(b + 340 * OS1_S1 + 24) = prefactor_y * *(b + 340 * OS1_S1 + 12) -
                                       p_over_q * *(b + 428 * OS1_S1 + 12);
            *(b + 340 * OS1_S1 + 25) =
                prefactor_x * *(b + 340 * OS1_S1 + 15) -
                p_over_q * *(b + 418 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 15) +
                one_over_two_q * *(b + 340 * OS1_S1 + 9);
            *(b + 340 * OS1_S1 + 26) =
                prefactor_x * *(b + 340 * OS1_S1 + 16) -
                p_over_q * *(b + 418 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 16);
            *(b + 340 * OS1_S1 + 27) =
                prefactor_x * *(b + 340 * OS1_S1 + 17) -
                p_over_q * *(b + 418 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 17);
            *(b + 340 * OS1_S1 + 28) = prefactor_y * *(b + 340 * OS1_S1 + 15) -
                                       p_over_q * *(b + 428 * OS1_S1 + 15);
            *(b + 340 * OS1_S1 + 29) =
                prefactor_x * *(b + 340 * OS1_S1 + 19) -
                p_over_q * *(b + 418 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 274 * OS1_S1 + 19);
            *(b + 340 * OS1_S1 + 30) =
                prefactor_y * *(b + 340 * OS1_S1 + 16) -
                p_over_q * *(b + 428 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 7);
            *(b + 340 * OS1_S1 + 31) =
                prefactor_z * *(b + 340 * OS1_S1 + 16) -
                p_over_q * *(b + 429 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 16);
            *(b + 340 * OS1_S1 + 32) = prefactor_y * *(b + 340 * OS1_S1 + 18) -
                                       p_over_q * *(b + 428 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 340 * OS1_S1 + 9);
            *(b + 340 * OS1_S1 + 33) = prefactor_y * *(b + 340 * OS1_S1 + 19) -
                                       p_over_q * *(b + 428 * OS1_S1 + 19);
            *(b + 340 * OS1_S1 + 34) =
                prefactor_z * *(b + 340 * OS1_S1 + 19) -
                p_over_q * *(b + 429 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 264 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 9);
            *(b + 341 * OS1_S1 + 20) =
                prefactor_x * *(b + 341 * OS1_S1 + 10) -
                p_over_q * *(b + 419 * OS1_S1 + 10) +
                one_over_two_q * *(b + 275 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 341 * OS1_S1 + 4);
            *(b + 341 * OS1_S1 + 21) =
                prefactor_y * *(b + 341 * OS1_S1 + 10) -
                p_over_q * *(b + 430 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 10);
            *(b + 341 * OS1_S1 + 22) = prefactor_z * *(b + 341 * OS1_S1 + 10) -
                                       p_over_q * *(b + 431 * OS1_S1 + 10);
            *(b + 341 * OS1_S1 + 23) =
                prefactor_x * *(b + 341 * OS1_S1 + 13) -
                p_over_q * *(b + 419 * OS1_S1 + 13) +
                one_over_two_q * *(b + 275 * OS1_S1 + 13) +
                one_over_two_q * *(b + 341 * OS1_S1 + 7);
            *(b + 341 * OS1_S1 + 24) = prefactor_z * *(b + 341 * OS1_S1 + 11) -
                                       p_over_q * *(b + 431 * OS1_S1 + 11);
            *(b + 341 * OS1_S1 + 25) = prefactor_z * *(b + 341 * OS1_S1 + 12) -
                                       p_over_q * *(b + 431 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 341 * OS1_S1 + 4);
            *(b + 341 * OS1_S1 + 26) =
                prefactor_x * *(b + 341 * OS1_S1 + 16) -
                p_over_q * *(b + 419 * OS1_S1 + 16) +
                one_over_two_q * *(b + 275 * OS1_S1 + 16);
            *(b + 341 * OS1_S1 + 27) = prefactor_z * *(b + 341 * OS1_S1 + 13) -
                                       p_over_q * *(b + 431 * OS1_S1 + 13);
            *(b + 341 * OS1_S1 + 28) =
                prefactor_x * *(b + 341 * OS1_S1 + 18) -
                p_over_q * *(b + 419 * OS1_S1 + 18) +
                one_over_two_q * *(b + 275 * OS1_S1 + 18);
            *(b + 341 * OS1_S1 + 29) =
                prefactor_x * *(b + 341 * OS1_S1 + 19) -
                p_over_q * *(b + 419 * OS1_S1 + 19) +
                one_over_two_q * *(b + 275 * OS1_S1 + 19);
            *(b + 341 * OS1_S1 + 30) =
                prefactor_y * *(b + 341 * OS1_S1 + 16) -
                p_over_q * *(b + 430 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 341 * OS1_S1 + 7);
            *(b + 341 * OS1_S1 + 31) = prefactor_z * *(b + 341 * OS1_S1 + 16) -
                                       p_over_q * *(b + 431 * OS1_S1 + 16);
            *(b + 341 * OS1_S1 + 32) = prefactor_z * *(b + 341 * OS1_S1 + 17) -
                                       p_over_q * *(b + 431 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 341 * OS1_S1 + 7);
            *(b + 341 * OS1_S1 + 33) =
                prefactor_y * *(b + 341 * OS1_S1 + 19) -
                p_over_q * *(b + 430 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 265 * OS1_S1 + 19);
            *(b + 341 * OS1_S1 + 34) =
                prefactor_z * *(b + 341 * OS1_S1 + 19) -
                p_over_q * *(b + 431 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 341 * OS1_S1 + 9);
            *(b + 342 * OS1_S1 + 20) =
                prefactor_x * *(b + 342 * OS1_S1 + 10) -
                p_over_q * *(b + 420 * OS1_S1 + 10) +
                one_over_two_q * *(b + 276 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 342 * OS1_S1 + 4);
            *(b + 342 * OS1_S1 + 21) =
                prefactor_y * *(b + 342 * OS1_S1 + 10) -
                p_over_q * *(b + 431 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 10);
            *(b + 342 * OS1_S1 + 22) =
                prefactor_z * *(b + 342 * OS1_S1 + 10) -
                p_over_q * *(b + 432 * OS1_S1 + 10) +
                one_over_two_q * *(b + 265 * OS1_S1 + 10);
            *(b + 342 * OS1_S1 + 23) =
                prefactor_x * *(b + 342 * OS1_S1 + 13) -
                p_over_q * *(b + 420 * OS1_S1 + 13) +
                one_over_two_q * *(b + 276 * OS1_S1 + 13) +
                one_over_two_q * *(b + 342 * OS1_S1 + 7);
            *(b + 342 * OS1_S1 + 24) =
                prefactor_z * *(b + 342 * OS1_S1 + 11) -
                p_over_q * *(b + 432 * OS1_S1 + 11) +
                one_over_two_q * *(b + 265 * OS1_S1 + 11);
            *(b + 342 * OS1_S1 + 25) =
                prefactor_z * *(b + 342 * OS1_S1 + 12) -
                p_over_q * *(b + 432 * OS1_S1 + 12) +
                one_over_two_q * *(b + 265 * OS1_S1 + 12) +
                one_over_two_q * *(b + 342 * OS1_S1 + 4);
            *(b + 342 * OS1_S1 + 26) =
                prefactor_x * *(b + 342 * OS1_S1 + 16) -
                p_over_q * *(b + 420 * OS1_S1 + 16) +
                one_over_two_q * *(b + 276 * OS1_S1 + 16);
            *(b + 342 * OS1_S1 + 27) =
                prefactor_z * *(b + 342 * OS1_S1 + 13) -
                p_over_q * *(b + 432 * OS1_S1 + 13) +
                one_over_two_q * *(b + 265 * OS1_S1 + 13);
            *(b + 342 * OS1_S1 + 28) =
                prefactor_x * *(b + 342 * OS1_S1 + 18) -
                p_over_q * *(b + 420 * OS1_S1 + 18) +
                one_over_two_q * *(b + 276 * OS1_S1 + 18);
            *(b + 342 * OS1_S1 + 29) =
                prefactor_x * *(b + 342 * OS1_S1 + 19) -
                p_over_q * *(b + 420 * OS1_S1 + 19) +
                one_over_two_q * *(b + 276 * OS1_S1 + 19);
            *(b + 342 * OS1_S1 + 30) =
                prefactor_y * *(b + 342 * OS1_S1 + 16) -
                p_over_q * *(b + 431 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 342 * OS1_S1 + 7);
            *(b + 342 * OS1_S1 + 31) =
                prefactor_z * *(b + 342 * OS1_S1 + 16) -
                p_over_q * *(b + 432 * OS1_S1 + 16) +
                one_over_two_q * *(b + 265 * OS1_S1 + 16);
            *(b + 342 * OS1_S1 + 32) =
                prefactor_z * *(b + 342 * OS1_S1 + 17) -
                p_over_q * *(b + 432 * OS1_S1 + 17) +
                one_over_two_q * *(b + 265 * OS1_S1 + 17) +
                one_over_two_q * *(b + 342 * OS1_S1 + 7);
            *(b + 342 * OS1_S1 + 33) =
                prefactor_y * *(b + 342 * OS1_S1 + 19) -
                p_over_q * *(b + 431 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 266 * OS1_S1 + 19);
            *(b + 342 * OS1_S1 + 34) =
                prefactor_z * *(b + 342 * OS1_S1 + 19) -
                p_over_q * *(b + 432 * OS1_S1 + 19) +
                one_over_two_q * *(b + 265 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 342 * OS1_S1 + 9);
            *(b + 343 * OS1_S1 + 20) =
                prefactor_x * *(b + 343 * OS1_S1 + 10) -
                p_over_q * *(b + 421 * OS1_S1 + 10) +
                one_over_two_q * *(b + 277 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 4);
            *(b + 343 * OS1_S1 + 21) =
                prefactor_y * *(b + 343 * OS1_S1 + 10) -
                p_over_q * *(b + 432 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 10);
            *(b + 343 * OS1_S1 + 22) =
                prefactor_z * *(b + 343 * OS1_S1 + 10) -
                p_over_q * *(b + 433 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 10);
            *(b + 343 * OS1_S1 + 23) =
                prefactor_x * *(b + 343 * OS1_S1 + 13) -
                p_over_q * *(b + 421 * OS1_S1 + 13) +
                one_over_two_q * *(b + 277 * OS1_S1 + 13) +
                one_over_two_q * *(b + 343 * OS1_S1 + 7);
            *(b + 343 * OS1_S1 + 24) =
                prefactor_z * *(b + 343 * OS1_S1 + 11) -
                p_over_q * *(b + 433 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 11);
            *(b + 343 * OS1_S1 + 25) =
                prefactor_x * *(b + 343 * OS1_S1 + 15) -
                p_over_q * *(b + 421 * OS1_S1 + 15) +
                one_over_two_q * *(b + 277 * OS1_S1 + 15) +
                one_over_two_q * *(b + 343 * OS1_S1 + 9);
            *(b + 343 * OS1_S1 + 26) =
                prefactor_x * *(b + 343 * OS1_S1 + 16) -
                p_over_q * *(b + 421 * OS1_S1 + 16) +
                one_over_two_q * *(b + 277 * OS1_S1 + 16);
            *(b + 343 * OS1_S1 + 27) =
                prefactor_x * *(b + 343 * OS1_S1 + 17) -
                p_over_q * *(b + 421 * OS1_S1 + 17) +
                one_over_two_q * *(b + 277 * OS1_S1 + 17);
            *(b + 343 * OS1_S1 + 28) =
                prefactor_x * *(b + 343 * OS1_S1 + 18) -
                p_over_q * *(b + 421 * OS1_S1 + 18) +
                one_over_two_q * *(b + 277 * OS1_S1 + 18);
            *(b + 343 * OS1_S1 + 29) =
                prefactor_x * *(b + 343 * OS1_S1 + 19) -
                p_over_q * *(b + 421 * OS1_S1 + 19) +
                one_over_two_q * *(b + 277 * OS1_S1 + 19);
            *(b + 343 * OS1_S1 + 30) =
                prefactor_y * *(b + 343 * OS1_S1 + 16) -
                p_over_q * *(b + 432 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 7);
            *(b + 343 * OS1_S1 + 31) =
                prefactor_z * *(b + 343 * OS1_S1 + 16) -
                p_over_q * *(b + 433 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 16);
            *(b + 343 * OS1_S1 + 32) =
                prefactor_z * *(b + 343 * OS1_S1 + 17) -
                p_over_q * *(b + 433 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 17) +
                one_over_two_q * *(b + 343 * OS1_S1 + 7);
            *(b + 343 * OS1_S1 + 33) =
                prefactor_y * *(b + 343 * OS1_S1 + 19) -
                p_over_q * *(b + 432 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 267 * OS1_S1 + 19);
            *(b + 343 * OS1_S1 + 34) =
                prefactor_z * *(b + 343 * OS1_S1 + 19) -
                p_over_q * *(b + 433 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 266 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 9);
            *(b + 344 * OS1_S1 + 20) =
                prefactor_x * *(b + 344 * OS1_S1 + 10) -
                p_over_q * *(b + 422 * OS1_S1 + 10) +
                one_over_two_q * *(b + 278 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 344 * OS1_S1 + 4);
            *(b + 344 * OS1_S1 + 21) =
                prefactor_y * *(b + 344 * OS1_S1 + 10) -
                p_over_q * *(b + 433 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 10);
            *(b + 344 * OS1_S1 + 22) =
                prefactor_z * *(b + 344 * OS1_S1 + 10) -
                p_over_q * *(b + 434 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 10);
            *(b + 344 * OS1_S1 + 23) =
                prefactor_x * *(b + 344 * OS1_S1 + 13) -
                p_over_q * *(b + 422 * OS1_S1 + 13) +
                one_over_two_q * *(b + 278 * OS1_S1 + 13) +
                one_over_two_q * *(b + 344 * OS1_S1 + 7);
            *(b + 344 * OS1_S1 + 24) =
                prefactor_z * *(b + 344 * OS1_S1 + 11) -
                p_over_q * *(b + 434 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 11);
            *(b + 344 * OS1_S1 + 25) =
                prefactor_x * *(b + 344 * OS1_S1 + 15) -
                p_over_q * *(b + 422 * OS1_S1 + 15) +
                one_over_two_q * *(b + 278 * OS1_S1 + 15) +
                one_over_two_q * *(b + 344 * OS1_S1 + 9);
            *(b + 344 * OS1_S1 + 26) =
                prefactor_x * *(b + 344 * OS1_S1 + 16) -
                p_over_q * *(b + 422 * OS1_S1 + 16) +
                one_over_two_q * *(b + 278 * OS1_S1 + 16);
            *(b + 344 * OS1_S1 + 27) =
                prefactor_x * *(b + 344 * OS1_S1 + 17) -
                p_over_q * *(b + 422 * OS1_S1 + 17) +
                one_over_two_q * *(b + 278 * OS1_S1 + 17);
            *(b + 344 * OS1_S1 + 28) =
                prefactor_x * *(b + 344 * OS1_S1 + 18) -
                p_over_q * *(b + 422 * OS1_S1 + 18) +
                one_over_two_q * *(b + 278 * OS1_S1 + 18);
            *(b + 344 * OS1_S1 + 29) =
                prefactor_x * *(b + 344 * OS1_S1 + 19) -
                p_over_q * *(b + 422 * OS1_S1 + 19) +
                one_over_two_q * *(b + 278 * OS1_S1 + 19);
            *(b + 344 * OS1_S1 + 30) =
                prefactor_y * *(b + 344 * OS1_S1 + 16) -
                p_over_q * *(b + 433 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 344 * OS1_S1 + 7);
            *(b + 344 * OS1_S1 + 31) =
                prefactor_z * *(b + 344 * OS1_S1 + 16) -
                p_over_q * *(b + 434 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 16);
            *(b + 344 * OS1_S1 + 32) =
                prefactor_z * *(b + 344 * OS1_S1 + 17) -
                p_over_q * *(b + 434 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 17) +
                one_over_two_q * *(b + 344 * OS1_S1 + 7);
            *(b + 344 * OS1_S1 + 33) =
                prefactor_y * *(b + 344 * OS1_S1 + 19) -
                p_over_q * *(b + 433 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 268 * OS1_S1 + 19);
            *(b + 344 * OS1_S1 + 34) =
                prefactor_z * *(b + 344 * OS1_S1 + 19) -
                p_over_q * *(b + 434 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 267 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 344 * OS1_S1 + 9);
            *(b + 345 * OS1_S1 + 20) =
                prefactor_x * *(b + 345 * OS1_S1 + 10) -
                p_over_q * *(b + 423 * OS1_S1 + 10) +
                one_over_two_q * *(b + 279 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 345 * OS1_S1 + 4);
            *(b + 345 * OS1_S1 + 21) =
                prefactor_y * *(b + 345 * OS1_S1 + 10) -
                p_over_q * *(b + 434 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 10);
            *(b + 345 * OS1_S1 + 22) =
                prefactor_z * *(b + 345 * OS1_S1 + 10) -
                p_over_q * *(b + 435 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 10);
            *(b + 345 * OS1_S1 + 23) =
                prefactor_x * *(b + 345 * OS1_S1 + 13) -
                p_over_q * *(b + 423 * OS1_S1 + 13) +
                one_over_two_q * *(b + 279 * OS1_S1 + 13) +
                one_over_two_q * *(b + 345 * OS1_S1 + 7);
            *(b + 345 * OS1_S1 + 24) =
                prefactor_z * *(b + 345 * OS1_S1 + 11) -
                p_over_q * *(b + 435 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 11);
            *(b + 345 * OS1_S1 + 25) =
                prefactor_x * *(b + 345 * OS1_S1 + 15) -
                p_over_q * *(b + 423 * OS1_S1 + 15) +
                one_over_two_q * *(b + 279 * OS1_S1 + 15) +
                one_over_two_q * *(b + 345 * OS1_S1 + 9);
            *(b + 345 * OS1_S1 + 26) =
                prefactor_x * *(b + 345 * OS1_S1 + 16) -
                p_over_q * *(b + 423 * OS1_S1 + 16) +
                one_over_two_q * *(b + 279 * OS1_S1 + 16);
            *(b + 345 * OS1_S1 + 27) =
                prefactor_x * *(b + 345 * OS1_S1 + 17) -
                p_over_q * *(b + 423 * OS1_S1 + 17) +
                one_over_two_q * *(b + 279 * OS1_S1 + 17);
            *(b + 345 * OS1_S1 + 28) =
                prefactor_x * *(b + 345 * OS1_S1 + 18) -
                p_over_q * *(b + 423 * OS1_S1 + 18) +
                one_over_two_q * *(b + 279 * OS1_S1 + 18);
            *(b + 345 * OS1_S1 + 29) =
                prefactor_x * *(b + 345 * OS1_S1 + 19) -
                p_over_q * *(b + 423 * OS1_S1 + 19) +
                one_over_two_q * *(b + 279 * OS1_S1 + 19);
            *(b + 345 * OS1_S1 + 30) =
                prefactor_y * *(b + 345 * OS1_S1 + 16) -
                p_over_q * *(b + 434 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 345 * OS1_S1 + 7);
            *(b + 345 * OS1_S1 + 31) =
                prefactor_z * *(b + 345 * OS1_S1 + 16) -
                p_over_q * *(b + 435 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 16);
            *(b + 345 * OS1_S1 + 32) =
                prefactor_z * *(b + 345 * OS1_S1 + 17) -
                p_over_q * *(b + 435 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 17) +
                one_over_two_q * *(b + 345 * OS1_S1 + 7);
            *(b + 345 * OS1_S1 + 33) =
                prefactor_y * *(b + 345 * OS1_S1 + 19) -
                p_over_q * *(b + 434 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 269 * OS1_S1 + 19);
            *(b + 345 * OS1_S1 + 34) =
                prefactor_z * *(b + 345 * OS1_S1 + 19) -
                p_over_q * *(b + 435 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 268 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 345 * OS1_S1 + 9);
            *(b + 346 * OS1_S1 + 20) =
                prefactor_x * *(b + 346 * OS1_S1 + 10) -
                p_over_q * *(b + 424 * OS1_S1 + 10) +
                one_over_two_q * *(b + 280 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 346 * OS1_S1 + 4);
            *(b + 346 * OS1_S1 + 21) =
                prefactor_y * *(b + 346 * OS1_S1 + 10) -
                p_over_q * *(b + 435 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 10);
            *(b + 346 * OS1_S1 + 22) =
                prefactor_z * *(b + 346 * OS1_S1 + 10) -
                p_over_q * *(b + 436 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 10);
            *(b + 346 * OS1_S1 + 23) =
                prefactor_x * *(b + 346 * OS1_S1 + 13) -
                p_over_q * *(b + 424 * OS1_S1 + 13) +
                one_over_two_q * *(b + 280 * OS1_S1 + 13) +
                one_over_two_q * *(b + 346 * OS1_S1 + 7);
            *(b + 346 * OS1_S1 + 24) =
                prefactor_z * *(b + 346 * OS1_S1 + 11) -
                p_over_q * *(b + 436 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 11);
            *(b + 346 * OS1_S1 + 25) =
                prefactor_x * *(b + 346 * OS1_S1 + 15) -
                p_over_q * *(b + 424 * OS1_S1 + 15) +
                one_over_two_q * *(b + 280 * OS1_S1 + 15) +
                one_over_two_q * *(b + 346 * OS1_S1 + 9);
            *(b + 346 * OS1_S1 + 26) =
                prefactor_x * *(b + 346 * OS1_S1 + 16) -
                p_over_q * *(b + 424 * OS1_S1 + 16) +
                one_over_two_q * *(b + 280 * OS1_S1 + 16);
            *(b + 346 * OS1_S1 + 27) =
                prefactor_x * *(b + 346 * OS1_S1 + 17) -
                p_over_q * *(b + 424 * OS1_S1 + 17) +
                one_over_two_q * *(b + 280 * OS1_S1 + 17);
            *(b + 346 * OS1_S1 + 28) =
                prefactor_x * *(b + 346 * OS1_S1 + 18) -
                p_over_q * *(b + 424 * OS1_S1 + 18) +
                one_over_two_q * *(b + 280 * OS1_S1 + 18);
            *(b + 346 * OS1_S1 + 29) =
                prefactor_x * *(b + 346 * OS1_S1 + 19) -
                p_over_q * *(b + 424 * OS1_S1 + 19) +
                one_over_two_q * *(b + 280 * OS1_S1 + 19);
            *(b + 346 * OS1_S1 + 30) =
                prefactor_y * *(b + 346 * OS1_S1 + 16) -
                p_over_q * *(b + 435 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 346 * OS1_S1 + 7);
            *(b + 346 * OS1_S1 + 31) =
                prefactor_z * *(b + 346 * OS1_S1 + 16) -
                p_over_q * *(b + 436 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 16);
            *(b + 346 * OS1_S1 + 32) =
                prefactor_z * *(b + 346 * OS1_S1 + 17) -
                p_over_q * *(b + 436 * OS1_S1 + 17) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 17) +
                one_over_two_q * *(b + 346 * OS1_S1 + 7);
            *(b + 346 * OS1_S1 + 33) =
                prefactor_y * *(b + 346 * OS1_S1 + 19) -
                p_over_q * *(b + 435 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 270 * OS1_S1 + 19);
            *(b + 346 * OS1_S1 + 34) =
                prefactor_z * *(b + 346 * OS1_S1 + 19) -
                p_over_q * *(b + 436 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 269 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 346 * OS1_S1 + 9);
            *(b + 347 * OS1_S1 + 20) =
                prefactor_x * *(b + 347 * OS1_S1 + 10) -
                p_over_q * *(b + 425 * OS1_S1 + 10) +
                one_over_two_q * *(b + 281 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 347 * OS1_S1 + 4);
            *(b + 347 * OS1_S1 + 21) =
                prefactor_y * *(b + 347 * OS1_S1 + 10) -
                p_over_q * *(b + 436 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 10);
            *(b + 347 * OS1_S1 + 22) =
                prefactor_z * *(b + 347 * OS1_S1 + 10) -
                p_over_q * *(b + 437 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 10);
            *(b + 347 * OS1_S1 + 23) =
                prefactor_x * *(b + 347 * OS1_S1 + 13) -
                p_over_q * *(b + 425 * OS1_S1 + 13) +
                one_over_two_q * *(b + 281 * OS1_S1 + 13) +
                one_over_two_q * *(b + 347 * OS1_S1 + 7);
            *(b + 347 * OS1_S1 + 24) =
                prefactor_y * *(b + 347 * OS1_S1 + 12) -
                p_over_q * *(b + 436 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 12);
            *(b + 347 * OS1_S1 + 25) =
                prefactor_x * *(b + 347 * OS1_S1 + 15) -
                p_over_q * *(b + 425 * OS1_S1 + 15) +
                one_over_two_q * *(b + 281 * OS1_S1 + 15) +
                one_over_two_q * *(b + 347 * OS1_S1 + 9);
            *(b + 347 * OS1_S1 + 26) =
                prefactor_x * *(b + 347 * OS1_S1 + 16) -
                p_over_q * *(b + 425 * OS1_S1 + 16) +
                one_over_two_q * *(b + 281 * OS1_S1 + 16);
            *(b + 347 * OS1_S1 + 27) =
                prefactor_x * *(b + 347 * OS1_S1 + 17) -
                p_over_q * *(b + 425 * OS1_S1 + 17) +
                one_over_two_q * *(b + 281 * OS1_S1 + 17);
            *(b + 347 * OS1_S1 + 28) =
                prefactor_x * *(b + 347 * OS1_S1 + 18) -
                p_over_q * *(b + 425 * OS1_S1 + 18) +
                one_over_two_q * *(b + 281 * OS1_S1 + 18);
            *(b + 347 * OS1_S1 + 29) =
                prefactor_x * *(b + 347 * OS1_S1 + 19) -
                p_over_q * *(b + 425 * OS1_S1 + 19) +
                one_over_two_q * *(b + 281 * OS1_S1 + 19);
            *(b + 347 * OS1_S1 + 30) =
                prefactor_y * *(b + 347 * OS1_S1 + 16) -
                p_over_q * *(b + 436 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 347 * OS1_S1 + 7);
            *(b + 347 * OS1_S1 + 31) =
                prefactor_z * *(b + 347 * OS1_S1 + 16) -
                p_over_q * *(b + 437 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 16);
            *(b + 347 * OS1_S1 + 32) =
                prefactor_y * *(b + 347 * OS1_S1 + 18) -
                p_over_q * *(b + 436 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 18) +
                one_over_two_q * *(b + 347 * OS1_S1 + 9);
            *(b + 347 * OS1_S1 + 33) =
                prefactor_y * *(b + 347 * OS1_S1 + 19) -
                p_over_q * *(b + 436 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 271 * OS1_S1 + 19);
            *(b + 347 * OS1_S1 + 34) =
                prefactor_z * *(b + 347 * OS1_S1 + 19) -
                p_over_q * *(b + 437 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 270 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 347 * OS1_S1 + 9);
            *(b + 348 * OS1_S1 + 20) =
                prefactor_x * *(b + 348 * OS1_S1 + 10) -
                p_over_q * *(b + 426 * OS1_S1 + 10) +
                one_over_two_q * *(b + 282 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 348 * OS1_S1 + 4);
            *(b + 348 * OS1_S1 + 21) =
                prefactor_y * *(b + 348 * OS1_S1 + 10) -
                p_over_q * *(b + 437 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 10);
            *(b + 348 * OS1_S1 + 22) =
                prefactor_z * *(b + 348 * OS1_S1 + 10) -
                p_over_q * *(b + 438 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 10);
            *(b + 348 * OS1_S1 + 23) =
                prefactor_x * *(b + 348 * OS1_S1 + 13) -
                p_over_q * *(b + 426 * OS1_S1 + 13) +
                one_over_two_q * *(b + 282 * OS1_S1 + 13) +
                one_over_two_q * *(b + 348 * OS1_S1 + 7);
            *(b + 348 * OS1_S1 + 24) =
                prefactor_y * *(b + 348 * OS1_S1 + 12) -
                p_over_q * *(b + 437 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 12);
            *(b + 348 * OS1_S1 + 25) =
                prefactor_x * *(b + 348 * OS1_S1 + 15) -
                p_over_q * *(b + 426 * OS1_S1 + 15) +
                one_over_two_q * *(b + 282 * OS1_S1 + 15) +
                one_over_two_q * *(b + 348 * OS1_S1 + 9);
            *(b + 348 * OS1_S1 + 26) =
                prefactor_x * *(b + 348 * OS1_S1 + 16) -
                p_over_q * *(b + 426 * OS1_S1 + 16) +
                one_over_two_q * *(b + 282 * OS1_S1 + 16);
            *(b + 348 * OS1_S1 + 27) =
                prefactor_x * *(b + 348 * OS1_S1 + 17) -
                p_over_q * *(b + 426 * OS1_S1 + 17) +
                one_over_two_q * *(b + 282 * OS1_S1 + 17);
            *(b + 348 * OS1_S1 + 28) =
                prefactor_x * *(b + 348 * OS1_S1 + 18) -
                p_over_q * *(b + 426 * OS1_S1 + 18) +
                one_over_two_q * *(b + 282 * OS1_S1 + 18);
            *(b + 348 * OS1_S1 + 29) =
                prefactor_x * *(b + 348 * OS1_S1 + 19) -
                p_over_q * *(b + 426 * OS1_S1 + 19) +
                one_over_two_q * *(b + 282 * OS1_S1 + 19);
            *(b + 348 * OS1_S1 + 30) =
                prefactor_y * *(b + 348 * OS1_S1 + 16) -
                p_over_q * *(b + 437 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 348 * OS1_S1 + 7);
            *(b + 348 * OS1_S1 + 31) =
                prefactor_z * *(b + 348 * OS1_S1 + 16) -
                p_over_q * *(b + 438 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 16);
            *(b + 348 * OS1_S1 + 32) =
                prefactor_y * *(b + 348 * OS1_S1 + 18) -
                p_over_q * *(b + 437 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 18) +
                one_over_two_q * *(b + 348 * OS1_S1 + 9);
            *(b + 348 * OS1_S1 + 33) =
                prefactor_y * *(b + 348 * OS1_S1 + 19) -
                p_over_q * *(b + 437 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 272 * OS1_S1 + 19);
            *(b + 348 * OS1_S1 + 34) =
                prefactor_z * *(b + 348 * OS1_S1 + 19) -
                p_over_q * *(b + 438 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 271 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 348 * OS1_S1 + 9);
            *(b + 349 * OS1_S1 + 20) =
                prefactor_x * *(b + 349 * OS1_S1 + 10) -
                p_over_q * *(b + 427 * OS1_S1 + 10) +
                one_over_two_q * *(b + 283 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 4);
            *(b + 349 * OS1_S1 + 21) =
                prefactor_y * *(b + 349 * OS1_S1 + 10) -
                p_over_q * *(b + 438 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 10);
            *(b + 349 * OS1_S1 + 22) =
                prefactor_z * *(b + 349 * OS1_S1 + 10) -
                p_over_q * *(b + 439 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 10);
            *(b + 349 * OS1_S1 + 23) =
                prefactor_x * *(b + 349 * OS1_S1 + 13) -
                p_over_q * *(b + 427 * OS1_S1 + 13) +
                one_over_two_q * *(b + 283 * OS1_S1 + 13) +
                one_over_two_q * *(b + 349 * OS1_S1 + 7);
            *(b + 349 * OS1_S1 + 24) =
                prefactor_y * *(b + 349 * OS1_S1 + 12) -
                p_over_q * *(b + 438 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 12);
            *(b + 349 * OS1_S1 + 25) =
                prefactor_x * *(b + 349 * OS1_S1 + 15) -
                p_over_q * *(b + 427 * OS1_S1 + 15) +
                one_over_two_q * *(b + 283 * OS1_S1 + 15) +
                one_over_two_q * *(b + 349 * OS1_S1 + 9);
            *(b + 349 * OS1_S1 + 26) =
                prefactor_x * *(b + 349 * OS1_S1 + 16) -
                p_over_q * *(b + 427 * OS1_S1 + 16) +
                one_over_two_q * *(b + 283 * OS1_S1 + 16);
            *(b + 349 * OS1_S1 + 27) =
                prefactor_x * *(b + 349 * OS1_S1 + 17) -
                p_over_q * *(b + 427 * OS1_S1 + 17) +
                one_over_two_q * *(b + 283 * OS1_S1 + 17);
            *(b + 349 * OS1_S1 + 28) =
                prefactor_x * *(b + 349 * OS1_S1 + 18) -
                p_over_q * *(b + 427 * OS1_S1 + 18) +
                one_over_two_q * *(b + 283 * OS1_S1 + 18);
            *(b + 349 * OS1_S1 + 29) =
                prefactor_x * *(b + 349 * OS1_S1 + 19) -
                p_over_q * *(b + 427 * OS1_S1 + 19) +
                one_over_two_q * *(b + 283 * OS1_S1 + 19);
            *(b + 349 * OS1_S1 + 30) =
                prefactor_y * *(b + 349 * OS1_S1 + 16) -
                p_over_q * *(b + 438 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 7);
            *(b + 349 * OS1_S1 + 31) =
                prefactor_z * *(b + 349 * OS1_S1 + 16) -
                p_over_q * *(b + 439 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 16);
            *(b + 349 * OS1_S1 + 32) =
                prefactor_y * *(b + 349 * OS1_S1 + 18) -
                p_over_q * *(b + 438 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 18) +
                one_over_two_q * *(b + 349 * OS1_S1 + 9);
            *(b + 349 * OS1_S1 + 33) =
                prefactor_y * *(b + 349 * OS1_S1 + 19) -
                p_over_q * *(b + 438 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 273 * OS1_S1 + 19);
            *(b + 349 * OS1_S1 + 34) =
                prefactor_z * *(b + 349 * OS1_S1 + 19) -
                p_over_q * *(b + 439 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 272 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 9);
            *(b + 350 * OS1_S1 + 20) =
                prefactor_x * *(b + 350 * OS1_S1 + 10) -
                p_over_q * *(b + 428 * OS1_S1 + 10) +
                one_over_two_q * *(b + 284 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 350 * OS1_S1 + 4);
            *(b + 350 * OS1_S1 + 21) =
                prefactor_y * *(b + 350 * OS1_S1 + 10) -
                p_over_q * *(b + 439 * OS1_S1 + 10) +
                one_over_two_q * *(b + 274 * OS1_S1 + 10);
            *(b + 350 * OS1_S1 + 22) =
                prefactor_z * *(b + 350 * OS1_S1 + 10) -
                p_over_q * *(b + 440 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 10);
            *(b + 350 * OS1_S1 + 23) =
                prefactor_y * *(b + 350 * OS1_S1 + 11) -
                p_over_q * *(b + 439 * OS1_S1 + 11) +
                one_over_two_q * *(b + 274 * OS1_S1 + 11) +
                one_over_two_q * *(b + 350 * OS1_S1 + 4);
            *(b + 350 * OS1_S1 + 24) =
                prefactor_y * *(b + 350 * OS1_S1 + 12) -
                p_over_q * *(b + 439 * OS1_S1 + 12) +
                one_over_two_q * *(b + 274 * OS1_S1 + 12);
            *(b + 350 * OS1_S1 + 25) =
                prefactor_x * *(b + 350 * OS1_S1 + 15) -
                p_over_q * *(b + 428 * OS1_S1 + 15) +
                one_over_two_q * *(b + 284 * OS1_S1 + 15) +
                one_over_two_q * *(b + 350 * OS1_S1 + 9);
            *(b + 350 * OS1_S1 + 26) =
                prefactor_x * *(b + 350 * OS1_S1 + 16) -
                p_over_q * *(b + 428 * OS1_S1 + 16) +
                one_over_two_q * *(b + 284 * OS1_S1 + 16);
            *(b + 350 * OS1_S1 + 27) =
                prefactor_x * *(b + 350 * OS1_S1 + 17) -
                p_over_q * *(b + 428 * OS1_S1 + 17) +
                one_over_two_q * *(b + 284 * OS1_S1 + 17);
            *(b + 350 * OS1_S1 + 28) =
                prefactor_y * *(b + 350 * OS1_S1 + 15) -
                p_over_q * *(b + 439 * OS1_S1 + 15) +
                one_over_two_q * *(b + 274 * OS1_S1 + 15);
            *(b + 350 * OS1_S1 + 29) =
                prefactor_x * *(b + 350 * OS1_S1 + 19) -
                p_over_q * *(b + 428 * OS1_S1 + 19) +
                one_over_two_q * *(b + 284 * OS1_S1 + 19);
            *(b + 350 * OS1_S1 + 30) =
                prefactor_y * *(b + 350 * OS1_S1 + 16) -
                p_over_q * *(b + 439 * OS1_S1 + 16) +
                one_over_two_q * *(b + 274 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 350 * OS1_S1 + 7);
            *(b + 350 * OS1_S1 + 31) =
                prefactor_z * *(b + 350 * OS1_S1 + 16) -
                p_over_q * *(b + 440 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 16);
            *(b + 350 * OS1_S1 + 32) =
                prefactor_y * *(b + 350 * OS1_S1 + 18) -
                p_over_q * *(b + 439 * OS1_S1 + 18) +
                one_over_two_q * *(b + 274 * OS1_S1 + 18) +
                one_over_two_q * *(b + 350 * OS1_S1 + 9);
            *(b + 350 * OS1_S1 + 33) =
                prefactor_y * *(b + 350 * OS1_S1 + 19) -
                p_over_q * *(b + 439 * OS1_S1 + 19) +
                one_over_two_q * *(b + 274 * OS1_S1 + 19);
            *(b + 350 * OS1_S1 + 34) =
                prefactor_z * *(b + 350 * OS1_S1 + 19) -
                p_over_q * *(b + 440 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 273 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 350 * OS1_S1 + 9);
            *(b + 351 * OS1_S1 + 20) =
                prefactor_x * *(b + 351 * OS1_S1 + 10) -
                p_over_q * *(b + 429 * OS1_S1 + 10) +
                one_over_two_q * *(b + 285 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 351 * OS1_S1 + 4);
            *(b + 351 * OS1_S1 + 21) = prefactor_y * *(b + 351 * OS1_S1 + 10) -
                                       p_over_q * *(b + 440 * OS1_S1 + 10);
            *(b + 351 * OS1_S1 + 22) =
                prefactor_z * *(b + 351 * OS1_S1 + 10) -
                p_over_q * *(b + 441 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 10);
            *(b + 351 * OS1_S1 + 23) = prefactor_y * *(b + 351 * OS1_S1 + 11) -
                                       p_over_q * *(b + 440 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 351 * OS1_S1 + 4);
            *(b + 351 * OS1_S1 + 24) = prefactor_y * *(b + 351 * OS1_S1 + 12) -
                                       p_over_q * *(b + 440 * OS1_S1 + 12);
            *(b + 351 * OS1_S1 + 25) =
                prefactor_x * *(b + 351 * OS1_S1 + 15) -
                p_over_q * *(b + 429 * OS1_S1 + 15) +
                one_over_two_q * *(b + 285 * OS1_S1 + 15) +
                one_over_two_q * *(b + 351 * OS1_S1 + 9);
            *(b + 351 * OS1_S1 + 26) =
                prefactor_x * *(b + 351 * OS1_S1 + 16) -
                p_over_q * *(b + 429 * OS1_S1 + 16) +
                one_over_two_q * *(b + 285 * OS1_S1 + 16);
            *(b + 351 * OS1_S1 + 27) =
                prefactor_x * *(b + 351 * OS1_S1 + 17) -
                p_over_q * *(b + 429 * OS1_S1 + 17) +
                one_over_two_q * *(b + 285 * OS1_S1 + 17);
            *(b + 351 * OS1_S1 + 28) = prefactor_y * *(b + 351 * OS1_S1 + 15) -
                                       p_over_q * *(b + 440 * OS1_S1 + 15);
            *(b + 351 * OS1_S1 + 29) =
                prefactor_x * *(b + 351 * OS1_S1 + 19) -
                p_over_q * *(b + 429 * OS1_S1 + 19) +
                one_over_two_q * *(b + 285 * OS1_S1 + 19);
            *(b + 351 * OS1_S1 + 30) =
                prefactor_y * *(b + 351 * OS1_S1 + 16) -
                p_over_q * *(b + 440 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 351 * OS1_S1 + 7);
            *(b + 351 * OS1_S1 + 31) =
                prefactor_z * *(b + 351 * OS1_S1 + 16) -
                p_over_q * *(b + 441 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 16);
            *(b + 351 * OS1_S1 + 32) = prefactor_y * *(b + 351 * OS1_S1 + 18) -
                                       p_over_q * *(b + 440 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 351 * OS1_S1 + 9);
            *(b + 351 * OS1_S1 + 33) = prefactor_y * *(b + 351 * OS1_S1 + 19) -
                                       p_over_q * *(b + 440 * OS1_S1 + 19);
            *(b + 351 * OS1_S1 + 34) =
                prefactor_z * *(b + 351 * OS1_S1 + 19) -
                p_over_q * *(b + 441 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 274 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 351 * OS1_S1 + 9);
            *(b + 352 * OS1_S1 + 20) =
                prefactor_x * *(b + 352 * OS1_S1 + 10) -
                p_over_q * *(b + 430 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 352 * OS1_S1 + 4);
            *(b + 352 * OS1_S1 + 21) =
                prefactor_y * *(b + 352 * OS1_S1 + 10) -
                p_over_q * *(b + 442 * OS1_S1 + 10) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 10);
            *(b + 352 * OS1_S1 + 22) = prefactor_z * *(b + 352 * OS1_S1 + 10) -
                                       p_over_q * *(b + 443 * OS1_S1 + 10);
            *(b + 352 * OS1_S1 + 23) = prefactor_x * *(b + 352 * OS1_S1 + 13) -
                                       p_over_q * *(b + 430 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 352 * OS1_S1 + 7);
            *(b + 352 * OS1_S1 + 24) = prefactor_z * *(b + 352 * OS1_S1 + 11) -
                                       p_over_q * *(b + 443 * OS1_S1 + 11);
            *(b + 352 * OS1_S1 + 25) = prefactor_z * *(b + 352 * OS1_S1 + 12) -
                                       p_over_q * *(b + 443 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 352 * OS1_S1 + 4);
            *(b + 352 * OS1_S1 + 26) = prefactor_x * *(b + 352 * OS1_S1 + 16) -
                                       p_over_q * *(b + 430 * OS1_S1 + 16);
            *(b + 352 * OS1_S1 + 27) = prefactor_z * *(b + 352 * OS1_S1 + 13) -
                                       p_over_q * *(b + 443 * OS1_S1 + 13);
            *(b + 352 * OS1_S1 + 28) = prefactor_x * *(b + 352 * OS1_S1 + 18) -
                                       p_over_q * *(b + 430 * OS1_S1 + 18);
            *(b + 352 * OS1_S1 + 29) = prefactor_x * *(b + 352 * OS1_S1 + 19) -
                                       p_over_q * *(b + 430 * OS1_S1 + 19);
            *(b + 352 * OS1_S1 + 30) =
                prefactor_y * *(b + 352 * OS1_S1 + 16) -
                p_over_q * *(b + 442 * OS1_S1 + 16) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 352 * OS1_S1 + 7);
            *(b + 352 * OS1_S1 + 31) = prefactor_z * *(b + 352 * OS1_S1 + 16) -
                                       p_over_q * *(b + 443 * OS1_S1 + 16);
            *(b + 352 * OS1_S1 + 32) = prefactor_z * *(b + 352 * OS1_S1 + 17) -
                                       p_over_q * *(b + 443 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 352 * OS1_S1 + 7);
            *(b + 352 * OS1_S1 + 33) =
                prefactor_y * *(b + 352 * OS1_S1 + 19) -
                p_over_q * *(b + 442 * OS1_S1 + 19) +
                11 * one_over_two_q * *(b + 275 * OS1_S1 + 19);
            *(b + 352 * OS1_S1 + 34) =
                prefactor_z * *(b + 352 * OS1_S1 + 19) -
                p_over_q * *(b + 443 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 352 * OS1_S1 + 9);
            *(b + 353 * OS1_S1 + 20) =
                prefactor_x * *(b + 353 * OS1_S1 + 10) -
                p_over_q * *(b + 431 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 353 * OS1_S1 + 4);
            *(b + 353 * OS1_S1 + 21) =
                prefactor_y * *(b + 353 * OS1_S1 + 10) -
                p_over_q * *(b + 443 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 10);
            *(b + 353 * OS1_S1 + 22) =
                prefactor_z * *(b + 353 * OS1_S1 + 10) -
                p_over_q * *(b + 444 * OS1_S1 + 10) +
                one_over_two_q * *(b + 275 * OS1_S1 + 10);
            *(b + 353 * OS1_S1 + 23) = prefactor_x * *(b + 353 * OS1_S1 + 13) -
                                       p_over_q * *(b + 431 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 353 * OS1_S1 + 7);
            *(b + 353 * OS1_S1 + 24) =
                prefactor_z * *(b + 353 * OS1_S1 + 11) -
                p_over_q * *(b + 444 * OS1_S1 + 11) +
                one_over_two_q * *(b + 275 * OS1_S1 + 11);
            *(b + 353 * OS1_S1 + 25) = prefactor_x * *(b + 353 * OS1_S1 + 15) -
                                       p_over_q * *(b + 431 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 353 * OS1_S1 + 9);
            *(b + 353 * OS1_S1 + 26) = prefactor_x * *(b + 353 * OS1_S1 + 16) -
                                       p_over_q * *(b + 431 * OS1_S1 + 16);
            *(b + 353 * OS1_S1 + 27) = prefactor_x * *(b + 353 * OS1_S1 + 17) -
                                       p_over_q * *(b + 431 * OS1_S1 + 17);
            *(b + 353 * OS1_S1 + 28) = prefactor_x * *(b + 353 * OS1_S1 + 18) -
                                       p_over_q * *(b + 431 * OS1_S1 + 18);
            *(b + 353 * OS1_S1 + 29) = prefactor_x * *(b + 353 * OS1_S1 + 19) -
                                       p_over_q * *(b + 431 * OS1_S1 + 19);
            *(b + 353 * OS1_S1 + 30) =
                prefactor_y * *(b + 353 * OS1_S1 + 16) -
                p_over_q * *(b + 443 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 353 * OS1_S1 + 7);
            *(b + 353 * OS1_S1 + 31) =
                prefactor_z * *(b + 353 * OS1_S1 + 16) -
                p_over_q * *(b + 444 * OS1_S1 + 16) +
                one_over_two_q * *(b + 275 * OS1_S1 + 16);
            *(b + 353 * OS1_S1 + 32) =
                prefactor_z * *(b + 353 * OS1_S1 + 17) -
                p_over_q * *(b + 444 * OS1_S1 + 17) +
                one_over_two_q * *(b + 275 * OS1_S1 + 17) +
                one_over_two_q * *(b + 353 * OS1_S1 + 7);
            *(b + 353 * OS1_S1 + 33) =
                prefactor_y * *(b + 353 * OS1_S1 + 19) -
                p_over_q * *(b + 443 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 276 * OS1_S1 + 19);
            *(b + 353 * OS1_S1 + 34) =
                prefactor_z * *(b + 353 * OS1_S1 + 19) -
                p_over_q * *(b + 444 * OS1_S1 + 19) +
                one_over_two_q * *(b + 275 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 353 * OS1_S1 + 9);
            *(b + 354 * OS1_S1 + 20) =
                prefactor_x * *(b + 354 * OS1_S1 + 10) -
                p_over_q * *(b + 432 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 4);
            *(b + 354 * OS1_S1 + 21) =
                prefactor_y * *(b + 354 * OS1_S1 + 10) -
                p_over_q * *(b + 444 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 10);
            *(b + 354 * OS1_S1 + 22) =
                prefactor_z * *(b + 354 * OS1_S1 + 10) -
                p_over_q * *(b + 445 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 10);
            *(b + 354 * OS1_S1 + 23) = prefactor_x * *(b + 354 * OS1_S1 + 13) -
                                       p_over_q * *(b + 432 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 354 * OS1_S1 + 7);
            *(b + 354 * OS1_S1 + 24) =
                prefactor_z * *(b + 354 * OS1_S1 + 11) -
                p_over_q * *(b + 445 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 11);
            *(b + 354 * OS1_S1 + 25) = prefactor_x * *(b + 354 * OS1_S1 + 15) -
                                       p_over_q * *(b + 432 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 354 * OS1_S1 + 9);
            *(b + 354 * OS1_S1 + 26) = prefactor_x * *(b + 354 * OS1_S1 + 16) -
                                       p_over_q * *(b + 432 * OS1_S1 + 16);
            *(b + 354 * OS1_S1 + 27) = prefactor_x * *(b + 354 * OS1_S1 + 17) -
                                       p_over_q * *(b + 432 * OS1_S1 + 17);
            *(b + 354 * OS1_S1 + 28) = prefactor_x * *(b + 354 * OS1_S1 + 18) -
                                       p_over_q * *(b + 432 * OS1_S1 + 18);
            *(b + 354 * OS1_S1 + 29) = prefactor_x * *(b + 354 * OS1_S1 + 19) -
                                       p_over_q * *(b + 432 * OS1_S1 + 19);
            *(b + 354 * OS1_S1 + 30) =
                prefactor_y * *(b + 354 * OS1_S1 + 16) -
                p_over_q * *(b + 444 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 7);
            *(b + 354 * OS1_S1 + 31) =
                prefactor_z * *(b + 354 * OS1_S1 + 16) -
                p_over_q * *(b + 445 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 16);
            *(b + 354 * OS1_S1 + 32) =
                prefactor_z * *(b + 354 * OS1_S1 + 17) -
                p_over_q * *(b + 445 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 17) +
                one_over_two_q * *(b + 354 * OS1_S1 + 7);
            *(b + 354 * OS1_S1 + 33) =
                prefactor_y * *(b + 354 * OS1_S1 + 19) -
                p_over_q * *(b + 444 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 277 * OS1_S1 + 19);
            *(b + 354 * OS1_S1 + 34) =
                prefactor_z * *(b + 354 * OS1_S1 + 19) -
                p_over_q * *(b + 445 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 276 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 9);
            *(b + 355 * OS1_S1 + 20) =
                prefactor_x * *(b + 355 * OS1_S1 + 10) -
                p_over_q * *(b + 433 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 355 * OS1_S1 + 4);
            *(b + 355 * OS1_S1 + 21) =
                prefactor_y * *(b + 355 * OS1_S1 + 10) -
                p_over_q * *(b + 445 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 10);
            *(b + 355 * OS1_S1 + 22) =
                prefactor_z * *(b + 355 * OS1_S1 + 10) -
                p_over_q * *(b + 446 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 10);
            *(b + 355 * OS1_S1 + 23) = prefactor_x * *(b + 355 * OS1_S1 + 13) -
                                       p_over_q * *(b + 433 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 355 * OS1_S1 + 7);
            *(b + 355 * OS1_S1 + 24) =
                prefactor_z * *(b + 355 * OS1_S1 + 11) -
                p_over_q * *(b + 446 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 11);
            *(b + 355 * OS1_S1 + 25) = prefactor_x * *(b + 355 * OS1_S1 + 15) -
                                       p_over_q * *(b + 433 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 355 * OS1_S1 + 9);
            *(b + 355 * OS1_S1 + 26) = prefactor_x * *(b + 355 * OS1_S1 + 16) -
                                       p_over_q * *(b + 433 * OS1_S1 + 16);
            *(b + 355 * OS1_S1 + 27) = prefactor_x * *(b + 355 * OS1_S1 + 17) -
                                       p_over_q * *(b + 433 * OS1_S1 + 17);
            *(b + 355 * OS1_S1 + 28) = prefactor_x * *(b + 355 * OS1_S1 + 18) -
                                       p_over_q * *(b + 433 * OS1_S1 + 18);
            *(b + 355 * OS1_S1 + 29) = prefactor_x * *(b + 355 * OS1_S1 + 19) -
                                       p_over_q * *(b + 433 * OS1_S1 + 19);
            *(b + 355 * OS1_S1 + 30) =
                prefactor_y * *(b + 355 * OS1_S1 + 16) -
                p_over_q * *(b + 445 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 355 * OS1_S1 + 7);
            *(b + 355 * OS1_S1 + 31) =
                prefactor_z * *(b + 355 * OS1_S1 + 16) -
                p_over_q * *(b + 446 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 16);
            *(b + 355 * OS1_S1 + 32) =
                prefactor_z * *(b + 355 * OS1_S1 + 17) -
                p_over_q * *(b + 446 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 17) +
                one_over_two_q * *(b + 355 * OS1_S1 + 7);
            *(b + 355 * OS1_S1 + 33) =
                prefactor_y * *(b + 355 * OS1_S1 + 19) -
                p_over_q * *(b + 445 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 278 * OS1_S1 + 19);
            *(b + 355 * OS1_S1 + 34) =
                prefactor_z * *(b + 355 * OS1_S1 + 19) -
                p_over_q * *(b + 446 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 277 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 355 * OS1_S1 + 9);
            *(b + 356 * OS1_S1 + 20) =
                prefactor_x * *(b + 356 * OS1_S1 + 10) -
                p_over_q * *(b + 434 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 356 * OS1_S1 + 4);
            *(b + 356 * OS1_S1 + 21) =
                prefactor_y * *(b + 356 * OS1_S1 + 10) -
                p_over_q * *(b + 446 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 10);
            *(b + 356 * OS1_S1 + 22) =
                prefactor_z * *(b + 356 * OS1_S1 + 10) -
                p_over_q * *(b + 447 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 10);
            *(b + 356 * OS1_S1 + 23) = prefactor_x * *(b + 356 * OS1_S1 + 13) -
                                       p_over_q * *(b + 434 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 356 * OS1_S1 + 7);
            *(b + 356 * OS1_S1 + 24) =
                prefactor_z * *(b + 356 * OS1_S1 + 11) -
                p_over_q * *(b + 447 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 11);
            *(b + 356 * OS1_S1 + 25) = prefactor_x * *(b + 356 * OS1_S1 + 15) -
                                       p_over_q * *(b + 434 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 356 * OS1_S1 + 9);
            *(b + 356 * OS1_S1 + 26) = prefactor_x * *(b + 356 * OS1_S1 + 16) -
                                       p_over_q * *(b + 434 * OS1_S1 + 16);
            *(b + 356 * OS1_S1 + 27) = prefactor_x * *(b + 356 * OS1_S1 + 17) -
                                       p_over_q * *(b + 434 * OS1_S1 + 17);
            *(b + 356 * OS1_S1 + 28) = prefactor_x * *(b + 356 * OS1_S1 + 18) -
                                       p_over_q * *(b + 434 * OS1_S1 + 18);
            *(b + 356 * OS1_S1 + 29) = prefactor_x * *(b + 356 * OS1_S1 + 19) -
                                       p_over_q * *(b + 434 * OS1_S1 + 19);
            *(b + 356 * OS1_S1 + 30) =
                prefactor_y * *(b + 356 * OS1_S1 + 16) -
                p_over_q * *(b + 446 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 356 * OS1_S1 + 7);
            *(b + 356 * OS1_S1 + 31) =
                prefactor_z * *(b + 356 * OS1_S1 + 16) -
                p_over_q * *(b + 447 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 16);
            *(b + 356 * OS1_S1 + 32) =
                prefactor_z * *(b + 356 * OS1_S1 + 17) -
                p_over_q * *(b + 447 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 17) +
                one_over_two_q * *(b + 356 * OS1_S1 + 7);
            *(b + 356 * OS1_S1 + 33) =
                prefactor_y * *(b + 356 * OS1_S1 + 19) -
                p_over_q * *(b + 446 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 279 * OS1_S1 + 19);
            *(b + 356 * OS1_S1 + 34) =
                prefactor_z * *(b + 356 * OS1_S1 + 19) -
                p_over_q * *(b + 447 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 278 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 356 * OS1_S1 + 9);
            *(b + 357 * OS1_S1 + 20) =
                prefactor_x * *(b + 357 * OS1_S1 + 10) -
                p_over_q * *(b + 435 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 357 * OS1_S1 + 4);
            *(b + 357 * OS1_S1 + 21) =
                prefactor_y * *(b + 357 * OS1_S1 + 10) -
                p_over_q * *(b + 447 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 10);
            *(b + 357 * OS1_S1 + 22) =
                prefactor_z * *(b + 357 * OS1_S1 + 10) -
                p_over_q * *(b + 448 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 10);
            *(b + 357 * OS1_S1 + 23) = prefactor_x * *(b + 357 * OS1_S1 + 13) -
                                       p_over_q * *(b + 435 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 357 * OS1_S1 + 7);
            *(b + 357 * OS1_S1 + 24) =
                prefactor_z * *(b + 357 * OS1_S1 + 11) -
                p_over_q * *(b + 448 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 11);
            *(b + 357 * OS1_S1 + 25) = prefactor_x * *(b + 357 * OS1_S1 + 15) -
                                       p_over_q * *(b + 435 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 357 * OS1_S1 + 9);
            *(b + 357 * OS1_S1 + 26) = prefactor_x * *(b + 357 * OS1_S1 + 16) -
                                       p_over_q * *(b + 435 * OS1_S1 + 16);
            *(b + 357 * OS1_S1 + 27) = prefactor_x * *(b + 357 * OS1_S1 + 17) -
                                       p_over_q * *(b + 435 * OS1_S1 + 17);
            *(b + 357 * OS1_S1 + 28) = prefactor_x * *(b + 357 * OS1_S1 + 18) -
                                       p_over_q * *(b + 435 * OS1_S1 + 18);
            *(b + 357 * OS1_S1 + 29) = prefactor_x * *(b + 357 * OS1_S1 + 19) -
                                       p_over_q * *(b + 435 * OS1_S1 + 19);
            *(b + 357 * OS1_S1 + 30) =
                prefactor_y * *(b + 357 * OS1_S1 + 16) -
                p_over_q * *(b + 447 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 357 * OS1_S1 + 7);
            *(b + 357 * OS1_S1 + 31) =
                prefactor_z * *(b + 357 * OS1_S1 + 16) -
                p_over_q * *(b + 448 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 16);
            *(b + 357 * OS1_S1 + 32) =
                prefactor_z * *(b + 357 * OS1_S1 + 17) -
                p_over_q * *(b + 448 * OS1_S1 + 17) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 17) +
                one_over_two_q * *(b + 357 * OS1_S1 + 7);
            *(b + 357 * OS1_S1 + 33) =
                prefactor_y * *(b + 357 * OS1_S1 + 19) -
                p_over_q * *(b + 447 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 19);
            *(b + 357 * OS1_S1 + 34) =
                prefactor_z * *(b + 357 * OS1_S1 + 19) -
                p_over_q * *(b + 448 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 279 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 357 * OS1_S1 + 9);
            *(b + 358 * OS1_S1 + 20) =
                prefactor_x * *(b + 358 * OS1_S1 + 10) -
                p_over_q * *(b + 436 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 358 * OS1_S1 + 4);
            *(b + 358 * OS1_S1 + 21) =
                prefactor_y * *(b + 358 * OS1_S1 + 10) -
                p_over_q * *(b + 448 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 10);
            *(b + 358 * OS1_S1 + 22) =
                prefactor_z * *(b + 358 * OS1_S1 + 10) -
                p_over_q * *(b + 449 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 10);
            *(b + 358 * OS1_S1 + 23) = prefactor_x * *(b + 358 * OS1_S1 + 13) -
                                       p_over_q * *(b + 436 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 358 * OS1_S1 + 7);
            *(b + 358 * OS1_S1 + 24) =
                prefactor_y * *(b + 358 * OS1_S1 + 12) -
                p_over_q * *(b + 448 * OS1_S1 + 12) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 12);
            *(b + 358 * OS1_S1 + 25) = prefactor_x * *(b + 358 * OS1_S1 + 15) -
                                       p_over_q * *(b + 436 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 358 * OS1_S1 + 9);
            *(b + 358 * OS1_S1 + 26) = prefactor_x * *(b + 358 * OS1_S1 + 16) -
                                       p_over_q * *(b + 436 * OS1_S1 + 16);
            *(b + 358 * OS1_S1 + 27) = prefactor_x * *(b + 358 * OS1_S1 + 17) -
                                       p_over_q * *(b + 436 * OS1_S1 + 17);
            *(b + 358 * OS1_S1 + 28) = prefactor_x * *(b + 358 * OS1_S1 + 18) -
                                       p_over_q * *(b + 436 * OS1_S1 + 18);
            *(b + 358 * OS1_S1 + 29) = prefactor_x * *(b + 358 * OS1_S1 + 19) -
                                       p_over_q * *(b + 436 * OS1_S1 + 19);
            *(b + 358 * OS1_S1 + 30) =
                prefactor_y * *(b + 358 * OS1_S1 + 16) -
                p_over_q * *(b + 448 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 358 * OS1_S1 + 7);
            *(b + 358 * OS1_S1 + 31) =
                prefactor_z * *(b + 358 * OS1_S1 + 16) -
                p_over_q * *(b + 449 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 16);
            *(b + 358 * OS1_S1 + 32) =
                prefactor_y * *(b + 358 * OS1_S1 + 18) -
                p_over_q * *(b + 448 * OS1_S1 + 18) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 18) +
                one_over_two_q * *(b + 358 * OS1_S1 + 9);
            *(b + 358 * OS1_S1 + 33) =
                prefactor_y * *(b + 358 * OS1_S1 + 19) -
                p_over_q * *(b + 448 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 281 * OS1_S1 + 19);
            *(b + 358 * OS1_S1 + 34) =
                prefactor_z * *(b + 358 * OS1_S1 + 19) -
                p_over_q * *(b + 449 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 280 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 358 * OS1_S1 + 9);
            *(b + 359 * OS1_S1 + 20) =
                prefactor_x * *(b + 359 * OS1_S1 + 10) -
                p_over_q * *(b + 437 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 359 * OS1_S1 + 4);
            *(b + 359 * OS1_S1 + 21) =
                prefactor_y * *(b + 359 * OS1_S1 + 10) -
                p_over_q * *(b + 449 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 10);
            *(b + 359 * OS1_S1 + 22) =
                prefactor_z * *(b + 359 * OS1_S1 + 10) -
                p_over_q * *(b + 450 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 10);
            *(b + 359 * OS1_S1 + 23) = prefactor_x * *(b + 359 * OS1_S1 + 13) -
                                       p_over_q * *(b + 437 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 359 * OS1_S1 + 7);
            *(b + 359 * OS1_S1 + 24) =
                prefactor_y * *(b + 359 * OS1_S1 + 12) -
                p_over_q * *(b + 449 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 12);
            *(b + 359 * OS1_S1 + 25) = prefactor_x * *(b + 359 * OS1_S1 + 15) -
                                       p_over_q * *(b + 437 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 359 * OS1_S1 + 9);
            *(b + 359 * OS1_S1 + 26) = prefactor_x * *(b + 359 * OS1_S1 + 16) -
                                       p_over_q * *(b + 437 * OS1_S1 + 16);
            *(b + 359 * OS1_S1 + 27) = prefactor_x * *(b + 359 * OS1_S1 + 17) -
                                       p_over_q * *(b + 437 * OS1_S1 + 17);
            *(b + 359 * OS1_S1 + 28) = prefactor_x * *(b + 359 * OS1_S1 + 18) -
                                       p_over_q * *(b + 437 * OS1_S1 + 18);
            *(b + 359 * OS1_S1 + 29) = prefactor_x * *(b + 359 * OS1_S1 + 19) -
                                       p_over_q * *(b + 437 * OS1_S1 + 19);
            *(b + 359 * OS1_S1 + 30) =
                prefactor_y * *(b + 359 * OS1_S1 + 16) -
                p_over_q * *(b + 449 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 359 * OS1_S1 + 7);
            *(b + 359 * OS1_S1 + 31) =
                prefactor_z * *(b + 359 * OS1_S1 + 16) -
                p_over_q * *(b + 450 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 16);
            *(b + 359 * OS1_S1 + 32) =
                prefactor_y * *(b + 359 * OS1_S1 + 18) -
                p_over_q * *(b + 449 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 18) +
                one_over_two_q * *(b + 359 * OS1_S1 + 9);
            *(b + 359 * OS1_S1 + 33) =
                prefactor_y * *(b + 359 * OS1_S1 + 19) -
                p_over_q * *(b + 449 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 282 * OS1_S1 + 19);
            *(b + 359 * OS1_S1 + 34) =
                prefactor_z * *(b + 359 * OS1_S1 + 19) -
                p_over_q * *(b + 450 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 281 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 359 * OS1_S1 + 9);
            *(b + 360 * OS1_S1 + 20) =
                prefactor_x * *(b + 360 * OS1_S1 + 10) -
                p_over_q * *(b + 438 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 360 * OS1_S1 + 4);
            *(b + 360 * OS1_S1 + 21) =
                prefactor_y * *(b + 360 * OS1_S1 + 10) -
                p_over_q * *(b + 450 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 10);
            *(b + 360 * OS1_S1 + 22) =
                prefactor_z * *(b + 360 * OS1_S1 + 10) -
                p_over_q * *(b + 451 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 10);
            *(b + 360 * OS1_S1 + 23) = prefactor_x * *(b + 360 * OS1_S1 + 13) -
                                       p_over_q * *(b + 438 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 360 * OS1_S1 + 7);
            *(b + 360 * OS1_S1 + 24) =
                prefactor_y * *(b + 360 * OS1_S1 + 12) -
                p_over_q * *(b + 450 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 12);
            *(b + 360 * OS1_S1 + 25) = prefactor_x * *(b + 360 * OS1_S1 + 15) -
                                       p_over_q * *(b + 438 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 360 * OS1_S1 + 9);
            *(b + 360 * OS1_S1 + 26) = prefactor_x * *(b + 360 * OS1_S1 + 16) -
                                       p_over_q * *(b + 438 * OS1_S1 + 16);
            *(b + 360 * OS1_S1 + 27) = prefactor_x * *(b + 360 * OS1_S1 + 17) -
                                       p_over_q * *(b + 438 * OS1_S1 + 17);
            *(b + 360 * OS1_S1 + 28) = prefactor_x * *(b + 360 * OS1_S1 + 18) -
                                       p_over_q * *(b + 438 * OS1_S1 + 18);
            *(b + 360 * OS1_S1 + 29) = prefactor_x * *(b + 360 * OS1_S1 + 19) -
                                       p_over_q * *(b + 438 * OS1_S1 + 19);
            *(b + 360 * OS1_S1 + 30) =
                prefactor_y * *(b + 360 * OS1_S1 + 16) -
                p_over_q * *(b + 450 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 360 * OS1_S1 + 7);
            *(b + 360 * OS1_S1 + 31) =
                prefactor_z * *(b + 360 * OS1_S1 + 16) -
                p_over_q * *(b + 451 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 16);
            *(b + 360 * OS1_S1 + 32) =
                prefactor_y * *(b + 360 * OS1_S1 + 18) -
                p_over_q * *(b + 450 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 18) +
                one_over_two_q * *(b + 360 * OS1_S1 + 9);
            *(b + 360 * OS1_S1 + 33) =
                prefactor_y * *(b + 360 * OS1_S1 + 19) -
                p_over_q * *(b + 450 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 283 * OS1_S1 + 19);
            *(b + 360 * OS1_S1 + 34) =
                prefactor_z * *(b + 360 * OS1_S1 + 19) -
                p_over_q * *(b + 451 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 282 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 360 * OS1_S1 + 9);
            *(b + 361 * OS1_S1 + 20) =
                prefactor_x * *(b + 361 * OS1_S1 + 10) -
                p_over_q * *(b + 439 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 4);
            *(b + 361 * OS1_S1 + 21) =
                prefactor_y * *(b + 361 * OS1_S1 + 10) -
                p_over_q * *(b + 451 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 10);
            *(b + 361 * OS1_S1 + 22) =
                prefactor_z * *(b + 361 * OS1_S1 + 10) -
                p_over_q * *(b + 452 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 10);
            *(b + 361 * OS1_S1 + 23) = prefactor_x * *(b + 361 * OS1_S1 + 13) -
                                       p_over_q * *(b + 439 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 361 * OS1_S1 + 7);
            *(b + 361 * OS1_S1 + 24) =
                prefactor_y * *(b + 361 * OS1_S1 + 12) -
                p_over_q * *(b + 451 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 12);
            *(b + 361 * OS1_S1 + 25) = prefactor_x * *(b + 361 * OS1_S1 + 15) -
                                       p_over_q * *(b + 439 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 361 * OS1_S1 + 9);
            *(b + 361 * OS1_S1 + 26) = prefactor_x * *(b + 361 * OS1_S1 + 16) -
                                       p_over_q * *(b + 439 * OS1_S1 + 16);
            *(b + 361 * OS1_S1 + 27) = prefactor_x * *(b + 361 * OS1_S1 + 17) -
                                       p_over_q * *(b + 439 * OS1_S1 + 17);
            *(b + 361 * OS1_S1 + 28) = prefactor_x * *(b + 361 * OS1_S1 + 18) -
                                       p_over_q * *(b + 439 * OS1_S1 + 18);
            *(b + 361 * OS1_S1 + 29) = prefactor_x * *(b + 361 * OS1_S1 + 19) -
                                       p_over_q * *(b + 439 * OS1_S1 + 19);
            *(b + 361 * OS1_S1 + 30) =
                prefactor_y * *(b + 361 * OS1_S1 + 16) -
                p_over_q * *(b + 451 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 7);
            *(b + 361 * OS1_S1 + 31) =
                prefactor_z * *(b + 361 * OS1_S1 + 16) -
                p_over_q * *(b + 452 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 16);
            *(b + 361 * OS1_S1 + 32) =
                prefactor_y * *(b + 361 * OS1_S1 + 18) -
                p_over_q * *(b + 451 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 18) +
                one_over_two_q * *(b + 361 * OS1_S1 + 9);
            *(b + 361 * OS1_S1 + 33) =
                prefactor_y * *(b + 361 * OS1_S1 + 19) -
                p_over_q * *(b + 451 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 284 * OS1_S1 + 19);
            *(b + 361 * OS1_S1 + 34) =
                prefactor_z * *(b + 361 * OS1_S1 + 19) -
                p_over_q * *(b + 452 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 283 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 9);
            *(b + 362 * OS1_S1 + 20) =
                prefactor_x * *(b + 362 * OS1_S1 + 10) -
                p_over_q * *(b + 440 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 362 * OS1_S1 + 4);
            *(b + 362 * OS1_S1 + 21) =
                prefactor_y * *(b + 362 * OS1_S1 + 10) -
                p_over_q * *(b + 452 * OS1_S1 + 10) +
                one_over_two_q * *(b + 285 * OS1_S1 + 10);
            *(b + 362 * OS1_S1 + 22) =
                prefactor_z * *(b + 362 * OS1_S1 + 10) -
                p_over_q * *(b + 453 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 10);
            *(b + 362 * OS1_S1 + 23) = prefactor_x * *(b + 362 * OS1_S1 + 13) -
                                       p_over_q * *(b + 440 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 362 * OS1_S1 + 7);
            *(b + 362 * OS1_S1 + 24) =
                prefactor_y * *(b + 362 * OS1_S1 + 12) -
                p_over_q * *(b + 452 * OS1_S1 + 12) +
                one_over_two_q * *(b + 285 * OS1_S1 + 12);
            *(b + 362 * OS1_S1 + 25) = prefactor_x * *(b + 362 * OS1_S1 + 15) -
                                       p_over_q * *(b + 440 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 362 * OS1_S1 + 9);
            *(b + 362 * OS1_S1 + 26) = prefactor_x * *(b + 362 * OS1_S1 + 16) -
                                       p_over_q * *(b + 440 * OS1_S1 + 16);
            *(b + 362 * OS1_S1 + 27) = prefactor_x * *(b + 362 * OS1_S1 + 17) -
                                       p_over_q * *(b + 440 * OS1_S1 + 17);
            *(b + 362 * OS1_S1 + 28) = prefactor_x * *(b + 362 * OS1_S1 + 18) -
                                       p_over_q * *(b + 440 * OS1_S1 + 18);
            *(b + 362 * OS1_S1 + 29) = prefactor_x * *(b + 362 * OS1_S1 + 19) -
                                       p_over_q * *(b + 440 * OS1_S1 + 19);
            *(b + 362 * OS1_S1 + 30) =
                prefactor_y * *(b + 362 * OS1_S1 + 16) -
                p_over_q * *(b + 452 * OS1_S1 + 16) +
                one_over_two_q * *(b + 285 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 362 * OS1_S1 + 7);
            *(b + 362 * OS1_S1 + 31) =
                prefactor_z * *(b + 362 * OS1_S1 + 16) -
                p_over_q * *(b + 453 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 16);
            *(b + 362 * OS1_S1 + 32) =
                prefactor_y * *(b + 362 * OS1_S1 + 18) -
                p_over_q * *(b + 452 * OS1_S1 + 18) +
                one_over_two_q * *(b + 285 * OS1_S1 + 18) +
                one_over_two_q * *(b + 362 * OS1_S1 + 9);
            *(b + 362 * OS1_S1 + 33) =
                prefactor_y * *(b + 362 * OS1_S1 + 19) -
                p_over_q * *(b + 452 * OS1_S1 + 19) +
                one_over_two_q * *(b + 285 * OS1_S1 + 19);
            *(b + 362 * OS1_S1 + 34) =
                prefactor_z * *(b + 362 * OS1_S1 + 19) -
                p_over_q * *(b + 453 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 284 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 362 * OS1_S1 + 9);
            *(b + 363 * OS1_S1 + 20) =
                prefactor_x * *(b + 363 * OS1_S1 + 10) -
                p_over_q * *(b + 441 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 363 * OS1_S1 + 4);
            *(b + 363 * OS1_S1 + 21) = prefactor_y * *(b + 363 * OS1_S1 + 10) -
                                       p_over_q * *(b + 453 * OS1_S1 + 10);
            *(b + 363 * OS1_S1 + 22) =
                prefactor_z * *(b + 363 * OS1_S1 + 10) -
                p_over_q * *(b + 454 * OS1_S1 + 10) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 10);
            *(b + 363 * OS1_S1 + 23) = prefactor_y * *(b + 363 * OS1_S1 + 11) -
                                       p_over_q * *(b + 453 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 363 * OS1_S1 + 4);
            *(b + 363 * OS1_S1 + 24) = prefactor_y * *(b + 363 * OS1_S1 + 12) -
                                       p_over_q * *(b + 453 * OS1_S1 + 12);
            *(b + 363 * OS1_S1 + 25) = prefactor_x * *(b + 363 * OS1_S1 + 15) -
                                       p_over_q * *(b + 441 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 363 * OS1_S1 + 9);
            *(b + 363 * OS1_S1 + 26) = prefactor_x * *(b + 363 * OS1_S1 + 16) -
                                       p_over_q * *(b + 441 * OS1_S1 + 16);
            *(b + 363 * OS1_S1 + 27) = prefactor_x * *(b + 363 * OS1_S1 + 17) -
                                       p_over_q * *(b + 441 * OS1_S1 + 17);
            *(b + 363 * OS1_S1 + 28) = prefactor_y * *(b + 363 * OS1_S1 + 15) -
                                       p_over_q * *(b + 453 * OS1_S1 + 15);
            *(b + 363 * OS1_S1 + 29) = prefactor_x * *(b + 363 * OS1_S1 + 19) -
                                       p_over_q * *(b + 441 * OS1_S1 + 19);
            *(b + 363 * OS1_S1 + 30) =
                prefactor_y * *(b + 363 * OS1_S1 + 16) -
                p_over_q * *(b + 453 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 363 * OS1_S1 + 7);
            *(b + 363 * OS1_S1 + 31) =
                prefactor_z * *(b + 363 * OS1_S1 + 16) -
                p_over_q * *(b + 454 * OS1_S1 + 16) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 16);
            *(b + 363 * OS1_S1 + 32) = prefactor_y * *(b + 363 * OS1_S1 + 18) -
                                       p_over_q * *(b + 453 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 363 * OS1_S1 + 9);
            *(b + 363 * OS1_S1 + 33) = prefactor_y * *(b + 363 * OS1_S1 + 19) -
                                       p_over_q * *(b + 453 * OS1_S1 + 19);
            *(b + 363 * OS1_S1 + 34) =
                prefactor_z * *(b + 363 * OS1_S1 + 19) -
                p_over_q * *(b + 454 * OS1_S1 + 19) +
                11 * one_over_two_q * *(b + 285 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 363 * OS1_S1 + 9);
            return;
        }

        void transfer_12_4(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 364 * OS1_S1 + 20) =
                prefactor_x * *(b + 364 * OS1_S1 + 10) -
                p_over_q * *(b + 455 * OS1_S1 + 10) +
                12 * one_over_two_q * *(b + 286 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 364 * OS1_S1 + 4);
            *(b + 364 * OS1_S1 + 21) = prefactor_y * *(b + 364 * OS1_S1 + 10) -
                                       p_over_q * *(b + 456 * OS1_S1 + 10);
            *(b + 364 * OS1_S1 + 22) = prefactor_z * *(b + 364 * OS1_S1 + 10) -
                                       p_over_q * *(b + 457 * OS1_S1 + 10);
            *(b + 364 * OS1_S1 + 23) = prefactor_y * *(b + 364 * OS1_S1 + 11) -
                                       p_over_q * *(b + 456 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 364 * OS1_S1 + 4);
            *(b + 364 * OS1_S1 + 24) = prefactor_z * *(b + 364 * OS1_S1 + 11) -
                                       p_over_q * *(b + 457 * OS1_S1 + 11);
            *(b + 364 * OS1_S1 + 25) = prefactor_z * *(b + 364 * OS1_S1 + 12) -
                                       p_over_q * *(b + 457 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 364 * OS1_S1 + 4);
            *(b + 364 * OS1_S1 + 26) =
                prefactor_x * *(b + 364 * OS1_S1 + 16) -
                p_over_q * *(b + 455 * OS1_S1 + 16) +
                12 * one_over_two_q * *(b + 286 * OS1_S1 + 16);
            *(b + 364 * OS1_S1 + 27) = prefactor_z * *(b + 364 * OS1_S1 + 13) -
                                       p_over_q * *(b + 457 * OS1_S1 + 13);
            *(b + 364 * OS1_S1 + 28) = prefactor_y * *(b + 364 * OS1_S1 + 15) -
                                       p_over_q * *(b + 456 * OS1_S1 + 15);
            *(b + 364 * OS1_S1 + 29) =
                prefactor_x * *(b + 364 * OS1_S1 + 19) -
                p_over_q * *(b + 455 * OS1_S1 + 19) +
                12 * one_over_two_q * *(b + 286 * OS1_S1 + 19);
            *(b + 364 * OS1_S1 + 30) =
                prefactor_y * *(b + 364 * OS1_S1 + 16) -
                p_over_q * *(b + 456 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 364 * OS1_S1 + 7);
            *(b + 364 * OS1_S1 + 31) = prefactor_z * *(b + 364 * OS1_S1 + 16) -
                                       p_over_q * *(b + 457 * OS1_S1 + 16);
            *(b + 364 * OS1_S1 + 32) = prefactor_z * *(b + 364 * OS1_S1 + 17) -
                                       p_over_q * *(b + 457 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 364 * OS1_S1 + 7);
            *(b + 364 * OS1_S1 + 33) = prefactor_y * *(b + 364 * OS1_S1 + 19) -
                                       p_over_q * *(b + 456 * OS1_S1 + 19);
            *(b + 364 * OS1_S1 + 34) =
                prefactor_z * *(b + 364 * OS1_S1 + 19) -
                p_over_q * *(b + 457 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 364 * OS1_S1 + 9);
            *(b + 365 * OS1_S1 + 20) =
                prefactor_x * *(b + 365 * OS1_S1 + 10) -
                p_over_q * *(b + 456 * OS1_S1 + 10) +
                11 * one_over_two_q * *(b + 287 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 365 * OS1_S1 + 4);
            *(b + 365 * OS1_S1 + 21) =
                prefactor_y * *(b + 365 * OS1_S1 + 10) -
                p_over_q * *(b + 458 * OS1_S1 + 10) +
                one_over_two_q * *(b + 286 * OS1_S1 + 10);
            *(b + 365 * OS1_S1 + 22) = prefactor_z * *(b + 365 * OS1_S1 + 10) -
                                       p_over_q * *(b + 459 * OS1_S1 + 10);
            *(b + 365 * OS1_S1 + 23) =
                prefactor_y * *(b + 365 * OS1_S1 + 11) -
                p_over_q * *(b + 458 * OS1_S1 + 11) +
                one_over_two_q * *(b + 286 * OS1_S1 + 11) +
                one_over_two_q * *(b + 365 * OS1_S1 + 4);
            *(b + 365 * OS1_S1 + 24) = prefactor_z * *(b + 365 * OS1_S1 + 11) -
                                       p_over_q * *(b + 459 * OS1_S1 + 11);
            *(b + 365 * OS1_S1 + 25) = prefactor_z * *(b + 365 * OS1_S1 + 12) -
                                       p_over_q * *(b + 459 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 365 * OS1_S1 + 4);
            *(b + 365 * OS1_S1 + 26) =
                prefactor_x * *(b + 365 * OS1_S1 + 16) -
                p_over_q * *(b + 456 * OS1_S1 + 16) +
                11 * one_over_two_q * *(b + 287 * OS1_S1 + 16);
            *(b + 365 * OS1_S1 + 27) = prefactor_z * *(b + 365 * OS1_S1 + 13) -
                                       p_over_q * *(b + 459 * OS1_S1 + 13);
            *(b + 365 * OS1_S1 + 28) =
                prefactor_y * *(b + 365 * OS1_S1 + 15) -
                p_over_q * *(b + 458 * OS1_S1 + 15) +
                one_over_two_q * *(b + 286 * OS1_S1 + 15);
            *(b + 365 * OS1_S1 + 29) =
                prefactor_x * *(b + 365 * OS1_S1 + 19) -
                p_over_q * *(b + 456 * OS1_S1 + 19) +
                11 * one_over_two_q * *(b + 287 * OS1_S1 + 19);
            *(b + 365 * OS1_S1 + 30) =
                prefactor_y * *(b + 365 * OS1_S1 + 16) -
                p_over_q * *(b + 458 * OS1_S1 + 16) +
                one_over_two_q * *(b + 286 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 365 * OS1_S1 + 7);
            *(b + 365 * OS1_S1 + 31) = prefactor_z * *(b + 365 * OS1_S1 + 16) -
                                       p_over_q * *(b + 459 * OS1_S1 + 16);
            *(b + 365 * OS1_S1 + 32) = prefactor_z * *(b + 365 * OS1_S1 + 17) -
                                       p_over_q * *(b + 459 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 365 * OS1_S1 + 7);
            *(b + 365 * OS1_S1 + 33) =
                prefactor_y * *(b + 365 * OS1_S1 + 19) -
                p_over_q * *(b + 458 * OS1_S1 + 19) +
                one_over_two_q * *(b + 286 * OS1_S1 + 19);
            *(b + 365 * OS1_S1 + 34) =
                prefactor_z * *(b + 365 * OS1_S1 + 19) -
                p_over_q * *(b + 459 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 365 * OS1_S1 + 9);
            *(b + 366 * OS1_S1 + 20) =
                prefactor_x * *(b + 366 * OS1_S1 + 10) -
                p_over_q * *(b + 457 * OS1_S1 + 10) +
                11 * one_over_two_q * *(b + 288 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 366 * OS1_S1 + 4);
            *(b + 366 * OS1_S1 + 21) = prefactor_y * *(b + 366 * OS1_S1 + 10) -
                                       p_over_q * *(b + 459 * OS1_S1 + 10);
            *(b + 366 * OS1_S1 + 22) =
                prefactor_z * *(b + 366 * OS1_S1 + 10) -
                p_over_q * *(b + 460 * OS1_S1 + 10) +
                one_over_two_q * *(b + 286 * OS1_S1 + 10);
            *(b + 366 * OS1_S1 + 23) = prefactor_y * *(b + 366 * OS1_S1 + 11) -
                                       p_over_q * *(b + 459 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 366 * OS1_S1 + 4);
            *(b + 366 * OS1_S1 + 24) = prefactor_y * *(b + 366 * OS1_S1 + 12) -
                                       p_over_q * *(b + 459 * OS1_S1 + 12);
            *(b + 366 * OS1_S1 + 25) =
                prefactor_z * *(b + 366 * OS1_S1 + 12) -
                p_over_q * *(b + 460 * OS1_S1 + 12) +
                one_over_two_q * *(b + 286 * OS1_S1 + 12) +
                one_over_two_q * *(b + 366 * OS1_S1 + 4);
            *(b + 366 * OS1_S1 + 26) =
                prefactor_x * *(b + 366 * OS1_S1 + 16) -
                p_over_q * *(b + 457 * OS1_S1 + 16) +
                11 * one_over_two_q * *(b + 288 * OS1_S1 + 16);
            *(b + 366 * OS1_S1 + 27) =
                prefactor_z * *(b + 366 * OS1_S1 + 13) -
                p_over_q * *(b + 460 * OS1_S1 + 13) +
                one_over_two_q * *(b + 286 * OS1_S1 + 13);
            *(b + 366 * OS1_S1 + 28) = prefactor_y * *(b + 366 * OS1_S1 + 15) -
                                       p_over_q * *(b + 459 * OS1_S1 + 15);
            *(b + 366 * OS1_S1 + 29) =
                prefactor_x * *(b + 366 * OS1_S1 + 19) -
                p_over_q * *(b + 457 * OS1_S1 + 19) +
                11 * one_over_two_q * *(b + 288 * OS1_S1 + 19);
            *(b + 366 * OS1_S1 + 30) =
                prefactor_y * *(b + 366 * OS1_S1 + 16) -
                p_over_q * *(b + 459 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 366 * OS1_S1 + 7);
            *(b + 366 * OS1_S1 + 31) =
                prefactor_z * *(b + 366 * OS1_S1 + 16) -
                p_over_q * *(b + 460 * OS1_S1 + 16) +
                one_over_two_q * *(b + 286 * OS1_S1 + 16);
            *(b + 366 * OS1_S1 + 32) = prefactor_y * *(b + 366 * OS1_S1 + 18) -
                                       p_over_q * *(b + 459 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 366 * OS1_S1 + 9);
            *(b + 366 * OS1_S1 + 33) = prefactor_y * *(b + 366 * OS1_S1 + 19) -
                                       p_over_q * *(b + 459 * OS1_S1 + 19);
            *(b + 366 * OS1_S1 + 34) =
                prefactor_z * *(b + 366 * OS1_S1 + 19) -
                p_over_q * *(b + 460 * OS1_S1 + 19) +
                one_over_two_q * *(b + 286 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 366 * OS1_S1 + 9);
            *(b + 367 * OS1_S1 + 20) =
                prefactor_x * *(b + 367 * OS1_S1 + 10) -
                p_over_q * *(b + 458 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 289 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 367 * OS1_S1 + 4);
            *(b + 367 * OS1_S1 + 21) =
                prefactor_y * *(b + 367 * OS1_S1 + 10) -
                p_over_q * *(b + 461 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 287 * OS1_S1 + 10);
            *(b + 367 * OS1_S1 + 22) = prefactor_z * *(b + 367 * OS1_S1 + 10) -
                                       p_over_q * *(b + 462 * OS1_S1 + 10);
            *(b + 367 * OS1_S1 + 23) =
                prefactor_y * *(b + 367 * OS1_S1 + 11) -
                p_over_q * *(b + 461 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 287 * OS1_S1 + 11) +
                one_over_two_q * *(b + 367 * OS1_S1 + 4);
            *(b + 367 * OS1_S1 + 24) = prefactor_z * *(b + 367 * OS1_S1 + 11) -
                                       p_over_q * *(b + 462 * OS1_S1 + 11);
            *(b + 367 * OS1_S1 + 25) = prefactor_z * *(b + 367 * OS1_S1 + 12) -
                                       p_over_q * *(b + 462 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 367 * OS1_S1 + 4);
            *(b + 367 * OS1_S1 + 26) =
                prefactor_x * *(b + 367 * OS1_S1 + 16) -
                p_over_q * *(b + 458 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 289 * OS1_S1 + 16);
            *(b + 367 * OS1_S1 + 27) = prefactor_z * *(b + 367 * OS1_S1 + 13) -
                                       p_over_q * *(b + 462 * OS1_S1 + 13);
            *(b + 367 * OS1_S1 + 28) =
                prefactor_y * *(b + 367 * OS1_S1 + 15) -
                p_over_q * *(b + 461 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 287 * OS1_S1 + 15);
            *(b + 367 * OS1_S1 + 29) =
                prefactor_x * *(b + 367 * OS1_S1 + 19) -
                p_over_q * *(b + 458 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 289 * OS1_S1 + 19);
            *(b + 367 * OS1_S1 + 30) =
                prefactor_y * *(b + 367 * OS1_S1 + 16) -
                p_over_q * *(b + 461 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 287 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 367 * OS1_S1 + 7);
            *(b + 367 * OS1_S1 + 31) = prefactor_z * *(b + 367 * OS1_S1 + 16) -
                                       p_over_q * *(b + 462 * OS1_S1 + 16);
            *(b + 367 * OS1_S1 + 32) = prefactor_z * *(b + 367 * OS1_S1 + 17) -
                                       p_over_q * *(b + 462 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 367 * OS1_S1 + 7);
            *(b + 367 * OS1_S1 + 33) =
                prefactor_y * *(b + 367 * OS1_S1 + 19) -
                p_over_q * *(b + 461 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 287 * OS1_S1 + 19);
            *(b + 367 * OS1_S1 + 34) =
                prefactor_z * *(b + 367 * OS1_S1 + 19) -
                p_over_q * *(b + 462 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 367 * OS1_S1 + 9);
            *(b + 368 * OS1_S1 + 20) =
                prefactor_x * *(b + 368 * OS1_S1 + 10) -
                p_over_q * *(b + 459 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 290 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 368 * OS1_S1 + 4);
            *(b + 368 * OS1_S1 + 21) =
                prefactor_y * *(b + 368 * OS1_S1 + 10) -
                p_over_q * *(b + 462 * OS1_S1 + 10) +
                one_over_two_q * *(b + 288 * OS1_S1 + 10);
            *(b + 368 * OS1_S1 + 22) =
                prefactor_z * *(b + 368 * OS1_S1 + 10) -
                p_over_q * *(b + 463 * OS1_S1 + 10) +
                one_over_two_q * *(b + 287 * OS1_S1 + 10);
            *(b + 368 * OS1_S1 + 23) =
                prefactor_y * *(b + 368 * OS1_S1 + 11) -
                p_over_q * *(b + 462 * OS1_S1 + 11) +
                one_over_two_q * *(b + 288 * OS1_S1 + 11) +
                one_over_two_q * *(b + 368 * OS1_S1 + 4);
            *(b + 368 * OS1_S1 + 24) =
                prefactor_z * *(b + 368 * OS1_S1 + 11) -
                p_over_q * *(b + 463 * OS1_S1 + 11) +
                one_over_two_q * *(b + 287 * OS1_S1 + 11);
            *(b + 368 * OS1_S1 + 25) =
                prefactor_z * *(b + 368 * OS1_S1 + 12) -
                p_over_q * *(b + 463 * OS1_S1 + 12) +
                one_over_two_q * *(b + 287 * OS1_S1 + 12) +
                one_over_two_q * *(b + 368 * OS1_S1 + 4);
            *(b + 368 * OS1_S1 + 26) =
                prefactor_x * *(b + 368 * OS1_S1 + 16) -
                p_over_q * *(b + 459 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 290 * OS1_S1 + 16);
            *(b + 368 * OS1_S1 + 27) =
                prefactor_z * *(b + 368 * OS1_S1 + 13) -
                p_over_q * *(b + 463 * OS1_S1 + 13) +
                one_over_two_q * *(b + 287 * OS1_S1 + 13);
            *(b + 368 * OS1_S1 + 28) =
                prefactor_y * *(b + 368 * OS1_S1 + 15) -
                p_over_q * *(b + 462 * OS1_S1 + 15) +
                one_over_two_q * *(b + 288 * OS1_S1 + 15);
            *(b + 368 * OS1_S1 + 29) =
                prefactor_x * *(b + 368 * OS1_S1 + 19) -
                p_over_q * *(b + 459 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 290 * OS1_S1 + 19);
            *(b + 368 * OS1_S1 + 30) =
                prefactor_y * *(b + 368 * OS1_S1 + 16) -
                p_over_q * *(b + 462 * OS1_S1 + 16) +
                one_over_two_q * *(b + 288 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 368 * OS1_S1 + 7);
            *(b + 368 * OS1_S1 + 31) =
                prefactor_z * *(b + 368 * OS1_S1 + 16) -
                p_over_q * *(b + 463 * OS1_S1 + 16) +
                one_over_two_q * *(b + 287 * OS1_S1 + 16);
            *(b + 368 * OS1_S1 + 32) =
                prefactor_z * *(b + 368 * OS1_S1 + 17) -
                p_over_q * *(b + 463 * OS1_S1 + 17) +
                one_over_two_q * *(b + 287 * OS1_S1 + 17) +
                one_over_two_q * *(b + 368 * OS1_S1 + 7);
            *(b + 368 * OS1_S1 + 33) =
                prefactor_y * *(b + 368 * OS1_S1 + 19) -
                p_over_q * *(b + 462 * OS1_S1 + 19) +
                one_over_two_q * *(b + 288 * OS1_S1 + 19);
            *(b + 368 * OS1_S1 + 34) =
                prefactor_z * *(b + 368 * OS1_S1 + 19) -
                p_over_q * *(b + 463 * OS1_S1 + 19) +
                one_over_two_q * *(b + 287 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 368 * OS1_S1 + 9);
            *(b + 369 * OS1_S1 + 20) =
                prefactor_x * *(b + 369 * OS1_S1 + 10) -
                p_over_q * *(b + 460 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 291 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 369 * OS1_S1 + 4);
            *(b + 369 * OS1_S1 + 21) = prefactor_y * *(b + 369 * OS1_S1 + 10) -
                                       p_over_q * *(b + 463 * OS1_S1 + 10);
            *(b + 369 * OS1_S1 + 22) =
                prefactor_z * *(b + 369 * OS1_S1 + 10) -
                p_over_q * *(b + 464 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 288 * OS1_S1 + 10);
            *(b + 369 * OS1_S1 + 23) = prefactor_y * *(b + 369 * OS1_S1 + 11) -
                                       p_over_q * *(b + 463 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 369 * OS1_S1 + 4);
            *(b + 369 * OS1_S1 + 24) = prefactor_y * *(b + 369 * OS1_S1 + 12) -
                                       p_over_q * *(b + 463 * OS1_S1 + 12);
            *(b + 369 * OS1_S1 + 25) =
                prefactor_z * *(b + 369 * OS1_S1 + 12) -
                p_over_q * *(b + 464 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 288 * OS1_S1 + 12) +
                one_over_two_q * *(b + 369 * OS1_S1 + 4);
            *(b + 369 * OS1_S1 + 26) =
                prefactor_x * *(b + 369 * OS1_S1 + 16) -
                p_over_q * *(b + 460 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 291 * OS1_S1 + 16);
            *(b + 369 * OS1_S1 + 27) =
                prefactor_z * *(b + 369 * OS1_S1 + 13) -
                p_over_q * *(b + 464 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 288 * OS1_S1 + 13);
            *(b + 369 * OS1_S1 + 28) = prefactor_y * *(b + 369 * OS1_S1 + 15) -
                                       p_over_q * *(b + 463 * OS1_S1 + 15);
            *(b + 369 * OS1_S1 + 29) =
                prefactor_x * *(b + 369 * OS1_S1 + 19) -
                p_over_q * *(b + 460 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 291 * OS1_S1 + 19);
            *(b + 369 * OS1_S1 + 30) =
                prefactor_y * *(b + 369 * OS1_S1 + 16) -
                p_over_q * *(b + 463 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 369 * OS1_S1 + 7);
            *(b + 369 * OS1_S1 + 31) =
                prefactor_z * *(b + 369 * OS1_S1 + 16) -
                p_over_q * *(b + 464 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 288 * OS1_S1 + 16);
            *(b + 369 * OS1_S1 + 32) = prefactor_y * *(b + 369 * OS1_S1 + 18) -
                                       p_over_q * *(b + 463 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 369 * OS1_S1 + 9);
            *(b + 369 * OS1_S1 + 33) = prefactor_y * *(b + 369 * OS1_S1 + 19) -
                                       p_over_q * *(b + 463 * OS1_S1 + 19);
            *(b + 369 * OS1_S1 + 34) =
                prefactor_z * *(b + 369 * OS1_S1 + 19) -
                p_over_q * *(b + 464 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 288 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 369 * OS1_S1 + 9);
            *(b + 370 * OS1_S1 + 20) =
                prefactor_x * *(b + 370 * OS1_S1 + 10) -
                p_over_q * *(b + 461 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 292 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 370 * OS1_S1 + 4);
            *(b + 370 * OS1_S1 + 21) =
                prefactor_y * *(b + 370 * OS1_S1 + 10) -
                p_over_q * *(b + 465 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 10);
            *(b + 370 * OS1_S1 + 22) = prefactor_z * *(b + 370 * OS1_S1 + 10) -
                                       p_over_q * *(b + 466 * OS1_S1 + 10);
            *(b + 370 * OS1_S1 + 23) =
                prefactor_y * *(b + 370 * OS1_S1 + 11) -
                p_over_q * *(b + 465 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 11) +
                one_over_two_q * *(b + 370 * OS1_S1 + 4);
            *(b + 370 * OS1_S1 + 24) = prefactor_z * *(b + 370 * OS1_S1 + 11) -
                                       p_over_q * *(b + 466 * OS1_S1 + 11);
            *(b + 370 * OS1_S1 + 25) = prefactor_z * *(b + 370 * OS1_S1 + 12) -
                                       p_over_q * *(b + 466 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 370 * OS1_S1 + 4);
            *(b + 370 * OS1_S1 + 26) =
                prefactor_x * *(b + 370 * OS1_S1 + 16) -
                p_over_q * *(b + 461 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 292 * OS1_S1 + 16);
            *(b + 370 * OS1_S1 + 27) = prefactor_z * *(b + 370 * OS1_S1 + 13) -
                                       p_over_q * *(b + 466 * OS1_S1 + 13);
            *(b + 370 * OS1_S1 + 28) =
                prefactor_y * *(b + 370 * OS1_S1 + 15) -
                p_over_q * *(b + 465 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 15);
            *(b + 370 * OS1_S1 + 29) =
                prefactor_x * *(b + 370 * OS1_S1 + 19) -
                p_over_q * *(b + 461 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 292 * OS1_S1 + 19);
            *(b + 370 * OS1_S1 + 30) =
                prefactor_y * *(b + 370 * OS1_S1 + 16) -
                p_over_q * *(b + 465 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 370 * OS1_S1 + 7);
            *(b + 370 * OS1_S1 + 31) = prefactor_z * *(b + 370 * OS1_S1 + 16) -
                                       p_over_q * *(b + 466 * OS1_S1 + 16);
            *(b + 370 * OS1_S1 + 32) = prefactor_z * *(b + 370 * OS1_S1 + 17) -
                                       p_over_q * *(b + 466 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 370 * OS1_S1 + 7);
            *(b + 370 * OS1_S1 + 33) =
                prefactor_y * *(b + 370 * OS1_S1 + 19) -
                p_over_q * *(b + 465 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 289 * OS1_S1 + 19);
            *(b + 370 * OS1_S1 + 34) =
                prefactor_z * *(b + 370 * OS1_S1 + 19) -
                p_over_q * *(b + 466 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 370 * OS1_S1 + 9);
            *(b + 371 * OS1_S1 + 20) =
                prefactor_x * *(b + 371 * OS1_S1 + 10) -
                p_over_q * *(b + 462 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 293 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 371 * OS1_S1 + 4);
            *(b + 371 * OS1_S1 + 21) =
                prefactor_y * *(b + 371 * OS1_S1 + 10) -
                p_over_q * *(b + 466 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 10);
            *(b + 371 * OS1_S1 + 22) =
                prefactor_z * *(b + 371 * OS1_S1 + 10) -
                p_over_q * *(b + 467 * OS1_S1 + 10) +
                one_over_two_q * *(b + 289 * OS1_S1 + 10);
            *(b + 371 * OS1_S1 + 23) =
                prefactor_y * *(b + 371 * OS1_S1 + 11) -
                p_over_q * *(b + 466 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 11) +
                one_over_two_q * *(b + 371 * OS1_S1 + 4);
            *(b + 371 * OS1_S1 + 24) =
                prefactor_z * *(b + 371 * OS1_S1 + 11) -
                p_over_q * *(b + 467 * OS1_S1 + 11) +
                one_over_two_q * *(b + 289 * OS1_S1 + 11);
            *(b + 371 * OS1_S1 + 25) =
                prefactor_z * *(b + 371 * OS1_S1 + 12) -
                p_over_q * *(b + 467 * OS1_S1 + 12) +
                one_over_two_q * *(b + 289 * OS1_S1 + 12) +
                one_over_two_q * *(b + 371 * OS1_S1 + 4);
            *(b + 371 * OS1_S1 + 26) =
                prefactor_x * *(b + 371 * OS1_S1 + 16) -
                p_over_q * *(b + 462 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 293 * OS1_S1 + 16);
            *(b + 371 * OS1_S1 + 27) =
                prefactor_z * *(b + 371 * OS1_S1 + 13) -
                p_over_q * *(b + 467 * OS1_S1 + 13) +
                one_over_two_q * *(b + 289 * OS1_S1 + 13);
            *(b + 371 * OS1_S1 + 28) =
                prefactor_y * *(b + 371 * OS1_S1 + 15) -
                p_over_q * *(b + 466 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 15);
            *(b + 371 * OS1_S1 + 29) =
                prefactor_x * *(b + 371 * OS1_S1 + 19) -
                p_over_q * *(b + 462 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 293 * OS1_S1 + 19);
            *(b + 371 * OS1_S1 + 30) =
                prefactor_y * *(b + 371 * OS1_S1 + 16) -
                p_over_q * *(b + 466 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 371 * OS1_S1 + 7);
            *(b + 371 * OS1_S1 + 31) =
                prefactor_z * *(b + 371 * OS1_S1 + 16) -
                p_over_q * *(b + 467 * OS1_S1 + 16) +
                one_over_two_q * *(b + 289 * OS1_S1 + 16);
            *(b + 371 * OS1_S1 + 32) =
                prefactor_z * *(b + 371 * OS1_S1 + 17) -
                p_over_q * *(b + 467 * OS1_S1 + 17) +
                one_over_two_q * *(b + 289 * OS1_S1 + 17) +
                one_over_two_q * *(b + 371 * OS1_S1 + 7);
            *(b + 371 * OS1_S1 + 33) =
                prefactor_y * *(b + 371 * OS1_S1 + 19) -
                p_over_q * *(b + 466 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 19);
            *(b + 371 * OS1_S1 + 34) =
                prefactor_z * *(b + 371 * OS1_S1 + 19) -
                p_over_q * *(b + 467 * OS1_S1 + 19) +
                one_over_two_q * *(b + 289 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 371 * OS1_S1 + 9);
            *(b + 372 * OS1_S1 + 20) =
                prefactor_x * *(b + 372 * OS1_S1 + 10) -
                p_over_q * *(b + 463 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 294 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 372 * OS1_S1 + 4);
            *(b + 372 * OS1_S1 + 21) =
                prefactor_y * *(b + 372 * OS1_S1 + 10) -
                p_over_q * *(b + 467 * OS1_S1 + 10) +
                one_over_two_q * *(b + 291 * OS1_S1 + 10);
            *(b + 372 * OS1_S1 + 22) =
                prefactor_z * *(b + 372 * OS1_S1 + 10) -
                p_over_q * *(b + 468 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 10);
            *(b + 372 * OS1_S1 + 23) =
                prefactor_y * *(b + 372 * OS1_S1 + 11) -
                p_over_q * *(b + 467 * OS1_S1 + 11) +
                one_over_two_q * *(b + 291 * OS1_S1 + 11) +
                one_over_two_q * *(b + 372 * OS1_S1 + 4);
            *(b + 372 * OS1_S1 + 24) =
                prefactor_y * *(b + 372 * OS1_S1 + 12) -
                p_over_q * *(b + 467 * OS1_S1 + 12) +
                one_over_two_q * *(b + 291 * OS1_S1 + 12);
            *(b + 372 * OS1_S1 + 25) =
                prefactor_z * *(b + 372 * OS1_S1 + 12) -
                p_over_q * *(b + 468 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 12) +
                one_over_two_q * *(b + 372 * OS1_S1 + 4);
            *(b + 372 * OS1_S1 + 26) =
                prefactor_x * *(b + 372 * OS1_S1 + 16) -
                p_over_q * *(b + 463 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 294 * OS1_S1 + 16);
            *(b + 372 * OS1_S1 + 27) =
                prefactor_z * *(b + 372 * OS1_S1 + 13) -
                p_over_q * *(b + 468 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 13);
            *(b + 372 * OS1_S1 + 28) =
                prefactor_y * *(b + 372 * OS1_S1 + 15) -
                p_over_q * *(b + 467 * OS1_S1 + 15) +
                one_over_two_q * *(b + 291 * OS1_S1 + 15);
            *(b + 372 * OS1_S1 + 29) =
                prefactor_x * *(b + 372 * OS1_S1 + 19) -
                p_over_q * *(b + 463 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 294 * OS1_S1 + 19);
            *(b + 372 * OS1_S1 + 30) =
                prefactor_y * *(b + 372 * OS1_S1 + 16) -
                p_over_q * *(b + 467 * OS1_S1 + 16) +
                one_over_two_q * *(b + 291 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 372 * OS1_S1 + 7);
            *(b + 372 * OS1_S1 + 31) =
                prefactor_z * *(b + 372 * OS1_S1 + 16) -
                p_over_q * *(b + 468 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 16);
            *(b + 372 * OS1_S1 + 32) =
                prefactor_y * *(b + 372 * OS1_S1 + 18) -
                p_over_q * *(b + 467 * OS1_S1 + 18) +
                one_over_two_q * *(b + 291 * OS1_S1 + 18) +
                one_over_two_q * *(b + 372 * OS1_S1 + 9);
            *(b + 372 * OS1_S1 + 33) =
                prefactor_y * *(b + 372 * OS1_S1 + 19) -
                p_over_q * *(b + 467 * OS1_S1 + 19) +
                one_over_two_q * *(b + 291 * OS1_S1 + 19);
            *(b + 372 * OS1_S1 + 34) =
                prefactor_z * *(b + 372 * OS1_S1 + 19) -
                p_over_q * *(b + 468 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 290 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 372 * OS1_S1 + 9);
            *(b + 373 * OS1_S1 + 20) =
                prefactor_x * *(b + 373 * OS1_S1 + 10) -
                p_over_q * *(b + 464 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 295 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 373 * OS1_S1 + 4);
            *(b + 373 * OS1_S1 + 21) = prefactor_y * *(b + 373 * OS1_S1 + 10) -
                                       p_over_q * *(b + 468 * OS1_S1 + 10);
            *(b + 373 * OS1_S1 + 22) =
                prefactor_z * *(b + 373 * OS1_S1 + 10) -
                p_over_q * *(b + 469 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 10);
            *(b + 373 * OS1_S1 + 23) = prefactor_y * *(b + 373 * OS1_S1 + 11) -
                                       p_over_q * *(b + 468 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 373 * OS1_S1 + 4);
            *(b + 373 * OS1_S1 + 24) = prefactor_y * *(b + 373 * OS1_S1 + 12) -
                                       p_over_q * *(b + 468 * OS1_S1 + 12);
            *(b + 373 * OS1_S1 + 25) =
                prefactor_z * *(b + 373 * OS1_S1 + 12) -
                p_over_q * *(b + 469 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 12) +
                one_over_two_q * *(b + 373 * OS1_S1 + 4);
            *(b + 373 * OS1_S1 + 26) =
                prefactor_x * *(b + 373 * OS1_S1 + 16) -
                p_over_q * *(b + 464 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 295 * OS1_S1 + 16);
            *(b + 373 * OS1_S1 + 27) =
                prefactor_z * *(b + 373 * OS1_S1 + 13) -
                p_over_q * *(b + 469 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 13);
            *(b + 373 * OS1_S1 + 28) = prefactor_y * *(b + 373 * OS1_S1 + 15) -
                                       p_over_q * *(b + 468 * OS1_S1 + 15);
            *(b + 373 * OS1_S1 + 29) =
                prefactor_x * *(b + 373 * OS1_S1 + 19) -
                p_over_q * *(b + 464 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 295 * OS1_S1 + 19);
            *(b + 373 * OS1_S1 + 30) =
                prefactor_y * *(b + 373 * OS1_S1 + 16) -
                p_over_q * *(b + 468 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 373 * OS1_S1 + 7);
            *(b + 373 * OS1_S1 + 31) =
                prefactor_z * *(b + 373 * OS1_S1 + 16) -
                p_over_q * *(b + 469 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 16);
            *(b + 373 * OS1_S1 + 32) = prefactor_y * *(b + 373 * OS1_S1 + 18) -
                                       p_over_q * *(b + 468 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 373 * OS1_S1 + 9);
            *(b + 373 * OS1_S1 + 33) = prefactor_y * *(b + 373 * OS1_S1 + 19) -
                                       p_over_q * *(b + 468 * OS1_S1 + 19);
            *(b + 373 * OS1_S1 + 34) =
                prefactor_z * *(b + 373 * OS1_S1 + 19) -
                p_over_q * *(b + 469 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 291 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 373 * OS1_S1 + 9);
            *(b + 374 * OS1_S1 + 20) =
                prefactor_x * *(b + 374 * OS1_S1 + 10) -
                p_over_q * *(b + 465 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 296 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 374 * OS1_S1 + 4);
            *(b + 374 * OS1_S1 + 21) =
                prefactor_y * *(b + 374 * OS1_S1 + 10) -
                p_over_q * *(b + 470 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 10);
            *(b + 374 * OS1_S1 + 22) = prefactor_z * *(b + 374 * OS1_S1 + 10) -
                                       p_over_q * *(b + 471 * OS1_S1 + 10);
            *(b + 374 * OS1_S1 + 23) =
                prefactor_y * *(b + 374 * OS1_S1 + 11) -
                p_over_q * *(b + 470 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 11) +
                one_over_two_q * *(b + 374 * OS1_S1 + 4);
            *(b + 374 * OS1_S1 + 24) = prefactor_z * *(b + 374 * OS1_S1 + 11) -
                                       p_over_q * *(b + 471 * OS1_S1 + 11);
            *(b + 374 * OS1_S1 + 25) = prefactor_z * *(b + 374 * OS1_S1 + 12) -
                                       p_over_q * *(b + 471 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 374 * OS1_S1 + 4);
            *(b + 374 * OS1_S1 + 26) =
                prefactor_x * *(b + 374 * OS1_S1 + 16) -
                p_over_q * *(b + 465 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 296 * OS1_S1 + 16);
            *(b + 374 * OS1_S1 + 27) = prefactor_z * *(b + 374 * OS1_S1 + 13) -
                                       p_over_q * *(b + 471 * OS1_S1 + 13);
            *(b + 374 * OS1_S1 + 28) =
                prefactor_y * *(b + 374 * OS1_S1 + 15) -
                p_over_q * *(b + 470 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 15);
            *(b + 374 * OS1_S1 + 29) =
                prefactor_x * *(b + 374 * OS1_S1 + 19) -
                p_over_q * *(b + 465 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 296 * OS1_S1 + 19);
            *(b + 374 * OS1_S1 + 30) =
                prefactor_y * *(b + 374 * OS1_S1 + 16) -
                p_over_q * *(b + 470 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 374 * OS1_S1 + 7);
            *(b + 374 * OS1_S1 + 31) = prefactor_z * *(b + 374 * OS1_S1 + 16) -
                                       p_over_q * *(b + 471 * OS1_S1 + 16);
            *(b + 374 * OS1_S1 + 32) = prefactor_z * *(b + 374 * OS1_S1 + 17) -
                                       p_over_q * *(b + 471 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 374 * OS1_S1 + 7);
            *(b + 374 * OS1_S1 + 33) =
                prefactor_y * *(b + 374 * OS1_S1 + 19) -
                p_over_q * *(b + 470 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 292 * OS1_S1 + 19);
            *(b + 374 * OS1_S1 + 34) =
                prefactor_z * *(b + 374 * OS1_S1 + 19) -
                p_over_q * *(b + 471 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 374 * OS1_S1 + 9);
            *(b + 375 * OS1_S1 + 20) =
                prefactor_x * *(b + 375 * OS1_S1 + 10) -
                p_over_q * *(b + 466 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 297 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 375 * OS1_S1 + 4);
            *(b + 375 * OS1_S1 + 21) =
                prefactor_y * *(b + 375 * OS1_S1 + 10) -
                p_over_q * *(b + 471 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 10);
            *(b + 375 * OS1_S1 + 22) =
                prefactor_z * *(b + 375 * OS1_S1 + 10) -
                p_over_q * *(b + 472 * OS1_S1 + 10) +
                one_over_two_q * *(b + 292 * OS1_S1 + 10);
            *(b + 375 * OS1_S1 + 23) =
                prefactor_y * *(b + 375 * OS1_S1 + 11) -
                p_over_q * *(b + 471 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 11) +
                one_over_two_q * *(b + 375 * OS1_S1 + 4);
            *(b + 375 * OS1_S1 + 24) =
                prefactor_z * *(b + 375 * OS1_S1 + 11) -
                p_over_q * *(b + 472 * OS1_S1 + 11) +
                one_over_two_q * *(b + 292 * OS1_S1 + 11);
            *(b + 375 * OS1_S1 + 25) =
                prefactor_z * *(b + 375 * OS1_S1 + 12) -
                p_over_q * *(b + 472 * OS1_S1 + 12) +
                one_over_two_q * *(b + 292 * OS1_S1 + 12) +
                one_over_two_q * *(b + 375 * OS1_S1 + 4);
            *(b + 375 * OS1_S1 + 26) =
                prefactor_x * *(b + 375 * OS1_S1 + 16) -
                p_over_q * *(b + 466 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 297 * OS1_S1 + 16);
            *(b + 375 * OS1_S1 + 27) =
                prefactor_z * *(b + 375 * OS1_S1 + 13) -
                p_over_q * *(b + 472 * OS1_S1 + 13) +
                one_over_two_q * *(b + 292 * OS1_S1 + 13);
            *(b + 375 * OS1_S1 + 28) =
                prefactor_y * *(b + 375 * OS1_S1 + 15) -
                p_over_q * *(b + 471 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 15);
            *(b + 375 * OS1_S1 + 29) =
                prefactor_x * *(b + 375 * OS1_S1 + 19) -
                p_over_q * *(b + 466 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 297 * OS1_S1 + 19);
            *(b + 375 * OS1_S1 + 30) =
                prefactor_y * *(b + 375 * OS1_S1 + 16) -
                p_over_q * *(b + 471 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 375 * OS1_S1 + 7);
            *(b + 375 * OS1_S1 + 31) =
                prefactor_z * *(b + 375 * OS1_S1 + 16) -
                p_over_q * *(b + 472 * OS1_S1 + 16) +
                one_over_two_q * *(b + 292 * OS1_S1 + 16);
            *(b + 375 * OS1_S1 + 32) =
                prefactor_z * *(b + 375 * OS1_S1 + 17) -
                p_over_q * *(b + 472 * OS1_S1 + 17) +
                one_over_two_q * *(b + 292 * OS1_S1 + 17) +
                one_over_two_q * *(b + 375 * OS1_S1 + 7);
            *(b + 375 * OS1_S1 + 33) =
                prefactor_y * *(b + 375 * OS1_S1 + 19) -
                p_over_q * *(b + 471 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 293 * OS1_S1 + 19);
            *(b + 375 * OS1_S1 + 34) =
                prefactor_z * *(b + 375 * OS1_S1 + 19) -
                p_over_q * *(b + 472 * OS1_S1 + 19) +
                one_over_two_q * *(b + 292 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 375 * OS1_S1 + 9);
            *(b + 376 * OS1_S1 + 20) =
                prefactor_x * *(b + 376 * OS1_S1 + 10) -
                p_over_q * *(b + 467 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 298 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 376 * OS1_S1 + 4);
            *(b + 376 * OS1_S1 + 21) =
                prefactor_y * *(b + 376 * OS1_S1 + 10) -
                p_over_q * *(b + 472 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 294 * OS1_S1 + 10);
            *(b + 376 * OS1_S1 + 22) =
                prefactor_z * *(b + 376 * OS1_S1 + 10) -
                p_over_q * *(b + 473 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 10);
            *(b + 376 * OS1_S1 + 23) =
                prefactor_y * *(b + 376 * OS1_S1 + 11) -
                p_over_q * *(b + 472 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 294 * OS1_S1 + 11) +
                one_over_two_q * *(b + 376 * OS1_S1 + 4);
            *(b + 376 * OS1_S1 + 24) =
                prefactor_z * *(b + 376 * OS1_S1 + 11) -
                p_over_q * *(b + 473 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 11);
            *(b + 376 * OS1_S1 + 25) =
                prefactor_z * *(b + 376 * OS1_S1 + 12) -
                p_over_q * *(b + 473 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 12) +
                one_over_two_q * *(b + 376 * OS1_S1 + 4);
            *(b + 376 * OS1_S1 + 26) =
                prefactor_x * *(b + 376 * OS1_S1 + 16) -
                p_over_q * *(b + 467 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 298 * OS1_S1 + 16);
            *(b + 376 * OS1_S1 + 27) =
                prefactor_z * *(b + 376 * OS1_S1 + 13) -
                p_over_q * *(b + 473 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 13);
            *(b + 376 * OS1_S1 + 28) =
                prefactor_y * *(b + 376 * OS1_S1 + 15) -
                p_over_q * *(b + 472 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 294 * OS1_S1 + 15);
            *(b + 376 * OS1_S1 + 29) =
                prefactor_x * *(b + 376 * OS1_S1 + 19) -
                p_over_q * *(b + 467 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 298 * OS1_S1 + 19);
            *(b + 376 * OS1_S1 + 30) =
                prefactor_y * *(b + 376 * OS1_S1 + 16) -
                p_over_q * *(b + 472 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 294 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 376 * OS1_S1 + 7);
            *(b + 376 * OS1_S1 + 31) =
                prefactor_z * *(b + 376 * OS1_S1 + 16) -
                p_over_q * *(b + 473 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 16);
            *(b + 376 * OS1_S1 + 32) =
                prefactor_z * *(b + 376 * OS1_S1 + 17) -
                p_over_q * *(b + 473 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 17) +
                one_over_two_q * *(b + 376 * OS1_S1 + 7);
            *(b + 376 * OS1_S1 + 33) =
                prefactor_y * *(b + 376 * OS1_S1 + 19) -
                p_over_q * *(b + 472 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 294 * OS1_S1 + 19);
            *(b + 376 * OS1_S1 + 34) =
                prefactor_z * *(b + 376 * OS1_S1 + 19) -
                p_over_q * *(b + 473 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 293 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 376 * OS1_S1 + 9);
            *(b + 377 * OS1_S1 + 20) =
                prefactor_x * *(b + 377 * OS1_S1 + 10) -
                p_over_q * *(b + 468 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 299 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 377 * OS1_S1 + 4);
            *(b + 377 * OS1_S1 + 21) =
                prefactor_y * *(b + 377 * OS1_S1 + 10) -
                p_over_q * *(b + 473 * OS1_S1 + 10) +
                one_over_two_q * *(b + 295 * OS1_S1 + 10);
            *(b + 377 * OS1_S1 + 22) =
                prefactor_z * *(b + 377 * OS1_S1 + 10) -
                p_over_q * *(b + 474 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 10);
            *(b + 377 * OS1_S1 + 23) =
                prefactor_y * *(b + 377 * OS1_S1 + 11) -
                p_over_q * *(b + 473 * OS1_S1 + 11) +
                one_over_two_q * *(b + 295 * OS1_S1 + 11) +
                one_over_two_q * *(b + 377 * OS1_S1 + 4);
            *(b + 377 * OS1_S1 + 24) =
                prefactor_y * *(b + 377 * OS1_S1 + 12) -
                p_over_q * *(b + 473 * OS1_S1 + 12) +
                one_over_two_q * *(b + 295 * OS1_S1 + 12);
            *(b + 377 * OS1_S1 + 25) =
                prefactor_z * *(b + 377 * OS1_S1 + 12) -
                p_over_q * *(b + 474 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 12) +
                one_over_two_q * *(b + 377 * OS1_S1 + 4);
            *(b + 377 * OS1_S1 + 26) =
                prefactor_x * *(b + 377 * OS1_S1 + 16) -
                p_over_q * *(b + 468 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 299 * OS1_S1 + 16);
            *(b + 377 * OS1_S1 + 27) =
                prefactor_z * *(b + 377 * OS1_S1 + 13) -
                p_over_q * *(b + 474 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 13);
            *(b + 377 * OS1_S1 + 28) =
                prefactor_y * *(b + 377 * OS1_S1 + 15) -
                p_over_q * *(b + 473 * OS1_S1 + 15) +
                one_over_two_q * *(b + 295 * OS1_S1 + 15);
            *(b + 377 * OS1_S1 + 29) =
                prefactor_x * *(b + 377 * OS1_S1 + 19) -
                p_over_q * *(b + 468 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 299 * OS1_S1 + 19);
            *(b + 377 * OS1_S1 + 30) =
                prefactor_y * *(b + 377 * OS1_S1 + 16) -
                p_over_q * *(b + 473 * OS1_S1 + 16) +
                one_over_two_q * *(b + 295 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 377 * OS1_S1 + 7);
            *(b + 377 * OS1_S1 + 31) =
                prefactor_z * *(b + 377 * OS1_S1 + 16) -
                p_over_q * *(b + 474 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 16);
            *(b + 377 * OS1_S1 + 32) =
                prefactor_y * *(b + 377 * OS1_S1 + 18) -
                p_over_q * *(b + 473 * OS1_S1 + 18) +
                one_over_two_q * *(b + 295 * OS1_S1 + 18) +
                one_over_two_q * *(b + 377 * OS1_S1 + 9);
            *(b + 377 * OS1_S1 + 33) =
                prefactor_y * *(b + 377 * OS1_S1 + 19) -
                p_over_q * *(b + 473 * OS1_S1 + 19) +
                one_over_two_q * *(b + 295 * OS1_S1 + 19);
            *(b + 377 * OS1_S1 + 34) =
                prefactor_z * *(b + 377 * OS1_S1 + 19) -
                p_over_q * *(b + 474 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 294 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 377 * OS1_S1 + 9);
            *(b + 378 * OS1_S1 + 20) =
                prefactor_x * *(b + 378 * OS1_S1 + 10) -
                p_over_q * *(b + 469 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 300 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 378 * OS1_S1 + 4);
            *(b + 378 * OS1_S1 + 21) = prefactor_y * *(b + 378 * OS1_S1 + 10) -
                                       p_over_q * *(b + 474 * OS1_S1 + 10);
            *(b + 378 * OS1_S1 + 22) =
                prefactor_z * *(b + 378 * OS1_S1 + 10) -
                p_over_q * *(b + 475 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 10);
            *(b + 378 * OS1_S1 + 23) = prefactor_y * *(b + 378 * OS1_S1 + 11) -
                                       p_over_q * *(b + 474 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 378 * OS1_S1 + 4);
            *(b + 378 * OS1_S1 + 24) = prefactor_y * *(b + 378 * OS1_S1 + 12) -
                                       p_over_q * *(b + 474 * OS1_S1 + 12);
            *(b + 378 * OS1_S1 + 25) =
                prefactor_z * *(b + 378 * OS1_S1 + 12) -
                p_over_q * *(b + 475 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 12) +
                one_over_two_q * *(b + 378 * OS1_S1 + 4);
            *(b + 378 * OS1_S1 + 26) =
                prefactor_x * *(b + 378 * OS1_S1 + 16) -
                p_over_q * *(b + 469 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 300 * OS1_S1 + 16);
            *(b + 378 * OS1_S1 + 27) =
                prefactor_z * *(b + 378 * OS1_S1 + 13) -
                p_over_q * *(b + 475 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 13);
            *(b + 378 * OS1_S1 + 28) = prefactor_y * *(b + 378 * OS1_S1 + 15) -
                                       p_over_q * *(b + 474 * OS1_S1 + 15);
            *(b + 378 * OS1_S1 + 29) =
                prefactor_x * *(b + 378 * OS1_S1 + 19) -
                p_over_q * *(b + 469 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 300 * OS1_S1 + 19);
            *(b + 378 * OS1_S1 + 30) =
                prefactor_y * *(b + 378 * OS1_S1 + 16) -
                p_over_q * *(b + 474 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 378 * OS1_S1 + 7);
            *(b + 378 * OS1_S1 + 31) =
                prefactor_z * *(b + 378 * OS1_S1 + 16) -
                p_over_q * *(b + 475 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 16);
            *(b + 378 * OS1_S1 + 32) = prefactor_y * *(b + 378 * OS1_S1 + 18) -
                                       p_over_q * *(b + 474 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 378 * OS1_S1 + 9);
            *(b + 378 * OS1_S1 + 33) = prefactor_y * *(b + 378 * OS1_S1 + 19) -
                                       p_over_q * *(b + 474 * OS1_S1 + 19);
            *(b + 378 * OS1_S1 + 34) =
                prefactor_z * *(b + 378 * OS1_S1 + 19) -
                p_over_q * *(b + 475 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 295 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 378 * OS1_S1 + 9);
            *(b + 379 * OS1_S1 + 20) =
                prefactor_x * *(b + 379 * OS1_S1 + 10) -
                p_over_q * *(b + 470 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 301 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 379 * OS1_S1 + 4);
            *(b + 379 * OS1_S1 + 21) =
                prefactor_y * *(b + 379 * OS1_S1 + 10) -
                p_over_q * *(b + 476 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 296 * OS1_S1 + 10);
            *(b + 379 * OS1_S1 + 22) = prefactor_z * *(b + 379 * OS1_S1 + 10) -
                                       p_over_q * *(b + 477 * OS1_S1 + 10);
            *(b + 379 * OS1_S1 + 23) =
                prefactor_y * *(b + 379 * OS1_S1 + 11) -
                p_over_q * *(b + 476 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 296 * OS1_S1 + 11) +
                one_over_two_q * *(b + 379 * OS1_S1 + 4);
            *(b + 379 * OS1_S1 + 24) = prefactor_z * *(b + 379 * OS1_S1 + 11) -
                                       p_over_q * *(b + 477 * OS1_S1 + 11);
            *(b + 379 * OS1_S1 + 25) = prefactor_z * *(b + 379 * OS1_S1 + 12) -
                                       p_over_q * *(b + 477 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 379 * OS1_S1 + 4);
            *(b + 379 * OS1_S1 + 26) =
                prefactor_x * *(b + 379 * OS1_S1 + 16) -
                p_over_q * *(b + 470 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 301 * OS1_S1 + 16);
            *(b + 379 * OS1_S1 + 27) = prefactor_z * *(b + 379 * OS1_S1 + 13) -
                                       p_over_q * *(b + 477 * OS1_S1 + 13);
            *(b + 379 * OS1_S1 + 28) =
                prefactor_y * *(b + 379 * OS1_S1 + 15) -
                p_over_q * *(b + 476 * OS1_S1 + 15) +
                5 * one_over_two_q * *(b + 296 * OS1_S1 + 15);
            *(b + 379 * OS1_S1 + 29) =
                prefactor_x * *(b + 379 * OS1_S1 + 19) -
                p_over_q * *(b + 470 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 301 * OS1_S1 + 19);
            *(b + 379 * OS1_S1 + 30) =
                prefactor_y * *(b + 379 * OS1_S1 + 16) -
                p_over_q * *(b + 476 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 296 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 379 * OS1_S1 + 7);
            *(b + 379 * OS1_S1 + 31) = prefactor_z * *(b + 379 * OS1_S1 + 16) -
                                       p_over_q * *(b + 477 * OS1_S1 + 16);
            *(b + 379 * OS1_S1 + 32) = prefactor_z * *(b + 379 * OS1_S1 + 17) -
                                       p_over_q * *(b + 477 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 379 * OS1_S1 + 7);
            *(b + 379 * OS1_S1 + 33) =
                prefactor_y * *(b + 379 * OS1_S1 + 19) -
                p_over_q * *(b + 476 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 296 * OS1_S1 + 19);
            *(b + 379 * OS1_S1 + 34) =
                prefactor_z * *(b + 379 * OS1_S1 + 19) -
                p_over_q * *(b + 477 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 379 * OS1_S1 + 9);
            *(b + 380 * OS1_S1 + 20) =
                prefactor_x * *(b + 380 * OS1_S1 + 10) -
                p_over_q * *(b + 471 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 302 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 380 * OS1_S1 + 4);
            *(b + 380 * OS1_S1 + 21) =
                prefactor_y * *(b + 380 * OS1_S1 + 10) -
                p_over_q * *(b + 477 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 10);
            *(b + 380 * OS1_S1 + 22) =
                prefactor_z * *(b + 380 * OS1_S1 + 10) -
                p_over_q * *(b + 478 * OS1_S1 + 10) +
                one_over_two_q * *(b + 296 * OS1_S1 + 10);
            *(b + 380 * OS1_S1 + 23) =
                prefactor_y * *(b + 380 * OS1_S1 + 11) -
                p_over_q * *(b + 477 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 11) +
                one_over_two_q * *(b + 380 * OS1_S1 + 4);
            *(b + 380 * OS1_S1 + 24) =
                prefactor_z * *(b + 380 * OS1_S1 + 11) -
                p_over_q * *(b + 478 * OS1_S1 + 11) +
                one_over_two_q * *(b + 296 * OS1_S1 + 11);
            *(b + 380 * OS1_S1 + 25) =
                prefactor_z * *(b + 380 * OS1_S1 + 12) -
                p_over_q * *(b + 478 * OS1_S1 + 12) +
                one_over_two_q * *(b + 296 * OS1_S1 + 12) +
                one_over_two_q * *(b + 380 * OS1_S1 + 4);
            *(b + 380 * OS1_S1 + 26) =
                prefactor_x * *(b + 380 * OS1_S1 + 16) -
                p_over_q * *(b + 471 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 302 * OS1_S1 + 16);
            *(b + 380 * OS1_S1 + 27) =
                prefactor_z * *(b + 380 * OS1_S1 + 13) -
                p_over_q * *(b + 478 * OS1_S1 + 13) +
                one_over_two_q * *(b + 296 * OS1_S1 + 13);
            *(b + 380 * OS1_S1 + 28) =
                prefactor_y * *(b + 380 * OS1_S1 + 15) -
                p_over_q * *(b + 477 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 15);
            *(b + 380 * OS1_S1 + 29) =
                prefactor_x * *(b + 380 * OS1_S1 + 19) -
                p_over_q * *(b + 471 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 302 * OS1_S1 + 19);
            *(b + 380 * OS1_S1 + 30) =
                prefactor_y * *(b + 380 * OS1_S1 + 16) -
                p_over_q * *(b + 477 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 380 * OS1_S1 + 7);
            *(b + 380 * OS1_S1 + 31) =
                prefactor_z * *(b + 380 * OS1_S1 + 16) -
                p_over_q * *(b + 478 * OS1_S1 + 16) +
                one_over_two_q * *(b + 296 * OS1_S1 + 16);
            *(b + 380 * OS1_S1 + 32) =
                prefactor_z * *(b + 380 * OS1_S1 + 17) -
                p_over_q * *(b + 478 * OS1_S1 + 17) +
                one_over_two_q * *(b + 296 * OS1_S1 + 17) +
                one_over_two_q * *(b + 380 * OS1_S1 + 7);
            *(b + 380 * OS1_S1 + 33) =
                prefactor_y * *(b + 380 * OS1_S1 + 19) -
                p_over_q * *(b + 477 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 297 * OS1_S1 + 19);
            *(b + 380 * OS1_S1 + 34) =
                prefactor_z * *(b + 380 * OS1_S1 + 19) -
                p_over_q * *(b + 478 * OS1_S1 + 19) +
                one_over_two_q * *(b + 296 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 380 * OS1_S1 + 9);
            *(b + 381 * OS1_S1 + 20) =
                prefactor_x * *(b + 381 * OS1_S1 + 10) -
                p_over_q * *(b + 472 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 303 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 381 * OS1_S1 + 4);
            *(b + 381 * OS1_S1 + 21) =
                prefactor_y * *(b + 381 * OS1_S1 + 10) -
                p_over_q * *(b + 478 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 10);
            *(b + 381 * OS1_S1 + 22) =
                prefactor_z * *(b + 381 * OS1_S1 + 10) -
                p_over_q * *(b + 479 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 10);
            *(b + 381 * OS1_S1 + 23) =
                prefactor_y * *(b + 381 * OS1_S1 + 11) -
                p_over_q * *(b + 478 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 11) +
                one_over_two_q * *(b + 381 * OS1_S1 + 4);
            *(b + 381 * OS1_S1 + 24) =
                prefactor_z * *(b + 381 * OS1_S1 + 11) -
                p_over_q * *(b + 479 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 11);
            *(b + 381 * OS1_S1 + 25) =
                prefactor_z * *(b + 381 * OS1_S1 + 12) -
                p_over_q * *(b + 479 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 12) +
                one_over_two_q * *(b + 381 * OS1_S1 + 4);
            *(b + 381 * OS1_S1 + 26) =
                prefactor_x * *(b + 381 * OS1_S1 + 16) -
                p_over_q * *(b + 472 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 303 * OS1_S1 + 16);
            *(b + 381 * OS1_S1 + 27) =
                prefactor_z * *(b + 381 * OS1_S1 + 13) -
                p_over_q * *(b + 479 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 13);
            *(b + 381 * OS1_S1 + 28) =
                prefactor_y * *(b + 381 * OS1_S1 + 15) -
                p_over_q * *(b + 478 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 15);
            *(b + 381 * OS1_S1 + 29) =
                prefactor_x * *(b + 381 * OS1_S1 + 19) -
                p_over_q * *(b + 472 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 303 * OS1_S1 + 19);
            *(b + 381 * OS1_S1 + 30) =
                prefactor_y * *(b + 381 * OS1_S1 + 16) -
                p_over_q * *(b + 478 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 381 * OS1_S1 + 7);
            *(b + 381 * OS1_S1 + 31) =
                prefactor_z * *(b + 381 * OS1_S1 + 16) -
                p_over_q * *(b + 479 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 16);
            *(b + 381 * OS1_S1 + 32) =
                prefactor_z * *(b + 381 * OS1_S1 + 17) -
                p_over_q * *(b + 479 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 17) +
                one_over_two_q * *(b + 381 * OS1_S1 + 7);
            *(b + 381 * OS1_S1 + 33) =
                prefactor_y * *(b + 381 * OS1_S1 + 19) -
                p_over_q * *(b + 478 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 19);
            *(b + 381 * OS1_S1 + 34) =
                prefactor_z * *(b + 381 * OS1_S1 + 19) -
                p_over_q * *(b + 479 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 297 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 381 * OS1_S1 + 9);
            *(b + 382 * OS1_S1 + 20) =
                prefactor_x * *(b + 382 * OS1_S1 + 10) -
                p_over_q * *(b + 473 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 304 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 382 * OS1_S1 + 4);
            *(b + 382 * OS1_S1 + 21) =
                prefactor_y * *(b + 382 * OS1_S1 + 10) -
                p_over_q * *(b + 479 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 10);
            *(b + 382 * OS1_S1 + 22) =
                prefactor_z * *(b + 382 * OS1_S1 + 10) -
                p_over_q * *(b + 480 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 10);
            *(b + 382 * OS1_S1 + 23) =
                prefactor_y * *(b + 382 * OS1_S1 + 11) -
                p_over_q * *(b + 479 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 11) +
                one_over_two_q * *(b + 382 * OS1_S1 + 4);
            *(b + 382 * OS1_S1 + 24) =
                prefactor_y * *(b + 382 * OS1_S1 + 12) -
                p_over_q * *(b + 479 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 12);
            *(b + 382 * OS1_S1 + 25) =
                prefactor_z * *(b + 382 * OS1_S1 + 12) -
                p_over_q * *(b + 480 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 12) +
                one_over_two_q * *(b + 382 * OS1_S1 + 4);
            *(b + 382 * OS1_S1 + 26) =
                prefactor_x * *(b + 382 * OS1_S1 + 16) -
                p_over_q * *(b + 473 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 304 * OS1_S1 + 16);
            *(b + 382 * OS1_S1 + 27) =
                prefactor_z * *(b + 382 * OS1_S1 + 13) -
                p_over_q * *(b + 480 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 13);
            *(b + 382 * OS1_S1 + 28) =
                prefactor_y * *(b + 382 * OS1_S1 + 15) -
                p_over_q * *(b + 479 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 15);
            *(b + 382 * OS1_S1 + 29) =
                prefactor_x * *(b + 382 * OS1_S1 + 19) -
                p_over_q * *(b + 473 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 304 * OS1_S1 + 19);
            *(b + 382 * OS1_S1 + 30) =
                prefactor_y * *(b + 382 * OS1_S1 + 16) -
                p_over_q * *(b + 479 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 382 * OS1_S1 + 7);
            *(b + 382 * OS1_S1 + 31) =
                prefactor_z * *(b + 382 * OS1_S1 + 16) -
                p_over_q * *(b + 480 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 16);
            *(b + 382 * OS1_S1 + 32) =
                prefactor_y * *(b + 382 * OS1_S1 + 18) -
                p_over_q * *(b + 479 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 18) +
                one_over_two_q * *(b + 382 * OS1_S1 + 9);
            *(b + 382 * OS1_S1 + 33) =
                prefactor_y * *(b + 382 * OS1_S1 + 19) -
                p_over_q * *(b + 479 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 299 * OS1_S1 + 19);
            *(b + 382 * OS1_S1 + 34) =
                prefactor_z * *(b + 382 * OS1_S1 + 19) -
                p_over_q * *(b + 480 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 298 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 382 * OS1_S1 + 9);
            *(b + 383 * OS1_S1 + 20) =
                prefactor_x * *(b + 383 * OS1_S1 + 10) -
                p_over_q * *(b + 474 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 305 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 383 * OS1_S1 + 4);
            *(b + 383 * OS1_S1 + 21) =
                prefactor_y * *(b + 383 * OS1_S1 + 10) -
                p_over_q * *(b + 480 * OS1_S1 + 10) +
                one_over_two_q * *(b + 300 * OS1_S1 + 10);
            *(b + 383 * OS1_S1 + 22) =
                prefactor_z * *(b + 383 * OS1_S1 + 10) -
                p_over_q * *(b + 481 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 10);
            *(b + 383 * OS1_S1 + 23) =
                prefactor_y * *(b + 383 * OS1_S1 + 11) -
                p_over_q * *(b + 480 * OS1_S1 + 11) +
                one_over_two_q * *(b + 300 * OS1_S1 + 11) +
                one_over_two_q * *(b + 383 * OS1_S1 + 4);
            *(b + 383 * OS1_S1 + 24) =
                prefactor_y * *(b + 383 * OS1_S1 + 12) -
                p_over_q * *(b + 480 * OS1_S1 + 12) +
                one_over_two_q * *(b + 300 * OS1_S1 + 12);
            *(b + 383 * OS1_S1 + 25) =
                prefactor_z * *(b + 383 * OS1_S1 + 12) -
                p_over_q * *(b + 481 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 12) +
                one_over_two_q * *(b + 383 * OS1_S1 + 4);
            *(b + 383 * OS1_S1 + 26) =
                prefactor_x * *(b + 383 * OS1_S1 + 16) -
                p_over_q * *(b + 474 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 305 * OS1_S1 + 16);
            *(b + 383 * OS1_S1 + 27) =
                prefactor_z * *(b + 383 * OS1_S1 + 13) -
                p_over_q * *(b + 481 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 13);
            *(b + 383 * OS1_S1 + 28) =
                prefactor_y * *(b + 383 * OS1_S1 + 15) -
                p_over_q * *(b + 480 * OS1_S1 + 15) +
                one_over_two_q * *(b + 300 * OS1_S1 + 15);
            *(b + 383 * OS1_S1 + 29) =
                prefactor_x * *(b + 383 * OS1_S1 + 19) -
                p_over_q * *(b + 474 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 305 * OS1_S1 + 19);
            *(b + 383 * OS1_S1 + 30) =
                prefactor_y * *(b + 383 * OS1_S1 + 16) -
                p_over_q * *(b + 480 * OS1_S1 + 16) +
                one_over_two_q * *(b + 300 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 383 * OS1_S1 + 7);
            *(b + 383 * OS1_S1 + 31) =
                prefactor_z * *(b + 383 * OS1_S1 + 16) -
                p_over_q * *(b + 481 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 16);
            *(b + 383 * OS1_S1 + 32) =
                prefactor_y * *(b + 383 * OS1_S1 + 18) -
                p_over_q * *(b + 480 * OS1_S1 + 18) +
                one_over_two_q * *(b + 300 * OS1_S1 + 18) +
                one_over_two_q * *(b + 383 * OS1_S1 + 9);
            *(b + 383 * OS1_S1 + 33) =
                prefactor_y * *(b + 383 * OS1_S1 + 19) -
                p_over_q * *(b + 480 * OS1_S1 + 19) +
                one_over_two_q * *(b + 300 * OS1_S1 + 19);
            *(b + 383 * OS1_S1 + 34) =
                prefactor_z * *(b + 383 * OS1_S1 + 19) -
                p_over_q * *(b + 481 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 299 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 383 * OS1_S1 + 9);
            *(b + 384 * OS1_S1 + 20) =
                prefactor_x * *(b + 384 * OS1_S1 + 10) -
                p_over_q * *(b + 475 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 306 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 384 * OS1_S1 + 4);
            *(b + 384 * OS1_S1 + 21) = prefactor_y * *(b + 384 * OS1_S1 + 10) -
                                       p_over_q * *(b + 481 * OS1_S1 + 10);
            *(b + 384 * OS1_S1 + 22) =
                prefactor_z * *(b + 384 * OS1_S1 + 10) -
                p_over_q * *(b + 482 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 300 * OS1_S1 + 10);
            *(b + 384 * OS1_S1 + 23) = prefactor_y * *(b + 384 * OS1_S1 + 11) -
                                       p_over_q * *(b + 481 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 384 * OS1_S1 + 4);
            *(b + 384 * OS1_S1 + 24) = prefactor_y * *(b + 384 * OS1_S1 + 12) -
                                       p_over_q * *(b + 481 * OS1_S1 + 12);
            *(b + 384 * OS1_S1 + 25) =
                prefactor_z * *(b + 384 * OS1_S1 + 12) -
                p_over_q * *(b + 482 * OS1_S1 + 12) +
                5 * one_over_two_q * *(b + 300 * OS1_S1 + 12) +
                one_over_two_q * *(b + 384 * OS1_S1 + 4);
            *(b + 384 * OS1_S1 + 26) =
                prefactor_x * *(b + 384 * OS1_S1 + 16) -
                p_over_q * *(b + 475 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 306 * OS1_S1 + 16);
            *(b + 384 * OS1_S1 + 27) =
                prefactor_z * *(b + 384 * OS1_S1 + 13) -
                p_over_q * *(b + 482 * OS1_S1 + 13) +
                5 * one_over_two_q * *(b + 300 * OS1_S1 + 13);
            *(b + 384 * OS1_S1 + 28) = prefactor_y * *(b + 384 * OS1_S1 + 15) -
                                       p_over_q * *(b + 481 * OS1_S1 + 15);
            *(b + 384 * OS1_S1 + 29) =
                prefactor_x * *(b + 384 * OS1_S1 + 19) -
                p_over_q * *(b + 475 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 306 * OS1_S1 + 19);
            *(b + 384 * OS1_S1 + 30) =
                prefactor_y * *(b + 384 * OS1_S1 + 16) -
                p_over_q * *(b + 481 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 384 * OS1_S1 + 7);
            *(b + 384 * OS1_S1 + 31) =
                prefactor_z * *(b + 384 * OS1_S1 + 16) -
                p_over_q * *(b + 482 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 300 * OS1_S1 + 16);
            *(b + 384 * OS1_S1 + 32) = prefactor_y * *(b + 384 * OS1_S1 + 18) -
                                       p_over_q * *(b + 481 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 384 * OS1_S1 + 9);
            *(b + 384 * OS1_S1 + 33) = prefactor_y * *(b + 384 * OS1_S1 + 19) -
                                       p_over_q * *(b + 481 * OS1_S1 + 19);
            *(b + 384 * OS1_S1 + 34) =
                prefactor_z * *(b + 384 * OS1_S1 + 19) -
                p_over_q * *(b + 482 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 300 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 384 * OS1_S1 + 9);
            *(b + 385 * OS1_S1 + 20) =
                prefactor_x * *(b + 385 * OS1_S1 + 10) -
                p_over_q * *(b + 476 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 307 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 385 * OS1_S1 + 4);
            *(b + 385 * OS1_S1 + 21) =
                prefactor_y * *(b + 385 * OS1_S1 + 10) -
                p_over_q * *(b + 483 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 301 * OS1_S1 + 10);
            *(b + 385 * OS1_S1 + 22) = prefactor_z * *(b + 385 * OS1_S1 + 10) -
                                       p_over_q * *(b + 484 * OS1_S1 + 10);
            *(b + 385 * OS1_S1 + 23) =
                prefactor_y * *(b + 385 * OS1_S1 + 11) -
                p_over_q * *(b + 483 * OS1_S1 + 11) +
                6 * one_over_two_q * *(b + 301 * OS1_S1 + 11) +
                one_over_two_q * *(b + 385 * OS1_S1 + 4);
            *(b + 385 * OS1_S1 + 24) = prefactor_z * *(b + 385 * OS1_S1 + 11) -
                                       p_over_q * *(b + 484 * OS1_S1 + 11);
            *(b + 385 * OS1_S1 + 25) = prefactor_z * *(b + 385 * OS1_S1 + 12) -
                                       p_over_q * *(b + 484 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 385 * OS1_S1 + 4);
            *(b + 385 * OS1_S1 + 26) =
                prefactor_x * *(b + 385 * OS1_S1 + 16) -
                p_over_q * *(b + 476 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 307 * OS1_S1 + 16);
            *(b + 385 * OS1_S1 + 27) = prefactor_z * *(b + 385 * OS1_S1 + 13) -
                                       p_over_q * *(b + 484 * OS1_S1 + 13);
            *(b + 385 * OS1_S1 + 28) =
                prefactor_y * *(b + 385 * OS1_S1 + 15) -
                p_over_q * *(b + 483 * OS1_S1 + 15) +
                6 * one_over_two_q * *(b + 301 * OS1_S1 + 15);
            *(b + 385 * OS1_S1 + 29) =
                prefactor_x * *(b + 385 * OS1_S1 + 19) -
                p_over_q * *(b + 476 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 307 * OS1_S1 + 19);
            *(b + 385 * OS1_S1 + 30) =
                prefactor_y * *(b + 385 * OS1_S1 + 16) -
                p_over_q * *(b + 483 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 301 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 385 * OS1_S1 + 7);
            *(b + 385 * OS1_S1 + 31) = prefactor_z * *(b + 385 * OS1_S1 + 16) -
                                       p_over_q * *(b + 484 * OS1_S1 + 16);
            *(b + 385 * OS1_S1 + 32) = prefactor_z * *(b + 385 * OS1_S1 + 17) -
                                       p_over_q * *(b + 484 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 385 * OS1_S1 + 7);
            *(b + 385 * OS1_S1 + 33) =
                prefactor_y * *(b + 385 * OS1_S1 + 19) -
                p_over_q * *(b + 483 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 301 * OS1_S1 + 19);
            *(b + 385 * OS1_S1 + 34) =
                prefactor_z * *(b + 385 * OS1_S1 + 19) -
                p_over_q * *(b + 484 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 385 * OS1_S1 + 9);
            *(b + 386 * OS1_S1 + 20) =
                prefactor_x * *(b + 386 * OS1_S1 + 10) -
                p_over_q * *(b + 477 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 308 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 386 * OS1_S1 + 4);
            *(b + 386 * OS1_S1 + 21) =
                prefactor_y * *(b + 386 * OS1_S1 + 10) -
                p_over_q * *(b + 484 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 302 * OS1_S1 + 10);
            *(b + 386 * OS1_S1 + 22) =
                prefactor_z * *(b + 386 * OS1_S1 + 10) -
                p_over_q * *(b + 485 * OS1_S1 + 10) +
                one_over_two_q * *(b + 301 * OS1_S1 + 10);
            *(b + 386 * OS1_S1 + 23) =
                prefactor_y * *(b + 386 * OS1_S1 + 11) -
                p_over_q * *(b + 484 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 302 * OS1_S1 + 11) +
                one_over_two_q * *(b + 386 * OS1_S1 + 4);
            *(b + 386 * OS1_S1 + 24) =
                prefactor_z * *(b + 386 * OS1_S1 + 11) -
                p_over_q * *(b + 485 * OS1_S1 + 11) +
                one_over_two_q * *(b + 301 * OS1_S1 + 11);
            *(b + 386 * OS1_S1 + 25) =
                prefactor_z * *(b + 386 * OS1_S1 + 12) -
                p_over_q * *(b + 485 * OS1_S1 + 12) +
                one_over_two_q * *(b + 301 * OS1_S1 + 12) +
                one_over_two_q * *(b + 386 * OS1_S1 + 4);
            *(b + 386 * OS1_S1 + 26) =
                prefactor_x * *(b + 386 * OS1_S1 + 16) -
                p_over_q * *(b + 477 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 308 * OS1_S1 + 16);
            *(b + 386 * OS1_S1 + 27) =
                prefactor_z * *(b + 386 * OS1_S1 + 13) -
                p_over_q * *(b + 485 * OS1_S1 + 13) +
                one_over_two_q * *(b + 301 * OS1_S1 + 13);
            *(b + 386 * OS1_S1 + 28) =
                prefactor_y * *(b + 386 * OS1_S1 + 15) -
                p_over_q * *(b + 484 * OS1_S1 + 15) +
                5 * one_over_two_q * *(b + 302 * OS1_S1 + 15);
            *(b + 386 * OS1_S1 + 29) =
                prefactor_x * *(b + 386 * OS1_S1 + 19) -
                p_over_q * *(b + 477 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 308 * OS1_S1 + 19);
            *(b + 386 * OS1_S1 + 30) =
                prefactor_y * *(b + 386 * OS1_S1 + 16) -
                p_over_q * *(b + 484 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 302 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 386 * OS1_S1 + 7);
            *(b + 386 * OS1_S1 + 31) =
                prefactor_z * *(b + 386 * OS1_S1 + 16) -
                p_over_q * *(b + 485 * OS1_S1 + 16) +
                one_over_two_q * *(b + 301 * OS1_S1 + 16);
            *(b + 386 * OS1_S1 + 32) =
                prefactor_z * *(b + 386 * OS1_S1 + 17) -
                p_over_q * *(b + 485 * OS1_S1 + 17) +
                one_over_two_q * *(b + 301 * OS1_S1 + 17) +
                one_over_two_q * *(b + 386 * OS1_S1 + 7);
            *(b + 386 * OS1_S1 + 33) =
                prefactor_y * *(b + 386 * OS1_S1 + 19) -
                p_over_q * *(b + 484 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 302 * OS1_S1 + 19);
            *(b + 386 * OS1_S1 + 34) =
                prefactor_z * *(b + 386 * OS1_S1 + 19) -
                p_over_q * *(b + 485 * OS1_S1 + 19) +
                one_over_two_q * *(b + 301 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 386 * OS1_S1 + 9);
            *(b + 387 * OS1_S1 + 20) =
                prefactor_x * *(b + 387 * OS1_S1 + 10) -
                p_over_q * *(b + 478 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 309 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 387 * OS1_S1 + 4);
            *(b + 387 * OS1_S1 + 21) =
                prefactor_y * *(b + 387 * OS1_S1 + 10) -
                p_over_q * *(b + 485 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 10);
            *(b + 387 * OS1_S1 + 22) =
                prefactor_z * *(b + 387 * OS1_S1 + 10) -
                p_over_q * *(b + 486 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 10);
            *(b + 387 * OS1_S1 + 23) =
                prefactor_y * *(b + 387 * OS1_S1 + 11) -
                p_over_q * *(b + 485 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 11) +
                one_over_two_q * *(b + 387 * OS1_S1 + 4);
            *(b + 387 * OS1_S1 + 24) =
                prefactor_z * *(b + 387 * OS1_S1 + 11) -
                p_over_q * *(b + 486 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 11);
            *(b + 387 * OS1_S1 + 25) =
                prefactor_z * *(b + 387 * OS1_S1 + 12) -
                p_over_q * *(b + 486 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 12) +
                one_over_two_q * *(b + 387 * OS1_S1 + 4);
            *(b + 387 * OS1_S1 + 26) =
                prefactor_x * *(b + 387 * OS1_S1 + 16) -
                p_over_q * *(b + 478 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 309 * OS1_S1 + 16);
            *(b + 387 * OS1_S1 + 27) =
                prefactor_z * *(b + 387 * OS1_S1 + 13) -
                p_over_q * *(b + 486 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 13);
            *(b + 387 * OS1_S1 + 28) =
                prefactor_y * *(b + 387 * OS1_S1 + 15) -
                p_over_q * *(b + 485 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 15);
            *(b + 387 * OS1_S1 + 29) =
                prefactor_x * *(b + 387 * OS1_S1 + 19) -
                p_over_q * *(b + 478 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 309 * OS1_S1 + 19);
            *(b + 387 * OS1_S1 + 30) =
                prefactor_y * *(b + 387 * OS1_S1 + 16) -
                p_over_q * *(b + 485 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 387 * OS1_S1 + 7);
            *(b + 387 * OS1_S1 + 31) =
                prefactor_z * *(b + 387 * OS1_S1 + 16) -
                p_over_q * *(b + 486 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 16);
            *(b + 387 * OS1_S1 + 32) =
                prefactor_z * *(b + 387 * OS1_S1 + 17) -
                p_over_q * *(b + 486 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 17) +
                one_over_two_q * *(b + 387 * OS1_S1 + 7);
            *(b + 387 * OS1_S1 + 33) =
                prefactor_y * *(b + 387 * OS1_S1 + 19) -
                p_over_q * *(b + 485 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 303 * OS1_S1 + 19);
            *(b + 387 * OS1_S1 + 34) =
                prefactor_z * *(b + 387 * OS1_S1 + 19) -
                p_over_q * *(b + 486 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 302 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 387 * OS1_S1 + 9);
            *(b + 388 * OS1_S1 + 20) =
                prefactor_x * *(b + 388 * OS1_S1 + 10) -
                p_over_q * *(b + 479 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 310 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 388 * OS1_S1 + 4);
            *(b + 388 * OS1_S1 + 21) =
                prefactor_y * *(b + 388 * OS1_S1 + 10) -
                p_over_q * *(b + 486 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 10);
            *(b + 388 * OS1_S1 + 22) =
                prefactor_z * *(b + 388 * OS1_S1 + 10) -
                p_over_q * *(b + 487 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 10);
            *(b + 388 * OS1_S1 + 23) =
                prefactor_y * *(b + 388 * OS1_S1 + 11) -
                p_over_q * *(b + 486 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 11) +
                one_over_two_q * *(b + 388 * OS1_S1 + 4);
            *(b + 388 * OS1_S1 + 24) =
                prefactor_z * *(b + 388 * OS1_S1 + 11) -
                p_over_q * *(b + 487 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 11);
            *(b + 388 * OS1_S1 + 25) =
                prefactor_z * *(b + 388 * OS1_S1 + 12) -
                p_over_q * *(b + 487 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 12) +
                one_over_two_q * *(b + 388 * OS1_S1 + 4);
            *(b + 388 * OS1_S1 + 26) =
                prefactor_x * *(b + 388 * OS1_S1 + 16) -
                p_over_q * *(b + 479 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 310 * OS1_S1 + 16);
            *(b + 388 * OS1_S1 + 27) =
                prefactor_z * *(b + 388 * OS1_S1 + 13) -
                p_over_q * *(b + 487 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 13);
            *(b + 388 * OS1_S1 + 28) =
                prefactor_y * *(b + 388 * OS1_S1 + 15) -
                p_over_q * *(b + 486 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 15);
            *(b + 388 * OS1_S1 + 29) =
                prefactor_x * *(b + 388 * OS1_S1 + 19) -
                p_over_q * *(b + 479 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 310 * OS1_S1 + 19);
            *(b + 388 * OS1_S1 + 30) =
                prefactor_y * *(b + 388 * OS1_S1 + 16) -
                p_over_q * *(b + 486 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 388 * OS1_S1 + 7);
            *(b + 388 * OS1_S1 + 31) =
                prefactor_z * *(b + 388 * OS1_S1 + 16) -
                p_over_q * *(b + 487 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 16);
            *(b + 388 * OS1_S1 + 32) =
                prefactor_z * *(b + 388 * OS1_S1 + 17) -
                p_over_q * *(b + 487 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 17) +
                one_over_two_q * *(b + 388 * OS1_S1 + 7);
            *(b + 388 * OS1_S1 + 33) =
                prefactor_y * *(b + 388 * OS1_S1 + 19) -
                p_over_q * *(b + 486 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 304 * OS1_S1 + 19);
            *(b + 388 * OS1_S1 + 34) =
                prefactor_z * *(b + 388 * OS1_S1 + 19) -
                p_over_q * *(b + 487 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 303 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 388 * OS1_S1 + 9);
            *(b + 389 * OS1_S1 + 20) =
                prefactor_x * *(b + 389 * OS1_S1 + 10) -
                p_over_q * *(b + 480 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 311 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 389 * OS1_S1 + 4);
            *(b + 389 * OS1_S1 + 21) =
                prefactor_y * *(b + 389 * OS1_S1 + 10) -
                p_over_q * *(b + 487 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 10);
            *(b + 389 * OS1_S1 + 22) =
                prefactor_z * *(b + 389 * OS1_S1 + 10) -
                p_over_q * *(b + 488 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 10);
            *(b + 389 * OS1_S1 + 23) =
                prefactor_y * *(b + 389 * OS1_S1 + 11) -
                p_over_q * *(b + 487 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 11) +
                one_over_two_q * *(b + 389 * OS1_S1 + 4);
            *(b + 389 * OS1_S1 + 24) =
                prefactor_y * *(b + 389 * OS1_S1 + 12) -
                p_over_q * *(b + 487 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 12);
            *(b + 389 * OS1_S1 + 25) =
                prefactor_z * *(b + 389 * OS1_S1 + 12) -
                p_over_q * *(b + 488 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 12) +
                one_over_two_q * *(b + 389 * OS1_S1 + 4);
            *(b + 389 * OS1_S1 + 26) =
                prefactor_x * *(b + 389 * OS1_S1 + 16) -
                p_over_q * *(b + 480 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 311 * OS1_S1 + 16);
            *(b + 389 * OS1_S1 + 27) =
                prefactor_z * *(b + 389 * OS1_S1 + 13) -
                p_over_q * *(b + 488 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 13);
            *(b + 389 * OS1_S1 + 28) =
                prefactor_y * *(b + 389 * OS1_S1 + 15) -
                p_over_q * *(b + 487 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 15);
            *(b + 389 * OS1_S1 + 29) =
                prefactor_x * *(b + 389 * OS1_S1 + 19) -
                p_over_q * *(b + 480 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 311 * OS1_S1 + 19);
            *(b + 389 * OS1_S1 + 30) =
                prefactor_y * *(b + 389 * OS1_S1 + 16) -
                p_over_q * *(b + 487 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 389 * OS1_S1 + 7);
            *(b + 389 * OS1_S1 + 31) =
                prefactor_z * *(b + 389 * OS1_S1 + 16) -
                p_over_q * *(b + 488 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 16);
            *(b + 389 * OS1_S1 + 32) =
                prefactor_y * *(b + 389 * OS1_S1 + 18) -
                p_over_q * *(b + 487 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 18) +
                one_over_two_q * *(b + 389 * OS1_S1 + 9);
            *(b + 389 * OS1_S1 + 33) =
                prefactor_y * *(b + 389 * OS1_S1 + 19) -
                p_over_q * *(b + 487 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 305 * OS1_S1 + 19);
            *(b + 389 * OS1_S1 + 34) =
                prefactor_z * *(b + 389 * OS1_S1 + 19) -
                p_over_q * *(b + 488 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 304 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 389 * OS1_S1 + 9);
            *(b + 390 * OS1_S1 + 20) =
                prefactor_x * *(b + 390 * OS1_S1 + 10) -
                p_over_q * *(b + 481 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 312 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 390 * OS1_S1 + 4);
            *(b + 390 * OS1_S1 + 21) =
                prefactor_y * *(b + 390 * OS1_S1 + 10) -
                p_over_q * *(b + 488 * OS1_S1 + 10) +
                one_over_two_q * *(b + 306 * OS1_S1 + 10);
            *(b + 390 * OS1_S1 + 22) =
                prefactor_z * *(b + 390 * OS1_S1 + 10) -
                p_over_q * *(b + 489 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 305 * OS1_S1 + 10);
            *(b + 390 * OS1_S1 + 23) =
                prefactor_y * *(b + 390 * OS1_S1 + 11) -
                p_over_q * *(b + 488 * OS1_S1 + 11) +
                one_over_two_q * *(b + 306 * OS1_S1 + 11) +
                one_over_two_q * *(b + 390 * OS1_S1 + 4);
            *(b + 390 * OS1_S1 + 24) =
                prefactor_y * *(b + 390 * OS1_S1 + 12) -
                p_over_q * *(b + 488 * OS1_S1 + 12) +
                one_over_two_q * *(b + 306 * OS1_S1 + 12);
            *(b + 390 * OS1_S1 + 25) =
                prefactor_z * *(b + 390 * OS1_S1 + 12) -
                p_over_q * *(b + 489 * OS1_S1 + 12) +
                5 * one_over_two_q * *(b + 305 * OS1_S1 + 12) +
                one_over_two_q * *(b + 390 * OS1_S1 + 4);
            *(b + 390 * OS1_S1 + 26) =
                prefactor_x * *(b + 390 * OS1_S1 + 16) -
                p_over_q * *(b + 481 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 312 * OS1_S1 + 16);
            *(b + 390 * OS1_S1 + 27) =
                prefactor_z * *(b + 390 * OS1_S1 + 13) -
                p_over_q * *(b + 489 * OS1_S1 + 13) +
                5 * one_over_two_q * *(b + 305 * OS1_S1 + 13);
            *(b + 390 * OS1_S1 + 28) =
                prefactor_y * *(b + 390 * OS1_S1 + 15) -
                p_over_q * *(b + 488 * OS1_S1 + 15) +
                one_over_two_q * *(b + 306 * OS1_S1 + 15);
            *(b + 390 * OS1_S1 + 29) =
                prefactor_x * *(b + 390 * OS1_S1 + 19) -
                p_over_q * *(b + 481 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 312 * OS1_S1 + 19);
            *(b + 390 * OS1_S1 + 30) =
                prefactor_y * *(b + 390 * OS1_S1 + 16) -
                p_over_q * *(b + 488 * OS1_S1 + 16) +
                one_over_two_q * *(b + 306 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 390 * OS1_S1 + 7);
            *(b + 390 * OS1_S1 + 31) =
                prefactor_z * *(b + 390 * OS1_S1 + 16) -
                p_over_q * *(b + 489 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 305 * OS1_S1 + 16);
            *(b + 390 * OS1_S1 + 32) =
                prefactor_y * *(b + 390 * OS1_S1 + 18) -
                p_over_q * *(b + 488 * OS1_S1 + 18) +
                one_over_two_q * *(b + 306 * OS1_S1 + 18) +
                one_over_two_q * *(b + 390 * OS1_S1 + 9);
            *(b + 390 * OS1_S1 + 33) =
                prefactor_y * *(b + 390 * OS1_S1 + 19) -
                p_over_q * *(b + 488 * OS1_S1 + 19) +
                one_over_two_q * *(b + 306 * OS1_S1 + 19);
            *(b + 390 * OS1_S1 + 34) =
                prefactor_z * *(b + 390 * OS1_S1 + 19) -
                p_over_q * *(b + 489 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 305 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 390 * OS1_S1 + 9);
            *(b + 391 * OS1_S1 + 20) =
                prefactor_x * *(b + 391 * OS1_S1 + 10) -
                p_over_q * *(b + 482 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 313 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 391 * OS1_S1 + 4);
            *(b + 391 * OS1_S1 + 21) = prefactor_y * *(b + 391 * OS1_S1 + 10) -
                                       p_over_q * *(b + 489 * OS1_S1 + 10);
            *(b + 391 * OS1_S1 + 22) =
                prefactor_z * *(b + 391 * OS1_S1 + 10) -
                p_over_q * *(b + 490 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 306 * OS1_S1 + 10);
            *(b + 391 * OS1_S1 + 23) = prefactor_y * *(b + 391 * OS1_S1 + 11) -
                                       p_over_q * *(b + 489 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 391 * OS1_S1 + 4);
            *(b + 391 * OS1_S1 + 24) = prefactor_y * *(b + 391 * OS1_S1 + 12) -
                                       p_over_q * *(b + 489 * OS1_S1 + 12);
            *(b + 391 * OS1_S1 + 25) =
                prefactor_z * *(b + 391 * OS1_S1 + 12) -
                p_over_q * *(b + 490 * OS1_S1 + 12) +
                6 * one_over_two_q * *(b + 306 * OS1_S1 + 12) +
                one_over_two_q * *(b + 391 * OS1_S1 + 4);
            *(b + 391 * OS1_S1 + 26) =
                prefactor_x * *(b + 391 * OS1_S1 + 16) -
                p_over_q * *(b + 482 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 313 * OS1_S1 + 16);
            *(b + 391 * OS1_S1 + 27) =
                prefactor_z * *(b + 391 * OS1_S1 + 13) -
                p_over_q * *(b + 490 * OS1_S1 + 13) +
                6 * one_over_two_q * *(b + 306 * OS1_S1 + 13);
            *(b + 391 * OS1_S1 + 28) = prefactor_y * *(b + 391 * OS1_S1 + 15) -
                                       p_over_q * *(b + 489 * OS1_S1 + 15);
            *(b + 391 * OS1_S1 + 29) =
                prefactor_x * *(b + 391 * OS1_S1 + 19) -
                p_over_q * *(b + 482 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 313 * OS1_S1 + 19);
            *(b + 391 * OS1_S1 + 30) =
                prefactor_y * *(b + 391 * OS1_S1 + 16) -
                p_over_q * *(b + 489 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 391 * OS1_S1 + 7);
            *(b + 391 * OS1_S1 + 31) =
                prefactor_z * *(b + 391 * OS1_S1 + 16) -
                p_over_q * *(b + 490 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 306 * OS1_S1 + 16);
            *(b + 391 * OS1_S1 + 32) = prefactor_y * *(b + 391 * OS1_S1 + 18) -
                                       p_over_q * *(b + 489 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 391 * OS1_S1 + 9);
            *(b + 391 * OS1_S1 + 33) = prefactor_y * *(b + 391 * OS1_S1 + 19) -
                                       p_over_q * *(b + 489 * OS1_S1 + 19);
            *(b + 391 * OS1_S1 + 34) =
                prefactor_z * *(b + 391 * OS1_S1 + 19) -
                p_over_q * *(b + 490 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 306 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 391 * OS1_S1 + 9);
            *(b + 392 * OS1_S1 + 20) =
                prefactor_x * *(b + 392 * OS1_S1 + 10) -
                p_over_q * *(b + 483 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 314 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 392 * OS1_S1 + 4);
            *(b + 392 * OS1_S1 + 21) =
                prefactor_y * *(b + 392 * OS1_S1 + 10) -
                p_over_q * *(b + 491 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 307 * OS1_S1 + 10);
            *(b + 392 * OS1_S1 + 22) = prefactor_z * *(b + 392 * OS1_S1 + 10) -
                                       p_over_q * *(b + 492 * OS1_S1 + 10);
            *(b + 392 * OS1_S1 + 23) =
                prefactor_x * *(b + 392 * OS1_S1 + 13) -
                p_over_q * *(b + 483 * OS1_S1 + 13) +
                5 * one_over_two_q * *(b + 314 * OS1_S1 + 13) +
                one_over_two_q * *(b + 392 * OS1_S1 + 7);
            *(b + 392 * OS1_S1 + 24) = prefactor_z * *(b + 392 * OS1_S1 + 11) -
                                       p_over_q * *(b + 492 * OS1_S1 + 11);
            *(b + 392 * OS1_S1 + 25) = prefactor_z * *(b + 392 * OS1_S1 + 12) -
                                       p_over_q * *(b + 492 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 392 * OS1_S1 + 4);
            *(b + 392 * OS1_S1 + 26) =
                prefactor_x * *(b + 392 * OS1_S1 + 16) -
                p_over_q * *(b + 483 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 314 * OS1_S1 + 16);
            *(b + 392 * OS1_S1 + 27) = prefactor_z * *(b + 392 * OS1_S1 + 13) -
                                       p_over_q * *(b + 492 * OS1_S1 + 13);
            *(b + 392 * OS1_S1 + 28) =
                prefactor_x * *(b + 392 * OS1_S1 + 18) -
                p_over_q * *(b + 483 * OS1_S1 + 18) +
                5 * one_over_two_q * *(b + 314 * OS1_S1 + 18);
            *(b + 392 * OS1_S1 + 29) =
                prefactor_x * *(b + 392 * OS1_S1 + 19) -
                p_over_q * *(b + 483 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 314 * OS1_S1 + 19);
            *(b + 392 * OS1_S1 + 30) =
                prefactor_y * *(b + 392 * OS1_S1 + 16) -
                p_over_q * *(b + 491 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 307 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 392 * OS1_S1 + 7);
            *(b + 392 * OS1_S1 + 31) = prefactor_z * *(b + 392 * OS1_S1 + 16) -
                                       p_over_q * *(b + 492 * OS1_S1 + 16);
            *(b + 392 * OS1_S1 + 32) = prefactor_z * *(b + 392 * OS1_S1 + 17) -
                                       p_over_q * *(b + 492 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 392 * OS1_S1 + 7);
            *(b + 392 * OS1_S1 + 33) =
                prefactor_y * *(b + 392 * OS1_S1 + 19) -
                p_over_q * *(b + 491 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 307 * OS1_S1 + 19);
            *(b + 392 * OS1_S1 + 34) =
                prefactor_z * *(b + 392 * OS1_S1 + 19) -
                p_over_q * *(b + 492 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 392 * OS1_S1 + 9);
            *(b + 393 * OS1_S1 + 20) =
                prefactor_x * *(b + 393 * OS1_S1 + 10) -
                p_over_q * *(b + 484 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 315 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 393 * OS1_S1 + 4);
            *(b + 393 * OS1_S1 + 21) =
                prefactor_y * *(b + 393 * OS1_S1 + 10) -
                p_over_q * *(b + 492 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 308 * OS1_S1 + 10);
            *(b + 393 * OS1_S1 + 22) =
                prefactor_z * *(b + 393 * OS1_S1 + 10) -
                p_over_q * *(b + 493 * OS1_S1 + 10) +
                one_over_two_q * *(b + 307 * OS1_S1 + 10);
            *(b + 393 * OS1_S1 + 23) =
                prefactor_x * *(b + 393 * OS1_S1 + 13) -
                p_over_q * *(b + 484 * OS1_S1 + 13) +
                5 * one_over_two_q * *(b + 315 * OS1_S1 + 13) +
                one_over_two_q * *(b + 393 * OS1_S1 + 7);
            *(b + 393 * OS1_S1 + 24) =
                prefactor_z * *(b + 393 * OS1_S1 + 11) -
                p_over_q * *(b + 493 * OS1_S1 + 11) +
                one_over_two_q * *(b + 307 * OS1_S1 + 11);
            *(b + 393 * OS1_S1 + 25) =
                prefactor_z * *(b + 393 * OS1_S1 + 12) -
                p_over_q * *(b + 493 * OS1_S1 + 12) +
                one_over_two_q * *(b + 307 * OS1_S1 + 12) +
                one_over_two_q * *(b + 393 * OS1_S1 + 4);
            *(b + 393 * OS1_S1 + 26) =
                prefactor_x * *(b + 393 * OS1_S1 + 16) -
                p_over_q * *(b + 484 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 315 * OS1_S1 + 16);
            *(b + 393 * OS1_S1 + 27) =
                prefactor_z * *(b + 393 * OS1_S1 + 13) -
                p_over_q * *(b + 493 * OS1_S1 + 13) +
                one_over_two_q * *(b + 307 * OS1_S1 + 13);
            *(b + 393 * OS1_S1 + 28) =
                prefactor_x * *(b + 393 * OS1_S1 + 18) -
                p_over_q * *(b + 484 * OS1_S1 + 18) +
                5 * one_over_two_q * *(b + 315 * OS1_S1 + 18);
            *(b + 393 * OS1_S1 + 29) =
                prefactor_x * *(b + 393 * OS1_S1 + 19) -
                p_over_q * *(b + 484 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 315 * OS1_S1 + 19);
            *(b + 393 * OS1_S1 + 30) =
                prefactor_y * *(b + 393 * OS1_S1 + 16) -
                p_over_q * *(b + 492 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 308 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 393 * OS1_S1 + 7);
            *(b + 393 * OS1_S1 + 31) =
                prefactor_z * *(b + 393 * OS1_S1 + 16) -
                p_over_q * *(b + 493 * OS1_S1 + 16) +
                one_over_two_q * *(b + 307 * OS1_S1 + 16);
            *(b + 393 * OS1_S1 + 32) =
                prefactor_z * *(b + 393 * OS1_S1 + 17) -
                p_over_q * *(b + 493 * OS1_S1 + 17) +
                one_over_two_q * *(b + 307 * OS1_S1 + 17) +
                one_over_two_q * *(b + 393 * OS1_S1 + 7);
            *(b + 393 * OS1_S1 + 33) =
                prefactor_y * *(b + 393 * OS1_S1 + 19) -
                p_over_q * *(b + 492 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 308 * OS1_S1 + 19);
            *(b + 393 * OS1_S1 + 34) =
                prefactor_z * *(b + 393 * OS1_S1 + 19) -
                p_over_q * *(b + 493 * OS1_S1 + 19) +
                one_over_two_q * *(b + 307 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 393 * OS1_S1 + 9);
            *(b + 394 * OS1_S1 + 20) =
                prefactor_x * *(b + 394 * OS1_S1 + 10) -
                p_over_q * *(b + 485 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 316 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 394 * OS1_S1 + 4);
            *(b + 394 * OS1_S1 + 21) =
                prefactor_y * *(b + 394 * OS1_S1 + 10) -
                p_over_q * *(b + 493 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 309 * OS1_S1 + 10);
            *(b + 394 * OS1_S1 + 22) =
                prefactor_z * *(b + 394 * OS1_S1 + 10) -
                p_over_q * *(b + 494 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 10);
            *(b + 394 * OS1_S1 + 23) =
                prefactor_y * *(b + 394 * OS1_S1 + 11) -
                p_over_q * *(b + 493 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 309 * OS1_S1 + 11) +
                one_over_two_q * *(b + 394 * OS1_S1 + 4);
            *(b + 394 * OS1_S1 + 24) =
                prefactor_z * *(b + 394 * OS1_S1 + 11) -
                p_over_q * *(b + 494 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 11);
            *(b + 394 * OS1_S1 + 25) =
                prefactor_z * *(b + 394 * OS1_S1 + 12) -
                p_over_q * *(b + 494 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 12) +
                one_over_two_q * *(b + 394 * OS1_S1 + 4);
            *(b + 394 * OS1_S1 + 26) =
                prefactor_x * *(b + 394 * OS1_S1 + 16) -
                p_over_q * *(b + 485 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 316 * OS1_S1 + 16);
            *(b + 394 * OS1_S1 + 27) =
                prefactor_z * *(b + 394 * OS1_S1 + 13) -
                p_over_q * *(b + 494 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 13);
            *(b + 394 * OS1_S1 + 28) =
                prefactor_y * *(b + 394 * OS1_S1 + 15) -
                p_over_q * *(b + 493 * OS1_S1 + 15) +
                5 * one_over_two_q * *(b + 309 * OS1_S1 + 15);
            *(b + 394 * OS1_S1 + 29) =
                prefactor_x * *(b + 394 * OS1_S1 + 19) -
                p_over_q * *(b + 485 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 316 * OS1_S1 + 19);
            *(b + 394 * OS1_S1 + 30) =
                prefactor_y * *(b + 394 * OS1_S1 + 16) -
                p_over_q * *(b + 493 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 309 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 394 * OS1_S1 + 7);
            *(b + 394 * OS1_S1 + 31) =
                prefactor_z * *(b + 394 * OS1_S1 + 16) -
                p_over_q * *(b + 494 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 16);
            *(b + 394 * OS1_S1 + 32) =
                prefactor_z * *(b + 394 * OS1_S1 + 17) -
                p_over_q * *(b + 494 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 17) +
                one_over_two_q * *(b + 394 * OS1_S1 + 7);
            *(b + 394 * OS1_S1 + 33) =
                prefactor_y * *(b + 394 * OS1_S1 + 19) -
                p_over_q * *(b + 493 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 309 * OS1_S1 + 19);
            *(b + 394 * OS1_S1 + 34) =
                prefactor_z * *(b + 394 * OS1_S1 + 19) -
                p_over_q * *(b + 494 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 308 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 394 * OS1_S1 + 9);
            *(b + 395 * OS1_S1 + 20) =
                prefactor_x * *(b + 395 * OS1_S1 + 10) -
                p_over_q * *(b + 486 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 317 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 395 * OS1_S1 + 4);
            *(b + 395 * OS1_S1 + 21) =
                prefactor_y * *(b + 395 * OS1_S1 + 10) -
                p_over_q * *(b + 494 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 10);
            *(b + 395 * OS1_S1 + 22) =
                prefactor_z * *(b + 395 * OS1_S1 + 10) -
                p_over_q * *(b + 495 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 10);
            *(b + 395 * OS1_S1 + 23) =
                prefactor_y * *(b + 395 * OS1_S1 + 11) -
                p_over_q * *(b + 494 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 11) +
                one_over_two_q * *(b + 395 * OS1_S1 + 4);
            *(b + 395 * OS1_S1 + 24) =
                prefactor_z * *(b + 395 * OS1_S1 + 11) -
                p_over_q * *(b + 495 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 11);
            *(b + 395 * OS1_S1 + 25) =
                prefactor_z * *(b + 395 * OS1_S1 + 12) -
                p_over_q * *(b + 495 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 12) +
                one_over_two_q * *(b + 395 * OS1_S1 + 4);
            *(b + 395 * OS1_S1 + 26) =
                prefactor_x * *(b + 395 * OS1_S1 + 16) -
                p_over_q * *(b + 486 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 317 * OS1_S1 + 16);
            *(b + 395 * OS1_S1 + 27) =
                prefactor_z * *(b + 395 * OS1_S1 + 13) -
                p_over_q * *(b + 495 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 13);
            *(b + 395 * OS1_S1 + 28) =
                prefactor_y * *(b + 395 * OS1_S1 + 15) -
                p_over_q * *(b + 494 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 15);
            *(b + 395 * OS1_S1 + 29) =
                prefactor_x * *(b + 395 * OS1_S1 + 19) -
                p_over_q * *(b + 486 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 317 * OS1_S1 + 19);
            *(b + 395 * OS1_S1 + 30) =
                prefactor_y * *(b + 395 * OS1_S1 + 16) -
                p_over_q * *(b + 494 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 395 * OS1_S1 + 7);
            *(b + 395 * OS1_S1 + 31) =
                prefactor_z * *(b + 395 * OS1_S1 + 16) -
                p_over_q * *(b + 495 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 16);
            *(b + 395 * OS1_S1 + 32) =
                prefactor_z * *(b + 395 * OS1_S1 + 17) -
                p_over_q * *(b + 495 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 17) +
                one_over_two_q * *(b + 395 * OS1_S1 + 7);
            *(b + 395 * OS1_S1 + 33) =
                prefactor_y * *(b + 395 * OS1_S1 + 19) -
                p_over_q * *(b + 494 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 19);
            *(b + 395 * OS1_S1 + 34) =
                prefactor_z * *(b + 395 * OS1_S1 + 19) -
                p_over_q * *(b + 495 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 309 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 395 * OS1_S1 + 9);
            *(b + 396 * OS1_S1 + 20) =
                prefactor_x * *(b + 396 * OS1_S1 + 10) -
                p_over_q * *(b + 487 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 318 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 396 * OS1_S1 + 4);
            *(b + 396 * OS1_S1 + 21) =
                prefactor_y * *(b + 396 * OS1_S1 + 10) -
                p_over_q * *(b + 495 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 10);
            *(b + 396 * OS1_S1 + 22) =
                prefactor_z * *(b + 396 * OS1_S1 + 10) -
                p_over_q * *(b + 496 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 10);
            *(b + 396 * OS1_S1 + 23) =
                prefactor_y * *(b + 396 * OS1_S1 + 11) -
                p_over_q * *(b + 495 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 11) +
                one_over_two_q * *(b + 396 * OS1_S1 + 4);
            *(b + 396 * OS1_S1 + 24) =
                prefactor_y * *(b + 396 * OS1_S1 + 12) -
                p_over_q * *(b + 495 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 12);
            *(b + 396 * OS1_S1 + 25) =
                prefactor_z * *(b + 396 * OS1_S1 + 12) -
                p_over_q * *(b + 496 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 12) +
                one_over_two_q * *(b + 396 * OS1_S1 + 4);
            *(b + 396 * OS1_S1 + 26) =
                prefactor_x * *(b + 396 * OS1_S1 + 16) -
                p_over_q * *(b + 487 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 318 * OS1_S1 + 16);
            *(b + 396 * OS1_S1 + 27) =
                prefactor_z * *(b + 396 * OS1_S1 + 13) -
                p_over_q * *(b + 496 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 13);
            *(b + 396 * OS1_S1 + 28) =
                prefactor_y * *(b + 396 * OS1_S1 + 15) -
                p_over_q * *(b + 495 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 15);
            *(b + 396 * OS1_S1 + 29) =
                prefactor_x * *(b + 396 * OS1_S1 + 19) -
                p_over_q * *(b + 487 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 318 * OS1_S1 + 19);
            *(b + 396 * OS1_S1 + 30) =
                prefactor_y * *(b + 396 * OS1_S1 + 16) -
                p_over_q * *(b + 495 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 396 * OS1_S1 + 7);
            *(b + 396 * OS1_S1 + 31) =
                prefactor_z * *(b + 396 * OS1_S1 + 16) -
                p_over_q * *(b + 496 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 16);
            *(b + 396 * OS1_S1 + 32) =
                prefactor_y * *(b + 396 * OS1_S1 + 18) -
                p_over_q * *(b + 495 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 18) +
                one_over_two_q * *(b + 396 * OS1_S1 + 9);
            *(b + 396 * OS1_S1 + 33) =
                prefactor_y * *(b + 396 * OS1_S1 + 19) -
                p_over_q * *(b + 495 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 311 * OS1_S1 + 19);
            *(b + 396 * OS1_S1 + 34) =
                prefactor_z * *(b + 396 * OS1_S1 + 19) -
                p_over_q * *(b + 496 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 310 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 396 * OS1_S1 + 9);
            *(b + 397 * OS1_S1 + 20) =
                prefactor_x * *(b + 397 * OS1_S1 + 10) -
                p_over_q * *(b + 488 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 319 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 397 * OS1_S1 + 4);
            *(b + 397 * OS1_S1 + 21) =
                prefactor_y * *(b + 397 * OS1_S1 + 10) -
                p_over_q * *(b + 496 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 10);
            *(b + 397 * OS1_S1 + 22) =
                prefactor_z * *(b + 397 * OS1_S1 + 10) -
                p_over_q * *(b + 497 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 311 * OS1_S1 + 10);
            *(b + 397 * OS1_S1 + 23) =
                prefactor_y * *(b + 397 * OS1_S1 + 11) -
                p_over_q * *(b + 496 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 11) +
                one_over_two_q * *(b + 397 * OS1_S1 + 4);
            *(b + 397 * OS1_S1 + 24) =
                prefactor_y * *(b + 397 * OS1_S1 + 12) -
                p_over_q * *(b + 496 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 12);
            *(b + 397 * OS1_S1 + 25) =
                prefactor_z * *(b + 397 * OS1_S1 + 12) -
                p_over_q * *(b + 497 * OS1_S1 + 12) +
                5 * one_over_two_q * *(b + 311 * OS1_S1 + 12) +
                one_over_two_q * *(b + 397 * OS1_S1 + 4);
            *(b + 397 * OS1_S1 + 26) =
                prefactor_x * *(b + 397 * OS1_S1 + 16) -
                p_over_q * *(b + 488 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 319 * OS1_S1 + 16);
            *(b + 397 * OS1_S1 + 27) =
                prefactor_z * *(b + 397 * OS1_S1 + 13) -
                p_over_q * *(b + 497 * OS1_S1 + 13) +
                5 * one_over_two_q * *(b + 311 * OS1_S1 + 13);
            *(b + 397 * OS1_S1 + 28) =
                prefactor_y * *(b + 397 * OS1_S1 + 15) -
                p_over_q * *(b + 496 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 15);
            *(b + 397 * OS1_S1 + 29) =
                prefactor_x * *(b + 397 * OS1_S1 + 19) -
                p_over_q * *(b + 488 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 319 * OS1_S1 + 19);
            *(b + 397 * OS1_S1 + 30) =
                prefactor_y * *(b + 397 * OS1_S1 + 16) -
                p_over_q * *(b + 496 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 397 * OS1_S1 + 7);
            *(b + 397 * OS1_S1 + 31) =
                prefactor_z * *(b + 397 * OS1_S1 + 16) -
                p_over_q * *(b + 497 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 311 * OS1_S1 + 16);
            *(b + 397 * OS1_S1 + 32) =
                prefactor_y * *(b + 397 * OS1_S1 + 18) -
                p_over_q * *(b + 496 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 18) +
                one_over_two_q * *(b + 397 * OS1_S1 + 9);
            *(b + 397 * OS1_S1 + 33) =
                prefactor_y * *(b + 397 * OS1_S1 + 19) -
                p_over_q * *(b + 496 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 312 * OS1_S1 + 19);
            *(b + 397 * OS1_S1 + 34) =
                prefactor_z * *(b + 397 * OS1_S1 + 19) -
                p_over_q * *(b + 497 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 311 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 397 * OS1_S1 + 9);
            *(b + 398 * OS1_S1 + 20) =
                prefactor_x * *(b + 398 * OS1_S1 + 10) -
                p_over_q * *(b + 489 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 320 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 398 * OS1_S1 + 4);
            *(b + 398 * OS1_S1 + 21) =
                prefactor_y * *(b + 398 * OS1_S1 + 10) -
                p_over_q * *(b + 497 * OS1_S1 + 10) +
                one_over_two_q * *(b + 313 * OS1_S1 + 10);
            *(b + 398 * OS1_S1 + 22) =
                prefactor_z * *(b + 398 * OS1_S1 + 10) -
                p_over_q * *(b + 498 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 312 * OS1_S1 + 10);
            *(b + 398 * OS1_S1 + 23) =
                prefactor_y * *(b + 398 * OS1_S1 + 11) -
                p_over_q * *(b + 497 * OS1_S1 + 11) +
                one_over_two_q * *(b + 313 * OS1_S1 + 11) +
                one_over_two_q * *(b + 398 * OS1_S1 + 4);
            *(b + 398 * OS1_S1 + 24) =
                prefactor_y * *(b + 398 * OS1_S1 + 12) -
                p_over_q * *(b + 497 * OS1_S1 + 12) +
                one_over_two_q * *(b + 313 * OS1_S1 + 12);
            *(b + 398 * OS1_S1 + 25) =
                prefactor_x * *(b + 398 * OS1_S1 + 15) -
                p_over_q * *(b + 489 * OS1_S1 + 15) +
                5 * one_over_two_q * *(b + 320 * OS1_S1 + 15) +
                one_over_two_q * *(b + 398 * OS1_S1 + 9);
            *(b + 398 * OS1_S1 + 26) =
                prefactor_x * *(b + 398 * OS1_S1 + 16) -
                p_over_q * *(b + 489 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 320 * OS1_S1 + 16);
            *(b + 398 * OS1_S1 + 27) =
                prefactor_x * *(b + 398 * OS1_S1 + 17) -
                p_over_q * *(b + 489 * OS1_S1 + 17) +
                5 * one_over_two_q * *(b + 320 * OS1_S1 + 17);
            *(b + 398 * OS1_S1 + 28) =
                prefactor_y * *(b + 398 * OS1_S1 + 15) -
                p_over_q * *(b + 497 * OS1_S1 + 15) +
                one_over_two_q * *(b + 313 * OS1_S1 + 15);
            *(b + 398 * OS1_S1 + 29) =
                prefactor_x * *(b + 398 * OS1_S1 + 19) -
                p_over_q * *(b + 489 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 320 * OS1_S1 + 19);
            *(b + 398 * OS1_S1 + 30) =
                prefactor_y * *(b + 398 * OS1_S1 + 16) -
                p_over_q * *(b + 497 * OS1_S1 + 16) +
                one_over_two_q * *(b + 313 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 398 * OS1_S1 + 7);
            *(b + 398 * OS1_S1 + 31) =
                prefactor_z * *(b + 398 * OS1_S1 + 16) -
                p_over_q * *(b + 498 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 312 * OS1_S1 + 16);
            *(b + 398 * OS1_S1 + 32) =
                prefactor_y * *(b + 398 * OS1_S1 + 18) -
                p_over_q * *(b + 497 * OS1_S1 + 18) +
                one_over_two_q * *(b + 313 * OS1_S1 + 18) +
                one_over_two_q * *(b + 398 * OS1_S1 + 9);
            *(b + 398 * OS1_S1 + 33) =
                prefactor_y * *(b + 398 * OS1_S1 + 19) -
                p_over_q * *(b + 497 * OS1_S1 + 19) +
                one_over_two_q * *(b + 313 * OS1_S1 + 19);
            *(b + 398 * OS1_S1 + 34) =
                prefactor_z * *(b + 398 * OS1_S1 + 19) -
                p_over_q * *(b + 498 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 312 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 398 * OS1_S1 + 9);
            *(b + 399 * OS1_S1 + 20) =
                prefactor_x * *(b + 399 * OS1_S1 + 10) -
                p_over_q * *(b + 490 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 321 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 399 * OS1_S1 + 4);
            *(b + 399 * OS1_S1 + 21) = prefactor_y * *(b + 399 * OS1_S1 + 10) -
                                       p_over_q * *(b + 498 * OS1_S1 + 10);
            *(b + 399 * OS1_S1 + 22) =
                prefactor_z * *(b + 399 * OS1_S1 + 10) -
                p_over_q * *(b + 499 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 313 * OS1_S1 + 10);
            *(b + 399 * OS1_S1 + 23) = prefactor_y * *(b + 399 * OS1_S1 + 11) -
                                       p_over_q * *(b + 498 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 399 * OS1_S1 + 4);
            *(b + 399 * OS1_S1 + 24) = prefactor_y * *(b + 399 * OS1_S1 + 12) -
                                       p_over_q * *(b + 498 * OS1_S1 + 12);
            *(b + 399 * OS1_S1 + 25) =
                prefactor_x * *(b + 399 * OS1_S1 + 15) -
                p_over_q * *(b + 490 * OS1_S1 + 15) +
                5 * one_over_two_q * *(b + 321 * OS1_S1 + 15) +
                one_over_two_q * *(b + 399 * OS1_S1 + 9);
            *(b + 399 * OS1_S1 + 26) =
                prefactor_x * *(b + 399 * OS1_S1 + 16) -
                p_over_q * *(b + 490 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 321 * OS1_S1 + 16);
            *(b + 399 * OS1_S1 + 27) =
                prefactor_x * *(b + 399 * OS1_S1 + 17) -
                p_over_q * *(b + 490 * OS1_S1 + 17) +
                5 * one_over_two_q * *(b + 321 * OS1_S1 + 17);
            *(b + 399 * OS1_S1 + 28) = prefactor_y * *(b + 399 * OS1_S1 + 15) -
                                       p_over_q * *(b + 498 * OS1_S1 + 15);
            *(b + 399 * OS1_S1 + 29) =
                prefactor_x * *(b + 399 * OS1_S1 + 19) -
                p_over_q * *(b + 490 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 321 * OS1_S1 + 19);
            *(b + 399 * OS1_S1 + 30) =
                prefactor_y * *(b + 399 * OS1_S1 + 16) -
                p_over_q * *(b + 498 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 399 * OS1_S1 + 7);
            *(b + 399 * OS1_S1 + 31) =
                prefactor_z * *(b + 399 * OS1_S1 + 16) -
                p_over_q * *(b + 499 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 313 * OS1_S1 + 16);
            *(b + 399 * OS1_S1 + 32) = prefactor_y * *(b + 399 * OS1_S1 + 18) -
                                       p_over_q * *(b + 498 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 399 * OS1_S1 + 9);
            *(b + 399 * OS1_S1 + 33) = prefactor_y * *(b + 399 * OS1_S1 + 19) -
                                       p_over_q * *(b + 498 * OS1_S1 + 19);
            *(b + 399 * OS1_S1 + 34) =
                prefactor_z * *(b + 399 * OS1_S1 + 19) -
                p_over_q * *(b + 499 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 313 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 399 * OS1_S1 + 9);
            *(b + 400 * OS1_S1 + 20) =
                prefactor_x * *(b + 400 * OS1_S1 + 10) -
                p_over_q * *(b + 491 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 400 * OS1_S1 + 4);
            *(b + 400 * OS1_S1 + 21) =
                prefactor_y * *(b + 400 * OS1_S1 + 10) -
                p_over_q * *(b + 500 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 314 * OS1_S1 + 10);
            *(b + 400 * OS1_S1 + 22) = prefactor_z * *(b + 400 * OS1_S1 + 10) -
                                       p_over_q * *(b + 501 * OS1_S1 + 10);
            *(b + 400 * OS1_S1 + 23) =
                prefactor_x * *(b + 400 * OS1_S1 + 13) -
                p_over_q * *(b + 491 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 13) +
                one_over_two_q * *(b + 400 * OS1_S1 + 7);
            *(b + 400 * OS1_S1 + 24) = prefactor_z * *(b + 400 * OS1_S1 + 11) -
                                       p_over_q * *(b + 501 * OS1_S1 + 11);
            *(b + 400 * OS1_S1 + 25) = prefactor_z * *(b + 400 * OS1_S1 + 12) -
                                       p_over_q * *(b + 501 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 400 * OS1_S1 + 4);
            *(b + 400 * OS1_S1 + 26) =
                prefactor_x * *(b + 400 * OS1_S1 + 16) -
                p_over_q * *(b + 491 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 16);
            *(b + 400 * OS1_S1 + 27) = prefactor_z * *(b + 400 * OS1_S1 + 13) -
                                       p_over_q * *(b + 501 * OS1_S1 + 13);
            *(b + 400 * OS1_S1 + 28) =
                prefactor_x * *(b + 400 * OS1_S1 + 18) -
                p_over_q * *(b + 491 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 18);
            *(b + 400 * OS1_S1 + 29) =
                prefactor_x * *(b + 400 * OS1_S1 + 19) -
                p_over_q * *(b + 491 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 322 * OS1_S1 + 19);
            *(b + 400 * OS1_S1 + 30) =
                prefactor_y * *(b + 400 * OS1_S1 + 16) -
                p_over_q * *(b + 500 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 314 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 400 * OS1_S1 + 7);
            *(b + 400 * OS1_S1 + 31) = prefactor_z * *(b + 400 * OS1_S1 + 16) -
                                       p_over_q * *(b + 501 * OS1_S1 + 16);
            *(b + 400 * OS1_S1 + 32) = prefactor_z * *(b + 400 * OS1_S1 + 17) -
                                       p_over_q * *(b + 501 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 400 * OS1_S1 + 7);
            *(b + 400 * OS1_S1 + 33) =
                prefactor_y * *(b + 400 * OS1_S1 + 19) -
                p_over_q * *(b + 500 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 314 * OS1_S1 + 19);
            *(b + 400 * OS1_S1 + 34) =
                prefactor_z * *(b + 400 * OS1_S1 + 19) -
                p_over_q * *(b + 501 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 400 * OS1_S1 + 9);
            *(b + 401 * OS1_S1 + 20) =
                prefactor_x * *(b + 401 * OS1_S1 + 10) -
                p_over_q * *(b + 492 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 401 * OS1_S1 + 4);
            *(b + 401 * OS1_S1 + 21) =
                prefactor_y * *(b + 401 * OS1_S1 + 10) -
                p_over_q * *(b + 501 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 315 * OS1_S1 + 10);
            *(b + 401 * OS1_S1 + 22) =
                prefactor_z * *(b + 401 * OS1_S1 + 10) -
                p_over_q * *(b + 502 * OS1_S1 + 10) +
                one_over_two_q * *(b + 314 * OS1_S1 + 10);
            *(b + 401 * OS1_S1 + 23) =
                prefactor_x * *(b + 401 * OS1_S1 + 13) -
                p_over_q * *(b + 492 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 13) +
                one_over_two_q * *(b + 401 * OS1_S1 + 7);
            *(b + 401 * OS1_S1 + 24) =
                prefactor_z * *(b + 401 * OS1_S1 + 11) -
                p_over_q * *(b + 502 * OS1_S1 + 11) +
                one_over_two_q * *(b + 314 * OS1_S1 + 11);
            *(b + 401 * OS1_S1 + 25) =
                prefactor_z * *(b + 401 * OS1_S1 + 12) -
                p_over_q * *(b + 502 * OS1_S1 + 12) +
                one_over_two_q * *(b + 314 * OS1_S1 + 12) +
                one_over_two_q * *(b + 401 * OS1_S1 + 4);
            *(b + 401 * OS1_S1 + 26) =
                prefactor_x * *(b + 401 * OS1_S1 + 16) -
                p_over_q * *(b + 492 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 16);
            *(b + 401 * OS1_S1 + 27) =
                prefactor_z * *(b + 401 * OS1_S1 + 13) -
                p_over_q * *(b + 502 * OS1_S1 + 13) +
                one_over_two_q * *(b + 314 * OS1_S1 + 13);
            *(b + 401 * OS1_S1 + 28) =
                prefactor_x * *(b + 401 * OS1_S1 + 18) -
                p_over_q * *(b + 492 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 18);
            *(b + 401 * OS1_S1 + 29) =
                prefactor_x * *(b + 401 * OS1_S1 + 19) -
                p_over_q * *(b + 492 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 323 * OS1_S1 + 19);
            *(b + 401 * OS1_S1 + 30) =
                prefactor_y * *(b + 401 * OS1_S1 + 16) -
                p_over_q * *(b + 501 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 315 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 401 * OS1_S1 + 7);
            *(b + 401 * OS1_S1 + 31) =
                prefactor_z * *(b + 401 * OS1_S1 + 16) -
                p_over_q * *(b + 502 * OS1_S1 + 16) +
                one_over_two_q * *(b + 314 * OS1_S1 + 16);
            *(b + 401 * OS1_S1 + 32) =
                prefactor_z * *(b + 401 * OS1_S1 + 17) -
                p_over_q * *(b + 502 * OS1_S1 + 17) +
                one_over_two_q * *(b + 314 * OS1_S1 + 17) +
                one_over_two_q * *(b + 401 * OS1_S1 + 7);
            *(b + 401 * OS1_S1 + 33) =
                prefactor_y * *(b + 401 * OS1_S1 + 19) -
                p_over_q * *(b + 501 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 315 * OS1_S1 + 19);
            *(b + 401 * OS1_S1 + 34) =
                prefactor_z * *(b + 401 * OS1_S1 + 19) -
                p_over_q * *(b + 502 * OS1_S1 + 19) +
                one_over_two_q * *(b + 314 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 401 * OS1_S1 + 9);
            *(b + 402 * OS1_S1 + 20) =
                prefactor_x * *(b + 402 * OS1_S1 + 10) -
                p_over_q * *(b + 493 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 402 * OS1_S1 + 4);
            *(b + 402 * OS1_S1 + 21) =
                prefactor_y * *(b + 402 * OS1_S1 + 10) -
                p_over_q * *(b + 502 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 316 * OS1_S1 + 10);
            *(b + 402 * OS1_S1 + 22) =
                prefactor_z * *(b + 402 * OS1_S1 + 10) -
                p_over_q * *(b + 503 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 10);
            *(b + 402 * OS1_S1 + 23) =
                prefactor_x * *(b + 402 * OS1_S1 + 13) -
                p_over_q * *(b + 493 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 13) +
                one_over_two_q * *(b + 402 * OS1_S1 + 7);
            *(b + 402 * OS1_S1 + 24) =
                prefactor_z * *(b + 402 * OS1_S1 + 11) -
                p_over_q * *(b + 503 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 11);
            *(b + 402 * OS1_S1 + 25) =
                prefactor_z * *(b + 402 * OS1_S1 + 12) -
                p_over_q * *(b + 503 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 12) +
                one_over_two_q * *(b + 402 * OS1_S1 + 4);
            *(b + 402 * OS1_S1 + 26) =
                prefactor_x * *(b + 402 * OS1_S1 + 16) -
                p_over_q * *(b + 493 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 16);
            *(b + 402 * OS1_S1 + 27) =
                prefactor_z * *(b + 402 * OS1_S1 + 13) -
                p_over_q * *(b + 503 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 13);
            *(b + 402 * OS1_S1 + 28) =
                prefactor_x * *(b + 402 * OS1_S1 + 18) -
                p_over_q * *(b + 493 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 18);
            *(b + 402 * OS1_S1 + 29) =
                prefactor_x * *(b + 402 * OS1_S1 + 19) -
                p_over_q * *(b + 493 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 324 * OS1_S1 + 19);
            *(b + 402 * OS1_S1 + 30) =
                prefactor_y * *(b + 402 * OS1_S1 + 16) -
                p_over_q * *(b + 502 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 316 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 402 * OS1_S1 + 7);
            *(b + 402 * OS1_S1 + 31) =
                prefactor_z * *(b + 402 * OS1_S1 + 16) -
                p_over_q * *(b + 503 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 16);
            *(b + 402 * OS1_S1 + 32) =
                prefactor_z * *(b + 402 * OS1_S1 + 17) -
                p_over_q * *(b + 503 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 17) +
                one_over_two_q * *(b + 402 * OS1_S1 + 7);
            *(b + 402 * OS1_S1 + 33) =
                prefactor_y * *(b + 402 * OS1_S1 + 19) -
                p_over_q * *(b + 502 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 316 * OS1_S1 + 19);
            *(b + 402 * OS1_S1 + 34) =
                prefactor_z * *(b + 402 * OS1_S1 + 19) -
                p_over_q * *(b + 503 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 315 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 402 * OS1_S1 + 9);
            *(b + 403 * OS1_S1 + 20) =
                prefactor_x * *(b + 403 * OS1_S1 + 10) -
                p_over_q * *(b + 494 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 403 * OS1_S1 + 4);
            *(b + 403 * OS1_S1 + 21) =
                prefactor_y * *(b + 403 * OS1_S1 + 10) -
                p_over_q * *(b + 503 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 317 * OS1_S1 + 10);
            *(b + 403 * OS1_S1 + 22) =
                prefactor_z * *(b + 403 * OS1_S1 + 10) -
                p_over_q * *(b + 504 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 10);
            *(b + 403 * OS1_S1 + 23) =
                prefactor_x * *(b + 403 * OS1_S1 + 13) -
                p_over_q * *(b + 494 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 13) +
                one_over_two_q * *(b + 403 * OS1_S1 + 7);
            *(b + 403 * OS1_S1 + 24) =
                prefactor_z * *(b + 403 * OS1_S1 + 11) -
                p_over_q * *(b + 504 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 11);
            *(b + 403 * OS1_S1 + 25) =
                prefactor_z * *(b + 403 * OS1_S1 + 12) -
                p_over_q * *(b + 504 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 12) +
                one_over_two_q * *(b + 403 * OS1_S1 + 4);
            *(b + 403 * OS1_S1 + 26) =
                prefactor_x * *(b + 403 * OS1_S1 + 16) -
                p_over_q * *(b + 494 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 16);
            *(b + 403 * OS1_S1 + 27) =
                prefactor_z * *(b + 403 * OS1_S1 + 13) -
                p_over_q * *(b + 504 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 13);
            *(b + 403 * OS1_S1 + 28) =
                prefactor_x * *(b + 403 * OS1_S1 + 18) -
                p_over_q * *(b + 494 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 18);
            *(b + 403 * OS1_S1 + 29) =
                prefactor_x * *(b + 403 * OS1_S1 + 19) -
                p_over_q * *(b + 494 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 19);
            *(b + 403 * OS1_S1 + 30) =
                prefactor_y * *(b + 403 * OS1_S1 + 16) -
                p_over_q * *(b + 503 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 317 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 403 * OS1_S1 + 7);
            *(b + 403 * OS1_S1 + 31) =
                prefactor_z * *(b + 403 * OS1_S1 + 16) -
                p_over_q * *(b + 504 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 16);
            *(b + 403 * OS1_S1 + 32) =
                prefactor_z * *(b + 403 * OS1_S1 + 17) -
                p_over_q * *(b + 504 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 17) +
                one_over_two_q * *(b + 403 * OS1_S1 + 7);
            *(b + 403 * OS1_S1 + 33) =
                prefactor_y * *(b + 403 * OS1_S1 + 19) -
                p_over_q * *(b + 503 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 317 * OS1_S1 + 19);
            *(b + 403 * OS1_S1 + 34) =
                prefactor_z * *(b + 403 * OS1_S1 + 19) -
                p_over_q * *(b + 504 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 316 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 403 * OS1_S1 + 9);
            *(b + 404 * OS1_S1 + 20) =
                prefactor_x * *(b + 404 * OS1_S1 + 10) -
                p_over_q * *(b + 495 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 326 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 404 * OS1_S1 + 4);
            *(b + 404 * OS1_S1 + 21) =
                prefactor_y * *(b + 404 * OS1_S1 + 10) -
                p_over_q * *(b + 504 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 10);
            *(b + 404 * OS1_S1 + 22) =
                prefactor_z * *(b + 404 * OS1_S1 + 10) -
                p_over_q * *(b + 505 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 10);
            *(b + 404 * OS1_S1 + 23) =
                prefactor_y * *(b + 404 * OS1_S1 + 11) -
                p_over_q * *(b + 504 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 11) +
                one_over_two_q * *(b + 404 * OS1_S1 + 4);
            *(b + 404 * OS1_S1 + 24) =
                prefactor_z * *(b + 404 * OS1_S1 + 11) -
                p_over_q * *(b + 505 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 11);
            *(b + 404 * OS1_S1 + 25) =
                prefactor_z * *(b + 404 * OS1_S1 + 12) -
                p_over_q * *(b + 505 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 12) +
                one_over_two_q * *(b + 404 * OS1_S1 + 4);
            *(b + 404 * OS1_S1 + 26) =
                prefactor_x * *(b + 404 * OS1_S1 + 16) -
                p_over_q * *(b + 495 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 326 * OS1_S1 + 16);
            *(b + 404 * OS1_S1 + 27) =
                prefactor_z * *(b + 404 * OS1_S1 + 13) -
                p_over_q * *(b + 505 * OS1_S1 + 13) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 13);
            *(b + 404 * OS1_S1 + 28) =
                prefactor_y * *(b + 404 * OS1_S1 + 15) -
                p_over_q * *(b + 504 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 15);
            *(b + 404 * OS1_S1 + 29) =
                prefactor_x * *(b + 404 * OS1_S1 + 19) -
                p_over_q * *(b + 495 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 326 * OS1_S1 + 19);
            *(b + 404 * OS1_S1 + 30) =
                prefactor_y * *(b + 404 * OS1_S1 + 16) -
                p_over_q * *(b + 504 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 404 * OS1_S1 + 7);
            *(b + 404 * OS1_S1 + 31) =
                prefactor_z * *(b + 404 * OS1_S1 + 16) -
                p_over_q * *(b + 505 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 16);
            *(b + 404 * OS1_S1 + 32) =
                prefactor_z * *(b + 404 * OS1_S1 + 17) -
                p_over_q * *(b + 505 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 17) +
                one_over_two_q * *(b + 404 * OS1_S1 + 7);
            *(b + 404 * OS1_S1 + 33) =
                prefactor_y * *(b + 404 * OS1_S1 + 19) -
                p_over_q * *(b + 504 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 318 * OS1_S1 + 19);
            *(b + 404 * OS1_S1 + 34) =
                prefactor_z * *(b + 404 * OS1_S1 + 19) -
                p_over_q * *(b + 505 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 317 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 404 * OS1_S1 + 9);
            *(b + 405 * OS1_S1 + 20) =
                prefactor_x * *(b + 405 * OS1_S1 + 10) -
                p_over_q * *(b + 496 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 405 * OS1_S1 + 4);
            *(b + 405 * OS1_S1 + 21) =
                prefactor_y * *(b + 405 * OS1_S1 + 10) -
                p_over_q * *(b + 505 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 10);
            *(b + 405 * OS1_S1 + 22) =
                prefactor_z * *(b + 405 * OS1_S1 + 10) -
                p_over_q * *(b + 506 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 318 * OS1_S1 + 10);
            *(b + 405 * OS1_S1 + 23) =
                prefactor_y * *(b + 405 * OS1_S1 + 11) -
                p_over_q * *(b + 505 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 11) +
                one_over_two_q * *(b + 405 * OS1_S1 + 4);
            *(b + 405 * OS1_S1 + 24) =
                prefactor_y * *(b + 405 * OS1_S1 + 12) -
                p_over_q * *(b + 505 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 12);
            *(b + 405 * OS1_S1 + 25) =
                prefactor_x * *(b + 405 * OS1_S1 + 15) -
                p_over_q * *(b + 496 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 15) +
                one_over_two_q * *(b + 405 * OS1_S1 + 9);
            *(b + 405 * OS1_S1 + 26) =
                prefactor_x * *(b + 405 * OS1_S1 + 16) -
                p_over_q * *(b + 496 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 16);
            *(b + 405 * OS1_S1 + 27) =
                prefactor_x * *(b + 405 * OS1_S1 + 17) -
                p_over_q * *(b + 496 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 17);
            *(b + 405 * OS1_S1 + 28) =
                prefactor_y * *(b + 405 * OS1_S1 + 15) -
                p_over_q * *(b + 505 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 15);
            *(b + 405 * OS1_S1 + 29) =
                prefactor_x * *(b + 405 * OS1_S1 + 19) -
                p_over_q * *(b + 496 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 19);
            *(b + 405 * OS1_S1 + 30) =
                prefactor_y * *(b + 405 * OS1_S1 + 16) -
                p_over_q * *(b + 505 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 405 * OS1_S1 + 7);
            *(b + 405 * OS1_S1 + 31) =
                prefactor_z * *(b + 405 * OS1_S1 + 16) -
                p_over_q * *(b + 506 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 318 * OS1_S1 + 16);
            *(b + 405 * OS1_S1 + 32) =
                prefactor_y * *(b + 405 * OS1_S1 + 18) -
                p_over_q * *(b + 505 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 18) +
                one_over_two_q * *(b + 405 * OS1_S1 + 9);
            *(b + 405 * OS1_S1 + 33) =
                prefactor_y * *(b + 405 * OS1_S1 + 19) -
                p_over_q * *(b + 505 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 319 * OS1_S1 + 19);
            *(b + 405 * OS1_S1 + 34) =
                prefactor_z * *(b + 405 * OS1_S1 + 19) -
                p_over_q * *(b + 506 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 318 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 405 * OS1_S1 + 9);
            *(b + 406 * OS1_S1 + 20) =
                prefactor_x * *(b + 406 * OS1_S1 + 10) -
                p_over_q * *(b + 497 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 406 * OS1_S1 + 4);
            *(b + 406 * OS1_S1 + 21) =
                prefactor_y * *(b + 406 * OS1_S1 + 10) -
                p_over_q * *(b + 506 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 10);
            *(b + 406 * OS1_S1 + 22) =
                prefactor_z * *(b + 406 * OS1_S1 + 10) -
                p_over_q * *(b + 507 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 319 * OS1_S1 + 10);
            *(b + 406 * OS1_S1 + 23) =
                prefactor_y * *(b + 406 * OS1_S1 + 11) -
                p_over_q * *(b + 506 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 11) +
                one_over_two_q * *(b + 406 * OS1_S1 + 4);
            *(b + 406 * OS1_S1 + 24) =
                prefactor_y * *(b + 406 * OS1_S1 + 12) -
                p_over_q * *(b + 506 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 12);
            *(b + 406 * OS1_S1 + 25) =
                prefactor_x * *(b + 406 * OS1_S1 + 15) -
                p_over_q * *(b + 497 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 15) +
                one_over_two_q * *(b + 406 * OS1_S1 + 9);
            *(b + 406 * OS1_S1 + 26) =
                prefactor_x * *(b + 406 * OS1_S1 + 16) -
                p_over_q * *(b + 497 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 16);
            *(b + 406 * OS1_S1 + 27) =
                prefactor_x * *(b + 406 * OS1_S1 + 17) -
                p_over_q * *(b + 497 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 17);
            *(b + 406 * OS1_S1 + 28) =
                prefactor_y * *(b + 406 * OS1_S1 + 15) -
                p_over_q * *(b + 506 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 15);
            *(b + 406 * OS1_S1 + 29) =
                prefactor_x * *(b + 406 * OS1_S1 + 19) -
                p_over_q * *(b + 497 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 328 * OS1_S1 + 19);
            *(b + 406 * OS1_S1 + 30) =
                prefactor_y * *(b + 406 * OS1_S1 + 16) -
                p_over_q * *(b + 506 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 406 * OS1_S1 + 7);
            *(b + 406 * OS1_S1 + 31) =
                prefactor_z * *(b + 406 * OS1_S1 + 16) -
                p_over_q * *(b + 507 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 319 * OS1_S1 + 16);
            *(b + 406 * OS1_S1 + 32) =
                prefactor_y * *(b + 406 * OS1_S1 + 18) -
                p_over_q * *(b + 506 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 18) +
                one_over_two_q * *(b + 406 * OS1_S1 + 9);
            *(b + 406 * OS1_S1 + 33) =
                prefactor_y * *(b + 406 * OS1_S1 + 19) -
                p_over_q * *(b + 506 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 320 * OS1_S1 + 19);
            *(b + 406 * OS1_S1 + 34) =
                prefactor_z * *(b + 406 * OS1_S1 + 19) -
                p_over_q * *(b + 507 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 319 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 406 * OS1_S1 + 9);
            *(b + 407 * OS1_S1 + 20) =
                prefactor_x * *(b + 407 * OS1_S1 + 10) -
                p_over_q * *(b + 498 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 407 * OS1_S1 + 4);
            *(b + 407 * OS1_S1 + 21) =
                prefactor_y * *(b + 407 * OS1_S1 + 10) -
                p_over_q * *(b + 507 * OS1_S1 + 10) +
                one_over_two_q * *(b + 321 * OS1_S1 + 10);
            *(b + 407 * OS1_S1 + 22) =
                prefactor_z * *(b + 407 * OS1_S1 + 10) -
                p_over_q * *(b + 508 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 320 * OS1_S1 + 10);
            *(b + 407 * OS1_S1 + 23) =
                prefactor_y * *(b + 407 * OS1_S1 + 11) -
                p_over_q * *(b + 507 * OS1_S1 + 11) +
                one_over_two_q * *(b + 321 * OS1_S1 + 11) +
                one_over_two_q * *(b + 407 * OS1_S1 + 4);
            *(b + 407 * OS1_S1 + 24) =
                prefactor_y * *(b + 407 * OS1_S1 + 12) -
                p_over_q * *(b + 507 * OS1_S1 + 12) +
                one_over_two_q * *(b + 321 * OS1_S1 + 12);
            *(b + 407 * OS1_S1 + 25) =
                prefactor_x * *(b + 407 * OS1_S1 + 15) -
                p_over_q * *(b + 498 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 15) +
                one_over_two_q * *(b + 407 * OS1_S1 + 9);
            *(b + 407 * OS1_S1 + 26) =
                prefactor_x * *(b + 407 * OS1_S1 + 16) -
                p_over_q * *(b + 498 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 16);
            *(b + 407 * OS1_S1 + 27) =
                prefactor_x * *(b + 407 * OS1_S1 + 17) -
                p_over_q * *(b + 498 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 17);
            *(b + 407 * OS1_S1 + 28) =
                prefactor_y * *(b + 407 * OS1_S1 + 15) -
                p_over_q * *(b + 507 * OS1_S1 + 15) +
                one_over_two_q * *(b + 321 * OS1_S1 + 15);
            *(b + 407 * OS1_S1 + 29) =
                prefactor_x * *(b + 407 * OS1_S1 + 19) -
                p_over_q * *(b + 498 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 329 * OS1_S1 + 19);
            *(b + 407 * OS1_S1 + 30) =
                prefactor_y * *(b + 407 * OS1_S1 + 16) -
                p_over_q * *(b + 507 * OS1_S1 + 16) +
                one_over_two_q * *(b + 321 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 407 * OS1_S1 + 7);
            *(b + 407 * OS1_S1 + 31) =
                prefactor_z * *(b + 407 * OS1_S1 + 16) -
                p_over_q * *(b + 508 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 320 * OS1_S1 + 16);
            *(b + 407 * OS1_S1 + 32) =
                prefactor_y * *(b + 407 * OS1_S1 + 18) -
                p_over_q * *(b + 507 * OS1_S1 + 18) +
                one_over_two_q * *(b + 321 * OS1_S1 + 18) +
                one_over_two_q * *(b + 407 * OS1_S1 + 9);
            *(b + 407 * OS1_S1 + 33) =
                prefactor_y * *(b + 407 * OS1_S1 + 19) -
                p_over_q * *(b + 507 * OS1_S1 + 19) +
                one_over_two_q * *(b + 321 * OS1_S1 + 19);
            *(b + 407 * OS1_S1 + 34) =
                prefactor_z * *(b + 407 * OS1_S1 + 19) -
                p_over_q * *(b + 508 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 320 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 407 * OS1_S1 + 9);
            *(b + 408 * OS1_S1 + 20) =
                prefactor_x * *(b + 408 * OS1_S1 + 10) -
                p_over_q * *(b + 499 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 408 * OS1_S1 + 4);
            *(b + 408 * OS1_S1 + 21) = prefactor_y * *(b + 408 * OS1_S1 + 10) -
                                       p_over_q * *(b + 508 * OS1_S1 + 10);
            *(b + 408 * OS1_S1 + 22) =
                prefactor_z * *(b + 408 * OS1_S1 + 10) -
                p_over_q * *(b + 509 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 321 * OS1_S1 + 10);
            *(b + 408 * OS1_S1 + 23) = prefactor_y * *(b + 408 * OS1_S1 + 11) -
                                       p_over_q * *(b + 508 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 408 * OS1_S1 + 4);
            *(b + 408 * OS1_S1 + 24) = prefactor_y * *(b + 408 * OS1_S1 + 12) -
                                       p_over_q * *(b + 508 * OS1_S1 + 12);
            *(b + 408 * OS1_S1 + 25) =
                prefactor_x * *(b + 408 * OS1_S1 + 15) -
                p_over_q * *(b + 499 * OS1_S1 + 15) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 15) +
                one_over_two_q * *(b + 408 * OS1_S1 + 9);
            *(b + 408 * OS1_S1 + 26) =
                prefactor_x * *(b + 408 * OS1_S1 + 16) -
                p_over_q * *(b + 499 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 16);
            *(b + 408 * OS1_S1 + 27) =
                prefactor_x * *(b + 408 * OS1_S1 + 17) -
                p_over_q * *(b + 499 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 17);
            *(b + 408 * OS1_S1 + 28) = prefactor_y * *(b + 408 * OS1_S1 + 15) -
                                       p_over_q * *(b + 508 * OS1_S1 + 15);
            *(b + 408 * OS1_S1 + 29) =
                prefactor_x * *(b + 408 * OS1_S1 + 19) -
                p_over_q * *(b + 499 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 330 * OS1_S1 + 19);
            *(b + 408 * OS1_S1 + 30) =
                prefactor_y * *(b + 408 * OS1_S1 + 16) -
                p_over_q * *(b + 508 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 408 * OS1_S1 + 7);
            *(b + 408 * OS1_S1 + 31) =
                prefactor_z * *(b + 408 * OS1_S1 + 16) -
                p_over_q * *(b + 509 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 321 * OS1_S1 + 16);
            *(b + 408 * OS1_S1 + 32) = prefactor_y * *(b + 408 * OS1_S1 + 18) -
                                       p_over_q * *(b + 508 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 408 * OS1_S1 + 9);
            *(b + 408 * OS1_S1 + 33) = prefactor_y * *(b + 408 * OS1_S1 + 19) -
                                       p_over_q * *(b + 508 * OS1_S1 + 19);
            *(b + 408 * OS1_S1 + 34) =
                prefactor_z * *(b + 408 * OS1_S1 + 19) -
                p_over_q * *(b + 509 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 321 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 408 * OS1_S1 + 9);
            *(b + 409 * OS1_S1 + 20) =
                prefactor_x * *(b + 409 * OS1_S1 + 10) -
                p_over_q * *(b + 500 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 409 * OS1_S1 + 4);
            *(b + 409 * OS1_S1 + 21) =
                prefactor_y * *(b + 409 * OS1_S1 + 10) -
                p_over_q * *(b + 510 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 322 * OS1_S1 + 10);
            *(b + 409 * OS1_S1 + 22) = prefactor_z * *(b + 409 * OS1_S1 + 10) -
                                       p_over_q * *(b + 511 * OS1_S1 + 10);
            *(b + 409 * OS1_S1 + 23) =
                prefactor_x * *(b + 409 * OS1_S1 + 13) -
                p_over_q * *(b + 500 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 13) +
                one_over_two_q * *(b + 409 * OS1_S1 + 7);
            *(b + 409 * OS1_S1 + 24) = prefactor_z * *(b + 409 * OS1_S1 + 11) -
                                       p_over_q * *(b + 511 * OS1_S1 + 11);
            *(b + 409 * OS1_S1 + 25) = prefactor_z * *(b + 409 * OS1_S1 + 12) -
                                       p_over_q * *(b + 511 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 409 * OS1_S1 + 4);
            *(b + 409 * OS1_S1 + 26) =
                prefactor_x * *(b + 409 * OS1_S1 + 16) -
                p_over_q * *(b + 500 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 16);
            *(b + 409 * OS1_S1 + 27) = prefactor_z * *(b + 409 * OS1_S1 + 13) -
                                       p_over_q * *(b + 511 * OS1_S1 + 13);
            *(b + 409 * OS1_S1 + 28) =
                prefactor_x * *(b + 409 * OS1_S1 + 18) -
                p_over_q * *(b + 500 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 18);
            *(b + 409 * OS1_S1 + 29) =
                prefactor_x * *(b + 409 * OS1_S1 + 19) -
                p_over_q * *(b + 500 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 331 * OS1_S1 + 19);
            *(b + 409 * OS1_S1 + 30) =
                prefactor_y * *(b + 409 * OS1_S1 + 16) -
                p_over_q * *(b + 510 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 322 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 409 * OS1_S1 + 7);
            *(b + 409 * OS1_S1 + 31) = prefactor_z * *(b + 409 * OS1_S1 + 16) -
                                       p_over_q * *(b + 511 * OS1_S1 + 16);
            *(b + 409 * OS1_S1 + 32) = prefactor_z * *(b + 409 * OS1_S1 + 17) -
                                       p_over_q * *(b + 511 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 409 * OS1_S1 + 7);
            *(b + 409 * OS1_S1 + 33) =
                prefactor_y * *(b + 409 * OS1_S1 + 19) -
                p_over_q * *(b + 510 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 322 * OS1_S1 + 19);
            *(b + 409 * OS1_S1 + 34) =
                prefactor_z * *(b + 409 * OS1_S1 + 19) -
                p_over_q * *(b + 511 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 409 * OS1_S1 + 9);
            *(b + 410 * OS1_S1 + 20) =
                prefactor_x * *(b + 410 * OS1_S1 + 10) -
                p_over_q * *(b + 501 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 410 * OS1_S1 + 4);
            *(b + 410 * OS1_S1 + 21) =
                prefactor_y * *(b + 410 * OS1_S1 + 10) -
                p_over_q * *(b + 511 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 323 * OS1_S1 + 10);
            *(b + 410 * OS1_S1 + 22) =
                prefactor_z * *(b + 410 * OS1_S1 + 10) -
                p_over_q * *(b + 512 * OS1_S1 + 10) +
                one_over_two_q * *(b + 322 * OS1_S1 + 10);
            *(b + 410 * OS1_S1 + 23) =
                prefactor_x * *(b + 410 * OS1_S1 + 13) -
                p_over_q * *(b + 501 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 13) +
                one_over_two_q * *(b + 410 * OS1_S1 + 7);
            *(b + 410 * OS1_S1 + 24) =
                prefactor_z * *(b + 410 * OS1_S1 + 11) -
                p_over_q * *(b + 512 * OS1_S1 + 11) +
                one_over_two_q * *(b + 322 * OS1_S1 + 11);
            *(b + 410 * OS1_S1 + 25) =
                prefactor_z * *(b + 410 * OS1_S1 + 12) -
                p_over_q * *(b + 512 * OS1_S1 + 12) +
                one_over_two_q * *(b + 322 * OS1_S1 + 12) +
                one_over_two_q * *(b + 410 * OS1_S1 + 4);
            *(b + 410 * OS1_S1 + 26) =
                prefactor_x * *(b + 410 * OS1_S1 + 16) -
                p_over_q * *(b + 501 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 16);
            *(b + 410 * OS1_S1 + 27) =
                prefactor_z * *(b + 410 * OS1_S1 + 13) -
                p_over_q * *(b + 512 * OS1_S1 + 13) +
                one_over_two_q * *(b + 322 * OS1_S1 + 13);
            *(b + 410 * OS1_S1 + 28) =
                prefactor_x * *(b + 410 * OS1_S1 + 18) -
                p_over_q * *(b + 501 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 18);
            *(b + 410 * OS1_S1 + 29) =
                prefactor_x * *(b + 410 * OS1_S1 + 19) -
                p_over_q * *(b + 501 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 332 * OS1_S1 + 19);
            *(b + 410 * OS1_S1 + 30) =
                prefactor_y * *(b + 410 * OS1_S1 + 16) -
                p_over_q * *(b + 511 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 323 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 410 * OS1_S1 + 7);
            *(b + 410 * OS1_S1 + 31) =
                prefactor_z * *(b + 410 * OS1_S1 + 16) -
                p_over_q * *(b + 512 * OS1_S1 + 16) +
                one_over_two_q * *(b + 322 * OS1_S1 + 16);
            *(b + 410 * OS1_S1 + 32) =
                prefactor_z * *(b + 410 * OS1_S1 + 17) -
                p_over_q * *(b + 512 * OS1_S1 + 17) +
                one_over_two_q * *(b + 322 * OS1_S1 + 17) +
                one_over_two_q * *(b + 410 * OS1_S1 + 7);
            *(b + 410 * OS1_S1 + 33) =
                prefactor_y * *(b + 410 * OS1_S1 + 19) -
                p_over_q * *(b + 511 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 323 * OS1_S1 + 19);
            *(b + 410 * OS1_S1 + 34) =
                prefactor_z * *(b + 410 * OS1_S1 + 19) -
                p_over_q * *(b + 512 * OS1_S1 + 19) +
                one_over_two_q * *(b + 322 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 410 * OS1_S1 + 9);
            *(b + 411 * OS1_S1 + 20) =
                prefactor_x * *(b + 411 * OS1_S1 + 10) -
                p_over_q * *(b + 502 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 411 * OS1_S1 + 4);
            *(b + 411 * OS1_S1 + 21) =
                prefactor_y * *(b + 411 * OS1_S1 + 10) -
                p_over_q * *(b + 512 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 324 * OS1_S1 + 10);
            *(b + 411 * OS1_S1 + 22) =
                prefactor_z * *(b + 411 * OS1_S1 + 10) -
                p_over_q * *(b + 513 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 10);
            *(b + 411 * OS1_S1 + 23) =
                prefactor_x * *(b + 411 * OS1_S1 + 13) -
                p_over_q * *(b + 502 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 13) +
                one_over_two_q * *(b + 411 * OS1_S1 + 7);
            *(b + 411 * OS1_S1 + 24) =
                prefactor_z * *(b + 411 * OS1_S1 + 11) -
                p_over_q * *(b + 513 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 11);
            *(b + 411 * OS1_S1 + 25) =
                prefactor_z * *(b + 411 * OS1_S1 + 12) -
                p_over_q * *(b + 513 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 12) +
                one_over_two_q * *(b + 411 * OS1_S1 + 4);
            *(b + 411 * OS1_S1 + 26) =
                prefactor_x * *(b + 411 * OS1_S1 + 16) -
                p_over_q * *(b + 502 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 16);
            *(b + 411 * OS1_S1 + 27) =
                prefactor_z * *(b + 411 * OS1_S1 + 13) -
                p_over_q * *(b + 513 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 13);
            *(b + 411 * OS1_S1 + 28) =
                prefactor_x * *(b + 411 * OS1_S1 + 18) -
                p_over_q * *(b + 502 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 18);
            *(b + 411 * OS1_S1 + 29) =
                prefactor_x * *(b + 411 * OS1_S1 + 19) -
                p_over_q * *(b + 502 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 19);
            *(b + 411 * OS1_S1 + 30) =
                prefactor_y * *(b + 411 * OS1_S1 + 16) -
                p_over_q * *(b + 512 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 324 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 411 * OS1_S1 + 7);
            *(b + 411 * OS1_S1 + 31) =
                prefactor_z * *(b + 411 * OS1_S1 + 16) -
                p_over_q * *(b + 513 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 16);
            *(b + 411 * OS1_S1 + 32) =
                prefactor_z * *(b + 411 * OS1_S1 + 17) -
                p_over_q * *(b + 513 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 17) +
                one_over_two_q * *(b + 411 * OS1_S1 + 7);
            *(b + 411 * OS1_S1 + 33) =
                prefactor_y * *(b + 411 * OS1_S1 + 19) -
                p_over_q * *(b + 512 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 324 * OS1_S1 + 19);
            *(b + 411 * OS1_S1 + 34) =
                prefactor_z * *(b + 411 * OS1_S1 + 19) -
                p_over_q * *(b + 513 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 323 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 411 * OS1_S1 + 9);
            *(b + 412 * OS1_S1 + 20) =
                prefactor_x * *(b + 412 * OS1_S1 + 10) -
                p_over_q * *(b + 503 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 412 * OS1_S1 + 4);
            *(b + 412 * OS1_S1 + 21) =
                prefactor_y * *(b + 412 * OS1_S1 + 10) -
                p_over_q * *(b + 513 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 325 * OS1_S1 + 10);
            *(b + 412 * OS1_S1 + 22) =
                prefactor_z * *(b + 412 * OS1_S1 + 10) -
                p_over_q * *(b + 514 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 10);
            *(b + 412 * OS1_S1 + 23) =
                prefactor_x * *(b + 412 * OS1_S1 + 13) -
                p_over_q * *(b + 503 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 13) +
                one_over_two_q * *(b + 412 * OS1_S1 + 7);
            *(b + 412 * OS1_S1 + 24) =
                prefactor_z * *(b + 412 * OS1_S1 + 11) -
                p_over_q * *(b + 514 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 11);
            *(b + 412 * OS1_S1 + 25) =
                prefactor_z * *(b + 412 * OS1_S1 + 12) -
                p_over_q * *(b + 514 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 12) +
                one_over_two_q * *(b + 412 * OS1_S1 + 4);
            *(b + 412 * OS1_S1 + 26) =
                prefactor_x * *(b + 412 * OS1_S1 + 16) -
                p_over_q * *(b + 503 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 16);
            *(b + 412 * OS1_S1 + 27) =
                prefactor_z * *(b + 412 * OS1_S1 + 13) -
                p_over_q * *(b + 514 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 13);
            *(b + 412 * OS1_S1 + 28) =
                prefactor_x * *(b + 412 * OS1_S1 + 18) -
                p_over_q * *(b + 503 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 18);
            *(b + 412 * OS1_S1 + 29) =
                prefactor_x * *(b + 412 * OS1_S1 + 19) -
                p_over_q * *(b + 503 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 334 * OS1_S1 + 19);
            *(b + 412 * OS1_S1 + 30) =
                prefactor_y * *(b + 412 * OS1_S1 + 16) -
                p_over_q * *(b + 513 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 325 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 412 * OS1_S1 + 7);
            *(b + 412 * OS1_S1 + 31) =
                prefactor_z * *(b + 412 * OS1_S1 + 16) -
                p_over_q * *(b + 514 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 16);
            *(b + 412 * OS1_S1 + 32) =
                prefactor_z * *(b + 412 * OS1_S1 + 17) -
                p_over_q * *(b + 514 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 17) +
                one_over_two_q * *(b + 412 * OS1_S1 + 7);
            *(b + 412 * OS1_S1 + 33) =
                prefactor_y * *(b + 412 * OS1_S1 + 19) -
                p_over_q * *(b + 513 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 325 * OS1_S1 + 19);
            *(b + 412 * OS1_S1 + 34) =
                prefactor_z * *(b + 412 * OS1_S1 + 19) -
                p_over_q * *(b + 514 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 324 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 412 * OS1_S1 + 9);
            *(b + 413 * OS1_S1 + 20) =
                prefactor_x * *(b + 413 * OS1_S1 + 10) -
                p_over_q * *(b + 504 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 413 * OS1_S1 + 4);
            *(b + 413 * OS1_S1 + 21) =
                prefactor_y * *(b + 413 * OS1_S1 + 10) -
                p_over_q * *(b + 514 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 326 * OS1_S1 + 10);
            *(b + 413 * OS1_S1 + 22) =
                prefactor_z * *(b + 413 * OS1_S1 + 10) -
                p_over_q * *(b + 515 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 10);
            *(b + 413 * OS1_S1 + 23) =
                prefactor_x * *(b + 413 * OS1_S1 + 13) -
                p_over_q * *(b + 504 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 13) +
                one_over_two_q * *(b + 413 * OS1_S1 + 7);
            *(b + 413 * OS1_S1 + 24) =
                prefactor_z * *(b + 413 * OS1_S1 + 11) -
                p_over_q * *(b + 515 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 11);
            *(b + 413 * OS1_S1 + 25) =
                prefactor_x * *(b + 413 * OS1_S1 + 15) -
                p_over_q * *(b + 504 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 15) +
                one_over_two_q * *(b + 413 * OS1_S1 + 9);
            *(b + 413 * OS1_S1 + 26) =
                prefactor_x * *(b + 413 * OS1_S1 + 16) -
                p_over_q * *(b + 504 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 16);
            *(b + 413 * OS1_S1 + 27) =
                prefactor_x * *(b + 413 * OS1_S1 + 17) -
                p_over_q * *(b + 504 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 17);
            *(b + 413 * OS1_S1 + 28) =
                prefactor_x * *(b + 413 * OS1_S1 + 18) -
                p_over_q * *(b + 504 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 18);
            *(b + 413 * OS1_S1 + 29) =
                prefactor_x * *(b + 413 * OS1_S1 + 19) -
                p_over_q * *(b + 504 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 335 * OS1_S1 + 19);
            *(b + 413 * OS1_S1 + 30) =
                prefactor_y * *(b + 413 * OS1_S1 + 16) -
                p_over_q * *(b + 514 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 326 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 413 * OS1_S1 + 7);
            *(b + 413 * OS1_S1 + 31) =
                prefactor_z * *(b + 413 * OS1_S1 + 16) -
                p_over_q * *(b + 515 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 16);
            *(b + 413 * OS1_S1 + 32) =
                prefactor_z * *(b + 413 * OS1_S1 + 17) -
                p_over_q * *(b + 515 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 17) +
                one_over_two_q * *(b + 413 * OS1_S1 + 7);
            *(b + 413 * OS1_S1 + 33) =
                prefactor_y * *(b + 413 * OS1_S1 + 19) -
                p_over_q * *(b + 514 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 326 * OS1_S1 + 19);
            *(b + 413 * OS1_S1 + 34) =
                prefactor_z * *(b + 413 * OS1_S1 + 19) -
                p_over_q * *(b + 515 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 325 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 413 * OS1_S1 + 9);
            *(b + 414 * OS1_S1 + 20) =
                prefactor_x * *(b + 414 * OS1_S1 + 10) -
                p_over_q * *(b + 505 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 414 * OS1_S1 + 4);
            *(b + 414 * OS1_S1 + 21) =
                prefactor_y * *(b + 414 * OS1_S1 + 10) -
                p_over_q * *(b + 515 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 10);
            *(b + 414 * OS1_S1 + 22) =
                prefactor_z * *(b + 414 * OS1_S1 + 10) -
                p_over_q * *(b + 516 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 326 * OS1_S1 + 10);
            *(b + 414 * OS1_S1 + 23) =
                prefactor_x * *(b + 414 * OS1_S1 + 13) -
                p_over_q * *(b + 505 * OS1_S1 + 13) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 13) +
                one_over_two_q * *(b + 414 * OS1_S1 + 7);
            *(b + 414 * OS1_S1 + 24) =
                prefactor_y * *(b + 414 * OS1_S1 + 12) -
                p_over_q * *(b + 515 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 12);
            *(b + 414 * OS1_S1 + 25) =
                prefactor_x * *(b + 414 * OS1_S1 + 15) -
                p_over_q * *(b + 505 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 15) +
                one_over_two_q * *(b + 414 * OS1_S1 + 9);
            *(b + 414 * OS1_S1 + 26) =
                prefactor_x * *(b + 414 * OS1_S1 + 16) -
                p_over_q * *(b + 505 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 16);
            *(b + 414 * OS1_S1 + 27) =
                prefactor_x * *(b + 414 * OS1_S1 + 17) -
                p_over_q * *(b + 505 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 17);
            *(b + 414 * OS1_S1 + 28) =
                prefactor_x * *(b + 414 * OS1_S1 + 18) -
                p_over_q * *(b + 505 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 18);
            *(b + 414 * OS1_S1 + 29) =
                prefactor_x * *(b + 414 * OS1_S1 + 19) -
                p_over_q * *(b + 505 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 336 * OS1_S1 + 19);
            *(b + 414 * OS1_S1 + 30) =
                prefactor_y * *(b + 414 * OS1_S1 + 16) -
                p_over_q * *(b + 515 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 414 * OS1_S1 + 7);
            *(b + 414 * OS1_S1 + 31) =
                prefactor_z * *(b + 414 * OS1_S1 + 16) -
                p_over_q * *(b + 516 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 326 * OS1_S1 + 16);
            *(b + 414 * OS1_S1 + 32) =
                prefactor_y * *(b + 414 * OS1_S1 + 18) -
                p_over_q * *(b + 515 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 18) +
                one_over_two_q * *(b + 414 * OS1_S1 + 9);
            *(b + 414 * OS1_S1 + 33) =
                prefactor_y * *(b + 414 * OS1_S1 + 19) -
                p_over_q * *(b + 515 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 327 * OS1_S1 + 19);
            *(b + 414 * OS1_S1 + 34) =
                prefactor_z * *(b + 414 * OS1_S1 + 19) -
                p_over_q * *(b + 516 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 326 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 414 * OS1_S1 + 9);
            *(b + 415 * OS1_S1 + 20) =
                prefactor_x * *(b + 415 * OS1_S1 + 10) -
                p_over_q * *(b + 506 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 415 * OS1_S1 + 4);
            *(b + 415 * OS1_S1 + 21) =
                prefactor_y * *(b + 415 * OS1_S1 + 10) -
                p_over_q * *(b + 516 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 10);
            *(b + 415 * OS1_S1 + 22) =
                prefactor_z * *(b + 415 * OS1_S1 + 10) -
                p_over_q * *(b + 517 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 327 * OS1_S1 + 10);
            *(b + 415 * OS1_S1 + 23) =
                prefactor_y * *(b + 415 * OS1_S1 + 11) -
                p_over_q * *(b + 516 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 11) +
                one_over_two_q * *(b + 415 * OS1_S1 + 4);
            *(b + 415 * OS1_S1 + 24) =
                prefactor_y * *(b + 415 * OS1_S1 + 12) -
                p_over_q * *(b + 516 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 12);
            *(b + 415 * OS1_S1 + 25) =
                prefactor_x * *(b + 415 * OS1_S1 + 15) -
                p_over_q * *(b + 506 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 15) +
                one_over_two_q * *(b + 415 * OS1_S1 + 9);
            *(b + 415 * OS1_S1 + 26) =
                prefactor_x * *(b + 415 * OS1_S1 + 16) -
                p_over_q * *(b + 506 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 16);
            *(b + 415 * OS1_S1 + 27) =
                prefactor_x * *(b + 415 * OS1_S1 + 17) -
                p_over_q * *(b + 506 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 17);
            *(b + 415 * OS1_S1 + 28) =
                prefactor_y * *(b + 415 * OS1_S1 + 15) -
                p_over_q * *(b + 516 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 15);
            *(b + 415 * OS1_S1 + 29) =
                prefactor_x * *(b + 415 * OS1_S1 + 19) -
                p_over_q * *(b + 506 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 337 * OS1_S1 + 19);
            *(b + 415 * OS1_S1 + 30) =
                prefactor_y * *(b + 415 * OS1_S1 + 16) -
                p_over_q * *(b + 516 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 415 * OS1_S1 + 7);
            *(b + 415 * OS1_S1 + 31) =
                prefactor_z * *(b + 415 * OS1_S1 + 16) -
                p_over_q * *(b + 517 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 327 * OS1_S1 + 16);
            *(b + 415 * OS1_S1 + 32) =
                prefactor_y * *(b + 415 * OS1_S1 + 18) -
                p_over_q * *(b + 516 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 18) +
                one_over_two_q * *(b + 415 * OS1_S1 + 9);
            *(b + 415 * OS1_S1 + 33) =
                prefactor_y * *(b + 415 * OS1_S1 + 19) -
                p_over_q * *(b + 516 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 328 * OS1_S1 + 19);
            *(b + 415 * OS1_S1 + 34) =
                prefactor_z * *(b + 415 * OS1_S1 + 19) -
                p_over_q * *(b + 517 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 327 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 415 * OS1_S1 + 9);
            *(b + 416 * OS1_S1 + 20) =
                prefactor_x * *(b + 416 * OS1_S1 + 10) -
                p_over_q * *(b + 507 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 416 * OS1_S1 + 4);
            *(b + 416 * OS1_S1 + 21) =
                prefactor_y * *(b + 416 * OS1_S1 + 10) -
                p_over_q * *(b + 517 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 10);
            *(b + 416 * OS1_S1 + 22) =
                prefactor_z * *(b + 416 * OS1_S1 + 10) -
                p_over_q * *(b + 518 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 328 * OS1_S1 + 10);
            *(b + 416 * OS1_S1 + 23) =
                prefactor_y * *(b + 416 * OS1_S1 + 11) -
                p_over_q * *(b + 517 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 11) +
                one_over_two_q * *(b + 416 * OS1_S1 + 4);
            *(b + 416 * OS1_S1 + 24) =
                prefactor_y * *(b + 416 * OS1_S1 + 12) -
                p_over_q * *(b + 517 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 12);
            *(b + 416 * OS1_S1 + 25) =
                prefactor_x * *(b + 416 * OS1_S1 + 15) -
                p_over_q * *(b + 507 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 15) +
                one_over_two_q * *(b + 416 * OS1_S1 + 9);
            *(b + 416 * OS1_S1 + 26) =
                prefactor_x * *(b + 416 * OS1_S1 + 16) -
                p_over_q * *(b + 507 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 16);
            *(b + 416 * OS1_S1 + 27) =
                prefactor_x * *(b + 416 * OS1_S1 + 17) -
                p_over_q * *(b + 507 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 17);
            *(b + 416 * OS1_S1 + 28) =
                prefactor_y * *(b + 416 * OS1_S1 + 15) -
                p_over_q * *(b + 517 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 15);
            *(b + 416 * OS1_S1 + 29) =
                prefactor_x * *(b + 416 * OS1_S1 + 19) -
                p_over_q * *(b + 507 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 19);
            *(b + 416 * OS1_S1 + 30) =
                prefactor_y * *(b + 416 * OS1_S1 + 16) -
                p_over_q * *(b + 517 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 416 * OS1_S1 + 7);
            *(b + 416 * OS1_S1 + 31) =
                prefactor_z * *(b + 416 * OS1_S1 + 16) -
                p_over_q * *(b + 518 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 328 * OS1_S1 + 16);
            *(b + 416 * OS1_S1 + 32) =
                prefactor_y * *(b + 416 * OS1_S1 + 18) -
                p_over_q * *(b + 517 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 18) +
                one_over_two_q * *(b + 416 * OS1_S1 + 9);
            *(b + 416 * OS1_S1 + 33) =
                prefactor_y * *(b + 416 * OS1_S1 + 19) -
                p_over_q * *(b + 517 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 329 * OS1_S1 + 19);
            *(b + 416 * OS1_S1 + 34) =
                prefactor_z * *(b + 416 * OS1_S1 + 19) -
                p_over_q * *(b + 518 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 328 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 416 * OS1_S1 + 9);
            *(b + 417 * OS1_S1 + 20) =
                prefactor_x * *(b + 417 * OS1_S1 + 10) -
                p_over_q * *(b + 508 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 417 * OS1_S1 + 4);
            *(b + 417 * OS1_S1 + 21) =
                prefactor_y * *(b + 417 * OS1_S1 + 10) -
                p_over_q * *(b + 518 * OS1_S1 + 10) +
                one_over_two_q * *(b + 330 * OS1_S1 + 10);
            *(b + 417 * OS1_S1 + 22) =
                prefactor_z * *(b + 417 * OS1_S1 + 10) -
                p_over_q * *(b + 519 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 329 * OS1_S1 + 10);
            *(b + 417 * OS1_S1 + 23) =
                prefactor_y * *(b + 417 * OS1_S1 + 11) -
                p_over_q * *(b + 518 * OS1_S1 + 11) +
                one_over_two_q * *(b + 330 * OS1_S1 + 11) +
                one_over_two_q * *(b + 417 * OS1_S1 + 4);
            *(b + 417 * OS1_S1 + 24) =
                prefactor_y * *(b + 417 * OS1_S1 + 12) -
                p_over_q * *(b + 518 * OS1_S1 + 12) +
                one_over_two_q * *(b + 330 * OS1_S1 + 12);
            *(b + 417 * OS1_S1 + 25) =
                prefactor_x * *(b + 417 * OS1_S1 + 15) -
                p_over_q * *(b + 508 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 15) +
                one_over_two_q * *(b + 417 * OS1_S1 + 9);
            *(b + 417 * OS1_S1 + 26) =
                prefactor_x * *(b + 417 * OS1_S1 + 16) -
                p_over_q * *(b + 508 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 16);
            *(b + 417 * OS1_S1 + 27) =
                prefactor_x * *(b + 417 * OS1_S1 + 17) -
                p_over_q * *(b + 508 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 17);
            *(b + 417 * OS1_S1 + 28) =
                prefactor_y * *(b + 417 * OS1_S1 + 15) -
                p_over_q * *(b + 518 * OS1_S1 + 15) +
                one_over_two_q * *(b + 330 * OS1_S1 + 15);
            *(b + 417 * OS1_S1 + 29) =
                prefactor_x * *(b + 417 * OS1_S1 + 19) -
                p_over_q * *(b + 508 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 339 * OS1_S1 + 19);
            *(b + 417 * OS1_S1 + 30) =
                prefactor_y * *(b + 417 * OS1_S1 + 16) -
                p_over_q * *(b + 518 * OS1_S1 + 16) +
                one_over_two_q * *(b + 330 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 417 * OS1_S1 + 7);
            *(b + 417 * OS1_S1 + 31) =
                prefactor_z * *(b + 417 * OS1_S1 + 16) -
                p_over_q * *(b + 519 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 329 * OS1_S1 + 16);
            *(b + 417 * OS1_S1 + 32) =
                prefactor_y * *(b + 417 * OS1_S1 + 18) -
                p_over_q * *(b + 518 * OS1_S1 + 18) +
                one_over_two_q * *(b + 330 * OS1_S1 + 18) +
                one_over_two_q * *(b + 417 * OS1_S1 + 9);
            *(b + 417 * OS1_S1 + 33) =
                prefactor_y * *(b + 417 * OS1_S1 + 19) -
                p_over_q * *(b + 518 * OS1_S1 + 19) +
                one_over_two_q * *(b + 330 * OS1_S1 + 19);
            *(b + 417 * OS1_S1 + 34) =
                prefactor_z * *(b + 417 * OS1_S1 + 19) -
                p_over_q * *(b + 519 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 329 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 417 * OS1_S1 + 9);
            *(b + 418 * OS1_S1 + 20) =
                prefactor_x * *(b + 418 * OS1_S1 + 10) -
                p_over_q * *(b + 509 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 418 * OS1_S1 + 4);
            *(b + 418 * OS1_S1 + 21) = prefactor_y * *(b + 418 * OS1_S1 + 10) -
                                       p_over_q * *(b + 519 * OS1_S1 + 10);
            *(b + 418 * OS1_S1 + 22) =
                prefactor_z * *(b + 418 * OS1_S1 + 10) -
                p_over_q * *(b + 520 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 330 * OS1_S1 + 10);
            *(b + 418 * OS1_S1 + 23) = prefactor_y * *(b + 418 * OS1_S1 + 11) -
                                       p_over_q * *(b + 519 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 418 * OS1_S1 + 4);
            *(b + 418 * OS1_S1 + 24) = prefactor_y * *(b + 418 * OS1_S1 + 12) -
                                       p_over_q * *(b + 519 * OS1_S1 + 12);
            *(b + 418 * OS1_S1 + 25) =
                prefactor_x * *(b + 418 * OS1_S1 + 15) -
                p_over_q * *(b + 509 * OS1_S1 + 15) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 15) +
                one_over_two_q * *(b + 418 * OS1_S1 + 9);
            *(b + 418 * OS1_S1 + 26) =
                prefactor_x * *(b + 418 * OS1_S1 + 16) -
                p_over_q * *(b + 509 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 16);
            *(b + 418 * OS1_S1 + 27) =
                prefactor_x * *(b + 418 * OS1_S1 + 17) -
                p_over_q * *(b + 509 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 17);
            *(b + 418 * OS1_S1 + 28) = prefactor_y * *(b + 418 * OS1_S1 + 15) -
                                       p_over_q * *(b + 519 * OS1_S1 + 15);
            *(b + 418 * OS1_S1 + 29) =
                prefactor_x * *(b + 418 * OS1_S1 + 19) -
                p_over_q * *(b + 509 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 340 * OS1_S1 + 19);
            *(b + 418 * OS1_S1 + 30) =
                prefactor_y * *(b + 418 * OS1_S1 + 16) -
                p_over_q * *(b + 519 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 418 * OS1_S1 + 7);
            *(b + 418 * OS1_S1 + 31) =
                prefactor_z * *(b + 418 * OS1_S1 + 16) -
                p_over_q * *(b + 520 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 330 * OS1_S1 + 16);
            *(b + 418 * OS1_S1 + 32) = prefactor_y * *(b + 418 * OS1_S1 + 18) -
                                       p_over_q * *(b + 519 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 418 * OS1_S1 + 9);
            *(b + 418 * OS1_S1 + 33) = prefactor_y * *(b + 418 * OS1_S1 + 19) -
                                       p_over_q * *(b + 519 * OS1_S1 + 19);
            *(b + 418 * OS1_S1 + 34) =
                prefactor_z * *(b + 418 * OS1_S1 + 19) -
                p_over_q * *(b + 520 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 330 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 418 * OS1_S1 + 9);
            *(b + 419 * OS1_S1 + 20) =
                prefactor_x * *(b + 419 * OS1_S1 + 10) -
                p_over_q * *(b + 510 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 341 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 419 * OS1_S1 + 4);
            *(b + 419 * OS1_S1 + 21) =
                prefactor_y * *(b + 419 * OS1_S1 + 10) -
                p_over_q * *(b + 521 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 331 * OS1_S1 + 10);
            *(b + 419 * OS1_S1 + 22) = prefactor_z * *(b + 419 * OS1_S1 + 10) -
                                       p_over_q * *(b + 522 * OS1_S1 + 10);
            *(b + 419 * OS1_S1 + 23) =
                prefactor_x * *(b + 419 * OS1_S1 + 13) -
                p_over_q * *(b + 510 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 341 * OS1_S1 + 13) +
                one_over_two_q * *(b + 419 * OS1_S1 + 7);
            *(b + 419 * OS1_S1 + 24) = prefactor_z * *(b + 419 * OS1_S1 + 11) -
                                       p_over_q * *(b + 522 * OS1_S1 + 11);
            *(b + 419 * OS1_S1 + 25) = prefactor_z * *(b + 419 * OS1_S1 + 12) -
                                       p_over_q * *(b + 522 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 419 * OS1_S1 + 4);
            *(b + 419 * OS1_S1 + 26) =
                prefactor_x * *(b + 419 * OS1_S1 + 16) -
                p_over_q * *(b + 510 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 341 * OS1_S1 + 16);
            *(b + 419 * OS1_S1 + 27) = prefactor_z * *(b + 419 * OS1_S1 + 13) -
                                       p_over_q * *(b + 522 * OS1_S1 + 13);
            *(b + 419 * OS1_S1 + 28) =
                prefactor_x * *(b + 419 * OS1_S1 + 18) -
                p_over_q * *(b + 510 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 341 * OS1_S1 + 18);
            *(b + 419 * OS1_S1 + 29) =
                prefactor_x * *(b + 419 * OS1_S1 + 19) -
                p_over_q * *(b + 510 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 341 * OS1_S1 + 19);
            *(b + 419 * OS1_S1 + 30) =
                prefactor_y * *(b + 419 * OS1_S1 + 16) -
                p_over_q * *(b + 521 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 331 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 419 * OS1_S1 + 7);
            *(b + 419 * OS1_S1 + 31) = prefactor_z * *(b + 419 * OS1_S1 + 16) -
                                       p_over_q * *(b + 522 * OS1_S1 + 16);
            *(b + 419 * OS1_S1 + 32) = prefactor_z * *(b + 419 * OS1_S1 + 17) -
                                       p_over_q * *(b + 522 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 419 * OS1_S1 + 7);
            *(b + 419 * OS1_S1 + 33) =
                prefactor_y * *(b + 419 * OS1_S1 + 19) -
                p_over_q * *(b + 521 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 331 * OS1_S1 + 19);
            *(b + 419 * OS1_S1 + 34) =
                prefactor_z * *(b + 419 * OS1_S1 + 19) -
                p_over_q * *(b + 522 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 419 * OS1_S1 + 9);
            *(b + 420 * OS1_S1 + 20) =
                prefactor_x * *(b + 420 * OS1_S1 + 10) -
                p_over_q * *(b + 511 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 420 * OS1_S1 + 4);
            *(b + 420 * OS1_S1 + 21) =
                prefactor_y * *(b + 420 * OS1_S1 + 10) -
                p_over_q * *(b + 522 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 332 * OS1_S1 + 10);
            *(b + 420 * OS1_S1 + 22) =
                prefactor_z * *(b + 420 * OS1_S1 + 10) -
                p_over_q * *(b + 523 * OS1_S1 + 10) +
                one_over_two_q * *(b + 331 * OS1_S1 + 10);
            *(b + 420 * OS1_S1 + 23) =
                prefactor_x * *(b + 420 * OS1_S1 + 13) -
                p_over_q * *(b + 511 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 13) +
                one_over_two_q * *(b + 420 * OS1_S1 + 7);
            *(b + 420 * OS1_S1 + 24) =
                prefactor_z * *(b + 420 * OS1_S1 + 11) -
                p_over_q * *(b + 523 * OS1_S1 + 11) +
                one_over_two_q * *(b + 331 * OS1_S1 + 11);
            *(b + 420 * OS1_S1 + 25) =
                prefactor_z * *(b + 420 * OS1_S1 + 12) -
                p_over_q * *(b + 523 * OS1_S1 + 12) +
                one_over_two_q * *(b + 331 * OS1_S1 + 12) +
                one_over_two_q * *(b + 420 * OS1_S1 + 4);
            *(b + 420 * OS1_S1 + 26) =
                prefactor_x * *(b + 420 * OS1_S1 + 16) -
                p_over_q * *(b + 511 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 16);
            *(b + 420 * OS1_S1 + 27) =
                prefactor_z * *(b + 420 * OS1_S1 + 13) -
                p_over_q * *(b + 523 * OS1_S1 + 13) +
                one_over_two_q * *(b + 331 * OS1_S1 + 13);
            *(b + 420 * OS1_S1 + 28) =
                prefactor_x * *(b + 420 * OS1_S1 + 18) -
                p_over_q * *(b + 511 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 18);
            *(b + 420 * OS1_S1 + 29) =
                prefactor_x * *(b + 420 * OS1_S1 + 19) -
                p_over_q * *(b + 511 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 19);
            *(b + 420 * OS1_S1 + 30) =
                prefactor_y * *(b + 420 * OS1_S1 + 16) -
                p_over_q * *(b + 522 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 332 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 420 * OS1_S1 + 7);
            *(b + 420 * OS1_S1 + 31) =
                prefactor_z * *(b + 420 * OS1_S1 + 16) -
                p_over_q * *(b + 523 * OS1_S1 + 16) +
                one_over_two_q * *(b + 331 * OS1_S1 + 16);
            *(b + 420 * OS1_S1 + 32) =
                prefactor_z * *(b + 420 * OS1_S1 + 17) -
                p_over_q * *(b + 523 * OS1_S1 + 17) +
                one_over_two_q * *(b + 331 * OS1_S1 + 17) +
                one_over_two_q * *(b + 420 * OS1_S1 + 7);
            *(b + 420 * OS1_S1 + 33) =
                prefactor_y * *(b + 420 * OS1_S1 + 19) -
                p_over_q * *(b + 522 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 332 * OS1_S1 + 19);
            *(b + 420 * OS1_S1 + 34) =
                prefactor_z * *(b + 420 * OS1_S1 + 19) -
                p_over_q * *(b + 523 * OS1_S1 + 19) +
                one_over_two_q * *(b + 331 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 420 * OS1_S1 + 9);
            *(b + 421 * OS1_S1 + 20) =
                prefactor_x * *(b + 421 * OS1_S1 + 10) -
                p_over_q * *(b + 512 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 343 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 421 * OS1_S1 + 4);
            *(b + 421 * OS1_S1 + 21) =
                prefactor_y * *(b + 421 * OS1_S1 + 10) -
                p_over_q * *(b + 523 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 333 * OS1_S1 + 10);
            *(b + 421 * OS1_S1 + 22) =
                prefactor_z * *(b + 421 * OS1_S1 + 10) -
                p_over_q * *(b + 524 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 10);
            *(b + 421 * OS1_S1 + 23) =
                prefactor_x * *(b + 421 * OS1_S1 + 13) -
                p_over_q * *(b + 512 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 343 * OS1_S1 + 13) +
                one_over_two_q * *(b + 421 * OS1_S1 + 7);
            *(b + 421 * OS1_S1 + 24) =
                prefactor_z * *(b + 421 * OS1_S1 + 11) -
                p_over_q * *(b + 524 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 11);
            *(b + 421 * OS1_S1 + 25) =
                prefactor_z * *(b + 421 * OS1_S1 + 12) -
                p_over_q * *(b + 524 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 12) +
                one_over_two_q * *(b + 421 * OS1_S1 + 4);
            *(b + 421 * OS1_S1 + 26) =
                prefactor_x * *(b + 421 * OS1_S1 + 16) -
                p_over_q * *(b + 512 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 343 * OS1_S1 + 16);
            *(b + 421 * OS1_S1 + 27) =
                prefactor_z * *(b + 421 * OS1_S1 + 13) -
                p_over_q * *(b + 524 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 13);
            *(b + 421 * OS1_S1 + 28) =
                prefactor_x * *(b + 421 * OS1_S1 + 18) -
                p_over_q * *(b + 512 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 343 * OS1_S1 + 18);
            *(b + 421 * OS1_S1 + 29) =
                prefactor_x * *(b + 421 * OS1_S1 + 19) -
                p_over_q * *(b + 512 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 343 * OS1_S1 + 19);
            *(b + 421 * OS1_S1 + 30) =
                prefactor_y * *(b + 421 * OS1_S1 + 16) -
                p_over_q * *(b + 523 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 333 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 421 * OS1_S1 + 7);
            *(b + 421 * OS1_S1 + 31) =
                prefactor_z * *(b + 421 * OS1_S1 + 16) -
                p_over_q * *(b + 524 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 16);
            *(b + 421 * OS1_S1 + 32) =
                prefactor_z * *(b + 421 * OS1_S1 + 17) -
                p_over_q * *(b + 524 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 17) +
                one_over_two_q * *(b + 421 * OS1_S1 + 7);
            *(b + 421 * OS1_S1 + 33) =
                prefactor_y * *(b + 421 * OS1_S1 + 19) -
                p_over_q * *(b + 523 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 333 * OS1_S1 + 19);
            *(b + 421 * OS1_S1 + 34) =
                prefactor_z * *(b + 421 * OS1_S1 + 19) -
                p_over_q * *(b + 524 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 332 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 421 * OS1_S1 + 9);
            *(b + 422 * OS1_S1 + 20) =
                prefactor_x * *(b + 422 * OS1_S1 + 10) -
                p_over_q * *(b + 513 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 422 * OS1_S1 + 4);
            *(b + 422 * OS1_S1 + 21) =
                prefactor_y * *(b + 422 * OS1_S1 + 10) -
                p_over_q * *(b + 524 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 334 * OS1_S1 + 10);
            *(b + 422 * OS1_S1 + 22) =
                prefactor_z * *(b + 422 * OS1_S1 + 10) -
                p_over_q * *(b + 525 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 10);
            *(b + 422 * OS1_S1 + 23) =
                prefactor_x * *(b + 422 * OS1_S1 + 13) -
                p_over_q * *(b + 513 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 13) +
                one_over_two_q * *(b + 422 * OS1_S1 + 7);
            *(b + 422 * OS1_S1 + 24) =
                prefactor_z * *(b + 422 * OS1_S1 + 11) -
                p_over_q * *(b + 525 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 11);
            *(b + 422 * OS1_S1 + 25) =
                prefactor_x * *(b + 422 * OS1_S1 + 15) -
                p_over_q * *(b + 513 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 15) +
                one_over_two_q * *(b + 422 * OS1_S1 + 9);
            *(b + 422 * OS1_S1 + 26) =
                prefactor_x * *(b + 422 * OS1_S1 + 16) -
                p_over_q * *(b + 513 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 16);
            *(b + 422 * OS1_S1 + 27) =
                prefactor_x * *(b + 422 * OS1_S1 + 17) -
                p_over_q * *(b + 513 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 17);
            *(b + 422 * OS1_S1 + 28) =
                prefactor_x * *(b + 422 * OS1_S1 + 18) -
                p_over_q * *(b + 513 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 18);
            *(b + 422 * OS1_S1 + 29) =
                prefactor_x * *(b + 422 * OS1_S1 + 19) -
                p_over_q * *(b + 513 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 344 * OS1_S1 + 19);
            *(b + 422 * OS1_S1 + 30) =
                prefactor_y * *(b + 422 * OS1_S1 + 16) -
                p_over_q * *(b + 524 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 334 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 422 * OS1_S1 + 7);
            *(b + 422 * OS1_S1 + 31) =
                prefactor_z * *(b + 422 * OS1_S1 + 16) -
                p_over_q * *(b + 525 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 16);
            *(b + 422 * OS1_S1 + 32) =
                prefactor_z * *(b + 422 * OS1_S1 + 17) -
                p_over_q * *(b + 525 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 17) +
                one_over_two_q * *(b + 422 * OS1_S1 + 7);
            *(b + 422 * OS1_S1 + 33) =
                prefactor_y * *(b + 422 * OS1_S1 + 19) -
                p_over_q * *(b + 524 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 334 * OS1_S1 + 19);
            *(b + 422 * OS1_S1 + 34) =
                prefactor_z * *(b + 422 * OS1_S1 + 19) -
                p_over_q * *(b + 525 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 333 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 422 * OS1_S1 + 9);
            *(b + 423 * OS1_S1 + 20) =
                prefactor_x * *(b + 423 * OS1_S1 + 10) -
                p_over_q * *(b + 514 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 423 * OS1_S1 + 4);
            *(b + 423 * OS1_S1 + 21) =
                prefactor_y * *(b + 423 * OS1_S1 + 10) -
                p_over_q * *(b + 525 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 335 * OS1_S1 + 10);
            *(b + 423 * OS1_S1 + 22) =
                prefactor_z * *(b + 423 * OS1_S1 + 10) -
                p_over_q * *(b + 526 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 10);
            *(b + 423 * OS1_S1 + 23) =
                prefactor_x * *(b + 423 * OS1_S1 + 13) -
                p_over_q * *(b + 514 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 13) +
                one_over_two_q * *(b + 423 * OS1_S1 + 7);
            *(b + 423 * OS1_S1 + 24) =
                prefactor_z * *(b + 423 * OS1_S1 + 11) -
                p_over_q * *(b + 526 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 11);
            *(b + 423 * OS1_S1 + 25) =
                prefactor_x * *(b + 423 * OS1_S1 + 15) -
                p_over_q * *(b + 514 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 15) +
                one_over_two_q * *(b + 423 * OS1_S1 + 9);
            *(b + 423 * OS1_S1 + 26) =
                prefactor_x * *(b + 423 * OS1_S1 + 16) -
                p_over_q * *(b + 514 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 16);
            *(b + 423 * OS1_S1 + 27) =
                prefactor_x * *(b + 423 * OS1_S1 + 17) -
                p_over_q * *(b + 514 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 17);
            *(b + 423 * OS1_S1 + 28) =
                prefactor_x * *(b + 423 * OS1_S1 + 18) -
                p_over_q * *(b + 514 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 18);
            *(b + 423 * OS1_S1 + 29) =
                prefactor_x * *(b + 423 * OS1_S1 + 19) -
                p_over_q * *(b + 514 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 345 * OS1_S1 + 19);
            *(b + 423 * OS1_S1 + 30) =
                prefactor_y * *(b + 423 * OS1_S1 + 16) -
                p_over_q * *(b + 525 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 335 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 423 * OS1_S1 + 7);
            *(b + 423 * OS1_S1 + 31) =
                prefactor_z * *(b + 423 * OS1_S1 + 16) -
                p_over_q * *(b + 526 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 16);
            *(b + 423 * OS1_S1 + 32) =
                prefactor_z * *(b + 423 * OS1_S1 + 17) -
                p_over_q * *(b + 526 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 17) +
                one_over_two_q * *(b + 423 * OS1_S1 + 7);
            *(b + 423 * OS1_S1 + 33) =
                prefactor_y * *(b + 423 * OS1_S1 + 19) -
                p_over_q * *(b + 525 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 335 * OS1_S1 + 19);
            *(b + 423 * OS1_S1 + 34) =
                prefactor_z * *(b + 423 * OS1_S1 + 19) -
                p_over_q * *(b + 526 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 334 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 423 * OS1_S1 + 9);
            *(b + 424 * OS1_S1 + 20) =
                prefactor_x * *(b + 424 * OS1_S1 + 10) -
                p_over_q * *(b + 515 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 424 * OS1_S1 + 4);
            *(b + 424 * OS1_S1 + 21) =
                prefactor_y * *(b + 424 * OS1_S1 + 10) -
                p_over_q * *(b + 526 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 336 * OS1_S1 + 10);
            *(b + 424 * OS1_S1 + 22) =
                prefactor_z * *(b + 424 * OS1_S1 + 10) -
                p_over_q * *(b + 527 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 335 * OS1_S1 + 10);
            *(b + 424 * OS1_S1 + 23) =
                prefactor_x * *(b + 424 * OS1_S1 + 13) -
                p_over_q * *(b + 515 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 13) +
                one_over_two_q * *(b + 424 * OS1_S1 + 7);
            *(b + 424 * OS1_S1 + 24) =
                prefactor_z * *(b + 424 * OS1_S1 + 11) -
                p_over_q * *(b + 527 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 335 * OS1_S1 + 11);
            *(b + 424 * OS1_S1 + 25) =
                prefactor_x * *(b + 424 * OS1_S1 + 15) -
                p_over_q * *(b + 515 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 15) +
                one_over_two_q * *(b + 424 * OS1_S1 + 9);
            *(b + 424 * OS1_S1 + 26) =
                prefactor_x * *(b + 424 * OS1_S1 + 16) -
                p_over_q * *(b + 515 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 16);
            *(b + 424 * OS1_S1 + 27) =
                prefactor_x * *(b + 424 * OS1_S1 + 17) -
                p_over_q * *(b + 515 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 17);
            *(b + 424 * OS1_S1 + 28) =
                prefactor_x * *(b + 424 * OS1_S1 + 18) -
                p_over_q * *(b + 515 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 18);
            *(b + 424 * OS1_S1 + 29) =
                prefactor_x * *(b + 424 * OS1_S1 + 19) -
                p_over_q * *(b + 515 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 346 * OS1_S1 + 19);
            *(b + 424 * OS1_S1 + 30) =
                prefactor_y * *(b + 424 * OS1_S1 + 16) -
                p_over_q * *(b + 526 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 336 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 424 * OS1_S1 + 7);
            *(b + 424 * OS1_S1 + 31) =
                prefactor_z * *(b + 424 * OS1_S1 + 16) -
                p_over_q * *(b + 527 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 335 * OS1_S1 + 16);
            *(b + 424 * OS1_S1 + 32) =
                prefactor_z * *(b + 424 * OS1_S1 + 17) -
                p_over_q * *(b + 527 * OS1_S1 + 17) +
                5 * one_over_two_q * *(b + 335 * OS1_S1 + 17) +
                one_over_two_q * *(b + 424 * OS1_S1 + 7);
            *(b + 424 * OS1_S1 + 33) =
                prefactor_y * *(b + 424 * OS1_S1 + 19) -
                p_over_q * *(b + 526 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 336 * OS1_S1 + 19);
            *(b + 424 * OS1_S1 + 34) =
                prefactor_z * *(b + 424 * OS1_S1 + 19) -
                p_over_q * *(b + 527 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 335 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 424 * OS1_S1 + 9);
            *(b + 425 * OS1_S1 + 20) =
                prefactor_x * *(b + 425 * OS1_S1 + 10) -
                p_over_q * *(b + 516 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 425 * OS1_S1 + 4);
            *(b + 425 * OS1_S1 + 21) =
                prefactor_y * *(b + 425 * OS1_S1 + 10) -
                p_over_q * *(b + 527 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 10);
            *(b + 425 * OS1_S1 + 22) =
                prefactor_z * *(b + 425 * OS1_S1 + 10) -
                p_over_q * *(b + 528 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 336 * OS1_S1 + 10);
            *(b + 425 * OS1_S1 + 23) =
                prefactor_x * *(b + 425 * OS1_S1 + 13) -
                p_over_q * *(b + 516 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 13) +
                one_over_two_q * *(b + 425 * OS1_S1 + 7);
            *(b + 425 * OS1_S1 + 24) =
                prefactor_y * *(b + 425 * OS1_S1 + 12) -
                p_over_q * *(b + 527 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 12);
            *(b + 425 * OS1_S1 + 25) =
                prefactor_x * *(b + 425 * OS1_S1 + 15) -
                p_over_q * *(b + 516 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 15) +
                one_over_two_q * *(b + 425 * OS1_S1 + 9);
            *(b + 425 * OS1_S1 + 26) =
                prefactor_x * *(b + 425 * OS1_S1 + 16) -
                p_over_q * *(b + 516 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 16);
            *(b + 425 * OS1_S1 + 27) =
                prefactor_x * *(b + 425 * OS1_S1 + 17) -
                p_over_q * *(b + 516 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 17);
            *(b + 425 * OS1_S1 + 28) =
                prefactor_x * *(b + 425 * OS1_S1 + 18) -
                p_over_q * *(b + 516 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 18);
            *(b + 425 * OS1_S1 + 29) =
                prefactor_x * *(b + 425 * OS1_S1 + 19) -
                p_over_q * *(b + 516 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 347 * OS1_S1 + 19);
            *(b + 425 * OS1_S1 + 30) =
                prefactor_y * *(b + 425 * OS1_S1 + 16) -
                p_over_q * *(b + 527 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 425 * OS1_S1 + 7);
            *(b + 425 * OS1_S1 + 31) =
                prefactor_z * *(b + 425 * OS1_S1 + 16) -
                p_over_q * *(b + 528 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 336 * OS1_S1 + 16);
            *(b + 425 * OS1_S1 + 32) =
                prefactor_y * *(b + 425 * OS1_S1 + 18) -
                p_over_q * *(b + 527 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 18) +
                one_over_two_q * *(b + 425 * OS1_S1 + 9);
            *(b + 425 * OS1_S1 + 33) =
                prefactor_y * *(b + 425 * OS1_S1 + 19) -
                p_over_q * *(b + 527 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 337 * OS1_S1 + 19);
            *(b + 425 * OS1_S1 + 34) =
                prefactor_z * *(b + 425 * OS1_S1 + 19) -
                p_over_q * *(b + 528 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 336 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 425 * OS1_S1 + 9);
            *(b + 426 * OS1_S1 + 20) =
                prefactor_x * *(b + 426 * OS1_S1 + 10) -
                p_over_q * *(b + 517 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 426 * OS1_S1 + 4);
            *(b + 426 * OS1_S1 + 21) =
                prefactor_y * *(b + 426 * OS1_S1 + 10) -
                p_over_q * *(b + 528 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 10);
            *(b + 426 * OS1_S1 + 22) =
                prefactor_z * *(b + 426 * OS1_S1 + 10) -
                p_over_q * *(b + 529 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 337 * OS1_S1 + 10);
            *(b + 426 * OS1_S1 + 23) =
                prefactor_x * *(b + 426 * OS1_S1 + 13) -
                p_over_q * *(b + 517 * OS1_S1 + 13) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 13) +
                one_over_two_q * *(b + 426 * OS1_S1 + 7);
            *(b + 426 * OS1_S1 + 24) =
                prefactor_y * *(b + 426 * OS1_S1 + 12) -
                p_over_q * *(b + 528 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 12);
            *(b + 426 * OS1_S1 + 25) =
                prefactor_x * *(b + 426 * OS1_S1 + 15) -
                p_over_q * *(b + 517 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 15) +
                one_over_two_q * *(b + 426 * OS1_S1 + 9);
            *(b + 426 * OS1_S1 + 26) =
                prefactor_x * *(b + 426 * OS1_S1 + 16) -
                p_over_q * *(b + 517 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 16);
            *(b + 426 * OS1_S1 + 27) =
                prefactor_x * *(b + 426 * OS1_S1 + 17) -
                p_over_q * *(b + 517 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 17);
            *(b + 426 * OS1_S1 + 28) =
                prefactor_x * *(b + 426 * OS1_S1 + 18) -
                p_over_q * *(b + 517 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 18);
            *(b + 426 * OS1_S1 + 29) =
                prefactor_x * *(b + 426 * OS1_S1 + 19) -
                p_over_q * *(b + 517 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 348 * OS1_S1 + 19);
            *(b + 426 * OS1_S1 + 30) =
                prefactor_y * *(b + 426 * OS1_S1 + 16) -
                p_over_q * *(b + 528 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 426 * OS1_S1 + 7);
            *(b + 426 * OS1_S1 + 31) =
                prefactor_z * *(b + 426 * OS1_S1 + 16) -
                p_over_q * *(b + 529 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 337 * OS1_S1 + 16);
            *(b + 426 * OS1_S1 + 32) =
                prefactor_y * *(b + 426 * OS1_S1 + 18) -
                p_over_q * *(b + 528 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 18) +
                one_over_two_q * *(b + 426 * OS1_S1 + 9);
            *(b + 426 * OS1_S1 + 33) =
                prefactor_y * *(b + 426 * OS1_S1 + 19) -
                p_over_q * *(b + 528 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 338 * OS1_S1 + 19);
            *(b + 426 * OS1_S1 + 34) =
                prefactor_z * *(b + 426 * OS1_S1 + 19) -
                p_over_q * *(b + 529 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 337 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 426 * OS1_S1 + 9);
            *(b + 427 * OS1_S1 + 20) =
                prefactor_x * *(b + 427 * OS1_S1 + 10) -
                p_over_q * *(b + 518 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 349 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 427 * OS1_S1 + 4);
            *(b + 427 * OS1_S1 + 21) =
                prefactor_y * *(b + 427 * OS1_S1 + 10) -
                p_over_q * *(b + 529 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 10);
            *(b + 427 * OS1_S1 + 22) =
                prefactor_z * *(b + 427 * OS1_S1 + 10) -
                p_over_q * *(b + 530 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 338 * OS1_S1 + 10);
            *(b + 427 * OS1_S1 + 23) =
                prefactor_y * *(b + 427 * OS1_S1 + 11) -
                p_over_q * *(b + 529 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 11) +
                one_over_two_q * *(b + 427 * OS1_S1 + 4);
            *(b + 427 * OS1_S1 + 24) =
                prefactor_y * *(b + 427 * OS1_S1 + 12) -
                p_over_q * *(b + 529 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 12);
            *(b + 427 * OS1_S1 + 25) =
                prefactor_x * *(b + 427 * OS1_S1 + 15) -
                p_over_q * *(b + 518 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 349 * OS1_S1 + 15) +
                one_over_two_q * *(b + 427 * OS1_S1 + 9);
            *(b + 427 * OS1_S1 + 26) =
                prefactor_x * *(b + 427 * OS1_S1 + 16) -
                p_over_q * *(b + 518 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 349 * OS1_S1 + 16);
            *(b + 427 * OS1_S1 + 27) =
                prefactor_x * *(b + 427 * OS1_S1 + 17) -
                p_over_q * *(b + 518 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 349 * OS1_S1 + 17);
            *(b + 427 * OS1_S1 + 28) =
                prefactor_y * *(b + 427 * OS1_S1 + 15) -
                p_over_q * *(b + 529 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 15);
            *(b + 427 * OS1_S1 + 29) =
                prefactor_x * *(b + 427 * OS1_S1 + 19) -
                p_over_q * *(b + 518 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 349 * OS1_S1 + 19);
            *(b + 427 * OS1_S1 + 30) =
                prefactor_y * *(b + 427 * OS1_S1 + 16) -
                p_over_q * *(b + 529 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 427 * OS1_S1 + 7);
            *(b + 427 * OS1_S1 + 31) =
                prefactor_z * *(b + 427 * OS1_S1 + 16) -
                p_over_q * *(b + 530 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 338 * OS1_S1 + 16);
            *(b + 427 * OS1_S1 + 32) =
                prefactor_y * *(b + 427 * OS1_S1 + 18) -
                p_over_q * *(b + 529 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 18) +
                one_over_two_q * *(b + 427 * OS1_S1 + 9);
            *(b + 427 * OS1_S1 + 33) =
                prefactor_y * *(b + 427 * OS1_S1 + 19) -
                p_over_q * *(b + 529 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 339 * OS1_S1 + 19);
            *(b + 427 * OS1_S1 + 34) =
                prefactor_z * *(b + 427 * OS1_S1 + 19) -
                p_over_q * *(b + 530 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 338 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 427 * OS1_S1 + 9);
            *(b + 428 * OS1_S1 + 20) =
                prefactor_x * *(b + 428 * OS1_S1 + 10) -
                p_over_q * *(b + 519 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 428 * OS1_S1 + 4);
            *(b + 428 * OS1_S1 + 21) =
                prefactor_y * *(b + 428 * OS1_S1 + 10) -
                p_over_q * *(b + 530 * OS1_S1 + 10) +
                one_over_two_q * *(b + 340 * OS1_S1 + 10);
            *(b + 428 * OS1_S1 + 22) =
                prefactor_z * *(b + 428 * OS1_S1 + 10) -
                p_over_q * *(b + 531 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 339 * OS1_S1 + 10);
            *(b + 428 * OS1_S1 + 23) =
                prefactor_y * *(b + 428 * OS1_S1 + 11) -
                p_over_q * *(b + 530 * OS1_S1 + 11) +
                one_over_two_q * *(b + 340 * OS1_S1 + 11) +
                one_over_two_q * *(b + 428 * OS1_S1 + 4);
            *(b + 428 * OS1_S1 + 24) =
                prefactor_y * *(b + 428 * OS1_S1 + 12) -
                p_over_q * *(b + 530 * OS1_S1 + 12) +
                one_over_two_q * *(b + 340 * OS1_S1 + 12);
            *(b + 428 * OS1_S1 + 25) =
                prefactor_x * *(b + 428 * OS1_S1 + 15) -
                p_over_q * *(b + 519 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 15) +
                one_over_two_q * *(b + 428 * OS1_S1 + 9);
            *(b + 428 * OS1_S1 + 26) =
                prefactor_x * *(b + 428 * OS1_S1 + 16) -
                p_over_q * *(b + 519 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 16);
            *(b + 428 * OS1_S1 + 27) =
                prefactor_x * *(b + 428 * OS1_S1 + 17) -
                p_over_q * *(b + 519 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 17);
            *(b + 428 * OS1_S1 + 28) =
                prefactor_y * *(b + 428 * OS1_S1 + 15) -
                p_over_q * *(b + 530 * OS1_S1 + 15) +
                one_over_two_q * *(b + 340 * OS1_S1 + 15);
            *(b + 428 * OS1_S1 + 29) =
                prefactor_x * *(b + 428 * OS1_S1 + 19) -
                p_over_q * *(b + 519 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 19);
            *(b + 428 * OS1_S1 + 30) =
                prefactor_y * *(b + 428 * OS1_S1 + 16) -
                p_over_q * *(b + 530 * OS1_S1 + 16) +
                one_over_two_q * *(b + 340 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 428 * OS1_S1 + 7);
            *(b + 428 * OS1_S1 + 31) =
                prefactor_z * *(b + 428 * OS1_S1 + 16) -
                p_over_q * *(b + 531 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 339 * OS1_S1 + 16);
            *(b + 428 * OS1_S1 + 32) =
                prefactor_y * *(b + 428 * OS1_S1 + 18) -
                p_over_q * *(b + 530 * OS1_S1 + 18) +
                one_over_two_q * *(b + 340 * OS1_S1 + 18) +
                one_over_two_q * *(b + 428 * OS1_S1 + 9);
            *(b + 428 * OS1_S1 + 33) =
                prefactor_y * *(b + 428 * OS1_S1 + 19) -
                p_over_q * *(b + 530 * OS1_S1 + 19) +
                one_over_two_q * *(b + 340 * OS1_S1 + 19);
            *(b + 428 * OS1_S1 + 34) =
                prefactor_z * *(b + 428 * OS1_S1 + 19) -
                p_over_q * *(b + 531 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 339 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 428 * OS1_S1 + 9);
            *(b + 429 * OS1_S1 + 20) =
                prefactor_x * *(b + 429 * OS1_S1 + 10) -
                p_over_q * *(b + 520 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 351 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 429 * OS1_S1 + 4);
            *(b + 429 * OS1_S1 + 21) = prefactor_y * *(b + 429 * OS1_S1 + 10) -
                                       p_over_q * *(b + 531 * OS1_S1 + 10);
            *(b + 429 * OS1_S1 + 22) =
                prefactor_z * *(b + 429 * OS1_S1 + 10) -
                p_over_q * *(b + 532 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 340 * OS1_S1 + 10);
            *(b + 429 * OS1_S1 + 23) = prefactor_y * *(b + 429 * OS1_S1 + 11) -
                                       p_over_q * *(b + 531 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 429 * OS1_S1 + 4);
            *(b + 429 * OS1_S1 + 24) = prefactor_y * *(b + 429 * OS1_S1 + 12) -
                                       p_over_q * *(b + 531 * OS1_S1 + 12);
            *(b + 429 * OS1_S1 + 25) =
                prefactor_x * *(b + 429 * OS1_S1 + 15) -
                p_over_q * *(b + 520 * OS1_S1 + 15) +
                2 * one_over_two_q * *(b + 351 * OS1_S1 + 15) +
                one_over_two_q * *(b + 429 * OS1_S1 + 9);
            *(b + 429 * OS1_S1 + 26) =
                prefactor_x * *(b + 429 * OS1_S1 + 16) -
                p_over_q * *(b + 520 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 351 * OS1_S1 + 16);
            *(b + 429 * OS1_S1 + 27) =
                prefactor_x * *(b + 429 * OS1_S1 + 17) -
                p_over_q * *(b + 520 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 351 * OS1_S1 + 17);
            *(b + 429 * OS1_S1 + 28) = prefactor_y * *(b + 429 * OS1_S1 + 15) -
                                       p_over_q * *(b + 531 * OS1_S1 + 15);
            *(b + 429 * OS1_S1 + 29) =
                prefactor_x * *(b + 429 * OS1_S1 + 19) -
                p_over_q * *(b + 520 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 351 * OS1_S1 + 19);
            *(b + 429 * OS1_S1 + 30) =
                prefactor_y * *(b + 429 * OS1_S1 + 16) -
                p_over_q * *(b + 531 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 429 * OS1_S1 + 7);
            *(b + 429 * OS1_S1 + 31) =
                prefactor_z * *(b + 429 * OS1_S1 + 16) -
                p_over_q * *(b + 532 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 340 * OS1_S1 + 16);
            *(b + 429 * OS1_S1 + 32) = prefactor_y * *(b + 429 * OS1_S1 + 18) -
                                       p_over_q * *(b + 531 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 429 * OS1_S1 + 9);
            *(b + 429 * OS1_S1 + 33) = prefactor_y * *(b + 429 * OS1_S1 + 19) -
                                       p_over_q * *(b + 531 * OS1_S1 + 19);
            *(b + 429 * OS1_S1 + 34) =
                prefactor_z * *(b + 429 * OS1_S1 + 19) -
                p_over_q * *(b + 532 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 340 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 429 * OS1_S1 + 9);
            *(b + 430 * OS1_S1 + 20) =
                prefactor_x * *(b + 430 * OS1_S1 + 10) -
                p_over_q * *(b + 521 * OS1_S1 + 10) +
                one_over_two_q * *(b + 352 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 430 * OS1_S1 + 4);
            *(b + 430 * OS1_S1 + 21) =
                prefactor_y * *(b + 430 * OS1_S1 + 10) -
                p_over_q * *(b + 533 * OS1_S1 + 10) +
                11 * one_over_two_q * *(b + 341 * OS1_S1 + 10);
            *(b + 430 * OS1_S1 + 22) = prefactor_z * *(b + 430 * OS1_S1 + 10) -
                                       p_over_q * *(b + 534 * OS1_S1 + 10);
            *(b + 430 * OS1_S1 + 23) =
                prefactor_x * *(b + 430 * OS1_S1 + 13) -
                p_over_q * *(b + 521 * OS1_S1 + 13) +
                one_over_two_q * *(b + 352 * OS1_S1 + 13) +
                one_over_two_q * *(b + 430 * OS1_S1 + 7);
            *(b + 430 * OS1_S1 + 24) = prefactor_z * *(b + 430 * OS1_S1 + 11) -
                                       p_over_q * *(b + 534 * OS1_S1 + 11);
            *(b + 430 * OS1_S1 + 25) = prefactor_z * *(b + 430 * OS1_S1 + 12) -
                                       p_over_q * *(b + 534 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 430 * OS1_S1 + 4);
            *(b + 430 * OS1_S1 + 26) =
                prefactor_x * *(b + 430 * OS1_S1 + 16) -
                p_over_q * *(b + 521 * OS1_S1 + 16) +
                one_over_two_q * *(b + 352 * OS1_S1 + 16);
            *(b + 430 * OS1_S1 + 27) = prefactor_z * *(b + 430 * OS1_S1 + 13) -
                                       p_over_q * *(b + 534 * OS1_S1 + 13);
            *(b + 430 * OS1_S1 + 28) =
                prefactor_x * *(b + 430 * OS1_S1 + 18) -
                p_over_q * *(b + 521 * OS1_S1 + 18) +
                one_over_two_q * *(b + 352 * OS1_S1 + 18);
            *(b + 430 * OS1_S1 + 29) =
                prefactor_x * *(b + 430 * OS1_S1 + 19) -
                p_over_q * *(b + 521 * OS1_S1 + 19) +
                one_over_two_q * *(b + 352 * OS1_S1 + 19);
            *(b + 430 * OS1_S1 + 30) =
                prefactor_y * *(b + 430 * OS1_S1 + 16) -
                p_over_q * *(b + 533 * OS1_S1 + 16) +
                11 * one_over_two_q * *(b + 341 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 430 * OS1_S1 + 7);
            *(b + 430 * OS1_S1 + 31) = prefactor_z * *(b + 430 * OS1_S1 + 16) -
                                       p_over_q * *(b + 534 * OS1_S1 + 16);
            *(b + 430 * OS1_S1 + 32) = prefactor_z * *(b + 430 * OS1_S1 + 17) -
                                       p_over_q * *(b + 534 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 430 * OS1_S1 + 7);
            *(b + 430 * OS1_S1 + 33) =
                prefactor_y * *(b + 430 * OS1_S1 + 19) -
                p_over_q * *(b + 533 * OS1_S1 + 19) +
                11 * one_over_two_q * *(b + 341 * OS1_S1 + 19);
            *(b + 430 * OS1_S1 + 34) =
                prefactor_z * *(b + 430 * OS1_S1 + 19) -
                p_over_q * *(b + 534 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 430 * OS1_S1 + 9);
            *(b + 431 * OS1_S1 + 20) =
                prefactor_x * *(b + 431 * OS1_S1 + 10) -
                p_over_q * *(b + 522 * OS1_S1 + 10) +
                one_over_two_q * *(b + 353 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 431 * OS1_S1 + 4);
            *(b + 431 * OS1_S1 + 21) =
                prefactor_y * *(b + 431 * OS1_S1 + 10) -
                p_over_q * *(b + 534 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 342 * OS1_S1 + 10);
            *(b + 431 * OS1_S1 + 22) =
                prefactor_z * *(b + 431 * OS1_S1 + 10) -
                p_over_q * *(b + 535 * OS1_S1 + 10) +
                one_over_two_q * *(b + 341 * OS1_S1 + 10);
            *(b + 431 * OS1_S1 + 23) =
                prefactor_x * *(b + 431 * OS1_S1 + 13) -
                p_over_q * *(b + 522 * OS1_S1 + 13) +
                one_over_two_q * *(b + 353 * OS1_S1 + 13) +
                one_over_two_q * *(b + 431 * OS1_S1 + 7);
            *(b + 431 * OS1_S1 + 24) =
                prefactor_z * *(b + 431 * OS1_S1 + 11) -
                p_over_q * *(b + 535 * OS1_S1 + 11) +
                one_over_two_q * *(b + 341 * OS1_S1 + 11);
            *(b + 431 * OS1_S1 + 25) =
                prefactor_z * *(b + 431 * OS1_S1 + 12) -
                p_over_q * *(b + 535 * OS1_S1 + 12) +
                one_over_two_q * *(b + 341 * OS1_S1 + 12) +
                one_over_two_q * *(b + 431 * OS1_S1 + 4);
            *(b + 431 * OS1_S1 + 26) =
                prefactor_x * *(b + 431 * OS1_S1 + 16) -
                p_over_q * *(b + 522 * OS1_S1 + 16) +
                one_over_two_q * *(b + 353 * OS1_S1 + 16);
            *(b + 431 * OS1_S1 + 27) =
                prefactor_z * *(b + 431 * OS1_S1 + 13) -
                p_over_q * *(b + 535 * OS1_S1 + 13) +
                one_over_two_q * *(b + 341 * OS1_S1 + 13);
            *(b + 431 * OS1_S1 + 28) =
                prefactor_x * *(b + 431 * OS1_S1 + 18) -
                p_over_q * *(b + 522 * OS1_S1 + 18) +
                one_over_two_q * *(b + 353 * OS1_S1 + 18);
            *(b + 431 * OS1_S1 + 29) =
                prefactor_x * *(b + 431 * OS1_S1 + 19) -
                p_over_q * *(b + 522 * OS1_S1 + 19) +
                one_over_two_q * *(b + 353 * OS1_S1 + 19);
            *(b + 431 * OS1_S1 + 30) =
                prefactor_y * *(b + 431 * OS1_S1 + 16) -
                p_over_q * *(b + 534 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 342 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 431 * OS1_S1 + 7);
            *(b + 431 * OS1_S1 + 31) =
                prefactor_z * *(b + 431 * OS1_S1 + 16) -
                p_over_q * *(b + 535 * OS1_S1 + 16) +
                one_over_two_q * *(b + 341 * OS1_S1 + 16);
            *(b + 431 * OS1_S1 + 32) =
                prefactor_z * *(b + 431 * OS1_S1 + 17) -
                p_over_q * *(b + 535 * OS1_S1 + 17) +
                one_over_two_q * *(b + 341 * OS1_S1 + 17) +
                one_over_two_q * *(b + 431 * OS1_S1 + 7);
            *(b + 431 * OS1_S1 + 33) =
                prefactor_y * *(b + 431 * OS1_S1 + 19) -
                p_over_q * *(b + 534 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 342 * OS1_S1 + 19);
            *(b + 431 * OS1_S1 + 34) =
                prefactor_z * *(b + 431 * OS1_S1 + 19) -
                p_over_q * *(b + 535 * OS1_S1 + 19) +
                one_over_two_q * *(b + 341 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 431 * OS1_S1 + 9);
            *(b + 432 * OS1_S1 + 20) =
                prefactor_x * *(b + 432 * OS1_S1 + 10) -
                p_over_q * *(b + 523 * OS1_S1 + 10) +
                one_over_two_q * *(b + 354 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 432 * OS1_S1 + 4);
            *(b + 432 * OS1_S1 + 21) =
                prefactor_y * *(b + 432 * OS1_S1 + 10) -
                p_over_q * *(b + 535 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 343 * OS1_S1 + 10);
            *(b + 432 * OS1_S1 + 22) =
                prefactor_z * *(b + 432 * OS1_S1 + 10) -
                p_over_q * *(b + 536 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 10);
            *(b + 432 * OS1_S1 + 23) =
                prefactor_x * *(b + 432 * OS1_S1 + 13) -
                p_over_q * *(b + 523 * OS1_S1 + 13) +
                one_over_two_q * *(b + 354 * OS1_S1 + 13) +
                one_over_two_q * *(b + 432 * OS1_S1 + 7);
            *(b + 432 * OS1_S1 + 24) =
                prefactor_z * *(b + 432 * OS1_S1 + 11) -
                p_over_q * *(b + 536 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 11);
            *(b + 432 * OS1_S1 + 25) =
                prefactor_x * *(b + 432 * OS1_S1 + 15) -
                p_over_q * *(b + 523 * OS1_S1 + 15) +
                one_over_two_q * *(b + 354 * OS1_S1 + 15) +
                one_over_two_q * *(b + 432 * OS1_S1 + 9);
            *(b + 432 * OS1_S1 + 26) =
                prefactor_x * *(b + 432 * OS1_S1 + 16) -
                p_over_q * *(b + 523 * OS1_S1 + 16) +
                one_over_two_q * *(b + 354 * OS1_S1 + 16);
            *(b + 432 * OS1_S1 + 27) =
                prefactor_x * *(b + 432 * OS1_S1 + 17) -
                p_over_q * *(b + 523 * OS1_S1 + 17) +
                one_over_two_q * *(b + 354 * OS1_S1 + 17);
            *(b + 432 * OS1_S1 + 28) =
                prefactor_x * *(b + 432 * OS1_S1 + 18) -
                p_over_q * *(b + 523 * OS1_S1 + 18) +
                one_over_two_q * *(b + 354 * OS1_S1 + 18);
            *(b + 432 * OS1_S1 + 29) =
                prefactor_x * *(b + 432 * OS1_S1 + 19) -
                p_over_q * *(b + 523 * OS1_S1 + 19) +
                one_over_two_q * *(b + 354 * OS1_S1 + 19);
            *(b + 432 * OS1_S1 + 30) =
                prefactor_y * *(b + 432 * OS1_S1 + 16) -
                p_over_q * *(b + 535 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 343 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 432 * OS1_S1 + 7);
            *(b + 432 * OS1_S1 + 31) =
                prefactor_z * *(b + 432 * OS1_S1 + 16) -
                p_over_q * *(b + 536 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 16);
            *(b + 432 * OS1_S1 + 32) =
                prefactor_z * *(b + 432 * OS1_S1 + 17) -
                p_over_q * *(b + 536 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 17) +
                one_over_two_q * *(b + 432 * OS1_S1 + 7);
            *(b + 432 * OS1_S1 + 33) =
                prefactor_y * *(b + 432 * OS1_S1 + 19) -
                p_over_q * *(b + 535 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 343 * OS1_S1 + 19);
            *(b + 432 * OS1_S1 + 34) =
                prefactor_z * *(b + 432 * OS1_S1 + 19) -
                p_over_q * *(b + 536 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 342 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 432 * OS1_S1 + 9);
            *(b + 433 * OS1_S1 + 20) =
                prefactor_x * *(b + 433 * OS1_S1 + 10) -
                p_over_q * *(b + 524 * OS1_S1 + 10) +
                one_over_two_q * *(b + 355 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 433 * OS1_S1 + 4);
            *(b + 433 * OS1_S1 + 21) =
                prefactor_y * *(b + 433 * OS1_S1 + 10) -
                p_over_q * *(b + 536 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 344 * OS1_S1 + 10);
            *(b + 433 * OS1_S1 + 22) =
                prefactor_z * *(b + 433 * OS1_S1 + 10) -
                p_over_q * *(b + 537 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 10);
            *(b + 433 * OS1_S1 + 23) =
                prefactor_x * *(b + 433 * OS1_S1 + 13) -
                p_over_q * *(b + 524 * OS1_S1 + 13) +
                one_over_two_q * *(b + 355 * OS1_S1 + 13) +
                one_over_two_q * *(b + 433 * OS1_S1 + 7);
            *(b + 433 * OS1_S1 + 24) =
                prefactor_z * *(b + 433 * OS1_S1 + 11) -
                p_over_q * *(b + 537 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 11);
            *(b + 433 * OS1_S1 + 25) =
                prefactor_x * *(b + 433 * OS1_S1 + 15) -
                p_over_q * *(b + 524 * OS1_S1 + 15) +
                one_over_two_q * *(b + 355 * OS1_S1 + 15) +
                one_over_two_q * *(b + 433 * OS1_S1 + 9);
            *(b + 433 * OS1_S1 + 26) =
                prefactor_x * *(b + 433 * OS1_S1 + 16) -
                p_over_q * *(b + 524 * OS1_S1 + 16) +
                one_over_two_q * *(b + 355 * OS1_S1 + 16);
            *(b + 433 * OS1_S1 + 27) =
                prefactor_x * *(b + 433 * OS1_S1 + 17) -
                p_over_q * *(b + 524 * OS1_S1 + 17) +
                one_over_two_q * *(b + 355 * OS1_S1 + 17);
            *(b + 433 * OS1_S1 + 28) =
                prefactor_x * *(b + 433 * OS1_S1 + 18) -
                p_over_q * *(b + 524 * OS1_S1 + 18) +
                one_over_two_q * *(b + 355 * OS1_S1 + 18);
            *(b + 433 * OS1_S1 + 29) =
                prefactor_x * *(b + 433 * OS1_S1 + 19) -
                p_over_q * *(b + 524 * OS1_S1 + 19) +
                one_over_two_q * *(b + 355 * OS1_S1 + 19);
            *(b + 433 * OS1_S1 + 30) =
                prefactor_y * *(b + 433 * OS1_S1 + 16) -
                p_over_q * *(b + 536 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 344 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 433 * OS1_S1 + 7);
            *(b + 433 * OS1_S1 + 31) =
                prefactor_z * *(b + 433 * OS1_S1 + 16) -
                p_over_q * *(b + 537 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 16);
            *(b + 433 * OS1_S1 + 32) =
                prefactor_z * *(b + 433 * OS1_S1 + 17) -
                p_over_q * *(b + 537 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 17) +
                one_over_two_q * *(b + 433 * OS1_S1 + 7);
            *(b + 433 * OS1_S1 + 33) =
                prefactor_y * *(b + 433 * OS1_S1 + 19) -
                p_over_q * *(b + 536 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 344 * OS1_S1 + 19);
            *(b + 433 * OS1_S1 + 34) =
                prefactor_z * *(b + 433 * OS1_S1 + 19) -
                p_over_q * *(b + 537 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 343 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 433 * OS1_S1 + 9);
            *(b + 434 * OS1_S1 + 20) =
                prefactor_x * *(b + 434 * OS1_S1 + 10) -
                p_over_q * *(b + 525 * OS1_S1 + 10) +
                one_over_two_q * *(b + 356 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 434 * OS1_S1 + 4);
            *(b + 434 * OS1_S1 + 21) =
                prefactor_y * *(b + 434 * OS1_S1 + 10) -
                p_over_q * *(b + 537 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 345 * OS1_S1 + 10);
            *(b + 434 * OS1_S1 + 22) =
                prefactor_z * *(b + 434 * OS1_S1 + 10) -
                p_over_q * *(b + 538 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 10);
            *(b + 434 * OS1_S1 + 23) =
                prefactor_x * *(b + 434 * OS1_S1 + 13) -
                p_over_q * *(b + 525 * OS1_S1 + 13) +
                one_over_two_q * *(b + 356 * OS1_S1 + 13) +
                one_over_two_q * *(b + 434 * OS1_S1 + 7);
            *(b + 434 * OS1_S1 + 24) =
                prefactor_z * *(b + 434 * OS1_S1 + 11) -
                p_over_q * *(b + 538 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 11);
            *(b + 434 * OS1_S1 + 25) =
                prefactor_x * *(b + 434 * OS1_S1 + 15) -
                p_over_q * *(b + 525 * OS1_S1 + 15) +
                one_over_two_q * *(b + 356 * OS1_S1 + 15) +
                one_over_two_q * *(b + 434 * OS1_S1 + 9);
            *(b + 434 * OS1_S1 + 26) =
                prefactor_x * *(b + 434 * OS1_S1 + 16) -
                p_over_q * *(b + 525 * OS1_S1 + 16) +
                one_over_two_q * *(b + 356 * OS1_S1 + 16);
            *(b + 434 * OS1_S1 + 27) =
                prefactor_x * *(b + 434 * OS1_S1 + 17) -
                p_over_q * *(b + 525 * OS1_S1 + 17) +
                one_over_two_q * *(b + 356 * OS1_S1 + 17);
            *(b + 434 * OS1_S1 + 28) =
                prefactor_x * *(b + 434 * OS1_S1 + 18) -
                p_over_q * *(b + 525 * OS1_S1 + 18) +
                one_over_two_q * *(b + 356 * OS1_S1 + 18);
            *(b + 434 * OS1_S1 + 29) =
                prefactor_x * *(b + 434 * OS1_S1 + 19) -
                p_over_q * *(b + 525 * OS1_S1 + 19) +
                one_over_two_q * *(b + 356 * OS1_S1 + 19);
            *(b + 434 * OS1_S1 + 30) =
                prefactor_y * *(b + 434 * OS1_S1 + 16) -
                p_over_q * *(b + 537 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 345 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 434 * OS1_S1 + 7);
            *(b + 434 * OS1_S1 + 31) =
                prefactor_z * *(b + 434 * OS1_S1 + 16) -
                p_over_q * *(b + 538 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 16);
            *(b + 434 * OS1_S1 + 32) =
                prefactor_z * *(b + 434 * OS1_S1 + 17) -
                p_over_q * *(b + 538 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 17) +
                one_over_two_q * *(b + 434 * OS1_S1 + 7);
            *(b + 434 * OS1_S1 + 33) =
                prefactor_y * *(b + 434 * OS1_S1 + 19) -
                p_over_q * *(b + 537 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 345 * OS1_S1 + 19);
            *(b + 434 * OS1_S1 + 34) =
                prefactor_z * *(b + 434 * OS1_S1 + 19) -
                p_over_q * *(b + 538 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 344 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 434 * OS1_S1 + 9);
            *(b + 435 * OS1_S1 + 20) =
                prefactor_x * *(b + 435 * OS1_S1 + 10) -
                p_over_q * *(b + 526 * OS1_S1 + 10) +
                one_over_two_q * *(b + 357 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 435 * OS1_S1 + 4);
            *(b + 435 * OS1_S1 + 21) =
                prefactor_y * *(b + 435 * OS1_S1 + 10) -
                p_over_q * *(b + 538 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 346 * OS1_S1 + 10);
            *(b + 435 * OS1_S1 + 22) =
                prefactor_z * *(b + 435 * OS1_S1 + 10) -
                p_over_q * *(b + 539 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 345 * OS1_S1 + 10);
            *(b + 435 * OS1_S1 + 23) =
                prefactor_x * *(b + 435 * OS1_S1 + 13) -
                p_over_q * *(b + 526 * OS1_S1 + 13) +
                one_over_two_q * *(b + 357 * OS1_S1 + 13) +
                one_over_two_q * *(b + 435 * OS1_S1 + 7);
            *(b + 435 * OS1_S1 + 24) =
                prefactor_z * *(b + 435 * OS1_S1 + 11) -
                p_over_q * *(b + 539 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 345 * OS1_S1 + 11);
            *(b + 435 * OS1_S1 + 25) =
                prefactor_x * *(b + 435 * OS1_S1 + 15) -
                p_over_q * *(b + 526 * OS1_S1 + 15) +
                one_over_two_q * *(b + 357 * OS1_S1 + 15) +
                one_over_two_q * *(b + 435 * OS1_S1 + 9);
            *(b + 435 * OS1_S1 + 26) =
                prefactor_x * *(b + 435 * OS1_S1 + 16) -
                p_over_q * *(b + 526 * OS1_S1 + 16) +
                one_over_two_q * *(b + 357 * OS1_S1 + 16);
            *(b + 435 * OS1_S1 + 27) =
                prefactor_x * *(b + 435 * OS1_S1 + 17) -
                p_over_q * *(b + 526 * OS1_S1 + 17) +
                one_over_two_q * *(b + 357 * OS1_S1 + 17);
            *(b + 435 * OS1_S1 + 28) =
                prefactor_x * *(b + 435 * OS1_S1 + 18) -
                p_over_q * *(b + 526 * OS1_S1 + 18) +
                one_over_two_q * *(b + 357 * OS1_S1 + 18);
            *(b + 435 * OS1_S1 + 29) =
                prefactor_x * *(b + 435 * OS1_S1 + 19) -
                p_over_q * *(b + 526 * OS1_S1 + 19) +
                one_over_two_q * *(b + 357 * OS1_S1 + 19);
            *(b + 435 * OS1_S1 + 30) =
                prefactor_y * *(b + 435 * OS1_S1 + 16) -
                p_over_q * *(b + 538 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 346 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 435 * OS1_S1 + 7);
            *(b + 435 * OS1_S1 + 31) =
                prefactor_z * *(b + 435 * OS1_S1 + 16) -
                p_over_q * *(b + 539 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 345 * OS1_S1 + 16);
            *(b + 435 * OS1_S1 + 32) =
                prefactor_z * *(b + 435 * OS1_S1 + 17) -
                p_over_q * *(b + 539 * OS1_S1 + 17) +
                5 * one_over_two_q * *(b + 345 * OS1_S1 + 17) +
                one_over_two_q * *(b + 435 * OS1_S1 + 7);
            *(b + 435 * OS1_S1 + 33) =
                prefactor_y * *(b + 435 * OS1_S1 + 19) -
                p_over_q * *(b + 538 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 346 * OS1_S1 + 19);
            *(b + 435 * OS1_S1 + 34) =
                prefactor_z * *(b + 435 * OS1_S1 + 19) -
                p_over_q * *(b + 539 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 345 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 435 * OS1_S1 + 9);
            *(b + 436 * OS1_S1 + 20) =
                prefactor_x * *(b + 436 * OS1_S1 + 10) -
                p_over_q * *(b + 527 * OS1_S1 + 10) +
                one_over_two_q * *(b + 358 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 436 * OS1_S1 + 4);
            *(b + 436 * OS1_S1 + 21) =
                prefactor_y * *(b + 436 * OS1_S1 + 10) -
                p_over_q * *(b + 539 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 347 * OS1_S1 + 10);
            *(b + 436 * OS1_S1 + 22) =
                prefactor_z * *(b + 436 * OS1_S1 + 10) -
                p_over_q * *(b + 540 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 346 * OS1_S1 + 10);
            *(b + 436 * OS1_S1 + 23) =
                prefactor_x * *(b + 436 * OS1_S1 + 13) -
                p_over_q * *(b + 527 * OS1_S1 + 13) +
                one_over_two_q * *(b + 358 * OS1_S1 + 13) +
                one_over_two_q * *(b + 436 * OS1_S1 + 7);
            *(b + 436 * OS1_S1 + 24) =
                prefactor_y * *(b + 436 * OS1_S1 + 12) -
                p_over_q * *(b + 539 * OS1_S1 + 12) +
                5 * one_over_two_q * *(b + 347 * OS1_S1 + 12);
            *(b + 436 * OS1_S1 + 25) =
                prefactor_x * *(b + 436 * OS1_S1 + 15) -
                p_over_q * *(b + 527 * OS1_S1 + 15) +
                one_over_two_q * *(b + 358 * OS1_S1 + 15) +
                one_over_two_q * *(b + 436 * OS1_S1 + 9);
            *(b + 436 * OS1_S1 + 26) =
                prefactor_x * *(b + 436 * OS1_S1 + 16) -
                p_over_q * *(b + 527 * OS1_S1 + 16) +
                one_over_two_q * *(b + 358 * OS1_S1 + 16);
            *(b + 436 * OS1_S1 + 27) =
                prefactor_x * *(b + 436 * OS1_S1 + 17) -
                p_over_q * *(b + 527 * OS1_S1 + 17) +
                one_over_two_q * *(b + 358 * OS1_S1 + 17);
            *(b + 436 * OS1_S1 + 28) =
                prefactor_x * *(b + 436 * OS1_S1 + 18) -
                p_over_q * *(b + 527 * OS1_S1 + 18) +
                one_over_two_q * *(b + 358 * OS1_S1 + 18);
            *(b + 436 * OS1_S1 + 29) =
                prefactor_x * *(b + 436 * OS1_S1 + 19) -
                p_over_q * *(b + 527 * OS1_S1 + 19) +
                one_over_two_q * *(b + 358 * OS1_S1 + 19);
            *(b + 436 * OS1_S1 + 30) =
                prefactor_y * *(b + 436 * OS1_S1 + 16) -
                p_over_q * *(b + 539 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 347 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 436 * OS1_S1 + 7);
            *(b + 436 * OS1_S1 + 31) =
                prefactor_z * *(b + 436 * OS1_S1 + 16) -
                p_over_q * *(b + 540 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 346 * OS1_S1 + 16);
            *(b + 436 * OS1_S1 + 32) =
                prefactor_y * *(b + 436 * OS1_S1 + 18) -
                p_over_q * *(b + 539 * OS1_S1 + 18) +
                5 * one_over_two_q * *(b + 347 * OS1_S1 + 18) +
                one_over_two_q * *(b + 436 * OS1_S1 + 9);
            *(b + 436 * OS1_S1 + 33) =
                prefactor_y * *(b + 436 * OS1_S1 + 19) -
                p_over_q * *(b + 539 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 347 * OS1_S1 + 19);
            *(b + 436 * OS1_S1 + 34) =
                prefactor_z * *(b + 436 * OS1_S1 + 19) -
                p_over_q * *(b + 540 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 346 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 436 * OS1_S1 + 9);
            *(b + 437 * OS1_S1 + 20) =
                prefactor_x * *(b + 437 * OS1_S1 + 10) -
                p_over_q * *(b + 528 * OS1_S1 + 10) +
                one_over_two_q * *(b + 359 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 437 * OS1_S1 + 4);
            *(b + 437 * OS1_S1 + 21) =
                prefactor_y * *(b + 437 * OS1_S1 + 10) -
                p_over_q * *(b + 540 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 10);
            *(b + 437 * OS1_S1 + 22) =
                prefactor_z * *(b + 437 * OS1_S1 + 10) -
                p_over_q * *(b + 541 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 347 * OS1_S1 + 10);
            *(b + 437 * OS1_S1 + 23) =
                prefactor_x * *(b + 437 * OS1_S1 + 13) -
                p_over_q * *(b + 528 * OS1_S1 + 13) +
                one_over_two_q * *(b + 359 * OS1_S1 + 13) +
                one_over_two_q * *(b + 437 * OS1_S1 + 7);
            *(b + 437 * OS1_S1 + 24) =
                prefactor_y * *(b + 437 * OS1_S1 + 12) -
                p_over_q * *(b + 540 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 12);
            *(b + 437 * OS1_S1 + 25) =
                prefactor_x * *(b + 437 * OS1_S1 + 15) -
                p_over_q * *(b + 528 * OS1_S1 + 15) +
                one_over_two_q * *(b + 359 * OS1_S1 + 15) +
                one_over_two_q * *(b + 437 * OS1_S1 + 9);
            *(b + 437 * OS1_S1 + 26) =
                prefactor_x * *(b + 437 * OS1_S1 + 16) -
                p_over_q * *(b + 528 * OS1_S1 + 16) +
                one_over_two_q * *(b + 359 * OS1_S1 + 16);
            *(b + 437 * OS1_S1 + 27) =
                prefactor_x * *(b + 437 * OS1_S1 + 17) -
                p_over_q * *(b + 528 * OS1_S1 + 17) +
                one_over_two_q * *(b + 359 * OS1_S1 + 17);
            *(b + 437 * OS1_S1 + 28) =
                prefactor_x * *(b + 437 * OS1_S1 + 18) -
                p_over_q * *(b + 528 * OS1_S1 + 18) +
                one_over_two_q * *(b + 359 * OS1_S1 + 18);
            *(b + 437 * OS1_S1 + 29) =
                prefactor_x * *(b + 437 * OS1_S1 + 19) -
                p_over_q * *(b + 528 * OS1_S1 + 19) +
                one_over_two_q * *(b + 359 * OS1_S1 + 19);
            *(b + 437 * OS1_S1 + 30) =
                prefactor_y * *(b + 437 * OS1_S1 + 16) -
                p_over_q * *(b + 540 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 437 * OS1_S1 + 7);
            *(b + 437 * OS1_S1 + 31) =
                prefactor_z * *(b + 437 * OS1_S1 + 16) -
                p_over_q * *(b + 541 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 347 * OS1_S1 + 16);
            *(b + 437 * OS1_S1 + 32) =
                prefactor_y * *(b + 437 * OS1_S1 + 18) -
                p_over_q * *(b + 540 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 18) +
                one_over_two_q * *(b + 437 * OS1_S1 + 9);
            *(b + 437 * OS1_S1 + 33) =
                prefactor_y * *(b + 437 * OS1_S1 + 19) -
                p_over_q * *(b + 540 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 348 * OS1_S1 + 19);
            *(b + 437 * OS1_S1 + 34) =
                prefactor_z * *(b + 437 * OS1_S1 + 19) -
                p_over_q * *(b + 541 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 347 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 437 * OS1_S1 + 9);
            *(b + 438 * OS1_S1 + 20) =
                prefactor_x * *(b + 438 * OS1_S1 + 10) -
                p_over_q * *(b + 529 * OS1_S1 + 10) +
                one_over_two_q * *(b + 360 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 438 * OS1_S1 + 4);
            *(b + 438 * OS1_S1 + 21) =
                prefactor_y * *(b + 438 * OS1_S1 + 10) -
                p_over_q * *(b + 541 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 10);
            *(b + 438 * OS1_S1 + 22) =
                prefactor_z * *(b + 438 * OS1_S1 + 10) -
                p_over_q * *(b + 542 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 348 * OS1_S1 + 10);
            *(b + 438 * OS1_S1 + 23) =
                prefactor_x * *(b + 438 * OS1_S1 + 13) -
                p_over_q * *(b + 529 * OS1_S1 + 13) +
                one_over_two_q * *(b + 360 * OS1_S1 + 13) +
                one_over_two_q * *(b + 438 * OS1_S1 + 7);
            *(b + 438 * OS1_S1 + 24) =
                prefactor_y * *(b + 438 * OS1_S1 + 12) -
                p_over_q * *(b + 541 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 12);
            *(b + 438 * OS1_S1 + 25) =
                prefactor_x * *(b + 438 * OS1_S1 + 15) -
                p_over_q * *(b + 529 * OS1_S1 + 15) +
                one_over_two_q * *(b + 360 * OS1_S1 + 15) +
                one_over_two_q * *(b + 438 * OS1_S1 + 9);
            *(b + 438 * OS1_S1 + 26) =
                prefactor_x * *(b + 438 * OS1_S1 + 16) -
                p_over_q * *(b + 529 * OS1_S1 + 16) +
                one_over_two_q * *(b + 360 * OS1_S1 + 16);
            *(b + 438 * OS1_S1 + 27) =
                prefactor_x * *(b + 438 * OS1_S1 + 17) -
                p_over_q * *(b + 529 * OS1_S1 + 17) +
                one_over_two_q * *(b + 360 * OS1_S1 + 17);
            *(b + 438 * OS1_S1 + 28) =
                prefactor_x * *(b + 438 * OS1_S1 + 18) -
                p_over_q * *(b + 529 * OS1_S1 + 18) +
                one_over_two_q * *(b + 360 * OS1_S1 + 18);
            *(b + 438 * OS1_S1 + 29) =
                prefactor_x * *(b + 438 * OS1_S1 + 19) -
                p_over_q * *(b + 529 * OS1_S1 + 19) +
                one_over_two_q * *(b + 360 * OS1_S1 + 19);
            *(b + 438 * OS1_S1 + 30) =
                prefactor_y * *(b + 438 * OS1_S1 + 16) -
                p_over_q * *(b + 541 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 438 * OS1_S1 + 7);
            *(b + 438 * OS1_S1 + 31) =
                prefactor_z * *(b + 438 * OS1_S1 + 16) -
                p_over_q * *(b + 542 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 348 * OS1_S1 + 16);
            *(b + 438 * OS1_S1 + 32) =
                prefactor_y * *(b + 438 * OS1_S1 + 18) -
                p_over_q * *(b + 541 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 18) +
                one_over_two_q * *(b + 438 * OS1_S1 + 9);
            *(b + 438 * OS1_S1 + 33) =
                prefactor_y * *(b + 438 * OS1_S1 + 19) -
                p_over_q * *(b + 541 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 349 * OS1_S1 + 19);
            *(b + 438 * OS1_S1 + 34) =
                prefactor_z * *(b + 438 * OS1_S1 + 19) -
                p_over_q * *(b + 542 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 348 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 438 * OS1_S1 + 9);
            *(b + 439 * OS1_S1 + 20) =
                prefactor_x * *(b + 439 * OS1_S1 + 10) -
                p_over_q * *(b + 530 * OS1_S1 + 10) +
                one_over_two_q * *(b + 361 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 439 * OS1_S1 + 4);
            *(b + 439 * OS1_S1 + 21) =
                prefactor_y * *(b + 439 * OS1_S1 + 10) -
                p_over_q * *(b + 542 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 10);
            *(b + 439 * OS1_S1 + 22) =
                prefactor_z * *(b + 439 * OS1_S1 + 10) -
                p_over_q * *(b + 543 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 349 * OS1_S1 + 10);
            *(b + 439 * OS1_S1 + 23) =
                prefactor_x * *(b + 439 * OS1_S1 + 13) -
                p_over_q * *(b + 530 * OS1_S1 + 13) +
                one_over_two_q * *(b + 361 * OS1_S1 + 13) +
                one_over_two_q * *(b + 439 * OS1_S1 + 7);
            *(b + 439 * OS1_S1 + 24) =
                prefactor_y * *(b + 439 * OS1_S1 + 12) -
                p_over_q * *(b + 542 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 12);
            *(b + 439 * OS1_S1 + 25) =
                prefactor_x * *(b + 439 * OS1_S1 + 15) -
                p_over_q * *(b + 530 * OS1_S1 + 15) +
                one_over_two_q * *(b + 361 * OS1_S1 + 15) +
                one_over_two_q * *(b + 439 * OS1_S1 + 9);
            *(b + 439 * OS1_S1 + 26) =
                prefactor_x * *(b + 439 * OS1_S1 + 16) -
                p_over_q * *(b + 530 * OS1_S1 + 16) +
                one_over_two_q * *(b + 361 * OS1_S1 + 16);
            *(b + 439 * OS1_S1 + 27) =
                prefactor_x * *(b + 439 * OS1_S1 + 17) -
                p_over_q * *(b + 530 * OS1_S1 + 17) +
                one_over_two_q * *(b + 361 * OS1_S1 + 17);
            *(b + 439 * OS1_S1 + 28) =
                prefactor_x * *(b + 439 * OS1_S1 + 18) -
                p_over_q * *(b + 530 * OS1_S1 + 18) +
                one_over_two_q * *(b + 361 * OS1_S1 + 18);
            *(b + 439 * OS1_S1 + 29) =
                prefactor_x * *(b + 439 * OS1_S1 + 19) -
                p_over_q * *(b + 530 * OS1_S1 + 19) +
                one_over_two_q * *(b + 361 * OS1_S1 + 19);
            *(b + 439 * OS1_S1 + 30) =
                prefactor_y * *(b + 439 * OS1_S1 + 16) -
                p_over_q * *(b + 542 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 439 * OS1_S1 + 7);
            *(b + 439 * OS1_S1 + 31) =
                prefactor_z * *(b + 439 * OS1_S1 + 16) -
                p_over_q * *(b + 543 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 349 * OS1_S1 + 16);
            *(b + 439 * OS1_S1 + 32) =
                prefactor_y * *(b + 439 * OS1_S1 + 18) -
                p_over_q * *(b + 542 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 18) +
                one_over_two_q * *(b + 439 * OS1_S1 + 9);
            *(b + 439 * OS1_S1 + 33) =
                prefactor_y * *(b + 439 * OS1_S1 + 19) -
                p_over_q * *(b + 542 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 350 * OS1_S1 + 19);
            *(b + 439 * OS1_S1 + 34) =
                prefactor_z * *(b + 439 * OS1_S1 + 19) -
                p_over_q * *(b + 543 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 349 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 439 * OS1_S1 + 9);
            *(b + 440 * OS1_S1 + 20) =
                prefactor_x * *(b + 440 * OS1_S1 + 10) -
                p_over_q * *(b + 531 * OS1_S1 + 10) +
                one_over_two_q * *(b + 362 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 440 * OS1_S1 + 4);
            *(b + 440 * OS1_S1 + 21) =
                prefactor_y * *(b + 440 * OS1_S1 + 10) -
                p_over_q * *(b + 543 * OS1_S1 + 10) +
                one_over_two_q * *(b + 351 * OS1_S1 + 10);
            *(b + 440 * OS1_S1 + 22) =
                prefactor_z * *(b + 440 * OS1_S1 + 10) -
                p_over_q * *(b + 544 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 350 * OS1_S1 + 10);
            *(b + 440 * OS1_S1 + 23) =
                prefactor_y * *(b + 440 * OS1_S1 + 11) -
                p_over_q * *(b + 543 * OS1_S1 + 11) +
                one_over_two_q * *(b + 351 * OS1_S1 + 11) +
                one_over_two_q * *(b + 440 * OS1_S1 + 4);
            *(b + 440 * OS1_S1 + 24) =
                prefactor_y * *(b + 440 * OS1_S1 + 12) -
                p_over_q * *(b + 543 * OS1_S1 + 12) +
                one_over_two_q * *(b + 351 * OS1_S1 + 12);
            *(b + 440 * OS1_S1 + 25) =
                prefactor_x * *(b + 440 * OS1_S1 + 15) -
                p_over_q * *(b + 531 * OS1_S1 + 15) +
                one_over_two_q * *(b + 362 * OS1_S1 + 15) +
                one_over_two_q * *(b + 440 * OS1_S1 + 9);
            *(b + 440 * OS1_S1 + 26) =
                prefactor_x * *(b + 440 * OS1_S1 + 16) -
                p_over_q * *(b + 531 * OS1_S1 + 16) +
                one_over_two_q * *(b + 362 * OS1_S1 + 16);
            *(b + 440 * OS1_S1 + 27) =
                prefactor_x * *(b + 440 * OS1_S1 + 17) -
                p_over_q * *(b + 531 * OS1_S1 + 17) +
                one_over_two_q * *(b + 362 * OS1_S1 + 17);
            *(b + 440 * OS1_S1 + 28) =
                prefactor_y * *(b + 440 * OS1_S1 + 15) -
                p_over_q * *(b + 543 * OS1_S1 + 15) +
                one_over_two_q * *(b + 351 * OS1_S1 + 15);
            *(b + 440 * OS1_S1 + 29) =
                prefactor_x * *(b + 440 * OS1_S1 + 19) -
                p_over_q * *(b + 531 * OS1_S1 + 19) +
                one_over_two_q * *(b + 362 * OS1_S1 + 19);
            *(b + 440 * OS1_S1 + 30) =
                prefactor_y * *(b + 440 * OS1_S1 + 16) -
                p_over_q * *(b + 543 * OS1_S1 + 16) +
                one_over_two_q * *(b + 351 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 440 * OS1_S1 + 7);
            *(b + 440 * OS1_S1 + 31) =
                prefactor_z * *(b + 440 * OS1_S1 + 16) -
                p_over_q * *(b + 544 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 350 * OS1_S1 + 16);
            *(b + 440 * OS1_S1 + 32) =
                prefactor_y * *(b + 440 * OS1_S1 + 18) -
                p_over_q * *(b + 543 * OS1_S1 + 18) +
                one_over_two_q * *(b + 351 * OS1_S1 + 18) +
                one_over_two_q * *(b + 440 * OS1_S1 + 9);
            *(b + 440 * OS1_S1 + 33) =
                prefactor_y * *(b + 440 * OS1_S1 + 19) -
                p_over_q * *(b + 543 * OS1_S1 + 19) +
                one_over_two_q * *(b + 351 * OS1_S1 + 19);
            *(b + 440 * OS1_S1 + 34) =
                prefactor_z * *(b + 440 * OS1_S1 + 19) -
                p_over_q * *(b + 544 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 350 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 440 * OS1_S1 + 9);
            *(b + 441 * OS1_S1 + 20) =
                prefactor_x * *(b + 441 * OS1_S1 + 10) -
                p_over_q * *(b + 532 * OS1_S1 + 10) +
                one_over_two_q * *(b + 363 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 441 * OS1_S1 + 4);
            *(b + 441 * OS1_S1 + 21) = prefactor_y * *(b + 441 * OS1_S1 + 10) -
                                       p_over_q * *(b + 544 * OS1_S1 + 10);
            *(b + 441 * OS1_S1 + 22) =
                prefactor_z * *(b + 441 * OS1_S1 + 10) -
                p_over_q * *(b + 545 * OS1_S1 + 10) +
                11 * one_over_two_q * *(b + 351 * OS1_S1 + 10);
            *(b + 441 * OS1_S1 + 23) = prefactor_y * *(b + 441 * OS1_S1 + 11) -
                                       p_over_q * *(b + 544 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 441 * OS1_S1 + 4);
            *(b + 441 * OS1_S1 + 24) = prefactor_y * *(b + 441 * OS1_S1 + 12) -
                                       p_over_q * *(b + 544 * OS1_S1 + 12);
            *(b + 441 * OS1_S1 + 25) =
                prefactor_x * *(b + 441 * OS1_S1 + 15) -
                p_over_q * *(b + 532 * OS1_S1 + 15) +
                one_over_two_q * *(b + 363 * OS1_S1 + 15) +
                one_over_two_q * *(b + 441 * OS1_S1 + 9);
            *(b + 441 * OS1_S1 + 26) =
                prefactor_x * *(b + 441 * OS1_S1 + 16) -
                p_over_q * *(b + 532 * OS1_S1 + 16) +
                one_over_two_q * *(b + 363 * OS1_S1 + 16);
            *(b + 441 * OS1_S1 + 27) =
                prefactor_x * *(b + 441 * OS1_S1 + 17) -
                p_over_q * *(b + 532 * OS1_S1 + 17) +
                one_over_two_q * *(b + 363 * OS1_S1 + 17);
            *(b + 441 * OS1_S1 + 28) = prefactor_y * *(b + 441 * OS1_S1 + 15) -
                                       p_over_q * *(b + 544 * OS1_S1 + 15);
            *(b + 441 * OS1_S1 + 29) =
                prefactor_x * *(b + 441 * OS1_S1 + 19) -
                p_over_q * *(b + 532 * OS1_S1 + 19) +
                one_over_two_q * *(b + 363 * OS1_S1 + 19);
            *(b + 441 * OS1_S1 + 30) =
                prefactor_y * *(b + 441 * OS1_S1 + 16) -
                p_over_q * *(b + 544 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 441 * OS1_S1 + 7);
            *(b + 441 * OS1_S1 + 31) =
                prefactor_z * *(b + 441 * OS1_S1 + 16) -
                p_over_q * *(b + 545 * OS1_S1 + 16) +
                11 * one_over_two_q * *(b + 351 * OS1_S1 + 16);
            *(b + 441 * OS1_S1 + 32) = prefactor_y * *(b + 441 * OS1_S1 + 18) -
                                       p_over_q * *(b + 544 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 441 * OS1_S1 + 9);
            *(b + 441 * OS1_S1 + 33) = prefactor_y * *(b + 441 * OS1_S1 + 19) -
                                       p_over_q * *(b + 544 * OS1_S1 + 19);
            *(b + 441 * OS1_S1 + 34) =
                prefactor_z * *(b + 441 * OS1_S1 + 19) -
                p_over_q * *(b + 545 * OS1_S1 + 19) +
                11 * one_over_two_q * *(b + 351 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 441 * OS1_S1 + 9);
            *(b + 442 * OS1_S1 + 20) =
                prefactor_x * *(b + 442 * OS1_S1 + 10) -
                p_over_q * *(b + 533 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 442 * OS1_S1 + 4);
            *(b + 442 * OS1_S1 + 21) =
                prefactor_y * *(b + 442 * OS1_S1 + 10) -
                p_over_q * *(b + 546 * OS1_S1 + 10) +
                12 * one_over_two_q * *(b + 352 * OS1_S1 + 10);
            *(b + 442 * OS1_S1 + 22) = prefactor_z * *(b + 442 * OS1_S1 + 10) -
                                       p_over_q * *(b + 547 * OS1_S1 + 10);
            *(b + 442 * OS1_S1 + 23) = prefactor_x * *(b + 442 * OS1_S1 + 13) -
                                       p_over_q * *(b + 533 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 442 * OS1_S1 + 7);
            *(b + 442 * OS1_S1 + 24) = prefactor_z * *(b + 442 * OS1_S1 + 11) -
                                       p_over_q * *(b + 547 * OS1_S1 + 11);
            *(b + 442 * OS1_S1 + 25) = prefactor_z * *(b + 442 * OS1_S1 + 12) -
                                       p_over_q * *(b + 547 * OS1_S1 + 12) +
                                       one_over_two_q * *(b + 442 * OS1_S1 + 4);
            *(b + 442 * OS1_S1 + 26) = prefactor_x * *(b + 442 * OS1_S1 + 16) -
                                       p_over_q * *(b + 533 * OS1_S1 + 16);
            *(b + 442 * OS1_S1 + 27) = prefactor_z * *(b + 442 * OS1_S1 + 13) -
                                       p_over_q * *(b + 547 * OS1_S1 + 13);
            *(b + 442 * OS1_S1 + 28) = prefactor_x * *(b + 442 * OS1_S1 + 18) -
                                       p_over_q * *(b + 533 * OS1_S1 + 18);
            *(b + 442 * OS1_S1 + 29) = prefactor_x * *(b + 442 * OS1_S1 + 19) -
                                       p_over_q * *(b + 533 * OS1_S1 + 19);
            *(b + 442 * OS1_S1 + 30) =
                prefactor_y * *(b + 442 * OS1_S1 + 16) -
                p_over_q * *(b + 546 * OS1_S1 + 16) +
                12 * one_over_two_q * *(b + 352 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 442 * OS1_S1 + 7);
            *(b + 442 * OS1_S1 + 31) = prefactor_z * *(b + 442 * OS1_S1 + 16) -
                                       p_over_q * *(b + 547 * OS1_S1 + 16);
            *(b + 442 * OS1_S1 + 32) = prefactor_z * *(b + 442 * OS1_S1 + 17) -
                                       p_over_q * *(b + 547 * OS1_S1 + 17) +
                                       one_over_two_q * *(b + 442 * OS1_S1 + 7);
            *(b + 442 * OS1_S1 + 33) =
                prefactor_y * *(b + 442 * OS1_S1 + 19) -
                p_over_q * *(b + 546 * OS1_S1 + 19) +
                12 * one_over_two_q * *(b + 352 * OS1_S1 + 19);
            *(b + 442 * OS1_S1 + 34) =
                prefactor_z * *(b + 442 * OS1_S1 + 19) -
                p_over_q * *(b + 547 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 442 * OS1_S1 + 9);
            *(b + 443 * OS1_S1 + 20) =
                prefactor_x * *(b + 443 * OS1_S1 + 10) -
                p_over_q * *(b + 534 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 443 * OS1_S1 + 4);
            *(b + 443 * OS1_S1 + 21) =
                prefactor_y * *(b + 443 * OS1_S1 + 10) -
                p_over_q * *(b + 547 * OS1_S1 + 10) +
                11 * one_over_two_q * *(b + 353 * OS1_S1 + 10);
            *(b + 443 * OS1_S1 + 22) =
                prefactor_z * *(b + 443 * OS1_S1 + 10) -
                p_over_q * *(b + 548 * OS1_S1 + 10) +
                one_over_two_q * *(b + 352 * OS1_S1 + 10);
            *(b + 443 * OS1_S1 + 23) = prefactor_x * *(b + 443 * OS1_S1 + 13) -
                                       p_over_q * *(b + 534 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 443 * OS1_S1 + 7);
            *(b + 443 * OS1_S1 + 24) =
                prefactor_z * *(b + 443 * OS1_S1 + 11) -
                p_over_q * *(b + 548 * OS1_S1 + 11) +
                one_over_two_q * *(b + 352 * OS1_S1 + 11);
            *(b + 443 * OS1_S1 + 25) = prefactor_x * *(b + 443 * OS1_S1 + 15) -
                                       p_over_q * *(b + 534 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 443 * OS1_S1 + 9);
            *(b + 443 * OS1_S1 + 26) = prefactor_x * *(b + 443 * OS1_S1 + 16) -
                                       p_over_q * *(b + 534 * OS1_S1 + 16);
            *(b + 443 * OS1_S1 + 27) = prefactor_x * *(b + 443 * OS1_S1 + 17) -
                                       p_over_q * *(b + 534 * OS1_S1 + 17);
            *(b + 443 * OS1_S1 + 28) = prefactor_x * *(b + 443 * OS1_S1 + 18) -
                                       p_over_q * *(b + 534 * OS1_S1 + 18);
            *(b + 443 * OS1_S1 + 29) = prefactor_x * *(b + 443 * OS1_S1 + 19) -
                                       p_over_q * *(b + 534 * OS1_S1 + 19);
            *(b + 443 * OS1_S1 + 30) =
                prefactor_y * *(b + 443 * OS1_S1 + 16) -
                p_over_q * *(b + 547 * OS1_S1 + 16) +
                11 * one_over_two_q * *(b + 353 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 443 * OS1_S1 + 7);
            *(b + 443 * OS1_S1 + 31) =
                prefactor_z * *(b + 443 * OS1_S1 + 16) -
                p_over_q * *(b + 548 * OS1_S1 + 16) +
                one_over_two_q * *(b + 352 * OS1_S1 + 16);
            *(b + 443 * OS1_S1 + 32) =
                prefactor_z * *(b + 443 * OS1_S1 + 17) -
                p_over_q * *(b + 548 * OS1_S1 + 17) +
                one_over_two_q * *(b + 352 * OS1_S1 + 17) +
                one_over_two_q * *(b + 443 * OS1_S1 + 7);
            *(b + 443 * OS1_S1 + 33) =
                prefactor_y * *(b + 443 * OS1_S1 + 19) -
                p_over_q * *(b + 547 * OS1_S1 + 19) +
                11 * one_over_two_q * *(b + 353 * OS1_S1 + 19);
            *(b + 443 * OS1_S1 + 34) =
                prefactor_z * *(b + 443 * OS1_S1 + 19) -
                p_over_q * *(b + 548 * OS1_S1 + 19) +
                one_over_two_q * *(b + 352 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 443 * OS1_S1 + 9);
            *(b + 444 * OS1_S1 + 20) =
                prefactor_x * *(b + 444 * OS1_S1 + 10) -
                p_over_q * *(b + 535 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 444 * OS1_S1 + 4);
            *(b + 444 * OS1_S1 + 21) =
                prefactor_y * *(b + 444 * OS1_S1 + 10) -
                p_over_q * *(b + 548 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 354 * OS1_S1 + 10);
            *(b + 444 * OS1_S1 + 22) =
                prefactor_z * *(b + 444 * OS1_S1 + 10) -
                p_over_q * *(b + 549 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 353 * OS1_S1 + 10);
            *(b + 444 * OS1_S1 + 23) = prefactor_x * *(b + 444 * OS1_S1 + 13) -
                                       p_over_q * *(b + 535 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 444 * OS1_S1 + 7);
            *(b + 444 * OS1_S1 + 24) =
                prefactor_z * *(b + 444 * OS1_S1 + 11) -
                p_over_q * *(b + 549 * OS1_S1 + 11) +
                2 * one_over_two_q * *(b + 353 * OS1_S1 + 11);
            *(b + 444 * OS1_S1 + 25) = prefactor_x * *(b + 444 * OS1_S1 + 15) -
                                       p_over_q * *(b + 535 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 444 * OS1_S1 + 9);
            *(b + 444 * OS1_S1 + 26) = prefactor_x * *(b + 444 * OS1_S1 + 16) -
                                       p_over_q * *(b + 535 * OS1_S1 + 16);
            *(b + 444 * OS1_S1 + 27) = prefactor_x * *(b + 444 * OS1_S1 + 17) -
                                       p_over_q * *(b + 535 * OS1_S1 + 17);
            *(b + 444 * OS1_S1 + 28) = prefactor_x * *(b + 444 * OS1_S1 + 18) -
                                       p_over_q * *(b + 535 * OS1_S1 + 18);
            *(b + 444 * OS1_S1 + 29) = prefactor_x * *(b + 444 * OS1_S1 + 19) -
                                       p_over_q * *(b + 535 * OS1_S1 + 19);
            *(b + 444 * OS1_S1 + 30) =
                prefactor_y * *(b + 444 * OS1_S1 + 16) -
                p_over_q * *(b + 548 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 354 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 444 * OS1_S1 + 7);
            *(b + 444 * OS1_S1 + 31) =
                prefactor_z * *(b + 444 * OS1_S1 + 16) -
                p_over_q * *(b + 549 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 353 * OS1_S1 + 16);
            *(b + 444 * OS1_S1 + 32) =
                prefactor_z * *(b + 444 * OS1_S1 + 17) -
                p_over_q * *(b + 549 * OS1_S1 + 17) +
                2 * one_over_two_q * *(b + 353 * OS1_S1 + 17) +
                one_over_two_q * *(b + 444 * OS1_S1 + 7);
            *(b + 444 * OS1_S1 + 33) =
                prefactor_y * *(b + 444 * OS1_S1 + 19) -
                p_over_q * *(b + 548 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 354 * OS1_S1 + 19);
            *(b + 444 * OS1_S1 + 34) =
                prefactor_z * *(b + 444 * OS1_S1 + 19) -
                p_over_q * *(b + 549 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 353 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 444 * OS1_S1 + 9);
            *(b + 445 * OS1_S1 + 20) =
                prefactor_x * *(b + 445 * OS1_S1 + 10) -
                p_over_q * *(b + 536 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 445 * OS1_S1 + 4);
            *(b + 445 * OS1_S1 + 21) =
                prefactor_y * *(b + 445 * OS1_S1 + 10) -
                p_over_q * *(b + 549 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 355 * OS1_S1 + 10);
            *(b + 445 * OS1_S1 + 22) =
                prefactor_z * *(b + 445 * OS1_S1 + 10) -
                p_over_q * *(b + 550 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 10);
            *(b + 445 * OS1_S1 + 23) = prefactor_x * *(b + 445 * OS1_S1 + 13) -
                                       p_over_q * *(b + 536 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 445 * OS1_S1 + 7);
            *(b + 445 * OS1_S1 + 24) =
                prefactor_z * *(b + 445 * OS1_S1 + 11) -
                p_over_q * *(b + 550 * OS1_S1 + 11) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 11);
            *(b + 445 * OS1_S1 + 25) = prefactor_x * *(b + 445 * OS1_S1 + 15) -
                                       p_over_q * *(b + 536 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 445 * OS1_S1 + 9);
            *(b + 445 * OS1_S1 + 26) = prefactor_x * *(b + 445 * OS1_S1 + 16) -
                                       p_over_q * *(b + 536 * OS1_S1 + 16);
            *(b + 445 * OS1_S1 + 27) = prefactor_x * *(b + 445 * OS1_S1 + 17) -
                                       p_over_q * *(b + 536 * OS1_S1 + 17);
            *(b + 445 * OS1_S1 + 28) = prefactor_x * *(b + 445 * OS1_S1 + 18) -
                                       p_over_q * *(b + 536 * OS1_S1 + 18);
            *(b + 445 * OS1_S1 + 29) = prefactor_x * *(b + 445 * OS1_S1 + 19) -
                                       p_over_q * *(b + 536 * OS1_S1 + 19);
            *(b + 445 * OS1_S1 + 30) =
                prefactor_y * *(b + 445 * OS1_S1 + 16) -
                p_over_q * *(b + 549 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 355 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 445 * OS1_S1 + 7);
            *(b + 445 * OS1_S1 + 31) =
                prefactor_z * *(b + 445 * OS1_S1 + 16) -
                p_over_q * *(b + 550 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 16);
            *(b + 445 * OS1_S1 + 32) =
                prefactor_z * *(b + 445 * OS1_S1 + 17) -
                p_over_q * *(b + 550 * OS1_S1 + 17) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 17) +
                one_over_two_q * *(b + 445 * OS1_S1 + 7);
            *(b + 445 * OS1_S1 + 33) =
                prefactor_y * *(b + 445 * OS1_S1 + 19) -
                p_over_q * *(b + 549 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 355 * OS1_S1 + 19);
            *(b + 445 * OS1_S1 + 34) =
                prefactor_z * *(b + 445 * OS1_S1 + 19) -
                p_over_q * *(b + 550 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 354 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 445 * OS1_S1 + 9);
            *(b + 446 * OS1_S1 + 20) =
                prefactor_x * *(b + 446 * OS1_S1 + 10) -
                p_over_q * *(b + 537 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 446 * OS1_S1 + 4);
            *(b + 446 * OS1_S1 + 21) =
                prefactor_y * *(b + 446 * OS1_S1 + 10) -
                p_over_q * *(b + 550 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 356 * OS1_S1 + 10);
            *(b + 446 * OS1_S1 + 22) =
                prefactor_z * *(b + 446 * OS1_S1 + 10) -
                p_over_q * *(b + 551 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 10);
            *(b + 446 * OS1_S1 + 23) = prefactor_x * *(b + 446 * OS1_S1 + 13) -
                                       p_over_q * *(b + 537 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 446 * OS1_S1 + 7);
            *(b + 446 * OS1_S1 + 24) =
                prefactor_z * *(b + 446 * OS1_S1 + 11) -
                p_over_q * *(b + 551 * OS1_S1 + 11) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 11);
            *(b + 446 * OS1_S1 + 25) = prefactor_x * *(b + 446 * OS1_S1 + 15) -
                                       p_over_q * *(b + 537 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 446 * OS1_S1 + 9);
            *(b + 446 * OS1_S1 + 26) = prefactor_x * *(b + 446 * OS1_S1 + 16) -
                                       p_over_q * *(b + 537 * OS1_S1 + 16);
            *(b + 446 * OS1_S1 + 27) = prefactor_x * *(b + 446 * OS1_S1 + 17) -
                                       p_over_q * *(b + 537 * OS1_S1 + 17);
            *(b + 446 * OS1_S1 + 28) = prefactor_x * *(b + 446 * OS1_S1 + 18) -
                                       p_over_q * *(b + 537 * OS1_S1 + 18);
            *(b + 446 * OS1_S1 + 29) = prefactor_x * *(b + 446 * OS1_S1 + 19) -
                                       p_over_q * *(b + 537 * OS1_S1 + 19);
            *(b + 446 * OS1_S1 + 30) =
                prefactor_y * *(b + 446 * OS1_S1 + 16) -
                p_over_q * *(b + 550 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 356 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 446 * OS1_S1 + 7);
            *(b + 446 * OS1_S1 + 31) =
                prefactor_z * *(b + 446 * OS1_S1 + 16) -
                p_over_q * *(b + 551 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 16);
            *(b + 446 * OS1_S1 + 32) =
                prefactor_z * *(b + 446 * OS1_S1 + 17) -
                p_over_q * *(b + 551 * OS1_S1 + 17) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 17) +
                one_over_two_q * *(b + 446 * OS1_S1 + 7);
            *(b + 446 * OS1_S1 + 33) =
                prefactor_y * *(b + 446 * OS1_S1 + 19) -
                p_over_q * *(b + 550 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 356 * OS1_S1 + 19);
            *(b + 446 * OS1_S1 + 34) =
                prefactor_z * *(b + 446 * OS1_S1 + 19) -
                p_over_q * *(b + 551 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 355 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 446 * OS1_S1 + 9);
            *(b + 447 * OS1_S1 + 20) =
                prefactor_x * *(b + 447 * OS1_S1 + 10) -
                p_over_q * *(b + 538 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 447 * OS1_S1 + 4);
            *(b + 447 * OS1_S1 + 21) =
                prefactor_y * *(b + 447 * OS1_S1 + 10) -
                p_over_q * *(b + 551 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 357 * OS1_S1 + 10);
            *(b + 447 * OS1_S1 + 22) =
                prefactor_z * *(b + 447 * OS1_S1 + 10) -
                p_over_q * *(b + 552 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 356 * OS1_S1 + 10);
            *(b + 447 * OS1_S1 + 23) = prefactor_x * *(b + 447 * OS1_S1 + 13) -
                                       p_over_q * *(b + 538 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 447 * OS1_S1 + 7);
            *(b + 447 * OS1_S1 + 24) =
                prefactor_z * *(b + 447 * OS1_S1 + 11) -
                p_over_q * *(b + 552 * OS1_S1 + 11) +
                5 * one_over_two_q * *(b + 356 * OS1_S1 + 11);
            *(b + 447 * OS1_S1 + 25) = prefactor_x * *(b + 447 * OS1_S1 + 15) -
                                       p_over_q * *(b + 538 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 447 * OS1_S1 + 9);
            *(b + 447 * OS1_S1 + 26) = prefactor_x * *(b + 447 * OS1_S1 + 16) -
                                       p_over_q * *(b + 538 * OS1_S1 + 16);
            *(b + 447 * OS1_S1 + 27) = prefactor_x * *(b + 447 * OS1_S1 + 17) -
                                       p_over_q * *(b + 538 * OS1_S1 + 17);
            *(b + 447 * OS1_S1 + 28) = prefactor_x * *(b + 447 * OS1_S1 + 18) -
                                       p_over_q * *(b + 538 * OS1_S1 + 18);
            *(b + 447 * OS1_S1 + 29) = prefactor_x * *(b + 447 * OS1_S1 + 19) -
                                       p_over_q * *(b + 538 * OS1_S1 + 19);
            *(b + 447 * OS1_S1 + 30) =
                prefactor_y * *(b + 447 * OS1_S1 + 16) -
                p_over_q * *(b + 551 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 357 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 447 * OS1_S1 + 7);
            *(b + 447 * OS1_S1 + 31) =
                prefactor_z * *(b + 447 * OS1_S1 + 16) -
                p_over_q * *(b + 552 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 356 * OS1_S1 + 16);
            *(b + 447 * OS1_S1 + 32) =
                prefactor_z * *(b + 447 * OS1_S1 + 17) -
                p_over_q * *(b + 552 * OS1_S1 + 17) +
                5 * one_over_two_q * *(b + 356 * OS1_S1 + 17) +
                one_over_two_q * *(b + 447 * OS1_S1 + 7);
            *(b + 447 * OS1_S1 + 33) =
                prefactor_y * *(b + 447 * OS1_S1 + 19) -
                p_over_q * *(b + 551 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 357 * OS1_S1 + 19);
            *(b + 447 * OS1_S1 + 34) =
                prefactor_z * *(b + 447 * OS1_S1 + 19) -
                p_over_q * *(b + 552 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 356 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 447 * OS1_S1 + 9);
            *(b + 448 * OS1_S1 + 20) =
                prefactor_x * *(b + 448 * OS1_S1 + 10) -
                p_over_q * *(b + 539 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 448 * OS1_S1 + 4);
            *(b + 448 * OS1_S1 + 21) =
                prefactor_y * *(b + 448 * OS1_S1 + 10) -
                p_over_q * *(b + 552 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 358 * OS1_S1 + 10);
            *(b + 448 * OS1_S1 + 22) =
                prefactor_z * *(b + 448 * OS1_S1 + 10) -
                p_over_q * *(b + 553 * OS1_S1 + 10) +
                6 * one_over_two_q * *(b + 357 * OS1_S1 + 10);
            *(b + 448 * OS1_S1 + 23) = prefactor_x * *(b + 448 * OS1_S1 + 13) -
                                       p_over_q * *(b + 539 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 448 * OS1_S1 + 7);
            *(b + 448 * OS1_S1 + 24) =
                prefactor_z * *(b + 448 * OS1_S1 + 11) -
                p_over_q * *(b + 553 * OS1_S1 + 11) +
                6 * one_over_two_q * *(b + 357 * OS1_S1 + 11);
            *(b + 448 * OS1_S1 + 25) = prefactor_x * *(b + 448 * OS1_S1 + 15) -
                                       p_over_q * *(b + 539 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 448 * OS1_S1 + 9);
            *(b + 448 * OS1_S1 + 26) = prefactor_x * *(b + 448 * OS1_S1 + 16) -
                                       p_over_q * *(b + 539 * OS1_S1 + 16);
            *(b + 448 * OS1_S1 + 27) = prefactor_x * *(b + 448 * OS1_S1 + 17) -
                                       p_over_q * *(b + 539 * OS1_S1 + 17);
            *(b + 448 * OS1_S1 + 28) = prefactor_x * *(b + 448 * OS1_S1 + 18) -
                                       p_over_q * *(b + 539 * OS1_S1 + 18);
            *(b + 448 * OS1_S1 + 29) = prefactor_x * *(b + 448 * OS1_S1 + 19) -
                                       p_over_q * *(b + 539 * OS1_S1 + 19);
            *(b + 448 * OS1_S1 + 30) =
                prefactor_y * *(b + 448 * OS1_S1 + 16) -
                p_over_q * *(b + 552 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 358 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 448 * OS1_S1 + 7);
            *(b + 448 * OS1_S1 + 31) =
                prefactor_z * *(b + 448 * OS1_S1 + 16) -
                p_over_q * *(b + 553 * OS1_S1 + 16) +
                6 * one_over_two_q * *(b + 357 * OS1_S1 + 16);
            *(b + 448 * OS1_S1 + 32) =
                prefactor_z * *(b + 448 * OS1_S1 + 17) -
                p_over_q * *(b + 553 * OS1_S1 + 17) +
                6 * one_over_two_q * *(b + 357 * OS1_S1 + 17) +
                one_over_two_q * *(b + 448 * OS1_S1 + 7);
            *(b + 448 * OS1_S1 + 33) =
                prefactor_y * *(b + 448 * OS1_S1 + 19) -
                p_over_q * *(b + 552 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 358 * OS1_S1 + 19);
            *(b + 448 * OS1_S1 + 34) =
                prefactor_z * *(b + 448 * OS1_S1 + 19) -
                p_over_q * *(b + 553 * OS1_S1 + 19) +
                6 * one_over_two_q * *(b + 357 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 448 * OS1_S1 + 9);
            *(b + 449 * OS1_S1 + 20) =
                prefactor_x * *(b + 449 * OS1_S1 + 10) -
                p_over_q * *(b + 540 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 449 * OS1_S1 + 4);
            *(b + 449 * OS1_S1 + 21) =
                prefactor_y * *(b + 449 * OS1_S1 + 10) -
                p_over_q * *(b + 553 * OS1_S1 + 10) +
                5 * one_over_two_q * *(b + 359 * OS1_S1 + 10);
            *(b + 449 * OS1_S1 + 22) =
                prefactor_z * *(b + 449 * OS1_S1 + 10) -
                p_over_q * *(b + 554 * OS1_S1 + 10) +
                7 * one_over_two_q * *(b + 358 * OS1_S1 + 10);
            *(b + 449 * OS1_S1 + 23) = prefactor_x * *(b + 449 * OS1_S1 + 13) -
                                       p_over_q * *(b + 540 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 449 * OS1_S1 + 7);
            *(b + 449 * OS1_S1 + 24) =
                prefactor_y * *(b + 449 * OS1_S1 + 12) -
                p_over_q * *(b + 553 * OS1_S1 + 12) +
                5 * one_over_two_q * *(b + 359 * OS1_S1 + 12);
            *(b + 449 * OS1_S1 + 25) = prefactor_x * *(b + 449 * OS1_S1 + 15) -
                                       p_over_q * *(b + 540 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 449 * OS1_S1 + 9);
            *(b + 449 * OS1_S1 + 26) = prefactor_x * *(b + 449 * OS1_S1 + 16) -
                                       p_over_q * *(b + 540 * OS1_S1 + 16);
            *(b + 449 * OS1_S1 + 27) = prefactor_x * *(b + 449 * OS1_S1 + 17) -
                                       p_over_q * *(b + 540 * OS1_S1 + 17);
            *(b + 449 * OS1_S1 + 28) = prefactor_x * *(b + 449 * OS1_S1 + 18) -
                                       p_over_q * *(b + 540 * OS1_S1 + 18);
            *(b + 449 * OS1_S1 + 29) = prefactor_x * *(b + 449 * OS1_S1 + 19) -
                                       p_over_q * *(b + 540 * OS1_S1 + 19);
            *(b + 449 * OS1_S1 + 30) =
                prefactor_y * *(b + 449 * OS1_S1 + 16) -
                p_over_q * *(b + 553 * OS1_S1 + 16) +
                5 * one_over_two_q * *(b + 359 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 449 * OS1_S1 + 7);
            *(b + 449 * OS1_S1 + 31) =
                prefactor_z * *(b + 449 * OS1_S1 + 16) -
                p_over_q * *(b + 554 * OS1_S1 + 16) +
                7 * one_over_two_q * *(b + 358 * OS1_S1 + 16);
            *(b + 449 * OS1_S1 + 32) =
                prefactor_y * *(b + 449 * OS1_S1 + 18) -
                p_over_q * *(b + 553 * OS1_S1 + 18) +
                5 * one_over_two_q * *(b + 359 * OS1_S1 + 18) +
                one_over_two_q * *(b + 449 * OS1_S1 + 9);
            *(b + 449 * OS1_S1 + 33) =
                prefactor_y * *(b + 449 * OS1_S1 + 19) -
                p_over_q * *(b + 553 * OS1_S1 + 19) +
                5 * one_over_two_q * *(b + 359 * OS1_S1 + 19);
            *(b + 449 * OS1_S1 + 34) =
                prefactor_z * *(b + 449 * OS1_S1 + 19) -
                p_over_q * *(b + 554 * OS1_S1 + 19) +
                7 * one_over_two_q * *(b + 358 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 449 * OS1_S1 + 9);
            *(b + 450 * OS1_S1 + 20) =
                prefactor_x * *(b + 450 * OS1_S1 + 10) -
                p_over_q * *(b + 541 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 450 * OS1_S1 + 4);
            *(b + 450 * OS1_S1 + 21) =
                prefactor_y * *(b + 450 * OS1_S1 + 10) -
                p_over_q * *(b + 554 * OS1_S1 + 10) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 10);
            *(b + 450 * OS1_S1 + 22) =
                prefactor_z * *(b + 450 * OS1_S1 + 10) -
                p_over_q * *(b + 555 * OS1_S1 + 10) +
                8 * one_over_two_q * *(b + 359 * OS1_S1 + 10);
            *(b + 450 * OS1_S1 + 23) = prefactor_x * *(b + 450 * OS1_S1 + 13) -
                                       p_over_q * *(b + 541 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 450 * OS1_S1 + 7);
            *(b + 450 * OS1_S1 + 24) =
                prefactor_y * *(b + 450 * OS1_S1 + 12) -
                p_over_q * *(b + 554 * OS1_S1 + 12) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 12);
            *(b + 450 * OS1_S1 + 25) = prefactor_x * *(b + 450 * OS1_S1 + 15) -
                                       p_over_q * *(b + 541 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 450 * OS1_S1 + 9);
            *(b + 450 * OS1_S1 + 26) = prefactor_x * *(b + 450 * OS1_S1 + 16) -
                                       p_over_q * *(b + 541 * OS1_S1 + 16);
            *(b + 450 * OS1_S1 + 27) = prefactor_x * *(b + 450 * OS1_S1 + 17) -
                                       p_over_q * *(b + 541 * OS1_S1 + 17);
            *(b + 450 * OS1_S1 + 28) = prefactor_x * *(b + 450 * OS1_S1 + 18) -
                                       p_over_q * *(b + 541 * OS1_S1 + 18);
            *(b + 450 * OS1_S1 + 29) = prefactor_x * *(b + 450 * OS1_S1 + 19) -
                                       p_over_q * *(b + 541 * OS1_S1 + 19);
            *(b + 450 * OS1_S1 + 30) =
                prefactor_y * *(b + 450 * OS1_S1 + 16) -
                p_over_q * *(b + 554 * OS1_S1 + 16) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 450 * OS1_S1 + 7);
            *(b + 450 * OS1_S1 + 31) =
                prefactor_z * *(b + 450 * OS1_S1 + 16) -
                p_over_q * *(b + 555 * OS1_S1 + 16) +
                8 * one_over_two_q * *(b + 359 * OS1_S1 + 16);
            *(b + 450 * OS1_S1 + 32) =
                prefactor_y * *(b + 450 * OS1_S1 + 18) -
                p_over_q * *(b + 554 * OS1_S1 + 18) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 18) +
                one_over_two_q * *(b + 450 * OS1_S1 + 9);
            *(b + 450 * OS1_S1 + 33) =
                prefactor_y * *(b + 450 * OS1_S1 + 19) -
                p_over_q * *(b + 554 * OS1_S1 + 19) +
                4 * one_over_two_q * *(b + 360 * OS1_S1 + 19);
            *(b + 450 * OS1_S1 + 34) =
                prefactor_z * *(b + 450 * OS1_S1 + 19) -
                p_over_q * *(b + 555 * OS1_S1 + 19) +
                8 * one_over_two_q * *(b + 359 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 450 * OS1_S1 + 9);
            *(b + 451 * OS1_S1 + 20) =
                prefactor_x * *(b + 451 * OS1_S1 + 10) -
                p_over_q * *(b + 542 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 451 * OS1_S1 + 4);
            *(b + 451 * OS1_S1 + 21) =
                prefactor_y * *(b + 451 * OS1_S1 + 10) -
                p_over_q * *(b + 555 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 10);
            *(b + 451 * OS1_S1 + 22) =
                prefactor_z * *(b + 451 * OS1_S1 + 10) -
                p_over_q * *(b + 556 * OS1_S1 + 10) +
                9 * one_over_two_q * *(b + 360 * OS1_S1 + 10);
            *(b + 451 * OS1_S1 + 23) = prefactor_x * *(b + 451 * OS1_S1 + 13) -
                                       p_over_q * *(b + 542 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 451 * OS1_S1 + 7);
            *(b + 451 * OS1_S1 + 24) =
                prefactor_y * *(b + 451 * OS1_S1 + 12) -
                p_over_q * *(b + 555 * OS1_S1 + 12) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 12);
            *(b + 451 * OS1_S1 + 25) = prefactor_x * *(b + 451 * OS1_S1 + 15) -
                                       p_over_q * *(b + 542 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 451 * OS1_S1 + 9);
            *(b + 451 * OS1_S1 + 26) = prefactor_x * *(b + 451 * OS1_S1 + 16) -
                                       p_over_q * *(b + 542 * OS1_S1 + 16);
            *(b + 451 * OS1_S1 + 27) = prefactor_x * *(b + 451 * OS1_S1 + 17) -
                                       p_over_q * *(b + 542 * OS1_S1 + 17);
            *(b + 451 * OS1_S1 + 28) = prefactor_x * *(b + 451 * OS1_S1 + 18) -
                                       p_over_q * *(b + 542 * OS1_S1 + 18);
            *(b + 451 * OS1_S1 + 29) = prefactor_x * *(b + 451 * OS1_S1 + 19) -
                                       p_over_q * *(b + 542 * OS1_S1 + 19);
            *(b + 451 * OS1_S1 + 30) =
                prefactor_y * *(b + 451 * OS1_S1 + 16) -
                p_over_q * *(b + 555 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 451 * OS1_S1 + 7);
            *(b + 451 * OS1_S1 + 31) =
                prefactor_z * *(b + 451 * OS1_S1 + 16) -
                p_over_q * *(b + 556 * OS1_S1 + 16) +
                9 * one_over_two_q * *(b + 360 * OS1_S1 + 16);
            *(b + 451 * OS1_S1 + 32) =
                prefactor_y * *(b + 451 * OS1_S1 + 18) -
                p_over_q * *(b + 555 * OS1_S1 + 18) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 18) +
                one_over_two_q * *(b + 451 * OS1_S1 + 9);
            *(b + 451 * OS1_S1 + 33) =
                prefactor_y * *(b + 451 * OS1_S1 + 19) -
                p_over_q * *(b + 555 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 361 * OS1_S1 + 19);
            *(b + 451 * OS1_S1 + 34) =
                prefactor_z * *(b + 451 * OS1_S1 + 19) -
                p_over_q * *(b + 556 * OS1_S1 + 19) +
                9 * one_over_two_q * *(b + 360 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 451 * OS1_S1 + 9);
            *(b + 452 * OS1_S1 + 20) =
                prefactor_x * *(b + 452 * OS1_S1 + 10) -
                p_over_q * *(b + 543 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 452 * OS1_S1 + 4);
            *(b + 452 * OS1_S1 + 21) =
                prefactor_y * *(b + 452 * OS1_S1 + 10) -
                p_over_q * *(b + 556 * OS1_S1 + 10) +
                2 * one_over_two_q * *(b + 362 * OS1_S1 + 10);
            *(b + 452 * OS1_S1 + 22) =
                prefactor_z * *(b + 452 * OS1_S1 + 10) -
                p_over_q * *(b + 557 * OS1_S1 + 10) +
                10 * one_over_two_q * *(b + 361 * OS1_S1 + 10);
            *(b + 452 * OS1_S1 + 23) = prefactor_x * *(b + 452 * OS1_S1 + 13) -
                                       p_over_q * *(b + 543 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 452 * OS1_S1 + 7);
            *(b + 452 * OS1_S1 + 24) =
                prefactor_y * *(b + 452 * OS1_S1 + 12) -
                p_over_q * *(b + 556 * OS1_S1 + 12) +
                2 * one_over_two_q * *(b + 362 * OS1_S1 + 12);
            *(b + 452 * OS1_S1 + 25) = prefactor_x * *(b + 452 * OS1_S1 + 15) -
                                       p_over_q * *(b + 543 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 452 * OS1_S1 + 9);
            *(b + 452 * OS1_S1 + 26) = prefactor_x * *(b + 452 * OS1_S1 + 16) -
                                       p_over_q * *(b + 543 * OS1_S1 + 16);
            *(b + 452 * OS1_S1 + 27) = prefactor_x * *(b + 452 * OS1_S1 + 17) -
                                       p_over_q * *(b + 543 * OS1_S1 + 17);
            *(b + 452 * OS1_S1 + 28) = prefactor_x * *(b + 452 * OS1_S1 + 18) -
                                       p_over_q * *(b + 543 * OS1_S1 + 18);
            *(b + 452 * OS1_S1 + 29) = prefactor_x * *(b + 452 * OS1_S1 + 19) -
                                       p_over_q * *(b + 543 * OS1_S1 + 19);
            *(b + 452 * OS1_S1 + 30) =
                prefactor_y * *(b + 452 * OS1_S1 + 16) -
                p_over_q * *(b + 556 * OS1_S1 + 16) +
                2 * one_over_two_q * *(b + 362 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 452 * OS1_S1 + 7);
            *(b + 452 * OS1_S1 + 31) =
                prefactor_z * *(b + 452 * OS1_S1 + 16) -
                p_over_q * *(b + 557 * OS1_S1 + 16) +
                10 * one_over_two_q * *(b + 361 * OS1_S1 + 16);
            *(b + 452 * OS1_S1 + 32) =
                prefactor_y * *(b + 452 * OS1_S1 + 18) -
                p_over_q * *(b + 556 * OS1_S1 + 18) +
                2 * one_over_two_q * *(b + 362 * OS1_S1 + 18) +
                one_over_two_q * *(b + 452 * OS1_S1 + 9);
            *(b + 452 * OS1_S1 + 33) =
                prefactor_y * *(b + 452 * OS1_S1 + 19) -
                p_over_q * *(b + 556 * OS1_S1 + 19) +
                2 * one_over_two_q * *(b + 362 * OS1_S1 + 19);
            *(b + 452 * OS1_S1 + 34) =
                prefactor_z * *(b + 452 * OS1_S1 + 19) -
                p_over_q * *(b + 557 * OS1_S1 + 19) +
                10 * one_over_two_q * *(b + 361 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 452 * OS1_S1 + 9);
            *(b + 453 * OS1_S1 + 20) =
                prefactor_x * *(b + 453 * OS1_S1 + 10) -
                p_over_q * *(b + 544 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 453 * OS1_S1 + 4);
            *(b + 453 * OS1_S1 + 21) =
                prefactor_y * *(b + 453 * OS1_S1 + 10) -
                p_over_q * *(b + 557 * OS1_S1 + 10) +
                one_over_two_q * *(b + 363 * OS1_S1 + 10);
            *(b + 453 * OS1_S1 + 22) =
                prefactor_z * *(b + 453 * OS1_S1 + 10) -
                p_over_q * *(b + 558 * OS1_S1 + 10) +
                11 * one_over_two_q * *(b + 362 * OS1_S1 + 10);
            *(b + 453 * OS1_S1 + 23) = prefactor_x * *(b + 453 * OS1_S1 + 13) -
                                       p_over_q * *(b + 544 * OS1_S1 + 13) +
                                       one_over_two_q * *(b + 453 * OS1_S1 + 7);
            *(b + 453 * OS1_S1 + 24) =
                prefactor_y * *(b + 453 * OS1_S1 + 12) -
                p_over_q * *(b + 557 * OS1_S1 + 12) +
                one_over_two_q * *(b + 363 * OS1_S1 + 12);
            *(b + 453 * OS1_S1 + 25) = prefactor_x * *(b + 453 * OS1_S1 + 15) -
                                       p_over_q * *(b + 544 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 453 * OS1_S1 + 9);
            *(b + 453 * OS1_S1 + 26) = prefactor_x * *(b + 453 * OS1_S1 + 16) -
                                       p_over_q * *(b + 544 * OS1_S1 + 16);
            *(b + 453 * OS1_S1 + 27) = prefactor_x * *(b + 453 * OS1_S1 + 17) -
                                       p_over_q * *(b + 544 * OS1_S1 + 17);
            *(b + 453 * OS1_S1 + 28) = prefactor_x * *(b + 453 * OS1_S1 + 18) -
                                       p_over_q * *(b + 544 * OS1_S1 + 18);
            *(b + 453 * OS1_S1 + 29) = prefactor_x * *(b + 453 * OS1_S1 + 19) -
                                       p_over_q * *(b + 544 * OS1_S1 + 19);
            *(b + 453 * OS1_S1 + 30) =
                prefactor_y * *(b + 453 * OS1_S1 + 16) -
                p_over_q * *(b + 557 * OS1_S1 + 16) +
                one_over_two_q * *(b + 363 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 453 * OS1_S1 + 7);
            *(b + 453 * OS1_S1 + 31) =
                prefactor_z * *(b + 453 * OS1_S1 + 16) -
                p_over_q * *(b + 558 * OS1_S1 + 16) +
                11 * one_over_two_q * *(b + 362 * OS1_S1 + 16);
            *(b + 453 * OS1_S1 + 32) =
                prefactor_y * *(b + 453 * OS1_S1 + 18) -
                p_over_q * *(b + 557 * OS1_S1 + 18) +
                one_over_two_q * *(b + 363 * OS1_S1 + 18) +
                one_over_two_q * *(b + 453 * OS1_S1 + 9);
            *(b + 453 * OS1_S1 + 33) =
                prefactor_y * *(b + 453 * OS1_S1 + 19) -
                p_over_q * *(b + 557 * OS1_S1 + 19) +
                one_over_two_q * *(b + 363 * OS1_S1 + 19);
            *(b + 453 * OS1_S1 + 34) =
                prefactor_z * *(b + 453 * OS1_S1 + 19) -
                p_over_q * *(b + 558 * OS1_S1 + 19) +
                11 * one_over_two_q * *(b + 362 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 453 * OS1_S1 + 9);
            *(b + 454 * OS1_S1 + 20) =
                prefactor_x * *(b + 454 * OS1_S1 + 10) -
                p_over_q * *(b + 545 * OS1_S1 + 10) +
                3 * one_over_two_q * *(b + 454 * OS1_S1 + 4);
            *(b + 454 * OS1_S1 + 21) = prefactor_y * *(b + 454 * OS1_S1 + 10) -
                                       p_over_q * *(b + 558 * OS1_S1 + 10);
            *(b + 454 * OS1_S1 + 22) =
                prefactor_z * *(b + 454 * OS1_S1 + 10) -
                p_over_q * *(b + 559 * OS1_S1 + 10) +
                12 * one_over_two_q * *(b + 363 * OS1_S1 + 10);
            *(b + 454 * OS1_S1 + 23) = prefactor_y * *(b + 454 * OS1_S1 + 11) -
                                       p_over_q * *(b + 558 * OS1_S1 + 11) +
                                       one_over_two_q * *(b + 454 * OS1_S1 + 4);
            *(b + 454 * OS1_S1 + 24) = prefactor_y * *(b + 454 * OS1_S1 + 12) -
                                       p_over_q * *(b + 558 * OS1_S1 + 12);
            *(b + 454 * OS1_S1 + 25) = prefactor_x * *(b + 454 * OS1_S1 + 15) -
                                       p_over_q * *(b + 545 * OS1_S1 + 15) +
                                       one_over_two_q * *(b + 454 * OS1_S1 + 9);
            *(b + 454 * OS1_S1 + 26) = prefactor_x * *(b + 454 * OS1_S1 + 16) -
                                       p_over_q * *(b + 545 * OS1_S1 + 16);
            *(b + 454 * OS1_S1 + 27) = prefactor_x * *(b + 454 * OS1_S1 + 17) -
                                       p_over_q * *(b + 545 * OS1_S1 + 17);
            *(b + 454 * OS1_S1 + 28) = prefactor_y * *(b + 454 * OS1_S1 + 15) -
                                       p_over_q * *(b + 558 * OS1_S1 + 15);
            *(b + 454 * OS1_S1 + 29) = prefactor_x * *(b + 454 * OS1_S1 + 19) -
                                       p_over_q * *(b + 545 * OS1_S1 + 19);
            *(b + 454 * OS1_S1 + 30) =
                prefactor_y * *(b + 454 * OS1_S1 + 16) -
                p_over_q * *(b + 558 * OS1_S1 + 16) +
                3 * one_over_two_q * *(b + 454 * OS1_S1 + 7);
            *(b + 454 * OS1_S1 + 31) =
                prefactor_z * *(b + 454 * OS1_S1 + 16) -
                p_over_q * *(b + 559 * OS1_S1 + 16) +
                12 * one_over_two_q * *(b + 363 * OS1_S1 + 16);
            *(b + 454 * OS1_S1 + 32) = prefactor_y * *(b + 454 * OS1_S1 + 18) -
                                       p_over_q * *(b + 558 * OS1_S1 + 18) +
                                       one_over_two_q * *(b + 454 * OS1_S1 + 9);
            *(b + 454 * OS1_S1 + 33) = prefactor_y * *(b + 454 * OS1_S1 + 19) -
                                       p_over_q * *(b + 558 * OS1_S1 + 19);
            *(b + 454 * OS1_S1 + 34) =
                prefactor_z * *(b + 454 * OS1_S1 + 19) -
                p_over_q * *(b + 559 * OS1_S1 + 19) +
                12 * one_over_two_q * *(b + 363 * OS1_S1 + 19) +
                3 * one_over_two_q * *(b + 454 * OS1_S1 + 9);
            return;
        }
    }
}
