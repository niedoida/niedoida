/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

namespace niedoida {
    void update_coords(core::System& system, Vec coords)
    {
        const std::size_t no_atoms = system.atoms.size();

        for (std::size_t a = 0; a < no_atoms; ++a) {
            core::Atom& atom = *system.atoms[a];
            for (int k = 0; k < 3; ++k) {
                int ix = 3 * a + k;
                VecGetValues(coords, 1, &ix, atom.coords.memptr() + k);
                atom.coords[k] /= COORDS_SCALE;
            }
        }

        // update_center_of_mass(system);
        update_symmetry_info(system, 1e-3);
    }
}
