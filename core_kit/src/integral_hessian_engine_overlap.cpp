/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/hessian_engine.hpp"

//#include "misc/math_consts.hpp"

#include <cmath>

#include <boost/math/special_functions/gamma.hpp>

#include "gto_d2_kit/d2_overlap_matrix.hpp"
#include "misc_kit/special_functions.hpp"

namespace niedoida {
    namespace core {
        void OneElectronD2IntegralEngine::d2_overlap(std::size_t A,
                                                     std::size_t B,
                                                     arma::mat& d2sxx,
                                                     arma::mat& d2sxy,
                                                     arma::mat& d2sxz,
                                                     arma::mat& d2syy,
                                                     arma::mat& d2syz,
                                                     arma::mat& d2szz) const
        {
            clear_overlap_kinetic_matrices(
                d2sxx, d2sxy, d2sxz, d2syy, d2syz, d2szz);

            const std::size_t first_Ai = _first_contraction_on_atom[A];

            if (A == B) {
                for (B = 0; B < _no_atoms; ++B) {
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
                                 Bsi < _first_shell_on_atom[B] +
                                           _no_shells_on_atom[B];
                                 ++Bsi) {
                                const Shell& Bs = _shells[Bsi];

                                for (unsigned Bss = 0; Bss < Bs.coeffs.n_rows;
                                     ++Bss) {

                                    const unsigned Bl = Bs.l[Bss];

                                    D2S d2s = ad2s[Al][Bl];

                                    for (std::size_t p = 0; p < As.exps.size();
                                         ++p) {

                                        const double ae = As.exps[p];
                                        const double ac = As.coeffs(Ass, p);

                                        for (std::size_t q = 0;
                                             q < Bs.exps.size();
                                             ++q) {
                                            const double be = Bs.exps[q];
                                            const double bc = Bs.coeffs(Bss, q);

                                            const double cc =
                                                ac * bc *
                                                std::exp(-RAB2 * ae * be /
                                                         (ae + be));

                                            d2s(ae,
                                                be,
                                                cc,
                                                xAB,
                                                yAB,
                                                zAB,
                                                d2sxx.memptr(),
                                                d2sxy.memptr(),
                                                d2sxz.memptr(),
                                                d2syy.memptr(),
                                                d2syz.memptr(),
                                                d2szz.memptr(),
                                                true,
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
            } else {

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

                                D2S d2s = ad2s[Al][Bl];

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

                                        d2s(ae,
                                            be,
                                            cc,
                                            xAB,
                                            yAB,
                                            zAB,
                                            d2sxx.memptr(),
                                            d2sxy.memptr(),
                                            d2sxz.memptr(),
                                            d2syy.memptr(),
                                            d2syz.memptr(),
                                            d2szz.memptr(),
                                            false,
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
        }
    }
}
