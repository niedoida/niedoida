/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/core_utils.hpp"

#include <algorithm>

#include <boost/format.hpp>

namespace niedoida {

    namespace core {

        std::vector<std::string> ao_labels(const BasisSet& basis_set)
        {
            std::vector<std::string> labels;

            for (std::size_t a = 0; a < basis_set.atomic_basis_sets().size();
                 ++a) {
                std::vector<std::string> l =
                    ao_labels(*basis_set.atomic_basis_sets()[a]);
                std::copy(l.begin(), l.end(), std::back_inserter(labels));
            }

            return labels;
        }

        std::vector<std::string> ao_labels(const AtomicBasisSet& abs)
        {
            std::vector<std::string> labels;

            for (std::size_t s = 0; s < abs.valence_shells().size(); ++s) {
                const Shell& shell = *abs.valence_shells()[s];

                for (std::size_t i = 0; i < shell.naive_size(); ++i) {
                    const int l = shell.l()[i];

                    const char shell_symbol = l_to_shell_symbol(l);

                    for (int m = -l; m <= l; ++m) {
                        switch (l) {
                        case 0:
                            labels.push_back(
                                (boost::format("%1c%2s") % shell_symbol % "  ")
                                    .str());
                            break;
                        case 1:
                            labels.push_back(
                                (boost::format("%1c%2c") % shell_symbol %
                                 static_cast<char>('y' + m))
                                    .str());
                            break;
                        default:
                            labels.push_back(
                                (boost::format("%1c%2d") % shell_symbol % m)
                                    .str());
                            break;
                        }
                    }
                }
            }

            return labels;
        }
    }
}
