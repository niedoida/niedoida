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

        RHF_MP2_MINMEM::RHF_MP2_MINMEM(
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
            m_max_C_virt = 0;
            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_no_virt; ++j)
                    if (std::abs(m_C_virt(i, j)) > m_max_C_virt)
                        m_max_C_virt = std::abs(m_C_virt(i, j));
            determine_passes();
            alloc_mem();
            m_I2_ij.resize(m_n, m_n);
            m_I3_ij.resize(m_no_virt, m_n);
            m_I4_ij.resize(m_no_virt, m_no_virt);
            m_e2 = 0;

            for (unsigned i = 0; i < m_no_occ; ++i)
                for (unsigned j = 0; j <= i; ++j)
                    m_ij_indices.push_back(std::make_pair(i, j));
            {
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

                        const unsigned ij_begin = ii * m_no_pairs_in_full_pass;
                        const unsigned ij_end = std::min(
                            ij_begin + m_no_pairs_in_full_pass, m_no_pairs);
                        {
                            niedoida::io::Log::instance().write(
                                niedoida::io::Logger::DEBUG,
                                "first pair",
                                int(ij_begin));
                            niedoida::io::Log::instance().write(
                                niedoida::io::Logger::DEBUG,
                                "last pair",
                                int(ij_end - 1));
                            trans(ij_begin, ij_end);
                        }
                    }
                }

                double partial_e2 = m_e2;

                boost::mpi::all_reduce(
                    m_comm, &partial_e2, 1, &m_e2, std::plus<double>());
            }
        }

        void RHF_MP2_MINMEM::trans(const unsigned ij_begin,
                                   const unsigned ij_end)
        {
            m_ij.clear();
            const unsigned ij_size = ij_end - ij_begin;

            // construct m_ij: vector of std::pair<unsigned, unsigned> elements
            for (unsigned ij = ij_begin; ij < ij_end; ++ij)
                m_ij.push_back(m_ij_indices[ij]);

            calc_P();
            calc_P_prs();

            // half-transform
            std::memset(m_I.data(), 0, m_I.num_elements() * sizeof(double));

            niedoida::core::ShellQuartetIndexGenerator sq_begin(m_no_shells);
            niedoida::core::ShellQuartetIndexGenerator sq_end =
                sq_begin.make_end();
            niedoida::core::ShellQuartetIndexGenerator sq_iterator = sq_begin;

            do {
                m_requests.clear();
                double* buf_ptr = m_buf.data();
                unsigned r = 0;
                while (r < m_max_no_requests && sq_iterator != sq_end) {

                    const double max_integral =
                        m_schwartz.max_integral(*sq_iterator);

                    const unsigned P = (*sq_iterator)[0];
                    const unsigned Q = (*sq_iterator)[1];
                    const unsigned R = (*sq_iterator)[2];
                    const unsigned S = (*sq_iterator)[3];

                    const double max_P = std::max(
                        std::max(std::max(m_P_prs(P, R), m_P_prs(P, S)),
                                 std::max(m_P_prs(Q, R), m_P_prs(Q, S))),
                        std::max(std::max(m_P_prs(R, P), m_P_prs(S, P)),
                                 std::max(m_P_prs(R, Q), m_P_prs(S, Q))));

                    const double max_element =
                        max_P * max_integral * m_max_C_virt * m_max_C_virt;

                    if (max_element > m_int_tresh) {
                        const niedoida::core::Request request = {
                            *sq_iterator, false, buf_ptr};

                        buf_ptr += m_shell_sizes[P] * m_shell_sizes[Q] *
                                   m_shell_sizes[R] * m_shell_sizes[S];
                        m_requests.push_back(request);
                        r++;
                    }
                    ++sq_iterator;
                }

                m_2ei->calc(m_requests);

                for (unsigned r = 0; r < m_requests.size(); ++r) {

                    const niedoida::core::Request& request = m_requests[r];

                    contract_integrals(request, ij_size);
                }
            } while (sq_iterator != sq_end);

            // prepare second half for ij
            for (unsigned ij = 0; ij < ij_size; ++ij) {
                const unsigned i = m_ij[ij].first;
                const unsigned j = m_ij[ij].second;

                for (unsigned alpha = 0; alpha < m_n; ++alpha)
                    for (unsigned beta = 0; beta < m_n; ++beta)
                        m_I2_ij(alpha, beta) = m_I[alpha][beta][ij];

                // second half for ij
                second_half_ij(i, j);
            }
        }

        void RHF_MP2_MINMEM::contract_integrals(
            const niedoida::core::Request& request, const unsigned ij_size)
        {
            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];
            const unsigned s4 = request.shells[3];

            const unsigned b1 = m_first_contraction_in_shell[s1];
            const unsigned b2 = m_first_contraction_in_shell[s2];
            const unsigned b3 = m_first_contraction_in_shell[s3];
            const unsigned b4 = m_first_contraction_in_shell[s4];

            const unsigned n1 = m_shell_sizes[s1];
            const unsigned n2 = m_shell_sizes[s2];
            const unsigned n3 = m_shell_sizes[s3];
            const unsigned n4 = m_shell_sizes[s4];

            const niedoida::core::ShellQuartetType type =
                niedoida::core::shell_quartet_type(request.shells[0],
                                                   request.shells[1],
                                                   request.shells[2],
                                                   request.shells[3]);

            switch (type) {
            case niedoida::core::SHELL_QUARTET_TYPE_ABCD: {
                double* results = request.results;
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k)
                            for (unsigned l = b4; l < b4 + n4; ++l) {
                                double g = *results++;

                                contract_integral(i, j, k, l, g, ij_size);
                                contract_integral(i, j, l, k, g, ij_size);
                                contract_integral(j, i, k, l, g, ij_size);
                                contract_integral(j, i, l, k, g, ij_size);
                                contract_integral(k, l, i, j, g, ij_size);
                                contract_integral(l, k, i, j, g, ij_size);
                                contract_integral(k, l, j, i, g, ij_size);
                                contract_integral(l, k, j, i, g, ij_size);
                            }
                break;
            }
            case niedoida::core::SHELL_QUARTET_TYPE_AACD: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = std::max(i, b2); j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k)
                            for (unsigned l = b4; l < b4 + n4; ++l) {
                                double g = *(request.results +
                                             ((((i - b1) * n2 + (j - b2)) * n3 +
                                               (k - b3)) *
                                              n4) +
                                             (l - b4));

                                if (i == j)
                                    g /= 2;

                                contract_integral(i, j, k, l, g, ij_size);
                                contract_integral(i, j, l, k, g, ij_size);
                                contract_integral(j, i, k, l, g, ij_size);
                                contract_integral(j, i, l, k, g, ij_size);
                                contract_integral(k, l, i, j, g, ij_size);
                                contract_integral(l, k, i, j, g, ij_size);
                                contract_integral(k, l, j, i, g, ij_size);
                                contract_integral(l, k, j, i, g, ij_size);
                            }
                break;
            }
            case niedoida::core::SHELL_QUARTET_TYPE_ABCC: {
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

                                if (k == l)
                                    g /= 2;

                                contract_integral(i, j, k, l, g, ij_size);
                                contract_integral(i, j, l, k, g, ij_size);
                                contract_integral(j, i, k, l, g, ij_size);
                                contract_integral(j, i, l, k, g, ij_size);
                                contract_integral(k, l, i, j, g, ij_size);
                                contract_integral(l, k, i, j, g, ij_size);
                                contract_integral(k, l, j, i, g, ij_size);
                                contract_integral(l, k, j, i, g, ij_size);
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

                                if (i == j)
                                    g /= 2;
                                if (k == l)
                                    g /= 2;
                                if (i == k && j == l)
                                    g /= 2;
                                contract_integral(i, j, k, l, g, ij_size);
                                contract_integral(i, j, l, k, g, ij_size);
                                contract_integral(j, i, k, l, g, ij_size);
                                contract_integral(j, i, l, k, g, ij_size);
                                contract_integral(k, l, i, j, g, ij_size);
                                contract_integral(l, k, i, j, g, ij_size);
                                contract_integral(k, l, j, i, g, ij_size);
                                contract_integral(l, k, j, i, g, ij_size);
                            }
                        }
                    }
                break;
            }
            }
        }

        void RHF_MP2_MINMEM::contract_integral(const unsigned alpha,
                                               const unsigned beta,
                                               const unsigned gamma,
                                               const unsigned delta,
                                               const double g,
                                               const unsigned ij_size)
        {
            if (m_P_pr(alpha, gamma) * std::abs(g) * m_max_C_virt *
                    m_max_C_virt <
                m_int_tresh)
                return;

            double* I = &m_I[beta][delta][0];
            double* P = &m_P[alpha][gamma][0];

            for (unsigned i = 0; i < ij_size; ++i)
                *(I + i) += g * *(P + i);
        }

        void RHF_MP2_MINMEM::calc_P()
        {
            const unsigned ij_size = m_ij.size();
            for (unsigned alpha = 0; alpha < m_n; ++alpha)
                for (unsigned beta = 0; beta < m_n; ++beta) {
                    double* ptr = &m_P[alpha][beta][0];
                    for (unsigned ij = 0; ij < ij_size; ++ij)
                        *ptr++ = m_C_occ(alpha, m_ij[ij].first) *
                                 m_C_occ(beta, m_ij[ij].second);
                }
        }

        void RHF_MP2_MINMEM::calc_P_prs()
        {
            const unsigned ij_size = m_ij.size();
            m_P_prs = arma::zeros<arma::mat>(m_no_shells, m_no_shells);
            m_P_pr = arma::zeros<arma::mat>(m_n, m_n);

            for (unsigned P = 0; P < m_no_shells; ++P)
                for (unsigned Q = 0; Q < m_no_shells; ++Q) {
                    unsigned p0 = m_first_contraction_in_shell[P];
                    unsigned p1 = m_shell_sizes[P] + p0;
                    unsigned q0 = m_first_contraction_in_shell[Q];
                    unsigned q1 = m_shell_sizes[Q] + q0;
                    for (unsigned p = p0; p < p1; ++p)
                        for (unsigned q = q0; q < q1; ++q) {
                            double* ptr = &m_P[p][q][0];
                            for (unsigned ij = 0; ij < ij_size; ++ij) {
                                double p_value = std::abs(*ptr++);
                                if (m_P_prs(P, Q) < p_value)
                                    m_P_prs(P, Q) = p_value;
                                if (m_P_pr(p, q) < p_value)
                                    m_P_pr(p, q) = p_value;
                            }
                        }
                }
        }

        void RHF_MP2_MINMEM::second_half_ij(const unsigned i, const unsigned j)
        {
            // m_I3_ij(m_no_virt, m_n) m_I4_ij(m_no_virt, m_no_virt)

            m_I3_ij = m_C_T_virt * m_I2_ij;
            m_I4_ij = m_I3_ij * m_C_virt;

            for (unsigned a = 0; a < m_no_virt; ++a)
                for (unsigned b = 0; b < (i == j ? a + 1 : m_no_virt); ++b) {
                    const double BJAI = m_I4_ij(a, b);
                    const double AJBI = m_I4_ij(b, a);
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
                             0.25 * (-energy_factor -
                                     sqrt(energy_factor * energy_factor +
                                          4 * (BJAI - AJBI) * (BJAI - AJBI))));
                    }
                }
        }

        void RHF_MP2_MINMEM::determine_passes()
        {
            m_no_pairs = m_no_occ * (m_no_occ + 1) / 2;
            const unsigned long eff_pool =
                m_memory_pool - m_no_virt * m_n - m_no_virt * m_no_virt;
            const unsigned minimum = (2 * m_n * m_n + 2) * sizeof(double);
            m_no_pairs_in_full_pass =
                std::min(m_no_pairs, static_cast<unsigned>(eff_pool / minimum));

            if (m_no_pairs_in_full_pass == 0) {
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::NORMAL,
                    "Error",
                    std::string("Memory provided seems to be too small"));
                abort();
            }

            const unsigned no_full_passes =
                m_no_pairs / m_no_pairs_in_full_pass;
            m_no_passes =
                (m_no_pairs % m_no_pairs_in_full_pass ? no_full_passes + 1
                                                      : no_full_passes);
            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL, "no_passes", int(m_no_passes));
            niedoida::io::Log::instance().write(niedoida::io::Logger::NORMAL,
                                                "no_ij_pairs_per_full_pass",
                                                int(m_no_pairs_in_full_pass));
        }

        void RHF_MP2_MINMEM::alloc_mem()
        {
            m_requests.reserve(m_max_no_requests);

            const std::size_t max_shell_size2 =
                m_max_shell_size * m_max_shell_size;
            m_buf.resize(boost::extents[m_max_no_requests * max_shell_size2 *
                                        max_shell_size2]);
            try {
                m_I.resize(boost::extents[m_n][m_n][m_no_pairs_in_full_pass]);
                m_P.resize(boost::extents[m_n][m_n][m_no_pairs_in_full_pass]);
            } catch (std::bad_alloc) {
                throw std::runtime_error(
                    "Not enough memory to make integral transformation.");
            }
        }
    }
}
