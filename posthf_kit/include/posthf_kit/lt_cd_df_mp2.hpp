/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_POSTHF_KIT_LT_CD_DF_MP2_HPP
#define NIEDOIDA_POSTHF_KIT_LT_CD_DF_MP2_HPP

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

        class RHF_LT_CD_DF_MP2: public MP2 {
        public:
            RHF_LT_CD_DF_MP2(
                std::shared_ptr<const System> system,
                std::shared_ptr<const PostHFQuasiTwoElectronIntegralEngineFactory> quasi_two_e_ie_factory,
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
            std::size_t m_memory_pool;
            double m_e2;
            std::unique_ptr<QuasiTwoElectronIntegralEngine> m_q_2_ie;    
            BasisSetInfo m_bs_info;
            unsigned m_n;
            double m_int_tresh;
            double m_eps;
            const SchwartzEstimator& m_schwartz;
            SignificantShellPairsGenerator m_sspg;
            BasisSetInfo m_posthf_aux_bs_info;
            unsigned m_n_posthf_aux;
            unsigned m_n_posthf_aux_shells;
            CholeskyLocalization m_cl;
            arma::mat m_P;
            arma::mat m_F;

            unsigned m_max_no_pair_requests;
            std::vector<QuasiTwoElectronIntegralEngine::PairRequest> m_pair_requests;
            boost::multi_array<double, 2> m_buf_pair;
            std::size_t m_max_no_ACD_requests;
            std::vector<QuasiTwoElectronIntegralEngine::ACDRequest> m_ACD_requests;
            boost::multi_array<double, 2> m_buf_ACD;
            unsigned m_no_occ;
            unsigned m_no_virt;

            arma::mat m_J;
            arma::vec m_max_J_shells;
            arma::vec m_max_W_shells;
            arma::vec m_max_W;
            arma::mat m_W;
            arma::mat m_L;
            std::vector<std::pair<unsigned, unsigned> > m_significant_B_pairs;
            arma::mat m_B;
            std::vector<unsigned long> m_B_offset;
            arma::vec m_B_max;

            void calc_J();
            void set_max_J_shells();
            void set_max_W_shells();
            void calc_W();
            void calc_L();
        };

        inline
        double RHF_LT_CD_DF_MP2::energy_correction() const { 
            return m_e2; 
        }
    }
}

#endif
