/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/find_symmetry_utils.hpp"
#include "symmetry_kit/symmetry_info.hpp"

namespace niedoida {
    namespace symmetry {
        void SymmetryInfo::symmetrize_coords(const arma::mat& coords)
        {
            const std::size_t no_atoms = coords.n_cols;
            const std::size_t rank = _finite_symmetry_group->rank();

            std::vector<bool> done(no_atoms, false);
            std::vector<bool> unique(no_atoms, true);
            std::vector<unsigned> unique_atoms;

            arma::mat symmetrized_coords(no_atoms, 3);
            symmetrized_coords.zeros();
            for (std::size_t a = 0; a < no_atoms; ++a) {
                if (unique[a]) {
                    arma::vec vec_start = coords.col(a);
                    for (std::size_t e = 1; e < rank; ++e) { // because identity
                        const std::size_t a_prim = _perm_rep[e][a];
                        if (a_prim == a) {
                            std::vector<arma::vec> indirects;
                            arma::mat rep =
                                _finite_symmetry_group->elements()[e];
                            arma::vec vec_buf;
                            vec_buf = rep * vec_start;
                            if (arma::norm(vec_buf - vec_start, "inf") > 1e-3)
                                indirects.push_back(vec_start);
                            else
                                continue;
                            int order =
                                _finite_symmetry_group->element_order()[e];
                            for (int i = 0; i < order - 1; i++) {
                                indirects.push_back(vec_buf);
                                vec_buf = rep * vec_buf;
                            }
                            vec_buf.zeros();
                            for (std::vector<arma::vec>::iterator it =
                                     indirects.begin();
                                 it != indirects.end();
                                 it++) {
                                for (int col = 0; col < 3; col++) {
                                    vec_buf(col) += (*it)(col);
                                }
                            }
                            for (int col = 0; col < 3; col++) {
                                symmetrized_coords(a, col) =
                                    vec_buf(col) / indirects.size();
                            }
                            done[a] = true;
                        } else {
                            unique[a_prim] = false;
                        }
                    }
                    unique_atoms.push_back(a);
                }
            }
            for (std::size_t a = 0; a < no_atoms; ++a) {
                if (!done[a]) {
                    arma::vec buf = coords.col(a);
                    symmetrized_coords(a, 0) = buf(0);
                    symmetrized_coords(a, 1) = buf(1);
                    symmetrized_coords(a, 2) = buf(2);
                    done[a] = true;
                }

                for (std::size_t e = 0; e < rank; ++e) {
                    const std::size_t b = _perm_rep[e][a];

                    if (done[b])
                        continue;

                    arma::vec buf =
                        _finite_symmetry_group->elements()[e] * coords.col(a);

                    symmetrized_coords(b, 0) = buf(0);
                    symmetrized_coords(b, 1) = buf(1);
                    symmetrized_coords(b, 2) = buf(2);

                    done[b] = true;
                }
            }

            _unique_atoms = unique_atoms;
            _symmetrized_coords = symmetrized_coords;
        }
    }
}
