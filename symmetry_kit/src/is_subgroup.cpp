/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

namespace niedoida {
    namespace symmetry {
        bool is_subgroup(const FiniteSymmetryGroup& sub,
                         const FiniteSymmetryGroup& super)
        {
            const std::vector<arma::mat>& sub_elements = sub.elements();
            const std::vector<arma::mat>& super_elements = super.elements();

            for (std::size_t i = 0; i < sub_elements.size(); ++i) {
                bool found = false;
                for (std::size_t j = 0; j < super_elements.size(); ++j) {
                    const arma::mat& a = sub_elements[i];
                    const arma::mat& b = super_elements[j];
                    if (norm(a - b, "inf") < 1e-3) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    return false;
                }
            }

            return true;
        }
    }
}
