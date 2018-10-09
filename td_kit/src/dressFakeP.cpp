/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/log.hpp"
#include "td_kit/dress.hpp"
#include <cassert>
#include <cmath>

namespace niedoida {
    namespace td {
        void Dress::makePseudoDensityMatrix(
            const std::vector<std::pair<std::pair<std::size_t, std::size_t>,
                                        double>>& H_dd_vector,
            std::vector<arma::cube>& fakeP)
        {

            m_ia2fakePind.clear();
            std::list<std::size_t> unique_p;

            for (std::size_t dd_it = 0; dd_it < H_dd_vector.size(); ++dd_it) {
                std::size_t i = H_dd_vector[dd_it].first.first;
                std::size_t a = H_dd_vector[dd_it].first.second;

                unique_p.push_back(i);
                unique_p.push_back(a + no_occ);
            }

            unique_p.unique();
            unique_p.sort();

            fakeP[core::SPIN_ALPHA].set_size(
                m_mo_coeffs.n_rows, m_mo_coeffs.n_rows, unique_p.size());
            fakeP[core::SPIN_BETA].set_size(
                m_mo_coeffs.n_rows, m_mo_coeffs.n_rows, unique_p.size());

            int fakePind = 0;
            for (std::list<std::size_t>::iterator pIt = unique_p.begin();
                 pIt != unique_p.end();
                 pIt++, fakePind++) {
                std::size_t p = *pIt;
                arma::vec Ccut = m_mo_coeffs.col(p);

                arma::mat fP = Ccut * Ccut.t();

                fakeP[core::SPIN_ALPHA].slice(fakePind) = fP;
                fakeP[core::SPIN_BETA].slice(fakePind) = fP;
                m_ia2fakePind[p] = fakePind;
            }
        }
    }
}