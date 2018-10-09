/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "property_kit/mayer_analysis.hpp"

#include "core_kit/core_utils.hpp"

namespace niedoida {
    namespace property {
        MayerAnalysis::MayerAnalysis(const core::BasisSet& basis_set,
                                     const arma::mat& P_alpha,
                                     const arma::mat& P_beta)
        {
            const arma::mat& S = *basis_set.overlap_matrix;

            assert(P_alpha.n_rows == P_beta.n_rows);
            assert(S.n_rows == P_alpha.n_rows);
            assert(S.n_rows == basis_set.real_size());

            const std::vector<std::size_t> m_no_contractions_in_atom =
                no_contractions_in_atom(basis_set);

            const std::vector<std::size_t> m_first_contraction_in_atom =
                first_contraction_in_atom(basis_set);

            const std::size_t no_atoms = m_no_contractions_in_atom.size();

            const arma::mat PS_alpha = P_alpha * S;
            const arma::mat PS_beta = P_beta * S;

            // bond orders
            m_bond_orders = arma::zeros<arma::mat>(no_atoms, no_atoms);
            for (std::size_t a = 0; a < no_atoms; ++a) {
                for (std::size_t b = 0; b < a; ++b) {
                    for (std::size_t i = m_first_contraction_in_atom[a];
                         i < m_first_contraction_in_atom[a] +
                                 m_no_contractions_in_atom[a];
                         ++i) {
                        for (std::size_t j = m_first_contraction_in_atom[b];
                             j < m_first_contraction_in_atom[b] +
                                     m_no_contractions_in_atom[b];
                             ++j) {
                            m_bond_orders(a, b) +=
                                2 * (PS_alpha(i, j) * PS_alpha(j, i) +
                                     PS_beta(i, j) * PS_beta(j, i));
                            m_bond_orders(b, a) = m_bond_orders(a, b);
                        }
                    }
                }
            }

            // free valences
            m_free_valences = arma::zeros<arma::vec>(no_atoms);
            for (std::size_t a = 0; a < no_atoms; ++a) {
                for (std::size_t i = m_first_contraction_in_atom[a];
                     i < m_first_contraction_in_atom[a] +
                             m_no_contractions_in_atom[a];
                     ++i) {
                    for (std::size_t j = m_first_contraction_in_atom[a];
                         j < m_first_contraction_in_atom[a] +
                                 m_no_contractions_in_atom[a];
                         ++j) {
                        m_free_valences(a) += (PS_alpha(i, j) - PS_beta(i, j)) *
                                              (PS_alpha(j, i) - PS_beta(j, i));
                    }
                }
            }

            // total valences
            m_total_valences = arma::zeros<arma::vec>(no_atoms);
            for (std::size_t a = 0; a < no_atoms; ++a) {
                m_total_valences(a) = m_free_valences(a);
                for (std::size_t b = 0; b < no_atoms; ++b) {
                    if (b != a)
                        m_total_valences(a) += m_bond_orders(a, b);
                }
            }
        }
    }
}
