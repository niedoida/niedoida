/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_POSTHF_KIT_LT_CD_DF_MP2_POISSON_HPP
#define NIEDOIDA_POSTHF_KIT_LT_CD_DF_MP2_POISSON_HPP

#include "posthf_kit/mp2_base.hpp"
#include "posthf_kit/localization.hpp"

#include "core_kit/system.hpp"
#include "core_kit/integral_engine.hpp"
#include "core_kit/integral_engine_factory.hpp"
#include "core_kit/integral_cache.hpp"
#include "core_kit/schwartz_estimator.hpp"
#include "core_kit/spin.hpp"
#include "core_kit/basis_set_info.hpp"
#include "core_kit/significant_shell_pairs_generator.hpp"

namespace niedoida {

    namespace posthf {

#define MP2_BS 64
#define LOWDIN_LARGE_MATRIX_SIZE 8000

        class RHF_LT_CD_DF_Poisson_MP2: public MP2 {
        public:
            RHF_LT_CD_DF_Poisson_MP2(
                std::shared_ptr<const System> system,
                std::shared_ptr<const PostHFQuasiTwoElectronIntegralEngineFactory> quasi_two_e_ie_factory,
                std::shared_ptr<const PoissonTwoElectronIntegralEngineFactory> poisson_two_e_ie_factory,
                const arma::mat& P,
                const arma::mat& F,
                unsigned long memory_pool,
                const Quadrature& quadrature,
                const double threshold,
                const double eps);
            double energy_correction() const;

        private:
            std::shared_ptr<const System> m_system;
            std::shared_ptr<const PostHFQuasiTwoElectronIntegralEngineFactory> m_q_2_ie_factory;
            std::shared_ptr<const PoissonTwoElectronIntegralEngineFactory> m_poisson_2_ie_factory;
            std::size_t m_memory_pool;
            double m_e2;
            std::unique_ptr<QuasiTwoElectronIntegralEngine> m_q_2_ie; 
            std::unique_ptr<PoissonTwoElectronIntegralEngine> m_poisson_2_ie; 
            BasisSetInfo m_bs_info;
            unsigned m_n;
            double m_int_tresh;
            double m_eps;
            const SchwartzEstimator& m_schwartz;
            SignificantShellPairsGenerator m_sspg;
            BasisSetInfo m_posthf_aux_bs_info;
            unsigned m_n_posthf_aux;
            unsigned m_n_posthf_aux_shells;
            BasisSetInfo m_poisson_bs_info;
            unsigned m_n_poisson;
            unsigned m_n_poisson_shells;
            CholeskyLocalization m_cl;
            arma::mat m_P;
            arma::mat m_F;

            unsigned m_max_no_pair_requests;
            std::vector<QuasiTwoElectronIntegralEngine::PairRequest> m_pair_requests;
            boost::multi_array<double, 2> m_buf_pair;

            unsigned m_max_no_pair_poisson_requests;
            std::vector<PoissonTwoElectronIntegralEngine::PairRequest> m_pair_poisson_requests;
            boost::multi_array<double, 2> m_buf_pair_poisson;

            std::size_t m_max_no_ACD_requests;
            std::vector<QuasiTwoElectronIntegralEngine::ACDRequest> m_ACD_requests;
            boost::multi_array<double, 2> m_buf_ACD;
            unsigned m_no_occ;
            unsigned m_no_virt;

            std::vector<std::pair<unsigned, unsigned> > m_pairs;
            std::vector<std::pair<unsigned, unsigned> > m_permuted_pairs;
            std::vector<std::pair<unsigned, unsigned> > m_ia_pairs;
            std::vector<std::pair<unsigned, unsigned> > m_permuted_ia_pairs;
            arma::vec m_max_J_shells;
            arma::vec m_aux_factors;

            std::vector<std::size_t> m_aux_ranks;
            std::vector<std::size_t> m_n2_ranks;
            std::vector<std::size_t> m_occ_ranks;
            std::vector<std::size_t> m_virt_ranks;
            std::vector<std::size_t> m_ov_ranks;

            BlockedSparseMatrix<double, MP2_BS> m_Js;
            BlockedSparseMatrix<double, MP2_BS> m_Ws;
            BlockedSparseMatrix<double, MP2_BS> m_Bs;
            BlockedSparseMatrix<double, MP2_BS> m_B_Ws;
            BlockedSparseMatrix<double, MP2_BS> m_B_W_diags;    
            BlockedSparseMatrix<double, MP2_BS> m_L_ds;
            BlockedSparseMatrix<double, MP2_BS> m_L_us;
            BlockedSparseMatrix<double, MP2_BS> m_LLs;
            BlockedSparseMatrix<double, MP2_BS> m_LL_diags;
            BlockedSparseMatrix<double, MP2_BS> m_Btrs;


            arma::vec m_DG;
            arma::vec m_DG_blocks;
            arma::vec m_B_W_max;

            arma::mat m_L;

            void calc_J();
            void calc_J_aux();
            void calc_J_poisson();
            void calc_J_mixed();
            void set_max_J_shells();
            void calc_W();
            void calc_L();
            void calc_B();
        };

        inline
        double RHF_LT_CD_DF_Poisson_MP2::energy_correction() const { 
            return m_e2; 
        }
    }
}
#endif
