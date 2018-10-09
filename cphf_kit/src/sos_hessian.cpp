/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "cphf_kit/sos_hessian.hpp"
#include <iostream>

namespace niedoida {
    namespace cphf {
        arma::mat calculate_sos_hessian_given_collectionOf_HperturbMOs(
            std::shared_ptr<const core::System> system,
            const arma::vec& mo_energies_alpha,
            const arma::vec& mo_energies_beta,
            const std::vector<std::pair<arma::mat, arma::mat>>&
                collectionOf_HperturbMOs)
        {
            const unsigned N = mo_energies_alpha.size();
            const unsigned Nocc_alpha = system->no_electrons(core::SPIN_ALPHA);
            const unsigned Nocc_beta = system->no_electrons(core::SPIN_BETA);
            const unsigned Nperturbations = collectionOf_HperturbMOs.size();
            arma::mat hessian(
                Nperturbations, Nperturbations, arma::fill::zeros);
            for (unsigned pertK = 0; pertK < Nperturbations; pertK++) {
                for (unsigned pertL = 0; pertL < Nperturbations; pertL++) {
                    for (unsigned a = 0; a < Nocc_alpha; ++a)
                        for (unsigned r = Nocc_alpha; r < N; ++r) {
                            hessian(pertK, pertL) +=
                                collectionOf_HperturbMOs[pertK].first(
                                    a, r - Nocc_alpha) *
                                collectionOf_HperturbMOs[pertL].first(
                                    a, r - Nocc_alpha) /
                                (mo_energies_alpha(a) - mo_energies_alpha(r));
                        } // koniec petli po wirtualnych wzbudzeniach
                          // a->r(alpha)
                    for (unsigned a = 0; a < Nocc_beta; ++a)
                        for (unsigned r = Nocc_beta; r < N; ++r) {
                            hessian(pertK, pertL) +=
                                collectionOf_HperturbMOs[pertK].second(
                                    a, r - Nocc_beta) *
                                collectionOf_HperturbMOs[pertL].second(
                                    a, r - Nocc_beta) /
                                (mo_energies_beta(a) - mo_energies_beta(r));
                        } // koniec petli po wirtualnych wzbudzeniach a->r(beta)
                }         // koniec petli po pertL
            }             // koniec petli po pertK
            hessian *= 2.0;
            return hessian;
        }

        arma::mat calculate_sos_hessian_given_collectionOf_HperturbAOs(
            std::shared_ptr<const core::System> system,
            const arma::mat& mo_coeffs_alpha,
            const arma::mat& mo_coeffs_beta,
            const arma::vec& mo_energies_alpha,
            const arma::vec& mo_energies_beta,
            const std::vector<arma::mat>& collectionOf_HperturbAOs)
        {
            const unsigned N = mo_energies_alpha.size();
            const unsigned Nocc_alpha = system->no_electrons(core::SPIN_ALPHA);
            const unsigned Nocc_beta = system->no_electrons(core::SPIN_BETA);
            const unsigned Nperturbations = collectionOf_HperturbAOs.size();
            std::vector<std::pair<arma::mat, arma::mat>>
                collectionOf_HperturbMOs(Nperturbations);
            for (unsigned pert = 0; pert < Nperturbations; pert++) {
                const arma::mat& HperturbAO = collectionOf_HperturbAOs[pert];
                const arma::mat HperturbMOs_alpha =
                    mo_coeffs_alpha.cols(0, Nocc_alpha - 1).t() * HperturbAO *
                    mo_coeffs_alpha.cols(Nocc_alpha, N - 1);
                const arma::mat HperturbMOs_beta =
                    mo_coeffs_beta.cols(0, Nocc_beta - 1).t() * HperturbAO *
                    mo_coeffs_beta.cols(Nocc_beta, N - 1);
                collectionOf_HperturbMOs[pert] =
                    std::make_pair(HperturbMOs_alpha, HperturbMOs_beta);
            }
            return calculate_sos_hessian_given_collectionOf_HperturbMOs(
                system,
                mo_energies_alpha,
                mo_energies_beta,
                collectionOf_HperturbMOs);
        }
    }
}
