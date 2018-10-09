/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_TD_KIT_DRESSED_CIS_HPP
#define NIEDOIDA_TD_KIT_DRESSED_CIS_HPP

#include "core_kit/system.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"
#include "td_kit/restricted_td.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"
#include "td_kit/dress.hpp"

namespace niedoida {
    namespace td {
        class RDressedCIS: public RestrictedTD {

        typedef RestrictedTD Base;

        public:
            RDressedCIS(
                Multiplicity multiplicity,
                std::shared_ptr<const core::System> system,
                const arma::mat C,
                const arma::vec eps,
                std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory,
                unsigned no_frozen,
                unsigned no_deleted,
                unsigned min_no_results,
                unsigned no_iterations,
                double diagonalization_threshold,
                const std::vector <Dress_matrix>& dress,
                arma::mat v_0);

            arma::mat gradient(const std::vector<unsigned>&, unsigned state) override;

        private:
            class Sigma: public Base::Sigma {
            public:
                Sigma(
                    std::shared_ptr<const core::System> system,
                    const arma::mat& mo_coeffs,
                    const arma::vec& eps,
                    std::size_t no_frozen,
                    std::size_t no_deleted,
                    Multiplicity mult,
                    core::PseudoFockMatrixGenerator& fm,
                    const std::vector <Dress_matrix>& dress);

            protected:
                arma::mat calc(const arma::mat&) const;
                core::PseudoFockMatrixGenerator* m_fock_matrix_generator;
                const std::vector <Dress_matrix> m_dress;    
            };
        };
        
    }
}

#endif
