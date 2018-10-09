/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/core_utils.hpp"

#include <algorithm>
#include <cassert>
#include <cctype>
#include <iterator>
#include <numeric>

#include <boost/lambda/algorithm.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/lambda/lambda.hpp>

namespace niedoida {
    namespace core {
        char l_to_shell_symbol(unsigned l)
        {
            static const char symbols[] = "spdfg";

            assert(l < 5);

            return symbols[l];
        }

        unsigned shell_symbol_to_l(char s)
        {
            switch (std::tolower(s)) {
            case 's':
                return 0;

            case 'p':
                return 1;

            case 'd':
                return 2;

            case 'f':
                return 3;

            case 'g':
                return 4;

            default:
                assert(false);
            }
        }

        std::vector<std::size_t>
        no_contractions_in_atom(const BasisSet& basis_set)
        {
            using namespace boost::lambda;

            std::vector<std::size_t> n;

            std::transform(basis_set.atomic_basis_sets().begin(),
                           basis_set.atomic_basis_sets().end(),
                           std::back_inserter(n),
                           bind(&AtomicBasisSet::real_size, _1));

            return n;
        }

        std::vector<std::size_t>
        first_contraction_in_atom(const BasisSet& basis_set)
        {
            const std::vector<std::size_t> n =
                no_contractions_in_atom(basis_set);
            std::vector<std::size_t> f;

            f.push_back(0);
            std::partial_sum(n.begin(), std::prev(n.end()), back_inserter(f));

            return f;
        }
    }
}
