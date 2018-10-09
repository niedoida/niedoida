/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/find_symmetry_utils.hpp"
#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_info.hpp"
#include "symmetry_kit/symmetry_utils.hpp"

#include <algorithm>

namespace niedoida {
    namespace symmetry {
        SymmetryInfo::SymmetryInfo(const arma::mat& coords_start,
                                   const std::vector<unsigned>& q,
                                   double tol_dist,
                                   unsigned max_axis_rep,
                                   double tol_eigenvectors)
        {
            arma::mat coords = coords_start;
            _translation_to_std_frame = transform_to_mass_center(coords, q);
            // single atoms are easy to deal with
            if (q.size() == 1) {
                find_symmetry_atomic(max_axis_rep);
            } else {
                // diagonalize the tensor of inertia (from the relations
                // between eigenvalues we can find out what type of symmetry
                // we're dealing with)
                arma::vec eigenvalues;
                arma::mat eigenvectors;
                arma::eig_sym(eigenvalues, eigenvectors, inertia(coords, q));

                // based on the pricipal values of the inertia tensor, dispatch
                // the work to function specific for the symmetry type at hand
                if ((eigenvalues(0) < 1e-2) || (eigenvalues(1) < 1e-2) ||
                    (eigenvalues(2) < 1e-2)) {
                    find_symmetry_linear(
                        coords, q, eigenvectors.col(0), tol_dist);
                } else {
                    const double diff_01 =
                        std::abs(eigenvalues[0] - eigenvalues[1]);
                    const double diff_12 =
                        std::abs(eigenvalues[1] - eigenvalues[2]);
                    const double diff_02 =
                        std::abs(eigenvalues[0] - eigenvalues[2]);

                    if (diff_01 < tol_eigenvectors ||
                        diff_12 < tol_eigenvectors ||
                        diff_02 < tol_eigenvectors) {
                        if (diff_01 + diff_12 + diff_02 <
                            3 * tol_eigenvectors) {
                            find_symmetry_spheric_top(coords, q, tol_dist);
                        } else {
                            find_symmetry_symmetric_top(
                                coords, q, tol_dist, tol_eigenvectors);
                        }
                    } else {
                        boost::optional<Cn_axis_info> axis_info =
                            find_principal_axis_from_eigenvectors(
                                coords, q, eigenvectors, tol_dist);
                        arma::vec principal_axis = eigenvectors.col(2);
                        find_symmetry_asymmetric_top(
                            coords, q, principal_axis, tol_dist);
                    }
                }
            }
            // fill in the remaining symmetry information
            downgrade_infinite_symm_group(max_axis_rep);
            arma::mat sf_coords = _rotation_to_std_frame * coords;
            for (std::size_t i = 0; i < _finite_symmetry_group->rank(); ++i) {
                _perm_rep.push_back(
                    create_perm_rep(_finite_symmetry_group->elements()[i],
                                    sf_coords,
                                    tol_dist));
            }

            symmetrize_coords(sf_coords);
        }
    }
}
