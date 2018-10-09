/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_AO_VALUE_ENGINE_HPP
#define NIEDOIDA_CORE_KIT_AO_VALUE_ENGINE_HPP

#include <vector>

#include <armadillo>

namespace niedoida {
    namespace core {
        class AOValueEngine {
        public:
            virtual ~AOValueEngine() = default;

            virtual void calc(
                const arma::vec::fixed<3>& coords, 
                const std::vector<std::size_t>& significant_shells, 
                double* const values, 
                double* const derivs = 0,
                double* const derivs2 = 0) const = 0;
        };
    }
}

#endif
