/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GTO_KIT_GTO_UTILS_HPP
#define NIEDOIDA_GTO_KIT_GTO_UTILS_HPP

#include <armadillo>

#include "core_kit/basis_set.hpp"

namespace niedoida {
    namespace gto {
        extern const arma::mat cartesian_to_spherical[];
        extern const arma::mat spherical_to_cartesian[];

        double gto_shell_range(const core::Shell& s, double threshold);
    }
}

#endif
