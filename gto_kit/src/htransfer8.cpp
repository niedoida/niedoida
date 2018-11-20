/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void htransfer_0_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_1_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_2_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_3_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_4_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_5_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_6_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_7_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_8_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_9_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                           const double p_over_q, const double one_over_two_q,
                           const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_10_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                            const double p_over_q, const double one_over_two_q,
                            const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_11_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                            const double p_over_q, const double one_over_two_q,
                            const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_12_8(const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                            const double p_over_q, const double one_over_two_q,
                            const double wab, const double wcd, double* NIEDOIDA_RESTRICT A) 
        {
            return;
        }

        void htransfer_8(const unsigned first_min, const unsigned first_max,
                         const double prefactor_x, const double prefactor_y, const double prefactor_z, 
                         const double p_over_q, const double one_over_two_q,
                         const double wab, const double wcd, double* NIEDOIDA_RESTRICT b)
        {
            switch (first_min) {
            case 0:
                htransfer_0_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 0)
                    break;
            case 1:
                htransfer_1_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 1)
                    break;
            case 2:
                htransfer_2_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 2)
                    break;
            case 3:
                htransfer_3_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 3)
                    break;
            case 4:
                htransfer_4_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 4)
                    break;
            case 5:
                htransfer_5_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 5)
                    break;
            case 6:
                htransfer_6_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 6)
                    break;
            case 7:
                htransfer_7_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 7)
                    break;
            case 8:
                htransfer_8_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 8)
                    break;
            case 9:
                htransfer_9_8(prefactor_x,
                              prefactor_y,
                              prefactor_z,
                              p_over_q,
                              one_over_two_q,
                              wab,
                              wcd,
                              b);
                if (first_max == 9)
                    break;
            case 10:
                htransfer_10_8(prefactor_x,
                               prefactor_y,
                               prefactor_z,
                               p_over_q,
                               one_over_two_q,
                               wab,
                               wcd,
                               b);
                if (first_max == 10)
                    break;
            case 11:
                htransfer_11_8(prefactor_x,
                               prefactor_y,
                               prefactor_z,
                               p_over_q,
                               one_over_two_q,
                               wab,
                               wcd,
                               b);
                if (first_max == 11)
                    break;
            case 12:
                htransfer_12_8(prefactor_x,
                               prefactor_y,
                               prefactor_z,
                               p_over_q,
                               one_over_two_q,
                               wab,
                               wcd,
                               b);
            }
            return;
        }
    }
}
