/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/basis_set.hpp"

#include <cassert>

namespace niedoida {

    namespace core {

        Shell::Shell(AtomicBasisSet& abs) :
            m_atomic_basis_set(abs),
            m_l_min(0),
            m_l_max(0)
        {
        }

        void Shell::fill(const std::vector<unsigned>& l,
                         const arma::vec& primitive_exps,
                         const arma::mat& contraction_coeffs)
        {
            assert(l.size() == contraction_coeffs.n_rows);

            m_l = l;
            m_primitive_exps = primitive_exps;
            m_contraction_coeffs = contraction_coeffs;

            m_l_max = *std::max_element(m_l.begin(), m_l.end());
            m_l_min = *std::min_element(m_l.begin(), m_l.end());
        }

        unsigned Shell::real_size() const
        {
            unsigned a = 0;
            for (unsigned i = 0; i < m_l.size(); ++i)
                a += 2 * m_l[i] + 1;

            return a;
        }

        unsigned Shell::cartesian_size() const
        {
            unsigned a = 0;
            for (unsigned i = 0; i < m_l.size(); ++i)
                a += (m_l[i] + 1) * (m_l[i] + 2) / 2;

            return a;
        }
    }
}
