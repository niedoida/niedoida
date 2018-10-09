/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/shell_quartet_index_generator.hpp"
#include "io_kit/io_kit.hpp"
#include "misc_kit/dispatcher.hpp"
#include "posthf_kit/canonical_mp2.hpp"
#include <boost/format.hpp>

#include <cstring>

namespace niedoida {

    namespace posthf {

        UHF_MP2_IMP_2::UHF_MP2_IMP_2(
            std::shared_ptr<const niedoida::core::System> system,
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine>
                two_e_int_eng,
            const arma::vec e[2],
            const arma::mat C[2],
            unsigned long memory_pool,
            unsigned no_frozen[2],
            unsigned no_deleted[2],
            double threshold) :
            niedoida::core::BasisSetInfo(system->basis_set),
            m_n(C[niedoida::core::SPIN_ALPHA].n_rows),
            m_memory_pool(memory_pool),
            m_2ei(std::move(two_e_int_eng)),
            m_int_tresh(threshold),
            m_schwartz(*system, *m_2ei)
        {
            m_max_no_requests = m_2ei->preferred_no_requests();
            m_requests.reserve(m_max_no_requests);
            const std::size_t max_shell_size2 =
                m_max_shell_size * m_max_shell_size;
            m_buf.resize(boost::extents[m_max_no_requests * max_shell_size2 *
                                        max_shell_size2]);
            for (int s = 0; s < niedoida::core::NO_SPINS; ++s) {
                const niedoida::core::Spin SPIN = niedoida::core::Spin(s);
                m_e[SPIN] = e[SPIN];
                m_no_frozen[SPIN] = no_frozen[SPIN];
                m_no_deleted[SPIN] = no_deleted[SPIN];
                m_no_occ[SPIN] = system->no_electrons(SPIN) - m_no_frozen[SPIN];
                m_no_virt[SPIN] = m_n - m_no_occ[SPIN] - m_no_frozen[SPIN] -
                                  m_no_deleted[SPIN];
                m_C_occ[SPIN].resize(m_n, m_no_occ[SPIN]);
                m_C_virt[SPIN].resize(m_n, m_no_virt[SPIN]);
                for (unsigned i = 0; i < m_n; ++i)
                    for (unsigned j = 0; j < m_no_occ[SPIN]; ++j)
                        m_C_occ[SPIN](i, j) = C[SPIN](i, j + m_no_frozen[SPIN]);
                for (unsigned i = 0; i < m_n; ++i)
                    for (unsigned j = 0; j < m_no_virt[SPIN]; ++j)
                        m_C_virt[SPIN](i, j) =
                            C[SPIN](i, j + m_no_occ[SPIN] + m_no_frozen[SPIN]);

                m_max_C_occ[SPIN] = 0;
                m_max_C_virt[SPIN] = 0;
                for (unsigned i = 0; i < m_n; ++i)
                    for (unsigned j = 0; j < m_no_occ[SPIN]; ++j)
                        if (std::abs(m_C_occ[SPIN](i, j)) > m_max_C_occ[SPIN])
                            m_max_C_occ[SPIN] = std::abs(m_C_occ[SPIN](i, j));
                for (unsigned i = 0; i < m_n; ++i)
                    for (unsigned j = 0; j < m_no_virt[SPIN]; ++j)
                        if (std::abs(m_C_virt[SPIN](i, j)) > m_max_C_virt[SPIN])
                            m_max_C_virt[SPIN] = std::abs(m_C_virt[SPIN](i, j));

                m_C_sprs[SPIN].resize(m_no_shells);
                m_C_prs[SPIN].resize(m_n);
                m_C_occ_pr[SPIN].resize(m_n);
                m_C_virt_pr[SPIN].resize(m_n);
            }

            m_e2 = 0;

            {

                m_full_passes.clear();
                determine_passes();
                std::unique_ptr<niedoida::misc::Dispatcher> d =
                    dispatcher(m_comm,
                               m_no_passes,
                               niedoida::misc::STATIC_DISPATCHING_ALGORITHM);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {

                    for (unsigned ii = task_info->first; ii < task_info->second;
                         ++ii) {

                        niedoida::io::Log::Section pass_section("pass");
                        niedoida::io::Log::instance().write(
                            niedoida::io::Logger::NORMAL, "pass", int(ii));

                        const unsigned i_begin = m_full_passes[ii].first.first;
                        const unsigned i_end = m_full_passes[ii].first.second;
                        const SpinType st = m_full_passes[ii].second;

                        niedoida::io::Log::instance().write(
                            niedoida::io::Logger::NORMAL,
                            "first",
                            int(i_begin));
                        niedoida::io::Log::instance().write(
                            niedoida::io::Logger::NORMAL,
                            "last",
                            int(i_end - 1));
                        niedoida::io::Log::instance().write(
                            niedoida::io::Logger::NORMAL, "type", int(st));

                        switch (st) {
                        case ST_AAAA:
                            trans_1_3(
                                i_begin, i_end, niedoida::core::SPIN_ALPHA);
                            finalize(
                                i_begin, i_end, niedoida::core::SPIN_ALPHA);
                            break;
                        case ST_BBBB:
                            trans_1_3(
                                i_begin, i_end, niedoida::core::SPIN_BETA);
                            finalize(i_begin, i_end, niedoida::core::SPIN_BETA);
                            break;
                        case ST_ABAB:
                            trans_1_3_ab(i_begin, i_end);
                            finalize_ab(i_begin, i_end);
                            break;
                        }
                    }
                }

                double partial_e2 = m_e2;

                boost::mpi::all_reduce(
                    m_comm, &partial_e2, 1, &m_e2, std::plus<double>());
            }
        }

        void UHF_MP2_IMP_2::determine_passes()
        {
            unsigned max_elements = m_memory_pool / sizeof(double);

            for (int s = 0; s < niedoida::core::NO_SPINS; ++s) {
                const niedoida::core::Spin SPIN = niedoida::core::Spin(s);
                if (m_no_occ[SPIN] * m_no_virt[SPIN] * m_n > max_elements) {
                    niedoida::io::Log::instance().write(
                        niedoida::io::Logger::NORMAL,
                        "minimal memory required (MB)",
                        int(m_no_occ[SPIN] * m_no_virt[SPIN] * m_n *
                                sizeof(double) / (1024 * 1024) +
                            1));
                    abort();
                }

                SpinType st =
                    (SPIN == niedoida::core::SPIN_ALPHA ? ST_AAAA : ST_BBBB);

                std::vector<unsigned> i_sizes(m_no_occ[SPIN]);
                for (unsigned i = 0; i < m_no_occ[SPIN]; ++i)
                    i_sizes[i] = (i + 1) * m_no_virt[SPIN] * m_n;

                unsigned ind = 0;
                unsigned ind1 = 0;
                while (ind < m_no_occ[SPIN]) {
                    unsigned sum = 0;
                    while (sum < max_elements && ind1 < m_no_occ[SPIN]) {
                        sum += i_sizes[ind1];
                        ind1++;
                    }
                    m_full_passes.push_back(
                        std::make_pair(std::make_pair(ind, ind1), st));
                    ind = ind1;
                }
            }

            std::vector<unsigned> i_sizes(m_no_occ[niedoida::core::SPIN_ALPHA]);
            for (unsigned i = 0; i < m_no_occ[niedoida::core::SPIN_ALPHA]; ++i)
                i_sizes[i] = m_no_occ[niedoida::core::SPIN_BETA] *
                             m_no_virt[niedoida::core::SPIN_ALPHA] * m_n;

            unsigned ind = 0;
            unsigned ind1 = 0;
            while (ind < m_no_occ[niedoida::core::SPIN_ALPHA]) {
                unsigned sum = 0;
                while (sum < max_elements &&
                       ind1 < m_no_occ[niedoida::core::SPIN_ALPHA]) {
                    sum += i_sizes[ind1];
                    ind1++;
                }
                m_full_passes.push_back(
                    std::make_pair(std::make_pair(ind, ind1), ST_ABAB));
                ind = ind1;
            }

            m_no_passes = m_full_passes.size();

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL, "no_passes", int(m_no_passes));
        }

        bool UHF_MP2_IMP_2::fill_int_buff(const unsigned P,
                                          const unsigned R,
                                          const unsigned Q,
                                          const unsigned S1,
                                          unsigned& S2,
                                          const niedoida::core::Spin SPIN1,
                                          const niedoida::core::Spin SPIN2)
        {
            if (S1 >= m_no_shells)
                return false;
            const double factor =
                m_max_C_virt[SPIN2] * m_max_C_virt[SPIN1] * m_max_C_occ[SPIN2];
            m_requests.clear();
            unsigned r = 0, S = S1;
            double* buf_ptr = m_buf.data();
            do {
                const niedoida::core::ShellQuartetIndex sqi = {{P, R, Q, S}};
                if (m_schwartz.max_integral(sqi) *
                        std::max(m_C_sprs[SPIN1](Q), m_C_sprs[SPIN1](S)) *
                        factor >=
                    m_int_tresh) {
                    const niedoida::core::Request request = {
                        sqi, false, buf_ptr};

                    buf_ptr += m_shell_sizes[P] * m_shell_sizes[R] *
                               m_shell_sizes[Q] * m_shell_sizes[S];
                    m_requests.push_back(request);
                    ++r;
                }
                ++S;
            } while (S < m_no_shells && r < m_max_no_requests);
            m_2ei->calc(m_requests);
            S2 = S;
            return true;
        }

        void UHF_MP2_IMP_2::trans_1_3(const unsigned i_begin,
                                      const unsigned i_end,
                                      const niedoida::core::Spin SPIN)
        {
            const unsigned i_range = i_end - i_begin;

            memset(&m_C_sprs[SPIN](0), 0, m_no_shells * sizeof(double));
            memset(&m_C_occ_pr[SPIN](0), 0, m_n * sizeof(double));
            memset(&m_C_virt_pr[SPIN](0), 0, m_n * sizeof(double));
            memset(&m_C_prs[SPIN](0), 0, m_n * sizeof(double));

            for (unsigned P = 0; P < m_no_shells; ++P) {
                unsigned p0 = m_first_contraction_in_shell[P];
                unsigned p1 = m_shell_sizes[P] + p0;
                for (unsigned p = p0; p < p1; ++p)
                    for (unsigned i = i_begin; i < i_end; ++i) {
                        if (std::abs(m_C_occ[SPIN](p, i)) > m_C_sprs[SPIN](P))
                            m_C_sprs[SPIN](P) = std::abs(m_C_occ[SPIN](p, i));
                        if (std::abs(m_C_occ[SPIN](p, i)) > m_C_prs[SPIN](p))
                            m_C_prs[SPIN](p) = std::abs(m_C_occ[SPIN](p, i));
                    }
            }

            for (unsigned p = 0; p < m_n; ++p)
                for (unsigned i = 0; i < i_end; ++i)
                    if (std::abs(m_C_occ[SPIN](p, i)) > m_C_occ_pr[SPIN](p))
                        m_C_occ_pr[SPIN](p) = std::abs(m_C_occ[SPIN](p, i));

            for (unsigned p = 0; p < m_n; ++p)
                for (unsigned i = 0; i < m_no_virt[SPIN]; ++i)
                    if (std::abs(m_C_virt[SPIN](p, i)) > m_C_virt_pr[SPIN](p))
                        m_C_virt_pr[SPIN](p) = std::abs(m_C_virt[SPIN](p, i));

            unsigned no_ijs = 0;
            for (unsigned i = i_begin; i < i_end; ++i)
                no_ijs += i + 1;

            m_T_1.resize(boost::extents[m_max_shell_size][m_max_shell_size][m_n]
                                       [i_range]);
            m_TT_2.resize(m_no_virt[SPIN], i_range);
            m_T_3.resize(boost::extents[m_no_virt[SPIN]][m_n][no_ijs]);

            arma::mat TT_1(m_n, i_range);

            memset(m_T_3.data(),
                   0,
                   m_no_virt[SPIN] * m_n * no_ijs * sizeof(double));

            for (unsigned P = 0; P < m_no_shells; ++P)
                for (unsigned R = P; R < m_no_shells; ++R) {
                    bool treated_pair = false;
                    memset(m_T_1.data(),
                           0,
                           m_max_shell_size * m_max_shell_size * m_n * i_range *
                               sizeof(double));
                    unsigned size_P = m_shell_sizes[P];
                    unsigned size_R = m_shell_sizes[R];
                    unsigned p0 = m_first_contraction_in_shell[P];
                    unsigned r0 = m_first_contraction_in_shell[R];
                    for (unsigned Q = 0; Q < m_no_shells; ++Q) {
                        unsigned S1 = Q, S2;
                        while (fill_int_buff(P, R, Q, S1, S2, SPIN, SPIN)) {
                            double* result = m_buf.data();
                            for (unsigned a = 0; a < m_requests.size(); ++a) {
                                treated_pair = true;
                                unsigned S = m_requests[a].shells[3];
                                unsigned size_Q = m_shell_sizes[Q];
                                unsigned size_S = m_shell_sizes[S];
                                unsigned q0 = m_first_contraction_in_shell[Q];
                                unsigned s0 = m_first_contraction_in_shell[S];
                                for (unsigned p = 0; p < size_P; ++p)
                                    for (unsigned r = 0; r < size_R; ++r) {
                                        const double factor =
                                            m_max_C_virt[SPIN] *
                                            std::max(
                                                m_C_occ_pr[SPIN](p + p0) *
                                                    m_C_virt_pr[SPIN](r + r0),
                                                m_C_occ_pr[SPIN](r + r0) *
                                                    m_C_virt_pr[SPIN](p + p0));
                                        for (unsigned q = q0; q < q0 + size_Q;
                                             ++q)
                                            for (unsigned s = s0;
                                                 s < s0 + size_S;
                                                 ++s) {
                                                const double g = *result++;
                                                if (r + r0 < p + p0)
                                                    continue;
                                                if (s < q)
                                                    continue;
                                                if (std::abs(g) *
                                                        std::max(
                                                            m_C_prs[SPIN](q),
                                                            m_C_prs[SPIN](s)) *
                                                        factor <
                                                    m_int_tresh)
                                                    continue;
                                                double* NIEDOIDA_RESTRICT _T1q =
                                                    &m_T_1[p][r][q][0];
                                                for (unsigned i = i_begin;
                                                     i < i_begin + i_range;
                                                     ++i)
                                                    *_T1q++ +=
                                                        g * m_C_occ[SPIN](s, i);
                                                if (q != s) {
                                                    double* NIEDOIDA_RESTRICT
                                                        _T1s =
                                                            &m_T_1[p][r][s][0];
                                                    for (unsigned i = i_begin;
                                                         i < i_begin + i_range;
                                                         ++i)
                                                        *_T1s++ +=
                                                            g *
                                                            m_C_occ[SPIN](q, i);
                                                }
                                            }
                                    }
                            }
                            S1 = S2;
                        }
                    }

                    if (treated_pair) {
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
                                    std::max(m_C_occ_pr[SPIN](pp) *
                                                 m_C_virt_pr[SPIN](rr),
                                             m_C_occ_pr[SPIN](rr) *
                                                 m_C_virt_pr[SPIN](pp));
                                const double factor_1 =
                                    factor * m_max_C_virt[SPIN];

                                if (pr_max * factor_1 < m_int_tresh)
                                    continue;

                                for (unsigned j = 0; j < m_n; ++j)
                                    for (unsigned i = 0; i < i_range; ++i)
                                        TT_1(j, i) = m_T_1[p][r][j][i];

                                m_TT_2 = m_C_virt[SPIN].t() * TT_1;

                                for (unsigned a = 0; a < m_no_virt[SPIN]; ++a) {
                                    if (pp != rr) {
                                        unsigned ij = 0;
                                        for (unsigned i = 0; i < i_range; ++i) {
                                            const unsigned j_end = i + i_begin;
                                            const double g = m_TT_2(a, i);
                                            if (std::abs(g) * factor >=
                                                m_int_tresh) {
                                                for (unsigned jj = 0;
                                                     jj < j_end + 1;
                                                     ++jj) {
                                                    m_T_3[a][rr][ij + jj] +=
                                                        g *
                                                        m_C_occ[SPIN](pp, jj);
                                                    m_T_3[a][pp][ij + jj] +=
                                                        g *
                                                        m_C_occ[SPIN](rr, jj);
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
                                                for (unsigned jj = 0;
                                                     jj < j_end + 1;
                                                     ++jj) {
                                                    m_T_3[a][rr][ij + jj] +=
                                                        g *
                                                        m_C_occ[SPIN](pp, jj);
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

        void UHF_MP2_IMP_2::finalize(const unsigned i_begin,
                                     const unsigned i_end,
                                     const niedoida::core::Spin SPIN)
        {

            m_TT_3.resize(m_no_virt[SPIN], m_n);
            m_TT_4.resize(m_no_virt[SPIN], m_no_virt[SPIN]);

            unsigned ij = 0;
            for (unsigned i = i_begin; i < i_end; ++i)
                for (unsigned j = 0; j <= i; ++j, ++ij) {
                    for (unsigned a = 0; a < m_no_virt[SPIN]; ++a)
                        for (unsigned s = 0; s < m_n; ++s)
                            m_TT_3(a, s) = m_T_3[a][s][ij];

                    m_TT_4 = m_TT_3 * m_C_virt[SPIN];

                    for (unsigned a = 0; a < m_no_virt[SPIN]; ++a)
                        for (unsigned b = 0; b <= a; ++b) {
                            const double BJAI = m_TT_4(a, b);
                            const double AJBI = m_TT_4(b, a);
                            m_e2 += (BJAI - AJBI) * (BJAI - AJBI) /
                                    (m_e[SPIN](i + m_no_frozen[SPIN]) +
                                     m_e[SPIN](j + m_no_frozen[SPIN]) -
                                     m_e[SPIN](a + m_no_occ[SPIN] +
                                               m_no_frozen[SPIN]) -
                                     m_e[SPIN](b + m_no_occ[SPIN] +
                                               m_no_frozen[SPIN]));
                        }
                }
        }

        void UHF_MP2_IMP_2::trans_1_3_ab(const unsigned i_begin,
                                         const unsigned i_end)
        {
            const unsigned i_range = i_end - i_begin;

            memset(&m_C_sprs[niedoida::core::SPIN_ALPHA](0),
                   0,
                   m_no_shells * sizeof(double));
            memset(&m_C_occ_pr[niedoida::core::SPIN_BETA](0),
                   0,
                   m_n * sizeof(double));
            memset(&m_C_virt_pr[niedoida::core::SPIN_BETA](0),
                   0,
                   m_n * sizeof(double));
            memset(&m_C_prs[niedoida::core::SPIN_ALPHA](0),
                   0,
                   m_n * sizeof(double));

            for (unsigned P = 0; P < m_no_shells; ++P) {
                unsigned p0 = m_first_contraction_in_shell[P];
                unsigned p1 = m_shell_sizes[P] + p0;
                for (unsigned p = p0; p < p1; ++p)
                    for (unsigned i = i_begin; i < i_end; ++i) {
                        if (std::abs(
                                m_C_occ[niedoida::core::SPIN_ALPHA](p, i)) >
                            m_C_sprs[niedoida::core::SPIN_ALPHA](P))
                            m_C_sprs[niedoida::core::SPIN_ALPHA](P) = std::abs(
                                m_C_occ[niedoida::core::SPIN_ALPHA](p, i));
                        if (std::abs(m_C_occ[niedoida::core::SPIN_ALPHA](
                                p, i)) > m_C_prs[niedoida::core::SPIN_ALPHA](p))
                            m_C_prs[niedoida::core::SPIN_ALPHA](p) = std::abs(
                                m_C_occ[niedoida::core::SPIN_ALPHA](p, i));
                    }
            }

            for (unsigned p = 0; p < m_n; ++p)
                for (unsigned i = 0; i < m_no_occ[niedoida::core::SPIN_BETA];
                     ++i)
                    if (std::abs(m_C_occ[niedoida::core::SPIN_BETA](p, i)) >
                        m_C_occ_pr[niedoida::core::SPIN_BETA](p))
                        m_C_occ_pr[niedoida::core::SPIN_BETA](p) =
                            std::abs(m_C_occ[niedoida::core::SPIN_BETA](p, i));

            for (unsigned p = 0; p < m_n; ++p)
                for (unsigned i = 0; i < m_no_virt[niedoida::core::SPIN_BETA];
                     ++i)
                    if (std::abs(m_C_virt[niedoida::core::SPIN_BETA](p, i)) >
                        m_C_virt_pr[niedoida::core::SPIN_BETA](p))
                        m_C_virt_pr[niedoida::core::SPIN_BETA](p) =
                            std::abs(m_C_virt[niedoida::core::SPIN_BETA](p, i));

            const unsigned no_ijs =
                (i_end - i_begin) * m_no_occ[niedoida::core::SPIN_BETA];

            m_T_1.resize(boost::extents[m_max_shell_size][m_max_shell_size][m_n]
                                       [i_range]);
            m_TT_2.resize(m_no_virt[niedoida::core::SPIN_ALPHA], i_range);
            m_T_3.resize(boost::extents[m_no_virt[niedoida::core::SPIN_ALPHA]]
                                       [m_n][no_ijs]);

            arma::mat TT_1(m_n, i_range);

            memset(m_T_3.data(),
                   0,
                   m_no_virt[niedoida::core::SPIN_ALPHA] * m_n * no_ijs *
                       sizeof(double));

            for (unsigned P = 0; P < m_no_shells; ++P)
                for (unsigned R = P; R < m_no_shells; ++R) {
                    bool treated_pair = false;
                    memset(m_T_1.data(),
                           0,
                           m_max_shell_size * m_max_shell_size * m_n * i_range *
                               sizeof(double));
                    unsigned size_P = m_shell_sizes[P];
                    unsigned size_R = m_shell_sizes[R];
                    unsigned p0 = m_first_contraction_in_shell[P];
                    unsigned r0 = m_first_contraction_in_shell[R];
                    for (unsigned Q = 0; Q < m_no_shells; ++Q) {
                        unsigned S1 = Q, S2;
                        while (fill_int_buff(P,
                                             R,
                                             Q,
                                             S1,
                                             S2,
                                             niedoida::core::SPIN_ALPHA,
                                             niedoida::core::SPIN_BETA)) {
                            double* result = m_buf.data();
                            for (unsigned a = 0; a < m_requests.size(); ++a) {
                                treated_pair = true;
                                unsigned S = m_requests[a].shells[3];
                                unsigned size_Q = m_shell_sizes[Q];
                                unsigned size_S = m_shell_sizes[S];
                                unsigned q0 = m_first_contraction_in_shell[Q];
                                unsigned s0 = m_first_contraction_in_shell[S];
                                for (unsigned p = 0; p < size_P; ++p)
                                    for (unsigned r = 0; r < size_R; ++r) {
                                        const double factor =
                                            m_max_C_virt
                                                [niedoida::core::SPIN_ALPHA] *
                                            std::max(
                                                m_C_occ_pr[niedoida::core::
                                                               SPIN_BETA](p +
                                                                          p0) *
                                                    m_C_virt_pr[niedoida::core::
                                                                    SPIN_BETA](
                                                        r + r0),
                                                m_C_occ_pr[niedoida::core::
                                                               SPIN_BETA](r +
                                                                          r0) *
                                                    m_C_virt_pr[niedoida::core::
                                                                    SPIN_BETA](
                                                        p + p0));
                                        for (unsigned q = q0; q < q0 + size_Q;
                                             ++q)
                                            for (unsigned s = s0;
                                                 s < s0 + size_S;
                                                 ++s) {
                                                const double g = *result++;
                                                if (r + r0 < p + p0)
                                                    continue;
                                                if (s < q)
                                                    continue;
                                                if (std::abs(g) *
                                                        std::max(
                                                            m_C_prs
                                                                [niedoida::core::
                                                                     SPIN_ALPHA](
                                                                    q),
                                                            m_C_prs
                                                                [niedoida::core::
                                                                     SPIN_ALPHA](
                                                                    s)) *
                                                        factor <
                                                    m_int_tresh)
                                                    continue;
                                                double* NIEDOIDA_RESTRICT _T1q =
                                                    &m_T_1[p][r][q][0];
                                                for (unsigned i = i_begin;
                                                     i < i_begin + i_range;
                                                     ++i)
                                                    *_T1q++ +=
                                                        g *
                                                        m_C_occ[niedoida::core::
                                                                    SPIN_ALPHA](
                                                            s, i);
                                                if (q != s) {
                                                    double* NIEDOIDA_RESTRICT
                                                        _T1s =
                                                            &m_T_1[p][r][s][0];
                                                    for (unsigned i = i_begin;
                                                         i < i_begin + i_range;
                                                         ++i)
                                                        *_T1s++ +=
                                                            g *
                                                            m_C_occ
                                                                [niedoida::core::
                                                                     SPIN_ALPHA](
                                                                    q, i);
                                                }
                                            }
                                    }
                            }
                            S1 = S2;
                        }
                    }

                    if (treated_pair) {
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

                                const double factor = std::max(
                                    m_C_occ_pr[niedoida::core::SPIN_BETA](pp) *
                                        m_C_virt_pr[niedoida::core::SPIN_BETA](
                                            rr),
                                    m_C_occ_pr[niedoida::core::SPIN_BETA](rr) *
                                        m_C_virt_pr[niedoida::core::SPIN_BETA](
                                            pp));
                                const double factor_1 =
                                    factor *
                                    m_max_C_virt[niedoida::core::SPIN_ALPHA];

                                if (pr_max * factor_1 < m_int_tresh)
                                    continue;

                                for (unsigned j = 0; j < m_n; ++j)
                                    for (unsigned i = 0; i < i_range; ++i)
                                        TT_1(j, i) = m_T_1[p][r][j][i];

                                m_TT_2 =
                                    m_C_virt[niedoida::core::SPIN_ALPHA].t() *
                                    TT_1;

                                for (unsigned a = 0;
                                     a < m_no_virt[niedoida::core::SPIN_ALPHA];
                                     ++a) {
                                    if (pp != rr) {
                                        unsigned ij = 0;
                                        for (unsigned i = 0; i < i_range; ++i) {
                                            const unsigned j_end = m_no_occ
                                                [niedoida::core::SPIN_BETA];
                                            const double g = m_TT_2(a, i);
                                            if (std::abs(g) * factor >=
                                                m_int_tresh) {
                                                for (unsigned jj = 0;
                                                     jj < j_end;
                                                     ++jj) {
                                                    m_T_3[a][rr][ij + jj] +=
                                                        g *
                                                        m_C_occ[niedoida::core::
                                                                    SPIN_BETA](
                                                            pp, jj);
                                                    m_T_3[a][pp][ij + jj] +=
                                                        g *
                                                        m_C_occ[niedoida::core::
                                                                    SPIN_BETA](
                                                            rr, jj);
                                                }
                                            }
                                            ij += j_end;
                                        }
                                    } else {
                                        unsigned ij = 0;
                                        for (unsigned i = 0; i < i_range; ++i) {
                                            const unsigned j_end = m_no_occ
                                                [niedoida::core::SPIN_BETA];
                                            const double g = m_TT_2(a, i);
                                            if (std::abs(g) * factor >=
                                                m_int_tresh) {
                                                for (unsigned jj = 0;
                                                     jj < j_end;
                                                     ++jj) {
                                                    m_T_3[a][rr][ij + jj] +=
                                                        g *
                                                        m_C_occ[niedoida::core::
                                                                    SPIN_BETA](
                                                            pp, jj);
                                                }
                                            }
                                            ij += j_end;
                                        }
                                    }
                                }
                            }
                    }
                }
        }

        void UHF_MP2_IMP_2::finalize_ab(const unsigned i_begin,
                                        const unsigned i_end)
        {

            m_TT_3.resize(m_no_virt[niedoida::core::SPIN_ALPHA], m_n);
            m_TT_4.resize(m_no_virt[niedoida::core::SPIN_ALPHA],
                          m_no_virt[niedoida::core::SPIN_BETA]);

            unsigned ij = 0;
            for (unsigned i = i_begin; i < i_end; ++i)
                for (unsigned j = 0; j < m_no_occ[niedoida::core::SPIN_BETA];
                     ++j, ++ij) {
                    for (unsigned a = 0;
                         a < m_no_virt[niedoida::core::SPIN_ALPHA];
                         ++a)
                        for (unsigned s = 0; s < m_n; ++s)
                            m_TT_3(a, s) = m_T_3[a][s][ij];

                    m_TT_4 = m_TT_3 * m_C_virt[niedoida::core::SPIN_BETA];

                    for (unsigned a = 0;
                         a < m_no_virt[niedoida::core::SPIN_ALPHA];
                         ++a)
                        for (unsigned b = 0;
                             b < m_no_virt[niedoida::core::SPIN_BETA];
                             ++b) {
                            const double BJAI = m_TT_4(a, b);
                            m_e2 +=
                                BJAI * BJAI /
                                (m_e[niedoida::core::SPIN_ALPHA](
                                     i +
                                     m_no_frozen[niedoida::core::SPIN_ALPHA]) +
                                 m_e[niedoida::core::SPIN_BETA](
                                     j +
                                     m_no_frozen[niedoida::core::SPIN_BETA]) -
                                 m_e[niedoida::core::SPIN_ALPHA](
                                     a + m_no_occ[niedoida::core::SPIN_ALPHA] +
                                     m_no_frozen[niedoida::core::SPIN_ALPHA]) -
                                 m_e[niedoida::core::SPIN_BETA](
                                     b + m_no_occ[niedoida::core::SPIN_BETA] +
                                     m_no_frozen[niedoida::core::SPIN_BETA]));
                        }
                }
        }
    }
}
