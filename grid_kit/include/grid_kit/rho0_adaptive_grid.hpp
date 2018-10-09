/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_RHO0_ADAPTIVE_GRID_HPP
#define NIEDOIDA_GRID_KIT_RHO0_ADAPTIVE_GRID_HPP

#include "grid_kit/product_grid.hpp"
#include "grid_kit/grid_integral_implementation.hpp"
#include "core_kit/ao_value_engine_factory.hpp"

namespace niedoida {
    namespace grid {
        class Rho0AdaptiveGrid: 
            public ProductGrid, 
            private GridIntegralImplementation {
        public:
            Rho0AdaptiveGrid(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<PartitionFunction> pf, 
                std::unique_ptr<RadialGrid> rg,
                std::unique_ptr<SphericalGrid> sg,
                std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory,
                double accuracy,
                std::size_t max_no_radial_grid_points,
                std::size_t max_spherical_grid_size);

        protected:
            std::size_t spherical_grid_size(std::size_t a, double r, const PartitionFunction&, const SphericalGrid&) const override;

        private:
            double _density(const Grid::Block& block) const;

            const arma::mat _density_matrix;

            std::unique_ptr<double[]> _overlap_buf;
            double _accuracy;
            std::size_t _max_spherical_grid_size;

            mutable std::size_t _prev_atom;
            mutable std::size_t _prev_grid_index;
        };
    }
}

#endif
