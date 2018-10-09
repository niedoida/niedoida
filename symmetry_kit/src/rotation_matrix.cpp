/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_utils.hpp"

namespace niedoida {
    namespace symmetry {
        // based on http://www.boost.org/libs/math/quaternion/HSO3.hpp
        arma::mat rotation_matrix(const boost::math::quaternion<double>& q)
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

            arma::mat m(3, 3);

            m(0, 0) = (aa + bb - cc - dd) / norm;
            m(0, 1) = 2 * (-ad + bc) / norm;
            m(0, 2) = 2 * (ac + bd) / norm;
            m(1, 0) = 2 * (ad + bc) / norm;
            m(1, 1) = (aa - bb + cc - dd) / norm;
            m(1, 2) = 2 * (-ab + cd) / norm;
            m(2, 0) = 2 * (-ac + bd) / norm;
            m(2, 1) = 2 * (ab + cd) / norm;
            m(2, 2) = (aa - bb - cc + dd) / norm;

            return m;
        }
    }
}
