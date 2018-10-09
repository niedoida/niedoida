/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_POPULATION_ANALYSIS_HPP
#define NIEDOIDA_PROPERTY_KIT_POPULATION_ANALYSIS_HPP

#include "core_kit/core_utils.hpp"
#include "core_kit/atom.hpp"
#include "core_kit/basis_set.hpp"
#include "core_kit/spin.hpp"
#include "core_kit/promolecule.hpp"
#include "core_kit/grid.hpp"

namespace niedoida {
    namespace property {
        /**
         * @ingroup property_kit
         * 
         * @brief Base class for any population analysis
         */
        class PopulationAnalysis: public boost::noncopyable {
        public:
            virtual ~PopulationAnalysis() {}
            virtual arma::vec atomic_populations() const = 0;
        };

        /**
         * @ingroup property_kit
         * 
         * @brief Base class for any orbital-resolution population analysis
         */
        class DetailedPopulationAnalysis: public PopulationAnalysis {
        public:
            virtual arma::vec orbital_populations() const = 0;
        };
    }
}
#endif

