/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/initial_guess.hpp"

namespace niedoida {

    namespace core {

        InitialGuessFragments::InitialGuessFragments(
            const Promolecule& promolecule,
            unsigned no_electrons_alpha,
            unsigned no_electrons_beta)
        {
            // spin averaging
            const double na = static_cast<double>(no_electrons_alpha);
            const double nb = static_cast<double>(no_electrons_beta);

            const double fa = na / (na + nb);
            const double fb = nb / (na + nb);

            m_P[SPIN_ALPHA] =
                fa * (promolecule.average_density_matrix(SPIN_ALPHA) +
                      promolecule.average_density_matrix(SPIN_BETA));
            m_P[SPIN_BETA] =
                fb * (promolecule.average_density_matrix(SPIN_ALPHA) +
                      promolecule.average_density_matrix(SPIN_BETA));
        }
    }
}
