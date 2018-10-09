/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_LOWDIN_ANALYSIS_HPP
#define NIEDOIDA_PROPERTY_KIT_LOWDIN_ANALYSIS_HPP

#include "population_analysis.hpp"

namespace niedoida {
    namespace property {
        /**
         * @ingroup core_kit
         *
         * @brief Lowdin population analysis implementation
         */
        class LowdinAnalysis: public DetailedPopulationAnalysis {
        public:
            // The contructor. Note that density matrices should already be
            // in orthogonalized AO basis
            LowdinAnalysis(const core::BasisSet& basis_set,
                           const arma::mat& ort_P_alpha,
                           const arma::mat& ort_P_beta);

            const arma::vec& atomic_populations(core::Spin s) const
            {
                return m_atomic_populations[s];
            }

            arma::vec atomic_populations() const {
                return m_atomic_populations[core::SPIN_ALPHA]+m_atomic_populations[core::SPIN_BETA];
            };

            arma::vec orbital_populations() const
            {
                return m_orbital_populations[core::SPIN_ALPHA]+m_orbital_populations[core::SPIN_BETA];
            }

        private:
            arma::vec m_atomic_populations[core::NO_SPINS];
            arma::vec m_orbital_populations[core::NO_SPINS];
        };
    }
}

#endif
