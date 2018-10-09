/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_BASIS_SET_INFO_HPP
#define NIEDOIDA_CORE_KIT_BASIS_SET_INFO_HPP

#include <vector>

#include "core_kit/system.hpp"

namespace niedoida {

    namespace core {
        
        class BasisSetInfo {
        public:
            BasisSetInfo(const BasisSet&);
            
            virtual ~BasisSetInfo() {}
            
            std::vector<std::size_t> m_shell_sizes;
            std::size_t m_max_shell_size;
            std::vector<std::size_t> m_first_contraction_in_shell;
            
            std::vector<std::size_t> m_first_contraction_in_atom;
            std::vector<std::size_t> m_no_contractions_in_atom;
            
            std::size_t m_no_atoms;
            std::size_t m_no_shells;
            
            std::size_t m_no_contractions;
        };
    }
}

#endif
