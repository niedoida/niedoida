/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "property_kit/multipole_moments.hpp"

namespace niedoida {
    namespace property {
        DipoleMoment::DipoleMoment(
            std::shared_ptr<const core::System> system,
            const std::vector<arma::mat>& dipole_matrices,
            const arma::mat& P) :
            d_n(3, arma::fill::zeros),
            d_e(3, arma::fill::zeros)
        {
            // nuclear component
            for (unsigned a = 0; a < system->atoms.size(); ++a) {
                const unsigned no_electrons =
                    system->atoms[a]->isotope->element->atomic_number;
                for (unsigned k = 0; k < 3; ++k)
                    d_n[k] += no_electrons * system->atoms[a]->coords[k];
            }

            // electronic component
            const unsigned n = system->basis_set.real_size();
            for (unsigned k = 0; k < 3; ++k)
                for (unsigned i = 0; i < n; ++i)
                    for (unsigned j = 0; j < n; ++j)
                        d_e[k] -= P(i, j) * dipole_matrices[k](j, i);
        }

        QuadrupoleMoment::QuadrupoleMoment(
            std::shared_ptr<const core::System> system,
            const arma::field<arma::mat>& quadrupole_matrices,
            const arma::mat& P) :
            q_n(3, 3, arma::fill::zeros),
            q_e(3, 3, arma::fill::zeros)
        {
            // nuclear component
            for (unsigned a = 0; a < system->atoms.size(); ++a) {
                const unsigned no_electrons =
                    system->atoms[a]->isotope->element->atomic_number;
                for (unsigned k = 0; k < 3; ++k)
                    for (unsigned l = k; l < 3; ++l)
                        q_n(k, l) += no_electrons *
                                     system->atoms[a]->coords[k] *
                                     system->atoms[a]->coords[l];
            }

            q_n = 3 * q_n - trace(q_n) * arma::eye<arma::mat>(3, 3);

            // electronic component
            const unsigned n = system->basis_set.real_size();
            for (unsigned i = 0; i < n; ++i)
                for (unsigned j = 0; j < n; ++j)
                    for (unsigned k = 0; k < 3; ++k)
                        for (unsigned l = k; l < 3; ++l)
                            q_e(k, l) -=
                                P(i, j) * quadrupole_matrices(k, l)(j, i);

            q_e = 3 * q_e - trace(q_e) * arma::eye<arma::mat>(3, 3);
        }
    }
}
