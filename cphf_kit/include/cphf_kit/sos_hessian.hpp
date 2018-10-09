/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef SOS_HESSIAN_HPP 
#define SOS_HESSIAN_HPP

#include<armadillo>
#include<memory>
#include<vector>
#include<utility>

#include "core_kit/system.hpp"

namespace niedoida{
  namespace cphf {  
   // collectionOf_HperturbMOs to wektor par wycinkow macierzy 1e zaburzen w MO odpowiadajaca blokowi occ x virt (first == alpha, second == beta)
   // Pierwsza macierz pary ma wymiar N_occ_alpha x N_occ_alpha, druga ma wymiar N_occ_beta x N_occ_beta
   arma::mat calculate_sos_hessian_given_collectionOf_HperturbMOs(std::shared_ptr<const core::System> system,
                                                                  const arma::vec& mo_energies_alpha,
                                                                  const arma::vec& mo_energies_beta,
                                                                  const std::vector<std::pair<arma::mat,arma::mat>> & collectionOf_HperturbMOs);

   // collectionOf_HperturbAOs to wektor macierzy 1e zaburzen w AO, ich rozmiar to Nbasis x Nbasis
   arma::mat calculate_sos_hessian_given_collectionOf_HperturbAOs(std::shared_ptr<const core::System> system,
                                                                  const arma::mat& mo_coeffs_alpha,
                                                                  const arma::mat& mo_coeffs_beta, 
                                                                  const arma::vec& mo_energies_alpha,
                                                                  const arma::vec& mo_energies_beta,
                                                                  const std::vector<arma::mat> & collectionOf_HperturbAOs);
  }
}

#endif
