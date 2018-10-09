/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/xc_integral_engine_factory.hpp"

#include "core_kit/core_utils.hpp"
#include "core_kit/grid.hpp"
#include "gto_kit/xc_integral_engine.hpp"

#include "gto_kit/gto_utils.hpp"

namespace niedoida {
    namespace gto {
        XCIntegralEngineFactory::XCIntegralEngineFactory(
            std::shared_ptr<const grid::GridFactory> grid_factory,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            xc::LocalXCFunctional lda,
            std::size_t cache_size) :
            _grid_factory(grid_factory),
            _ao_value_engine_factory(ao_value_engine_factory),
            _lda(lda),
            _gga(0),
            _cache_size(cache_size)
        {
        }

        XCIntegralEngineFactory::XCIntegralEngineFactory(
            std::shared_ptr<const grid::GridFactory> grid_factory,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            xc::GGAXCFunctional gga,
            std::size_t cache_size) :
            _grid_factory(grid_factory),
            _ao_value_engine_factory(ao_value_engine_factory),
            _lda(0),
            _gga(gga),
            _cache_size(cache_size)
        {
        }

        XCIntegralEngineFactory::Product XCIntegralEngineFactory::make(
            std::shared_ptr<const core::System> system) const
        {
            std::unique_ptr<core::Grid> grid(_grid_factory->make(system));

            if (_lda)
                return std::unique_ptr<core::QuasiOneElectronIntegralEngine>(
                    new XCIntegralEngine(system,
                                         std::move(grid),
                                         _ao_value_engine_factory,
                                         _lda,
                                         _cache_size));
            else
                return std::unique_ptr<core::QuasiOneElectronIntegralEngine>(
                    new XCIntegralEngine(system,
                                         std::move(grid),
                                         _ao_value_engine_factory,
                                         _gga,
                                         _cache_size));
        }
    }
}
