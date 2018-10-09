/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SYMMETRY_KIT_MISC_HPP
#define NIEDOIDA_SYMMETRY_KIT_MISC_HPP

#include <vector>

#include <armadillo>

namespace niedoida {
    namespace symmetry {

        enum Axis {X_AXIS, Y_AXIS, Z_AXIS};

        arma::mat make_i_rep();
        arma::mat make_cn_rep(unsigned n);
        arma::mat make_sn_rep(unsigned n);
        arma::mat make_axis_rep(const int n, const arma::vec& vec); 
        arma::mat make_axis_rep(const int n, double ux, double uy, double uz );
        arma::mat make_axis_rep(const int n, Axis axis );
        arma::mat make_sigma_rep(const arma::vec& vec);  
        arma::mat make_sigma_rep(double ux, double uy, double uz);
        arma::mat make_sigma_rep(Axis axis);

        double chop(double, double threshold = 1e-10);
        arma::vec chop(const arma::vec&, double tol = 1e-10);
        arma::vec canonic(const arma::vec&, double tol = 1e-3);

        // (used to merge lists of generators in constructors of certain symmetry groups)
        template <class T> std::vector<T> merge(const std::vector<T>& v1, const std::vector<T>& v2)
        {
            std::vector<T> v(v1);
            std::copy(v2.begin(), v2.end(), std::back_inserter(v));
            return v;
        }
    }
}

#endif
