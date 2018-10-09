/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/logger.hpp"
#include "misc/linear_algebra.hpp"
#include "misc/math_consts.hpp"
#include "misc/pui.hpp"
#include "misc/threadpool.hpp"
#include "posthf_kit/lt_cd_df_poisson_mp2.hpp"
#include "posthf_kit/lt_mp2_utils.hpp"
#include <boost/numeric/bindings/atlas/cblas3.hpp>
#include <boost/numeric/bindings/traits/ublas_matrix.hpp>
#include <boost/numeric/ublas/lu.hpp>
#include <boost/numeric/ublas/operation.hpp>

extern "C" {
#include <cblas.h>
}

namespace {

    inline bool compare_pairs_more(const std::pair<std::size_t, double>& lhs,
                                   const std::pair<size_t, double>& rhs)
    {
        return (std::abs(lhs.second) > std::abs(rhs.second));
    }
}

RHF_LT_CD_DF_Poisson_MP2::RHF_LT_CD_DF_Poisson_MP2(
    std::shared_ptr<const System> system,
    std::shared_ptr<const PostHFQuasiTwoElectronIntegralEngineFactory>
        quasi_two_e_ie_factory,
    std::shared_ptr<const PoissonTwoElectronIntegralEngineFactory>
        poisson_two_e_ie_factory,
    const arma::mat& P,
    const arma::mat& F,
    unsigned long memory_pool,
    const Quadrature& quadrature,
    const double threshold,
    const double eps) :
    m_system(system),
    m_q_2_ie_factory(quasi_two_e_ie_factory),
    m_poisson_2_ie_factory(poisson_two_e_ie_factory),
    m_memory_pool(memory_pool),
    m_q_2_ie(m_q_2_ie_factory->make(system)),
    m_poisson_2_ie(m_poisson_2_ie_factory->make(system)),
    m_bs_info(system->basis_set),
    m_n(m_bs_info.m_no_contractions),
    m_int_tresh(threshold),
    m_eps(eps),
    m_schwartz(*system->basis_set.schwartz_estimator),
    m_sspg(m_bs_info.m_no_shells, m_schwartz, m_int_tresh),
    m_posthf_aux_bs_info(*system->posthf_aux_basis_set),
    m_n_posthf_aux(m_posthf_aux_bs_info.m_no_contractions),
    m_n_posthf_aux_shells(m_posthf_aux_bs_info.m_no_shells),
    m_poisson_bs_info(*system->poisson_basis_set),
    m_n_poisson(m_poisson_bs_info.m_no_contractions),
    m_n_poisson_shells(m_poisson_bs_info.m_no_shells),
    m_cl(system),
    m_P(P),
    m_F(F),
    m_max_J_shells(arma::zeros<arma::vec>(m_posthf_aux_bs_info.m_no_shells +
                                          m_poisson_bs_info.m_no_shells)),
    m_Js(m_n_posthf_aux + m_n_poisson, m_n_posthf_aux + m_n_poisson),
    m_Ws(m_n_posthf_aux + m_n_poisson, m_n_posthf_aux + m_n_poisson),
    m_Bs(1, 1),
    m_B_Ws(1, 1),
    m_B_W_diags(1, 1),
    m_L_ds(1, 1),
    m_L_us(1, 1),
    m_LLs(1, 1),
    m_LL_diags(1, 1),
    m_Btrs(1, 1)
{
    {
        Logger::Section lt_cd_df_mp2_section(Log::instance(), "lt_cd_df_mp2");

        {
            Logger::Section J_section(Log::instance(), "J");
            m_e2 = 0;
            m_max_no_pair_requests = m_q_2_ie->preferred_no_pair_requests();
            m_pair_requests.reserve(m_max_no_pair_requests);
            m_buf_pair.resize(
                boost::extents[m_max_no_pair_requests]
                              [m_posthf_aux_bs_info.m_max_shell_size *
                               m_posthf_aux_bs_info.m_max_shell_size]);

            m_max_no_pair_poisson_requests =
                m_poisson_2_ie->preferred_no_pair_requests();
            m_pair_poisson_requests.reserve(m_max_no_pair_poisson_requests);
            m_buf_pair_poisson.resize(
                boost::extents[m_max_no_pair_poisson_requests][std::max(
                    m_poisson_bs_info.m_max_shell_size *
                        m_poisson_bs_info.m_max_shell_size,
                    m_poisson_bs_info.m_max_shell_size *
                        m_posthf_aux_bs_info.m_max_shell_size)]);

            calc_J();

            m_aux_factors = m_Js.diagonal();
            for (std::size_t i = 0; i < m_aux_factors.size(); ++i)
                m_aux_factors(i) = 1 / sqrt(m_aux_factors(i));

            m_Js.normalize(m_aux_factors, m_aux_factors);

            m_Js.clean(1e-10);
            Log::instance().write("m_Js element_fill_ratio",
                                  m_Js.element_fill_ratio());
            set_max_J_shells();
        }

        {
            Logger::Section W_section(Log::instance(), "W");
            calc_W();
        }

        {
            Logger::Section cholesky_section(Log::instance(),
                                             "cholesky decomposition");
            calc_L();
        }

        {
            Logger::Section B_section(Log::instance(), "B construction");
            calc_B();
        }

        {
            Logger::Section W_transformation_section(Log::instance(),
                                                     "W transformation");
            m_B_Ws.clear_and_resize(m_Bs.no_rows(), m_Ws.no_cols());
            parallel_prod(1.0, m_Bs, m_Ws, m_B_Ws, 1e-10);
            m_Bs.clear_and_resize(1, 1);
            m_Ws.clear_and_resize(1, 1);
            m_B_Ws.clean(1e-10);
            Log::instance().write("m_B_Ws fill_ratio", m_B_Ws.fill_ratio());
            Log::instance().write("m_B_Ws element_fill_ratio",
                                  m_B_Ws.element_fill_ratio());
            m_B_W_max = m_B_Ws.row_amax();
        }

        {
            Logger::Section B_W_view_section(Log::instance(), "B_W view");
            std::vector<std::size_t> indices(m_n);
            for (std::size_t i = 0; i < indices.size(); ++i)
                indices[i] = m_B_Ws.no_rows();

            for (std::size_t i = 0; i < m_permuted_pairs.size(); ++i)
                if (m_permuted_pairs[i].first == m_permuted_pairs[i].second) {
                    const std::size_t p = m_permuted_pairs[i].first;
                    indices[p] = i;
                }
            row_view(m_B_Ws, m_B_W_diags, indices);
        }

        {
            Logger::Section lt_mp2_section(Log::instance(), "quadrature");
            for (unsigned iii = 0; iii < quadrature.size(); iii++) {
                Logger::Section section(Log::instance(),
                                        "lt-cd-df-mp2 iteration");

                double t = quadrature[iii].first;
                double w = quadrature[iii].second;

                Log::instance().write("t", t);
                Log::instance().write("w", w);

                const double meps = m_eps / w;

                m_L_ds.clear_and_resize(m_n, m_no_occ);
                m_L_us.clear_and_resize(m_n, m_no_virt);
                {
                    Logger::Section L_u_L_d_section(Log::instance(),
                                                    "L_u and L_d");

                    for (std::size_t i = 0; i < m_n; ++i)
                        for (std::size_t j = 0; j < m_no_occ; ++j) {
                            const double value = m_L(i, j);
                            if (std::abs(value) > 1e-10)
                                m_L_ds.get_element(i, j) = value;
                        }

                    for (std::size_t i = 0; i < m_n; ++i)
                        for (std::size_t j = 0; j < m_no_virt; ++j) {
                            const double value = m_L(i, j + m_no_occ);
                            if (std::abs(value) > 1e-10)
                                m_L_us.get_element(i, j) = value;
                        }

                    BlockedSparseMatrix<double, MP2_BS> L_d_Ts = m_L_ds;
                    BlockedSparseMatrix<double, MP2_BS> L_u_Ts = m_L_us;
                    L_d_Ts.transpose();
                    L_u_Ts.transpose();

                    std::vector<std::size_t> rank_row = L_d_Ts.get_row_ranks();
                    std::vector<std::size_t> rank_col(L_d_Ts.no_cols());
                    for (std::size_t i = 0; i < rank_col.size(); ++i)
                        rank_col[i] = i;
                    L_d_Ts.permute(rank_row, rank_col);
                    m_occ_ranks = rank_row;

                    rank_row = L_u_Ts.get_row_ranks();
                    rank_col.resize(L_u_Ts.no_cols());
                    for (std::size_t i = 0; i < rank_col.size(); ++i)
                        rank_col[i] = i;
                    L_u_Ts.permute(rank_row, rank_col);
                    m_virt_ranks = rank_row;

                    m_L_ds = L_d_Ts;
                    m_L_ds.transpose();
                    m_L_us = L_u_Ts;
                    m_L_us.transpose();

                    Log::instance().write("m_L_us fill_ratio",
                                          m_L_us.fill_ratio());
                    Log::instance().write("m_L_ds fill_ratio",
                                          m_L_ds.fill_ratio());
                    Log::instance().write("m_L_us element_fill_ratio",
                                          m_L_us.element_fill_ratio());
                    Log::instance().write("m_L_ds element_fill_ratio",
                                          m_L_ds.element_fill_ratio());

                    BlockedSparseMatrix<double, MP2_BS> Fs(m_F, 1e-10);
                    Log::instance().write("Fs fill_ratio", Fs.fill_ratio());
                    Log::instance().write("Fs element_fill_ratio",
                                          Fs.element_fill_ratio());
                    BlockedSparseMatrix<double, MP2_BS> LTF(L_d_Ts.no_rows(),
                                                            Fs.no_cols());
                    parallel_prod(1.0, L_d_Ts, Fs, LTF, 1e-10);
                    BlockedSparseMatrix<double, MP2_BS> LTFL(LTF.no_rows(),
                                                             m_L_ds.no_cols());
                    parallel_prod(0.5 * t, LTF, m_L_ds, LTFL, 1e-10);
                    BlockedSparseMatrix<double, MP2_BS> expd(LTFL.no_rows(),
                                                             LTFL.no_cols());
                    Log::instance().write("LTFL_d fill_ratio",
                                          LTFL.fill_ratio());
                    exp(LTFL, expd, 1e-10);
                    BlockedSparseMatrix<double, MP2_BS> Ls = m_L_ds;
                    parallel_prod(1.0, Ls, expd, m_L_ds, 1e-10);

                    LTF.clear_and_resize(L_u_Ts.no_rows(), Fs.no_cols());
                    parallel_prod(1.0, L_u_Ts, Fs, LTF, 1e-10);
                    LTFL.clear_and_resize(LTF.no_rows(), m_L_us.no_cols());
                    parallel_prod(-0.5 * t, LTF, m_L_us, LTFL, 1e-10);
                    expd.clear_and_resize(LTFL.no_rows(), LTFL.no_cols());
                    Log::instance().write("LTFL_u fill_ratio",
                                          LTFL.fill_ratio());
                    exp(LTFL, expd, 1e-10);
                    Ls = m_L_us;
                    parallel_prod(1.0, Ls, expd, m_L_us, 1e-10);

                    Log::instance().write("m_L_us fill_ratio",
                                          m_L_us.fill_ratio());
                    Log::instance().write("m_L_ds fill_ratio",
                                          m_L_ds.fill_ratio());
                    Log::instance().write("m_L_us element_fill_ratio",
                                          m_L_us.element_fill_ratio());
                    Log::instance().write("m_L_ds element_fill_ratio",
                                          m_L_ds.element_fill_ratio());
                }

                {
                    Logger::Section LL_section(Log::instance(), "LL");

                    std::vector<std::vector<std::pair<std::size_t, double>>>
                        Lu = m_L_us.csr_representation();
                    std::vector<std::vector<std::pair<std::size_t, double>>>
                        Ld = m_L_ds.csr_representation();

                    ublas::vector<std::size_t> revert_occ(m_occ_ranks.size());
                    for (std::size_t i = 0; i < m_occ_ranks.size(); ++i)
                        revert_occ[m_occ_ranks[i]] = i;

                    ublas::vector<std::size_t> revert_virt(m_virt_ranks.size());
                    for (std::size_t i = 0; i < m_virt_ranks.size(); ++i)
                        revert_virt[m_virt_ranks[i]] = i;

                    for (std::size_t i = 0; i < Lu.size(); ++i)
                        for (std::size_t j = 0; j < Lu[i].size(); ++j) {
                            const std::size_t index = Lu[i][j].first;
                            Lu[i][j].first = revert_virt(index);
                        }

                    for (std::size_t i = 0; i < Ld.size(); ++i)
                        for (std::size_t j = 0; j < Ld[i].size(); ++j) {
                            const std::size_t index = Ld[i][j].first;
                            Ld[i][j].first = revert_occ(index);
                        }

                    for (std::size_t i = 0; i < Lu.size(); ++i)
                        std::sort(
                            Lu[i].begin(), Lu[i].end(), compare_pairs_more);

                    for (std::size_t i = 0; i < Ld.size(); ++i)
                        std::sort(
                            Ld[i].begin(), Ld[i].end(), compare_pairs_more);

                    std::map<std::pair<unsigned, unsigned>, std::size_t>
                        ia_pairs_map;
                    std::vector<std::vector<std::pair<std::size_t, double>>> Ll(
                        m_permuted_pairs.size());

                    std::size_t ia_index = 0;

                    for (std::size_t ii = 0; ii < m_permuted_pairs.size();
                         ++ii) {
                        const unsigned p = m_permuted_pairs[ii].first;
                        const unsigned q = m_permuted_pairs[ii].second;
                        for (std::size_t jj = 0; jj < Ld[p].size(); ++jj) {
                            const unsigned i = Ld[p][jj].first;
                            const double i_value = Ld[p][jj].second;
                            for (std::size_t kk = 0; kk < Lu[q].size(); ++kk) {
                                const unsigned a = Lu[q][kk].first;
                                const double a_value = Lu[q][kk].second;
                                const double value = a_value * i_value;
                                if (std::abs(value) < 1e-10)
                                    break;
                                std::pair<unsigned, unsigned> ia_pair =
                                    std::make_pair(i, a);
                                std::map<std::pair<unsigned, unsigned>,
                                         std::size_t>::const_iterator bi =
                                    ia_pairs_map.find(ia_pair);
                                if (bi == ia_pairs_map.end()) {
                                    ia_pairs_map.insert(
                                        std::make_pair(ia_pair, ia_index));
                                    ia_index++;
                                }
                            }
                        }
                        for (std::size_t jj = 0; jj < Ld[q].size(); ++jj) {
                            const unsigned i = Ld[q][jj].first;
                            const double i_value = Ld[q][jj].second;
                            for (std::size_t kk = 0; kk < Lu[p].size(); ++kk) {
                                const unsigned a = Lu[p][kk].first;
                                const double a_value = Lu[p][kk].second;
                                const double value = a_value * i_value;
                                if (std::abs(value) < 1e-10)
                                    break;
                                std::pair<unsigned, unsigned> ia_pair =
                                    std::make_pair(i, a);
                                std::map<std::pair<unsigned, unsigned>,
                                         std::size_t>::const_iterator bi =
                                    ia_pairs_map.find(ia_pair);
                                if (bi == ia_pairs_map.end()) {
                                    ia_pairs_map.insert(
                                        std::make_pair(ia_pair, ia_index));
                                    ia_index++;
                                }
                            }
                        }
                    }

                    Log::instance().write("ia_pairs", double(ia_index));
                    m_ia_pairs.resize(ia_index);

                    for (std::map<std::pair<unsigned, unsigned>,
                                  std::size_t>::const_iterator bi =
                             ia_pairs_map.begin();
                         bi != ia_pairs_map.end();
                         ++bi)
                        m_ia_pairs[(*bi).second] = (*bi).first;

                    m_LLs.clear_and_resize(m_permuted_pairs.size(),
                                           m_ia_pairs.size());
                    m_LL_diags.clear_and_resize(m_n, m_ia_pairs.size());

                    for (std::size_t ii = 0; ii < m_permuted_pairs.size();
                         ++ii) {
                        const double max_pair = m_B_W_max(ii);
                        const unsigned p = m_permuted_pairs[ii].first;
                        const unsigned q = m_permuted_pairs[ii].second;
                        for (std::size_t jj = 0; jj < Ld[p].size(); ++jj) {
                            const unsigned i = Ld[p][jj].first;
                            const double i_value = Ld[p][jj].second;
                            for (std::size_t kk = 0; kk < Lu[q].size(); ++kk) {
                                const unsigned a = Lu[q][kk].first;
                                const double a_value = Lu[q][kk].second;
                                const double value = a_value * i_value;
                                if (std::abs(value) * max_pair < 1e-10)
                                    break;
                                std::pair<unsigned, unsigned> ia_pair =
                                    std::make_pair(i, a);
                                std::map<std::pair<unsigned, unsigned>,
                                         std::size_t>::const_iterator bi =
                                    ia_pairs_map.find(ia_pair);
                                if (bi != ia_pairs_map.end()) {
                                    const std::size_t ov = (*bi).second;
                                    m_LLs.get_element(ii, ov) += value;
                                    if (p == q)
                                        m_LL_diags.get_element(p, ov) = value;
                                }
                            }
                        }
                        for (std::size_t jj = 0; jj < Ld[q].size(); ++jj) {
                            const unsigned i = Ld[q][jj].first;
                            const double i_value = Ld[q][jj].second;
                            for (std::size_t kk = 0; kk < Lu[p].size(); ++kk) {
                                const unsigned a = Lu[p][kk].first;
                                const double a_value = Lu[p][kk].second;
                                const double value = a_value * i_value;
                                if (std::abs(value) * max_pair < 1e-10)
                                    break;
                                std::pair<unsigned, unsigned> ia_pair =
                                    std::make_pair(i, a);
                                std::map<std::pair<unsigned, unsigned>,
                                         std::size_t>::const_iterator bi =
                                    ia_pairs_map.find(ia_pair);
                                if (bi != ia_pairs_map.end()) {
                                    const std::size_t ov = (*bi).second;
                                    m_LLs.get_element(ii, ov) += value;
                                }
                            }
                        }
                    }

                    m_LLs.transpose();
                    m_LL_diags.transpose();

                    Log::instance().write("LLs fill ratio", m_LLs.fill_ratio());
                    Log::instance().write("LLs element_fill ratio",
                                          m_LLs.element_fill_ratio());
                }

                {
                    Logger::Section LL_permutation_section(Log::instance(),
                                                           "LL permutation");
                    m_ov_ranks = m_LLs.get_row_ranks();

                    std::vector<std::size_t> rank_col(m_LLs.no_cols());
                    for (std::size_t i = 0; i < rank_col.size(); ++i)
                        rank_col[i] = i;

                    m_permuted_ia_pairs.resize(m_ia_pairs.size());
                    for (std::size_t i = 0; i < m_ia_pairs.size(); ++i)
                        m_permuted_ia_pairs[m_ov_ranks[i]] = m_ia_pairs[i];

                    m_LLs.permute(m_ov_ranks, rank_col);

                    rank_col.resize(m_LL_diags.no_cols());
                    for (std::size_t i = 0; i < rank_col.size(); ++i)
                        rank_col[i] = i;

                    m_LL_diags.permute(m_ov_ranks, rank_col);

                    Log::instance().write("m_LLs fill_ratio",
                                          m_LLs.fill_ratio());
                }
                {
                    Logger::Section B_L_transformation_section(
                        Log::instance(), "BL transformation");
                    m_Btrs.clear_and_resize(m_LLs.no_rows(), m_B_Ws.no_cols());
                    Log::instance().write("m_LLs fill_ratio",
                                          m_LLs.fill_ratio());
                    Log::instance().write("m_B_Ws fill_ratio",
                                          m_B_Ws.fill_ratio());
                    Log::instance().write("m_LLs element_fill_ratio",
                                          m_LLs.element_fill_ratio());
                    Log::instance().write("m_B_Ws element_fill_ratio",
                                          m_B_Ws.element_fill_ratio());
                    parallel_prod(1.0, m_LLs, m_B_Ws, m_Btrs, meps);
                    Log::instance().write("m_Btrs fill_ratio",
                                          m_Btrs.fill_ratio());
                    Log::instance().write("m_Btrs element_fill_ratio",
                                          m_Btrs.element_fill_ratio());
                    parallel_prod(
                        -1.0, m_LL_diags, m_B_W_diags, 1.0, m_Btrs, meps);
                    Log::instance().write("m_Btrs no_rows",
                                          double(m_Btrs.no_rows()));
                    Log::instance().write("m_Btrs no_cols",
                                          double(m_Btrs.no_cols()));
                    Log::instance().write("m_Btrs fill_ratio",
                                          m_Btrs.fill_ratio());
                    Log::instance().write("m_Btrs element_fill_ratio",
                                          m_Btrs.element_fill_ratio(meps));
                    {
                        Logger::Section Btrs_permutation_section(
                            Log::instance(), "Btrs permutation");
                        m_Btrs.clean(meps);
                        m_Btrs.transpose();
                        std::vector<std::size_t> rank_row =
                            m_Btrs.get_row_ranks();

                        std::vector<std::size_t> rank_col(m_Btrs.no_cols());
                        for (std::size_t i = 0; i < rank_col.size(); ++i)
                            rank_col[i] = i;

                        m_Btrs.permute(rank_row, rank_col);
                        m_Btrs.transpose();
                        Log::instance().write("m_Btrs fill_ratio",
                                              m_Btrs.fill_ratio());
                        Log::instance().write("m_Btrs element_fill_ratio",
                                              m_Btrs.element_fill_ratio(meps));
                        rank_row = m_Btrs.get_row_ranks();
                        rank_col.resize(m_Btrs.no_cols());
                        for (std::size_t i = 0; i < rank_col.size(); ++i)
                            rank_col[i] = i;

                        for (std::size_t i = 0; i < m_permuted_ia_pairs.size();
                             ++i)
                            m_ia_pairs[rank_row[i]] = m_permuted_ia_pairs[i];

                        m_permuted_ia_pairs = m_ia_pairs;

                        m_Btrs.permute(rank_row, rank_col);
                        Log::instance().write("m_Btrs fill_ratio",
                                              m_Btrs.fill_ratio());
                        Log::instance().write("m_Btrs element_fill_ratio",
                                              m_Btrs.element_fill_ratio(meps));
                    }
                }

                {
                    Logger::Section DG_section(Log::instance(),
                                               "DG calculation");

                    m_DG = m_Btrs.row_norm();
                    const std::size_t no_blocks =
                        (m_DG.size() % MP2_BS ? m_DG.size() / MP2_BS + 1
                                              : m_DG.size() / MP2_BS);
                    m_DG_blocks = arma::zeros<arma::vec>(no_blocks);

                    for (std::size_t i = 0; i < m_DG.size(); ++i) {
                        const std::size_t block = i / MP2_BS;
                        if (m_DG(i) > m_DG_blocks(block))
                            m_DG_blocks(block) = m_DG(i);
                    }
                }

                double partial_e_J = 0;
                double partial_e_K = 0;

                {
                    Logger::Section J_section(Log::instance(), "J calculation");

                    arma::mat prods(MP2_BS, MP2_BS);

                    for (std::size_t i = 0; i < m_DG_blocks.size(); ++i)
                        for (std::size_t j = 0; j <= i; ++j) {
                            if (m_DG_blocks(i) * m_DG_blocks(i) *
                                    m_DG_blocks(j) * m_DG_blocks(j) <
                                meps)
                                continue;
                            m_Btrs.block_row_dot(i, j, prods);
                            const std::size_t i_size =
                                std::min(MP2_BS, int(m_DG.size() - i * MP2_BS));
                            const std::size_t j_size =
                                std::min(MP2_BS, int(m_DG.size() - j * MP2_BS));
                            if (i != j) {
                                for (std::size_t k = 0; k < i_size; ++k)
                                    for (std::size_t l = 0; l < j_size; ++l)
                                        partial_e_J +=
                                            2 * w * prods(k, l) * prods(k, l);
                            } else {
                                for (std::size_t k = 0; k < i_size; ++k)
                                    for (std::size_t l = 0; l <= k; ++l)
                                        partial_e_J += (k == l ? 1 : 2) * w *
                                                       prods(k, l) *
                                                       prods(k, l);
                            }
                        }

                    Log::instance().write("partial_e_J", partial_e_J);
                }

                {
                    Logger::Section K_section(Log::instance(), "K calculation");

                    double DG_max = 0;
                    for (std::size_t i = 0; i < m_DG.size(); ++i)
                        if (m_DG(i) > DG_max)
                            DG_max = m_DG(i);

                    std::map<std::pair<unsigned, unsigned>, std::size_t>
                        ia_pairs;
                    for (std::size_t i = 0; i < m_permuted_ia_pairs.size(); ++i)
                        ia_pairs.insert(
                            std::make_pair(m_permuted_ia_pairs[i], i));

                    for (std::size_t ii = 0; ii < m_permuted_ia_pairs.size();
                         ++ii)
                        for (std::size_t jj = 0; jj <= ii; ++jj) {
                            const unsigned i = m_permuted_ia_pairs[ii].first;
                            const unsigned a = m_permuted_ia_pairs[ii].second;
                            const unsigned j = m_permuted_ia_pairs[jj].first;
                            const unsigned b = m_permuted_ia_pairs[jj].second;

                            if (m_DG(ii) * m_DG(jj) * DG_max * DG_max < meps)
                                continue;

                            std::map<std::pair<unsigned, unsigned>,
                                     std::size_t>::const_iterator bi =
                                ia_pairs.find(std::make_pair(i, b));
                            if (bi == ia_pairs.end())
                                continue;
                            const std::size_t ib_index = (*bi).second;

                            bi = ia_pairs.find(std::make_pair(j, a));
                            if (bi == ia_pairs.end())
                                continue;
                            const std::size_t ja_index = (*bi).second;

                            if (m_DG(ii) * m_DG(jj) * m_DG(ib_index) *
                                    m_DG(ja_index) <
                                meps)
                                continue;

                            const double iajb = m_Btrs.row_dot(ii, jj);

                            const double ibja =
                                m_Btrs.row_dot(ib_index, ja_index);

                            partial_e_K += w * iajb * ibja;
                            if (ii != jj)
                                partial_e_K += w * iajb * ibja;
                        }

                    Log::instance().write("partial_e_K", partial_e_K);
                }

                m_e2 += -2.0 * partial_e_J + partial_e_K;
                Log::instance().write("m_e2", m_e2);
            }
        }
    }
}

void RHF_LT_CD_DF_Poisson_MP2::calc_J()
{
    calc_J_aux();
    calc_J_poisson();
    calc_J_mixed();
}

void RHF_LT_CD_DF_Poisson_MP2::calc_J_aux()
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
                    const double g = *results++;
                    m_Js.get_element(p, q) = g;
                    m_Js.get_element(q, p) = g;
                }
        }
    }
}

void RHF_LT_CD_DF_Poisson_MP2::calc_J_poisson()
{
    const ShellPairIndexGenerator sp_begin(m_poisson_bs_info.m_no_shells);
    const ShellPairIndexGenerator sp_end = sp_begin.make_end();
    ShellPairIndexGenerator sp(m_poisson_bs_info.m_no_shells);

    unsigned long begin = 0;
    unsigned long end =
        m_poisson_bs_info.m_no_shells * (m_poisson_bs_info.m_no_shells + 1) / 2;

    for (;;) {
        // pile up requests
        m_pair_poisson_requests.clear();
        unsigned r = 0;

        {
            if (begin >= end)
                break;

            while (begin < end) {
                const PoissonTwoElectronIntegralEngine::PairRequest request = {
                    *sp, false, &m_buf_pair_poisson[r][0]};

                m_pair_poisson_requests.push_back(request);

                r += 1;

                ++sp;
                ++begin;

                if (r >= m_max_no_pair_poisson_requests)
                    break;
            }
        }

        m_poisson_2_ie->calc_AC(m_pair_poisson_requests);

        for (unsigned r = 0; r < m_pair_poisson_requests.size(); ++r) {

            const PoissonTwoElectronIntegralEngine::PairRequest& req =
                m_pair_poisson_requests[r];

            const double* results = req.results;

            const unsigned P = req.shells[0];
            const unsigned Q = req.shells[1];

            const std::size_t offset = m_n_posthf_aux;

            std::size_t first_P =
                offset + m_poisson_bs_info.m_first_contraction_in_shell[P];
            std::size_t first_Q =
                offset + m_poisson_bs_info.m_first_contraction_in_shell[Q];

            std::size_t last_P =
                offset + m_poisson_bs_info.m_first_contraction_in_shell[P] +
                m_poisson_bs_info.m_shell_sizes[P];
            std::size_t last_Q =
                offset + m_poisson_bs_info.m_first_contraction_in_shell[Q] +
                m_poisson_bs_info.m_shell_sizes[Q];

            for (std::size_t p = first_P; p < last_P; ++p)
                for (std::size_t q = first_Q; q < last_Q; ++q) {
                    const double g = *results++;
                    m_Js.get_element(p, q) = g;
                    m_Js.get_element(q, p) = g;
                }
        }
    }
}

void RHF_LT_CD_DF_Poisson_MP2::calc_J_mixed()
{
    const MixedShellPairIndexGenerator sp_begin(
        m_poisson_bs_info.m_no_shells, m_posthf_aux_bs_info.m_no_shells);
    const MixedShellPairIndexGenerator sp_end = sp_begin.make_end();
    MixedShellPairIndexGenerator sp(m_poisson_bs_info.m_no_shells,
                                    m_posthf_aux_bs_info.m_no_shells);

    unsigned long begin = 0;
    unsigned long end =
        m_poisson_bs_info.m_no_shells * m_posthf_aux_bs_info.m_no_shells;

    for (;;) {
        // pile up requests
        m_pair_poisson_requests.clear();
        unsigned r = 0;

        {
            if (begin >= end)
                break;

            while (begin < end) {
                const PoissonTwoElectronIntegralEngine::PairRequest request = {
                    *sp, false, &m_buf_pair_poisson[r][0]};

                m_pair_poisson_requests.push_back(request);

                r += 1;

                ++sp;
                ++begin;

                if (r >= m_max_no_pair_poisson_requests)
                    break;
            }
        }

        m_poisson_2_ie->calc_A_aux(m_pair_poisson_requests);

        for (unsigned r = 0; r < m_pair_poisson_requests.size(); ++r) {

            const PoissonTwoElectronIntegralEngine::PairRequest& req =
                m_pair_poisson_requests[r];

            const double* results = req.results;

            const unsigned P = req.shells[0];
            const unsigned Q = req.shells[1];

            const std::size_t offset = m_n_posthf_aux;

            std::size_t first_P =
                offset + m_poisson_bs_info.m_first_contraction_in_shell[P];
            std::size_t first_Q =
                m_posthf_aux_bs_info.m_first_contraction_in_shell[Q];

            std::size_t last_P =
                offset + m_poisson_bs_info.m_first_contraction_in_shell[P] +
                m_poisson_bs_info.m_shell_sizes[P];
            std::size_t last_Q =
                m_posthf_aux_bs_info.m_first_contraction_in_shell[Q] +
                m_posthf_aux_bs_info.m_shell_sizes[Q];

            for (std::size_t p = first_P; p < last_P; ++p)
                for (std::size_t q = first_Q; q < last_Q; ++q) {
                    const double g = *results++;
                    m_Js.get_element(p, q) = g;
                    m_Js.get_element(q, p) = g;
                }
        }
    }
}

void RHF_LT_CD_DF_Poisson_MP2::set_max_J_shells()
{
    arma::vec J_diag = m_Js.diagonal();

    for (unsigned i = 0; i < m_posthf_aux_bs_info.m_no_shells; ++i) {
        double max = 0;
        const unsigned b1 =
            m_posthf_aux_bs_info.m_first_contraction_in_shell[i];
        const unsigned n1 = m_posthf_aux_bs_info.m_shell_sizes[i];
        for (unsigned k = b1; k < b1 + n1; ++k)
            if (std::abs(J_diag(k)) > max)
                max = std::abs(J_diag(k));
        m_max_J_shells(i) = max;
    }

    const unsigned offset_1 = m_n_posthf_aux;
    const unsigned offset_2 = m_posthf_aux_bs_info.m_no_shells;

    for (unsigned i = 0; i < m_poisson_bs_info.m_no_shells; ++i) {
        double max = 0;
        const unsigned b1 = m_poisson_bs_info.m_first_contraction_in_shell[i];
        const unsigned n1 = m_poisson_bs_info.m_shell_sizes[i];
        for (unsigned k = b1; k < b1 + n1; ++k)
            if (std::abs(J_diag(k + offset_1)) > max)
                max = std::abs(J_diag(k + offset_1));
        m_max_J_shells(i + offset_2) = max;
    }
}

void RHF_LT_CD_DF_Poisson_MP2::calc_W()
{
    const unsigned n = m_Js.no_rows();

    Log::instance().write("m_Js fill_ratio", m_Js.fill_ratio());

    {
        Logger::Section J_permute_section(Log::instance(), "J permutation");

        m_aux_ranks = m_Js.get_symmetric_ranks();

        m_Js.permute(m_aux_ranks, m_aux_ranks);

        Log::instance().write("m_Js fill_ratio", m_Js.fill_ratio());
    }

    if (n > LOWDIN_LARGE_MATRIX_SIZE) {

        {
            Logger::Section W_section(Log::instance(), "W calculation");

            BlockedSparseMatrix<double, MP2_BS> J12s(m_Js.no_rows(),
                                                     m_Js.no_cols());

            sqrt(m_Js, m_Ws, J12s, 1e-10, 50);
        }

        m_Ws.clean(1e-10);
    } else {
        {
            Logger::Section W_section(Log::instance(), "W calculation");

            arma::mat J(n, n);
            m_Js.sparse_to_dense(J);
            arma::mat J_12 = inv(real(sqrtmat(J)));
            BlockedSparseMatrix<double, MP2_BS> Ws(J_12, 1e-10);
            m_Ws = Ws;
        }
    }

    m_Js.clear_and_resize(1, 1);

    Log::instance().write("m_Ws fill_ratio", m_Ws.fill_ratio());
    Log::instance().write("m_Ws element_fill_ratio", m_Ws.element_fill_ratio());
}

void RHF_LT_CD_DF_Poisson_MP2::calc_L()
{

    m_L = m_cl.localize_density_matrix(m_P, false);
    m_no_occ = m_cl.no_base();
    m_no_virt = m_cl.no_complement();
}

void RHF_LT_CD_DF_Poisson_MP2::calc_B()
{

    unsigned long B_size = 0;
    const std::vector<std::pair<unsigned, unsigned>>& sp =
        *m_sspg.shell_pairs();
    std::vector<std::size_t> B_offset(sp.size());
    for (std::size_t i = 0; i < sp.size(); ++i) {
        B_offset[i] = B_size;
        unsigned P = sp[i].first;
        unsigned Q = sp[i].second;
        unsigned P_size = m_bs_info.m_shell_sizes[P];
        unsigned Q_size = m_bs_info.m_shell_sizes[Q];
        if (P != Q)
            B_size += P_size * Q_size;
        else
            B_size += P_size * (P_size + 1) / 2;
    }

    for (std::size_t i = 0; i < sp.size(); ++i) {
        const unsigned P = sp[i].first;
        const unsigned Q = sp[i].second;
        const unsigned P_size = m_bs_info.m_shell_sizes[P];
        const unsigned Q_size = m_bs_info.m_shell_sizes[Q];
        const unsigned P_first = m_bs_info.m_first_contraction_in_shell[P];
        const unsigned Q_first = m_bs_info.m_first_contraction_in_shell[Q];
        for (unsigned i = P_first; i < P_first + P_size; ++i)
            for (unsigned j = std::max(Q_first, i); j < Q_first + Q_size; ++j)
                m_pairs.push_back(std::make_pair(i, j));
    }

    m_Bs.clear_and_resize(B_size, m_n_posthf_aux + m_n_poisson);

    {
        m_max_no_ACD_requests = sp.size();
        m_ACD_requests.reserve(m_max_no_ACD_requests);

        m_buf_ACD.resize(boost::extents[m_max_no_ACD_requests]
                                       [m_bs_info.m_max_shell_size *
                                        m_bs_info.m_max_shell_size *
                                        m_posthf_aux_bs_info.m_max_shell_size]);

        std::vector<unsigned long> request_offset;

        for (unsigned A = 0; A < m_posthf_aux_bs_info.m_no_shells; ++A) {
            m_ACD_requests.clear();
            request_offset.clear();
            unsigned long r = 0;
            for (std::size_t i = 0; i < sp.size(); ++i) {
                unsigned C = sp[i].first;
                unsigned D = sp[i].second;

                const ShellQuartetIndex sqi = {{C, D, C, D}};

                const double max_integral =
                    sqrt(m_schwartz.max_integral(sqi) * m_max_J_shells(A));

                if (max_integral > m_int_tresh) {
                    const ShellACDIndex acd = {{A, C, D}};
                    const QuasiTwoElectronIntegralEngine::ACDRequest request = {
                        acd, false, &m_buf_ACD[r][0]};
                    m_ACD_requests.push_back(request);
                    request_offset.push_back(B_offset[i]);
                    r += 1;
                }
            }

            m_q_2_ie->calc_ACD(m_ACD_requests);

            for (unsigned r = 0; r < m_ACD_requests.size(); ++r) {

                const QuasiTwoElectronIntegralEngine::ACDRequest& request =
                    m_ACD_requests[r];

                const unsigned s1 = request.shells[0];
                const unsigned s2 = request.shells[1];
                const unsigned s3 = request.shells[2];

                const unsigned b1 =
                    m_posthf_aux_bs_info.m_first_contraction_in_shell[s1];
                const unsigned b2 = m_bs_info.m_first_contraction_in_shell[s2];
                const unsigned b3 = m_bs_info.m_first_contraction_in_shell[s3];

                const unsigned n1 = m_posthf_aux_bs_info.m_shell_sizes[s1];
                const unsigned n2 = m_bs_info.m_shell_sizes[s2];
                const unsigned n3 = m_bs_info.m_shell_sizes[s3];

                double* results = request.results;
                for (unsigned i = b1; i < b1 + n1; ++i) {
                    unsigned long offset = request_offset[r];
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = std::max(j, b3); k < b3 + n3;
                             ++k, ++offset) {
                            const double result =
                                *(request.results +
                                  (((i - b1) * n2 + (j - b2)) * n3 + k - b3)) *
                                m_aux_factors(i);
                            if (std::abs(result) > m_int_tresh) {
                                m_Bs.get_element(offset, m_aux_ranks[i]) =
                                    result;
                            }
                        }
                }
            }
        }
    }

    {
        const unsigned offset_1 = m_n_posthf_aux;
        const unsigned offset_2 = m_posthf_aux_bs_info.m_no_shells;

        m_max_no_ACD_requests = sp.size();
        m_ACD_requests.reserve(m_max_no_ACD_requests);

        m_buf_ACD.resize(boost::extents[m_max_no_ACD_requests]
                                       [m_bs_info.m_max_shell_size *
                                        m_bs_info.m_max_shell_size *
                                        m_poisson_bs_info.m_max_shell_size]);

        std::vector<unsigned long> request_offset;

        for (unsigned A = 0; A < m_poisson_bs_info.m_no_shells; ++A) {
            m_ACD_requests.clear();
            request_offset.clear();
            unsigned long r = 0;
            for (std::size_t i = 0; i < sp.size(); ++i) {
                unsigned C = sp[i].first;
                unsigned D = sp[i].second;

                const ShellQuartetIndex sqi = {{C, D, C, D}};

                const double max_integral = sqrt(m_schwartz.max_integral(sqi) *
                                                 m_max_J_shells(A + offset_2));

                if (max_integral > m_int_tresh) {
                    const ShellACDIndex acd = {{A, C, D}};
                    const PoissonTwoElectronIntegralEngine::ACDRequest request =
                        {acd, false, &m_buf_ACD[r][0]};
                    m_ACD_requests.push_back(request);
                    request_offset.push_back(B_offset[i]);
                    r += 1;
                }
            }

            m_poisson_2_ie->calc_ACD(m_ACD_requests);

            for (unsigned r = 0; r < m_ACD_requests.size(); ++r) {

                const PoissonTwoElectronIntegralEngine::ACDRequest& request =
                    m_ACD_requests[r];

                const unsigned s1 = request.shells[0];
                const unsigned s2 = request.shells[1];
                const unsigned s3 = request.shells[2];

                const unsigned b1 =
                    m_poisson_bs_info.m_first_contraction_in_shell[s1];
                const unsigned b2 = m_bs_info.m_first_contraction_in_shell[s2];
                const unsigned b3 = m_bs_info.m_first_contraction_in_shell[s3];

                const unsigned n1 = m_poisson_bs_info.m_shell_sizes[s1];
                const unsigned n2 = m_bs_info.m_shell_sizes[s2];
                const unsigned n3 = m_bs_info.m_shell_sizes[s3];

                double* results = request.results;
                for (unsigned i = b1; i < b1 + n1; ++i) {
                    unsigned long offset = request_offset[r];
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = std::max(j, b3); k < b3 + n3;
                             ++k, ++offset) {
                            const double result =
                                *(request.results +
                                  (((i - b1) * n2 + (j - b2)) * n3 + k - b3)) *
                                m_aux_factors(i + offset_1);
                            if (std::abs(result) > m_int_tresh) {
                                m_Bs.get_element(
                                    offset, m_aux_ranks[i + offset_1]) = result;
                            }
                        }
                }
            }
        }
    }

    m_Bs.clean(1e-10);
    Log::instance().write("m_Bs fill_ratio", m_Bs.fill_ratio());
    Log::instance().write("m_Bs element_fill_ratio", m_Bs.element_fill_ratio());
    {
        Logger::Section B_permutation_section(Log::instance(), "B permutation");

        m_n2_ranks = m_Bs.get_row_ranks();

        std::vector<std::size_t> rank_col(m_Bs.no_cols());
        for (std::size_t i = 0; i < rank_col.size(); ++i)
            rank_col[i] = i;

        m_permuted_pairs.resize(m_pairs.size());
        for (std::size_t i = 0; i < m_pairs.size(); ++i)
            m_permuted_pairs[m_n2_ranks[i]] = m_pairs[i];

        m_Bs.permute(m_n2_ranks, rank_col);

        Log::instance().write("m_Bs fill_ratio", m_Bs.fill_ratio());
    }
}
