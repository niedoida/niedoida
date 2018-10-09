/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/significant_shell_pairs_generator.hpp"

namespace niedoida {

    namespace core {

        SignificantShellPairsGenerator::SignificantShellPairsGenerator(
            const std::size_t no_shells,
            const SchwartzEstimator& se,
            const double threshold)
        {
            double max_ket = 0;
            for (unsigned i = 0; i < no_shells; ++i)
                for (unsigned j = i; j < no_shells; ++j) {
                    ShellQuartetIndex ijij = {{i, j, i, j}};
                    const double ij_ket = std::sqrt(se.max_integral(ijij));
                    if (ij_ket > max_ket)
                        max_ket = ij_ket;
                }

            for (unsigned i = 0; i < no_shells; ++i)
                for (unsigned j = i; j < no_shells; ++j) {
                    ShellQuartetIndex ijij = {{i, j, i, j}};
                    const double ij_ket = std::sqrt(se.max_integral(ijij));
                    if (ij_ket * max_ket > threshold)
                        m_shell_pairs.push_back(std::make_pair(i, j));
                }
        }

        const std::vector<std::pair<unsigned, unsigned>>&
        SignificantShellPairsGenerator::shell_pairs() const
        {
            return m_shell_pairs;
        }
    }
}
