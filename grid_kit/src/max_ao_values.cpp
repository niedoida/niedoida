/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/grid_utils.hpp"

#include <numeric>

namespace niedoida {
    namespace grid {
        std::vector<double>
        max_ao_values(const core::System& system,
                      const core::AOValueEngine& ao_value_engine)
        {
            const std::size_t no_atoms = system.atoms.size();

            std::size_t no_shells = 0;
            for (std::size_t a = 0; a < no_atoms; ++a)
                no_shells += system.basis_set.atomic_basis_sets()[a]
                                 ->valence_shells()
                                 .size();

            std::vector<std::size_t> all_shells(no_shells);
            std::iota(all_shells.begin(), all_shells.end(), 0);

            const std::size_t no_contractions = system.basis_set.real_size();
            std::unique_ptr<double[]> buf(new double[no_contractions]);

            std::vector<double> results;
            for (std::size_t a = 0; a < system.atoms.size(); ++a) {
                // FIXME: check only shells located on given atom
                ao_value_engine.calc(
                    system.atoms[a]->coords, all_shells, buf.get());
                results.push_back(
                    *std::max_element(buf.get(), buf.get() + no_contractions));
            }

            return results;
        }

        double max_ao_value(const core::System& system,
                            const core::AOValueEngine& ao_value_engine)
        {
            std::vector<double> t = max_ao_values(system, ao_value_engine);
            return *std::max_element(t.begin(), t.end());
        }
    }
}
