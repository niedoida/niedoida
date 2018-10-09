/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_info.hpp"

namespace niedoida {
    namespace symmetry {
        void SymmetryInfo::downgrade_infinite_symm_group(unsigned max_axis_rep)
        {
            std::string max_rep = std::to_string(max_axis_rep);

            if (_symmetry_group->is_finite())
                _finite_symmetry_group =
                    &dynamic_cast<const FiniteSymmetryGroup&>(*_symmetry_group);

            if (_symmetry_group->name() == "Kh")
                _finite_symmetry_group =
                    &dynamic_cast<const FiniteSymmetryGroup&>(
                        SymmetryGroups::instance().get("Ih"));

            else if (_symmetry_group->name() == "D*h")
                _finite_symmetry_group =
                    &dynamic_cast<const FiniteSymmetryGroup&>(
                        SymmetryGroups::instance().get("D" + max_rep + "h"));

            else if (_symmetry_group->name() == "C*v")
                _finite_symmetry_group =
                    &dynamic_cast<const FiniteSymmetryGroup&>(
                        SymmetryGroups::instance().get("C" + max_rep + "v"));
        }
    }
}
