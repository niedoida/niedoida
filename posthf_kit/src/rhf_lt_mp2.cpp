/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/shell_quartet_index_generator.hpp"
#include "io_kit/io_kit.hpp"
#include "misc_kit/quadratures.hpp"
#include "posthf_kit/lt_mp2.hpp"
#include "posthf_kit/lt_mp2_utils.hpp"

#include <cstring>

#include <ext/numeric>

namespace niedoida {

    namespace posthf {

        void RHF_LT_MP2::cache_sizes(
            std::shared_ptr<const niedoida::core::System> system)
        {
            std::vector<niedoida::core::Shell*> shells;
            for (const niedoida::core::AtomicBasisSet* abs :
                 system->basis_set.atomic_basis_sets())
                for (auto shell : abs->valence_shells())
                    shells.push_back(shell);

            m_no_shells = shells.size();

            for (const niedoida::core::Shell* s : shells)
                m_shell_sizes.push_back(s->real_size());

            m_no_contractions =
                std::accumulate(m_shell_sizes.begin(), m_shell_sizes.end(), 0u);

            m_first_contraction_in_shell.push_back(0);
            std::partial_sum(m_shell_sizes.begin(),
                             boost::prior(m_shell_sizes.end()),
                             back_inserter(m_first_contraction_in_shell));

            m_max_no_requests = m_2ei->preferred_no_requests();
        }

        void RHF_LT_MP2::determine_passes()
        {
            const unsigned minimum = m_n * m_n * (m_n + 1) / 2 * sizeof(double);
            m_no_occ_in_full_pass = std::min(
                m_no_occ, static_cast<unsigned>(m_memory_pool / minimum));
            if (m_no_occ_in_full_pass == 0) {
                m_no_occ_in_full_pass = 1;
            }
            m_overflow = m_no_occ % m_no_occ_in_full_pass;
            m_no_full_passes = m_no_occ / m_no_occ_in_full_pass;
        }

        void RHF_LT_MP2::alloc_mem()
        {
            m_requests.reserve(m_max_no_requests);

            const std::size_t max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());
            m_buf.resize(boost::extents[m_max_no_requests *
                                        __gnu_cxx::power(max_shell_size, 4)]);
            try {
                m_T1.resize(boost::extents[m_n][m_n * (m_n + 1) / 2]
                                          [m_no_occ_in_full_pass]);
            } catch (std::bad_alloc) {
                throw std::runtime_error(
                    "Not enough memory to make integral transformation.");
            }
        }

        RHF_LT_MP2::RHF_LT_MP2(
            std::shared_ptr<const niedoida::core::System> system,
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine>
                two_e_int_eng,
            const arma::vec& e,
            const arma::mat& C,
            unsigned long memory_pool,
            unsigned no_frozen,
            unsigned no_deleted,
            const niedoida::misc::Quadrature& quadrature) :
            m_e(e),
            m_n(C.n_rows),
            m_no_frozen(no_frozen),
            m_no_deleted(no_deleted),
            m_memory_pool(memory_pool),
            m_2ei(std::move(two_e_int_eng)),
            m_int_tresh(1.0e-8),
            m_schwartz(*system, *m_2ei)
        {
            m_no_occ =
                system->no_electrons(niedoida::core::SPIN_ALPHA) - m_no_frozen;
            m_no_virt = m_n - m_no_occ - m_no_frozen - m_no_deleted;
            m_C_occ.resize(m_n, m_no_occ);
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_occ; ++j)
                    m_C_occ(i, j) = C(i, j + m_no_frozen);
            m_C_T_occ.resize(m_no_occ, m_n);
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_occ; ++j)
                    m_C_T_occ(j, i) = m_C_occ(i, j);
            m_C_virt.resize(m_n, m_no_virt);
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_virt; ++j)
                    m_C_virt(i, j) = C(i, j + m_no_occ + m_no_frozen);
            m_C_T_virt.resize(m_no_virt, m_n);
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_virt; ++j)
                    m_C_T_virt(j, i) = m_C_virt(i, j);
            m_TT_1.resize(m_n, m_n);
            m_TT_2.resize(m_no_occ, m_n);
            m_TT_3.resize(m_no_occ, m_no_virt);

            cache_sizes(system);
            determine_passes();
            alloc_mem();
            m_e2 = 0;

            const unsigned no_occ =
                system->no_electrons(niedoida::core::SPIN_ALPHA);

            niedoida::io::Log::Section section("lt-mp2");

            for (unsigned ii = 0; ii < quadrature.size(); ii++) {
                double t = quadrature[ii].first;
                double w = quadrature[ii].second;

                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::DEBUG, "t", t);
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::DEBUG, "w", w);
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::DEBUG,
                    "X matrix",
                    X_density_matrix(C, no_occ, m_no_frozen, m_e, t));
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::DEBUG,
                    "Y matrix",
                    Y_density_matrix(C, no_occ, m_no_deleted, m_e, t));

                unsigned j_begin = 0;
                for (unsigned i = 0; i < m_no_full_passes;
                     ++i, j_begin += m_no_occ_in_full_pass) {
                    std::memset(
                        m_T1.data(), 0, m_T1.num_elements() * sizeof(double));
                    for (unsigned P = 0; P < m_no_shells; ++P) {
                        for (unsigned Q = P; Q < m_no_shells; ++Q) {
                            for (unsigned R = P; R < m_no_shells; ++R) {
                                unsigned S1 = R, S2;
                                while (fill_int_buff(P, Q, R, S1, S2)) {
                                    double* buf_ptr = m_buf.data();
                                    for (unsigned S = S1; S < S2; ++S) {
                                        const niedoida::core::ShellQuartetIndex
                                            sqi = {{P, Q, R, S}};
                                        if (m_schwartz.max_integral(sqi) >
                                            m_int_tresh)
                                            buf_ptr +=
                                                trans1(buf_ptr,
                                                       P,
                                                       Q,
                                                       R,
                                                       S,
                                                       j_begin,
                                                       m_no_occ_in_full_pass);
                                    }
                                    S1 = S2;
                                }
                            }
                        }
                    }
                    trans23(m_no_occ_in_full_pass);
                    trans4(m_no_occ_in_full_pass);
                    const double partial_e2 =
                        update_e2(j_begin, m_no_occ_in_full_pass, t);
                    niedoida::io::Log::instance().write(
                        niedoida::io::Logger::DEBUG,
                        "partial energy contribution",
                        w * partial_e2);
                    m_e2 += w * partial_e2;
                }
                if (m_overflow) {
                    std::memset(
                        m_T1.data(), 0, m_T1.num_elements() * sizeof(double));
                    for (unsigned P = 0; P < m_no_shells; ++P) {
                        for (unsigned Q = P; Q < m_no_shells; ++Q) {
                            for (unsigned R = P; R < m_no_shells; ++R) {
                                unsigned S1 = R, S2;
                                while (fill_int_buff(P, Q, R, S1, S2)) {
                                    double* buf_ptr = m_buf.data();
                                    for (unsigned S = S1; S < S2; ++S) {
                                        const niedoida::core::ShellQuartetIndex
                                            sqi = {{P, Q, R, S}};
                                        if (m_schwartz.max_integral(sqi) >
                                            m_int_tresh)
                                            buf_ptr += trans1(buf_ptr,
                                                              P,
                                                              Q,
                                                              R,
                                                              S,
                                                              j_begin,
                                                              m_overflow);
                                    }
                                    S1 = S2;
                                }
                            }
                        }
                    }
                    trans23(m_overflow);
                    trans4(m_overflow);
                    const double partial_e2 = update_e2(j_begin, m_overflow, t);
                    niedoida::io::Log::instance().write(
                        niedoida::io::Logger::DEBUG,
                        "partial energy contribution",
                        w * partial_e2);
                    m_e2 += w * partial_e2;
                }
            }
        }

        bool RHF_LT_MP2::fill_int_buff(
            unsigned P, unsigned Q, unsigned R, unsigned S1, unsigned& S2)
        {
            if (S1 >= m_no_shells)
                return false;
            m_requests.clear();
            unsigned r = 0, S = S1;
            double* buf_ptr = m_buf.data();
            do {
                const niedoida::core::ShellQuartetIndex sqi = {{P, Q, R, S}};
                if (m_schwartz.max_integral(sqi) > m_int_tresh) {
                    const niedoida::core::Request request = {
                        sqi, false, buf_ptr};

                    buf_ptr += m_shell_sizes[P] * m_shell_sizes[Q] *
                               m_shell_sizes[R] * m_shell_sizes[S];
                    m_requests.push_back(request);
                    ++r;
                }
                ++S;
            } while (S < m_no_shells && r < m_max_no_requests);
            m_2ei->calc(m_requests);
            S2 = S;
            return true;
        }

        std::size_t RHF_LT_MP2::trans1(double* buf_ptr,
                                       unsigned P,
                                       unsigned Q,
                                       unsigned R,
                                       unsigned S,
                                       unsigned j_begin,
                                       unsigned j_scope)
        {
            double* buf_ptr0 = buf_ptr;
            unsigned size_P = m_shell_sizes[P];
            unsigned size_Q = m_shell_sizes[Q];
            unsigned size_R = m_shell_sizes[R];
            unsigned size_S = m_shell_sizes[S];
            unsigned p0 = m_first_contraction_in_shell[P];
            unsigned q0 = m_first_contraction_in_shell[Q];
            unsigned r0 = m_first_contraction_in_shell[R];
            unsigned s0 = m_first_contraction_in_shell[S];
            for (unsigned p = p0; p < p0 + size_P; ++p)
                for (unsigned q = q0; q < q0 + size_Q; ++q) {
                    const unsigned qp_index = q * (q + 1) / 2 + p;
                    for (unsigned r = r0; r < r0 + size_R; ++r)
                        for (unsigned s = s0; s < s0 + size_S; ++s) {
                            const double g = *buf_ptr++;
                            if (q < p || r < p || s < r)
                                continue;
                            if (std::abs(g) < m_int_tresh)
                                continue;
                            const unsigned sr_index = s * (s + 1) / 2 + r;
                            const bool dif_rs = (r != s);
                            const bool dif_pq = (p != q);
                            const bool dif_pr = (p != r);
                            double* NIEDOIDA_RESTRICT current_T1 =
                                &m_T1[r][qp_index][0];
                            for (unsigned j = 0; j < j_scope; ++j, ++current_T1)
                                *current_T1 += g * m_C_occ(s, j + j_begin);
                            if (dif_rs) {
                                current_T1 = &m_T1[s][qp_index][0];
                                for (unsigned j = 0; j < j_scope;
                                     ++j, ++current_T1)
                                    *current_T1 += g * m_C_occ(r, j + j_begin);
                            }
                            if (dif_pr) {
                                current_T1 = &m_T1[p][sr_index][0];
                                for (unsigned j = 0; j < j_scope;
                                     ++j, ++current_T1)
                                    *current_T1 += g * m_C_occ(q, j + j_begin);
                                if (dif_pq) {
                                    current_T1 = &m_T1[q][sr_index][0];
                                    for (unsigned j = 0; j < j_scope;
                                         ++j, ++current_T1)
                                        *current_T1 +=
                                            g * m_C_occ(p, j + j_begin);
                                }
                            }
                        }
                }
            return buf_ptr - buf_ptr0;
        }

        void RHF_LT_MP2::trans23(unsigned j_scope)
        {
            for (unsigned r = 0; r < m_n; ++r)
                for (unsigned j = 0; j < j_scope; ++j) {
                    unsigned pq_index = 0;
                    for (unsigned p = 0; p < m_n; ++p)
                        for (unsigned q = 0; q <= p; ++q, ++pq_index) {
                            m_TT_1(p, q) = m_T1[r][pq_index][j];
                            m_TT_1(q, p) = m_TT_1(p, q);
                        }
                    m_TT_2 = m_C_T_occ * m_TT_1;
                    m_TT_3 = m_TT_2 * m_C_virt;
                    unsigned ia_index = 0;
                    for (unsigned i = 0; i < m_no_occ; ++i)
                        for (unsigned a = 0; a < m_no_virt; ++a, ++ia_index) {
                            m_T1[r][ia_index][j] = m_TT_3(i, a);
                        }
                }
        }

        void RHF_LT_MP2::trans4(unsigned j_scope)
        {
            m_TT_4.resize(m_n, j_scope);
            m_TT_5.resize(m_no_virt, j_scope);
            unsigned ia_index = 0;
            for (unsigned i = 0; i < m_no_occ; ++i)
                for (unsigned a = 0; a < m_no_virt; ++a, ++ia_index) {
                    for (unsigned r = 0; r < m_n; ++r)
                        for (unsigned j = 0; j < j_scope; ++j)
                            m_TT_4(r, j) = m_T1[r][ia_index][j];
                    m_TT_5 = m_C_T_virt * m_TT_4;
                    for (unsigned b = 0; b < m_no_virt; ++b)
                        for (unsigned j = 0; j < j_scope; ++j) {
                            m_T1[b][ia_index][j] = m_TT_5(b, j);
                        }
                }
        }

        double
        RHF_LT_MP2::update_e2(unsigned j_begin, unsigned j_scope, double t)
        {
            double partial_e2 = 0;
            for (unsigned b = 0; b < m_no_virt; ++b) {
                unsigned ia_index = 0;
                for (unsigned i = 0; i < m_no_occ; ++i) {
                    const unsigned ib_index = i * m_no_virt + b;
                    for (unsigned a = 0; a < m_no_virt; ++a, ++ia_index)
                        for (unsigned j = 0; j < j_scope; ++j) {
                            const double BIAJ = m_T1[a][ib_index][j];
                            const double AIBJ = m_T1[b][ia_index][j];
                            partial_e2 -=
                                AIBJ * (AIBJ + AIBJ - BIAJ) *
                                std::exp((m_e[i + m_no_frozen] +
                                          m_e[j + j_begin + m_no_frozen] -
                                          m_e[a + m_no_occ + m_no_frozen] -
                                          m_e[b + m_no_occ + m_no_frozen]) *
                                         t);
                        }
                }
            }
            return partial_e2;
        }
    }
}
