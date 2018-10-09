/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_SIGNIFICANT_SHELL_PAIRS_GENERATOR_HPP
#define NIEDOIDA_CORE_KIT_SIGNIFICANT_SHELL_PAIRS_GENERATOR_HPP

#include "schwartz_estimator.hpp"

namespace niedoida {

    namespace core {

        class SignificantShellPairsGenerator {
        public:
            SignificantShellPairsGenerator(
                const std::size_t,
                const SchwartzEstimator&,
                const double);

            const std::vector<std::pair<unsigned, unsigned> >& shell_pairs() const;

        private:
            std::vector<std::pair<unsigned, unsigned> > m_shell_pairs;
        };

    }
}

#endif
