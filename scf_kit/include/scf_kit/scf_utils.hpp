/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SCF_KIT_SCF_UTILS_HPP
#define NIEDOIDA_SCF_KIT_SCF_UTILS_HPP

#include <armadillo>

#include "core_kit/atom.hpp"

namespace niedoida {
    namespace scf {
        arma::mat density_matrix(const arma::mat& C, unsigned no_occ);
        arma::mat hole_density_matrix(const arma::mat& C, unsigned no_occ);
        arma::mat density_matrix(const arma::mat& C, const arma::vec& occ);
        
        void shift_fock_matrix(arma::mat& F, 
                               const arma::mat& S,
                               const arma::mat& C, 
                               double shift_1,
                               unsigned no_electrons_alpha);
        
        double nuclear_repulsion(const std::vector<core::Atom*>& atoms);
    }
}

#endif
