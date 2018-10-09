/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/occupations_factory.hpp"

namespace niedoida {

    namespace core {

        MaximumOverlapOccupationsFactory::Product
        MaximumOverlapOccupationsFactory::make(
            std::shared_ptr<const System> system) const
        {

            // Create initial guess and obtain the pointer to InitialGuessWithMO
            std::unique_ptr<InitialGuess> initial_guess =
                m_initial_guess_factory->make(system);
            InitialGuessWithMO* initial_guess_with_mo =
                dynamic_cast<InitialGuessWithMO*>(initial_guess.get());
            assert(initial_guess_with_mo); //(otherwise we cannot construct
                                           //maximum overlap occ.)

            return std::unique_ptr<Occupations>(new MaximumOverlapOccupations(
                system->no_electrons(),
                system->multiplicity,
                *system->basis_set.overlap_matrix,
                initial_guess_with_mo->mo_coefficients(SPIN_ALPHA),
                initial_guess_with_mo->mo_coefficients(SPIN_BETA)));
        }
    }
}
