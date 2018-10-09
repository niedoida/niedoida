/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SEMI_EMPIRICAL_KIT_EHT_HPP
#define NIEDOIDA_SEMI_EMPIRICAL_KIT_EHT_HPP

#include "core_kit/system.hpp"

namespace niedoida {
    namespace semi_empirical {
        double eht_alpha(unsigned atomic_number, unsigned l);

        const double eht_magic_K = 1.75;

        arma::mat eht_hamiltonian(std::shared_ptr<const core::System>);
    }
}

#endif
