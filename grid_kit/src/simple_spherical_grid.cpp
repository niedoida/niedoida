/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/simple_spherical_grid.hpp"

namespace {

    using namespace niedoida;

    inline arma::vec atom_coords(const core::Atom& atom)
    {
        arma::vec coords = atom.coords;
        return coords;
    }

    inline arma::vec shell_coords(const core::Shell& s)
    {
        return atom_coords(s.atomic_basis_set().atom());
    }
}

namespace niedoida {
    namespace grid {
        SimpleSphericalGrid::SimpleSphericalGrid(
            std::shared_ptr<const core::System> system,
            std::function<double(const core::Shell&, double)> shell_range) :
            _shell_range(shell_range),
            _prev_a(5000),
            _prev_r(1e50),
            _prev_threshold(-10)
        {
            for (const core::AtomicBasisSet* abs :
                 system->basis_set.atomic_basis_sets())
                for (auto shell : abs->valence_shells())
                    _shells.push_back(shell);

            for (const core::Atom* atom : system->atoms)
                _atom_coords.push_back(atom_coords(*atom));

            for (const core::Shell* shell : _shells)
                _shell_coords.push_back(shell_coords(*shell));
        }
    }
}
