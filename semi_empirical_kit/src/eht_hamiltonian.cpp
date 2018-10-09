/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "semi_empirical_kit/eht.hpp"

#include "gto_kit/os1_integral_engine.hpp"

namespace niedoida {
    namespace semi_empirical {
        arma::mat eht_hamiltonian(std::shared_ptr<const core::System> system)
        {
            const arma::mat S =
                gto::OS1OneElectronIntegralEngine(*system).overlap_matrix();

            const std::size_t no_atoms = system->atoms.size();
            const std::size_t no_orbs = system->basis_set.real_size();

            arma::mat H(no_orbs, no_orbs, arma::fill::zeros);

            std::size_t p = 0;
            for (std::size_t a = 0; a < no_atoms; ++a) {
                const core::AtomicBasisSet& abs =
                    *system->basis_set.atomic_basis_sets()[a];

                const unsigned atomic_number =
                    system->atoms[a]->isotope->element->atomic_number;

                const std::size_t no_shells = abs.valence_shells().size();

                for (std::size_t s = 0; s < no_shells; ++s) {
                    const core::Shell& shell = *abs.valence_shells()[s];

                    const std::size_t no_l = shell.l().size();
                    for (std::size_t t = 0; t < no_l; ++t) {
                        const unsigned l = shell.l()[t];

                        const unsigned n = 2 * l + 1;
                        const double alpha = eht_alpha(atomic_number, l);

                        for (std::size_t i = 0; i < n; ++i, ++p) {
                            H(p, p) = alpha;
                        }
                    }
                }
            }

            for (std::size_t i = 0; i < no_orbs; ++i)
                for (std::size_t j = i + 1; j < no_orbs; ++j)
                    H(i, j) = 0.5 * eht_magic_K * (H(i, i) + H(j, j)) * S(i, j);

            return H;
        }
    }
}
