/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"

#include "symmetry_kit/symmetry_utils.hpp"

#include <boost/math/constants/constants.hpp>
#include <boost/math/quaternion.hpp>

namespace niedoida {
    namespace symmetry {
        using namespace boost::math::double_constants;

        // enum Axis {X_AXIS, Y_AXIS, Z_AXIS};

        arma::mat make_i_rep() { return -arma::mat(3, 3, arma::fill::eye); }

        // Representation of principal (i.e., parallel to OZ) Cn axes:
        arma::mat make_cn_rep(unsigned n)
        {
            arma::mat rep;
            rep << std::cos(2 * pi / n) << -std::sin(2 * pi / n) << 0
                << arma::endr << std::sin(2 * pi / n) << std::cos(2 * pi / n)
                << 0 << arma::endr << 0 << 0 << 1 << arma::endr;
            return rep;
        }

        // Representation of principal (i.e., parallel to OZ) Sn axes:
        arma::mat make_sn_rep(unsigned n)
        {
            arma::mat rep;
            rep << std::cos(2 * pi / n) << -std::sin(2 * pi / n) << 0
                << arma::endr << std::sin(2 * pi / n) << std::cos(2 * pi / n)
                << 0 << arma::endr << 0 << 0 << -1 << arma::endr;
            return rep;
        }

        // Representation of axes other than principal ones.
        // "vec" defines the direction, "n" is fold.
        arma::mat make_axis_rep(const int n, const arma::vec& vec)
        {
            double angle = 2 * pi / std::abs(n);
            if (norm(vec, 2) < 1e-10) {
                ; // FIXME: throw error
            }
            // first, based on rotation angle and vector calculate the
            // quaternion
            const double sin_angle_2 = std::sin(0.5 * angle);
            const double cos_angle_2 = std::cos(0.5 * angle);
            const arma::vec t = sin_angle_2 * normalise(vec, 2);

            const boost::math::quaternion<double> q(
                cos_angle_2, t(0), t(1), t(2));

            if (n < 0) { // improper rotation: make additional reflection, i.e.
                         // C2 and inversion
                const double angle_C2 = pi;
                const double sin_C2 = std::sin(0.5 * angle_C2);
                const double cos_C2 = std::cos(0.5 * angle_C2);
                const arma::vec t_C2 = sin_C2 * normalise(vec, 2);
                const boost::math::quaternion<double> q_C2(
                    cos_C2, t_C2(0), t_C2(1), t_C2(2));
                return -rotation_matrix(q_C2 * q);
            }
            return rotation_matrix(q);
        }

        arma::mat make_axis_rep(const int n, double ux, double uy, double uz)
        {
            arma::vec vec(3);
            vec(0) = ux;
            vec(1) = uy;
            vec(2) = uz;
            return make_axis_rep(n, vec);
        }

        arma::mat make_axis_rep(const int n, Axis axis)
        {
            arma::vec vec(3);
            vec(0) = 0;
            vec(1) = 0;
            vec(2) = 0;
            switch (axis) {
            case X_AXIS:
                vec(0) = 1;
                break;
            case Y_AXIS:
                vec(1) = 1;
                break;
            case Z_AXIS:
                vec(2) = 1;
                break;
            default:
                break;
            }
            return make_axis_rep(n, vec);
        }
        // representation of plane from normal ublas::vector
        arma::mat make_sigma_rep(const arma::vec& vec)
        {
            // reflection=rotation(pi)*inversion
            return make_i_rep() * make_axis_rep(2, vec);
        }

        arma::mat make_sigma_rep(double ux, double uy, double uz)
        {
            arma::vec norm_vec;
            norm_vec(0) = ux;
            norm_vec(1) = uy;
            norm_vec(2) = uz;
            return make_sigma_rep(norm_vec);
        }
        arma::mat make_sigma_rep(Axis axis)
        {
            arma::vec norm_vec;
            norm_vec(0) = 0;
            norm_vec(1) = 0;
            norm_vec(2) = 0;
            switch (axis) {
            case X_AXIS:
                norm_vec(0) = 1;
                break;
            case Y_AXIS:
                norm_vec(1) = 1;
                break;
            case Z_AXIS:
                norm_vec(2) = 1;
                break;
            }
            return make_sigma_rep(norm_vec);
        }
        double determinant_3(const arma::mat& a)
        {
            assert(a.n_rows == 3 && a.n_cols == 3);
            return a(0, 0) * a(1, 1) * a(2, 2) + a(0, 1) * a(1, 2) * a(2, 0) +
                   a(0, 2) * a(1, 0) * a(2, 1) - a(0, 2) * a(1, 1) * a(2, 0) -
                   a(0, 0) * a(1, 2) * a(2, 1) - a(0, 1) * a(1, 0) * a(2, 2);
        }

        double chop(double x, double threshold)
        {
            if (std::abs(x) < threshold)
                return 0;
            return x;
        }

        arma::vec chop(const arma::vec& vec, double tol)
        {
            arma::vec tmp_vec = vec;

            for (unsigned i = 0; i < tmp_vec.size(); ++i)
                tmp_vec(i) = chop(tmp_vec[i], tol);

            return tmp_vec;
        }
    }
}
