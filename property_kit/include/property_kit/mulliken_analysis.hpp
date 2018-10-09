/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_MULLIKEN_ANALYSIS_HPP
#define NIEDOIDA_PROPERTY_KIT_MULLIKEN_ANALYSIS_HPP

#include "population_analysis.hpp"

namespace niedoida {
    namespace property {
        /**
         * @ingroup property_kit
         *
         * @brief Mulliken population analysis implementation
         */
        class MullikenAnalysis: public DetailedPopulationAnalysis {
        public:
            MullikenAnalysis(const core::BasisSet& basis_set,
                             const arma::mat& S,
                             const arma::mat& P_alpha,
                             const arma::mat& P_beta);

            const arma::vec& atomic_populations(core::Spin s) const {
                return m_atomic_populations[s];
            };

            arma::vec atomic_populations() const {
                return 
                    m_atomic_populations[core::SPIN_ALPHA] + 
                    m_atomic_populations[core::SPIN_BETA];
            };

            arma::vec orbital_populations() const {
                return 
                    m_orbital_populations[core::SPIN_ALPHA] + 
                    m_orbital_populations[core::SPIN_BETA];
            };

            arma::mat overlap_populations() const {
                return 
                    m_overlap_populations[core::SPIN_ALPHA] + 
                    m_overlap_populations[core::SPIN_BETA];
            };

            const arma::mat& overlap_populations(core::Spin s) const {
                return m_overlap_populations[s];
            };

        private:
            arma::vec m_atomic_populations[core::NO_SPINS];
            arma::vec m_orbital_populations[core::NO_SPINS];
            arma::mat m_overlap_populations[core::NO_SPINS];
        };
    }
}

#endif

