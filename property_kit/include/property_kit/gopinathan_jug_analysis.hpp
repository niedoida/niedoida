/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_GOPINATHAN_JUG_ANALYSIS_HPP
#define NIEDOIDA_PROPERTY_KIT_GOPINATHAN_JUG_ANALYSIS_HPP

#include "bond_order_analysis.hpp"

#include "core_kit/basis_set.hpp"

namespace niedoida {
    namespace property {
        /**
         * @ingroup property_kit
         *
         * @brief Gopinathan-Jug bond order analysis implementation
         */
        class GopinathanAnalysis: public BondOrderAnalysis {
        public:
            GopinathanAnalysis(const core::BasisSet& basis_set,
                               const arma::mat& ort_P_alpha,
                               const arma::mat& ort_P_beta);

            const arma::mat& bond_orders() const {
                return m_bond_orders;
            };

        private:
            arma::mat m_bond_orders;
        };
    }
}

#endif
