/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEOIDA_TD_KIT_NTO_HPP
#define NIEOIDA_TD_KIT_NTO_HPP

#include <armadillo>

namespace niedoida {
    namespace td {
        class NTO {
        public:
            NTO(const arma::mat& T);

            const arma::vec& coeffs() const;
            const arma::mat& e_orbs() const;
            const arma::mat& h_orbs() const;

        private:
            arma::mat _o_orbs;
            arma::mat _v_orbs;
            arma::vec _coeffs;
        };
    }
}

#endif
