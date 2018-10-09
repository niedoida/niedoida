/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_MAYER_ANALYSIS_HPP
#define NIEDOIDA_PROPERTY_KIT_MAYER_ANALYSIS_HPP

#include "bond_order_analysis.hpp"

#include "core_kit/basis_set.hpp"

#include <boost/numeric/ublas/vector.hpp>

namespace niedoida {
    namespace property {
        /**
         * @ingroup property_kit
         *
         * @brief Mayer bond order analysis implementation
         */
        class MayerAnalysis: public BondOrderAnalysis {
        public:
            MayerAnalysis(const core::BasisSet& basis_set,
                          const arma::mat& P_alpha,
                          const arma::mat& P_beta);

            const arma::mat& bond_orders() const {
                return m_bond_orders;
            };

            const arma::vec& free_valences() const {
                return m_free_valences;
            };

            const arma::vec& total_valences() const {
                return m_total_valences;
            };

        private:
            arma::mat m_bond_orders;
            arma::vec m_free_valences;
            arma::vec m_total_valences;
        };
    }
}

#endif
