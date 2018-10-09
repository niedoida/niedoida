/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_ATOM_HPP
#define NIEDOIDA_CORE_KIT_ATOM_HPP

#include <string>

#include <armadillo>

#include "periodic_table.hpp"

namespace niedoida {
    namespace core {
        /**
         * @ingroup core_kit
         * 
         * @brief Atom.
         *
         * The class represents an atom.
         * 
         */
        class Atom {
        public:
            Atom(const Isotope& isotope, 
                 const arma::vec::fixed<3>&, 
                 const std::string& label);

            const Isotope* isotope;
            arma::vec::fixed<3> coords;
            std::string label;
        };
    }
}

#endif
