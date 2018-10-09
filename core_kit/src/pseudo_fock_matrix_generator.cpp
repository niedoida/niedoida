/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/pseudo_fock_matrix_generator.hpp"

#include <boost/mpi/collectives.hpp>

#include "misc_kit/dispatcher.hpp"

namespace niedoida {
    namespace core {
        arma::mat pseudo_density_matrix(const arma::mat& mo_coeffs,
                                        const arma::mat& ci_coeffs)
        {
            typedef arma::mat::size_type size_type;

            const size_type eff_no_occ = ci_coeffs.n_rows;
            const size_type eff_no_virt = ci_coeffs.n_cols;
            const size_type eff_no_orbs = eff_no_occ + eff_no_virt;

            assert(mo_coeffs.n_cols == eff_no_orbs);

            const arma::mat C_occ = mo_coeffs.cols(0, eff_no_occ - 1);
            const arma::mat C_virt =
                mo_coeffs.cols(eff_no_occ, eff_no_orbs - 1);

            return C_occ * ci_coeffs * trans(C_virt);
        }

        PseudoFockMatrixGenerator::PseudoFockMatrixGenerator(
            std::shared_ptr<const System> system,
            std::unique_ptr<TwoElectronIntegralEngine> two_e_int_eng,
            double treshold) :
            m_system(system),
            m_bs_info(system->basis_set),
            m_2ie(std::move(two_e_int_eng)),
            m_treshold(treshold),
            m_schwartz(*m_system, *m_2ie),
            m_max_no_requests(m_2ie->preferred_no_requests()),
            m_max_P(new double[m_max_no_requests])
        {
            const std::size_t no_shells = m_bs_info.m_shell_sizes.size();

            // shell compressed density matrices
            m_max_P_shells = arma::zeros<arma::mat>(no_shells, no_shells);

            // initialize structures used by update

            m_requests.reserve(m_max_no_requests);

            const std::size_t max_shell_size = *std::max_element(
                m_bs_info.m_shell_sizes.begin(), m_bs_info.m_shell_sizes.end());

            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;
            m_buf.resize(max_shell_size2 * max_shell_size2, m_max_no_requests);

            ShellQuartetIndexGenerator sq_begin(no_shells);
            ShellQuartetIndexGenerator sq_end = sq_begin.make_end();

            m_no_shell_quartets = std::distance(sq_begin, sq_end);

            m_P[SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
            m_P[SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            m_J = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                         m_bs_info.m_no_contractions);
            m_K[SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
            m_K[SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
        }

        void
        PseudoFockMatrixGenerator::set_density_matrix(const arma::mat& P_alpha,
                                                      const arma::mat& P_beta)
        {
            m_P[SPIN_ALPHA] = P_alpha;
            m_P[SPIN_BETA] = P_beta;

            assert(m_P[SPIN_ALPHA].n_rows == m_system->basis_set.real_size());
            assert(m_P[SPIN_ALPHA].n_cols == m_system->basis_set.real_size());
            assert(m_P[SPIN_BETA].n_rows == m_system->basis_set.real_size());
            assert(m_P[SPIN_BETA].n_cols == m_system->basis_set.real_size());

            update();

            // fixing diagonal elements
            for (unsigned i = 0; i < m_bs_info.m_no_contractions; ++i)
                m_J(i, i) *= 2;
        }

        void PseudoFockMatrixGenerator::set_max_P_shells(const arma::mat P[2])
        {
            const std::size_t no_shells = m_bs_info.m_shell_sizes.size();

            for (unsigned i = 0; i < no_shells; ++i)
                for (unsigned j = 0; j < no_shells; ++j) {
                    double max = 0;
                    const unsigned b1 =
                        m_bs_info.m_first_contraction_in_shell[i];
                    const unsigned b2 =
                        m_bs_info.m_first_contraction_in_shell[j];
                    const unsigned n1 = m_bs_info.m_shell_sizes[i];
                    const unsigned n2 = m_bs_info.m_shell_sizes[j];
                    for (int s = SPIN_ALPHA; s <= SPIN_BETA; ++s) {
                        for (unsigned k = b1; k < b1 + n1; ++k)
                            for (unsigned l = b2; l < b2 + n2; ++l)
                                if (std::abs(P[s](k, l)) > max)
                                    max = std::abs(P[s](k, l));
                    }
                    m_max_P_shells(i, j) = max;
                }
        }

        double
        PseudoFockMatrixGenerator::max_P(const ShellQuartetIndex& sq) const
        {
            const unsigned s1 = sq[0];
            const unsigned s2 = sq[1];
            const unsigned s3 = sq[2];
            const unsigned s4 = sq[3];

            double max = 0;

            const double P_12 = m_max_P_shells(s1, s2);
            const double P_13 = m_max_P_shells(s1, s3);
            const double P_14 = m_max_P_shells(s1, s4);
            const double P_23 = m_max_P_shells(s2, s3);
            const double P_24 = m_max_P_shells(s2, s4);
            const double P_34 = m_max_P_shells(s3, s4);

            const double P_21 = m_max_P_shells(s2, s1);
            const double P_31 = m_max_P_shells(s3, s1);
            const double P_41 = m_max_P_shells(s4, s1);
            const double P_32 = m_max_P_shells(s3, s2);
            const double P_42 = m_max_P_shells(s4, s2);
            const double P_43 = m_max_P_shells(s4, s3);

            if (P_12 > max)
                max = P_12;
            if (P_13 > max)
                max = P_13;
            if (P_14 > max)
                max = P_14;
            if (P_23 > max)
                max = P_23;
            if (P_24 > max)
                max = P_24;
            if (P_34 > max)
                max = P_34;

            if (P_21 > max)
                max = P_21;
            if (P_31 > max)
                max = P_31;
            if (P_41 > max)
                max = P_41;
            if (P_32 > max)
                max = P_32;
            if (P_42 > max)
                max = P_42;
            if (P_43 > max)
                max = P_43;

            return max;
        }

        void PseudoFockMatrixGenerator::update()
        {
            m_J = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                         m_bs_info.m_no_contractions);
            m_K[SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
            m_K[SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            set_max_P_shells(m_P);

            {
                std::unique_ptr<misc::Dispatcher> d(
                    misc::dispatcher(m_no_shell_quartets));
                const ShellQuartetIndexGenerator sq_begin(
                    m_bs_info.m_shell_sizes.size());
                ShellQuartetIndexGeneratorCache<> sqic(sq_begin);

                while (misc::Dispatcher::TaskInfo task_info = d->get_task()) {
                    ShellQuartetIndexGenerator sq_iterator =
                        sqic.get(task_info->first);

                    update_task(
                        m_P, task_info->first, task_info->second, sq_iterator);

                    sqic.store(task_info->second, sq_iterator);
                }
            }

            reduce();
        }

        void
        PseudoFockMatrixGenerator::update_task(const arma::mat P[2],
                                               unsigned long begin,
                                               unsigned long end,
                                               ShellQuartetIndexGenerator& i)
        {
            ShellQuartetIndexGenerator sq_begin(m_bs_info.m_shell_sizes.size());
            ShellQuartetIndexGenerator sq_end = sq_begin.make_end();

            unsigned n = begin;
            do {
                // pile up requests
                m_requests.clear();
                unsigned r = 0;

                while (n < end && i != sq_end) {

                    // Schwartz inequality based prescreening
                    const double max_integral = m_schwartz.max_integral(*i);

                    m_max_P[r] = max_P(*i);

                    const double max_element =
                        std::abs(m_max_P[r] * max_integral);

                    if (max_element > m_treshold) {

                        const Request request = {*i, false, m_buf.colptr(r)};

                        m_requests.push_back(request);

                        r += 1;
                    }

                    ++i;
                    ++n;

                    if (r >= m_max_no_requests)
                        break;
                }

                // get the integrals
                m_2ie->calc(m_requests);

                // and use'em
                for (unsigned r = 0; r < m_requests.size(); ++r)
                    partial_update(P, m_requests[r], m_max_P[r]);

            } while (n != end && i != sq_end);
        }

        void PseudoFockMatrixGenerator::partial_update(const arma::mat P[2],
                                                       const Request& request,
                                                       double max_P)
        {
            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];
            const unsigned s4 = request.shells[3];

            const unsigned b1 = m_bs_info.m_first_contraction_in_shell[s1];
            const unsigned b2 = m_bs_info.m_first_contraction_in_shell[s2];
            const unsigned b3 = m_bs_info.m_first_contraction_in_shell[s3];
            const unsigned b4 = m_bs_info.m_first_contraction_in_shell[s4];

            const unsigned n1 = m_bs_info.m_shell_sizes[s1];
            const unsigned n2 = m_bs_info.m_shell_sizes[s2];
            const unsigned n3 = m_bs_info.m_shell_sizes[s3];
            const unsigned n4 = m_bs_info.m_shell_sizes[s4];

            const double current_treshold = std::abs(max_P) < 1e-20
                                                ? m_treshold / 1e-20
                                                : m_treshold / std::abs(max_P);

            const ShellQuartetType type = shell_quartet_type(request.shells[0],
                                                             request.shells[1],
                                                             request.shells[2],
                                                             request.shells[3]);

            switch (type) {
            case SHELL_QUARTET_TYPE_ABCD: {
                double* results = request.results;
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k)
                            for (unsigned l = b4; l < b4 + n4; ++l) {
                                const double g = *results++;

                                if (std::abs(g) < current_treshold)
                                    continue;

                                contract_integral(P, i, j, k, l, g);
                            }
                break;
            }
            case SHELL_QUARTET_TYPE_AACD: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = std::max(i, b2); j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k)
                            for (unsigned l = b4; l < b4 + n4; ++l) {
                                double g = *(request.results +
                                             ((((i - b1) * n2 + (j - b2)) * n3 +
                                               (k - b3)) *
                                              n4) +
                                             (l - b4));

                                if (std::abs(g) < current_treshold)
                                    continue;

                                if (i == j)
                                    g /= 2;

                                contract_integral(P, i, j, k, l, g);
                            }
                break;
            }
            case SHELL_QUARTET_TYPE_ABCC: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k)
                            for (unsigned l = std::max(k, b4); l < b4 + n4;
                                 ++l) {
                                double g = *(request.results +
                                             ((((i - b1) * n2 + (j - b2)) * n3 +
                                               (k - b3)) *
                                              n4) +
                                             (l - b4));

                                if (std::abs(g) < current_treshold)
                                    continue;

                                if (k == l)
                                    g *= 0.5;

                                contract_integral(P, i, j, k, l, g);
                            }
                break;
            }
            default: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = std::max(i, b2); j < b2 + n2; ++j) {
                        for (unsigned k = std::max(i, b3); k < b3 + n3; ++k) {
                            const unsigned l0 =
                                k == i ? std::max(j, b4) : std::max(k, b4);
                            for (unsigned l = l0; l < b4 + n4; ++l) {
                                double g = *(request.results +
                                             ((((i - b1) * n2 + (j - b2)) * n3 +
                                               (k - b3)) *
                                              n4) +
                                             (l - b4));

                                if (std::abs(g) < current_treshold)
                                    continue;

                                if (i == j)
                                    g *= 0.5;
                                if (k == l)
                                    g *= 0.5;
                                if (i == k && j == l)
                                    g *= 0.5;

                                contract_integral(P, i, j, k, l, g);
                            }
                        }
                    }
                break;
            }
            }
        }

        void PseudoFockMatrixGenerator::reduce()
        {
            boost::mpi::communicator world;

            const arma::mat partial_J = m_J;
            m_J = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                         m_bs_info.m_no_contractions);

            boost::mpi::all_reduce(world,
                                   partial_J.memptr(),
                                   partial_J.n_elem,
                                   m_J.memptr(),
                                   std::plus<double>());

            arma::mat partial_K;
            for (int s = SPIN_ALPHA; s <= SPIN_BETA; ++s) {
                partial_K = m_K[s];
                m_K[s] = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                                m_bs_info.m_no_contractions);

                boost::mpi::all_reduce(world,
                                       partial_K.memptr(),
                                       partial_K.n_elem,
                                       m_K[s].memptr(),
                                       std::plus<double>());
            }
        }
    }
}
