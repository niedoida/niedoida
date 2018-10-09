/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/fock_matrix_generator.hpp"

#include <cassert>

#include "misc_kit/dispatcher.hpp"
#include "misc_kit/threadpool.hpp"

#include "io_kit/io_kit.hpp"

namespace niedoida {

    namespace core {

        CombinedJKMatrixGenerator::CombinedJKMatrixGenerator(
            std::shared_ptr<const System> system,
            std::shared_ptr<const TwoElectronIntegralEngineFactory>
                two_e_ie_factory,
            double threshold,
            std::size_t cache_size,
            std::unique_ptr<ShellQuartetPetiteList> sq_petite_list) :
            m_system(system),
            m_bs_info(system->basis_set),
            m_prescreening(threshold, *system),
            m_sq_petite_list(std::move(sq_petite_list)),
            m_sspg(m_bs_info.m_shell_sizes.size(),
                   m_prescreening.schwartz,
                   m_prescreening.threshold * 0.01),
            m_batch(m_sspg)
        {
            if (!m_system->integral_cache)
                m_system->integral_cache.reset(
                    new IntegralCache(m_system, cache_size));

            const std::size_t no_shells = m_bs_info.m_shell_sizes.size();

            // shell compressed density matrices
            m_max_P_shells = arma::zeros<arma::mat>(no_shells, no_shells);

            m_no_shell_quartets = m_batch.end;

            m_P[SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
            m_P[SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
            m_prev_P[SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
            m_prev_P[SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            m_J = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                         m_bs_info.m_no_contractions);
            m_K[SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
            m_K[SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            for (std::size_t i = 0;
                 i < niedoida::misc::GlobalThreadPool::no_threads();
                 ++i) {
                m_workhorses.push_back(
                    new WorkHorse(system,
                                  two_e_ie_factory->make(system),
                                  *m_system->integral_cache,
                                  m_cache_mutex,
                                  m_prescreening,
                                  m_P,
                                  m_delta_P,
                                  m_max_P_shells,
                                  m_batch,
                                  m_bs_info));
            }
        }

        void CombinedJKMatrixGenerator::set_density_matrix(
            const arma::mat& P_alpha, const arma::mat& P_beta, bool incremental)
        {
            niedoida::io::Log::Section section("forming JK");

            assert(m_P[SPIN_ALPHA].n_rows == m_system->basis_set.real_size());
            assert(m_P[SPIN_ALPHA].n_cols == m_system->basis_set.real_size());
            assert(m_P[SPIN_BETA].n_rows == m_system->basis_set.real_size());
            assert(m_P[SPIN_BETA].n_cols == m_system->basis_set.real_size());

            m_prev_P[SPIN_ALPHA] = m_P[SPIN_ALPHA];
            m_prev_P[SPIN_BETA] = m_P[SPIN_BETA];

            m_P[SPIN_ALPHA] = P_alpha;
            m_P[SPIN_BETA] = P_beta;

            m_delta_P[SPIN_ALPHA] = m_P[SPIN_ALPHA] - m_prev_P[SPIN_ALPHA];
            m_delta_P[SPIN_BETA] = m_P[SPIN_BETA] - m_prev_P[SPIN_BETA];

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL, "incremental", int(incremental));

            bool polarized = norm(P_alpha - P_beta, "inf") != 0;

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL, "polarized", int(polarized));

            set_max_P_shells(m_bs_info.m_shell_sizes.size(),
                             incremental ? m_delta_P : m_P,
                             polarized);

            for (std::size_t i = 0;
                 i < niedoida::misc::GlobalThreadPool::no_threads();
                 ++i)
                m_workhorses[i].reset(incremental, polarized);

            if (incremental) {
                // avoid double (actually multiple) summing in parallel runs
                if (m_comm.rank() != 0) {
                    m_J.zeros();
                    m_K[SPIN_ALPHA].zeros();
                    m_K[SPIN_BETA].zeros();
                } else {
                    // diagonal elements are generated twice too small, and
                    // fixed afterwards; keep the reference consistent
                    for (unsigned i = 0; i < m_bs_info.m_no_contractions; ++i) {
                        m_J(i, i) *= 0.5;
                        m_K[SPIN_ALPHA](i, i) *= 0.5;
                        m_K[SPIN_BETA](i, i) *= 0.5;
                    }
                }
            } else {
                m_J.zeros();
                m_K[SPIN_ALPHA].zeros();
                m_K[SPIN_BETA].zeros();
            }

            update(incremental, polarized);

            // fix diagonal elements
            for (unsigned i = 0; i < m_bs_info.m_no_contractions; ++i) {
                m_J(i, i) *= 2;
                m_K[SPIN_ALPHA](i, i) *= 2;
                m_K[SPIN_BETA](i, i) *= 2;
            }

            // symmetrize
            m_J = symmatu(m_J);
            m_K[SPIN_ALPHA] = symmatu(m_K[SPIN_ALPHA]);
            m_K[SPIN_BETA] = symmatu(m_K[SPIN_BETA]);
        }

        void CombinedJKMatrixGenerator::set_max_P_shells(
            const std::size_t no_shells, const arma::mat P[2], bool polarized)
        {
            for (unsigned i = 0; i < no_shells; ++i)
                for (unsigned j = 0; j <= i; ++j) {
                    double max = 0;
                    const unsigned b1 =
                        m_bs_info.m_first_contraction_in_shell[i];
                    const unsigned b2 =
                        m_bs_info.m_first_contraction_in_shell[j];
                    const unsigned n1 = m_bs_info.m_shell_sizes[i];
                    const unsigned n2 = m_bs_info.m_shell_sizes[j];
                    for (unsigned k = b1; k < b1 + n1; ++k)
                        for (unsigned l = b2; l < b2 + n2; ++l)
                            if (std::abs(P[SPIN_ALPHA](k, l)) > max)
                                max = std::abs(P[SPIN_ALPHA](k, l));
                    if (polarized) {
                        for (unsigned k = b1; k < b1 + n1; ++k)
                            for (unsigned l = b2; l < b2 + n2; ++l)
                                if (std::abs(P[SPIN_BETA](k, l)) > max)
                                    max = std::abs(P[SPIN_BETA](k, l));
                    }
                    m_max_P_shells(i, j) = max;
                }

            m_max_P_shells = symmatl(m_max_P_shells);
        }

        void CombinedJKMatrixGenerator::update(bool incremental, bool polarized)
        {
            {
                std::unique_ptr<niedoida::misc::Dispatcher> d(
                    niedoida::misc::dispatcher(m_comm, m_no_shell_quartets));
                const SignificantShellQuartetIndexGenerator sq_begin(m_sspg);
                ShellQuartetIndexGeneratorCache<
                    SignificantShellQuartetIndexGenerator>
                    sqic(sq_begin);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {
                    {
                        std::unique_lock<std::mutex> queue_lock(m_batch.mutex);

                        m_batch.begin = task_info->first;
                        m_batch.end = task_info->second;
                        m_batch.sq = sqic.get(task_info->first);
                    }

                    for (WorkHorse& w : m_workhorses) {
                        niedoida::misc::ThreadPool::Task t(
                            std::bind(&WorkHorse::run, &w));
                        niedoida::misc::GlobalThreadPool::instance().schedule(
                            t);
                    }

                    niedoida::misc::GlobalThreadPool::instance().wait();

                    {
                        std::unique_lock<std::mutex> queue_lock(m_batch.mutex);

                        sqic.store(m_batch.end, m_batch.sq);
                    }
                }
            }

            reduce(polarized);
        }

        void CombinedJKMatrixGenerator::reduce(bool polarized)
        {
            arma::mat partial = m_J;

            for (std::size_t i = 0;
                 i < niedoida::misc::GlobalThreadPool::no_threads();
                 ++i)
                partial += m_workhorses[i].m_J;

            boost::mpi::all_reduce(m_comm,
                                   partial.memptr(),
                                   partial.n_elem,
                                   m_J.memptr(),
                                   std::plus<double>());

            partial = m_K[SPIN_ALPHA];
            for (std::size_t i = 0;
                 i < niedoida::misc::GlobalThreadPool::no_threads();
                 ++i)
                partial += m_workhorses[i].m_K[SPIN_ALPHA];

            boost::mpi::all_reduce(m_comm,
                                   partial.memptr(),
                                   partial.n_elem,
                                   m_K[SPIN_ALPHA].memptr(),
                                   std::plus<double>());

            if (polarized) {
                partial = m_K[SPIN_BETA];
                for (std::size_t i = 0;
                     i < niedoida::misc::GlobalThreadPool::no_threads();
                     ++i)
                    partial += m_workhorses[i].m_K[SPIN_BETA];

                boost::mpi::all_reduce(m_comm,
                                       partial.memptr(),
                                       partial.n_elem,
                                       m_K[SPIN_BETA].memptr(),
                                       std::plus<double>());
            } else {
                m_K[SPIN_BETA] = m_K[SPIN_ALPHA];
            }
        }

        CombinedJKMatrixGenerator::WorkHorse::WorkHorse(
            std::shared_ptr<const System> system,
            std::unique_ptr<TwoElectronIntegralEngine> ie,
            IntegralCache& cache,
            std::mutex& cache_mutex,
            const Prescreening& prescreening,
            const arma::mat* const P,
            const arma::mat* const delta_P,
            const arma::mat& max_P_shells,
            Batch& batch,
            const BasisSetInfo& bs_info) :
            m_bs_info(bs_info),
            m_cycle(0),
            m_2ie(std::move(ie)),
            m_cache(cache),
            m_cache_mutex(cache_mutex),
            m_prescreening(prescreening),
            m_P(P),
            m_delta_P(delta_P),
            m_max_no_requests(m_2ie->preferred_no_requests()),
            m_max_P(new double[m_max_no_requests]),
            m_max_P_shells(max_P_shells),
            m_batch(batch)
        {
            m_requests.reserve(m_max_no_requests);

            const std::size_t max_shell_size = *std::max_element(
                m_bs_info.m_shell_sizes.begin(), m_bs_info.m_shell_sizes.end());

            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;

            m_buf.resize(boost::extents[m_max_no_requests]
                                       [max_shell_size2 * max_shell_size2]);

            m_J = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                         m_bs_info.m_no_contractions);
            m_K[SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
            m_K[SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
        }

        void CombinedJKMatrixGenerator::WorkHorse::reset(bool incremental,
                                                         bool polarized)
        {
            m_incremental = incremental;
            m_polarized = polarized;

            m_J.zeros();
            m_K[SPIN_ALPHA].zeros();
            m_K[SPIN_BETA].zeros();

            m_cycle += 1;
        }

        void CombinedJKMatrixGenerator::WorkHorse::run()
        {
            update_task(m_incremental ? m_delta_P : m_P);
        }

        double CombinedJKMatrixGenerator::WorkHorse::max_P(
            const ShellQuartetIndex& sq) const
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

            return max;
        }

        void CombinedJKMatrixGenerator::WorkHorse::update_task(
            const arma::mat* const P)
        {
            for (;;) {
                // pile up requests
                m_requests.clear();
                unsigned r = 0;

                {
                    std::unique_lock<std::mutex> lock(m_batch.mutex);

                    if (m_batch.begin >= m_batch.end)
                        break;

                    while (m_batch.begin < m_batch.end) {

                        // Schwartz inequality based prescreening
                        const double max_integral =
                            m_prescreening.schwartz.max_integral(*m_batch.sq);

                        m_max_P[r] = max_P(*m_batch.sq);

                        const double max_element =
                            std::abs(m_max_P[r] * max_integral);

                        if (max_element > m_prescreening.threshold) {

                            const Request request = {
                                *m_batch.sq, false, &m_buf[r][0]};

                            m_requests.push_back(request);

                            r += 1;
                        }

                        ++m_batch.sq;
                        ++m_batch.begin;

                        if (r >= m_max_no_requests)
                            break;
                    }
                }

                // try to get the integrals from cache
                if (m_cycle > 1)
                    for (Request& r : m_requests)
                        m_cache.retrieve(r);

                // get the integrals
                m_2ie->calc(m_requests);

                // try to cache integrals
                if (m_cycle <= 1) {
                    std::unique_lock<std::mutex> lock(m_cache_mutex);
                    for (Request& r : m_requests)
                        m_cache.store(r);
                }

                // and use'em
                for (unsigned r = 0; r < m_requests.size(); ++r) {

                    const Request& base_request = m_requests[r];
                    const double max_P = m_max_P[r];

                    if (m_polarized)
                        partial_update_polarized(P, base_request, max_P);
                    else
                        partial_update_unpolarized(
                            P[SPIN_ALPHA], base_request, max_P);
                }
            }
        }

        void CombinedJKMatrixGenerator::WorkHorse::partial_update_polarized(
            const arma::mat P[2], const Request& request, double max_P)
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

            const double current_threshold =
                std::abs(max_P) < 1e-20
                    ? m_prescreening.threshold / 1e-20
                    : m_prescreening.threshold / std::abs(max_P);

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
                                double g = *results++;

                                if (std::abs(g) < current_threshold)
                                    continue;

                                contract_integral_polarized(P, i, j, k, l, g);
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

                                if (std::abs(g) < current_threshold)
                                    continue;

                                if (i == j)
                                    g /= 2;

                                contract_integral_polarized(P, i, j, k, l, g);
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

                                if (std::abs(g) < current_threshold)
                                    continue;

                                if (k == l)
                                    g *= 0.5;

                                contract_integral_polarized(P, i, j, k, l, g);
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

                                if (std::abs(g) < current_threshold)
                                    continue;

                                if (i == j)
                                    g *= 0.5;
                                if (k == l)
                                    g *= 0.5;
                                if (i == k && j == l)
                                    g *= 0.5;

                                contract_integral_polarized(P, i, j, k, l, g);
                            }
                        }
                    }
                break;
            }
            }
        }

        void CombinedJKMatrixGenerator::WorkHorse::partial_update_unpolarized(
            const arma::mat& P, const Request& request, double max_P)
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

            const double current_threshold =
                std::abs(max_P) < 1e-20
                    ? m_prescreening.threshold / 1e-20
                    : m_prescreening.threshold / std::abs(max_P);

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
                                double g = *results++;

                                if (std::abs(g) < current_threshold)
                                    continue;

                                contract_integral_unpolarized(P, i, j, k, l, g);
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

                                if (std::abs(g) < current_threshold)
                                    continue;

                                if (i == j)
                                    g /= 2;

                                contract_integral_unpolarized(P, i, j, k, l, g);
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

                                if (std::abs(g) < current_threshold)
                                    continue;

                                if (k == l)
                                    g *= 0.5;

                                contract_integral_unpolarized(P, i, j, k, l, g);
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

                                if (std::abs(g) < current_threshold)
                                    continue;

                                if (i == j)
                                    g *= 0.5;
                                if (k == l)
                                    g *= 0.5;
                                if (i == k && j == l)
                                    g *= 0.5;

                                contract_integral_unpolarized(P, i, j, k, l, g);
                            }
                        }
                    }
                break;
            }
            }
        }
    }
}
