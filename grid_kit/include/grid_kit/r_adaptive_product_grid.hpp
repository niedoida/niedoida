/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_R_ADAPTIVE_PRODUCT_GRID_HPP
#define NIEDOIDA_GRID_KIT_R_ADAPTIVE_PRODUCT_GRID_HPP

#include "grid_kit/product_grid.hpp"
#include "grid_kit/grid_integral_implementation.hpp"

namespace niedoida {
    namespace grid {
        class RAdaptiveProductGrid: 
            public AtomicGrid,
            private GridIntegralImplementation {
        public:
            RAdaptiveProductGrid(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<PartitionFunction> pf, 
                std::unique_ptr<SphericalGrid> sg,
                std::unique_ptr<core::AOValueEngine> ao_value_engine,
                double accuracy,
                std::size_t max_radial_grid_size,
                std::size_t max_spherical_grid_size);

        protected:
            std::vector<std::shared_ptr<Block>> make_atomic_grid(std::size_t a, const PartitionFunction&) const override;

            std::pair<double, unsigned> adapt_spherical_grid(double) const;

        private:
            typedef std::vector<std::pair<double,unsigned> > DistanceAngularSizes;
            mutable std::vector<DistanceAngularSizes> _distance_angular_sizes;

            double _density(const Grid::Block& block) const;

            std::shared_ptr<const core::System> _system;
            std::unique_ptr<SphericalGrid> _sg;

            double _accuracy;
            double _angular_accuracy;
            std::size_t _max_radial_grid_size;
            std::size_t _max_spherical_grid_size;

            const arma::mat _density_matrix;
            std::unique_ptr<double[]> _overlap_buf;

            mutable const PartitionFunction* _pf;
            mutable std::size_t _curr_atom;
            mutable std::size_t _prev_atom;
            mutable std::size_t _prev_grid_size;
        };
    }
}

#endif
