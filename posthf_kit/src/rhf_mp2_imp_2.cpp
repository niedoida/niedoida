/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/shell_quartet_index_generator.hpp"
#include "io_kit/io_kit.hpp"
#include "misc_kit/dispatcher.hpp"
#include "posthf_kit/canonical_mp2.hpp"

#include <cstring>

namespace niedoida {

    namespace posthf {

        RHF_MP2_IMP_2::RHF_MP2_IMP_2(
            std::shared_ptr<const niedoida::core::System> system,
            std::shared_ptr<
                const niedoida::core::TwoElectronIntegralEngineFactory>
                two_e_ie_factory,
            const arma::vec& e,
            const arma::mat& C,
            unsigned long memory_pool,
            unsigned no_frozen,
            unsigned no_deleted,
            double threshold,
            std::size_t cache_size,
            const bool dc) :
            m_dc(dc),
            m_system(system),
            m_bs_info(system->basis_set),
            m_e(e),
            m_n(C.n_rows),
            m_no_frozen(no_frozen),
            m_no_deleted(no_deleted),
            m_memory_pool(memory_pool),
            m_2_ie_factory(two_e_ie_factory),
            m_int_tresh(threshold),
            m_schwartz(*system->basis_set.schwartz_estimator),
            m_sspg(m_bs_info.m_no_shells, m_schwartz, m_int_tresh),
            m_batch(m_sspg.shell_pairs().size())
        {

            if (!m_system->integral_cache)
                m_system->integral_cache.reset(
                    new niedoida::core::IntegralCache(m_system, cache_size));

            m_no_occ =
                system->no_electrons(niedoida::core::SPIN_ALPHA) - m_no_frozen;
            m_no_virt = m_n - m_no_occ - m_no_frozen - m_no_deleted;

            for (unsigned i = 0; i < m_no_occ; ++i)
                for (unsigned j = 0; j <= i; ++j)
                    m_pairs.push_back(std::make_pair(i, j));

            m_C_occ.resize(m_n, m_no_occ);
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_occ; ++j)
                    m_C_occ(i, j) = C(i, j + m_no_frozen);
            m_C_virt.resize(m_n, m_no_virt);
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_virt; ++j)
                    m_C_virt(i, j) = C(i, j + m_no_occ + m_no_frozen);
            m_max_C_occ = 0;
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_occ; ++j)
                    if (std::abs(m_C_occ(i, j)) > m_max_C_occ)
                        m_max_C_occ = std::abs(m_C_occ(i, j));
            m_max_C_virt = 0;
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_virt; ++j)
                    if (std::abs(m_C_virt(i, j)) > m_max_C_virt)
                        m_max_C_virt = std::abs(m_C_virt(i, j));

            const unsigned max_no_ijs = determine_passes();
            m_trans_pool.reset(new double[m_no_virt * m_n * max_no_ijs]);

            m_TT_3.resize(m_no_virt, m_n);
            m_TT_4.resize(m_no_virt, m_no_virt);
            m_C_sprs.resize(m_bs_info.m_no_shells);
            m_C_prs.resize(m_n);
            m_C_occ_pr.resize(m_n);
            m_C_virt_pr.resize(m_n);
            m_e2 = 0;

            const unsigned no_pairs = m_sspg.shell_pairs().size();

            const unsigned no_threads =
                niedoida::misc::GlobalThreadPool::no_threads();

            // sth both large and small enough is required, could be set
            // from_input
            const unsigned preferred_chunk_size = 20;
            m_chunk_size =
                std::min(no_pairs / no_threads, preferred_chunk_size);
            if (m_chunk_size < 1)
                m_chunk_size = 1;

            m_T3_mutex.reset(new std::mutex[m_no_virt]);

            double partial_e2 = 0;

            for (std::size_t i = 0; i < no_threads; ++i)
                m_workhorses.push_back(new WorkHorse(0,
                                                     m_dc,
                                                     0,
                                                     0,
                                                     0,
                                                     m_pairs,
                                                     m_no_virt,
                                                     m_n,
                                                     m_trans_pool.get(),
                                                     m_e,
                                                     m_no_occ,
                                                     m_no_frozen,
                                                     m_C_virt));

            for (std::size_t i = 0; i < no_threads; ++i) {
                const unsigned pairs_per_thread = no_pairs / no_threads;
                const unsigned first = i * pairs_per_thread;
                const unsigned last =
                    (i == no_threads - 1 ? no_pairs
                                         : (i + 1) * pairs_per_thread);
                m_workhorses_13.push_back(
                    new WorkHorse_13(0,
                                     first,
                                     last,
                                     0,
                                     0,
                                     m_n,
                                     m_sspg.shell_pairs(),
                                     m_max_C_occ,
                                     m_max_C_virt,
                                     m_bs_info,
                                     m_schwartz,
                                     m_int_tresh,
                                     m_C_sprs,
                                     m_2_ie_factory->make(m_system),
                                     *m_system->integral_cache,
                                     m_cache_mutex,
                                     m_T3_mutex.get(),
                                     m_C_occ_pr,
                                     m_C_prs,
                                     m_C_virt_pr,
                                     m_C_occ,
                                     m_C_virt,
                                     m_trans_pool.get(),
                                     m_no_virt,
                                     m_batch,
                                     m_chunk_size));
            }

            {
                std::unique_ptr<niedoida::misc::Dispatcher> d =
                    niedoida::misc::dispatcher(
                        m_comm,
                        m_no_passes,
                        niedoida::misc::STATIC_DISPATCHING_ALGORITHM);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {

                    for (unsigned ii = task_info->first; ii < task_info->second;
                         ++ii) {

                        niedoida::io::Log::Section pass_section("pass");
                        niedoida::io::Log::instance().write(
                            niedoida::io::Logger::NORMAL, "pass", int(ii));

                        unsigned i_begin = m_full_passes[ii].first;
                        unsigned i_end = m_full_passes[ii].second;
                        niedoida::io::Log::instance().write(
                            niedoida::io::Logger::NORMAL,
                            "first",
                            int(i_begin));
                        niedoida::io::Log::instance().write(
                            niedoida::io::Logger::NORMAL, "last", int(i_end));

                        memset(&m_C_sprs(0),
                               0,
                               m_bs_info.m_no_shells * sizeof(double));
                        memset(&m_C_occ_pr(0), 0, m_n * sizeof(double));
                        memset(&m_C_virt_pr(0), 0, m_n * sizeof(double));
                        memset(&m_C_prs(0), 0, m_n * sizeof(double));

                        for (unsigned P = 0; P < m_bs_info.m_no_shells; ++P) {
                            unsigned p0 =
                                m_bs_info.m_first_contraction_in_shell[P];
                            unsigned p1 = m_bs_info.m_shell_sizes[P] + p0;
                            for (unsigned p = p0; p < p1; ++p)
                                for (unsigned i = i_begin; i < i_end; ++i) {
                                    if (std::abs(m_C_occ(p, i)) > m_C_sprs(P))
                                        m_C_sprs(P) = std::abs(m_C_occ(p, i));
                                    if (std::abs(m_C_occ(p, i)) > m_C_prs(p))
                                        m_C_prs(p) = std::abs(m_C_occ(p, i));
                                }
                        }

                        for (unsigned p = 0; p < m_n; ++p)
                            for (unsigned i = 0; i < i_end; ++i)
                                if (std::abs(m_C_occ(p, i)) > m_C_occ_pr(p))
                                    m_C_occ_pr(p) = std::abs(m_C_occ(p, i));

                        for (unsigned p = 0; p < m_n; ++p)
                            for (unsigned i = 0; i < m_no_virt; ++i)
                                if (std::abs(m_C_virt(p, i)) > m_C_virt_pr(p))
                                    m_C_virt_pr(p) = std::abs(m_C_virt(p, i));

                        unsigned no_ijs = 0;
                        for (unsigned i = i_begin; i < i_end; ++i)
                            no_ijs += i + 1;

                        memset(m_trans_pool.get(),
                               0,
                               m_no_virt * m_n * no_ijs * sizeof(double));

                        m_batch.begin = 0;

                        for (std::size_t i = 0; i < no_threads; ++i)
                            m_workhorses_13[i].reset(i_begin, i_end, no_ijs);

                        for (WorkHorse_13& w : m_workhorses_13) {
                            niedoida::misc::ThreadPool::Task t(
                                std::bind(&WorkHorse_13::trans, &w));
                            niedoida::misc::GlobalThreadPool::instance()
                                .schedule(t);
                        }

                        niedoida::misc::GlobalThreadPool::instance().wait();

                        const unsigned first_pair = (i_begin + 1) * i_begin / 2;
                        const unsigned last_pair = (i_end + 1) * i_end / 2;
                        const unsigned no_pairs = last_pair - first_pair;
                        const unsigned pairs_per_thread = no_pairs / no_threads;
                        std::vector<std::pair<unsigned, unsigned>> pair_indices(
                            no_threads);
                        for (unsigned i = 0; i < no_threads; ++i) {
                            pair_indices[i].first =
                                i * pairs_per_thread + first_pair;
                            pair_indices[i].second =
                                (i == no_threads - 1
                                     ? last_pair
                                     : (i + 1) * pairs_per_thread + first_pair);
                        }

                        for (std::size_t i = 0; i < no_threads; ++i)
                            m_workhorses[i].reset(pair_indices[i].first,
                                                  pair_indices[i].second,
                                                  first_pair,
                                                  no_ijs);

                        for (WorkHorse& w : m_workhorses) {
                            niedoida::misc::ThreadPool::Task t(
                                std::bind(&WorkHorse::finalize, &w));
                            niedoida::misc::GlobalThreadPool::instance()
                                .schedule(t);
                        }

                        niedoida::misc::GlobalThreadPool::instance().wait();
                    }
                }

                for (std::size_t i = 0; i < no_threads; ++i)
                    partial_e2 += m_workhorses[i].m_e2;

                boost::mpi::all_reduce(
                    m_comm, &partial_e2, 1, &m_e2, std::plus<double>());
            }
        }

        unsigned RHF_MP2_IMP_2::determine_passes()
        {
            unsigned max_no_ijs = 0;

            unsigned max_elements = m_memory_pool / sizeof(double);

            if (m_no_occ * m_no_virt * m_n > max_elements) {
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::NORMAL,
                    "minimal memory required (MB):",
                    int(m_no_occ * m_no_virt * m_n * sizeof(double) /
                            (1024 * 1024) +
                        1));
                abort();
            }

            std::vector<unsigned> i_sizes(m_no_occ);
            for (unsigned i = 0; i < m_no_occ; ++i)
                i_sizes[i] = (i + 1) * m_no_virt * m_n;

            unsigned ind = 0;
            unsigned ind1 = 0;
            while (ind < m_no_occ) {
                unsigned sum = 0;
                while (sum < max_elements && ind1 < m_no_occ) {
                    sum += i_sizes[ind1];
                    ind1++;
                }

                m_full_passes.push_back(std::make_pair(ind, ind1));
                ind = ind1;
            }

            m_no_passes = m_full_passes.size();
            for (unsigned i = 0; i < m_no_passes; ++i) {
                unsigned ijs = 0;
                for (unsigned ii = m_full_passes[i].first;
                     ii < m_full_passes[i].second;
                     ++ii)
                    ijs += ii + 1;
                if (max_no_ijs < ijs)
                    max_no_ijs = ijs;
            }

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL, "no_passes", int(m_no_passes));
            return max_no_ijs;
        }

        void RHF_MP2_IMP_2::WorkHorse_13::trans()
        {

            const unsigned i_range = i_end - i_begin;

            m_T_1.resize(
                boost::extents[m_bs_info.m_max_shell_size]
                              [m_bs_info.m_max_shell_size][m_n][i_range]);
            m_TT_2.resize(m_no_virt, i_range);

            arma::mat TT_1(m_n, i_range);

            arma::mat m_C_occ_T = m_C_occ.t();
            arma::mat m_C_virt_T = m_C_virt.t();

            for (;;) {
                {
                    std::unique_lock<std::mutex> lock(m_batch.mutex);

                    if (m_batch.begin >= m_batch.end)
                        return;

                    m_first = m_batch.begin;
                    m_last =
                        std::min(m_batch.begin + m_chunk_size, m_batch.end);

                    m_batch.begin = m_last;
                }

                for (unsigned ij = m_first; ij < m_last; ++ij) {
                    unsigned P = m_shell_pairs[ij].first;
                    unsigned R = m_shell_pairs[ij].second;
                    memset(m_T_1.data(),
                           0,
                           m_bs_info.m_max_shell_size *
                               m_bs_info.m_max_shell_size * m_n * i_range *
                               sizeof(double));
                    unsigned size_P = m_bs_info.m_shell_sizes[P];
                    unsigned size_R = m_bs_info.m_shell_sizes[R];
                    unsigned p0 = m_bs_info.m_first_contraction_in_shell[P];
                    unsigned r0 = m_bs_info.m_first_contraction_in_shell[R];
                    unsigned kl_1 = 0, kl_2;
                    while (fill_int_buffer(ij, kl_1, kl_2)) {
                        double* result = m_buf.data();
                        for (unsigned a = 0; a < m_requests.size(); ++a) {
                            unsigned Q = m_requests[a].shells[2];
                            unsigned S = m_requests[a].shells[3];
                            unsigned size_Q = m_bs_info.m_shell_sizes[Q];
                            unsigned size_S = m_bs_info.m_shell_sizes[S];
                            unsigned q0 =
                                m_bs_info.m_first_contraction_in_shell[Q];
                            unsigned s0 =
                                m_bs_info.m_first_contraction_in_shell[S];
                            for (unsigned p = 0; p < size_P; ++p)
                                for (unsigned r = 0; r < size_R; ++r) {
                                    const double factor =
                                        m_max_C_virt *
                                        std::max(m_C_occ_pr(p + p0) *
                                                     m_C_virt_pr(r + r0),
                                                 m_C_occ_pr(r + r0) *
                                                     m_C_virt_pr(p + p0));
                                    for (unsigned q = q0; q < q0 + size_Q; ++q)
                                        for (unsigned s = s0; s < s0 + size_S;
                                             ++s) {
                                            const double g = *result++;
                                            if (r + r0 < p + p0)
                                                continue;
                                            if (s < q)
                                                continue;
                                            if (std::abs(g) *
                                                    std::max(m_C_prs(q),
                                                             m_C_prs(s)) *
                                                    factor <
                                                m_int_tresh)
                                                continue;
                                            double* NIEDOIDA_RESTRICT _T1q =
                                                &m_T_1[p][r][q][0];
                                            for (unsigned i = i_begin;
                                                 i < i_begin + i_range;
                                                 ++i)
                                                *_T1q++ += g * m_C_occ_T(i, s);
                                            if (q != s) {
                                                double* NIEDOIDA_RESTRICT _T1s =
                                                    &m_T_1[p][r][s][0];
                                                for (unsigned i = i_begin;
                                                     i < i_begin + i_range;
                                                     ++i)
                                                    *_T1s++ +=
                                                        g * m_C_occ_T(i, q);
                                            }
                                        }
                                }
                        }
                        kl_1 = kl_2;
                    }

                    for (unsigned p = 0; p < size_P; ++p)
                        for (unsigned r = 0; r < size_R; ++r) {

                            const unsigned pp = p + p0;
                            const unsigned rr = r + r0;

                            if (rr < pp)
                                continue;

                            const double* _T1 = &m_T_1[p][r][0][0];
                            double pr_max = std::abs(*_T1);
                            for (unsigned i = 1; i < m_n * i_range; ++i)
                                if (std::abs(_T1[i]) > pr_max)
                                    pr_max = std::abs(_T1[i]);

                            const double factor =
                                std::max(m_C_occ_pr(pp) * m_C_virt_pr(rr),
                                         m_C_occ_pr(rr) * m_C_virt_pr(pp));
                            const double factor_1 = factor * m_max_C_virt;

                            if (pr_max * factor_1 < m_int_tresh)
                                continue;

                            for (unsigned j = 0; j < m_n; ++j) {
                                const double* NIEDOIDA_RESTRICT _T1 =
                                    &m_T_1[p][r][j][0];
                                for (unsigned i = 0; i < i_range; ++i)
                                    TT_1(j, i) = *_T1++;
                            }

                            m_TT_2 = m_C_virt_T * TT_1;

                            for (unsigned a = 0; a < m_no_virt; ++a) {
                                if (pp != rr) {
                                    unsigned ij = 0;
                                    for (unsigned i = 0; i < i_range; ++i) {
                                        const unsigned j_end = i + i_begin;
                                        const double g = m_TT_2(a, i);
                                        if (std::abs(g) * factor >=
                                            m_int_tresh) {
                                            std::unique_lock<std::mutex> lock(
                                                m_T3_mutex[a]);
                                            for (unsigned jj = 0;
                                                 jj < j_end + 1;
                                                 ++jj) {
                                                m_T_3[a * m_n * m_no_ijs +
                                                      rr * m_no_ijs + ij +
                                                      jj] +=
                                                    g * m_C_occ_T(jj, pp);
                                                m_T_3[a * m_n * m_no_ijs +
                                                      pp * m_no_ijs + ij +
                                                      jj] +=
                                                    g * m_C_occ_T(jj, rr);
                                            }
                                        }
                                        ij += j_end + 1;
                                    }
                                } else {
                                    unsigned ij = 0;
                                    for (unsigned i = 0; i < i_range; ++i) {
                                        const unsigned j_end = i + i_begin;
                                        const double g = m_TT_2(a, i);
                                        if (std::abs(g) * factor >=
                                            m_int_tresh) {
                                            std::unique_lock<std::mutex> lock(
                                                m_T3_mutex[a]);
                                            for (unsigned jj = 0;
                                                 jj < j_end + 1;
                                                 ++jj) {
                                                m_T_3[a * m_n * m_no_ijs +
                                                      rr * m_no_ijs + ij +
                                                      jj] +=
                                                    g * m_C_occ_T(jj, pp);
                                            }
                                        }
                                        ij += j_end + 1;
                                    }
                                }
                            }
                        }
                }
            }
        }

        bool RHF_MP2_IMP_2::WorkHorse_13::fill_int_buffer(unsigned ij,
                                                          unsigned kl_1,
                                                          unsigned& kl_2)
        {
            const unsigned no_pairs = m_shell_pairs.size();
            if (kl_1 >= no_pairs)
                return false;
            const double factor = m_max_C_virt * m_max_C_virt * m_max_C_occ;
            m_requests.clear();
            unsigned r = 0, kl = kl_1;
            double* buf_ptr = m_buf.data();
            do {
                unsigned P = m_shell_pairs[ij].first;
                unsigned R = m_shell_pairs[ij].second;
                unsigned Q = m_shell_pairs[kl].first;
                unsigned S = m_shell_pairs[kl].second;
                const niedoida::core::ShellQuartetIndex sqi = {{P, R, Q, S}};
                if (m_schwartz.max_integral(sqi) *
                        std::max(m_C_sprs(Q), m_C_sprs(S)) * factor >=
                    m_int_tresh) {
                    const niedoida::core::Request request = {
                        sqi, false, buf_ptr};

                    buf_ptr += m_bs_info.m_shell_sizes[P] *
                               m_bs_info.m_shell_sizes[R] *
                               m_bs_info.m_shell_sizes[Q] *
                               m_bs_info.m_shell_sizes[S];
                    m_requests.push_back(request);
                    ++r;
                }
                ++kl;
            } while (kl < no_pairs && r < m_max_no_requests);

            for (niedoida::core::Request& r : m_requests)
                m_cache.retrieve(r);

            m_2ei->calc(m_requests);

            if (m_cycle <= 1) {
                std::unique_lock<std::mutex> lock(m_cache_mutex);
                for (niedoida::core::Request& r : m_requests)
                    m_cache.store(r);
            }

            kl_2 = kl;
            return true;
        }

        void RHF_MP2_IMP_2::WorkHorse_13::reset(const unsigned begin,
                                                const unsigned end,
                                                const unsigned no_ijs)
        {
            i_begin = begin;
            i_end = end;
            m_cycle += 1;
            m_no_ijs = no_ijs;
        }

        RHF_MP2_IMP_2::WorkHorse::WorkHorse(
            const unsigned no_ijs,
            const bool dc,
            const unsigned first,
            const unsigned last,
            const unsigned offset,
            const std::vector<std::pair<unsigned, unsigned>>& pairs,
            const unsigned no_virt,
            const unsigned n,
            double* T_3,
            arma::vec& e,
            const unsigned no_occ,
            const unsigned no_frozen,
            arma::mat& C_virt) :
            m_no_ijs(no_ijs),
            m_dc(dc),
            m_first(first),
            m_last(last),
            m_offset(offset),
            m_pairs(pairs),
            m_no_virt(no_virt),
            m_n(n),
            m_T_3(T_3),
            m_e(e),
            m_no_occ(no_occ),
            m_no_frozen(no_frozen),
            m_C_virt(C_virt)
        {
            m_e2 = 0;
            m_TT_3.resize(m_no_virt, m_n);
            m_TT_4.resize(m_no_virt, m_no_virt);
        }

        RHF_MP2_IMP_2::WorkHorse_13::WorkHorse_13(
            const unsigned no_ijs,
            const unsigned first,
            const unsigned last,
            const unsigned begin,
            const unsigned end,
            const unsigned n,
            const std::vector<std::pair<unsigned, unsigned>>& shell_pairs,
            const double max_C_occ,
            const double max_C_virt,
            const niedoida::core::BasisSetInfo& bs_info,
            const niedoida::core::SchwartzEstimator& schwartz,
            const double int_tresh,
            const arma::vec& C_sprs,
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> q_2ei,
            niedoida::core::IntegralCache& cache,
            std::mutex& cache_mutex,
            std::mutex* T3_mutex,
            const arma::vec& C_occ_pr,
            const arma::vec& C_prs,
            const arma::vec& C_virt_pr,
            const arma::mat& C_occ,
            const arma::mat& C_virt,
            double* T_3,
            const unsigned no_virt,
            Batch& batch,
            const unsigned chunk_size) :
            m_no_ijs(no_ijs),
            m_first(first),
            m_last(last),
            i_begin(begin),
            i_end(end),
            m_n(n),
            m_shell_pairs(shell_pairs),
            m_max_C_occ(max_C_occ),
            m_max_C_virt(max_C_virt),
            m_max_no_requests(q_2ei->preferred_no_requests()),
            m_bs_info(bs_info),
            m_schwartz(schwartz),
            m_int_tresh(int_tresh),
            m_C_sprs(C_sprs),
            m_2ei(std::move(q_2ei)),
            m_cache(cache),
            m_cycle(0),
            m_cache_mutex(cache_mutex),
            m_T3_mutex(T3_mutex),
            m_C_occ_pr(C_occ_pr),
            m_C_prs(C_prs),
            m_C_virt_pr(C_virt_pr),
            m_C_occ(C_occ),
            m_C_virt(C_virt),
            m_T_3(T_3),
            m_no_virt(no_virt),
            m_batch(batch),
            m_chunk_size(chunk_size)
        {
            m_requests.reserve(m_max_no_requests);
            const std::size_t max_shell_size2 =
                m_bs_info.m_max_shell_size * m_bs_info.m_max_shell_size;
            m_buf.resize(boost::extents[m_max_no_requests * max_shell_size2 *
                                        max_shell_size2]);
        }

        void RHF_MP2_IMP_2::WorkHorse::finalize()
        {
            for (unsigned ij = m_first; ij < m_last; ++ij) {
                const unsigned i = m_pairs[ij].first;
                const unsigned j = m_pairs[ij].second;
                for (unsigned a = 0; a < m_no_virt; ++a)
                    for (unsigned s = 0; s < m_n; ++s)
                        m_TT_3(a, s) = m_T_3[a * m_n * m_no_ijs + s * m_no_ijs +
                                             ij - m_offset];
                // m_TT_3(a, s) = m_T_3[a][s][ij - m_offset];

                m_TT_4 = m_TT_3 * m_C_virt;

                for (unsigned a = 0; a < m_no_virt; ++a)
                    for (unsigned b = 0; b < (i == j ? a + 1 : m_no_virt);
                         ++b) {
                        const double BJAI = m_TT_4(a, b);
                        const double AJBI = m_TT_4(b, a);
                        const double factor = ((i == j && a == b) ? 1 : 2);
                        const double energy_factor =
                            m_e(i + m_no_frozen) + m_e(j + m_no_frozen) -
                            m_e(a + m_no_occ + m_no_frozen) -
                            m_e(b + m_no_occ + m_no_frozen);
                        if (!m_dc) {
                            m_e2 += factor * BJAI * (BJAI + BJAI - AJBI) /
                                    energy_factor;
                        } else {
                            m_e2 +=
                                factor *
                                (0.5 * (-energy_factor -
                                        sqrt(energy_factor * energy_factor +
                                             4 * BJAI * BJAI)) +
                                 0.25 *
                                     (-energy_factor -
                                      sqrt(energy_factor * energy_factor +
                                           4 * (BJAI - AJBI) * (BJAI - AJBI))));
                        }
                    }
            }
        }

        void RHF_MP2_IMP_2::WorkHorse::reset(const unsigned first,
                                             const unsigned last,
                                             const unsigned offset,
                                             const unsigned no_ijs)
        {
            m_first = first;
            m_last = last;
            m_offset = offset;
            m_no_ijs = no_ijs;
        }
    }
}
