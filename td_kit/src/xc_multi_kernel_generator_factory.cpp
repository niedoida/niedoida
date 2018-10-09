/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/xc_kernel_generator.hpp"

namespace niedoida {
    namespace td {
        XCMultiKernelGeneratorFactory::XCMultiKernelGeneratorFactory(
            std::shared_ptr<const grid::GridFactory> grid_factory,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            xc::XCFunctional xc_functional,
            std::size_t max_cache_size) :
            _grid_factory(grid_factory),
            _ao_value_engine_factory(ao_value_engine_factory),
            _xc_functional(xc_functional),
            _max_cache_size(max_cache_size)
        {
        }

        XCMultiKernelGeneratorFactory::Product
        XCMultiKernelGeneratorFactory::make(
            std::shared_ptr<const core::System> system) const
        {
            std::unique_ptr<XCMultiKernelGenerator> p;

            p.reset(new XCMultiKernelGenerator(system,
                                               _grid_factory->make(system),
                                               _ao_value_engine_factory,
                                               _xc_functional,
                                               _max_cache_size));

            return p;
        }
    }
}
