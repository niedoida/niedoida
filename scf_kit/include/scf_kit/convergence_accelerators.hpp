/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SCF_KIT_CONVERGENCE_ACCELERATORS
#define NIEDOIDA_SCF_KIT_CONVERGENCE_ACCELERATORS

#include <armadillo>

#include <boost/noncopyable.hpp>

#include <vector>
#include <utility>

namespace niedoida {
    namespace scf {
        class ConvergenceAccelerator {
        public:
            virtual ~ConvergenceAccelerator() = default;

            virtual std::pair<arma::mat,
                              arma::mat>
                apply(
                    const arma::mat& S,
                    const arma::mat& h,
                    const arma::mat& g_alpha,
                    const arma::mat& P_alpha,
                    const arma::mat& g_beta,
                    const arma::mat& P_beta,
                    double E) = 0;
        };

        class NullConvergenceAccelerator: public ConvergenceAccelerator {
            std::pair<arma::mat,
                      arma::mat >
            apply(
                const arma::mat& S,
                const arma::mat& h,
                const arma::mat& g_alpha,
                const arma::mat& P_alpha,
                const arma::mat& g_beta,
                const arma::mat& P_beta,
                double E);
        };

        class DIIS: public ConvergenceAccelerator {
        public:
            DIIS(double threshold);

            std::pair<arma::mat,
                      arma::mat >
                apply(
                    const arma::mat& S,
                    const arma::mat& h,
                    const arma::mat& g_alpha,
                    const arma::mat& P_alpha,
                    const arma::mat& g_beta,
                    const arma::mat& P_beta,
                    double E);

        private:
            double threshold_;
            bool real_diis_enabled_;
            std::vector<arma::vec> err_vecs_alpha;
            std::vector<arma::vec> err_vecs_beta;
            std::vector<arma::mat> fock_matrices_alpha;
            std::vector<arma::mat> fock_matrices_beta;
        };
    }
}

#endif
