/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "core_kit/core_utils.hpp"

namespace niedoida {
    void print_basis_set(io::Logger& log, const core::BasisSet& bs)
    {
        const std::size_t no_atoms = bs.atomic_basis_sets().size();

        for (std::size_t a = 0; a < no_atoms; ++a) {
            const core::AtomicBasisSet& abs = *bs.atomic_basis_sets()[a];
            const std::size_t no_shells = abs.valence_shells().size();

            log.write(io::Logger::NORMAL,
                      "element",
                      abs.atom().isotope->element->symbol);
            log.write(io::Logger::NORMAL, "no_shells", no_shells);

            for (std::size_t s = 0; s < no_shells; ++s) {
                const core::Shell& shell = *abs.valence_shells()[s];
                std::string t;
                for (unsigned l : shell.l())
                    t += core::l_to_shell_symbol(l);
                log.write(io::Logger::NORMAL, "type", t);
                log.write(io::Logger::NORMAL, "exps", shell.primitive_exps());
                log.write(
                    io::Logger::NORMAL, "coeffs", shell.contraction_coeffs());
            }
        }
    }
}
