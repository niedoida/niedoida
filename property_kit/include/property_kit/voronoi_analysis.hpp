/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_VORONOI_ANALYSIS
#define NIEDOIDA_PROPERTY_KIT_VORONOI_ANALYSIS

#include "population_analysis.hpp"

#include "grid_kit/grid_integral_implementation.hpp"
#include "core_kit/system.hpp"
#include "core_kit/promolecule.hpp"
#include "gto_kit/gto_value_engine.hpp"

namespace niedoida {
    namespace property {
        /**
         * @ingroup property_kit
         *
         * @brief Hirschfeld population analysis implementation
         */
        class VoronoiAnalysis: 
            public PopulationAnalysis,
            private grid::GridIntegralImplementation {
        public:
            VoronoiAnalysis(std::shared_ptr<const core::System> system,
                            const arma::mat& P,
                            std::unique_ptr<core::Grid> grid,
                            std::unique_ptr<core::AOValueEngine> ao_value_engine);

            arma::vec atomic_populations() const
            {
                return m_atomic_populations;
            };

        private:
            void calc_block(const core::Grid::Block&, const BlockAOData&);
            void reduce();

            arma::vec m_atomic_populations;

            const arma::mat m_P;

            std::vector<arma::vec> m_atomic_coords;

            std::unique_ptr<double[]> m_overlap_buf;
        };
    }
}

#endif
