/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/occupations.hpp"
#include "io_kit/io_kit.hpp"

namespace niedoida {

    namespace core {

        AufbauOccupations::AufbauOccupations(unsigned no_basis_functions,
                                             unsigned no_electrons,
                                             unsigned multiplicity,
                                             boost::optional<double> tresh) :
            m_tresh(tresh)
        {
            m_occ[SPIN_ALPHA] = arma::zeros<arma::vec>(no_basis_functions);
            m_occ[SPIN_BETA] = arma::zeros<arma::vec>(no_basis_functions);
            m_n[SPIN_BETA] = (no_electrons - multiplicity + 1) / 2;
            m_n[SPIN_ALPHA] = no_electrons - m_n[SPIN_BETA];

            if (!m_tresh)
                for (int s = SPIN_ALPHA; s <= SPIN_BETA; ++s)
                    for (unsigned i = 0; i < m_n[s]; ++i)
                        m_occ[s](i) = 1.0;
        }

        const arma::vec& AufbauOccupations::occupation_numbers(
            const arma::vec& epsilons, const arma::mat& mocoeffs, Spin s)
        {
            assert(m_occ[SPIN_ALPHA].size() == epsilons.size());

            if (m_tresh) {
                unsigned i = 0;
                while (i < m_n[s]) {

                    // compute quasi-degeneracy of the current level in `k'
                    unsigned k = 1;
                    while (i + k < m_occ[s].size() &&
                           std::abs(epsilons(i) - epsilons(i + k)) < *m_tresh)
                        ++k;

                    std::fill(m_occ[s].begin() + i,
                              m_occ[s].begin() + i + k,
                              std::min(1., double(m_n[s] - i) / k));
                    i += k;
                }
                std::fill(m_occ[s].begin() + i, m_occ[s].end(), 0.);
            }
            return m_occ[s];
        }

        FermiOccupations::FermiOccupations(unsigned no_basis_functions,
                                           unsigned no_electrons,
                                           unsigned multiplicity,
                                           double smear) :
            m_beta(1.0 / smear)
        {
            m_occ[SPIN_ALPHA] = arma::zeros<arma::vec>(no_basis_functions);
            m_occ[SPIN_BETA] = arma::zeros<arma::vec>(no_basis_functions);
            m_n[SPIN_BETA] = (no_electrons - multiplicity + 1) / 2;
            m_n[SPIN_ALPHA] = no_electrons - m_n[SPIN_BETA];
        }

        const arma::vec& FermiOccupations::occupation_numbers(
            const arma::vec& epsilons, const arma::mat& /*coeffs*/, Spin s)
        {
            // FIXME
            const double fermi_level =
                0.5 * (epsilons[m_n[s] - 1] + epsilons[m_n[s]]);
            for (unsigned i = 0; i < m_occ[s].size(); ++i)
                m_occ[s](i) =
                    1.0 / (std::exp((epsilons[i] - fermi_level) * m_beta) + 1);
            return m_occ[s];
        }

        AverageOccupations::AverageOccupations(unsigned no_basis_functions,
                                               unsigned no_electrons,
                                               unsigned no_deg_states,
                                               unsigned no_deg_electrons)
        {
            m_occupations[SPIN_ALPHA] =
                arma::zeros<arma::vec>(no_basis_functions);
            m_occupations[SPIN_BETA] =
                arma::zeros<arma::vec>(no_basis_functions);

            const double avr_occ_alpha =
                (double)std::min(no_deg_electrons, no_deg_states) /
                no_deg_states;
            const double avr_occ_beta =
                (double)std::max(
                    (signed)no_deg_electrons - (signed)no_deg_states, 0) /
                no_deg_states;

            const unsigned no_core_states =
                (no_electrons - no_deg_electrons) / 2;

            for (unsigned i = 0; i < no_core_states; ++i)
                m_occupations[SPIN_ALPHA](i) = m_occupations[SPIN_BETA](i) =
                    1.0;

            for (unsigned i = 0; i < no_deg_states; ++i) {
                m_occupations[SPIN_ALPHA](i + no_core_states) = avr_occ_alpha;
                m_occupations[SPIN_BETA](i + no_core_states) = avr_occ_beta;
            }
        }

        namespace { /* Functions used to implement MaximumOverlapOccupations */

            // Compare two std::pair<> objects by their first items.
            // Used below for sorting a vector of such pairs into descending
            // order.
            template <typename T>
            bool cmp_first_items(std::pair<T, unsigned> x,
                                 std::pair<T, unsigned> y)
            {
                return x.first > y.first;
            }

            // Sort values into descending order and return
            // the std::vector<unsigned> containing
            // the original positions.
            template <typename T>
            std::vector<unsigned> sort_vector(arma::Col<T>& values)
            {
                std::vector<std::pair<T, unsigned>> values_with_indices;
                for (unsigned i = 0; i < values.size(); ++i)
                    values_with_indices.push_back(
                        std::pair<T, unsigned>(values(i), i));
                std::sort(values_with_indices.begin(),
                          values_with_indices.end(),
                          cmp_first_items<T>);
                std::vector<unsigned> index;
                for (unsigned i = 0; i < values.size(); ++i) {
                    values(i) = values_with_indices[i].first;
                    index.push_back(values_with_indices[i].second);
                }
                return index;
            }
        }

        MaximumOverlapOccupations::MaximumOverlapOccupations(
            unsigned no_electrons,
            unsigned multiplicity,
            const arma::mat& overlap_matrix,
            const arma::mat& initial_mocoeffs_alpha,
            const arma::mat& initial_mocoeffs_beta) :
            AufbauOccupations(overlap_matrix.n_rows,
                              no_electrons,
                              multiplicity,
                              boost::optional<double>()),
            m_S(overlap_matrix)
        {
            assert(initial_mocoeffs_alpha.n_rows ==
                   initial_mocoeffs_beta.n_rows);
            assert(initial_mocoeffs_alpha.n_cols ==
                   initial_mocoeffs_beta.n_cols);
            assert(initial_mocoeffs_alpha.n_rows == overlap_matrix.n_rows);

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::DEBUG,
                "MaximumOverlapOccupations constructor: "
                "initial_mocoeffs_alpha ",
                initial_mocoeffs_alpha);
            niedoida::io::Log::instance().write(
                niedoida::io::Logger::DEBUG,
                "MaximumOverlapOccupations constructor: initial_mocoeffs_beta ",
                initial_mocoeffs_beta);

            for (int s = SPIN_ALPHA; s <= SPIN_BETA; ++s)
                m_C0[s] = arma::zeros<arma::mat>(initial_mocoeffs_alpha.n_rows,
                                                 m_n[s]);

            m_C0[SPIN_ALPHA].cols(0, m_n[SPIN_ALPHA] - 1) =
                initial_mocoeffs_alpha.cols(0, m_n[SPIN_ALPHA] - 1);
            m_C0[SPIN_BETA].cols(0, m_n[SPIN_BETA] - 1) =
                initial_mocoeffs_beta.cols(0, m_n[SPIN_BETA] - 1);

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::DEBUG,
                "MaximumOverlapOccupations constructor: m_C0[SPIN_ALPHA] ",
                m_C0[SPIN_ALPHA]);
            niedoida::io::Log::instance().write(
                niedoida::io::Logger::DEBUG,
                "MaximumOverlapOccupations constructor: m_C0[SPIN_BETA]  ",
                m_C0[SPIN_BETA]);
        }

        const arma::vec&
        MaximumOverlapOccupations::occupation_numbers(const arma::mat& mocoeffs,
                                                      Spin s)
        {
            // (for details see: Besley, Gilbert, Gill (2009): J. Chem. Phys.
            // 130, 124308)

            const arma::mat O = trans(m_C0[s]) * m_S * mocoeffs;

            niedoida::io::Log::instance().write(niedoida::io::Logger::DEBUG,
                                                "MaximumOverlapOccupations: s ",
                                                s);
            niedoida::io::Log::instance().write(
                niedoida::io::Logger::DEBUG,
                "MaximumOverlapOccupations: m_C0[s] ",
                m_C0[s]);

            arma::vec p =
                arma::zeros<arma::vec>(mocoeffs.n_cols); // projections
            for (unsigned i = 0; i < O.n_cols; ++i)
                for (unsigned j = 0; j < O.n_rows; ++j)
                    p(i) += O(j, i) * O(j, i);

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::DEBUG,
                "MaximumOverlapOccupations: occupation_numbers: projections",
                p);

            // Sort the projections in descending order and obtain their
            // original indices (to know which orbital a given element of `p[]'
            // refers to)
            const std::vector<unsigned> index = sort_vector(p);

            // Occupy only the orbitals with the largest values of `p[]',
            // i.e., orbitals whose numbers are given by the first m_n[s]
            // elements of `index[]'.

            m_occ[s] = arma::zeros<arma::vec>(m_occ[s].size());
            for (unsigned i = 0; i < m_n[s]; ++i)
                m_occ[s][index[i]] = 1.0;

            for (unsigned i = 0; i < m_n[s]; ++i)
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::NORMAL,
                    "MaximumOverlapOccupations: m_occ[s]",
                    m_occ[s]);

            return m_occ[s];
        }
    }
}
