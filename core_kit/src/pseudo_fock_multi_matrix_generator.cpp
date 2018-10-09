/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/pseudo_fock_matrix_generator.hpp"

#include <boost/mpi.hpp>

#include "misc_kit/blackbox.hpp"
#include "misc_kit/dispatcher.hpp"
#include "misc_kit/threadpool.hpp"

#include <cmath>

#include <boost/mpi/collectives.hpp>

namespace niedoida {
    namespace core {
        PseudoFockMultiMatrixGenerator::PseudoFockMultiMatrixGenerator(
            std::shared_ptr<const System> system,
            std::shared_ptr<const TwoElectronIntegralEngineFactory>
                two_e_ie_factory,
            double threshold) :
            m_system(system),
            m_bs_info(system->basis_set),
            m_prescreening(threshold, *system, *two_e_ie_factory->make(system)),
            m_batch(m_bs_info.m_shell_sizes.size())
        {
            const std::size_t no_shells = m_bs_info.m_shell_sizes.size();

            // shell compressed density matrices
            m_max_P_shells = arma::zeros<arma::mat>(no_shells, no_shells);

            for (std::size_t i = 0; i < misc::GlobalThreadPool::no_threads();
                 ++i)
                m_workhorses.push_back(
                    new WorkHorse(system,
                                  two_e_ie_factory->make(system),
                                  m_system->integral_cache.get(),
                                  m_cache_mutex,
                                  m_prescreening,
                                  m_P,
                                  m_max_P_shells,
                                  m_batch,
                                  m_bs_info));

            m_no_shell_quartets = m_batch.end;
        }

        void PseudoFockMultiMatrixGenerator::set_density_matrix(
            const std::vector<arma::cube>& P)
        {
            m_no_matrices = P[SPIN_ALPHA].n_slices;

            double polarization_measure = 0;
            for (std::size_t i = 0; i < m_no_matrices; ++i)
                polarization_measure +=
                    norm(P[SPIN_ALPHA].slice(i) - P[SPIN_BETA].slice(i), "inf");

            m_polarized = (polarization_measure != 0);

            m_J.set_size(m_bs_info.m_no_contractions,
                         m_bs_info.m_no_contractions,
                         m_no_matrices);

            m_P[SPIN_ALPHA].set_size(m_bs_info.m_no_contractions,
                                     m_bs_info.m_no_contractions,
                                     m_no_matrices);
            m_K[SPIN_ALPHA].set_size(m_bs_info.m_no_contractions,
                                     m_bs_info.m_no_contractions,
                                     m_no_matrices);

            if (m_polarized) {
                m_P[SPIN_BETA].set_size(m_bs_info.m_no_contractions,
                                        m_bs_info.m_no_contractions,
                                        m_no_matrices);
                m_K[SPIN_BETA].set_size(m_bs_info.m_no_contractions,
                                        m_bs_info.m_no_contractions,
                                        m_no_matrices);
            }

            m_P[SPIN_ALPHA] = P[SPIN_ALPHA];

            if (m_polarized)
                m_P[SPIN_BETA] = P[SPIN_BETA];

            m_J.zeros(m_bs_info.m_no_contractions,
                      m_bs_info.m_no_contractions,
                      m_no_matrices);
            m_K[SPIN_ALPHA].zeros(m_bs_info.m_no_contractions,
                                  m_bs_info.m_no_contractions,
                                  m_no_matrices);
            if (m_polarized)
                m_K[SPIN_BETA].zeros(m_bs_info.m_no_contractions,
                                     m_bs_info.m_no_contractions,
                                     m_no_matrices);

            set_max_P_shells();

            for (std::size_t i = 0; i < misc::GlobalThreadPool::no_threads();
                 ++i)
                m_workhorses[i].reset(m_polarized);

            update();
        }

        void PseudoFockMultiMatrixGenerator::set_max_P_shells()
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
                    for (int s = SPIN_ALPHA;
                         s <= (m_polarized ? SPIN_BETA : SPIN_ALPHA);
                         ++s)
                        for (unsigned k = b1; k < b1 + n1; ++k)
                            for (unsigned l = b2; l < b2 + n2; ++l)
                                for (std::size_t n = 0; n < m_no_matrices;
                                     ++n) {
                                    if (std::abs(m_P[s](k, l, n)) > max)
                                        max = std::abs(m_P[s](k, l, n));
                                }
                    m_max_P_shells(i, j) = max;
                }
        }

        void PseudoFockMultiMatrixGenerator::update()
        {
            {
                std::unique_ptr<misc::Dispatcher> d(
                    misc::dispatcher(m_no_shell_quartets));
                const ShellQuartetIndexGenerator sq_begin(
                    m_bs_info.m_shell_sizes.size());
                ShellQuartetIndexGeneratorCache<> sqic(sq_begin);

                while (misc::Dispatcher::TaskInfo task_info = d->get_task()) {
                    {
                        std::unique_lock<std::mutex> queue_lock(m_batch.mutex);

                        m_batch.begin = task_info->first;
                        m_batch.end = task_info->second;
                        m_batch.sq = sqic.get(task_info->first);
                    }

                    for (WorkHorse& w : m_workhorses)
                        misc::GlobalThreadPool::instance().schedule(
                            std::bind(&WorkHorse::run, &w));

                    misc::GlobalThreadPool::instance().wait();

                    {
                        std::unique_lock<std::mutex> queue_lock(m_batch.mutex);

                        sqic.store(m_batch.end, m_batch.sq);
                    }
                }
            }

            reduce();
        }

        void PseudoFockMultiMatrixGenerator::reduce()
        {
            std::size_t no_steps, overflow, chunk = 1024;

            std::unique_ptr<double[]> _reduce_buf(new double[chunk]);

            double* _J = m_J.memptr();
            double* _K_alpha = m_K[SPIN_ALPHA].memptr();

            for (const WorkHorse& w : m_workhorses) {
                m_J += w.m_J;
                m_K[core::SPIN_ALPHA] += w.m_K[core::SPIN_ALPHA];
            }

            no_steps = m_J.n_elem / chunk;
            overflow = m_J.n_elem % chunk;

            boost::mpi::communicator world;

            for (std::size_t i = 0; i < no_steps; ++i) {
                std::memcpy(_reduce_buf.get(), _J, chunk * sizeof(double));
                std::memset(_J, 0, chunk * sizeof(double));
                boost::mpi::all_reduce(
                    world, _reduce_buf.get(), chunk, _J, std::plus<double>());
                _J += chunk;
            }

            if (overflow) {
                std::memcpy(_reduce_buf.get(), _J, overflow * sizeof(double));
                std::memset(_J, 0, overflow * sizeof(double));
                boost::mpi::all_reduce(world,
                                       _reduce_buf.get(),
                                       overflow,
                                       _J,
                                       std::plus<double>());
            }

            no_steps = m_bs_info.m_no_contractions *
                       m_bs_info.m_no_contractions * m_no_matrices / chunk;
            overflow = m_bs_info.m_no_contractions *
                       m_bs_info.m_no_contractions * m_no_matrices % chunk;

            for (std::size_t i = 0; i < no_steps; ++i) {
                std::memcpy(
                    _reduce_buf.get(), _K_alpha, chunk * sizeof(double));
                std::memset(_K_alpha, 0, chunk * sizeof(double));
                boost::mpi::all_reduce(world,
                                       _reduce_buf.get(),
                                       chunk,
                                       _K_alpha,
                                       std::plus<double>());
                _K_alpha += chunk;
            }

            if (overflow) {
                std::memcpy(
                    _reduce_buf.get(), _K_alpha, overflow * sizeof(double));
                std::memset(_K_alpha, 0, overflow * sizeof(double));
                boost::mpi::all_reduce(world,
                                       _reduce_buf.get(),
                                       overflow,
                                       _K_alpha,
                                       std::plus<double>());
            }

            if (m_polarized) {
                for (const WorkHorse& w : m_workhorses)
                    m_K[core::SPIN_BETA] += w.m_K[core::SPIN_BETA];

                double* _K_beta = m_K[SPIN_BETA].memptr();

                for (std::size_t i = 0; i < no_steps; ++i) {
                    std::memcpy(
                        _reduce_buf.get(), _K_beta, chunk * sizeof(double));
                    std::memset(_K_beta, 0, chunk * sizeof(double));
                    boost::mpi::all_reduce(world,
                                           _reduce_buf.get(),
                                           chunk,
                                           _K_beta,
                                           std::plus<double>());
                    _K_beta += chunk;
                }

                if (overflow) {
                    std::memcpy(
                        _reduce_buf.get(), _K_beta, overflow * sizeof(double));
                    std::memset(_K_beta, 0, overflow * sizeof(double));
                    boost::mpi::all_reduce(world,
                                           _reduce_buf.get(),
                                           overflow,
                                           _K_beta,
                                           std::plus<double>());
                }
            }
        }

        PseudoFockMultiMatrixGenerator::WorkHorse::WorkHorse(
            std::shared_ptr<const System> system,
            std::unique_ptr<TwoElectronIntegralEngine> ie,
            IntegralCache* cache,
            std::mutex& cache_mutex,
            const Prescreening& prescreening,
            const arma::cube* const P,
            const arma::mat& max_P_shells,
            Batch& batch,
            const BasisSetInfo& bs_info) :
            m_bs_info(bs_info),
            m_cycle(0),
            m_2ie(std::move(ie)),
            m_max_no_requests(m_2ie->preferred_no_requests()),
            m_cache(cache),
            m_cache_mutex(cache_mutex),
            m_prescreening(prescreening),
            m_P(P),
            m_max_P(new double[m_max_no_requests]),
            m_max_P_shells(max_P_shells),
            m_batch(batch),
            m_no_matrices(P->n_slices)
        {
            m_requests.reserve(m_max_no_requests);

            const std::size_t max_shell_size = *std::max_element(
                m_bs_info.m_shell_sizes.begin(), m_bs_info.m_shell_sizes.end());

            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;
            m_buf.set_size(max_shell_size2 * max_shell_size2,
                           m_max_no_requests);
        }

        void PseudoFockMultiMatrixGenerator::WorkHorse::reset(bool polarized)
        {
            m_polarized = polarized;

            m_no_matrices = m_P[SPIN_ALPHA].n_slices;

            m_J.zeros(m_bs_info.m_no_contractions,
                      m_bs_info.m_no_contractions,
                      m_no_matrices);
            m_K[SPIN_ALPHA].zeros(m_bs_info.m_no_contractions,
                                  m_bs_info.m_no_contractions,
                                  m_no_matrices);
            if (m_polarized)
                m_K[SPIN_BETA].zeros(m_bs_info.m_no_contractions,
                                     m_bs_info.m_no_contractions,
                                     m_no_matrices);

            m_cycle += 1;
        }

        double PseudoFockMultiMatrixGenerator::WorkHorse::max_P(
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

        void PseudoFockMultiMatrixGenerator::WorkHorse::run()
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
                                *m_batch.sq, false, m_buf.colptr(r)};

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
                if (m_cache && m_cycle > 1)
                    for (Request& r : m_requests)
                        m_cache->retrieve(r);

                // get the integrals
                m_2ie->calc(m_requests);

                // try to cache integrals
                if (m_cache && m_cycle <= 1) {
                    std::unique_lock<std::mutex> lock(m_cache_mutex);
                    for (Request& r : m_requests)
                        m_cache->store(r);
                }

                // and use'em
                for (unsigned r = 0; r < m_requests.size(); ++r)
                    partial_update(m_requests[r], m_max_P[r]);
            }
        }

        void PseudoFockMultiMatrixGenerator::WorkHorse::partial_update(
            const Request& request, double max_P)
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
                                const double g = *results++;

                                if (std::abs(g) < current_threshold)
                                    continue;

                                contract_integral(i, j, k, l, g);
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

                                contract_integral(i, j, k, l, g);
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

                                contract_integral(i, j, k, l, g);
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

                                contract_integral(i, j, k, l, g);
                            }
                        }
                    }
                break;
            }
            }
        }
    }
}
