/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "scf_kit/diagonalize_fock_matrix.hpp"

#include <cassert>

namespace niedoida {
    namespace scf {
        void LinIndDiagonalizeFockMatrix::
        operator()(const arma::mat& F, arma::mat& C, arma::vec& epsilons) const
        {
            assert(F.n_cols == F.n_rows);

            arma::mat beta;
            arma::eig_sym(epsilons, beta, _B.t() * F * _B);
            C = _B * beta;
        }

        StdDiagonalizeFockMatrix::StdDiagonalizeFockMatrix(const arma::mat& S)
        {
            arma::vec lambda;
            arma::mat beta;

            arma::eig_sym(lambda, beta, S);

            for (double& l : lambda)
                l = 1 / std::sqrt(l);

            _S_12 = beta * arma::diagmat(lambda) * beta.t();
        }

        void StdDiagonalizeFockMatrix::
        operator()(const arma::mat& F, arma::mat& C, arma::vec& epsilons) const
        {
            const std::size_t n = F.n_rows;

            assert(F.n_cols == n);
            assert(_S_12.n_rows == n);
            assert(_S_12.n_cols == n);

            const arma::mat F_ = _S_12 * F * _S_12;

            arma::mat beta;
            arma::eig_sym(epsilons, beta, F_);

            C = _S_12 * beta;
        }
    }
}
