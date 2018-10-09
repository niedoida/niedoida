/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_GL_SPHERICAL_GRID_HPP
#define NIEDOIDA_GRID_KIT_GL_SPHERICAL_GRID_HPP

#include "grid_kit/simple_spherical_grid.hpp"

namespace niedoida {
    namespace grid {
        class GLSphericalGrid: public SimpleSphericalGrid {
        public:
            GLSphericalGrid(
                std::shared_ptr<const core::System> system,
                boost::function<double (const core::Shell&, double)> shell_range);

            const std::vector<std::size_t> allowed_sizes() const;

            std::shared_ptr<core::Grid::Block> operator ()(
                std::size_t a, 
                double r,
                std::size_t size_index,
                double threshold) const override;

        private:
            std::vector<std::size_t> _allowed_sizes;
        };
    }
}

#endif
