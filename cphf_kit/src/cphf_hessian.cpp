/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <utility>
#include <vector>

#include "cphf_kit/cphf_hessian.hpp"
#include "io_kit/logger.hpp"

namespace niedoida {
    namespace cphf {

        CPHF_Hessian::CPHF_Hessian(CPHF_linearResponse& cphf_linearResponse) :
            cphf_linearResponse(cphf_linearResponse)
        {
        }

        arma::mat CPHF_Hessian::calculate_CPHF_Hessian_given_DDE(
            const std::vector<std::pair<arma::mat, arma::mat>>&
                collectionOf_DDE_over_DxDkappa) const
        {
            const unsigned Nperturbations =
                collectionOf_DDE_over_DxDkappa.size();
            arma::mat hessian(Nperturbations, Nperturbations);
            if (cphf_linearResponse.is_restricted()) {
                std::vector<arma::mat> Dkappa_over_Dx(Nperturbations);
                for (unsigned pert = 0; pert < Nperturbations; pert++) {
                    std::pair<arma::mat, arma::mat> DDE_over_DxDkappa =
                        collectionOf_DDE_over_DxDkappa[pert];
                    cphf_linearResponse.solveCPHFequations_given_DDE(
                        DDE_over_DxDkappa.first, DDE_over_DxDkappa.second);
                    Dkappa_over_Dx[pert] =
                        cphf_linearResponse.get_solution(core::SPIN_ALPHA);
                }
                for (unsigned pertA = 0; pertA < Nperturbations; pertA++)
                    for (unsigned pertB = 0; pertB < Nperturbations; pertB++)
                        hessian(pertA, pertB) =
                            2 *
                            arma::trace(collectionOf_DDE_over_DxDkappa[pertA]
                                            .first.t() *
                                        Dkappa_over_Dx[pertB]);
                return hessian;
            } else {
                std::vector<std::pair<arma::mat, arma::mat>> Dkappa_over_Dx_uhf(
                    Nperturbations);
                for (unsigned pert = 0; pert < Nperturbations; pert++) {
                    std::pair<arma::mat, arma::mat> DDE_over_DxDkappa =
                        collectionOf_DDE_over_DxDkappa[pert];
                    cphf_linearResponse.solveCPHFequations_given_DDE(
                        DDE_over_DxDkappa.first, DDE_over_DxDkappa.second);
                    Dkappa_over_Dx_uhf[pert].first =
                        cphf_linearResponse.get_solution(core::SPIN_ALPHA);
                    Dkappa_over_Dx_uhf[pert].second =
                        cphf_linearResponse.get_solution(core::SPIN_BETA);
                }
                for (unsigned pertA = 0; pertA < Nperturbations; pertA++)
                    for (unsigned pertB = 0; pertB < Nperturbations; pertB++) {
                        hessian(pertA, pertB) = arma::trace(
                            collectionOf_DDE_over_DxDkappa[pertA].first.t() *
                            Dkappa_over_Dx_uhf[pertB].first);
                        hessian(pertA, pertB) += arma::trace(
                            collectionOf_DDE_over_DxDkappa[pertA].second.t() *
                            Dkappa_over_Dx_uhf[pertB].second);
                    }
                return hessian;
            }
        }

        std::vector<arma::mat> CPHF_Hessian::get_U()
        {
            return calculated_U_matrices;
        }

        void CPHF_Hessian::calc_u_matrices(
            const std::vector<std::pair<arma::mat, arma::mat>>&
                collectionOf_DDE_over_DxDkappa)
        {
            const unsigned Nperturbations =
                collectionOf_DDE_over_DxDkappa.size();
            if (cphf_linearResponse.is_restricted()) {
                calculated_U_matrices.resize(Nperturbations);
                for (unsigned pert = 0; pert < Nperturbations; pert++) {
                    std::pair<arma::mat, arma::mat> DDE_over_DxDkappa =
                        collectionOf_DDE_over_DxDkappa[pert];
                    cphf_linearResponse.solveCPHFequations_given_DDE(
                        DDE_over_DxDkappa.first, DDE_over_DxDkappa.second);
                    calculated_U_matrices[pert] =
                        cphf_linearResponse.get_solution(core::SPIN_ALPHA);
                }
            }
        }
    }
}
