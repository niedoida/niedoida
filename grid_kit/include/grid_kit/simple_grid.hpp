/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_SIMPLE_GRID_HPP
#define NIEDOIDA_GRID_KIT_SIMPLE_GRID_HPP

#include "grid_kit/product_grid.hpp"

namespace niedoida {
    namespace grid {
        class SimpleGrid: public ProductGrid {
        public:
            SimpleGrid(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<PartitionFunction> pf, 
                std::unique_ptr<RadialGrid> rg,
                std::unique_ptr<SphericalGrid> sg,
                std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory,
                std::size_t spherical_grid_size);

        protected:
            std::size_t spherical_grid_size(std::size_t a, double r, const PartitionFunction&, const SphericalGrid&) const;

            std::size_t _spherical_grid_size;
        };
    }
}

#endif
