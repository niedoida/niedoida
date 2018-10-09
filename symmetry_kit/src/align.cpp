/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/find_symmetry_utils.hpp"

namespace niedoida {
    namespace symmetry {
        // Rotate coords in such a way that the vec is aligned along the axis
        arma::mat align(const arma::mat& coords,
                        const arma::vec& vec,
                        Axis axis,
                        double tol_dist,
                        TransAcc* tacc_ptr)
        {
            // Rotate "coords" so that the "vec" is put on the "axis" (the unity
            // vector defining the axis, in fact).
            int axis1 = axis, axis2 = Y_AXIS, axis3 = Z_AXIS;
            // permutation of axes:
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

            const double v1 = vec(axis1);
            const double v2 = vec(axis2);
            const double v3 = vec(axis3);
            const double vec_norm = norm(vec, 2);

            const double cos_alpha = v1 / vec_norm;
            const double cos_beta = v2 / vec_norm;
            const double cos_gamma = v3 / vec_norm;

            if (std::abs(std::abs(v1) - vec_norm) < tol_dist)
                return coords; //        std::cout << "No alignment actually
                               //        needed.\n";
            else {
                arma::mat tmp_mat(3, 3);

                tmp_mat(0, 0) = cos_alpha;
                tmp_mat(0, 1) = cos_beta;
                tmp_mat(0, 2) = cos_gamma;
                tmp_mat(1, 0) = -cos_beta;
                tmp_mat(1, 1) =
                    (v2 * v2 * cos_alpha + v3 * v3) / (v2 * v2 + v3 * v3);
                tmp_mat(1, 2) =
                    v2 * v3 * (cos_alpha - 1.0) / (v2 * v2 + v3 * v3);
                tmp_mat(2, 0) = -cos_gamma;
                tmp_mat(2, 1) =
                    v2 * v3 * (cos_alpha - 1.0) / (v2 * v2 + v3 * v3);
                tmp_mat(2, 2) =
                    (v3 * v3 * cos_alpha + v2 * v2) / (v2 * v2 + v3 * v3);

                // reverse the axes permutation
                arma::mat transform(3, 3);
                switch (axis) {
                case X_AXIS:
                    transform = tmp_mat; // no permutation
                    break;
                case Y_AXIS:
                    transform(1, 1) = tmp_mat(0, 0);
                    transform(1, 2) = tmp_mat(0, 1);
                    transform(1, 0) = tmp_mat(0, 2);
                    transform(2, 1) = tmp_mat(1, 0);
                    transform(2, 2) = tmp_mat(1, 1);
                    transform(2, 0) = tmp_mat(1, 2);
                    transform(0, 1) = tmp_mat(2, 0);
                    transform(0, 2) = tmp_mat(2, 1);
                    transform(0, 0) = tmp_mat(2, 2);
                    break;
                case Z_AXIS:
                    transform(2, 2) = tmp_mat(0, 0);
                    transform(2, 0) = tmp_mat(0, 1);
                    transform(2, 1) = tmp_mat(0, 2);
                    transform(0, 2) = tmp_mat(1, 0);
                    transform(0, 0) = tmp_mat(1, 1);
                    transform(0, 1) = tmp_mat(1, 2);
                    transform(1, 2) = tmp_mat(2, 0);
                    transform(1, 0) = tmp_mat(2, 1);
                    transform(1, 1) = tmp_mat(2, 2);
                    break;
                }

                if (tacc_ptr)
                    *tacc_ptr << transform; // accumulate
                return transform * coords;
            }
        }
    }
}
