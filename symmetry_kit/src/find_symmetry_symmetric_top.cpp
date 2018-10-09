/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/find_symmetry_utils.hpp"
#include "symmetry_kit/symmetry_info.hpp"
#include "symmetry_kit/symmetry_utils.hpp"

#include <algorithm>

namespace niedoida {
    namespace symmetry {
        void SymmetryInfo::find_symmetry_symmetric_top(
            const arma::mat& passed_coords,
            const std::vector<unsigned>& q,
            double tol_dist,
            double tol_eigenvect)
        {
            _symmetry_type = NON_LINEAR_SYMMETRY;
            _top_type = SYMMETRIC_TOP;

            arma::mat coords = passed_coords;

            Cn_axis_info Cn_principal;
            Cn_axis_info perpendicular_C2;
            const my_fancy_compare compare_vectors(tol_dist);
            VectorSet sigma_planes(compare_vectors);
            const my_fancy_compare_axes compare_axes(tol_dist);
            AxisSet Cn_axes(compare_axes);
            arma::vec sigma_v, sigma_h;
            unsigned coords_len = coords.n_cols;

            /*
            Implemented: the standard orientation after GAMESS manual, i.e.:
                The 'master frame' is just a standard orientation for the
            molecule. By default, the 'master frame' assumes that:
                           1.   z is the principal rotation axis (if any),
                           2.   x is a perpendicular two-fold axis (if any),
                           3.  xz is the sigma-v plane (if any), and
                           4.  xy is the sigma-h plane (if any).
                       Use the lowest number rule that applies to your molecule.
                The toughest matter are two-fold axes which are not implied by
            inertia axes.
            */

            arma::mat inert = inertia(coords, q);

            arma::vec eigenvalues;
            arma::mat eigenvectors;

            arma::eig_sym(eigenvalues, eigenvectors, inert);

            // 1. orient Z axis.  Which axis will be "Z"?  That of unique
            // eigenvalue.
            const double diff_01 = std::abs(eigenvalues(0) - eigenvalues(1));
            const double diff_12 = std::abs(eigenvalues(1) - eigenvalues(2));

            TransAcc tacc;

            if (diff_01 < tol_eigenvect)
                coords =
                    align(coords, eigenvectors.col(2), Z_AXIS, tol_dist, &tacc);
            else if (diff_12 < tol_eigenvect)
                coords =
                    align(coords, eigenvectors.col(0), Z_AXIS, tol_dist, &tacc);
            else
                coords =
                    align(coords, eigenvectors.col(1), Z_AXIS, tol_dist, &tacc);

            // rebuild inertia after reorientation
            // FIXME: is this really necessary?
            inert = inertia(coords, q);
            arma::eig_sym(eigenvalues, eigenvectors, inert);

            eigenvectors = eigenvectors.t();

            const double theta = -atan2(eigenvectors(1, 0), eigenvectors(1, 1));
            coords = rotate_around_XYZ(coords, Z_AXIS, theta, &tacc);

            const boost::optional<Axis> which_plane =
                planar_in_which_plane_XYZ(coords, tol_dist);

            if (which_plane)
                coords =
                    reorient_plane(coords, q, *which_plane, tol_dist, &tacc);

            // 2. memorise the principal axis. It will be added to the pool
            // later (in the loop)
            std::vector<double> axis_buf(3, 0);
            axis_buf[2] = 1;
            Cn_principal.vec = canonic(arma::vec(axis_buf));

            // 2. now the cardinal axis is aligned to "Z" axis. Find the order
            // of it (and find possible S2n axis)
            //   in case of symmetrical top: "for n in [8, 7, 6, 5, 4, 3, 2]:"
            //   since there can also be the axes of order 8 and 7 (very seldom)

            for (int n = 8; n > 1; --n) {
                //        printf("Suspected principal axis, n=%d\n", n);
                // distinguish between proper Cn and improper C2n axes;
                Cn_principal.fold = n;
                if (are_equivalent(coords,
                                   rotate_axis_angle(coords, Cn_principal),
                                   q,
                                   tol_dist)) {
                    //            printf("Found proper C%d principal axis.\n",
                    //            n);
                    Cn_axis_info axis_info = {Cn_principal.vec, n};
                    Cn_axes.insert(axis_info); // add_axis_to_pool(Cn_principal,
                                               // n)           //proper axis
                    axis_info.fold = -(2 * n);
                    if (are_equivalent(coords,
                                       rotate_axis_angle(coords, axis_info),
                                       q,
                                       tol_dist)) {
                        //                printf("Found improper S%d principal
                        //                axis.\n", 2*n);
                        Cn_axes.insert(axis_info); // add_axis_to_pool(Cn_principal,
                                                   // -(n*2)); // improper S2n
                    }
                    axis_info.fold = -n;
                    if (are_equivalent(coords,
                                       rotate_axis_angle(coords, axis_info),
                                       q,
                                       tol_dist)) {
                        //                printf("Found improper S%d principal
                        //                axis.\n", -n);
                        Cn_axes.insert(axis_info); // add_axis_to_pool(Cn_principal,
                                                   // -n);     // improper Sn
                    }
                }
            }

            // 3. align the first C2 axis with "X" axis (if any C2 exists)

            // find the first perp. C2 axis. This MUST NOT be the cardinal Cn
            // axis.

            boost::optional<Cn_axis_info> maybe_perpendicular_C2 =
                find_perpendicular_C2(coords, q, Cn_principal, tol_dist);
            //...and if any found, orient the molecule.
            if (maybe_perpendicular_C2) {
                perpendicular_C2 = *maybe_perpendicular_C2;
                // std::cout << "First perp. C2 found: " << perpendicular_C2
                // <<"\n";
                coords = align(coords,
                               perpendicular_C2.vec,
                               X_AXIS,
                               tol_dist,
                               &tacc); // align perp. C2 to "X".
                //... and the reorientation is done (only in presence of C2)

                // the remaining are: perp. C2 axes (with S2n) and planes:
                // sigma_v and/or sigma_h, and inversion centre
                // 4. find perp. C2 axes:
                for (unsigned i = 0; i < coords_len; ++i) {
                    for (unsigned j = i + 1; j < coords_len; ++j) {
                        // find C2 axes symmetral to the pair of points: "first"
                        // and "second"
                        const arma::vec& first = coords.col(i);
                        const arma::vec& second = coords.col(j);
                        const arma::vec midpoint = (first + second) / 2;
                        arma::vec normal_v = arma::norm(midpoint, 2) > 1e-10
                                                 ? normalise(midpoint, 2)
                                                 : normalise(first, 2);
                        // printf("Suspected axis: i=%d, j=%d, normal_v=[%f, %f,
                        // %f]\n", i, j, normal_v(0), normal_v(1), normal_v(2));
                        //   distinguish between proper Cn and improper C2n axes
                        Cn_axis_info axis_info = {canonic(normal_v), 2};
                        if (are_equivalent(coords,
                                           rotate_axis_angle(coords, axis_info),
                                           q,
                                           tol_dist)) {
                            Cn_axes.insert(axis_info); // add_axis_to_pool(normal_v,
                                                       // n); //proper
                            // std::cout << "Found proper perp. C2 axis: " <<
                            // normal_v << std::endl;
                        }
                        axis_info.fold = -2 * 2;
                        if (are_equivalent(coords,
                                           rotate_axis_angle(coords, axis_info),
                                           q,
                                           tol_dist)) {
                            Cn_axes.insert(axis_info); // add_axis_to_pool(normal_v,
                                                       // -(n*2)); //improper
                            // printf("Found improper axis:\n");
                        }
                        // 5. Find symmetry planes:
                        // then, seek for symmetry planes: given "midpoint"
                        // vector generate plane perpendicular to it
                        /*
                                            # 1. check whether the plane
                           contains OXYZ (it is cheap) # 2. if so, check whether
                           it is a symmetry plane #plane=(A, B, C, D) #equation
                           of the plane given normal vector and 1 point in
                           plane: #Ax+By+Cz+D=0, where: #    normal = (A, B, C)
                           vector normal to plane #    v_in_pl = point in plane
                                            #    then D = -dot(normal,v_in_pl)
                                            # if D==0 then plane contains
                           (0,0,0)
                        */
                        const arma::vec& v_in_pl = midpoint;
                        const arma::vec normal =
                            canonic(normalise(midpoint - first, 2));
                        const arma::vec& plane = normal;

                        const double D = -arma::dot(v_in_pl, normal);
                        if (std::abs(D) < tol_dist) // check whether the plane
                                                    // passes through OXYZ
                            if (are_equivalent(
                                    coords,
                                    reflect_perp_plane(coords, normal),
                                    q,
                                    tol_dist))
                                sigma_planes.insert(
                                    plane); // add_plane_to_pool(plane);
                        // there must not be any other axes of order >2 (because
                        // it is a symmetric top)
                    }
                }
                // in presence of C2 - we are done

                // 6. if there are no C2 axes:
            } else {
                //        std::cout << "No perp. C2 found\n";
                // 5. Find first sigma_v or sigma_h.
                for (unsigned i = 0; i < coords_len; ++i) {
                    for (unsigned j = i + 1; j < coords_len; ++j) {
                        const arma::vec& first = coords.col(i);
                        const arma::vec& second = coords.col(j);
                        const arma::vec midpoint = (first + second) / 2;
                        arma::vec normal_v = arma::norm(midpoint, 2) > 1e-10
                                                 ? normalise(midpoint, 2)
                                                 : normalise(first, 2);

                        const arma::vec& v_in_pl = midpoint;
                        const arma::vec normal = normalise(midpoint - first, 2);
                        const arma::vec& plane = canonic(normal);
                        const double D = -arma::dot(v_in_pl, normal);
                        if (std::abs(D) < tol_dist) { // check whether the plane
                                                      // passes through OXYZ
                            if (are_equivalent(
                                    coords,
                                    reflect_perp_plane(coords, normal),
                                    q,
                                    tol_dist)) {
                                if (std::abs(Cn_principal.vec(0) * plane(0)) +
                                        std::abs(Cn_principal.vec(1) *
                                                 plane(1)) +
                                        std::abs(Cn_principal.vec(2) *
                                                 plane(2)) <
                                    tol_dist) {
                                    // When the number of Cn axes is 0 such
                                    // plane should be counted as sigma_h.
                                    if (Cn_axes.size() == 0)
                                        sigma_h = plane;
                                    else
                                        sigma_v = plane;
                                    break; // only first sigma_v is memorised
                                }
                            }
                        }
                    }
                }
                // 6a. if sigma_v exists: align sigma_v with "XZ" plane
                if (sigma_v.size() > 0) {
                    // first sigma_v found, so align the molecule, so that
                    // sigma_v is in XZ plane
                    coords = align(coords,
                                   sigma_v,
                                   Y_AXIS,
                                   tol_dist,
                                   &tacc); // align sigma_v plane to the "XZ"
                                           // plane (perp. to "Y" axis)
                    //            std::cout << "No C2, but at least sigma_v
                    //            found:" << sigma_v << ", and alignment done."
                    //            <<std::endl;
                    // 6b. else, if sigma_h exists: align sigma_h with "XY"
                    // plane
                } else {
                    // has the principal axis got the perpendicular symmetry
                    // plane? (vector difference incl. negative sign of one
                    // component)
                    // 5. Find sigma_h:
                    sigma_h.clear(); // perhaps sigma_h has been found before?
                    for (unsigned i = 0; i < coords_len; ++i) {
                        for (unsigned j = i + 1; j < coords_len; ++j) {
                            const arma::vec& first = coords.col(i);
                            const arma::vec& second = coords.col(j);
                            const arma::vec midpoint = (first + second) / 2;

                            const arma::vec& v_in_pl = midpoint;
                            const arma::vec normal =
                                normalise(midpoint - first, 2);
                            const arma::vec& plane = canonic(normal);
                            const double D = -arma::dot(v_in_pl, normal);
                            if (std::abs(D) <
                                tol_dist) { // check whether the plane passes
                                            // through OXYZ
                                if (are_equivalent(
                                        coords,
                                        reflect_perp_plane(coords, normal),
                                        q,
                                        tol_dist)) {
                                    if (arma::norm(Cn_principal.vec - plane,
                                                   2) < tol_dist ||
                                        arma::norm(Cn_principal.vec + plane,
                                                   2) < tol_dist) {
                                        sigma_h = plane;
                                    }
                                    break; // there can be at most 1 such
                                           // plane...
                                }
                            }
                        }
                        if (sigma_h.size() > 0) {
                            // align the molecule, so that sigma_h is in XY
                            // plane
                            //                    std::cout << "No C2 nor
                            //                    sigma_v, but at least sigma_h
                            //                    found:" << sigma_h <<
                            //                    std::endl;
                            coords =
                                align(coords,
                                      sigma_h,
                                      Z_AXIS,
                                      tol_dist,
                                      &tacc); // align sigma_v plane to the "XY"
                                              // plane (perp. to "Z" axis)
                        }
                    }
                }

                // Finally, the reorientation (with or without C2) is done.
                // Recompute the C2 axes and sigma planes:

                // 6. find perp. C2 axes and symmetry planes:
                for (unsigned i = 0; i < coords_len; ++i) {
                    for (unsigned j = i + 1; j < coords_len; ++j) {
                        // find C2 axes symmetral to the pair of points: "first"
                        // and "second"
                        const arma::vec& first = coords.col(i);
                        const arma::vec& second = coords.col(j);
                        const arma::vec midpoint = (first + second) / 2;
                        const arma::vec normal_v =
                            (arma::norm(midpoint, 2) > 1e-10)
                                ? normalise(midpoint, 2)
                                : normalise(first, 2);

                        // printf("Suspected axis or plane: i=%d, j=%d,
                        // normal_v=[%f, %f, %f]\n", i, j, normal_v(0),
                        // normal_v(1), normal_v(2));
                        //   distinguish between proper Cn and improper C2n axes
                        Cn_axis_info axis_info = {canonic(normal_v), 2};
                        if (are_equivalent(coords,
                                           rotate_axis_angle(coords, axis_info),
                                           q,
                                           tol_dist))
                            Cn_axes.insert(axis_info); // add_axis_to_pool(normal_v,
                                                       // n)        //proper
                        axis_info.fold = -2 * 2;
                        if (are_equivalent(coords,
                                           rotate_axis_angle(coords, axis_info),
                                           q,
                                           tol_dist))
                            Cn_axes.insert(axis_info); // add_axis_to_pool(normal_v,
                                                       // -(n*2))   //improper
                        /* then, seek for symmetry planes: given "midpoint"
                           vector generate plane perpendicular to it
                                 1. check whether the plane contains OXYZ (it is
                           cheap)
                                 2. if so, check whether it is a symmetry plane
                                 plane=(A, B, C, D)
                                 equation of the plane given normal vector and 1
                           point in plane: Ax+By+Cz+D=0, where: n = (A, B, C)
                           vector normal to plane v = point in plane then D =
                           -dot(n,v) if D==0 then plane contains (0,0,0)
                        */
                        const arma::vec& v_in_pl = midpoint;
                        const arma::vec normal = normalise(midpoint - first, 2);
                        const arma::vec& plane = canonic(normal);
                        const double D = -arma::dot(v_in_pl, normal);
                        // check whether the plane passes through OXYZ
                        if (std::abs(D) < tol_dist)
                            if (are_equivalent(
                                    coords,
                                    reflect_perp_plane(coords, normal),
                                    q,
                                    tol_dist))
                                sigma_planes.insert(
                                    plane); // add_plane_to_pool(plane);
                        // there must not be any other axes of order >2 (because
                        // it is a symmetric top)
                    }
                }
            } // no sigma_v

            // if molecule is planar (flat), then seek for sigma_h. In such
            // case, after being reoriented it must be perpendicular to "Z" axis

            if (are_equivalent(coords,
                               reflect_perp_plane(coords, arma::vec(axis_buf)),
                               q,
                               tol_dist))
                sigma_planes.insert(
                    arma::vec(axis_buf)); // add_plane_to_pool(OXYZ_axes["Z"]);

            // seek for inversion i
            if (are_equivalent(coords, inverse(coords), q, tol_dist)) {
                const Cn_axis_info axis_info = {arma::vec(axis_buf), -2};
                Cn_axes.insert(
                    axis_info); // add_axis_to_pool([1, 0, 0],-2);  //any
                                // vector, anyway. "Z" by convention.
            }

            // add identity E == C1
            const Cn_axis_info axis_info = {arma::vec(axis_buf), 1};

            Cn_axes.insert(axis_info);

            _symmetry_group = &find_finite_group(Cn_axes, sigma_planes);

            _rotation_to_std_frame = tacc.get();
        }
    }
}
