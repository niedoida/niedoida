/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_KIT_SYMMETRY_UTILS_HPP
#define NIEDOIDA_KIT_SYMMETRY_UTILS_HPP

#include <boost/math/quaternion.hpp>
#include <armadillo>

namespace niedoida {
    namespace symmetry {

        arma::mat inertia(const arma::mat& r, const std::vector<unsigned>& m);

        arma::vec transform_to_mass_center(arma::mat &coords, const std::vector<unsigned> &q);
        /**
         * @brief Construct rotation matrix corresponding to the quaternion.
         *
         * Implementation is based on http://www.boost.org/libs/math/quaternion/HSO3.hpp
         */
        arma::mat rotation_matrix(const boost::math::quaternion<double>&);

        arma::vec rotate(const arma::vec& coords,
                         const arma::vec& axis,
                         double angle);

        arma::mat make_axis_rep(const int n, const arma::vec& vec);

        arma::mat make_sigma_rep(const arma::vec& vec);


        template<std::size_t M, std::size_t N>
        arma::mat make_matrix(const double (&array)[M][N]) {
            arma::mat m(M, N);
            for (unsigned k = 0; k < M; ++k)
                for (unsigned l = 0; l < N; ++l)
                    m(k, l) = array[k][l];
            return m;
        }

        template<std::size_t N>
        arma::vec make_vector(const double array[N]) {
            arma::vec v(N);
            for (unsigned k = 0; k < N; ++k)
                v(k) = array[k];
            return v;
        }

        std::vector<unsigned> create_perm_rep(
            const arma::mat& /*cart_rep*/,
            const arma::mat& /*passed_coords*/,
            double /*tol_dist*/);
    }
}

#endif
