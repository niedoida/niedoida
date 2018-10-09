/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/spectroscopic_properties.hpp"

namespace niedoida {
    namespace core {
        arma::vec
        calc_ir_frequencies_from_hessian(arma::mat& hessian,
                                         std::shared_ptr<const System> system)
        {
            arma::mat mass_weighted_hessian(hessian.n_rows, hessian.n_cols);

            for (unsigned atom1 = 0; atom1 < hessian.n_rows; atom1++) {
                for (unsigned atom2 = 0; atom2 < hessian.n_cols; atom2++) {
                    double atomMass1 = 0;
                    double atomMass2 = 0;
                    mass_weighted_hessian(atom1, atom2) =
                        hessian(atom1, atom2) /
                        std::sqrt(atomMass1 * atomMass2);
                }
            }
            arma::vec ir_freqs = arma::eig_sym(mass_weighted_hessian);

            return ir_freqs;
        }
    }
}
