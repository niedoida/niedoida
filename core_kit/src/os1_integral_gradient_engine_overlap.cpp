/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/os1_integral_gradient_engine.hpp"
#include "gto_d1_kit/gto_d1_kit.hpp"

#include <cmath>

#include <boost/math/special_functions/gamma.hpp>

#include "misc_kit/special_functions.hpp"

#include "io_kit/logger.hpp"

namespace niedoida {
    namespace core {
        void OS1OneElectronIntegralGradientEngine::overlap_gradient(
            std::size_t A, arma::mat& gx, arma::mat& gy, arma::mat& gz) const
        {
            clear_matrices(gx, gy, gz);

            const std::size_t first_Ai = _first_contraction_on_atom[A];

            for (std::size_t B = 0; B < _no_atoms; ++B) {

                if (A == B)
                    continue;

                const std::size_t first_Bi = _first_contraction_on_atom[B];

                const double xAB = _xAB(A, B);
                const double yAB = _yAB(A, B);
                const double zAB = _zAB(A, B);

                const double xAB2 = xAB * xAB;
                const double yAB2 = yAB * yAB;
                const double zAB2 = zAB * zAB;

                const double RAB2 = xAB2 + yAB2 + zAB2;

                // current contraction centered on atom A
                std::size_t Ai = first_Ai;

                for (std::size_t Asi = _first_shell_on_atom[A];
                     Asi < _first_shell_on_atom[A] + _no_shells_on_atom[A];
                     ++Asi) {
                    const Shell& As = _shells[Asi];

                    for (unsigned Ass = 0; Ass < As.coeffs.n_rows; ++Ass) {

                        const unsigned Al = As.l[Ass];

                        // current contraction centered on atom B
                        std::size_t Bi = first_Bi;

                        for (std::size_t Bsi = _first_shell_on_atom[B];
                             Bsi <
                             _first_shell_on_atom[B] + _no_shells_on_atom[B];
                             ++Bsi) {
                            const Shell& Bs = _shells[Bsi];

                            for (unsigned Bss = 0; Bss < Bs.coeffs.n_rows;
                                 ++Bss) {

                                const unsigned Bl = Bs.l[Bss];

                                for (std::size_t p = 0; p < As.exps.size();
                                     ++p) {

                                    const double ae = As.exps[p];
                                    const double ac = As.coeffs(Ass, p);

                                    for (std::size_t q = 0; q < Bs.exps.size();
                                         ++q) {

                                        const double be = Bs.exps[q];
                                        const double bc = Bs.coeffs(Bss, q);

                                        const double cc =
                                            ac * bc *
                                            std::exp(-RAB2 * ae * be /
                                                     (ae + be));

                                        gto_overlap_gradient(Al,
                                                             Bl,
                                                             ae,
                                                             be,
                                                             cc,
                                                             xAB,
                                                             yAB,
                                                             zAB,
                                                             gx.memptr(),
                                                             gy.memptr(),
                                                             gz.memptr(),
                                                             _no_contractions,
                                                             Ai,
                                                             Bi);
                                    }
                                }
                                Bi += 2 * Bl + 1;
                            }
                        }
                        Ai += 2 * Al + 1;
                    }
                }
            }

            gx += trans(gx);
            gy += trans(gy);
            gz += trans(gz);
        }
    }
}
