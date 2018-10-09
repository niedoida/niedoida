/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "property_kit/gopinathan_jug_analysis.hpp"

#include "core_kit/core_utils.hpp"

#include <cassert>

namespace niedoida {
    namespace property {
        GopinathanAnalysis::GopinathanAnalysis(const core::BasisSet& basis_set,
                                               const arma::mat& ort_P_alpha,
                                               const arma::mat& ort_P_beta)
        {
            assert(ort_P_alpha.n_rows == ort_P_beta.n_rows);
            assert(ort_P_alpha.n_rows == basis_set.real_size());

            const std::vector<std::size_t> m_no_contractions_in_atom =
                no_contractions_in_atom(basis_set);

            const std::vector<std::size_t> m_first_contraction_in_atom =
                first_contraction_in_atom(basis_set);

            const std::size_t no_atoms = m_no_contractions_in_atom.size();

            m_bond_orders = arma::zeros<arma::mat>(no_atoms, no_atoms);

            for (std::size_t a = 0; a < no_atoms; ++a) {
                for (std::size_t b = 0; b < no_atoms; ++b) {
                    for (std::size_t i = m_first_contraction_in_atom[a];
                         i < m_first_contraction_in_atom[a] +
                                 m_no_contractions_in_atom[a];
                         ++i) {
                        for (std::size_t j = m_first_contraction_in_atom[b];
                             j < m_first_contraction_in_atom[b] +
                                     m_no_contractions_in_atom[b];
                             ++j) {
                            m_bond_orders(a, b) +=
                                std::pow(ort_P_alpha(i, j), 2) +
                                std::pow(ort_P_beta(i, j), 2);
                        }
                    }
                }
            }
        }
    }
}
