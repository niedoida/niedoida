/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/logger.hpp"
#include "misc/linear_algebra.hpp"
#include "posthf_kit/lt_cd_df_mp2.hpp"
#include "posthf_kit/lt_mp2_utils.hpp"
#include <boost/numeric/bindings/atlas/cblas3.hpp>
#include <boost/numeric/bindings/traits/ublas_matrix.hpp>
#include <boost/numeric/ublas/lu.hpp>
#include <boost/numeric/ublas/operation.hpp>

extern "C" {
#include <cblas.h>
}

namespace {
    template <class V> class _indirect_more {
    public:
        typedef typename V::size_type size_type;

        _indirect_more(const V& v) : _v(v) {}

        bool operator()(size_type lhs, size_type rhs) const
        {
            return std::abs(_v(lhs)) > std::abs(_v(rhs));
        }

    private:
        const V& _v;
    };

    template <class PM, class MV>
    void sort_matrix_row_by_row(ublas::matrix<MV>& values,
                                ublas::matrix<PM>& indices)
    {
        for (std::size_t i = 0; i < values.n_rows; ++i) {
            ublas::vector<MV> row = ublas::row(values, i);
            ublas::permutation_matrix<PM> pivot(row.size());
            std::stable_sort(pivot.begin(),
                             pivot.end(),
                             _indirect_more<ublas::vector<MV>>(row));
            for (std::size_t j = 0; j < pivot.size(); ++j) {
                indices(i, j) = pivot(j);
                values(i, j) = row(pivot(j));
            }
        }
    }
}

RHF_LT_CD_DF_MP2::RHF_LT_CD_DF_MP2(
    std::shared_ptr<const System> system,
    std::shared_ptr<const PostHFQuasiTwoElectronIntegralEngineFactory>
        quasi_two_e_ie_factory,
    const arma::mat& P,
    const arma::mat& F,
    unsigned long memory_pool,
    const Quadrature& quadrature,
    const double threshold,
    const double eps) :
    m_system(system),
    m_q_2_ie_factory(quasi_two_e_ie_factory),
    m_memory_pool(memory_pool),
    m_q_2_ie(m_q_2_ie_factory->make(system)),
    m_bs_info(system->basis_set),
    m_n(m_bs_info.m_no_contractions),
    m_int_tresh(threshold),
    m_eps(eps),
    m_schwartz(*system->basis_set.schwartz_estimator),
    m_sspg(m_bs_info.m_no_shells, m_schwartz, m_int_tresh),
    m_posthf_aux_bs_info(*system->posthf_aux_basis_set),
    m_n_posthf_aux(m_posthf_aux_bs_info.m_no_contractions),
    m_n_posthf_aux_shells(m_posthf_aux_bs_info.m_no_shells),
    m_cl(system),
    m_P(P),
    m_F(F)
{
    // 
    //    {
    //        Logger::Section lt_cd_df_mp2_section(Log::instance(),
    //        "lt_cd_df_mp2");
    //
    //        {
    //            Logger::Section J_and_W_section(Log::instance(), "J_and_W");
    //            m_e2 = 0;
    //            m_max_no_pair_requests =
    //            m_q_2_ie->preferred_no_pair_requests();
    //            m_pair_requests.reserve(m_max_no_pair_requests);
    //            m_buf_pair.resize(
    //                boost::extents
    //                [m_max_no_pair_requests]
    //                [m_posthf_aux_bs_info.m_max_shell_size *
    //                m_posthf_aux_bs_info.m_max_shell_size]);
    //
    //            m_J.resize(m_n_posthf_aux);
    //
    //            calc_J();
    //
    //            m_max_J_shells =
    //                arma::zeros<arma::vec>(m_posthf_aux_bs_info.m_no_shells);
    //
    //            set_max_J_shells();
    //
    //            calc_W();
    //
    //            m_max_W_shells =
    //                arma::zeros<arma::vec>(m_posthf_aux_bs_info.m_no_shells);
    //
    //            m_max_W = arma::zeros<arma::vec>(m_n_posthf_aux);
    //
    //            set_max_W_shells();
    //        }
    //        {
    //            Logger::Section cholesky_section(Log::instance(), "cholesky
    //            decomposition"); calc_L();
    //        }
    //
    //        std::vector<std::pair<unsigned, unsigned> > pairs;
    //
    //        {
    //            Logger::Section B_section(Log::instance(), "B construction");
    //
    //            unsigned long B_size = 0;
    //            const std::vector<std::pair<unsigned, unsigned> >& sp =
    //            *m_sspg.shell_pairs(); m_B_offset.resize(sp.size());
    //            for(std::size_t i = 0; i < sp.size(); ++i) {
    //                m_B_offset[i] = B_size;
    //                unsigned P = sp[i].first;
    //                unsigned Q = sp[i].second;
    //                unsigned P_size = m_bs_info.m_shell_sizes[P];
    //                unsigned Q_size = m_bs_info.m_shell_sizes[Q];
    //                if(P != Q)
    //                    B_size += P_size * Q_size;
    //                else
    //                    B_size += P_size * (P_size + 1) / 2;
    //            }
    //
    //            for(std::size_t i = 0; i < sp.size(); ++i) {
    //                const unsigned P = sp[i].first;
    //                const unsigned Q = sp[i].second;
    //                const unsigned P_size = m_bs_info.m_shell_sizes[P];
    //                const unsigned Q_size = m_bs_info.m_shell_sizes[Q];
    //                const unsigned P_first =
    //                m_bs_info.m_first_contraction_in_shell[P]; const unsigned
    //                Q_first = m_bs_info.m_first_contraction_in_shell[Q];
    //                for(unsigned i = P_first; i < P_first + P_size; ++i)
    //                    for(unsigned j = std::max(Q_first, i); j < Q_first +
    //                    Q_size; ++j)
    //                        pairs.push_back(std::make_pair(i, j));
    //            }
    //
    //            arma::mat I3 = arma::zeros<arma::mat> (m_n_posthf_aux,
    //            B_size);
    //
    //            m_B = arma::zeros<arma::mat>(B_size, m_n_posthf_aux);
    //
    //            m_max_no_ACD_requests = sp.size();
    //            m_ACD_requests.reserve(m_max_no_ACD_requests);
    //
    //            m_buf_ACD.resize(
    //                boost::extents
    //                [m_max_no_ACD_requests]
    //                [m_bs_info.m_max_shell_size * m_bs_info.m_max_shell_size *
    //                m_posthf_aux_bs_info.m_max_shell_size]);
    //
    //            std::vector<unsigned long> request_offset;
    //
    //            for(unsigned A = 0; A < m_posthf_aux_bs_info.m_no_shells; ++A)
    //            {
    //                m_ACD_requests.clear();
    //                request_offset.clear();
    //                unsigned long r = 0;
    //                for(std::size_t i = 0; i < sp.size(); ++i) {
    //                    unsigned C = sp[i].first;
    //                    unsigned D = sp[i].second;
    //
    //                    const ShellQuartetIndex sqi = {{C, D, C, D}};
    //
    //                    const double max_integral =
    //                        sqrt(m_schwartz.max_integral(sqi) *
    //                        m_max_J_shells(A));
    //
    //                    if(max_integral * m_max_W_shells(A) > m_int_tresh) {
    //                        const ShellACDIndex acd = {{A, C, D}};
    //                        const QuasiTwoElectronIntegralEngine::ACDRequest
    //                        request =
    //                            {acd , false, &m_buf_ACD[r][0]};
    //                        m_ACD_requests.push_back(request);
    //                        request_offset.push_back(m_B_offset[i]);
    //                        r += 1;
    //                    }
    //                }
    //
    //                m_q_2_ie->calc_ACD(m_ACD_requests);
    //
    //                for (unsigned r = 0; r < m_ACD_requests.size(); ++r) {
    //
    //                    const QuasiTwoElectronIntegralEngine::ACDRequest&
    //                        request =  m_ACD_requests[r];
    //
    //                    const unsigned s1 = request.shells[0];
    //                    const unsigned s2 = request.shells[1];
    //                    const unsigned s3 = request.shells[2];
    //
    //                    const unsigned b1 =
    //                    m_posthf_aux_bs_info.m_first_contraction_in_shell[s1];
    //                    const unsigned b2 =
    //                    m_bs_info.m_first_contraction_in_shell[s2]; const
    //                    unsigned b3 =
    //                    m_bs_info.m_first_contraction_in_shell[s3];
    //
    //                    const unsigned n1 =
    //                    m_posthf_aux_bs_info.m_shell_sizes[s1]; const unsigned
    //                    n2 = m_bs_info.m_shell_sizes[s2]; const unsigned n3 =
    //                    m_bs_info.m_shell_sizes[s3];
    //
    //                    double* results = request.results;
    //                    for(unsigned i = b1; i < b1 + n1; ++i) {
    //                        unsigned long offset = request_offset[r];
    //                        for(unsigned j = b2; j < b2 + n2; ++j)
    //                            for(unsigned k = std::max(j, b3); k < b3 + n3;
    //                            ++k, ++offset) {
    //                                const double result= *(request.results +
    //                                                        (((i - b1) * n2 +
    //                                                          (j - b2)) * n3 +
    //                                                         k - b3));
    //                                if(std::abs(result) * m_max_W(i) >
    //                                m_int_tresh)
    //                                    cblas_daxpy(m_W.n_cols, result,
    //                                    &m_W(i, 0),
    //                                                1, &m_B(offset, 0), 1);
    //                            }
    //                    }
    //                }
    //            }
    //
    //            Log::instance().write("B_size", double(B_size));
    //            Log::instance().write("pairs_size", double(pairs.size()));
    ///*
    //            cblas_dgemm(CblasRowMajor,
    //                        CblasTrans,
    //                        CblasNoTrans, I3.n_cols, m_W.n_cols,
    //                        I3.n_rows, 1.0, &I3(0, 0),
    //                        I3.n_cols, &m_W(0, 0), m_W.n_cols,
    //                        0.0, &m_B(0, 0), m_B.n_cols);
    //*/
    //            m_B_max.resize(B_size);
    //
    //            for(std::size_t i = 0; i < B_size; ++i) {
    //                double max = 0;
    //                for(std::size_t j = 0; j < m_n_posthf_aux; ++j)
    //                    if(std::abs(m_B(i, j)) > max)
    //                        max = std::abs(m_B(i, j));
    //                m_B_max(i) = max;
    //            }
    //        }
    //
    ///*testing prescreening */
    //        arma::mat prscr(m_n, m_n);
    //        for(std::size_t i = 0; i < m_n; ++i)
    //            for(std::size_t j = 0; j < m_n; ++j)
    //                prscr(i, j) = m_schwartz.max_integral_orb2(i, j);
    ///*                      */
    //
    //        {
    //            const double meps = m_eps;
    //            Logger::Section lt_mp2_section(Log::instance(), "quadrature");
    //            for(unsigned iii = 0; iii < quadrature.size(); iii++) {
    //                Logger::Section section(Log::instance(), "lt-cd-df-mp2
    //                iteration");
    //
    //                double t = quadrature[iii].first;
    //                double w = quadrature[iii].second;
    //
    //                Log::instance().write("t", t);
    //                Log::instance().write("w", w);
    //
    //                m_eps = meps / w;
    //
    //                arma::mat L_d (m_n, m_no_occ);
    //                arma::mat L_u (m_n, m_no_virt);
    //
    //                {
    //                    Logger::Section section(Log::instance(), "creating
    //                    L_u_d");
    //
    //                    for(std::size_t i = 0; i < m_n; ++i)
    //                        for(std::size_t j = 0; j < m_no_occ; ++j)
    //                            L_d(i, j) = m_L(i, j);
    //
    //                    for(std::size_t i = 0; i < m_n; ++i)
    //                        for(std::size_t j = 0; j < m_no_virt; ++j)
    //                            L_u(i, j) = m_L(i, j + m_no_occ);
    //
    //                    arma::mat LTF(L_d.n_cols, m_F.n_rows);
    //                    boost::numeric::bindings::atlas::gemm(CblasTrans,CblasNoTrans,
    //                    1.0, L_d, m_F, 0.0, LTF); arma::mat LTFL(LTF.n_rows,
    //                    L_d.n_cols);
    //                    boost::numeric::bindings::atlas::gemm(LTF, L_d, LTFL);
    //                    arma::mat expd = exp(0.5 * t * LTFL);
    //                    arma::mat L = L_d;
    //                    boost::numeric::bindings::atlas::gemm(L, expd, L_d);
    //
    //                    LTF.resize(L_u.n_cols, m_F.n_rows);
    //                    boost::numeric::bindings::atlas::gemm(CblasTrans,CblasNoTrans,
    //                    1.0, L_u, m_F, 0.0, LTF); LTFL.resize(LTF.n_rows,
    //                    L_u.n_cols);
    //                    boost::numeric::bindings::atlas::gemm(LTF, L_u, LTFL);
    //                    expd = exp(-0.5 * t * LTFL);
    //                    L = L_u;
    //                    boost::numeric::bindings::atlas::gemm(L, expd, L_u);
    //                }
    //
    //                arma::vec L_d_max(m_n);
    //                arma::vec L_u_max(m_n);
    //
    //                for(std::size_t i = 0; i < m_n; ++i) {
    //                    double max = 0;
    //                    for(std::size_t j = 0; j < m_no_occ; ++j)
    //                        if(std::abs(L_d(i, j)) > max)
    //                            max = std::abs(L_d(i, j));
    //                    L_d_max(i) = max;
    //                }
    //
    //                for(std::size_t i = 0; i < m_n; ++i) {
    //                    double max = 0;
    //                    for(std::size_t j = 0; j < m_no_virt; ++j)
    //                        if(std::abs(L_u(i, j)) > max)
    //                            max = std::abs(L_u(i, j));
    //                    L_u_max(i) = max;
    //                }
    //
    //                std::vector<std::pair<unsigned, unsigned> > sg_pairs;
    //                std::vector<unsigned long> sg_pairs_index;
    //                ublas::symmetric_matrix<long int> mu_nu_indices(m_n, m_n);
    //                for(unsigned i = 0; i < m_n; ++i)
    //                    for(unsigned j = 0; j < m_n; ++j)
    //                        mu_nu_indices(i, j) = -1;
    //
    //                for(unsigned long i = 0; i < m_B_max.size(); ++i) {
    //                    const unsigned mu = pairs[i].first;
    //                    const unsigned nu = pairs[i].second;
    //                    if(std::max(m_B_max(i) * L_d_max(mu) * L_u_max(nu),
    //                                m_B_max(i) * L_d_max(nu) * L_u_max(mu)) >=
    //                                m_eps) {
    //                        sg_pairs.push_back(std::make_pair(mu, nu));
    //                        sg_pairs_index.push_back(i);
    //                        mu_nu_indices(mu, nu) = i;
    //                    }
    //                }
    //
    //                double B_max_max = 0;
    //                double L_d_max_max = 0;
    //                double L_u_max_max = 0;
    //                for(unsigned long i = 0; i < m_B_max.size(); ++i)
    //                    if(m_B_max(i) > B_max_max)
    //                        B_max_max = m_B_max(i);
    //                for(unsigned long i = 0; i < L_d_max.size(); ++i)
    //                    if(L_d_max(i) > L_d_max_max)
    //                        L_d_max_max = L_d_max(i);
    //                for(unsigned long i = 0; i < L_d_max.size(); ++i)
    //                    if(L_u_max(i) > L_u_max_max)
    //                        L_u_max_max = L_u_max(i);
    //
    //                Log::instance().write("sg_pairs_size",
    //                double(sg_pairs.size()));
    //
    //                /* sorting L_d and L_u rows */
    //
    //                arma::mat L_d_T = trans(L_d);
    //                arma::mat L_u_T = trans(L_u);
    //
    //                /*testing prescreening */
    //                arma::mat abs_L_d_T(L_d_T.n_rows, L_d_T.n_cols);
    //                arma::mat abs_L_u(L_u.n_rows, L_u.n_cols);
    //                for(std::size_t i = 0; i < abs_L_d_T.n_rows; ++i)
    //                    for(std::size_t j = 0; j < abs_L_d_T.n_cols; ++j)
    //                        abs_L_d_T(i, j) = std::abs(L_d_T(i, j));
    //                for(std::size_t i = 0; i < abs_L_u.n_rows; ++i)
    //                    for(std::size_t j = 0; j < abs_L_u.n_cols; ++j)
    //                        abs_L_u(i, j) = std::abs(L_u(i, j));
    //
    //                arma::mat prscr_d = abs_L_d_T * prscr;
    //                arma::mat prscr_d_u = prscr_d * abs_L_u;
    //
    //                arma::vec PR = arma::zeros<arma::vec>(prscr_d_u.n_rows);
    //                arma::vec PRT = arma::zeros<arma::vec>(prscr_d_u.n_cols);
    //                double PR_max = 0;
    //                for(std::size_t i = 0; i < prscr_d_u.n_rows; ++i)
    //                    for(std::size_t a = 0; a < prscr_d_u.n_cols; ++a) {
    //                        const double val = prscr_d_u(i, a);
    //                        if(val > PR(i))
    //                            PR(i) = val;
    //                        if(val > PRT(a))
    //                            PRT(a) = val;
    //                        if(val > PR_max)
    //                            PR_max = val;
    //                    }
    //               /*                      */
    //
    //                ublas::matrix<unsigned> L_d_ind(L_d.n_rows, L_d.n_cols);
    //                ublas::matrix<unsigned> L_u_ind(L_u.n_rows, L_u.n_cols);
    //
    //                sort_matrix_row_by_row(L_d, L_d_ind);
    //                sort_matrix_row_by_row(L_u, L_u_ind);
    //
    //                ublas::matrix<unsigned> L_d_T_ind(L_d_T.n_rows,
    //                L_d_T.n_cols); ublas::matrix<unsigned>
    //                L_u_T_ind(L_u_T.n_rows, L_u_T.n_cols);
    //
    //                sort_matrix_row_by_row(L_d_T, L_d_T_ind);
    //                sort_matrix_row_by_row(L_u_T, L_u_T_ind);
    //
    //                long int count = 0;
    //                ublas::matrix<long int> ia_indices(m_no_occ, m_no_virt);
    //                std::vector<std::pair<unsigned, unsigned> > ia_pairs;
    //                for(unsigned i = 0; i < m_no_occ; ++i)
    //                    for(unsigned j = 0; j < m_no_virt; ++j)
    //                        ia_indices(i, j) = -1;
    //
    //                for(unsigned long i = 0; i < sg_pairs.size(); ++i) {
    //                    const double B_max = m_B_max(sg_pairs_index[i]);
    //                    const unsigned mu = sg_pairs[i].first;
    //                    const unsigned nu = sg_pairs[i].second;
    //                    for(unsigned j = 0; j < m_no_occ; ++j) {
    //                        if(B_max * std::abs(L_d(mu, j)) < m_eps)
    //                            break;
    //                        for(unsigned k = 0; k < m_no_virt; ++k) {
    //                            if(B_max * std::abs(L_d(mu, j)) *
    //                            std::abs(L_u(nu, k)) < m_eps) {
    //                                break;
    //                            } else {
    //                                const unsigned ii = L_d_ind(mu, j);
    //                                const unsigned aa = L_u_ind(nu, k);
    //                                if(ia_indices(ii, aa) == -1 &&
    //                                   (prscr_d_u(ii, aa) * prscr_d_u(ii, aa)
    //                                   * PR_max * PR_max > m_eps ||
    //                                    prscr_d_u(ii, aa) * PR_max * PR(ii) *
    //                                    PRT(aa) > m_eps)) { ia_indices(ii, aa)
    //                                    = count++;
    //                                    ia_pairs.push_back(std::make_pair(ii,
    //                                    aa));
    //                                }
    //                            }
    //                        }
    //                    }
    //
    //                    for(unsigned j = 0; j < m_no_occ; ++j) {
    //                        if(B_max * std::abs(L_d(nu, j)) < m_eps)
    //                            break;
    //                        for(unsigned k = 0; k < m_no_virt; ++k) {
    //                            if(B_max * std::abs(L_d(nu, j)) *
    //                            std::abs(L_u(mu, k)) < m_eps) {
    //                                break;
    //                            } else {
    //                                const unsigned ii = L_d_ind(nu, j);
    //                                const unsigned aa = L_u_ind(mu, k);
    //                                if(ia_indices(ii, aa) == -1 &&
    //                                   (prscr_d_u(ii, aa) * prscr_d_u(ii, aa)
    //                                   * PR_max * PR_max > m_eps ||
    //                                    prscr_d_u(ii, aa) * PR_max * PR(ii) *
    //                                    PRT(aa) > m_eps)) { ia_indices(ii, aa)
    //                                    = count++;
    //                                    ia_pairs.push_back(std::make_pair(ii,
    //                                    aa));
    //                                }
    //                            }
    //                        }
    //                    }
    //
    //                }
    //
    //                Log::instance().write("ia pairs", (double) count);
    //
    //                arma::mat Btr = arma::zeros<arma::mat> (count,
    //                m_n_posthf_aux);
    //                {
    //                    Logger::Section
    //                    transformation_section(Log::instance(),
    //                    "transformation"); for(unsigned long ii = 0; ii <
    //                    ia_pairs.size(); ++ii) {
    //                        const unsigned i = ia_pairs[ii].first;
    //                        const unsigned a = ia_pairs[ii].second;
    //                        for(unsigned j = 0; j < m_n; ++j) {
    //                            if(std::abs(L_d_T(i, j)) * L_u_max_max *
    //                            B_max_max < m_eps)
    //                                break;
    //                            for(unsigned k = 0; k < m_n; ++k) {
    //                                if(std::abs(L_d_T(i, j)) *
    //                                std::abs(L_u_T(a, k)) * B_max_max < m_eps)
    //                                    break;
    //                                unsigned mu = L_d_T_ind(i, j);
    //                                unsigned nu = L_u_T_ind(a, k);
    //                                const long int mu_nu_index =
    //                                mu_nu_indices(mu, nu); if(mu_nu_index >
    //                                -1) {
    //                                    const double B_max =
    //                                    m_B_max(mu_nu_index);
    //                                    if(std::abs(L_d_T(i, j)) *
    //                                    std::abs(L_u_T(a, k)) * B_max > m_eps)
    //                                    {
    //                                        const double factor = L_d_T(i, j)
    //                                        * L_u_T(a, k); const unsigned long
    //                                        ia_index = ia_indices(i, a);
    //                                        cblas_daxpy(m_n_posthf_aux,
    //                                        factor, &m_B(mu_nu_index, 0),
    //                                                    1, &Btr(ia_index, 0),
    //                                                    1);
    //                                    }
    //                                }
    //                            }
    //                        }
    //                    }
    //                }
    //
    //                unsigned long cc = 0;
    //                for(unsigned long i = 0; i < Btr.n_rows; ++i)
    //                    for(unsigned long j = 0; j < Btr.n_cols; ++j)
    //                        if(std::abs(Btr(i, j)) > m_eps)
    //                           cc++;
    //
    //                Log::instance().write("Btr density", double(cc) /
    //                double(Btr.n_rows * Btr.n_cols));
    //
    //                double partial_e_J = 0;
    //                double partial_e_K = 0;
    //
    //                arma::vec DG = arma::zeros<arma::vec>(ia_pairs.size());
    //
    //                {
    //                    Logger::Section DG_section(Log::instance(), "DG
    //                    calculation"); for(unsigned long i = 0; i <
    //                    ia_pairs.size(); ++i) {
    //                        for(unsigned long k = 0; k < m_n_posthf_aux; ++k)
    //                            DG(i) += Btr(i, k) * Btr(i, k);
    //                        DG(i) = std::sqrt(std::abs(DG(i)));
    //                    }
    //
    //                }
    //
    //                {
    //                    Logger::Section J_assembly_section(Log::instance(),
    //                    "J_assembly"); for(unsigned long i = 0; i < count;
    //                    ++i) {
    //                        for(unsigned long j = 0; j <= i; ++j) {
    //                            if(DG(i) * DG(i) * DG(j) * DG(j) < m_eps)
    //                                continue;
    //                            double Bij = cblas_ddot(m_n_posthf_aux,
    //                            &Btr(i, 0), 1, &Btr(j, 0), 1); partial_e_J +=
    //                            w * Bij * Bij; if(i != j)
    //                                partial_e_J += w * Bij * Bij;
    //                        }
    //                    }
    //                    Log::instance().write("partial_e_J", partial_e_J);
    //                }
    //
    //                {
    //                    Logger::Section K_assembly_section(Log::instance(),
    //                    "K_assembly"); for(unsigned long ii = 0; ii <
    //                    ia_pairs.size(); ++ii)
    //                        for(unsigned long jj = 0; jj <= ii; ++jj) {
    //                            const unsigned i = ia_pairs[ii].first;
    //                            const unsigned a = ia_pairs[ii].second;
    //                            const unsigned j = ia_pairs[jj].first;
    //                            const unsigned b = ia_pairs[jj].second;
    //                            const unsigned long ia_index = ia_indices(i,
    //                            a); const unsigned long jb_index =
    //                            ia_indices(j, b); if(ia_indices(i, b) > -1 &&
    //                            ia_indices(j, a) > - 1) {
    //                                const unsigned ib_index = ia_indices(i,
    //                                b); const unsigned ja_index =
    //                                ia_indices(j, a); if(DG(ia_index) *
    //                                DG(jb_index) * DG(ib_index) * DG(ja_index)
    //                                < m_eps)
    //                                    continue;
    //                                double iajb = cblas_ddot(m_n_posthf_aux,
    //                                &Btr(ia_index, 0), 1, &Btr(jb_index, 0),
    //                                1); double ibja =
    //                                cblas_ddot(m_n_posthf_aux, &Btr(ib_index,
    //                                0), 1, &Btr(ja_index, 0), 1); partial_e_K
    //                                += w * iajb * ibja; if(ii != jj)
    //                                    partial_e_K += w * iajb * ibja;
    //                            }
    //                        }
    //                    Log::instance().write("partial_e_K", partial_e_K);
    //
    //                }
    //                m_e2 += -2.0 * partial_e_J + partial_e_K;
    //                Log::instance().write("m_e2", m_e2);
    //            }
    //            m_eps = meps;
    //        }
    //    }
}

void RHF_LT_CD_DF_MP2::calc_J()
{
    const ShellPairIndexGenerator sp_begin(m_posthf_aux_bs_info.m_no_shells);
    const ShellPairIndexGenerator sp_end = sp_begin.make_end();
    ShellPairIndexGenerator sp(m_posthf_aux_bs_info.m_no_shells);

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
                const QuasiTwoElectronIntegralEngine::PairRequest request = {
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

            const QuasiTwoElectronIntegralEngine::PairRequest& req =
                m_pair_requests[r];

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
                    m_J(p, q) = *results++;
                }
        }
    }
}

void RHF_LT_CD_DF_MP2::set_max_J_shells()
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

void RHF_LT_CD_DF_MP2::set_max_W_shells()
{
    for (unsigned i = 0; i < m_posthf_aux_bs_info.m_no_shells; ++i) {
        double max1 = 0;
        const unsigned b1 =
            m_posthf_aux_bs_info.m_first_contraction_in_shell[i];
        const unsigned n1 = m_posthf_aux_bs_info.m_shell_sizes[i];
        for (unsigned k = b1; k < b1 + n1; ++k) {
            double max2 = 0;
            for (unsigned l = 0; l < m_n_posthf_aux; ++l)
                if (std::abs(m_W(k, l)) > max2)
                    max2 = std::abs(m_W(k, l));
            m_max_W(k) = max2;
            if (max2 > max1)
                max1 = max2;
        }
        m_max_W_shells(i) = max1;
    }
}

void RHF_LT_CD_DF_MP2::calc_W()
{

    const unsigned n = m_J.n_rows;

    m_W.resize(n, n);

    arma::mat J12(n, n);

    //    if(!sqrt(m_J, m_W, J12))
    m_W = inv(real(sqrtmat(m_J)));
}

void RHF_LT_CD_DF_MP2::calc_L()
{

    // 
    //    m_L = m_cl.localize_density_matrix(m_P, false);
    //    m_no_occ = m_cl.no_base();
    //    m_no_virt = m_cl.no_complement();
}
