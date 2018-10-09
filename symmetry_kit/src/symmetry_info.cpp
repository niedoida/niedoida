/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_info.hpp"

namespace niedoida {
    namespace symmetry {
        SymmetryInfo::SymmetryType SymmetryInfo::symmetry_type() const
        {
            return _symmetry_type;
        }

        SymmetryInfo::TopType SymmetryInfo::top_type() const
        {
            return _top_type;
        }

        const SymmetryGroup& SymmetryInfo::symmetry_group() const
        {
            return *_symmetry_group;
        }

        const FiniteSymmetryGroup& SymmetryInfo::finite_symmetry_group() const
        {
            return *_finite_symmetry_group;
        }

        const arma::mat& SymmetryInfo::rotation_to_std_frame() const
        {
            return _rotation_to_std_frame;
        }

        const arma::vec& SymmetryInfo::translation_to_std_frame() const
        {
            return _translation_to_std_frame;
        }

        const arma::mat& SymmetryInfo::symmetrized_coords() const
        {
            return _symmetrized_coords;
        }

        const std::vector<std::vector<unsigned>>& SymmetryInfo::perm_rep() const
        {
            return _perm_rep;
        }

        const std::vector<unsigned>& SymmetryInfo::unique_atoms() const
        {
            return _unique_atoms;
        }
    }
}
