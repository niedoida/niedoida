/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_TD_KIT_TDKS_TDA_HPP
#define NIEDOIDA_TD_KIT_TDKS_TDA_HPP

#include "core_kit/system.hpp"
#include "td_kit/xc_kernel_generator.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"
#include "scf_kit/scf_utils.hpp"
#include "td_kit/restricted_td.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"

namespace niedoida {
    namespace td {
        class TDKS_TDA: public RestrictedTD {

        typedef RestrictedTD Base;

        public:
            TDKS_TDA(
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
                double integral_threshold,
                std::shared_ptr<XCMultiKernelGenerator> generator,
                double hf_exchange_contribution = 0.0);

            arma::mat gradient(const std::vector<unsigned>&, unsigned) override;

        private:
            class MultiSigma: public Base::MultiSigma {
            public:
                MultiSigma(
                    std::shared_ptr<const core::System> system,
                    const arma::mat& mo_coeffs,
                    const arma::vec& eps,
                    std::size_t no_frozen,
                    std::size_t no_deleted,
                    Multiplicity mult,
                    core::PseudoFockMultiMatrixGenerator& fm,
                    std::shared_ptr<XCMultiKernelGenerator> generator,
                    double hf_exchange_contribution);

            protected:
                std::vector<arma::mat> calc(const std::vector<arma::mat >&) const;
                core::PseudoFockMultiMatrixGenerator* m_fock_matrix_generator;
                std::shared_ptr<XCMultiKernelGenerator> m_xc_kernel_generator;
            };
        };
        
    }
}

#endif
