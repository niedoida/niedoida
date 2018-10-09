/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/find_symmetry_utils.hpp"
#include "symmetry_kit/symmetry_info.hpp"

namespace niedoida {
    namespace symmetry {
        void SymmetryInfo::find_symmetry_atomic(unsigned max_axis_rep)
        {
            _symmetry_type = ATOMIC_SYMMETRY;
            _top_type = SPHERIC_TOP;
            _symmetry_group = &SymmetryGroups::instance().get("Kh");
            downgrade_infinite_symm_group(max_axis_rep);
            _rotation_to_std_frame = arma::mat(3, 3, arma::fill::eye);
            _symmetrized_coords = arma::mat(1, 3, arma::fill::zeros);
        }
    }
}
