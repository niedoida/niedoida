/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "property_kit/mulliken_analysis.hpp"
#include "core_kit/core_utils.hpp"

#include <cassert>

namespace niedoida {
    namespace property {
        MullikenAnalysis::MullikenAnalysis(const core::BasisSet& basis_set,
                                           const arma::mat& S,
                                           const arma::mat& P_alpha,
                                           const arma::mat& P_beta)
        {
            assert(P_alpha.n_rows == P_beta.n_rows);
            assert(S.n_rows == P_alpha.n_rows);
            assert(S.n_rows == basis_set.real_size());

            const std::vector<std::size_t> m_no_contractions_in_atom =
                no_contractions_in_atom(basis_set);

            const std::vector<std::size_t> m_first_contraction_in_atom =
                first_contraction_in_atom(basis_set);

            const std::size_t no_atoms = m_no_contractions_in_atom.size();

            m_atomic_populations[core::SPIN_ALPHA] =
                m_atomic_populations[core::SPIN_BETA] =
                    arma::zeros<arma::vec>(no_atoms);
            m_orbital_populations[core::SPIN_ALPHA] =
                m_orbital_populations[core::SPIN_BETA] =
                    arma::zeros<arma::vec>(basis_set.real_size());
            m_overlap_populations[core::SPIN_ALPHA] =
                m_overlap_populations[core::SPIN_BETA] =
                    arma::zeros<arma::mat>(no_atoms, no_atoms);

            for (std::size_t a = 0; a < no_atoms; ++a) {
                for (std::size_t b = 0; b < no_atoms; ++b) {
                    for (std::size_t i = m_first_contraction_in_atom[a];
                         i < m_first_contraction_in_atom[a] +
                                 m_no_contractions_in_atom[a];
                         ++i) {
                        // accumulate contrib.s to orb. spin pop.s
                        // to avoid writing to tables so many times ...
                        double orb_pop_alpha = 0, orb_pop_beta = 0;
                        for (std::size_t j = m_first_contraction_in_atom[b];
                             j < m_first_contraction_in_atom[b] +
                                     m_no_contractions_in_atom[b];
                             ++j) {
                            orb_pop_alpha += P_alpha(i, j) * S(i, j);
                            orb_pop_beta += P_beta(i, j) * S(i, j);
                        }
                        m_orbital_populations[core::SPIN_ALPHA](i) +=
                            orb_pop_alpha;
                        m_orbital_populations[core::SPIN_BETA](i) +=
                            orb_pop_beta;
                        m_overlap_populations[core::SPIN_ALPHA](a, b) +=
                            orb_pop_alpha;
                        m_overlap_populations[core::SPIN_BETA](a, b) +=
                            orb_pop_beta;
                        m_atomic_populations[core::SPIN_ALPHA](a) +=
                            orb_pop_alpha;
                        m_atomic_populations[core::SPIN_BETA](a) +=
                            orb_pop_beta;
                    }
                }
            }
        }
    }
}
