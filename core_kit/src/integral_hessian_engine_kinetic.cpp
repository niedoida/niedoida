/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/hessian_engine.hpp"

//#include "misc/math_consts.hpp"

#include <cmath>

#include <boost/math/special_functions/gamma.hpp>

#include "misc_kit/special_functions.hpp"

#include "gto_d2_kit/d2_kinetic_matrix.hpp"

namespace niedoida {
    namespace core {
        void OneElectronD2IntegralEngine::d2_kinetic(std::size_t A,
                                                     std::size_t B,
                                                     arma::mat& d2kxx,
                                                     arma::mat& d2kxy,
                                                     arma::mat& d2kxz,
                                                     arma::mat& d2kyy,
                                                     arma::mat& d2kyz,
                                                     arma::mat& d2kzz) const
        {
            clear_overlap_kinetic_matrices(
                d2kxx, d2kxy, d2kxz, d2kyy, d2kyz, d2kzz);
            const std::size_t first_Ai = _first_contraction_on_atom[A];
            // std::cout<<"Atomy: "<<A<< " "<<B<<std::endl;
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

                                    D2K d2k = ad2k[Al][Bl];

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

                                            d2k(ae,
                                                be,
                                                cc,
                                                xAB,
                                                yAB,
                                                zAB,
                                                d2kxx.memptr(),
                                                d2kxy.memptr(),
                                                d2kxz.memptr(),
                                                d2kyy.memptr(),
                                                d2kyz.memptr(),
                                                d2kzz.memptr(),
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

                                D2K d2k = ad2k[Al][Bl];

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

                                        d2k(ae,
                                            be,
                                            cc,
                                            xAB,
                                            yAB,
                                            zAB,
                                            d2kxx.memptr(),
                                            d2kxy.memptr(),
                                            d2kxz.memptr(),
                                            d2kyy.memptr(),
                                            d2kyz.memptr(),
                                            d2kzz.memptr(),
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
