/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/find_symmetry_utils.hpp"

namespace niedoida {
    namespace symmetry {

        boost::optional<Cn_axis_info>
        find_principal_axis_from_eigenvectors(const arma::mat& coords,
                                              const std::vector<unsigned>& q,
                                              const arma::mat& eigenvectors,
                                              double tol_dist)
        {
            for (int n = 8; n >= 2; --n) {
                // check for Cn

                // Find the plane containing that triangle and the vector
                // normal to that plane passing through (0,0,0). Such
                // vector is to be checked for the existance of Cn.
                for (unsigned eigInd = 0; eigInd < eigenvectors.n_cols;
                     eigInd++) {
                    Cn_axis_info axis_info = {eigenvectors.col(eigInd), n};
                    if (are_equivalent(coords,
                                       rotate_axis_angle(coords, axis_info),
                                       q,
                                       tol_dist)) {
                        return axis_info;
                    }
                }
            } // for(n)
            return boost::optional<Cn_axis_info>();
        }

        boost::optional<Cn_axis_info>
        find_principal_axis(const arma::mat& coords,
                            const std::vector<unsigned>& q,
                            double tol_dist)
        {
            // There can be:
            //  Cn, n>3 ==> principal = Cn
            //  C3 and S4 ==> principal = S4
            //  Cn || S2n, n>3 ==> principal = Cn
            //  else: ==> principal = Cn

            boost::optional<Cn_axis_info> maybe_principal_axis =
                boost::optional<Cn_axis_info>();

            const std::size_t coords_len = coords.n_cols;

            // first try to find improper S4 axis:
            try {
                for (unsigned i = 0; i < coords_len; ++i) {
                    for (unsigned j = i + 1; j < coords_len; ++j) {
                        // find C2 axes symmetral to the pair of points: "first"
                        // and "second"
                        const arma::vec& first = coords.col(i);
                        const arma::vec& second = coords.col(j);
                        const arma::vec midpoint = (first + second) / 2;
                        arma::vec normal_v = norm(midpoint, 2) > 1e-10
                                                 ? normalise(midpoint, 2)
                                                 : normalise(first, 2);
                        //                printf("Suspected axis: i=%d, j=%d,
                        //                normal_v=[%f, %f, %f]\n",
                        //                       i, j, normal_v(0), normal_v(1),
                        //                       normal_v(2));
                        //   distinguish between proper Cn and improper C2n axes
                        Cn_axis_info axis_info = {normal_v, -4};
                        if (are_equivalent(coords,
                                           rotate_axis_angle(coords, axis_info),
                                           q,
                                           tol_dist))
                            throw(axis_info);
                    }
                }
            } catch (Cn_axis_info axis_info) {
                //        printf("Found improper S4 axis:\n");
                maybe_principal_axis = axis_info; // memorise S4
            }

            for (int n = 8; n > 2; --n) {
                // check for Cn
                for (unsigned i = 0; i < coords_len; ++i) {
                    for (unsigned j = i + 1; j < coords_len; ++j) {
                        for (unsigned k = j + 1; k < coords_len; ++k) {
                            const arma::vec& first = coords.col(i);
                            const arma::vec& second = coords.col(j);
                            const arma::vec& third = coords.col(k);
                            if (!is_triple_linear(
                                    first, second, third, tol_dist)) {
                                // Find the plane containing that triangle and
                                // the vector normal to that plane passing
                                // through (0,0,0). Such vector is to be checked
                                // for the existance of Cn.

                                Cn_axis_info axis_info = {
                                    canonic(get_normal_vector(
                                        first, second, third)),
                                    n};

                                if (are_equivalent(
                                        coords,
                                        rotate_axis_angle(coords, axis_info),
                                        q,
                                        tol_dist)) {
                                    if (n ==
                                        3) { // in such case recall if there was
                                             // a S4 found before.
                                        if (maybe_principal_axis) {
                                            return maybe_principal_axis; // return
                                                                         // the
                                                                         // S4
                                                                         // obtained
                                                                         // before
                                        }
                                    }
                                    // for n>3 (or for n==3 && S4 does not
                                    // exist) the case should be treated
                                    // normally
                                    //                            std::cout <<
                                    //                            "returned Cn
                                    //                            axis_info=" <<
                                    //                            axis_info.vec
                                    //                                      <<
                                    //                                      ",
                                    //                                      rank="
                                    //                                      <<
                                    //                                      axis_info.fold
                                    //                                      <<
                                    //                                      std::endl;
                                    return axis_info;
                                }
                            } else {
                                // colinear triple
                            }
                        } // for(k)
                    }     // for(j)
                }         // for(i)
            }             // for(n)
            return boost::optional<Cn_axis_info>();
        }

        boost::optional<arma::vec>
        find_principal_sigma_v(const arma::mat& coords,
                               const std::vector<unsigned>& q,
                               const arma::vec& Cn_principal,
                               double tol_dist)
        {
            const unsigned coords_len = coords.n_cols;

            for (unsigned i = 0; i < coords_len; ++i) {
                for (unsigned j = i + 1; j < coords_len; ++j) {
                    const arma::vec& first = coords.col(i);
                    const arma::vec& second = coords.col(j);
                    const arma::vec midpoint = (first + second) / 2;

                    const arma::vec& v_in_pl = midpoint;
                    const arma::vec normal = midpoint - first;
                    const arma::vec& plane = normal;
                    const double D = -arma::dot(v_in_pl, normal);

                    if (std::abs(D) < tol_dist) {
                        if (are_equivalent(coords,
                                           reflect_perp_plane(coords, normal),
                                           q,
                                           tol_dist) &&
                            (std::abs(Cn_principal(0) * plane(0)) +
                             std::abs(Cn_principal(1) * plane(1)) +
                             std::abs(Cn_principal(2) * plane(2))) < tol_dist) {

                            return plane;
                        }
                    }
                }
            }

            return boost::optional<arma::vec>();
        }

        boost::optional<Cn_axis_info>
        find_perpendicular_C2(const arma::mat& coords,
                              const std::vector<unsigned>& q,
                              const Cn_axis_info& Cn_principal,
                              double tol_dist)
        {
            const unsigned coords_len = coords.n_cols;
            for (unsigned i = 0; i < coords_len; ++i) {
                for (unsigned j = i + 1; j < coords_len; ++j) {
                    const unsigned n = 2;
                    // find C2 axes symmetral to the pair of points: "first" and
                    // "second"
                    const arma::vec& first = coords.col(i);
                    const arma::vec& second = coords.col(j);
                    const arma::vec midpoint = (first + second) / 2;
                    if (norm(midpoint, 2) > 1e-10) {
                        const arma::vec normal_v = normalise(midpoint, 2);
                        // analyse ONLY perpendicular axes
                        const Cn_axis_info axis_info = {normal_v, n};
                        if (are_equivalent(coords,
                                           rotate_axis_angle(coords, axis_info),
                                           q,
                                           tol_dist) &&
                            std::abs(arma::dot(normal_v, Cn_principal.vec)) <
                                tol_dist) {
                            //                    std::cout << "Found
                            //                    perpendicular C2 axis: " <<
                            //                    normal_v << "\n";
                            return axis_info;
                        }
                    }
                }
            }
            return boost::optional<Cn_axis_info>();
        }
    }
}
