/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_BADER_ANALYSIS
#define NIEDOIDA_PROPERTY_KIT_BADER_ANALYSIS

#include "population_analysis.hpp"

#include "core_kit/system.hpp"
#include "gto_kit/gto_value_engine.hpp"
#include "grid_kit/grid_integral_implementation.hpp"

#include <boost/multi_array.hpp>

namespace niedoida {
    namespace property {
        /**
         * @ingroup property_kit
         *
         * @brief Bader population analysis implementation
         */
        class BaderAnalysis: 
            public PopulationAnalysis,
            private grid::GridIntegralImplementation {
        public:
            BaderAnalysis(std::shared_ptr<const core::System> system,
                          const arma::mat& P,
                          std::unique_ptr<core::AOValueEngine> ao_value_engine);

            arma::vec atomic_populations() const
            {
                return m_atomic_populations;
            };

        private:
            double density(
                const arma::mat& P,
                const boost::multi_array<double, 2>& ao_values_buf);

            void assign(
                const boost::multi_array<double, 3>& cube,
                boost::multi_array<unsigned, 3>& cell_assignements);

            arma::vec m_atomic_populations;
        };
    }
}

#endif
