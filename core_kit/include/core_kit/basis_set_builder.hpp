/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_BASIS_SET_BUILDER_HPP
#define NIEDOIDA_CORE_KIT_BASIS_SET_BUILDER_HPP

#include "basis_set.hpp"

namespace niedoida {

    namespace core {

/**
 *  @ingroup core_kit
 *  
 *  @brief  Basis set builder for atomic bases
 *
 */
        class BasisSetBuilder {

        public:
            virtual ~BasisSetBuilder() = default;

            virtual void build_atomic_basis_set(AtomicBasisSet& abs) = 0;

        };

    }
}

#endif
