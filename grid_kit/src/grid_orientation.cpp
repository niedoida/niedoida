/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/grid_utils.hpp"
#include "io_kit/log.hpp"

namespace {

    using namespace niedoida;

    arma::vec T(const core::System& s)
    {
        arma::vec t(3, arma::fill::zeros);
        double zz = 0;
        const std::size_t no_atoms = s.atoms.size();

        for (std::size_t a = 0; a < no_atoms; ++a) {
            const core::Atom& atom = *s.atoms[a];
            const double z = atom.isotope->element->atomic_number;
            t += z * atom.coords;
            zz += z;
        }

        return t / zz;
    }

    arma::mat M(const core::System& s)
    {
        const arma::vec t = T(s);

        arma::mat m(3, 3, arma::fill::zeros);

        const std::size_t no_atoms = s.atoms.size();

        for (std::size_t a = 0; a < no_atoms; ++a) {
            const core::Atom& atom = *s.atoms[a];
            const double z = atom.isotope->element->atomic_number;

            const arma::vec p = atom.coords - t;

            m += z *
                 (dot(p, p) * arma::eye<arma::mat>(3, 3) - p * arma::trans(p));
        }

        return m;
    }
}

namespace niedoida {
    namespace grid {
        arma::mat grid_orientation(const core::System& s)
        {
            const arma::mat m = M(s);

            arma::vec eval;
            arma::mat evec;

            eig_sym(eval, evec, M(s));

            return evec;
        }
    }
}
