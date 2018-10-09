/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_SIMPLE_SPHERICAL_GRID_HPP
#define NIEDOIDA_GRID_KIT_SIMPLE_SPHERICAL_GRID_HPP

#include "grid_kit/product_grid.hpp"

#include <armadillo>

namespace niedoida {
    namespace grid {
        class SimpleSphericalGrid: public SphericalGrid {
        public:
            SimpleSphericalGrid(
                std::shared_ptr<const core::System> system,
                std::function<double (const core::Shell&, double)> shell_range);

        protected:
            boost::function<double (const core::Shell&, double)> _shell_range;

            std::vector<std::size_t> _allowed_sizes;

            std::vector<arma::vec3> _atom_coords;
            std::vector<const core::Shell*> _shells;
            std::vector<arma::vec3> _shell_coords;

            mutable std::size_t _prev_a;
            mutable double _prev_r;
            mutable double _prev_threshold;

            mutable std::vector<double> _shell_ranges;
            mutable std::vector<std::size_t> _significant_sphere_shells;
        };
    }
}

#endif
