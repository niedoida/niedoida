/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/core_kit.hpp"

std::shared_ptr<niedoida::core::System> create_simple_system( std::vector<std::string> symbols,
        std::vector<arma::vec> input_coords,
        std::vector<std::string> labels,
        std::stringstream &basis );

void perturb_system( std::shared_ptr<niedoida::core::System> system,
                     unsigned atom_ind, unsigned coord_ind, double perturbation );

std::shared_ptr<niedoida::core::System> create_system_H2_STO3G();
std::shared_ptr<niedoida::core::System> create_system_H2_3_21G();
std::shared_ptr<niedoida::core::System> create_system_H2O_3_21G();