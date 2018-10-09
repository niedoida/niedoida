/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_PRODUCT_GRID_HPP
#define NIEDOIDA_GRID_KIT_PRODUCT_GRID_HPP

#include <boost/function.hpp>

#include "misc_kit/quadratures.hpp"
#include "grid_kit/atomic_grid.hpp"
#include "core_kit/ao_value_engine_factory.hpp"

namespace niedoida {
    namespace grid {
        class RadialGrid {
        public:
            virtual ~RadialGrid() = default;

            virtual misc::Quadrature operator ()(const core::AtomicBasisSet&) const = 0;
        };

        class SphericalGrid {
        public:
            virtual ~SphericalGrid() = default;

            virtual const std::vector<std::size_t> allowed_sizes() const = 0;

            virtual std::shared_ptr<core::Grid::Block> operator ()(
                std::size_t a, 
                double r,
                std::size_t no_points,
                double threshold) const = 0;
        };

        class ProductGrid: public AtomicGrid {
        public:
            ProductGrid(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<PartitionFunction> pf, 
                std::unique_ptr<RadialGrid> rg,
                std::unique_ptr<SphericalGrid> sg,
                std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory);

        protected:
            virtual std::size_t spherical_grid_size(std::size_t a, double r, const PartitionFunction&, const SphericalGrid&) const = 0;

            std::vector<std::shared_ptr<Block> > make_atomic_grid(std::size_t a, const PartitionFunction&) const;

        private:
            std::shared_ptr<const core::System> _system;

            std::unique_ptr<RadialGrid> _rg;
            std::unique_ptr<SphericalGrid> _sg;

            std::shared_ptr<const core::AOValueEngineFactory> _ao_value_engine_factory;

            double _max_ao_value;
        };
    }
}

#endif
