/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/hessian_engine.hpp"

#include <cstring>
#include <iostream>

#include <boost/math/special_functions/gamma.hpp>

#include "gto_d2_kit/d2_ee_matrix.hpp"
#include "misc_kit/special_functions.hpp"

namespace niedoida {
    namespace core {

        OS1TwoElectronD2IntegralEngine::OS1TwoElectronD2IntegralEngine(
            std::shared_ptr<const System> system) :
            _r(arma::zeros<arma::mat>(system->atoms.size(), 3))
        {
            _no_atoms = system->atoms.size();
            for (std::size_t C = 0; C < _no_atoms; ++C) {
                const arma::vec coords = system->atoms[C]->coords;
                _r(C, 0) = coords[0];
                _r(C, 1) = coords[1];
                _r(C, 2) = coords[2];
            }

            for (std::size_t A = 0, first_Ai = 0; A < _no_atoms;
                 first_Ai +=
                 system->basis_set.atomic_basis_sets()[A++]->real_size())
                _first_contraction_on_atom.push_back(first_Ai);

            for (std::size_t A = 0, first_shell = 0; A < _no_atoms; ++A) {

                const AtomicBasisSet& Abs =
                    *system->basis_set.atomic_basis_sets()[A];

                _first_subshell_on_atom.push_back(first_shell);

                unsigned count_subshell = 0;

                for (std::size_t Asi = 0; Asi < Abs.valence_shells().size();
                     ++Asi)
                    for (std::size_t subshell = 0;
                         subshell < Abs.valence_shells()[Asi]->l().size();
                         ++subshell)
                        count_subshell++;

                _no_subshells_on_atom.push_back(count_subshell);

                first_shell += count_subshell;
                for (std::size_t Asi = 0; Asi < Abs.valence_shells().size();
                     ++Asi) {
                    for (std::size_t subshell = 0;
                         subshell < Abs.valence_shells()[Asi]->l().size();
                         ++subshell) {

                        arma::vec row(Abs.valence_shells()[Asi]
                                          ->contraction_coeffs()
                                          .n_cols);

                        for (unsigned iterator = 0; iterator < row.size();
                             ++iterator)
                            row[iterator] =
                                Abs.valence_shells()[Asi]->contraction_coeffs()(
                                    subshell, iterator);

                        Subshell As = {
                            Abs.valence_shells()[Asi]->l()[subshell],
                            Abs.valence_shells()[Asi]->primitive_exps(),
                            row};

                        const unsigned l = As.l;
                        for (unsigned q = 0; q < As.coeffs.size(); ++q)
                            As.coeffs[q] *=
                                std::sqrt(2 / boost::math::tgamma(1.5 + l)) *
                                std::pow(2 * As.exps[q], 0.75 + l / 2.0) *
                                std::sqrt((2 * l + 1) / (4 * M_PI));

                        _subshells.push_back(As);
                    }
                }
            }

            for (std::size_t A = 0, first_subshell = 0; A < _no_atoms; ++A) {
                const AtomicBasisSet& Abs =
                    *system->basis_set.atomic_basis_sets()[A];

                for (std::size_t Asi = 0; Asi < Abs.valence_shells().size();
                     ++Asi) {
                    _first_subshell_in_shell.push_back(first_subshell);

                    const unsigned no_subshells =
                        Abs.valence_shells()[Asi]->l().size();
                    _no_subshells_in_shell.push_back(no_subshells);
                    first_subshell += no_subshells;

                    _no_contractions_in_shell.push_back(
                        Abs.valence_shells()[Asi]->real_size());
                }
            }
        }

        void OS1TwoElectronD2IntegralEngine::calc(std::size_t atom1,
                                                  std::size_t atom2,
                                                  std::size_t I,
                                                  std::size_t J,
                                                  std::size_t K,
                                                  std::size_t L,
                                                  double* const d2eexx,
                                                  double* const d2eexy,
                                                  double* const d2eexz,
                                                  double* const d2eeyx,
                                                  double* const d2eeyy,
                                                  double* const d2eeyz,
                                                  double* const d2eezx,
                                                  double* const d2eezy,
                                                  double* const d2eezz)
        {
            double txx[625];
            double txy[625];
            double txz[625];

            double tyx[625];
            double tyy[625];
            double tyz[625];

            double tzx[625];
            double tzy[625];
            double tzz[625];

            const unsigned sJ = _no_contractions_in_shell[J];
            const unsigned sK = _no_contractions_in_shell[K];
            const unsigned sL = _no_contractions_in_shell[L];

            const unsigned ni = _no_subshells_in_shell[I];
            const unsigned nj = _no_subshells_in_shell[J];
            const unsigned nk = _no_subshells_in_shell[K];
            const unsigned nl = _no_subshells_in_shell[L];

            unsigned oi = 0;
            for (unsigned i = 0; i < ni; ++i) {
                const std::size_t ii = i + _first_subshell_in_shell[I];
                const unsigned si = 2 * _subshells[ii].l + 1;

                unsigned oj = 0;
                for (unsigned j = 0; j < nj; ++j) {
                    const std::size_t ji = j + _first_subshell_in_shell[J];
                    const unsigned sj = 2 * _subshells[ji].l + 1;

                    unsigned ok = 0;
                    for (unsigned k = 0; k < nk; ++k) {
                        const std::size_t ki = k + _first_subshell_in_shell[K];
                        const unsigned sk = 2 * _subshells[ki].l + 1;

                        unsigned ol = 0;
                        for (unsigned l = 0; l < nl; ++l) {
                            const std::size_t li =
                                l + _first_subshell_in_shell[L];
                            const unsigned sl = 2 * _subshells[li].l + 1;

                            const std::size_t buf_size = si * sj * sk * sl;

                            std::memset(txx, 0, buf_size * sizeof(double));
                            std::memset(txy, 0, buf_size * sizeof(double));
                            std::memset(txz, 0, buf_size * sizeof(double));

                            std::memset(tyx, 0, buf_size * sizeof(double));
                            std::memset(tyy, 0, buf_size * sizeof(double));
                            std::memset(tyz, 0, buf_size * sizeof(double));

                            std::memset(tzx, 0, buf_size * sizeof(double));
                            std::memset(tzy, 0, buf_size * sizeof(double));
                            std::memset(tzz, 0, buf_size * sizeof(double));

                            calc_subshell(atom1,
                                          atom2,
                                          ii,
                                          ji,
                                          ki,
                                          li,
                                          txx,
                                          txy,
                                          txz,
                                          tyx,
                                          tyy,
                                          tyz,
                                          tzx,
                                          tzy,
                                          tzz);

                            for (unsigned a = 0; a < si; ++a) {
                                for (unsigned b = 0; b < sj; ++b) {
                                    for (unsigned c = 0; c < sk; ++c) {
                                        for (unsigned d = 0; d < sl; ++d) {

                                            d2eexx[(((oi + a) * sJ + (oj + b)) *
                                                        sK +
                                                    (ok + c)) *
                                                       sL +
                                                   (ol + d)] +=
                                                txx[((a * sj + b) * sk + c) *
                                                        sl +
                                                    d];
                                            d2eexy[(((oi + a) * sJ + (oj + b)) *
                                                        sK +
                                                    (ok + c)) *
                                                       sL +
                                                   (ol + d)] +=
                                                txy[((a * sj + b) * sk + c) *
                                                        sl +
                                                    d];
                                            d2eexz[(((oi + a) * sJ + (oj + b)) *
                                                        sK +
                                                    (ok + c)) *
                                                       sL +
                                                   (ol + d)] +=
                                                txz[((a * sj + b) * sk + c) *
                                                        sl +
                                                    d];

                                            d2eeyx[(((oi + a) * sJ + (oj + b)) *
                                                        sK +
                                                    (ok + c)) *
                                                       sL +
                                                   (ol + d)] +=
                                                tyx[((a * sj + b) * sk + c) *
                                                        sl +
                                                    d];
                                            d2eeyy[(((oi + a) * sJ + (oj + b)) *
                                                        sK +
                                                    (ok + c)) *
                                                       sL +
                                                   (ol + d)] +=
                                                tyy[((a * sj + b) * sk + c) *
                                                        sl +
                                                    d];
                                            d2eeyz[(((oi + a) * sJ + (oj + b)) *
                                                        sK +
                                                    (ok + c)) *
                                                       sL +
                                                   (ol + d)] +=
                                                tyz[((a * sj + b) * sk + c) *
                                                        sl +
                                                    d];

                                            d2eezx[(((oi + a) * sJ + (oj + b)) *
                                                        sK +
                                                    (ok + c)) *
                                                       sL +
                                                   (ol + d)] +=
                                                tzx[((a * sj + b) * sk + c) *
                                                        sl +
                                                    d];
                                            d2eezy[(((oi + a) * sJ + (oj + b)) *
                                                        sK +
                                                    (ok + c)) *
                                                       sL +
                                                   (ol + d)] +=
                                                tzy[((a * sj + b) * sk + c) *
                                                        sl +
                                                    d];
                                            d2eezz[(((oi + a) * sJ + (oj + b)) *
                                                        sK +
                                                    (ok + c)) *
                                                       sL +
                                                   (ol + d)] +=
                                                tzz[((a * sj + b) * sk + c) *
                                                        sl +
                                                    d];
                                        }
                                    }
                                }
                            }

                            ol += sl;
                        }
                        ok += sk;
                    }
                    oj += sj;
                }
                oi += si;
            }
        }

        void OS1TwoElectronD2IntegralEngine::calc_subshell(
            std::size_t atom1,
            std::size_t atom2,
            std::size_t I,
            std::size_t J,
            std::size_t K,
            std::size_t L,
            double* const d2eexx,
            double* const d2eexy,
            double* const d2eexz,
            double* const d2eeyx,
            double* const d2eeyy,
            double* const d2eeyz,
            double* const d2eezx,
            double* const d2eezy,
            double* const d2eezz) const
        {
            std::size_t A = 0;
            std::size_t B = 0;
            std::size_t C = 0;
            std::size_t D = 0;

            const std::size_t no_atoms = _first_subshell_on_atom.size();

            for (std::size_t at = 0; at < no_atoms; ++at) {
                if (I >= _first_subshell_on_atom[at] &&
                    I < _first_subshell_on_atom[at] + _no_subshells_on_atom[at])
                    A = at;
                if (J >= _first_subshell_on_atom[at] &&
                    J < _first_subshell_on_atom[at] + _no_subshells_on_atom[at])
                    B = at;
                if (K >= _first_subshell_on_atom[at] &&
                    K < _first_subshell_on_atom[at] + _no_subshells_on_atom[at])
                    C = at;
                if (L >= _first_subshell_on_atom[at] &&
                    L < _first_subshell_on_atom[at] + _no_subshells_on_atom[at])
                    D = at;
            }

            if ((A == B && A == C && A == D) ||
                (atom1 != A && atom1 != B && atom1 != C && atom1 != D) ||
                (atom2 != A && atom2 != B && atom2 != C && atom2 != D))
                return;

            const double xA = _r(A, 0);
            const double yA = _r(A, 1);
            const double zA = _r(A, 2);

            const double xB = _r(B, 0);
            const double yB = _r(B, 1);
            const double zB = _r(B, 2);

            const double xC = _r(C, 0);
            const double yC = _r(C, 1);
            const double zC = _r(C, 2);

            const double xD = _r(D, 0);
            const double yD = _r(D, 1);
            const double zD = _r(D, 2);

            const Subshell& As = _subshells[I];

            const unsigned Al = As.l;

            const Subshell& Bs = _subshells[J];

            const unsigned Bl = Bs.l;

            const Subshell& Cs = _subshells[K];

            const unsigned Cl = Cs.l;

            const Subshell& Ds = _subshells[L];

            const unsigned Dl = Ds.l;

            const unsigned N = Al + Bl + Cl + Dl;

            arma::vec bs(N + 3);

            const std::size_t As_exps_size = As.exps.size();
            const std::size_t Bs_exps_size = Bs.exps.size();
            const std::size_t Cs_exps_size = Cs.exps.size();
            const std::size_t Ds_exps_size = Ds.exps.size();

            for (std::size_t u = 0; u < As_exps_size; ++u) {

                const double ae = As.exps[u];
                const double c = As.coeffs[u];

                for (std::size_t w = 0; w < Bs_exps_size; ++w) {

                    const double be = Bs.exps[w];
                    const double cc = c * Bs.coeffs[w];

                    const double p = ae + be;
                    const double xp = (ae * xA + be * xB) / p;
                    const double yp = (ae * yA + be * yB) / p;
                    const double zp = (ae * zA + be * zB) / p;

                    for (std::size_t uu = 0; uu < Cs_exps_size; ++uu) {

                        const double ce = Cs.exps[uu];
                        const double ccc = cc * Cs.coeffs[uu];

                        for (std::size_t ww = 0; ww < Ds_exps_size; ++ww) {

                            const double de = Ds.exps[ww];
                            const double q = ce + de;

                            const double cccc = ccc * Ds.coeffs[ww];

                            const double xpq = xp - (ce * xC + de * xD) / q;
                            const double ypq = yp - (ce * yC + de * yD) / q;
                            const double zpq = zp - (ce * zC + de * zD) / q;

                            const double alpha_rpq_2 =
                                p * q / (p + q) *
                                (xpq * xpq + ypq * ypq + zpq * zpq);

                            misc::fast_boys.generalized_boys(
                                N + 2, alpha_rpq_2, cccc, bs.memptr());

                            unsigned firstInd, secondInd;
                            size_t atoms[] = {A, B, C, D};
                            for (int first = 0; first < 4; first++) {
                                if (atom1 == atoms[first])
                                    firstInd = first;
                                else
                                    continue;
                                for (int second = 0; second < 4; second++) {
                                    if (atom2 == atoms[second])
                                        secondInd = second;
                                    else
                                        continue;

                                    erid2[Al][Bl][Cl][Dl][firstInd][secondInd](
                                        ae,
                                        xA,
                                        yA,
                                        zA,
                                        be,
                                        xB,
                                        yB,
                                        zB,
                                        ce,
                                        xC,
                                        yC,
                                        zC,
                                        de,
                                        xD,
                                        yD,
                                        zD,
                                        bs.memptr(),
                                        d2eexx,
                                        d2eexy,
                                        d2eexz,
                                        d2eeyx,
                                        d2eeyy,
                                        d2eeyz,
                                        d2eezx,
                                        d2eezy,
                                        d2eezz);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
