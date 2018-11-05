/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/vr.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {
        void hvr14(const double X_PA, const double Y_PA, const unsigned Z_PA,
                   const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A) {
            
            const double alpha_X = X_PQ * one_over_two_p;
            const double alpha_Y = Y_PQ * one_over_two_p;
            const double alpha_Z = Z_PQ * one_over_two_p;
            const double wab_over_two_p = wab * one_over_two_p;
            const double minus_one_over_wab = -1 / wab;
            vr13_14(minus_one_over_wab, wab_over_two_p, 14, X_PA, Y_PA, Z_PA,
                    alpha_X, alpha_Y, alpha_Z, A);
            return;
        }
    }
}
