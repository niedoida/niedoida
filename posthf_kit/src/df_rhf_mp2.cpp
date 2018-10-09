/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/io_kit.hpp"
#include "posthf_kit/canonical_mp2.hpp"
#include <numeric>

namespace niedoida {

    namespace posthf {

        DF_RHF_MP2::DF_RHF_MP2(
            std::shared_ptr<const niedoida::core::System> system,
            std::shared_ptr<const niedoida::core::
                                PostHFQuasiTwoElectronIntegralEngineFactory>
                quasi_two_e_ie_factory,
            const arma::vec& e,
            const arma::mat& C,
            unsigned long memory_pool,
            unsigned no_frozen,
            unsigned no_deleted,
            double threshold,
            const bool dc) :
            m_dc(dc),
            m_system(system),
            m_bs_info(system->basis_set),
            m_posthf_aux_bs_info(*system->posthf_aux_basis_set),
            m_e(e),
            m_n(C.n_rows),
            m_n_posthf_aux(m_posthf_aux_bs_info.m_no_contractions),
            m_n_posthf_aux_shells(m_posthf_aux_bs_info.m_no_shells),
            m_no_frozen(no_frozen),
            m_no_deleted(no_deleted),
            m_memory_pool(memory_pool),
            m_q_2_ie_factory(quasi_two_e_ie_factory),
            m_int_tresh(threshold),
            m_no_occ(system->no_electrons(niedoida::core::SPIN_ALPHA) -
                     m_no_frozen),
            m_no_virt(m_n - m_no_occ - m_no_frozen - m_no_deleted),
            m_schwartz(*system->basis_set.schwartz_estimator),
            m_q_2_ie(m_q_2_ie_factory->make(system)),
            m_batch(m_no_occ * (m_no_occ + 1) / 2),
            m_batch_3(m_no_occ),
            m_batch_TT(m_posthf_aux_bs_info.m_no_shells)
        {
            for (unsigned i = 0; i < m_no_occ; ++i)
                for (unsigned j = 0; j <= i; ++j)
                    m_pairs.push_back(std::make_pair(i, j));

            niedoida::core::ShellPairIndexGenerator sp_begin(
                m_bs_info.m_no_shells);
            niedoida::core::ShellPairIndexGenerator sp_end =
                sp_begin.make_end();

            m_no_shell_pairs = std::distance(sp_begin, sp_end);

            m_C_occ.set_size(m_n, m_no_occ);
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_occ; ++j)
                    m_C_occ(i, j) = C(i, j + m_no_frozen);
            m_C_virt.set_size(m_n, m_no_virt);
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_virt; ++j)
                    m_C_virt(i, j) = C(i, j + m_no_occ + m_no_frozen);

            m_e2 = 0;

            m_max_no_pair_requests = m_q_2_ie->preferred_no_pair_requests();
            m_pair_requests.reserve(m_max_no_pair_requests);

            m_buf_pair.resize(
                boost::extents[m_max_no_pair_requests]
                              [m_posthf_aux_bs_info.m_max_shell_size *
                               m_posthf_aux_bs_info.m_max_shell_size]);

            m_J.set_size(m_n_posthf_aux, m_n_posthf_aux);
            m_J.zeros();

            m_T_23.resize(boost::extents[m_no_occ][m_no_virt][m_n_posthf_aux]);

            {
                niedoida::io::Log::Section section("J calculation");
                calc_J();
            }

            m_max_J_shells =
                arma::zeros<arma::vec>(m_posthf_aux_bs_info.m_no_shells);

            set_max_J_shells();

            {
                niedoida::io::Log::Section section("W calculation");
                calc_W();
            }

            {
                niedoida::io::Log::Section section("T12 calculation");
                boost::ptr_vector<WorkHorse_TT> workhorses_TT;
                for (std::size_t i = 0;
                     i < niedoida::misc::GlobalThreadPool::no_threads();
                     ++i)
                    workhorses_TT.push_back(
                        new WorkHorse_TT(m_batch_TT,
                                         0,
                                         m_posthf_aux_bs_info.m_no_shells,
                                         m_no_virt,
                                         m_no_occ,
                                         m_n_posthf_aux,
                                         m_bs_info,
                                         m_posthf_aux_bs_info,
                                         m_n,
                                         m_no_shell_pairs,
                                         m_q_2_ie_factory->make(m_system),
                                         m_schwartz,
                                         m_max_J_shells,
                                         m_int_tresh,
                                         &m_T_23[0][0][0],
                                         m_C_occ,
                                         m_C_virt));

                for (WorkHorse_TT& w : workhorses_TT) {
                    niedoida::misc::ThreadPool::Task t(
                        std::bind(&WorkHorse_TT::calc_TT, &w));
                    niedoida::misc::GlobalThreadPool::instance().schedule(t);
                }
                niedoida::misc::GlobalThreadPool::instance().wait();
            }

            {
                niedoida::io::Log::Section section("T3 calculation");
                boost::ptr_vector<WorkHorse_3> workhorses_3;
                for (std::size_t i = 0;
                     i < niedoida::misc::GlobalThreadPool::no_threads();
                     ++i)
                    workhorses_3.push_back(new WorkHorse_3(m_batch_3,
                                                           0,
                                                           m_no_occ,
                                                           m_no_virt,
                                                           m_no_occ,
                                                           m_n_posthf_aux,
                                                           &m_T_23[0][0][0],
                                                           m_W));

                for (WorkHorse_3& w : workhorses_3) {
                    niedoida::misc::ThreadPool::Task t(
                        std::bind(&WorkHorse_3::trans_3, &w));
                    niedoida::misc::GlobalThreadPool::instance().schedule(t);
                }
                niedoida::misc::GlobalThreadPool::instance().wait();
            }

            {
                niedoida::io::Log::Section section("finalizing calculation");
                double partial_e2 = 0;
                boost::ptr_vector<WorkHorse> workhorses;
                for (std::size_t i = 0;
                     i < niedoida::misc::GlobalThreadPool::no_threads();
                     ++i)
                    workhorses.push_back(new WorkHorse(m_batch,
                                                       m_dc,
                                                       0,
                                                       m_pairs.size(),
                                                       m_pairs,
                                                       m_no_virt,
                                                       m_no_occ,
                                                       m_no_frozen,
                                                       m_n_posthf_aux,
                                                       &m_T_23[0][0][0],
                                                       m_e));

                for (WorkHorse& w : workhorses) {
                    niedoida::misc::ThreadPool::Task t(
                        std::bind(&WorkHorse::finalize, &w));
                    niedoida::misc::GlobalThreadPool::instance().schedule(t);
                }
                niedoida::misc::GlobalThreadPool::instance().wait();
                for (WorkHorse& w : workhorses)
                    partial_e2 += (&w)->m_e2;

                m_e2 = partial_e2;
            }
        }

        DF_RHF_MP2::WorkHorse::WorkHorse(
            Batch& batch,
            const bool dc,
            const unsigned first,
            const unsigned last,
            const std::vector<std::pair<unsigned, unsigned>>& pairs,
            const unsigned no_virt,
            const unsigned no_occ,
            const unsigned no_frozen,
            const unsigned n_posthf_aux,
            double* T_23,
            arma::vec& e) :
            m_batch(batch),
            m_dc(dc),
            m_first(first),
            m_last(last),
            m_pairs(pairs),
            m_no_virt(no_virt),
            m_no_occ(no_occ),
            m_no_frozen(no_frozen),
            m_n_posthf_aux(n_posthf_aux),
            m_T_23(T_23),
            m_e(e)
        {
            m_e2 = 0;
            m_T_4.resize(m_no_virt, m_no_virt);
        }

        DF_RHF_MP2::WorkHorse_TT::WorkHorse_TT(
            Batch& batch,
            const unsigned first,
            const unsigned last,
            const unsigned no_virt,
            const unsigned no_occ,
            const unsigned n_posthf_aux,
            const niedoida::core::BasisSetInfo& bs_info,
            const niedoida::core::BasisSetInfo& posthf_aux_bs_info,
            const unsigned n,
            const unsigned no_shell_pairs,
            std::unique_ptr<niedoida::core::QuasiTwoElectronIntegralEngine>
                q_2_ie,
            const niedoida::core::SchwartzEstimator& schwartz,
            const arma::vec& max_J_shells,
            const double int_tresh,
            double* T_23,
            const arma::mat& C_occ,
            const arma::mat& C_virt) :
            m_batch(batch),
            m_first(first),
            m_last(last),
            m_no_virt(no_virt),
            m_no_occ(no_occ),
            m_n_posthf_aux(n_posthf_aux),
            m_bs_info(bs_info),
            m_posthf_aux_bs_info(posthf_aux_bs_info),
            m_n(n),
            m_no_shell_pairs(no_shell_pairs),
            m_q_2_ie(std::move(q_2_ie)),
            m_schwartz(schwartz),
            m_max_J_shells(max_J_shells),
            m_int_tresh(int_tresh),
            m_T_23(T_23),
            m_C_occ(C_occ),
            m_C_virt(C_virt)
        {
            m_max_no_ACD_requests = m_q_2_ie->preferred_no_ACD_requests();

            m_T_0.resize(boost::extents[m_posthf_aux_bs_info.m_max_shell_size]
                                       [m_n][m_n]);
            m_ACD_requests.reserve(m_max_no_ACD_requests);
            m_buf_ACD.resize(
                boost::extents[m_max_no_ACD_requests]
                              [m_posthf_aux_bs_info.m_max_shell_size *
                               m_bs_info.m_max_shell_size *
                               m_bs_info.m_max_shell_size]);
            m_TT_1.resize(m_no_occ, m_n);
            m_TT_2.resize(m_no_occ, m_no_virt);
        }

        DF_RHF_MP2::WorkHorse_3::WorkHorse_3(Batch& batch,
                                             const unsigned first,
                                             const unsigned last,
                                             const unsigned no_virt,
                                             const unsigned no_occ,
                                             const unsigned n_posthf_aux,
                                             double* T_23,
                                             const arma::mat& W) :
            m_batch(batch),
            m_first(first),
            m_last(last),
            m_no_virt(no_virt),
            m_no_occ(no_occ),
            m_n_posthf_aux(n_posthf_aux),
            m_T_23(T_23),
            m_W(W)
        {
            m_buf_T23.resize(m_no_virt, m_n_posthf_aux);
        }

        void DF_RHF_MP2::calc_J()
        {
            niedoida::core::ShellPairIndexGenerator sp(
                m_posthf_aux_bs_info.m_no_shells);

            unsigned long begin = 0;
            unsigned long end = m_posthf_aux_bs_info.m_no_shells *
                                (m_posthf_aux_bs_info.m_no_shells + 1) / 2;

            for (;;) {
                // pile up requests
                m_pair_requests.clear();
                unsigned r = 0;

                {
                    if (begin >= end)
                        break;

                    while (begin < end) {
                        const niedoida::core::PairRequest request = {
                            *sp, false, &m_buf_pair[r][0]};

                        m_pair_requests.push_back(request);

                        r += 1;

                        ++sp;
                        ++begin;

                        if (r >= m_max_no_pair_requests)
                            break;
                    }
                }

                m_q_2_ie->calc_AC(m_pair_requests);

                for (unsigned r = 0; r < m_pair_requests.size(); ++r) {

                    const niedoida::core::PairRequest& req = m_pair_requests[r];

                    const double* results = req.results;

                    const unsigned P = req.shells[0];
                    const unsigned Q = req.shells[1];

                    std::size_t first_P =
                        m_posthf_aux_bs_info.m_first_contraction_in_shell[P];
                    std::size_t first_Q =
                        m_posthf_aux_bs_info.m_first_contraction_in_shell[Q];

                    std::size_t last_P =
                        m_posthf_aux_bs_info.m_first_contraction_in_shell[P] +
                        m_posthf_aux_bs_info.m_shell_sizes[P];
                    std::size_t last_Q =
                        m_posthf_aux_bs_info.m_first_contraction_in_shell[Q] +
                        m_posthf_aux_bs_info.m_shell_sizes[Q];

                    for (std::size_t p = first_P; p < last_P; ++p)
                        for (std::size_t q = first_Q; q < last_Q; ++q) {
                            const double integral = *results++;
                            m_J(p, q) = integral;
                            m_J(q, p) = integral;
                        }
                }
            }
        }

        void DF_RHF_MP2::set_max_J_shells()
        {
            for (unsigned i = 0; i < m_posthf_aux_bs_info.m_no_shells; ++i) {
                double max = 0;
                const unsigned b1 =
                    m_posthf_aux_bs_info.m_first_contraction_in_shell[i];
                const unsigned n1 = m_posthf_aux_bs_info.m_shell_sizes[i];
                for (unsigned k = b1; k < b1 + n1; ++k)
                    for (unsigned l = b1; l < b1 + n1; ++l)
                        if (std::abs(m_J(k, l)) > max)
                            max = std::abs(m_J(k, l));
                m_max_J_shells(i) = max;
            }
        }

        void DF_RHF_MP2::calc_W()
        {
            arma::vec d(m_J.n_rows);
            arma::mat V(m_J.n_rows, m_J.n_cols);
            arma::eig_sym(d, V, m_J);

            m_W = arma::diagmat(d);

            for (unsigned i = 0; i < m_W.n_rows; ++i)
                m_W(i, i) = std::pow(m_W(i, i), -0.5);

            m_W = V * m_W * V.t();
        }

        void DF_RHF_MP2::WorkHorse_TT::calc_TT()
        {
            arma::mat TT_0(m_n, m_n);

            for (;;) {
                {
                    std::unique_lock<std::mutex> lock(m_batch.mutex);

                    if (m_batch.begin >= m_batch.end)
                        return;

                    m_first = m_batch.begin;
                    m_last = std::min(m_batch.begin + 1, m_batch.end);

                    m_batch.begin = m_last;
                }
                for (unsigned A = m_first; A < m_last; ++A) {
                    std::size_t first_A =
                        m_posthf_aux_bs_info.m_first_contraction_in_shell[A];
                    std::size_t last_A =
                        m_posthf_aux_bs_info.m_first_contraction_in_shell[A] +
                        m_posthf_aux_bs_info.m_shell_sizes[A];

                    std::memset(&m_T_0[0][0][0],
                                0,
                                (last_A - first_A) * m_n * m_n *
                                    sizeof(double));

                    niedoida::core::ShellPairIndexGenerator sp(
                        m_bs_info.m_no_shells);

                    unsigned long begin = 0;
                    unsigned long end = m_no_shell_pairs;

                    for (;;) {
                        // pile up requests
                        m_ACD_requests.clear();
                        unsigned r = 0;

                        {
                            if (begin >= end)
                                break;

                            while (begin < end) {

                                const unsigned P = (*sp)[0];
                                const unsigned Q = (*sp)[1];

                                const niedoida::core::ShellQuartetIndex sqi = {
                                    {P, Q, P, Q}};
                                const niedoida::core::ShellACDIndex acd = {
                                    {A, P, Q}};

                                if (sqrt(m_schwartz.max_integral(sqi) *
                                         m_max_J_shells(A)) > m_int_tresh) {

                                    const niedoida::core::ACDRequest request = {
                                        acd, false, &m_buf_ACD[r][0]};

                                    m_ACD_requests.push_back(request);

                                    r += 1;
                                }

                                ++sp;
                                ++begin;

                                if (r >= m_max_no_ACD_requests)
                                    break;
                            }
                        }

                        m_q_2_ie->calc_ACD(m_ACD_requests);

                        for (unsigned r = 0; r < m_ACD_requests.size(); ++r) {

                            const niedoida::core::ACDRequest& req =
                                m_ACD_requests[r];

                            const double* results = req.results;

                            const unsigned P = req.shells[1];
                            const unsigned Q = req.shells[2];

                            std::size_t first_P =
                                m_bs_info.m_first_contraction_in_shell[P];
                            std::size_t first_Q =
                                m_bs_info.m_first_contraction_in_shell[Q];

                            std::size_t last_P =
                                m_bs_info.m_first_contraction_in_shell[P] +
                                m_bs_info.m_shell_sizes[P];
                            std::size_t last_Q =
                                m_bs_info.m_first_contraction_in_shell[Q] +
                                m_bs_info.m_shell_sizes[Q];

                            for (std::size_t w = 0; w < last_A - first_A; ++w)
                                for (std::size_t p = first_P; p < last_P; ++p)
                                    for (std::size_t q = first_Q; q < last_Q;
                                         ++q) {
                                        m_T_0[w][p][q] = *results++;
                                        m_T_0[w][q][p] = m_T_0[w][p][q];
                                    }
                        }
                    }

                    for (std::size_t w = 0; w < last_A - first_A; ++w) {

                        for (unsigned i = 0; i < m_n; ++i)
                            for (unsigned j = 0; j < m_n; ++j)
                                TT_0(i, j) = m_T_0[w][i][j];

                        m_TT_1 = m_C_occ.t() * TT_0;
                        m_TT_2 = m_TT_1 * m_C_virt;

                        for (unsigned a = 0; a < m_no_virt; ++a)
                            for (unsigned i = 0; i < m_no_occ; ++i)
                                *(m_T_23 + i * m_no_virt * m_n_posthf_aux +
                                  a * m_n_posthf_aux + w + first_A) =
                                    m_TT_2(i, a);
                    }
                }
            }
        }

        void DF_RHF_MP2::WorkHorse_3::trans_3()
        {

            // to be set another way
            unsigned chunk_size = 1;

            arma::mat TT_23(m_no_virt, m_n_posthf_aux);

            for (;;) {
                {
                    std::unique_lock<std::mutex> lock(m_batch.mutex);

                    if (m_batch.begin >= m_batch.end)
                        return;

                    m_first = m_batch.begin;
                    m_last = std::min(m_batch.begin + chunk_size, m_batch.end);

                    m_batch.begin = m_last;
                }

                for (unsigned i = m_first; i < m_last; ++i) {

                    for (unsigned j = 0; j < m_no_virt; ++j)
                        for (unsigned a = 0; a < m_n_posthf_aux; ++a)
                            TT_23(j, a) =
                                m_T_23[i * m_no_virt * m_n_posthf_aux +
                                       j * m_n_posthf_aux + a];

                    m_buf_T23 = TT_23 * m_W.t();

                    for (unsigned j = 0; j < m_no_virt; ++j)
                        for (unsigned a = 0; a < m_n_posthf_aux; ++a)
                            m_T_23[i * m_no_virt * m_n_posthf_aux +
                                   j * m_n_posthf_aux + a] = m_buf_T23(j, a);
                }
            }
        }

        void DF_RHF_MP2::WorkHorse::finalize()
        {

            // to be set another way
            unsigned chunk_size = 1;

            arma::mat T23i(m_no_virt, m_n_posthf_aux);
            arma::mat T23j(m_no_virt, m_n_posthf_aux);

            for (;;) {
                {
                    std::unique_lock<std::mutex> lock(m_batch.mutex);

                    if (m_batch.begin >= m_batch.end)
                        return;

                    m_first = m_batch.begin;
                    m_last = std::min(m_batch.begin + chunk_size, m_batch.end);

                    m_batch.begin = m_last;
                }

                for (unsigned ij = m_first; ij < m_last; ++ij) {
                    const unsigned i = m_pairs[ij].first;
                    const unsigned j = m_pairs[ij].second;

                    for (unsigned p = 0; p < m_no_virt; ++p)
                        for (unsigned a = 0; a < m_n_posthf_aux; ++a) {
                            T23i(p, a) = m_T_23[i * m_no_virt * m_n_posthf_aux +
                                                p * m_n_posthf_aux + a];
                            T23j(p, a) = m_T_23[j * m_no_virt * m_n_posthf_aux +
                                                p * m_n_posthf_aux + a];
                        }

                    m_T_4 = T23i * T23j.t();

                    for (unsigned a = 0; a < m_no_virt; ++a)
                        for (unsigned b = 0; b < (i == j ? a + 1 : m_no_virt);
                             ++b) {
                            const double BJAI = m_T_4(a, b);
                            const double AJBI = m_T_4(b, a);
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
                                               4 * (BJAI - AJBI) *
                                                   (BJAI - AJBI))));
                            }
                        }
                }
            }
        }
    }
}
