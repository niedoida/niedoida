/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/find_symmetry_utils.hpp"
#include "symmetry_kit/symmetry_info.hpp"

namespace niedoida {
    namespace symmetry {
        void SymmetryInfo::find_symmetry_linear(const arma::mat& coords,
                                                const std::vector<unsigned>& q,
                                                const arma::vec& principal_axis,
                                                double tol_dist)
        {
            _symmetry_type = LINEAR_SYMMETRY;
            _top_type = SYMMETRIC_TOP;

            TransAcc tacc;
            const arma::mat aligned_coords =
                align(coords, principal_axis, Z_AXIS, tol_dist, &tacc);

            if (has_symmetry_plane_XYZ(aligned_coords, Z_AXIS, q, tol_dist))
                _symmetry_group = &SymmetryGroups::instance().get("D*h");
            else
                _symmetry_group = &SymmetryGroups::instance().get("C*v");

            _rotation_to_std_frame = tacc.get();
        }
    }
}
