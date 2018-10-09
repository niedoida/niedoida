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

        RHF_MP2_IMP::RHF_MP2_IMP(
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
            niedoida::core::BasisSetInfo(system->basis_set),
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
            determine_passes();
            m_TT_2a.resize(m_n, m_n);
            m_TT_3.resize(m_no_virt, m_n);
            m_TT_4.resize(m_no_virt, m_no_virt);
            m_C_sprs.resize(m_no_shells);
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

                    for (unsigned ii = task_info->first; ii < task_info->second;
                         ++ii) {

                        niedoida::io::Log::Section pass_section("pass");
                        niedoida::io::Log::instance().write(
                            niedoida::io::Logger::NORMAL, "pass", int(ii));

                        unsigned i_begin = ii * m_no_occ_in_full_pass;
                        {
                            niedoida::io::Log::Section section("first half");
                            first_half(i_begin, m_no_occ_in_full_pass);
                        }
                        {
                            niedoida::io::Log::Section section("second half");
                            second_half(i_begin, m_no_occ_in_full_pass);
                        }
                    }
                }

                // FIXME: the final pass should be treated the same way the full
                // passes are
                if (m_comm.rank() == 0 && m_overflow) {

                    niedoida::io::Log::Section section("final pass");

                    unsigned i_begin = m_no_full_passes * m_no_occ_in_full_pass;
                    {
                        niedoida::io::Log::Section section("first half");
                        first_half(i_begin, m_overflow);
                    }
                    {
                        niedoida::io::Log::Section section("second half");
                        second_half(i_begin, m_overflow);
                    }
                }

                double partial_e2 = m_e2;

                boost::mpi::all_reduce(
                    m_comm, &partial_e2, 1, &m_e2, std::plus<double>());
            }
        }

        void RHF_MP2_IMP::determine_passes()
        {
            const unsigned long eff_pool = m_memory_pool - m_n * m_n -
                                           m_no_virt * m_n -
                                           m_no_virt * m_no_virt - m_no_shells;
            const unsigned minimum =
                (m_no_occ * m_n * m_n + m_n +
                 2 * m_max_shell_size * m_max_shell_size * m_n + m_no_occ +
                 m_n) *
                sizeof(double);
            m_no_occ_in_full_pass =
                std::min(m_no_occ, static_cast<unsigned>(eff_pool / minimum));
            if (m_no_occ_in_full_pass == 0) {
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::NORMAL,
                    "Resource issue: ",
                    "memory provided seems to be too small");
                abort();
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

        void RHF_MP2_IMP::alloc_mem()
        {
            m_requests.reserve(m_max_no_requests);

            const std::size_t max_shell_size2 =
                m_max_shell_size * m_max_shell_size;
            m_buf.resize(boost::extents[m_max_no_requests * max_shell_size2 *
                                        max_shell_size2]);
            try {
                m_T_2.resize(
                    boost::extents[m_n][m_n][m_no_occ][m_no_occ_in_full_pass]);
            } catch (std::bad_alloc) {
                throw std::runtime_error(
                    "Not enough memory to make integral transformation.");
            }
        }

        bool RHF_MP2_IMP::fill_int_buff(
            unsigned P, unsigned Q, unsigned R, unsigned S1, unsigned& S2)
        {
            if (S1 >= m_no_shells)
                return false;
            m_requests.clear();
            unsigned r = 0, S = S1;
            double* buf_ptr = m_buf.data();
            do {
                const niedoida::core::ShellQuartetIndex sqi = {{P, Q, R, S}};
                if (m_schwartz.max_integral(sqi) *
                        std::max(m_C_sprs(Q), m_C_sprs(S)) >
                    m_int_tresh) {
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

        void RHF_MP2_IMP::first_half(unsigned i_begin, unsigned i_scope)
        {
            m_Ci_occ.resize(m_n, i_scope);
            for (unsigned s = 0; s < m_n; ++s)
                for (unsigned i = 0; i < i_scope; ++i)
                    m_Ci_occ(s, i) = m_C_occ(s, i + i_begin);

            std::memset(&m_C_sprs(0), 0, m_no_shells * sizeof(double));

            for (unsigned P = 0; P < m_no_shells; ++P) {
                unsigned p0 = m_first_contraction_in_shell[P];
                unsigned p1 = m_shell_sizes[P] + p0;
                for (unsigned p = p0; p < p1; ++p)
                    for (unsigned i = 0; i < i_scope; ++i)
                        if (std::abs(m_Ci_occ(p, i)) > m_C_sprs(P))
                            m_C_sprs(P) = std::abs(m_Ci_occ(p, i));
            }

            m_T_1.resize(boost::extents[m_max_shell_size][m_max_shell_size][m_n]
                                       [i_scope]);
            m_T_1a.resize(boost::extents[m_max_shell_size][m_max_shell_size]
                                        [m_n][i_scope]);
            m_TT_2.resize(m_no_occ, i_scope);
            m_TT_1.resize(m_n, i_scope);

            std::memset(m_T_2.data(), 0, m_T_2.num_elements() * sizeof(double));

            for (unsigned P = 0; P < m_no_shells; ++P)
                for (unsigned R = 0; R <= P; ++R) {
                    std::memset(
                        m_T_1.data(), 0, m_T_1.num_elements() * sizeof(double));
                    std::memset(m_T_1a.data(),
                                0,
                                m_T_1a.num_elements() * sizeof(double));
                    unsigned size_P = m_shell_sizes[P];
                    unsigned size_R = m_shell_sizes[R];
                    unsigned p0 = m_first_contraction_in_shell[P];
                    unsigned r0 = m_first_contraction_in_shell[R];
                    for (unsigned Q = 0; Q < m_no_shells; ++Q) {
                        unsigned S1 = 0, S2;
                        while (fill_int_buff(P, Q, R, S1, S2)) {
                            double* result = m_buf.data();
                            for (unsigned a = 0; a < m_requests.size(); ++a) {
                                unsigned S = m_requests[a].shells[3];
                                unsigned size_Q = m_shell_sizes[Q];
                                unsigned size_S = m_shell_sizes[S];
                                unsigned q0 = m_first_contraction_in_shell[Q];
                                unsigned s0 = m_first_contraction_in_shell[S];
                                for (unsigned p = 0; p < size_P; ++p)
                                    for (unsigned q = q0; q < q0 + size_Q; ++q)
                                        for (unsigned r = 0; r < size_R; ++r) {
                                            double* ptr_T1 = &m_T_1[p][r][q][0];
                                            double* ptr_T1a =
                                                &m_T_1a[r][p][s0][0];
                                            for (unsigned s = s0;
                                                 s < s0 + size_S;
                                                 ++s) {
                                                const double g = *result++;
                                                for (unsigned i = 0;
                                                     i < i_scope;
                                                     ++i) {
                                                    *(ptr_T1 + i) +=
                                                        g * m_Ci_occ(s, i);
                                                    *ptr_T1a++ +=
                                                        g * m_Ci_occ(q, i);
                                                }
                                            }
                                        }
                            }
                            S1 = S2;
                        }
                    }
                    for (unsigned p = 0; p < size_P; ++p)
                        for (unsigned r = 0; r < size_R; ++r) {
                            const unsigned pp = p + p0;
                            const unsigned rr = r + r0;

                            for (unsigned j = 0; j < m_n; ++j)
                                for (unsigned i = 0; i < i_scope; ++i)
                                    m_TT_1(j, i) = m_T_1[p][r][j][i];

                            m_TT_2 = m_C_T_occ * m_TT_1;

                            for (unsigned j = 0; j < m_no_occ; ++j)
                                for (unsigned i = 0; i < i_scope; ++i)
                                    m_T_2[pp][rr][j][i] = m_TT_2(j, i);
                        }

                    for (unsigned r = 0; r < size_R; ++r)
                        for (unsigned p = 0; p < size_P; ++p) {
                            const unsigned pp = p + p0;
                            const unsigned rr = r + r0;

                            for (unsigned j = 0; j < m_n; ++j)
                                for (unsigned i = 0; i < i_scope; ++i)
                                    m_TT_1(j, i) = m_T_1a[r][p][j][i];

                            m_TT_2 = m_C_T_occ * m_TT_1;

                            for (unsigned j = 0; j < m_no_occ; ++j)
                                for (unsigned i = 0; i < i_scope; ++i)
                                    m_T_2[rr][pp][j][i] = m_TT_2(j, i);
                        }
                }
        }

        void RHF_MP2_IMP::second_half(unsigned i_begin, unsigned i_scope)
        {
            for (unsigned ii = 0; ii < i_scope; ++ii) {
                const unsigned i = i_begin + ii;
                for (unsigned j = 0; j <= i; ++j) {
                    for (unsigned beta = 0; beta < m_n; ++beta)
                        for (unsigned delta = 0; delta < m_n; ++delta)
                            m_TT_2a(beta, delta) = m_T_2[beta][delta][j][ii];

                    m_TT_3 = m_C_T_virt * m_TT_2a;
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
                                               4 * (BJAI - AJBI) *
                                                   (BJAI - AJBI))));
                            }
                        }
                }
            }
        }
    }
}
