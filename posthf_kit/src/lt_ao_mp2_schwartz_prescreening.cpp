/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "posthf_kit/lt_mp2.hpp"

#include "core_kit/shell_quartet_index_generator.hpp"
#include "misc_kit/dispatcher.hpp"
#include "posthf_kit/lt_mp2_utils.hpp"

namespace niedoida {

    namespace posthf {

        LT_AO_MP2_SchwartzPrescreening::LT_AO_MP2_SchwartzPrescreening(
            std::shared_ptr<const niedoida::core::System> system,
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine>
                two_e_int_eng,
            double eps) :
            LT_AO_MP2_2EIntegrals(system, std::move(two_e_int_eng)),
            m_eps(eps),
            m_schwartz(*system, *m_2ei),
            m_B(m_n, m_n),
            m_C(m_n, m_n)
        {
        }

        void LT_AO_MP2_SchwartzPrescreening::matrices_max_elements()
        {
            m_max_A_row.resize(m_n);
            m_max_B_col.resize(m_n);
            m_max_B_row.resize(m_n);
            m_max_C_col.resize(m_n);
            m_max_C_row.resize(m_n);
            m_max_D_col.resize(m_n);
            m_max_D_row.resize(m_n);

            m_max_A = 0;
            m_max_B = 0;
            m_max_C = 0;
            m_max_D = 0;

            for (std::size_t i = 0; i < m_n; ++i) {

                double max_row_A = m_A(i, 0);
                double max_row_B = m_B(i, 0);
                double max_col_B = m_B(0, i);
                double max_row_C = m_C(i, 0);
                double max_col_C = m_C(0, i);
                double max_row_D = m_D(i, 0);
                double max_col_D = m_D(0, i);

                for (std::size_t j = 0; j < m_n; ++j) {
                    if (max_row_A < m_A(i, j))
                        max_row_A = m_A(i, j);

                    if (max_row_B < m_B(i, j))
                        max_row_B = m_B(i, j);
                    if (max_col_B < m_B(j, i))
                        max_col_B = m_B(j, i);

                    if (max_row_C < m_C(i, j))
                        max_row_C = m_C(i, j);
                    if (max_col_C < m_C(j, i))
                        max_col_C = m_C(j, i);

                    if (max_row_D < m_D(i, j))
                        max_row_D = m_D(i, j);
                    if (max_col_D < m_D(j, i))
                        max_col_D = m_D(j, i);
                }

                m_max_A_row(i) = max_row_A;

                m_max_B_row(i) = max_row_B;
                m_max_B_col(i) = max_col_B;

                m_max_C_row(i) = max_row_C;
                m_max_C_col(i) = max_col_C;

                m_max_D_row(i) = max_row_D;
                m_max_D_col(i) = max_col_D;
            }

            for (std::size_t i = 0; i < m_n; ++i) {

                if (m_max_A < m_max_A_row(i))
                    m_max_A = m_max_A_row(i);

                if (m_max_B < m_max_B_row(i))
                    m_max_B = m_max_B_row(i);

                if (m_max_C < m_max_C_row(i))
                    m_max_C = m_max_C_row(i);

                if (m_max_D < m_max_D_row(i))
                    m_max_D = m_max_D_row(i);
            }
        }

        void LT_AO_MP2_SchwartzPrescreening::generate_A()
        {
            m_A.resize(m_n, m_n);

            for (unsigned i = 0; i < m_n; ++i)
                for (unsigned j = 0; j < m_n; ++j)
                    m_A(i, j) = m_schwartz.max_integral_orb2(i, j);

            m_A_sh.resize(m_no_shells, m_no_shells);

            for (std::size_t i = 0; i < m_no_shells; ++i) {
                const unsigned pf = m_first_contraction_in_shell[i];
                const unsigned ps = m_shell_sizes[i];
                for (std::size_t j = 0; j < m_no_shells; ++j) {
                    const unsigned qf = m_first_contraction_in_shell[j];
                    const unsigned qs = m_shell_sizes[j];

                    double max_0 = m_A(pf, qf);

                    for (std::size_t k = pf; k < pf + ps; ++k)
                        for (std::size_t l = qf; l < qf + qs; ++l) {
                            if (max_0 < m_A(k, l))
                                max_0 = m_A(k, l);
                        }
                    m_A_sh(i, j) = max_0;
                }
            }
        }

        void LT_AO_MP2_SchwartzPrescreening::generate_BCD(const arma::mat& X,
                                                          const arma::mat& Y)
        {
            // using Schwartz inequality
            double eps = 0; /* 1.0e-8 */

            arma::vec V(m_n);
            arma::vec W(m_n);
            arma::vec Z(m_n);

            for (std::size_t i = 0; i < m_n; ++i) {
                double max1 = 0;
                double max2 = 0;
                for (std::size_t j = 0; j < m_n; ++j) {

                    if (max1 < std::abs(X(j, i)))
                        max1 = std::abs(X(j, i));

                    if (max2 < std::abs(Y(j, i)))
                        max2 = std::abs(Y(j, i));
                }

                V(i) = max1;
                W(i) = max2;
                Z(i) = std::max(V(i), W(i));
            }

            arma::vec Z_sh(m_no_shells);

            for (std::size_t j = 0; j < m_no_shells; ++j) {
                double max = 0;
                const unsigned pf = m_first_contraction_in_shell[j];
                const unsigned ps = m_shell_sizes[j];
                for (std::size_t i = pf; i < ps + pf; ++i) {
                    if (max < Z(i))
                        max = Z(i);
                }
                Z_sh(j) = max;
            }

            m_requests.clear();

            m_B = arma::zeros<arma::mat>(m_n, m_n);
            m_C = arma::zeros<arma::mat>(m_n, m_n);

            const ABCBShellQuartetIndexGenerator i_begin(m_no_shells);
            const ABCBShellQuartetIndexGenerator i_end = i_begin.make_end();

            {
                std::unique_ptr<niedoida::misc::Dispatcher> d(
                    niedoida::misc::dispatcher(std::distance(i_begin, i_end)));
                niedoida::core::ShellQuartetIndexGeneratorCache<
                    ABCBShellQuartetIndexGenerator>
                    sqic(i_begin);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {

                    ABCBShellQuartetIndexGenerator i =
                        sqic.get(task_info->first);

                    unsigned long n = (*task_info).first;
                    do {
                        m_requests.clear();
                        double* buf_ptr = m_buf.data();
                        unsigned r = 0;

                        while (n < (*task_info).second && i != i_end) {

                            double max_zz = Z_sh((*i)[0]) * Z_sh((*i)[2]);
                            if ((*i)[0] == (*i)[2])
                                max_zz = std::max(
                                    max_zz, Z_sh((*i)[1]) * Z_sh((*i)[3]));

                            if (max_zz * m_schwartz.max_integral(*i) > eps) {
                                //                    counter++;
                                const niedoida::core::Request request = {
                                    *i, false, buf_ptr};
                                m_requests.push_back(request);

                                buf_ptr += m_shell_sizes[(*i)[0]] *
                                           m_shell_sizes[(*i)[1]] *
                                           m_shell_sizes[(*i)[2]] *
                                           m_shell_sizes[(*i)[3]];
                            }

                            ++r;
                            ++i;
                            ++n;

                            if (r >= m_max_no_requests)
                                break;
                        }

                        m_2ei->calc(m_requests);

                        for (std::size_t j = 0; j < m_requests.size(); ++j)
                            handle_request(m_requests[j], X, Y);

                    } while (n != (*task_info).second && i != i_end);

                    sqic.store(task_info->second, i);
                }
            }

            arma::mat partial = m_B;
            m_B = arma::zeros<arma::mat>(m_n, m_n);

            boost::mpi::all_reduce(m_comm,
                                   partial.memptr(),
                                   m_n * m_n,
                                   m_B.memptr(),
                                   std::plus<double>());

            partial = m_C;
            m_C = arma::zeros<arma::mat>(m_n, m_n);

            boost::mpi::all_reduce(m_comm,
                                   partial.memptr(),
                                   m_n * m_n,
                                   m_B.memptr(),
                                   std::plus<double>());

            for (std::size_t mi = 0; mi < m_n; ++mi)
                for (std::size_t ni = 0; ni < m_n; ++ni) {
                    m_B(mi, ni) = std::sqrt(std::abs(m_B(mi, ni)));
                    m_C(mi, ni) = std::sqrt(std::abs(m_C(mi, ni)));
                }

            m_D1 = arma::zeros<arma::mat>(m_n, m_n);
            m_D2 = arma::zeros<arma::mat>(m_n, m_n);
            m_D = arma::zeros<arma::mat>(m_n, m_n);

            for (std::size_t mi = 0; mi < m_n; ++mi) {
                for (std::size_t ni = 0; ni < m_n; ++ni) {
                    for (std::size_t sigma = 0; sigma < m_n; ++sigma) {
                        m_D1(mi, ni) += m_B(mi, sigma) * std::abs(Y(sigma, ni));
                        m_D2(mi, ni) += std::abs(X(mi, sigma)) * m_C(sigma, ni);
                    }
                    m_D(mi, ni) = std::min(m_D1(mi, ni), m_D2(mi, ni));
                }
            }

            m_A_sh.resize(m_no_shells, m_no_shells);
            m_B_sh.resize(m_no_shells, m_no_shells);
            m_C_sh.resize(m_no_shells, m_no_shells);
            m_D_sh.resize(m_no_shells, m_no_shells);

            for (std::size_t i = 0; i < m_no_shells; ++i) {
                const unsigned pf = m_first_contraction_in_shell[i];
                const unsigned ps = m_shell_sizes[i];
                for (std::size_t j = 0; j < m_no_shells; ++j) {
                    const unsigned qf = m_first_contraction_in_shell[j];
                    const unsigned qs = m_shell_sizes[j];

                    double max_0 = m_A(pf, qf);
                    double max_1 = m_B(pf, qf);
                    double max_2 = m_C(pf, qf);
                    double max_3 = m_D(pf, qf);
                    for (std::size_t k = pf; k < pf + ps; ++k)
                        for (std::size_t l = qf; l < qf + qs; ++l) {
                            if (max_0 < m_A(k, l))
                                max_0 = m_A(k, l);

                            if (max_1 < m_B(k, l))
                                max_1 = m_B(k, l);

                            if (max_2 < m_C(k, l))
                                max_2 = m_C(k, l);

                            if (max_3 < m_D(k, l))
                                max_3 = m_D(k, l);
                        }
                    m_A_sh(i, j) = max_0;
                    m_B_sh(i, j) = max_1;
                    m_C_sh(i, j) = max_2;
                    m_D_sh(i, j) = max_3;
                }
            }
        }

        void LT_AO_MP2_SchwartzPrescreening::handle_request(
            const niedoida::core::Request& r,
            const arma::mat& X,
            const arma::mat& Y)
        {
            double* result = r.results;

            const std::size_t P = r.shells[0];
            const std::size_t Q = r.shells[1];
            const std::size_t R = r.shells[2];
            const std::size_t S = r.shells[3];

            const unsigned ps = m_shell_sizes[P];
            const unsigned qs = m_shell_sizes[Q];
            const unsigned rs = m_shell_sizes[R];
            const unsigned ss = m_shell_sizes[S];

            const unsigned pf = m_first_contraction_in_shell[P];
            const unsigned qf = m_first_contraction_in_shell[Q];
            const unsigned rf = m_first_contraction_in_shell[R];
            const unsigned sf = m_first_contraction_in_shell[S];

            const unsigned cf = std::max(qf, sf);
            const unsigned ce = std::min(qf + qs, sf + ss);

            for (unsigned l = cf; l < ce; ++l) {
                const unsigned n = l;
                for (unsigned m = rf; m < rf + rs; ++m) {
                    const unsigned me = std::min(m + 1, pf + ps);
                    for (unsigned k = pf; k < me; ++k) {

                        const double g =
                            *(result +
                              ((((k - pf) * qs + (l - qf)) * rs + (m - rf)) *
                               ss) +
                              (n - sf));

                        if (k != m) {
                            for (std::size_t mi = 0; mi < m_n; ++mi) {
                                m_B(mi, l) += 2 * (X(mi, k) * X(mi, m) * g);
                                m_C(l, mi) += 2 * (Y(mi, k) * Y(mi, m) * g);
                            }
                        } else {
                            if (k != l) {
                                for (std::size_t mi = 0; mi < m_n; ++mi) {
                                    m_B(mi, l) += X(mi, k) * X(mi, k) * g;
                                    m_C(l, mi) += Y(mi, k) * Y(mi, k) * g;
                                    m_B(mi, k) += X(mi, l) * X(mi, l) * g;
                                    m_C(k, mi) += Y(mi, l) * Y(mi, l) * g;
                                }
                            } else {
                                for (std::size_t mi = 0; mi < m_n; ++mi) {
                                    m_B(mi, l) += X(mi, k) * X(mi, k) * g;
                                    m_C(l, mi) += Y(mi, k) * Y(mi, k) * g;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
