/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

namespace niedoida {
    std::shared_ptr<core::System> deep_copy(const core::System& old_system)
    {
        std::shared_ptr<core::System> new_system(new core::System);

        const std::size_t no_atoms = old_system.atoms.size();

        for (std::size_t a = 0; a < no_atoms; ++a) {
            const core::Atom& old_atom = *old_system.atoms[a];
            new_system->atoms.push_back(new core::Atom(
                *old_atom.isotope, old_atom.coords, old_atom.label));
        }

        for (std::size_t a = 0; a < no_atoms; ++a) {
            const core::AtomicBasisSet& old_abs =
                *old_system.basis_set.atomic_basis_sets()[a];

            core::Atom& new_atom = *new_system->atoms[a];
            core::AtomicBasisSet& new_abs =
                new_system->basis_set.add_atomic_basis_set(new_atom);

            const std::size_t no_shells = old_abs.valence_shells().size();

            for (std::size_t s = 0; s < no_shells; ++s) {
                const core::Shell& old_shell = *old_abs.valence_shells()[s];
                core::Shell& new_shell = new_abs.add_valence_shell();

                new_shell.fill(old_shell.l(),
                               old_shell.primitive_exps(),
                               old_shell.contraction_coeffs());
            }
        }

        new_system->promolecule = old_system.promolecule;
        new_system->multiplicity = old_system.multiplicity;
        new_system->charge = old_system.charge;

        return new_system;
    }
}
