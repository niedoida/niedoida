/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/schwartz_estimator.hpp"

#include <boost/multi_array.hpp>
#include <boost/next_prior.hpp>

#include "misc_kit/dispatcher.hpp"

namespace niedoida {

    namespace core {

        SchwartzEstimator::SchwartzEstimator(
            const System& system, const TwoElectronIntegralEngine& ie)
        {
            // cache shell sizes etc
            std::vector<const Shell*> shells;
            for (auto abs : system.basis_set.atomic_basis_sets())
                for (auto shell : abs->valence_shells())
                    shells.push_back(shell);

            const std::size_t no_shells = shells.size();

            std::vector<unsigned> shell_sizes;
            shell_sizes.reserve(no_shells);

            for (const Shell* s : shells)
                shell_sizes.push_back(s->real_size());

            const std::size_t no_contractions =
                std::accumulate(shell_sizes.begin(), shell_sizes.end(), 0u);

            std::vector<std::size_t> first_contraction_in_shell;
            first_contraction_in_shell.push_back(0);
            std::partial_sum(shell_sizes.begin(),
                             boost::prior(shell_sizes.end()),
                             back_inserter(first_contraction_in_shell));

            m_max_diagonal_ints = arma::zeros<arma::mat>(no_shells, no_shells);
            m_max_diagonal_ints_orb =
                arma::zeros<arma::mat>(no_contractions, no_contractions);

            std::vector<Request> requests;
            requests.reserve(no_shells);

            const std::size_t max_shell_size =
                *std::max_element(shell_sizes.begin(), shell_sizes.end());

            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;
            boost::multi_array<double, 2> buf(
                boost::extents[no_shells][max_shell_size2 * max_shell_size2]);

            // calc diagonal elements
            AAAAShellQuartetIndexGenerator aaaa_begin(no_shells);
            AAAAShellQuartetIndexGenerator aaaa_end = aaaa_begin.make_end();

            {
                std::unique_ptr<niedoida::misc::Dispatcher> d(
                    niedoida::misc::dispatcher(m_comm, no_shells));
                ShellQuartetIndexGeneratorCache<AAAAShellQuartetIndexGenerator>
                    sqic(aaaa_begin);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {
                    AAAAShellQuartetIndexGenerator i =
                        sqic.get(task_info->first);

                    for (unsigned long k = task_info->first;
                         k != task_info->second && i != aaaa_end;
                         ++k, ++i) {
                        const Request request = {*i, false, &buf[(*i)[0]][0]};

                        requests.push_back(request);
                    }

                    sqic.store(task_info->second, i);
                }
            }

            ie.calc(requests);

            for (std::size_t r = 0; r < requests.size(); ++r) {
                const Request& request = requests[r];
                const unsigned s = request.shells[0];
                const unsigned b = first_contraction_in_shell[s];
                const unsigned n = shell_sizes[s];

                for (unsigned i = b; i < b + n; ++i) {
                    for (unsigned j = i; j < b + n; ++j) {
                        const double g =
                            *(request.results +
                              ((((i - b) * n + (j - b)) * n + (i - b)) * n) +
                              (j - b));
                        m_max_diagonal_ints_orb(i, j) = std::sqrt(std::abs(g));
                        m_max_diagonal_ints_orb(j, i) =
                            m_max_diagonal_ints_orb(i, j);
                    }
                }
            }

            requests.clear();
            requests.reserve((no_shells * (no_shells - 1)) / 2);

            buf.resize(boost::extents[(no_shells * (no_shells - 1)) / 2]
                                     [max_shell_size2 * max_shell_size2]);

            // calc nondiagonal elements
            ABABShellQuartetIndexGenerator abab_begin(no_shells);
            ABABShellQuartetIndexGenerator abab_end = abab_begin.make_end();

            {
                std::unique_ptr<niedoida::misc::Dispatcher> d(
                    niedoida::misc::dispatcher(
                        m_comm, (no_shells * (no_shells - 1)) / 2));
                ShellQuartetIndexGeneratorCache<ABABShellQuartetIndexGenerator>
                    sqic(abab_begin);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {
                    ABABShellQuartetIndexGenerator i =
                        sqic.get(task_info->first);

                    for (unsigned long k = task_info->first;
                         k != task_info->second && i != abab_end;
                         ++k, ++i) {
                        const Request request = {
                            *i,
                            false,
                            &buf[((*i)[1] * ((*i)[1] - 1)) / 2 + (*i)[0]][0]};

                        requests.push_back(request);
                    }
                    sqic.store(task_info->second, i);
                }
            }

            ie.calc(requests);

            for (std::size_t r = 0; r < requests.size(); ++r) {
                const Request& request = requests[r];
                const unsigned s1 = request.shells[0];
                const unsigned s2 = request.shells[1];
                const unsigned b1 = first_contraction_in_shell[s1];
                const unsigned b2 = first_contraction_in_shell[s2];
                const unsigned n1 = shell_sizes[s1];
                const unsigned n2 = shell_sizes[s2];

                for (unsigned i = b1; i < b1 + n1; ++i) {
                    for (unsigned j = std::max(i, b2); j < b2 + n2; ++j) {
                        const double g =
                            *(request.results +
                              ((((i - b1) * n2 + (j - b2)) * n1 + (i - b1)) *
                               n2) +
                              (j - b2));
                        m_max_diagonal_ints_orb(i, j) = std::sqrt(std::abs(g));
                        m_max_diagonal_ints_orb(j, i) =
                            m_max_diagonal_ints_orb(i, j);
                    }
                }
            }

            arma::mat partial = m_max_diagonal_ints_orb;
            m_max_diagonal_ints_orb =
                arma::zeros<arma::mat>(no_contractions, no_contractions);

            boost::mpi::all_reduce(m_comm,
                                   partial.memptr(),
                                   partial.n_elem,
                                   m_max_diagonal_ints_orb.memptr(),
                                   std::plus<double>());

            for (unsigned s1 = 0; s1 < no_shells; ++s1) {
                for (unsigned s2 = s1; s2 < no_shells; ++s2) {
                    const unsigned b1 = first_contraction_in_shell[s1];
                    const unsigned b2 = first_contraction_in_shell[s2];
                    const unsigned n1 = shell_sizes[s1];
                    const unsigned n2 = shell_sizes[s2];

                    double max = 0;
                    for (unsigned i = b1; i < b1 + n1; ++i) {
                        for (unsigned j = std::max(i, b2); j < b2 + n2; ++j) {
                            if (m_max_diagonal_ints_orb(i, j) > max)
                                max = m_max_diagonal_ints_orb(i, j);
                        }
                    }
                    m_max_diagonal_ints(s1, s2) = max;
                    m_max_diagonal_ints(s2, s1) = m_max_diagonal_ints(s1, s2);
                }
            }
        }
    }
}
