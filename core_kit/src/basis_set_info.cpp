/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/basis_set_info.hpp"

#include <algorithm>
#include <iterator>
#include <numeric>

#include <boost/lambda/algorithm.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/lambda/lambda.hpp>

namespace niedoida {

    namespace core {

        BasisSetInfo::BasisSetInfo(const BasisSet& basis_set)
        {
            using namespace boost::lambda;

            std::vector<const Shell*> shells;
            for (auto abs : basis_set.atomic_basis_sets())
                for (auto shell : abs->valence_shells())
                    shells.push_back(shell);

            for (const Shell* shell : shells)
                m_shell_sizes.push_back(shell->real_size());

            m_max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());

            m_first_contraction_in_shell.push_back(0);
            std::partial_sum(m_shell_sizes.begin(),
                             std::prev(m_shell_sizes.end()),
                             back_inserter(m_first_contraction_in_shell));

            m_no_shells = m_shell_sizes.size();
            m_no_contractions = basis_set.real_size();

            m_no_atoms = basis_set.atomic_basis_sets().size();

            m_first_contraction_in_atom = std::vector<std::size_t>(m_no_atoms);
            m_no_contractions_in_atom = std::vector<std::size_t>(m_no_atoms);

            const std::vector<core::AtomicBasisSet*>& abs =
                basis_set.atomic_basis_sets();

            m_first_contraction_in_atom[0] = 0;
            m_no_contractions_in_atom[0] = abs[0]->real_size();
            for (std::size_t i = 1; i < m_no_atoms; ++i) {
                m_no_contractions_in_atom[i] = abs[i]->real_size();
                m_first_contraction_in_atom[i] =
                    m_first_contraction_in_atom[i - 1] +
                    m_no_contractions_in_atom[i - 1];
            }
        }
    }
}
