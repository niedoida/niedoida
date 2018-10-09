/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_HIRSHFELD_ANALYSIS
#define NIEDOIDA_PROPERTY_KIT_HIRSHFELD_ANALYSIS

#include "property_kit/population_analysis.hpp"

#include "core_kit/system.hpp"
#include "core_kit/promolecule.hpp"
#include "core_kit/grid.hpp"

#include "grid_kit/grid_integral_implementation.hpp"
#include "gto_kit/gto_value_engine.hpp"

#include <boost/multi_array.hpp>

namespace niedoida {
    namespace property {
        /**
         * @ingroup property_kit
         *
         * @brief Hirshfeld population analysis implementation
         */
        class HirshfeldAnalysis: 
            public PopulationAnalysis,
            private grid::GridIntegralImplementation {
        public:
            HirshfeldAnalysis(std::shared_ptr<const core::System> system,
                              const arma::mat& P,
                              std::shared_ptr<const core::Promolecule> promolecule,
                              std::unique_ptr<core::Grid> grid,
                              std::unique_ptr<core::AOValueEngine> ao_value_engine);

            arma::vec atomic_populations() const
            {
                return m_atomic_populations;
            };

        private:
            void calc_block1(const core::Grid::Block&);
            void calc_block2(const BlockAOData&);
            void calc_block(const core::Grid::Block&, const BlockAOData&);
            void reduce();

            arma::vec m_atomic_populations;

            const arma::mat m_P;
            const arma::mat m_P0;
            std::vector<arma::mat> m_PA;

            std::unique_ptr<double[]> m_overlap_buf;
        };
    }
}

#endif
