/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_CORE_UTILS_HPP
#define NIEDOIDA_CORE_KIT_CORE_UTILS_HPP

#include <memory>
#include <vector>
#include <string>

#include <armadillo>

#include "ao_value_engine.hpp"
#include "basis_set.hpp"
#include "grid.hpp"
#include "system.hpp"

namespace niedoida {

    namespace core {

        char l_to_shell_symbol(unsigned);
        unsigned shell_symbol_to_l(char);

        std::vector<std::string> ao_labels(const BasisSet&);
        std::vector<std::string> ao_labels(const AtomicBasisSet&);

        std::vector<std::size_t> no_contractions_in_atom(const BasisSet&);
        std::vector<std::size_t> first_contraction_in_atom(const BasisSet&);
        arma::mat canonical_purification(const arma::mat& P, 
                                         const arma::mat& S,
                                         double eps = 1e-10, unsigned n = 50);

    }
}

#endif
