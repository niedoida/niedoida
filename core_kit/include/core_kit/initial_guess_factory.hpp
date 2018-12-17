/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_INITIAL_GUESS_FACTORY
#define NIEDOIDA_CORE_KIT_INITIAL_GUESS_FACTORY

#include "core_kit/initial_guess.hpp"
#include "core_kit/factory.hpp"

namespace niedoida {

    namespace core {

        class InitialGuessFactory: 
            public Factory<InitialGuess> {
        public:
            virtual ~InitialGuessFactory() = default;
        };

        class InitialGuessHCoreFactory:
            public InitialGuessFactory {
        public:
            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(
                        new InitialGuessHCore(
                            system->basis_set.real_size()));
                }
        };

        class InitialGuessFragmentsFactory:
            public InitialGuessFactory {
        public:
            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(
                        new InitialGuessFragments(
                            *(system->promolecule),
                            system->no_electrons(SPIN_ALPHA),
                            system->no_electrons(SPIN_BETA)));
                }
        };
    }
}

#endif
