/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_utils.hpp"

#include <cassert>

namespace niedoida {
    namespace symmetry {

        arma::vec transform_to_mass_center(arma::mat& coords,
                                           const std::vector<unsigned>& q)
        {
            assert(coords.n_cols == q.size());
            double mass_sum = 0;
            double x_weight = 0;
            double y_weight = 0;
            double z_weight = 0;

            unsigned size = q.size();
            for (std::size_t atom = 0; atom < size; ++atom) {
                mass_sum += q[atom];
                x_weight += q[atom] * coords(0, atom);
                y_weight += q[atom] * coords(1, atom);
                z_weight += q[atom] * coords(2, atom);
            }
            x_weight /= mass_sum;
            y_weight /= mass_sum;
            z_weight /= mass_sum;
            for (std::size_t atom = 0; atom < size; atom++) {
                coords(0, atom) -= x_weight;
                coords(1, atom) -= y_weight;
                coords(2, atom) -= z_weight;
            }
            arma::vec vec_trans(3);
            vec_trans[0] = x_weight;
            vec_trans[1] = y_weight;
            vec_trans[2] = z_weight;
            return vec_trans;
        }
    }
}
