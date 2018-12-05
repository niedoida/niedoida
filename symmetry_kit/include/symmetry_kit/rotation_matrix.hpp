/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SYMMETRY_KIT_ROTATION_MATRIX_HPP
#define NIEDOIDA_SYMMETRY_KIT_ROTATION_MATRIX_HPP

#include <armadillo>

#include <boost/math/quaternion.hpp>

namespace niedoida {
    namespace symmetry {
        arma::mat33 rotation_matrix(const boost::math::quaternion<double>& q);
        arma::mat33 rotation_matrix(const int n, const arma::vec& vec);
    }
}

#endif
