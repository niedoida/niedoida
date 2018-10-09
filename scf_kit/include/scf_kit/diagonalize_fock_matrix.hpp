/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SCF_KIT_DIAGONALIZE_FOCK_MATRIX_HPP
#define NIEDOIDA_SCF_KIT_DIAGONALIZE_FOCK_MATRIX_HPP

#include <armadillo>

namespace niedoida {
    namespace scf {
        class DiagonalizeFockMatrix {
        public:
            virtual void operator()(const arma::mat& F,
                                    arma::mat& C,
                                    arma::vec& epsilons) const = 0;
        };

        class StdDiagonalizeFockMatrix : public DiagonalizeFockMatrix {
        public:
            StdDiagonalizeFockMatrix(const arma::mat& S);

            void operator()(const arma::mat& F,
                            arma::mat& C,
                            arma::vec& epsilons) const;

        private:
            arma::mat _S_12;
        };

        class LinIndDiagonalizeFockMatrix : public DiagonalizeFockMatrix {
        public:
            LinIndDiagonalizeFockMatrix(const arma::mat& B) : _B(B) {}

            void operator()(const arma::mat& F,
                            arma::mat& C,
                            arma::vec& epsilons) const;

        private:
            arma::mat _B;
        };
    }
}

#endif
