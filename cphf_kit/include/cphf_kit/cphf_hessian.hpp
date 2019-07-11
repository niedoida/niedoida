/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef CPHF_HESSIAN_HPP 
#define CPHF_HESSIAN_HPP

#include<vector>
#include<armadillo>
#include<cphf_kit/cphf_linear_response.hpp>

namespace niedoida {
  namespace cphf {

    //#################################################################################
    //####################   CPHF_Hessian            ##################################
    //#################################################################################

    /*
     * When the electronic Hamiltonian depends on a set of arbitrary parameters
     * the electronic energy Hessian (with respect of the parameters)
     * may be expressed as a sum of (eq. 24 in [1]):
     * (1) a term concerning the Hamiltonian Hessian, and
     * (2) a term concerning a derivative of the electronic
     *     wave function.
     * CPHF_Hessian class is to calculate the latter term.
     *
     * The class follows the strategy design pattern --
     * allowing the electronic wave function derivative calculations
     * to be implemented in an arbitrary class
     * (subclassing the CPHF_linearResponse interface).
     * The reference of a desired instance of
     * CPHF_linearResponse interface subclass
     * is set during CPHF_Hessian class instance initialization.
     *
     * Once a CPHF_Hessian class instance is initialized
     * it may be reused many times to calculate the Hessian matrix
     * with the aid of calculate_CPHF_Hessian_given_DDE member function --
     * each time with with respect to an arbitrary set of the Hamiltonian parameters.
     * The function takes the Hamiltonian parameters dependency as its input.
     * The dependency is not defined directly, but by means of
     * a set of mixed derrivative
     * \frac{\partial^2 E}{\partial \kappa_{ar} \partial x_i} values
     * (compare to eq. 24 and eq. 30 in [1]).
     *
     * References:
     * [1] http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.707.1405&rep=rep1&type=pdf
     */

    class CPHF_Hessian{
    private:
      CPHF_linearResponse& cphf_linearResponse;
      std::vector< arma::mat > calculated_U_matrices; // used by calc_u_matrixes and get_U;
    public:
      CPHF_Hessian(CPHF_linearResponse& );
      arma::mat calculate_CPHF_Hessian_given_DDE(const std::vector<std::pair<arma::mat,arma::mat>> & collectionOf_DDE_over_DxDkappa);
      void calc_u_matrices(const std::vector<std::pair<arma::mat,arma::mat>> & collectionOf_DDE_over_DxDkappa);
      std::vector< arma::mat > get_U();
    };
  }
}

#endif
