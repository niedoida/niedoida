/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_CHARGE_HPP
#define NIEDOIDA_CORE_KIT_CHARGE_HPP

#include <armadillo>

namespace niedoida {
    namespace core {
        /**
         * @ingroup core_kit
         * 
         * @brief Charge.
         *
         * The class represents an arbitraty charge at some given position.
         * 
         */
        class Charge {
        public:
	  Charge(const arma::vec::fixed<3>& coords, 
	  	 double charge_value) :
	    coords(coords),
	    charge_value(charge_value) {
	  }
	  arma::vec::fixed<3> coords;
	  double charge_value; 
        };
    }
}

#endif
