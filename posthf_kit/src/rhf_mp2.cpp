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

        void RHF_MP2::determine_passes()
        {
            const unsigned minimum = m_n * m_n * (m_n + 1) / 2 * sizeof(double);
            m_no_occ_in_full_pass = std::min(
                m_no_occ, static_cast<unsigned>(m_memory_pool / minimum));
            if (m_no_occ_in_full_pass == 0) {
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::NORMAL,
                    "Error",
                    std::string("Memory provided seems to be too small"));
                m_no_occ_in_full_pass = 1;
            }
            m_overflow = m_no_occ % m_no_occ_in_full_pass;
            m_no_full_passes = m_no_occ / m_no_occ_in_full_pass;
            niedoida::io::Log::instance().write(niedoida::io::Logger::NORMAL,
                                                "no_passes",
                                                int(m_no_full_passes));
            niedoida::io::Log::instance().write(niedoida::io::Logger::NORMAL,
                                                "no_occ_orbitals_per_pass",
                                                int(m_no_occ_in_full_pass));
            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL,
                "no_occ_orbitals_per_final_pass",
                int(m_overflow));
        }

        void RHF_MP2::alloc_mem()
        {
            m_requests.reserve(m_max_no_requests);

            const std::size_t max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());
            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;
            m_buf.resize(boost::extents[m_max_no_requests * max_shell_size2 *
                                        max_shell_size2]);
            try {
                m_T1.resize(boost::extents[m_n][m_n * (m_n + 1) / 2]
                                          [m_no_occ_in_full_pass]);
            } catch (std::bad_alloc) {
                throw std::runtime_error(
                    "Not enough memory to make integral transformation.");
            }
        }

        RHF_MP2::RHF_MP2(
            std::shared_ptr<const niedoida::core::System> system,
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine>
                two_e_int_eng,
            const arma::vec& e,
            const arma::mat& C,
            unsigned long memory_pool,
            unsigned no_frozen,
            unsigned no_deleted,
            double threshold,
            const bool dc) :
            BasisSetInfo(system->basis_set),
            m_dc(dc),
            m_e(e),
            m_n(C.n_rows),
            m_no_frozen(no_frozen),
            m_no_deleted(no_deleted),
            m_memory_pool(memory_pool),
            m_2ei(std::move(two_e_int_eng)),
            m_int_tresh(threshold),
            m_schwartz(*system, *m_2ei)
        {
            m_max_no_requests = m_2ei->preferred_no_requests();
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

            determine_passes();
            alloc_mem();
            m_e2 = 0;

            {
                std::unique_ptr<niedoida::misc::Dispatcher> d =
                    niedoida::misc::dispatcher(
                        m_comm,
                        m_no_full_passes,
                        niedoida::misc::STATIC_DISPATCHING_ALGORITHM);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {

                    for (unsigned i = task_info->first; i < task_info->second;
                         ++i) {

                        niedoida::io::Log::Section section("pass");
                        niedoida::io::Log::instance().write(
                            niedoida::io::Logger::DEBUG, "pass", int(i));

                        unsigned j_begin = i * m_no_occ_in_full_pass;

                        {
                            niedoida::io::Log::Section section(
                                "first quarter transformation");

                            std::memset(m_T1.data(),
                                        0,
                                        m_T1.num_elements() * sizeof(double));
                            for (unsigned P = 0; P < m_no_shells; ++P) {
                                for (unsigned Q = P; Q < m_no_shells; ++Q) {
                                    for (unsigned R = P; R < m_no_shells; ++R) {
                                        unsigned S1 = R, S2;
                                        while (fill_int_buff(P, Q, R, S1, S2)) {
                                            double* buf_ptr = m_buf.data();
                                            for (unsigned S = S1; S < S2; ++S) {
                                                const niedoida::core::
                                                    ShellQuartetIndex sqi = {
                                                        {P, Q, R, S}};
                                                if (m_schwartz.max_integral(
                                                        sqi) > m_int_tresh)
                                                    buf_ptr += trans1(
                                                        buf_ptr,
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
                        }
                        trans23(m_no_occ_in_full_pass);
                        trans4(m_no_occ_in_full_pass);
                        update_e2(j_begin, m_no_occ_in_full_pass);
                    }
                }
            }

            // FIXME: the final pass should be treated the same way the full
            // passes are
            if (m_comm.rank() == 0 && m_overflow) {

                niedoida::io::Log::Section section("final pass");

                unsigned j_begin = m_no_full_passes * m_no_occ_in_full_pass;

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
                update_e2(j_begin, m_overflow);
            }

            double partial_e2 = m_e2;

            boost::mpi::all_reduce(
                m_comm, &partial_e2, 1, &m_e2, std::plus<double>());
        }

        bool RHF_MP2::fill_int_buff(
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

        std::size_t RHF_MP2::trans1(double* buf_ptr,
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
                                *current_T1 += g * m_C_occ(s, j_begin + j);
                            if (dif_rs) {
                                current_T1 = &m_T1[s][qp_index][0];
                                for (unsigned j = 0; j < j_scope;
                                     ++j, ++current_T1)
                                    *current_T1 += g * m_C_occ(r, j_begin + j);
                            }
                            if (dif_pr) {
                                current_T1 = &m_T1[p][sr_index][0];
                                for (unsigned j = 0; j < j_scope;
                                     ++j, ++current_T1)
                                    *current_T1 += g * m_C_occ(q, j_begin + j);
                                if (dif_pq) {
                                    current_T1 = &m_T1[q][sr_index][0];
                                    for (unsigned j = 0; j < j_scope;
                                         ++j, ++current_T1)
                                        *current_T1 +=
                                            g * m_C_occ(p, j_begin + j);
                                }
                            }
                        }
                }
            return buf_ptr - buf_ptr0;
        }

        void RHF_MP2::trans23(unsigned j_scope)
        {
            niedoida::io::Log::Section section(
                "second and third quarter transformation");
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

        void RHF_MP2::trans4(unsigned j_scope)
        {
            niedoida::io::Log::Section section("last quarter transformation");
            m_TT_4.resize(m_n, j_scope);
            m_TT_5.resize(m_no_virt, j_scope);
            //(ai|rj) -> (ai|bj)
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

        void RHF_MP2::update_e2(unsigned j_begin, unsigned j_scope)
        {
            for (unsigned b = 0; b < m_no_virt; ++b) {
                unsigned ia_index = 0;
                for (unsigned i = 0; i < m_no_occ; ++i) {
                    const unsigned ib_index = i * m_no_virt + b;
                    for (unsigned a = 0; a < m_no_virt; ++a, ++ia_index)
                        for (unsigned j = 0; j < j_scope; ++j) {
                            const double BIAJ = m_T1[a][ib_index][j];
                            const double AIBJ = m_T1[b][ia_index][j];
                            const double energy_factor =
                                m_e(i + m_no_frozen) + m_e(j + m_no_frozen) -
                                m_e(a + m_no_occ + m_no_frozen) -
                                m_e(b + m_no_occ + m_no_frozen);
                            if (!m_dc) {
                                m_e2 +=
                                    AIBJ * (AIBJ + AIBJ - BIAJ) / energy_factor;
                            } else {
                                m_e2 +=
                                    0.5 * (-energy_factor -
                                           sqrt(energy_factor * energy_factor +
                                                4 * AIBJ * AIBJ)) +
                                    0.25 * (-energy_factor -
                                            sqrt(energy_factor * energy_factor +
                                                 4 * (AIBJ - BIAJ) *
                                                     (AIBJ - BIAJ)));
                            }
                        }
                }
            }
        }
    }
}
