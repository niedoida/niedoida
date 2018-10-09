/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_NIEDOIDA_CORE_DISPERSION_HPP
#define NIEDOIDA_CORE_KIT_NIEDOIDA_CORE_DISPERSION_HPP

#include "core_kit/system.hpp"

namespace niedoida {

    namespace core {
        double grimme_d3(
            const System& system, 
            double rs6, double rs8,
            double alpha6, double alpha8,
            double s6, double s8,
            double threshold = 2000);
    }
}

#endif
