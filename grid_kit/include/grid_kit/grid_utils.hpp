/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_GRID_UTILS_HPP
#define NIEDOIDA_GRID_KIT_GRID_UTILS_HPP

#include "core_kit/ao_value_engine.hpp"
#include "core_kit/grid.hpp"
#include "core_kit/system.hpp"

namespace niedoida {
    namespace grid {
//        ublas::symmetric_matrix<double> overlap(
//            boost::shared_ptr<const System>, 
//            std::unique_ptr<AOValueEngine>, 
//            const Grid&);

        std::vector<double> max_ao_values(
            const core::System&,
            const core::AOValueEngine&);

        double max_ao_value(
            const core::System&,
            const core::AOValueEngine&);

        arma::mat grid_orientation(const core::System& s);
    }
}

#endif
