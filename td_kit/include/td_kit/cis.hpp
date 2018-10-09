/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_TD_KIT_CIS_HPP
#define NIEDOIDA_TD_KIT_CIS_HPP

#include "core_kit/system.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"
#include "td_kit/restricted_td.hpp"

namespace niedoida {
    namespace td {
        
        class RCIS: public RestrictedTD {

        typedef RestrictedTD Base;

        public:
            RCIS(
                Multiplicity multiplicity,
                std::shared_ptr<const core::System> system,
                const arma::mat C,
                const arma::vec eps,
                std::shared_ptr<const core::TwoElectronIntegralEngineFactory>,
                unsigned no_frozen,
                unsigned no_deleted,
                unsigned no_states,
                unsigned no_roots,
                unsigned no_iterations,
                double diagonalization_threshold,
                double integral_threshold);

            arma::mat gradient(const std::vector<unsigned>&, unsigned state) override;
            
        private:
            std::shared_ptr<const core::System> m_system;
            const arma::mat m_C;
            const arma::vec m_eps;
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory> m_2eie_factory;
        
            core::PseudoFockMultiMatrixGenerator m_fm_gen;
            
            class MultiSigma: public Base::MultiSigma {
            public:
                MultiSigma(
                    std::shared_ptr<const core::System> system,
                    const arma::mat& mo_coeffs,
                    const arma::vec& eps,
                    std::size_t no_frozen,
                    std::size_t no_deleted,
                    Multiplicity mult,
                    core::PseudoFockMultiMatrixGenerator& fm);

            protected:
                std::vector<arma::mat> calc(const std::vector<arma::mat>&) const;
                core::PseudoFockMultiMatrixGenerator* m_fock_matrix_generator;
            };
        };
    }
}

#endif
