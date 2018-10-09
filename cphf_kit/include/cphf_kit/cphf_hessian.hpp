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

    /* majac liniowa odpowiedz stanu elektronowego ukladu
     * mozna bardzo szybko policzyc Hessian energii
     * Hessian energi ma dwa skladniki:
     * (1) skladnik zwiazany z druga pochodna (po zaburzeniu) Hamiltonianu oraz
     * (2) skladnik zwiazany ze zmiana stanu elektronowego.
     * Klasa CPHF_Hessian pozwala policzyc skladnik (2). 
     *
     * klasa CPHF_Hessian dostaje w konstruktorze
     * maszynke do znajdowania liniowej odpowiedzi stanu elektronowego
     * [ zaimplementowej w klasie CPHF_linearResponse ]
     *
     * Hessian znajduje sie wywolujac funkcje calculate_CPHF_Hessian_given_DDE(...)
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
