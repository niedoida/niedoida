/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/fock_matrix_generator.hpp"

#include <algorithm>
#include <numeric>

#include <cassert>

#include <boost/multi_array.hpp>

#include "misc_kit/dispatcher.hpp"
#include "misc_kit/threadpool.hpp"

#include "io_kit/io_kit.hpp"

namespace niedoida {

    namespace core {

        DenFitJMatrixGenerator::W_WorkHorse::W_WorkHorse(
            std::unique_ptr<QuasiTwoElectronIntegralEngine> q_ie,
            W_Batch& batch,
            const BasisSetInfo& aux_bs_info,
            arma::mat& W) :
            m_q_2ie(std::move(q_ie)),
            m_batch(batch),
            m_aux_bs_info(aux_bs_info),
            m_W(W)
        {
            m_max_no_pair_requests = m_q_2ie->preferred_no_pair_requests();
            m_pair_requests.reserve(m_max_no_pair_requests);

            m_buf_pair.resize(boost::extents[m_max_no_pair_requests]
                                            [m_aux_bs_info.m_max_shell_size *
                                             m_aux_bs_info.m_max_shell_size]);
        }

        void DenFitJMatrixGenerator::W_WorkHorse::run() { calc_W_task(); }

        DenFitJMatrixGenerator::c_WorkHorse::c_WorkHorse(
            std::shared_ptr<const System> system,
            std::unique_ptr<QuasiTwoElectronIntegralEngine> q_ie,
            ACDIntegralCache& aux_cache,
            std::mutex& cache_mutex,
            const Prescreening& prescreening,
            const arma::mat* const P,
            const arma::mat& max_P_shells,
            const arma::vec& max_W_shells,
            c_Batch& batch,
            const BasisSetInfo& bs_info,
            const BasisSetInfo& aux_bs_info,
            const unsigned cycle,
            const bool unpolarized) :
            m_bs_info(bs_info),
            m_aux_bs_info(aux_bs_info),
            m_cycle(cycle),
            m_q_2ie(std::move(q_ie)),
            m_aux_cache(aux_cache),
            m_aux_cache_mutex(cache_mutex),
            m_unpolarized(unpolarized),
            m_prescreening(prescreening),
            m_P(P),
            m_max_P_shells(max_P_shells),
            m_max_W_shells(max_W_shells),
            m_batch(batch)
        {
            m_c[SPIN_ALPHA] =
                arma::zeros<arma::vec>(m_aux_bs_info.m_no_contractions);
            m_c[SPIN_BETA] =
                arma::zeros<arma::vec>(m_aux_bs_info.m_no_contractions);

            m_max_no_ACD_requests = m_q_2ie->preferred_no_ACD_requests();
            m_ACD_requests.reserve(m_max_no_ACD_requests);

            m_buf_ACD.resize(boost::extents[m_max_no_ACD_requests]
                                           [m_bs_info.m_max_shell_size *
                                            m_bs_info.m_max_shell_size *
                                            m_aux_bs_info.m_max_shell_size]);
        }

        void DenFitJMatrixGenerator::c_WorkHorse::run()
        {
            build_c_vector_task();
        }

        DenFitJMatrixGenerator::d_WorkHorse::d_WorkHorse(
            std::shared_ptr<const System> system,
            std::unique_ptr<QuasiTwoElectronIntegralEngine> q_ie,
            ACDIntegralCache& aux_cache,
            std::mutex& cache_mutex,
            const Prescreening& prescreening,
            const arma::vec& d,
            const arma::vec& max_d_shells,
            const arma::vec& max_W_shells,
            c_Batch& batch,
            const BasisSetInfo& bs_info,
            const BasisSetInfo& aux_bs_info,
            const unsigned cycle) :
            m_bs_info(bs_info),
            m_aux_bs_info(aux_bs_info),
            m_cycle(cycle),
            m_q_2ie(std::move(q_ie)),
            m_aux_cache(aux_cache),
            m_aux_cache_mutex(cache_mutex),
            m_prescreening(prescreening),
            m_d(d),
            m_max_d_shells(max_d_shells),
            m_max_W_shells(max_W_shells),
            m_batch(batch)
        {
            m_J = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                         m_bs_info.m_no_contractions);

            m_max_no_ACD_requests = m_q_2ie->preferred_no_ACD_requests();
            m_ACD_requests.reserve(m_max_no_ACD_requests);

            m_buf_ACD.resize(boost::extents[m_max_no_ACD_requests]
                                           [m_bs_info.m_max_shell_size *
                                            m_bs_info.m_max_shell_size *
                                            m_aux_bs_info.m_max_shell_size]);
        }

        void DenFitJMatrixGenerator::d_WorkHorse::run() { update_task(); }

        DenFitJMatrixGenerator::DenFitJMatrixGenerator(
            std::shared_ptr<const System> system,
            std::shared_ptr<const QuasiTwoElectronIntegralEngineFactory>
                quasi_two_e_ie_factory,
            double threshold,
            std::size_t aux_cache_size) :
            m_system(system),
            m_bs_info(system->basis_set),
            m_aux_bs_info(*system->aux_basis_set),
            m_q_2ie_factory(quasi_two_e_ie_factory),
            m_cycle(0),
            m_spig(m_aux_bs_info.m_no_shells),
            m_saig(m_bs_info.m_no_shells, m_aux_bs_info.m_no_shells),
            m_prescreening(threshold, *system),
            m_W_batch(m_spig),
            m_c_batch(m_saig),
            m_d_batch(m_saig)
        {
            if (!m_system->acd_integral_cache)
                m_system->acd_integral_cache.reset(
                    new ACDIntegralCache(m_system, aux_cache_size));

            // to be set from input data
            m_perturbation = 1e-9;

            m_threshold = threshold / system->basis_set.real_size() /
                          system->basis_set.real_size();

            m_P[SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
            m_P[SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            m_max_P_shells = arma::zeros<arma::mat>(m_bs_info.m_no_shells,
                                                    m_bs_info.m_no_shells);

            m_J = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                         m_bs_info.m_no_contractions);
            m_W = arma::zeros<arma::mat>(m_aux_bs_info.m_no_contractions,
                                         m_aux_bs_info.m_no_contractions);

            m_max_W_shells = arma::zeros<arma::vec>(m_aux_bs_info.m_no_shells);

            m_d[SPIN_ALPHA] =
                arma::zeros<arma::vec>(m_aux_bs_info.m_no_contractions);
            m_d[SPIN_BETA] =
                arma::zeros<arma::vec>(m_aux_bs_info.m_no_contractions);

            m_max_d_shells = arma::zeros<arma::vec>(m_aux_bs_info.m_no_shells);

            m_c[SPIN_ALPHA] =
                arma::zeros<arma::vec>(m_aux_bs_info.m_no_contractions);
            m_c[SPIN_BETA] =
                arma::zeros<arma::vec>(m_aux_bs_info.m_no_contractions);

            ShellPairIndexGenerator sp_begin(m_aux_bs_info.m_no_shells);
            ShellPairIndexGenerator sp_end = sp_begin.make_end();

            m_no_shell_pairs = std::distance(sp_begin, sp_end);

            ShellACDIndexGenerator sa_begin(m_bs_info.m_no_shells,
                                            m_aux_bs_info.m_no_shells);
            ShellACDIndexGenerator sa_end = sa_begin.make_end();

            m_no_shell_ACDs = std::distance(sa_begin, sa_end);

            {
                niedoida::io::Log::Section section(
                    "forming and inverting W for density fitting");

                calc_W();

                set_max_W_shells();

                invert_W();
            }
        }

        void DenFitJMatrixGenerator::set_density_matrix(
            const arma::mat& P_alpha, const arma::mat& P_beta, bool incremental)
        {
            niedoida::io::Log::Section section("DF-J");

            m_cycle += 1;

            m_P[SPIN_ALPHA] = P_alpha;
            m_P[SPIN_BETA] = P_beta;

            m_unpolarized = norm(P_alpha - P_beta, "inf") == 0;

            set_max_P_shells(m_P);

            build_c_vector();

            calc_d_vector();

            if (m_unpolarized)
                m_d[SPIN_BETA] = m_d[SPIN_ALPHA];

            const arma::vec d_total = m_d[SPIN_ALPHA] + m_d[SPIN_BETA];

            set_max_d_shells(d_total);

            update();

            m_J = symmatu(m_J);
        }

        void DenFitJMatrixGenerator::set_max_P_shells(const arma::mat P[2])
        {
            for (unsigned i = 0; i < m_bs_info.m_no_shells; ++i)
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
                    if (!m_unpolarized) {
                        for (unsigned k = b1; k < b1 + n1; ++k)
                            for (unsigned l = b2; l < b2 + n2; ++l)
                                if (std::abs(P[SPIN_BETA](k, l)) > max)
                                    max = std::abs(P[SPIN_BETA](k, l));
                    }
                    m_max_P_shells(i, j) = max;
                    m_max_P_shells(j, i) = max;
                }
        }

        void DenFitJMatrixGenerator::set_max_W_shells()
        {
            for (unsigned i = 0; i < m_aux_bs_info.m_no_shells; ++i) {
                double max = 0;
                const unsigned b1 =
                    m_aux_bs_info.m_first_contraction_in_shell[i];
                const unsigned n1 = m_aux_bs_info.m_shell_sizes[i];
                for (unsigned k = b1; k < b1 + n1; ++k)
                    for (unsigned l = b1; l < b1 + n1; ++l)
                        if (std::abs(m_W(k, l)) > max)
                            max = std::abs(m_W(k, l));
                m_max_W_shells(i) = max;
            }
        }

        void DenFitJMatrixGenerator::set_max_d_shells(const arma::vec& d)
        {
            for (unsigned i = 0; i < m_aux_bs_info.m_no_shells; ++i) {
                double max = 0;
                const unsigned b1 =
                    m_aux_bs_info.m_first_contraction_in_shell[i];
                const unsigned n1 = m_aux_bs_info.m_shell_sizes[i];
                for (unsigned k = b1; k < b1 + n1; ++k)
                    if (std::abs(d(k)) > max)
                        max = std::abs(d(k));
                m_max_d_shells(i) = max;
            }
        }

        const arma::mat& DenFitJMatrixGenerator::coulomb_matrix() const
        {
            return m_J;
        }

        const arma::vec& DenFitJMatrixGenerator::d_alpha() const
        {
            return m_d[SPIN_ALPHA];
        }

        const arma::vec& DenFitJMatrixGenerator::d_beta() const
        {
            return m_d[SPIN_BETA];
        }

        void DenFitJMatrixGenerator::calc_W()
        {
            boost::ptr_vector<W_WorkHorse> W_workhorses;
            for (std::size_t i = 0;
                 i < niedoida::misc::GlobalThreadPool::no_threads();
                 ++i)
                W_workhorses.push_back(
                    new W_WorkHorse(m_q_2ie_factory->make(m_system),
                                    m_W_batch,
                                    m_aux_bs_info,
                                    m_W));
            {
                std::unique_ptr<niedoida::misc::Dispatcher> d(
                    niedoida::misc::dispatcher(m_comm, m_no_shell_pairs));
                const ShellPairIndexGenerator sp_begin(
                    m_aux_bs_info.m_no_shells);
                ShellPairIndexGeneratorCache<> spic(sp_begin);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {
                    {
                        std::unique_lock<std::mutex> queue_lock(
                            m_W_batch.mutex);

                        m_W_batch.begin = task_info->first;
                        m_W_batch.end = task_info->second;
                        m_W_batch.sp = spic.get(task_info->first);
                    }

                    for (W_WorkHorse& w : W_workhorses) {
                        niedoida::misc::ThreadPool::Task t(
                            std::bind(&W_WorkHorse::run, &w));
                        niedoida::misc::GlobalThreadPool::instance().schedule(
                            t);
                    }

                    niedoida::misc::GlobalThreadPool::instance().wait();

                    {
                        std::unique_lock<std::mutex> queue_lock(
                            m_W_batch.mutex);

                        spic.store(m_W_batch.end, m_W_batch.sp);
                    }
                }
            }

            arma::mat partial = m_W;
            m_W = arma::zeros<arma::mat>(m_aux_bs_info.m_no_contractions,
                                         m_aux_bs_info.m_no_contractions);

            boost::mpi::all_reduce(m_comm,
                                   partial.memptr(),
                                   partial.n_elem,
                                   m_W.memptr(),
                                   std::plus<double>());
        }

        void DenFitJMatrixGenerator::W_WorkHorse::calc_W_task()
        {
            for (;;) {
                // pile up requests
                m_pair_requests.clear();
                unsigned r = 0;

                {
                    std::unique_lock<std::mutex> lock(m_batch.mutex);

                    if (m_batch.begin >= m_batch.end)
                        break;

                    while (m_batch.begin < m_batch.end) {
                        const PairRequest request = {
                            *m_batch.sp, false, &m_buf_pair[r][0]};

                        m_pair_requests.push_back(request);

                        r += 1;

                        ++m_batch.sp;
                        ++m_batch.begin;

                        if (r >= m_max_no_pair_requests)
                            break;
                    }
                }
                m_q_2ie->calc_AC(m_pair_requests);

                for (unsigned r = 0; r < m_pair_requests.size(); ++r) {

                    const PairRequest& req = m_pair_requests[r];

                    const double* results = req.results;

                    const unsigned P = req.shells[0];
                    const unsigned Q = req.shells[1];

                    std::size_t first_P =
                        m_aux_bs_info.m_first_contraction_in_shell[P];
                    std::size_t first_Q =
                        m_aux_bs_info.m_first_contraction_in_shell[Q];

                    std::size_t last_P =
                        m_aux_bs_info.m_first_contraction_in_shell[P] +
                        m_aux_bs_info.m_shell_sizes[P];
                    std::size_t last_Q =
                        m_aux_bs_info.m_first_contraction_in_shell[Q] +
                        m_aux_bs_info.m_shell_sizes[Q];

                    for (std::size_t p = first_P; p < last_P; ++p)
                        for (std::size_t q = first_Q; q < last_Q; ++q) {
                            const double tmp = *results++;
                            m_W(p, q) = tmp;
                            m_W(q, p) = tmp;
                        }
                }
            }
        }

        void DenFitJMatrixGenerator::invert_W()
        {
            m_inverted_W =
                arma::inv(m_W + m_perturbation * arma::eye<arma::mat>(
                                                     m_W.n_rows, m_W.n_cols));
        }

        void DenFitJMatrixGenerator::build_c_vector()
        {
            boost::ptr_vector<c_WorkHorse> c_workhorses;
            for (std::size_t i = 0;
                 i < niedoida::misc::GlobalThreadPool::no_threads();
                 ++i)
                c_workhorses.push_back(
                    new c_WorkHorse(m_system,
                                    m_q_2ie_factory->make(m_system),
                                    *m_system->acd_integral_cache,
                                    m_cache_mutex,
                                    m_prescreening,
                                    m_P,
                                    m_max_P_shells,
                                    m_max_W_shells,
                                    m_c_batch,
                                    m_bs_info,
                                    m_aux_bs_info,
                                    m_cycle,
                                    m_unpolarized));
            m_c[SPIN_ALPHA].zeros();
            m_c[SPIN_BETA].zeros();
            {
                std::unique_ptr<niedoida::misc::Dispatcher> d(
                    niedoida::misc::dispatcher(m_comm, m_no_shell_ACDs));
                const ShellACDIndexGenerator sa_begin(
                    m_bs_info.m_no_shells, m_aux_bs_info.m_no_shells);
                ShellACDIndexGeneratorCache<> saic(sa_begin);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {

                    {
                        std::unique_lock<std::mutex> queue_lock(
                            m_c_batch.mutex);

                        m_c_batch.begin = task_info->first;
                        m_c_batch.end = task_info->second;
                        m_c_batch.sa = saic.get(task_info->first);
                    }

                    for (c_WorkHorse& w : c_workhorses) {
                        niedoida::misc::ThreadPool::Task t(
                            std::bind(&c_WorkHorse::run, &w));
                        niedoida::misc::GlobalThreadPool::instance().schedule(
                            t);
                    }

                    niedoida::misc::GlobalThreadPool::instance().wait();

                    {
                        std::unique_lock<std::mutex> queue_lock(
                            m_c_batch.mutex);

                        saic.store(m_c_batch.end, m_c_batch.sa);
                    }
                }
            }

            arma::vec partial = m_c[SPIN_ALPHA];
            for (std::size_t i = 0;
                 i < niedoida::misc::GlobalThreadPool::no_threads();
                 ++i)
                partial += c_workhorses[i].m_c[SPIN_ALPHA];

            m_c[SPIN_ALPHA] =
                arma::zeros<arma::vec>(m_aux_bs_info.m_no_contractions);

            boost::mpi::all_reduce(m_comm,
                                   partial.memptr(),
                                   partial.n_elem,
                                   m_c[SPIN_ALPHA].memptr(),
                                   std::plus<double>());

            if (!m_unpolarized) {
                partial = m_c[SPIN_BETA];
                for (std::size_t i = 0;
                     i < niedoida::misc::GlobalThreadPool::no_threads();
                     ++i)
                    partial += c_workhorses[i].m_c[SPIN_BETA];

                m_c[SPIN_BETA] =
                    arma::zeros<arma::vec>(m_aux_bs_info.m_no_contractions);

                boost::mpi::all_reduce(m_comm,
                                       partial.memptr(),
                                       partial.n_elem,
                                       m_c[SPIN_BETA].memptr(),
                                       std::plus<double>());
            }
        }

        void DenFitJMatrixGenerator::c_WorkHorse::build_c_vector_task()
        {
            for (;;) {
                // pile up requests
                m_ACD_requests.clear();
                unsigned r = 0;
                {
                    std::unique_lock<std::mutex> lock(m_batch.mutex);

                    if (m_batch.begin >= m_batch.end)
                        break;

                    while (m_batch.begin < m_batch.end) {

                        const unsigned P = (*m_batch.sa)[0];
                        const unsigned R = (*m_batch.sa)[1];
                        const unsigned S = (*m_batch.sa)[2];

                        const ShellQuartetIndex sqi = {{R, S, R, S}};

                        const double max_integral =
                            sqrt(m_prescreening.schwartz.max_integral(sqi) *
                                 m_max_W_shells(P));

                        const double max_contribution =
                            max_integral * m_max_P_shells(R, S);

                        if (max_contribution > m_prescreening.threshold) {
                            const ACDRequest request = {
                                *m_batch.sa, false, &m_buf_ACD[r][0]};

                            m_ACD_requests.push_back(request);
                            r += 1;
                        }

                        ++m_batch.sa;
                        ++m_batch.begin;

                        if (r >= m_max_no_ACD_requests)
                            break;
                    }
                }

                // try to get the integrals from cache
                if (m_cycle > 1)
                    for (ACDRequest& r : m_ACD_requests)
                        m_aux_cache.retrieve(r);

                // calc remaining ones
                m_q_2ie->calc_ACD(m_ACD_requests);

                // try to cache integrals
                if (m_cycle <= 1) {
                    std::unique_lock<std::mutex> lock(m_aux_cache_mutex);
                    for (ACDRequest& r : m_ACD_requests)
                        m_aux_cache.store(r);
                }

                for (unsigned r = 0; r < m_ACD_requests.size(); ++r) {

                    const ACDRequest& req = m_ACD_requests[r];

                    if (m_unpolarized)
                        partial_build_c_vector_unpolarized(m_P[SPIN_ALPHA],
                                                           req);
                    else
                        partial_build_c_vector(m_P, req);
                }
            }
        }

        void DenFitJMatrixGenerator::c_WorkHorse::partial_build_c_vector(
            const arma::mat P[2], const ACDRequest& request)
        {

            const arma::mat& P_alpha = P[SPIN_ALPHA];
            const arma::mat& P_beta = P[SPIN_BETA];

            double* c_alpha = m_c[SPIN_ALPHA].memptr();
            double* c_beta = m_c[SPIN_ALPHA].memptr();

            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];

            const unsigned b1 = m_aux_bs_info.m_first_contraction_in_shell[s1];
            const unsigned b2 = m_bs_info.m_first_contraction_in_shell[s2];
            const unsigned b3 = m_bs_info.m_first_contraction_in_shell[s3];

            const unsigned n1 = m_aux_bs_info.m_shell_sizes[s1];
            const unsigned n2 = m_bs_info.m_shell_sizes[s2];
            const unsigned n3 = m_bs_info.m_shell_sizes[s3];

            const ShellACDType type = shell_ACD_type(s1, s2, s3);

            switch (type) {
            case SHELL_ACD_TYPE_ACD: {
                double* results = request.results;
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k) {
                            const double g2 = 2 * *results++;
                            c_alpha[i] += g2 * P_alpha(j, k);
                            c_beta[i] += g2 * P_beta(j, k);
                        }
                break;
            }
            case SHELL_ACD_TYPE_ACC: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = std::max(j, b3); k < b3 + n3; ++k) {
                            double g =
                                *(request.results +
                                  (((i - b1) * n2 + (j - b2)) * n3 + k - b3));
                            if (j == k)
                                g *= 0.5;
                            const double g2 = 2 * g;
                            c_alpha[i] += g2 * P_alpha(j, k);
                            c_beta[i] += g2 * P_beta(j, k);
                        }
                break;
            }
            }
        }

        void
        DenFitJMatrixGenerator::c_WorkHorse::partial_build_c_vector_unpolarized(
            const arma::mat& P, const ACDRequest& request)
        {
            double* c = m_c[SPIN_ALPHA].memptr();
            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];

            const unsigned b1 = m_aux_bs_info.m_first_contraction_in_shell[s1];
            const unsigned b2 = m_bs_info.m_first_contraction_in_shell[s2];
            const unsigned b3 = m_bs_info.m_first_contraction_in_shell[s3];

            const unsigned n1 = m_aux_bs_info.m_shell_sizes[s1];
            const unsigned n2 = m_bs_info.m_shell_sizes[s2];
            const unsigned n3 = m_bs_info.m_shell_sizes[s3];

            const ShellACDType type = shell_ACD_type(s1, s2, s3);

            switch (type) {
            case SHELL_ACD_TYPE_ACD: {
                double* results = request.results;
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k) {
                            const double g = *results++;
                            c[i] += 2 * g * P(j, k);
                        }
                break;
            }
            case SHELL_ACD_TYPE_ACC: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = std::max(j, b3); k < b3 + n3; ++k) {
                            double g =
                                *(request.results +
                                  (((i - b1) * n2 + (j - b2)) * n3 + k - b3));
                            if (j == k)
                                g *= 0.5;
                            c[i] += 2 * g * P(j, k);
                        }
                break;
            }
            }
        }

        void DenFitJMatrixGenerator::calc_d_vector()
        {
            arma::vec c_bis = m_c[SPIN_ALPHA];
            arma::mat W = m_W;

            m_d[SPIN_ALPHA] = m_inverted_W * m_c[SPIN_ALPHA];
            c_bis -= W * m_d[SPIN_ALPHA];
            m_d[SPIN_ALPHA] += m_inverted_W * c_bis;

            if (!m_unpolarized) {
                c_bis = m_c[SPIN_BETA];
                m_d[SPIN_BETA] = m_inverted_W * m_c[SPIN_BETA];
                c_bis -= W * m_d[SPIN_BETA];
                m_d[SPIN_BETA] += m_inverted_W * c_bis;
            }
        }

        void DenFitJMatrixGenerator::update()
        {
            arma::vec d_total = m_d[SPIN_ALPHA] + m_d[SPIN_BETA];
            boost::ptr_vector<d_WorkHorse> d_workhorses;
            for (std::size_t i = 0;
                 i < niedoida::misc::GlobalThreadPool::no_threads();
                 ++i)
                d_workhorses.push_back(
                    new d_WorkHorse(m_system,
                                    m_q_2ie_factory->make(m_system),
                                    *m_system->acd_integral_cache,
                                    m_cache_mutex,
                                    m_prescreening,
                                    d_total,
                                    m_max_d_shells,
                                    m_max_W_shells,
                                    m_d_batch,
                                    m_bs_info,
                                    m_aux_bs_info,
                                    m_cycle));
            m_J.zeros();
            {
                std::unique_ptr<niedoida::misc::Dispatcher> d(
                    niedoida::misc::dispatcher(m_comm, m_no_shell_ACDs));
                const ShellACDIndexGenerator sa_begin(
                    m_bs_info.m_no_shells, m_aux_bs_info.m_no_shells);
                ShellACDIndexGeneratorCache<> saic(sa_begin);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {

                    {
                        std::unique_lock<std::mutex> queue_lock(
                            m_d_batch.mutex);

                        m_d_batch.begin = task_info->first;
                        m_d_batch.end = task_info->second;
                        m_d_batch.sa = saic.get(task_info->first);
                    }

                    {
                        std::unique_lock<std::mutex> queue_lock(
                            m_d_batch.mutex);

                        saic.store(m_d_batch.end, m_d_batch.sa);
                    }
                }
            }

            arma::mat partial = m_J;
            for (std::size_t i = 0;
                 i < niedoida::misc::GlobalThreadPool::no_threads();
                 ++i)
                partial += d_workhorses[i].m_J;

            m_J = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                         m_bs_info.m_no_contractions);

            boost::mpi::all_reduce(m_comm,
                                   partial.memptr(),
                                   partial.n_elem,
                                   m_J.memptr(),
                                   std::plus<double>());
        }

        void DenFitJMatrixGenerator::d_WorkHorse::update_task()
        {
            for (;;) {
                // pile up requests
                m_ACD_requests.clear();
                unsigned r = 0;
                {
                    std::unique_lock<std::mutex> lock(m_batch.mutex);

                    if (m_batch.begin >= m_batch.end)
                        break;

                    while (m_batch.begin < m_batch.end) {

                        const unsigned P = (*m_batch.sa)[0];
                        const unsigned R = (*m_batch.sa)[1];
                        const unsigned S = (*m_batch.sa)[2];

                        const ShellQuartetIndex sqi = {{R, S, R, S}};

                        const double max_integral =
                            sqrt(m_prescreening.schwartz.max_integral(sqi) *
                                 m_max_W_shells(P));

                        const double max_contribution =
                            max_integral * m_max_d_shells(P);

                        if (max_contribution > m_prescreening.threshold) {
                            const ACDRequest request = {
                                *m_batch.sa, false, &m_buf_ACD[r][0]};

                            m_ACD_requests.push_back(request);
                            r += 1;
                        }

                        ++m_batch.sa;
                        ++m_batch.begin;

                        if (r >= m_max_no_ACD_requests)
                            break;
                    }
                }

                // try to get the integrals from cache
                if (m_cycle > 1)
                    for (ACDRequest& r : m_ACD_requests)
                        m_aux_cache.retrieve(r);

                // calc remaining ones
                m_q_2ie->calc_ACD(m_ACD_requests);

                // try to cache integrals
                if (m_cycle <= 1) {
                    std::unique_lock<std::mutex> lock(m_aux_cache_mutex);
                    for (ACDRequest& r : m_ACD_requests)
                        m_aux_cache.store(r);
                }

                for (unsigned r = 0; r < m_ACD_requests.size(); ++r) {

                    const ACDRequest& req = m_ACD_requests[r];

                    partial_update(m_d, req);
                }
            }
        }

        void DenFitJMatrixGenerator::d_WorkHorse::partial_update(
            const arma::vec& d, const ACDRequest& request)
        {
            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];

            const unsigned b1 = m_aux_bs_info.m_first_contraction_in_shell[s1];
            const unsigned b2 = m_bs_info.m_first_contraction_in_shell[s2];
            const unsigned b3 = m_bs_info.m_first_contraction_in_shell[s3];

            const unsigned n1 = m_aux_bs_info.m_shell_sizes[s1];
            const unsigned n2 = m_bs_info.m_shell_sizes[s2];
            const unsigned n3 = m_bs_info.m_shell_sizes[s3];

            const ShellACDType type = shell_ACD_type(s1, s2, s3);

            switch (type) {
            case SHELL_ACD_TYPE_ACD: {
                double* results = request.results;
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k) {
                            const double g = *results++;
                            m_J(j, k) += g * d(i);
                        }
                break;
            }
            case SHELL_ACD_TYPE_ACC: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = std::max(j, b3); k < b3 + n3; ++k) {
                            const double g =
                                *(request.results +
                                  (((i - b1) * n2 + (j - b2)) * n3 + k - b3));
                            m_J(j, k) += g * d(i);
                        }
                break;
            }
            }
        }
    }
}
