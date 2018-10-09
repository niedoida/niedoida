/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/find_symmetry_utils.hpp"
#include "symmetry_kit/symmetry_utils.hpp"

#include <algorithm>
#include <boost/math/constants/constants.hpp>
#include <cmath>

namespace niedoida {
    namespace symmetry {
        using namespace boost::math::double_constants;

        arma::vec
        rotate(const arma::vec& coords, const arma::vec& axis, double angle)
        {
            assert(coords.size() == 3);
            assert(axis.size() == 3);

            const arma::vec norm_axis = normalise(axis, 2);

            const double s2 = std::sin(0.5 * angle);
            const double c2 = std::cos(0.5 * angle);

            boost::math::quaternion<double> q(
                c2, s2 * norm_axis(0), s2 * norm_axis(1), s2 * norm_axis(2));

            return rotation_matrix(q) * coords;
        }

        arma::mat rotate_around_XYZ(const arma::mat& coords,
                                    Axis axis,
                                    double angle,
                                    TransAcc* tacc_ptr = 0)
        {
            Axis axis1 = axis, axis2 = Y_AXIS, axis3 = Z_AXIS;

            switch (axis) {
            case X_AXIS:
                axis2 = Y_AXIS;
                axis3 = Z_AXIS;
                break;
            case Y_AXIS:
                axis2 = Z_AXIS;
                axis3 = X_AXIS;
                break;
            case Z_AXIS:
                axis2 = X_AXIS;
                axis3 = Y_AXIS;
                break;
            }

            arma::mat transform(3, 3);
            transform(axis1, axis1) = 1.0;
            transform(axis1, axis2) = 0.0;
            transform(axis1, axis3) = 0.0;
            transform(axis2, axis1) = 0.0;
            transform(axis2, axis2) = cos(angle);
            transform(axis2, axis3) = sin(angle);
            transform(axis3, axis1) = 0.0;
            transform(axis3, axis2) = -sin(angle);
            transform(axis3, axis3) = cos(angle);

            if (tacc_ptr)
                *tacc_ptr << transform; // accumulate

            return transform * coords;
        }

        // Check if every atom in coords_1 has an equivalent atom in coords_2.
        bool are_equivalent(const arma::mat& coords_1,
                            const arma::mat& coords_2,
                            const std::vector<unsigned>& q,
                            double tol_dist)
        {
            assert(coords_1.n_cols == coords_2.n_cols);

            const std::size_t n = coords_1.n_cols;
            for (std::size_t i = 0; i < n; ++i) {
                const arma::vec& atom_1 = coords_1.col(i);
                bool flag = false;
                for (std::size_t j = 0; j < n; ++j) {
                    const arma::vec& atom_2 = coords_2.col(j);
                    if ((q[i] == q[j]) &&
                        (arma::norm(atom_1 - atom_2, 2) <= tol_dist))
                        flag = true;
                }
                if (!flag)
                    return false;
            }
            return true;
        }

        arma::mat reflect_XYZ(const arma::mat& coords, Axis axis)
        {
            arma::mat reflection = arma::mat(3, 3, arma::fill::eye);
            reflection(axis, axis) = -1;
            return reflection * coords;
        }

        bool has_symmetry_plane_XYZ(const arma::mat& coords,
                                    Axis axis,
                                    const std::vector<unsigned>& q,
                                    double tol_dist)
        {
            return are_equivalent(
                coords, reflect_XYZ(coords, axis), q, tol_dist);
        }

        // Returns the "coords" reflected against plane given by the normal
        // "vec". Such operation is a C2 proper rotation followed by inversion
        arma::mat reflect_perp_plane(const arma::mat& coords,
                                     const arma::vec& vec)
        {
            const Cn_axis_info axis = {vec, 2};
            return inverse(rotate_axis_angle(coords, axis));
        }

        // Returns the coords rotated around axis.vec by angle derived from
        // axis.fold When axis.fold < 0, then improper rotation is performed
        arma::mat rotate_axis_angle(const arma::mat& coords,
                                    const Cn_axis_info& axis)
        {
            arma::vec vec = axis.vec;
            const double norm_of_axis = norm(vec, 2);
            if (norm_of_axis < 1e-8)
                return coords;

            const double angle = 2 * pi / std::abs(axis.fold);
            vec = normalise(vec, 2);
            const double sin_angle_2 = std::sin(0.5 * angle);
            const double cos_angle_2 = std::cos(0.5 * angle);
            const arma::vec t = sin_angle_2 * vec;
            boost::math::quaternion<double> q(cos_angle_2, t(0), t(1), t(2));

            if (axis.fold < 0)
                return reflect_perp_plane(rotation_matrix(q) * coords, vec);
            else
                return rotation_matrix(q) * coords;
        }

        // If coords represent a molecule which is planar AND lies in cartesian
        // plane, return the axis perpendicular to the plane
        boost::optional<Axis> planar_in_which_plane_XYZ(const arma::mat& coords,
                                                        double tol_dist)
        {
            const std::size_t n_atoms = coords.n_cols;

            for (unsigned axis = X_AXIS; axis <= Z_AXIS; ++axis) {
                bool found = true;
                for (unsigned i = 0; i < n_atoms; ++i) {
                    if (std::abs(coords.col(i)(axis)) > tol_dist) {
                        found = false;
                        break;
                    }
                }
                if (found)
                    return boost::optional<Axis>(Axis(axis));
            }
            return boost::optional<Axis>();
        }

        arma::mat reorient_plane(const arma::mat& coords,
                                 const std::vector<unsigned>& q,
                                 Axis axis,
                                 double tol_dist,
                                 TransAcc* tacc_ptr)
        {
            const arma::mat new_inertia = inertia(coords, q);

            arma::vec eigenvalues;
            arma::mat eigenvectors;

            arma::eig_sym(eigenvalues, eigenvectors, new_inertia);

            // the X_AXIS case
            double vec2 = eigenvectors(2, 1);
            double vec3 = eigenvectors(2, 2);

            switch (axis) {
            case X_AXIS:
                break;
            case Y_AXIS:
                vec2 = eigenvectors(2, 0);
                vec3 = eigenvectors(2, 2);
                break;
            case Z_AXIS:
                vec2 = eigenvectors(1, 0);
                vec3 = eigenvectors(1, 1);
                break;
            }

            if (std::abs(vec2) >= tol_dist) {
                const double theta = -atan2(vec2, vec3);
                return rotate_around_XYZ(coords, axis, theta, tacc_ptr);
            }

            return coords;
        }

        bool is_XYZ_a_Cn_axis(const arma::mat& coords,
                              const std::vector<unsigned>& q,
                              Axis axis,
                              unsigned n,
                              double tol_dist)
        {
            const arma::mat new_coords =
                rotate_around_XYZ(coords, axis, 2 * pi / (unsigned)n);

            return are_equivalent(coords, new_coords, q, tol_dist);
        }

        arma::mat inverse(const arma::mat& coords) { return -coords; }
    }
}
