/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "scf_kit/scf_utils.hpp"

namespace niedoida {
    namespace scf {
        arma::mat density_matrix(const arma::mat& C, unsigned no_occ)
        {
            const unsigned n = C.n_rows;
            arma::vec occ(n, arma::fill::zeros);

            std::fill_n(occ.begin(), no_occ, 1.0);

            return density_matrix(C, occ);
        }

        arma::mat hole_density_matrix(const arma::mat& C, unsigned no_occ)
        {
            const unsigned n = C.n_rows;
            arma::vec occ(n, arma::fill::zeros);

            std::fill_n(occ.begin() + no_occ, n - no_occ, 1.0);

            return density_matrix(C, occ);
        }

        arma::mat density_matrix(const arma::mat& C, const arma::vec& occ)
        {
            const unsigned n = C.n_rows;

            arma::mat D = C;

            for (unsigned i = 0; i < n; ++i)
                for (unsigned j = 0; j < C.n_cols; ++j)
                    D(i, j) *= occ(j);

            return D * trans(C);
        }
    }
}
