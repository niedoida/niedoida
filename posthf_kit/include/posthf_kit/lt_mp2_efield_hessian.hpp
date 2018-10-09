/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_POSTHF_KIT_LT_MP2_EFIELD_HESSIAN_HPP
#define NIEDOIDA_POSTHF_KIT_LT_MP2_EFIELD_HESSIAN_HPP

#include "posthf_kit/mp2_base.hpp"
#include "posthf_kit/lt_mp2.hpp"

#include "core_kit/integral_engine.hpp"
#include "core_kit/integral_engine_factory.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"

namespace niedoida {

    namespace posthf {

        class RHF_LT_AO_MP2_EFieldHessian: public MP2, private LT_AO_MP2_Base, private LT_AO_MP2_SchwartzPrescreening {
        public:
            RHF_LT_AO_MP2_EFieldHessian(
                std::shared_ptr<const System> system,
                std::unique_ptr<OneElectronIntegralEngine> one_e_int_eng,
                std::shared_ptr<const TwoElectronIntegralEngineFactory> two_e_int_eng_factory,
                const arma::vec& e,
                const arma::mat& C,
                unsigned long memory_pool,
                unsigned no_frozen,
                unsigned no_deleted,
                const Quadrature&,
                const double eps);
            double energy_correction() const;

        private:
            std::size_t m_memory_pool;
            arma::vec m_e;
            arma::vec m_ef;
            double m_e2;
            arma::mat m_X;
            arma::mat m_Y;
            std::unique_ptr<std::size_t[]> m_indices_buf2;
            std::unique_ptr<std::size_t[]> m_indices_buf3;
            std::unique_ptr<std::size_t[]> m_indices_buf4;
            arma::vec m_X_local;
            arma::vec m_X_local_sh;
            arma::vec m_max_Y_sh;

            void make_local_matrices(const std::size_t, const std::size_t);

            unsigned long long subd2_size(std::size_t, std::size_t);

            void make_d2(std::size_t, std::size_t, Integrals&);
            void make_partial_d3(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_partial_d3up(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_partial_d4(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_partial_d4up(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_partial_d4dn(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_partial_d5up(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_d_sh(Integrals_sh&, const Integrals&);
            void make_partial_d_sh(Integrals_sh&, const Integrals&);
            void make_partial_d_sh_up(Integrals_sh&, const Integrals&);
            void make_partial_d_sh_dn(Integrals_sh&, const Integrals&);

            void trans12(
                std::size_t, std::size_t,
                const arma::mat X, 
                const arma::mat Y, 
                Integrals&);
            void trans34(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans_partial_3(
                std::size_t, std::size_t, 
                std::size_t*, std::size_t, 
                const arma::mat& X, 
                Integrals&, Integrals&);

            void trans_partial_3up(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans_partial_5up(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans_partial_4(
                std::size_t, std::size_t, 
                std::size_t*, std::size_t, 
                const arma::mat& Y, 
                Integrals&, Integrals&);
            void trans_partial_4dn(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans3partial(
                std::size_t, std::size_t, std::size_t, std::size_t, double, 
                const arma::mat& X, Integrals&);
            void trans3partialup(std::size_t, std::size_t, std::size_t, std::size_t, double, Integrals&);
            void trans5partialup(std::size_t, std::size_t, std::size_t, std::size_t, double, Integrals&);
            void trans4partial(
                std::size_t, std::size_t, std::size_t, std::size_t, double, 
                const arma::mat& Y, Integrals&);
            void trans4partialdn(std::size_t, std::size_t, std::size_t, std::size_t, double, Integrals&);
            double energy_partial_contribution(Integrals_sh&, const Integrals&);
            arma::mat Rup_partial_contribution(Integrals_sh& d_sh, const Integrals& d4);
            arma::mat Rdn_partial_contribution(Integrals_sh& d_sh, const Integrals& d4);
        };

        inline
        double RHF_LT_AO_MP2_EFieldHessian::energy_correction() const { 
            return m_e2; 
        }
    }
}
#endif
