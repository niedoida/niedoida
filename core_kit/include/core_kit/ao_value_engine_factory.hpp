/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_AO_VALUE_ENGINE_FACTORY_HPP
#define NIEDOIDA_CORE_KIT_AO_VALUE_ENGINE_FACTORY_HPP

#include "core_kit/factory.hpp"
#include "core_kit/ao_value_engine.hpp"

namespace niedoida {

    namespace core {

        class AOValueEngineFactory: 
            public Factory<AOValueEngine> {
        };

    }
}
#endif
