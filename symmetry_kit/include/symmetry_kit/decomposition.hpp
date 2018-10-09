/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SYMMETRY_KIT_CL_DECOMPOSITION_HPP
#define NIEDOIDA_SYMMETRY_KIT_CL_DECOMPOSITION_HPP

#include <armadillo>
#include <exception>
#include <vector>

namespace niedoida {
    namespace symmetry {
        class Decomposition {
        public:
            explicit Decomposition(unsigned dim);
            Decomposition(const Decomposition&, const Decomposition&);
            explicit Decomposition(
                const std::vector<Decomposition>& decompositions);
            Decomposition(const arma::cx_mat& M, double threshold = 1e-5);
            Decomposition(const arma::vec& eig_vals,
                          const arma::cx_mat& eig_vecs,
                          double threshold = 1e-5);

            arma::cx_mat get_basis() const;

            unsigned get_dim() const { return _m_dim; };

        private:
            arma::cx_cube _m_projections;
            unsigned _m_dim;
        };

        struct NotEigenVectorError : std::exception {
            const char* what() const noexcept;
        };

        // -------------------------- common_eig_gen
        // ------------------------------------------------ Funkcja robioca
        // jednoczesna diagonalizacje macierzy symetrycznych
        Decomposition common_eig_gen(const arma::cx_cube& Ms);
    }
}

#endif
