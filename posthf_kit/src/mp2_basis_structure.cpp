/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "posthf_kit/lt_mp2.hpp"

namespace niedoida {

    namespace posthf {

        MP2_BasisStructure::MP2_BasisStructure(
            std::shared_ptr<const niedoida::core::System> system)
        {
            m_no_frozen = 0;
            m_no_deleted = 0;

            std::vector<niedoida::core::Shell*> shells;
            for (const niedoida::core::AtomicBasisSet* abs :
                 system->basis_set.atomic_basis_sets())
                for (auto shell : abs->valence_shells())
                    shells.push_back(shell);

            m_no_shells = shells.size();

            for (const niedoida::core::Shell* s : shells)
                m_shell_sizes.push_back(s->real_size());

            m_no_contractions =
                std::accumulate(m_shell_sizes.begin(), m_shell_sizes.end(), 0u);

            m_n = m_no_contractions;

            m_first_contraction_in_shell.push_back(0);
            std::partial_sum(m_shell_sizes.begin(),
                             boost::prior(m_shell_sizes.end()),
                             back_inserter(m_first_contraction_in_shell));

            m_no_occ =
                system->no_electrons(niedoida::core::SPIN_ALPHA) - m_no_frozen;
            m_no_virt = m_n - m_no_occ - m_no_frozen - m_no_deleted;
        }
    }
}
