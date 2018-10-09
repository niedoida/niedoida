/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/find_symmetry_utils.hpp"
#include "symmetry_kit/symmetry_info.hpp"
#include "symmetry_kit/symmetry_utils.hpp"

#include <algorithm>
#include <boost/math/constants/constants.hpp>

namespace niedoida {
    namespace symmetry {
        void SymmetryInfo::find_symmetry_asymmetric_top(
            const arma::mat& passed_coords,
            const std::vector<unsigned>& q,
            const arma::vec& principal_axis,
            double tol_dist)
        {

            _symmetry_type = NON_LINEAR_SYMMETRY;
            _top_type = ASYMMETRIC_TOP;

            arma::vec Cn_principal;
            std::map<unsigned, unsigned> has_axis;
            const my_fancy_compare compare_vectors(tol_dist);
            VectorSet sigma_planes(compare_vectors);
            const my_fancy_compare_axes compare_axes(tol_dist);
            AxisSet Cn_axes(compare_axes);

            TransAcc tacc;

            arma::mat coords =
                align(passed_coords, principal_axis, Z_AXIS, tol_dist, &tacc);

            const arma::mat inert = inertia(coords, q);

            arma::vec eigenvalues;
            arma::mat eigenvectors;

            arma::eig_sym(eigenvalues, eigenvectors, inert);
            // FIXME: should we really do the transposition???
            // eigenvectors=ublas::trans(eigenvectors);

            const double theta = -atan2(eigenvectors(1, 0), eigenvectors(1, 1));

            coords = rotate_around_XYZ(coords, Z_AXIS, theta, &tacc);
            // 1a.memorise principal C2 axis:
            Cn_principal = eigenvectors.col(2);
            // 2. then align the other axes:
            //    test the planarity:
            const boost::optional<Axis> maybe_plane =
                planar_in_which_plane_XYZ(coords, tol_dist);
            if (maybe_plane)
                coords =
                    reorient_plane(coords, q, *maybe_plane, tol_dist, &tacc);

            // now test which cardinal axes are two-fold symmetry axes? Just
            // compare after rotation by pi radians
            for (unsigned axis = X_AXIS; axis <= Z_AXIS; ++axis) {
                if (is_XYZ_a_Cn_axis(
                        coords, q, static_cast<Axis>(axis), 2, tol_dist)) {
                    has_axis[axis] = 2; // add an axis of "n" order and with
                                        // "axis" label
                    std::vector<double> axis_buf(3, 0.);
                    axis_buf[axis] = 1;
                    const Cn_axis_info axis_info = {arma::vec(axis_buf), 2};
                    Cn_axes.insert(axis_info);
                    // coords are NOT in the standard orientation for now
                }
            }
            // 3. now behave accordingly to the number of C2 axes:
            switch (Cn_axes.size()) {
            case 3:
                // all the X, Y, and Z axes are C2 axes => D2 or D2H.
                // decide based on the existence of sigma_h
                for (unsigned axis = X_AXIS; axis <= Z_AXIS; ++axis) {
                    if (is_XYZ_a_Cn_axis(
                            coords, q, static_cast<Axis>(axis), 2, tol_dist)) {
                        std::vector<double> axis_buf(3, 0.);
                        axis_buf[axis] = 1;
                        const Cn_axis_info axis_info = {arma::vec(axis_buf), 2};
                        Cn_axes.insert(axis_info);
                    }
                    if (has_symmetry_plane_XYZ(
                            coords, static_cast<Axis>(axis), q, tol_dist)) {
                        std::vector<double> axis_buf(3, 0.);
                        axis_buf[axis] = 1;
                        sigma_planes.insert(arma::vec(axis_buf));
                    }
                }

                break; // end of case 3:

            case 1:
                // has 1 axis: it must be either "X" or "Y"
                if (has_axis.find(Y_AXIS) != has_axis.end()) {
                    coords = rotate_around_XYZ(
                        coords,
                        X_AXIS,
                        boost::math::double_constants::pi / 2.0,
                        &tacc);
                    // Now the std orientation achieved. Check the axes again.
                    Cn_axes.clear();
                    for (unsigned axis = X_AXIS; axis <= Z_AXIS; ++axis) {
                        if (is_XYZ_a_Cn_axis(coords,
                                             q,
                                             static_cast<Axis>(axis),
                                             2,
                                             tol_dist)) {
                            has_axis[axis] = 2; // add an axis of "n" order and
                                                // with "axis" label
                            std::vector<double> axis_buf(3, 0.);
                            axis_buf[axis] = 1;
                            const Cn_axis_info axis_info = {arma::vec(axis_buf),
                                                            2};
                            Cn_axes.insert(axis_info);
                        }
                    }
                }
                // 4. now search for a symmetry plane. If it exists, the group
                // is C2h
                if (has_symmetry_plane_XYZ(coords, Z_AXIS, q, tol_dist)) {
                    std::vector<double> axis_buf(3, 0.);
                    axis_buf[2] = 1;
                    sigma_planes.insert(
                        arma::vec(axis_buf)); //#plane def'd by normal axis
                    // This is enough to resolve the group is C2h, but there
                    // is one inv. centre remaining.
                    // Check for inversion centre:
                    if (are_equivalent(coords, inverse(coords), q, tol_dist)) {
                        std::vector<double> axis_buf(3, 0.);
                        axis_buf[2] = 1;
                        const Cn_axis_info axis_info = {arma::vec(axis_buf),
                                                        -2};
                        Cn_axes.insert(axis_info);
                    }
                } else {
                    if (has_symmetry_plane_XYZ(coords, Y_AXIS, q, tol_dist)) {
                        std::vector<double> axis_buf(3, 0.);
                        axis_buf[1] = 1;
                        sigma_planes.insert(arma::vec(axis_buf));
                        // This is enough to resolve the group is C2v, but
                        // there is one plane remaining.
                        if (has_symmetry_plane_XYZ(
                                coords, X_AXIS, q, tol_dist)) {
                            std::vector<double> axis_buf(3, 0.);
                            axis_buf[0] = 1;
                            sigma_planes.insert(arma::vec(axis_buf));
                        }
                    } // otherwise it's C2
                }

                break; // end of case 1:

            case 0:
                // no C2 axes
                // check for a symmetry centre (which implies Ci)
                if (are_equivalent(coords, inverse(coords), q, tol_dist)) {
                    std::vector<double> axis_buf(3, 0.);
                    axis_buf[2] = 1;
                    const Cn_axis_info axis_info = {arma::vec(axis_buf), -2};
                    Cn_axes.insert(axis_info);
                } else {
                    // check for a symmetry plane (which implies Cs)
                    for (unsigned axis = X_AXIS; axis <= Z_AXIS; ++axis) {
                        if (has_symmetry_plane_XYZ(
                                coords, static_cast<Axis>(axis), q, tol_dist)) {
                            std::vector<double> axis_buf(3, 0.);
                            axis_buf[axis] = 1;
                            const arma::vec axrec = arma::vec(axis_buf);
                            sigma_planes.insert(
                                axrec); // plane def'd by normal axis
                            break;
                        }
                    }
                }
                break; // end of case 0:

            default:
                break;
            }

            _rotation_to_std_frame = tacc.get();

            // prevent meaningless flipping of the molecule
            for (int i = 0; i < 3; ++i)
                // FIXME: there must be a better condition
                if (_rotation_to_std_frame.col(i).min() < -1 + 1e-6)
                    _rotation_to_std_frame.col(i) *= -1;

            // add identity E == C1
            std::vector<double> axis_buf(3, 0.);
            axis_buf[2] = 1;
            const Cn_axis_info axis_info = {arma::vec(axis_buf), 1};

            Cn_axes.insert(axis_info);

            _symmetry_group = &find_finite_group(Cn_axes, sigma_planes);
        }
    }
}
