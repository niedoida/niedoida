/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/nto.hpp"

namespace niedoida {
    namespace td {
        NTO::NTO(const arma::mat& T)
        {
            const std::size_t no_occ = T.n_rows;
            const std::size_t no_virt = T.n_cols;

            arma::mat A = T * trans(T);

            arma::eig_sym(_coeffs, _o_orbs, A);
            for (std::size_t i = 0; i < no_occ / 2; ++i) {
                _o_orbs.swap_cols(i, no_occ - i - 1);
                _coeffs.swap_rows(i, no_occ - i - 1);
            }

            A = trans(T) * T;
            arma::vec h_coeffs;
            arma::eig_sym(h_coeffs, _v_orbs, A);
            for (std::size_t i = 0; i < no_virt / 2; ++i)
                _v_orbs.swap_cols(i, no_virt - i - 1);
        }

        const arma::vec& NTO::coeffs() const { return _coeffs; }

        const arma::mat& NTO::e_orbs() const { return _v_orbs; }

        const arma::mat& NTO::h_orbs() const { return _o_orbs; }
    }
}
