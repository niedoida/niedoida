/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "scf_kit/scf_utils.hpp"

#include <cmath>

namespace niedoida {
    namespace scf {
        double nuclear_repulsion(const std::vector<core::Atom*>& atoms)
        {
            std::size_t n = atoms.size();

            double s = 0;

            for (std::size_t a = 0; a < n; ++a) {
                const core::Atom& aa = *atoms[a];
                for (std::size_t b = 0; b < a; ++b) {
                    const core::Atom& ba = *atoms[b];
                    const double d = norm(aa.coords - ba.coords, 2);
                    s += aa.isotope->element->atomic_number *
                         ba.isotope->element->atomic_number / d;
                }
            }

            return s;
        }
    }
}
