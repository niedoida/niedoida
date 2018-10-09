/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/hessian_engine.hpp"
#include <map>

#include "misc_kit/special_functions.hpp"

#include "gto_d2_kit/d2_ne_matrix.hpp"

namespace niedoida {
    namespace core {
        void OneElectronD2IntegralEngine::d2_ne(std::size_t D,
                                                std::size_t E,
                                                arma::mat& d2nexx,
                                                arma::mat& d2nexy,
                                                arma::mat& d2nexz,
                                                arma::mat& d2neyx,
                                                arma::mat& d2neyy,
                                                arma::mat& d2neyz,
                                                arma::mat& d2nezx,
                                                arma::mat& d2nezy,
                                                arma::mat& d2nezz) const
        {
            // if( E > D)
            //    std::swap(D, E);
            clear_coulomb_matrices(d2nexx,
                                   d2nexy,
                                   d2nexz,
                                   d2neyx,
                                   d2neyy,
                                   d2neyz,
                                   d2nezx,
                                   d2nezy,
                                   d2nezz);

            for (std::size_t C = 0; C < _no_atoms; ++C) {

                const double xC = _r(C, 0);
                const double yC = _r(C, 1);
                const double zC = _r(C, 2);

                const unsigned int charge = _charge[C];

                for (std::size_t A = 0; A < _no_atoms; ++A) {

                    const double xA = _r(A, 0);
                    const double yA = _r(A, 1);
                    const double zA = _r(A, 2);

                    for (std::size_t B = 0; B < _no_atoms; ++B) {

                        if ((A == B && A == C))
                            continue;

                        const std::size_t first_Ai =
                            _first_contraction_on_atom[A];
                        const std::size_t first_Bi =
                            _first_contraction_on_atom[B];

                        const double xB = _r(B, 0);
                        const double yB = _r(B, 1);
                        const double zB = _r(B, 2);

                        // current contraction centered on atom A
                        std::size_t Ai = first_Ai;

                        for (std::size_t Asi = _first_shell_on_atom[A];
                             Asi <
                             _first_shell_on_atom[A] + _no_shells_on_atom[A];
                             ++Asi) {
                            const Shell& As = _shells[Asi];

                            for (unsigned Ass = 0; Ass < As.coeffs.n_rows;
                                 ++Ass) {

                                const unsigned Al = As.l[Ass];

                                // current contraction centered on atom B
                                std::size_t Bi = first_Bi;

                                for (std::size_t Bsi = _first_shell_on_atom[B];
                                     Bsi < _first_shell_on_atom[B] +
                                               _no_shells_on_atom[B];
                                     ++Bsi) {
                                    const Shell& Bs = _shells[Bsi];

                                    for (unsigned Bss = 0;
                                         Bss < Bs.coeffs.n_rows;
                                         ++Bss) {

                                        const unsigned Bl = Bs.l[Bss];

                                        const unsigned N = Al + Bl;

                                        for (std::size_t p = 0;
                                             p < As.exps.size();
                                             ++p) {

                                            const double ae = As.exps[p];
                                            const double ac = As.coeffs(Ass, p);

                                            for (std::size_t q = 0;
                                                 q < Bs.exps.size();
                                                 ++q) {
                                                const double be = Bs.exps[q];
                                                const double bc =
                                                    Bs.coeffs(Bss, q);

                                                const double ccc =
                                                    charge * ac * bc;

                                                const double gamma = ae + be;

                                                const double rp[3] = {
                                                    (ae * xA + be * xB) / gamma,
                                                    (ae * yA + be * yB) / gamma,
                                                    (ae * zA + be * zB) /
                                                        gamma};

                                                const double cp2 =
                                                    (rp[0] - xC) *
                                                        (rp[0] - xC) +
                                                    (rp[1] - yC) *
                                                        (rp[1] - yC) +
                                                    (rp[2] - zC) * (rp[2] - zC);

                                                arma::vec bs(N + 3);
                                                misc::fast_boys
                                                    .generalized_boys(
                                                        N + 2,
                                                        cp2 * gamma,
                                                        ccc,
                                                        bs.memptr());

                                                unsigned firstInd, secondInd;
                                                std::size_t atoms[] = {A, B, C};
                                                for (int atomInd1 = 0;
                                                     atomInd1 < 3;
                                                     atomInd1++) {
                                                    if (D == atoms[atomInd1])
                                                        firstInd = atomInd1;
                                                    else
                                                        continue;
                                                    for (int atomInd2 = 0;
                                                         atomInd2 < 3;
                                                         atomInd2++) {
                                                        if (E ==
                                                            atoms[atomInd2])
                                                            secondInd =
                                                                atomInd2;
                                                        else
                                                            continue;

                                                        vned2
                                                            [Al][Bl][firstInd]
                                                            [secondInd](
                                                                ae,
                                                                be,
                                                                xA,
                                                                yA,
                                                                zA,
                                                                xB,
                                                                yB,
                                                                zB,
                                                                xC,
                                                                yC,
                                                                zC,
                                                                bs.memptr(),
                                                                d2nexx.memptr(),
                                                                d2nexy.memptr(),
                                                                d2nexz.memptr(),
                                                                d2neyx.memptr(),
                                                                d2neyy.memptr(),
                                                                d2neyz.memptr(),
                                                                d2nezx.memptr(),
                                                                d2nezy.memptr(),
                                                                d2nezz.memptr(),
                                                                _no_contractions,
                                                                Ai,
                                                                Bi);
                                                    }
                                                }
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
    }
}
