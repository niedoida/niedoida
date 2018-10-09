/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "posthf_kit/lt_mp2.hpp"

#include <ext/numeric>

namespace niedoida {

    namespace posthf {

        LT_AO_MP2_2EIntegrals::LT_AO_MP2_2EIntegrals(
            std::shared_ptr<const niedoida::core::System> system,
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine>
                two_e_int_eng) :
            MP2_BasisStructure(system),
            m_2ei(std::move(two_e_int_eng)),
            m_max_no_requests(m_2ei->preferred_no_requests())
        {
            m_requests.reserve(m_max_no_requests);

            const std::size_t max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());
            m_buf.resize(boost::extents[m_max_no_requests *
                                        __gnu_cxx::power(max_shell_size, 4)]);
        }
    }
}
