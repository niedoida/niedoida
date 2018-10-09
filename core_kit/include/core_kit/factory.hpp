/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_FACTORY_HPP
#define NIEDOIDA_CORE_KIT_FACTORY_HPP

#include <memory>

#include "system.hpp"

namespace niedoida {
    namespace core {
        template <typename T>
        class Factory {
        public:
            typedef std::unique_ptr<T> Product;

            virtual ~Factory() = default;

            virtual Product make(std::shared_ptr<const System>) const = 0;
        };
    }
}

#endif
