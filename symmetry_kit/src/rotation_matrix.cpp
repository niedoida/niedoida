/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/rotation_matrix.hpp"

#include <boost/math/constants/constants.hpp>

#include <cassert>
#include <limits>

namespace niedoida {
    namespace symmetry {
        arma::mat33 rotation_matrix(const boost::math::quaternion<double>& q)
        {
            const double a = q.R_component_1();
            const double b = q.R_component_2();
            const double c = q.R_component_3();
            const double d = q.R_component_4();

            const double aa = a * a;
            const double ab = a * b;
            const double ac = a * c;
            const double ad = a * d;
            const double bb = b * b;
            const double bc = b * c;
            const double bd = b * d;
            const double cc = c * c;
            const double cd = c * d;
            const double dd = d * d;

            const double norm = aa + bb + cc + dd;

            assert(norm > std::numeric_limits<double>::epsilon());

            return {{(aa + bb - cc - dd) / norm,
                    2 * (-ad + bc) / norm,
                    2 * (ac + bd) / norm},
                    {2 * (ad + bc) / norm,
                    (aa - bb + cc - dd) / norm,
                    2 * (-ab + cd) / norm},
                    {2 * (-ac + bd) / norm,
                    2 * (ab + cd) / norm,
                    (aa - bb - cc + dd) / norm}};
        }

        arma::mat33 rotation_matrix(const int n, const arma::vec& vec)
        {
            using namespace boost::math::double_constants;

            const double angle = 2 * pi / std::abs(n);

            const double sin_angle_2 = std::sin(0.5 * angle);
            const double cos_angle_2 = std::cos(0.5 * angle);
            const arma::vec t = sin_angle_2 * normalise(vec, 2);

            const boost::math::quaternion<double> q(
                cos_angle_2, t(0), t(1), t(2));

            if (n > 0)
                return rotation_matrix(q);

            // improper rotation: make additional reflection, i.e.
            // C2 and inversion
            const double angle_C2 = pi;
            const double sin_C2 = std::sin(0.5 * angle_C2);
            const double cos_C2 = std::cos(0.5 * angle_C2);
            const arma::vec t_C2 = sin_C2 * normalise(vec, 2);
            const boost::math::quaternion<double> q_C2(
                cos_C2, t_C2(0), t_C2(1), t_C2(2));
            return -rotation_matrix(q_C2 * q);
        }
    }
}
