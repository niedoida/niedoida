/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/atom.hpp"

namespace niedoida {

    namespace core {

        Atom::Atom(const Isotope& isotope,
                   const arma::vec::fixed<3>& coords,
                   const std::string& label) :
            isotope(&isotope),
            coords(coords),
            label(label)
        {
        }
    }
}
