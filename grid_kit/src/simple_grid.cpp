/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/simple_grid.hpp"

#include <limits>

#include "grid_kit/grid_utils.hpp"
#include <iostream>

namespace {
    std::size_t
    adjust_angular_size(std::size_t requested_size,
                        const std::vector<std::size_t>& allowed_sizes)
    {
        for (std::size_t i = 0; i < allowed_sizes.size(); ++i)
            if (allowed_sizes[i] >= requested_size)
                return i;

        return allowed_sizes.size() - 1;
    }
}

namespace niedoida {
    namespace grid {
        SimpleGrid::SimpleGrid(std::shared_ptr<const core::System> system,
                               std::unique_ptr<PartitionFunction> pf,
                               std::unique_ptr<RadialGrid> rg,
                               std::unique_ptr<SphericalGrid> sg,
                               std::shared_ptr<const core::AOValueEngineFactory>
                                   ao_value_engine_factory,
                               std::size_t spherical_grid_size) :
            ProductGrid(system,
                        std::move(pf),
                        std::move(rg),
                        std::move(sg),
                        ao_value_engine_factory),
            _spherical_grid_size(spherical_grid_size)
        {
            grid_orientation(*system);
        }

        std::size_t
        SimpleGrid::spherical_grid_size(std::size_t,
                                        double r,
                                        const PartitionFunction&,
                                        const SphericalGrid& sg) const
        {
            // if (r <= std::numeric_limits<double>::epsilon())
            //    return 0;

            if (r <= std::numeric_limits<double>::epsilon())
                std::cout << "argh" << std::endl;

            return adjust_angular_size(_spherical_grid_size,
                                       sg.allowed_sizes());
        }
    }
}
