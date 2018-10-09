/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

namespace niedoida {
    namespace symmetry {
        const FiniteSymmetryGroup&
        largest_abelian_subgroup(const FiniteSymmetryGroup& g)
        {
            const FiniteSymmetryGroup* h =
                dynamic_cast<const FiniteSymmetryGroup*>(
                    &SymmetryGroups::instance().get("C1"));

            for (SymmetryGroups::iterator i =
                     SymmetryGroups::instance().begin();
                 i != SymmetryGroups::instance().end();
                 ++i) {
                if ((*i).second->is_finite()) {
                    const FiniteSymmetryGroup* p =
                        dynamic_cast<const FiniteSymmetryGroup*>((*i).second);

                    if (is_subgroup(*p, g) && p->is_abelian() &&
                        p->rank() > h->rank())
                        h = p;
                }
            }

            return *h;
        }
    }
}
