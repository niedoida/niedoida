/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void transfer_10(const unsigned first_min,
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
                transfer_0_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 0)
                    break;
            case 1:
                transfer_1_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 1)
                    break;
            case 2:
                transfer_2_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 2)
                    break;
            case 3:
                transfer_3_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 3)
                    break;
            case 4:
                transfer_4_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 4)
                    break;
            case 5:
                transfer_5_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 5)
                    break;
            case 6:
                transfer_6_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 6)
                    break;
            case 7:
                transfer_7_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 7)
                    break;
            case 8:
                transfer_8_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 8)
                    break;
            case 9:
                transfer_9_10(prefactor_x,
                             prefactor_y,
                             prefactor_z,
                             p_over_q,
                             one_over_two_q,
                             b);
                if (first_max == 9)
                    break;
            case 10:
                transfer_10_10(prefactor_x,
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
