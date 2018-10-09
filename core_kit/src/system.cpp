/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/system.hpp"

namespace niedoida {

    namespace core {

        System::System() :
            uniform_electric_field(3, arma::fill::zeros),
            no_core_electrons(0)
        {
        }

        System::~System()
        {
            for (std::size_t a = 0; a < atoms.size(); ++a)
                delete atoms[a];
            for (std::size_t i = 0; i < ext_chrgs.size(); ++i)
                delete ext_chrgs[i];
        }

        unsigned System::no_electrons(Spin s) const
        {
            const unsigned n = no_electrons();
            const unsigned u = multiplicity - 1;
            const unsigned p = (n - u) / 2;

            return s == SPIN_ALPHA ? p + u : p;
        }

        unsigned System::no_electrons() const
        {
            unsigned n = 0;
            for (const Atom* a : atoms)
                n += a->isotope->element->atomic_number;

            return n - charge - no_core_electrons;
        }

        arma::vec System::occupations(Spin s) const
        {
            arma::vec occ(basis_set.real_size(), arma::fill::zeros);

            const unsigned n = no_electrons(s);

            for (unsigned i = 0; i < n; ++i)
                occ(i) = 1;

            return occ;
        }
    }
}
