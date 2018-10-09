/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

namespace niedoida {
    std::shared_ptr<const core::QuasiOneElectronIntegralEngineFactory>
    create_xc_ie_factory(const InputData& input_data,
                         boost::variant<xc::NoneXCFunctional,
                                        xc::LocalXCFunctional,
                                        xc::GGAXCFunctional> xc_functional,
                         std::shared_ptr<const grid::GridFactory> grid_factory,
                         std::shared_ptr<const core::AOValueEngineFactory>
                             ao_value_engine_factory)
    {
        std::shared_ptr<const core::QuasiOneElectronIntegralEngineFactory>
            xc_ie_factory;

        const std::size_t ao_cache_size =
            input_data.grid_params.cache_size * storage_unit_factor(input_data);

        if (boost::get<xc::LocalXCFunctional>(&xc_functional)) {
            xc_ie_factory.reset(new gto::XCIntegralEngineFactory(
                grid_factory,
                ao_value_engine_factory,
                boost::get<xc::LocalXCFunctional>(xc_functional),
                ao_cache_size));
        } else if (boost::get<xc::GGAXCFunctional>(&xc_functional)) {
            xc_ie_factory.reset(new gto::XCIntegralEngineFactory(
                grid_factory,
                ao_value_engine_factory,
                boost::get<xc::GGAXCFunctional>(xc_functional),
                ao_cache_size));
        }

        return xc_ie_factory;
    }
}
