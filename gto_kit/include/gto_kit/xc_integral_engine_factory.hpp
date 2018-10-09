/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_XC_KIT_XC_INTEGRAL_ENGINE_FACTORY_HPP
#define NIEDOIDA_XC_KIT_XC_INTEGRAL_ENGINE_FACTORY_HPP

#include "core_kit/integral_engine_factory.hpp"
#include "core_kit/ao_value_engine_factory.hpp"
#include "xc_kit/xc_functional.hpp"
#include "grid_kit/grid_factory.hpp"

namespace niedoida {
    namespace gto {
        class XCIntegralEngineFactory: 
            public core::QuasiOneElectronIntegralEngineFactory {
        public:
            XCIntegralEngineFactory(
                std::shared_ptr<const grid::GridFactory> grid_factory,
                std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory,
                xc::LocalXCFunctional,
                std::size_t cache_size);

            XCIntegralEngineFactory(
                std::shared_ptr<const grid::GridFactory> grid_factory,
                std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory,
                xc::GGAXCFunctional, 
                std::size_t cache_size);

            Product make(std::shared_ptr<const core::System>) const;

        private:
            std::shared_ptr<const grid::GridFactory> _grid_factory;
            std::shared_ptr<const core::AOValueEngineFactory> _ao_value_engine_factory;
            xc::LocalXCFunctional _lda;
            xc::GGAXCFunctional _gga;
            std::size_t _cache_size;
        };
    }
}

#endif
