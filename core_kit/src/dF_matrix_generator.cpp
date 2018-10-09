/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/dFock.hpp"
#include "core_kit/os1_integral_gradient_engine.hpp"

#include "cphf_kit/cphf_linear_response.hpp"

#include "scf_kit/scf_utils.hpp"

#include <cstdio>

#include <cmath>
#include <string>
#include <vector>

#include <boost/math/special_functions/gamma.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>

#include "misc_kit/special_functions.hpp"

#include "core_kit/basis_set_info.hpp"
#include "core_kit/shell_quartet.hpp"
#include "core_kit/significant_shell_pairs_generator.hpp"
#include "core_kit/significant_shell_quartet_index_generator.hpp"

namespace {
    double max_P2(const niedoida::core::ShellQuartetIndex& sq,
                  const arma::mat& max_P_shells)
    {
        const unsigned s1 = sq[0];
        const unsigned s2 = sq[1];
        const unsigned s3 = sq[2];
        const unsigned s4 = sq[3];

        double max = 0;

        const double P_1234 = 16 * max_P_shells(s1, s2) * max_P_shells(s3, s4);
        const double P_1324 = 4 * max_P_shells(s1, s3) * max_P_shells(s2, s4);
        const double P_1423 = 4 * max_P_shells(s1, s4) * max_P_shells(s2, s3);

        if (P_1234 > max)
            max = P_1234;
        if (P_1324 > max)
            max = P_1324;
        if (P_1423 > max)
            max = P_1423;

        return max;
    }

    void contract_d_integral(double dg,
                             const arma::mat& P,
                             std::size_t i,
                             std::size_t j,
                             std::size_t k,
                             std::size_t l,
                             arma::mat& dJ,
                             arma::mat& dK)
    {
        dJ(i, j) += 2 * dg * (P(k, l) + P(l, k));
        dJ(j, i) += 2 * dg * (P(k, l) + P(l, k));
        dJ(k, l) += 2 * dg * (P(i, j) + P(j, i));
        dJ(l, k) += 2 * dg * (P(i, j) + P(j, i));

        dK(i, k) -= P(j, l) * dg;
        dK(k, i) -= P(l, j) * dg;
        dK(i, l) -= P(j, k) * dg;
        dK(l, i) -= P(k, j) * dg;
        dK(j, k) -= P(i, l) * dg;
        dK(k, j) -= P(l, i) * dg;
        dK(j, l) -= P(i, k) * dg;
        dK(l, j) -= P(k, i) * dg;
    }
}

namespace niedoida {
    namespace core {
        void dF_matrix_generator(std::shared_ptr<const core::System> system,
                                 const arma::mat& C_mol,
                                 const arma::vec eps,
                                 arma::mat& P,
                                 arma::mat& dKx,
                                 arma::mat& dKy,
                                 arma::mat& dKz,
                                 arma::mat& dJx,
                                 arma::mat& dJy,
                                 arma::mat& dJz,
                                 std::size_t atom_ind)
        {

            // const std::size_t n = system->atoms.size();
            const std::size_t no_atoms = system->atoms.size();
            std::size_t n_occ_alpha = system->no_electrons(core::SPIN_ALPHA);
            // std::size_t n_occ_beta = system->no_electrons(core::SPIN_BETA);

            std::size_t n_orbitals = eps.size();
            // std::size_t n_virt_alpha = n_orbitals - n_occ_alpha;

            arma::mat C_occ = C_mol.submat(arma::span(0, n_orbitals - 1),
                                           arma::span(0, n_occ_alpha - 1));
            arma::mat C_occ_t = trans(C_occ);

            arma::mat C_mol_t = trans(C_mol);

            // 2-el gradient

            core::OS1TwoElectronIntegralGradientEngine gradient_engine2(system);
            const double threshold = 1e-10;
            const core::BasisSetInfo bs_info(system->basis_set);
            const core::SchwartzEstimator& schwartz =
                *(system->basis_set.schwartz_estimator);
            const core::SignificantShellPairsGenerator sspg(
                bs_info.m_shell_sizes.size(), schwartz, threshold * 0.01);
            const core::SignificantShellQuartetIndexGenerator sq_begin(sspg);

            std::vector<double> g2x;
            std::vector<double> g2y;
            std::vector<double> g2z;

            // const std::size_t lumo_idx =
            // system->no_electrons(core::SPIN_ALPHA);

            const std::size_t no_shells = bs_info.m_shell_sizes.size();

            // shell compressed density matrices
            arma::mat max_P_shells =
                arma::zeros<arma::mat>(no_shells, no_shells);
            for (std::size_t i = 0; i < no_shells; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    double max = 0;
                    const std::size_t b1 =
                        bs_info.m_first_contraction_in_shell[i];
                    const std::size_t b2 =
                        bs_info.m_first_contraction_in_shell[j];
                    const std::size_t n1 = bs_info.m_shell_sizes[i];
                    const std::size_t n2 = bs_info.m_shell_sizes[j];
                    for (std::size_t k = b1; k < b1 + n1; ++k)
                        for (std::size_t l = b2; l < b2 + n2; ++l)
                            if (std::abs(P(k, l)) > max)
                                max = std::abs(P(k, l));

                    max_P_shells(i, j) = max;
                    max_P_shells(j, i) = max;
                }

            std::vector<std::size_t> shell_atom;
            for (std::size_t A = 0; A < no_atoms; ++A) {
                const core::AtomicBasisSet& Abs =
                    *system->basis_set.atomic_basis_sets()[A];
                for (std::size_t Asi = 0; Asi < Abs.valence_shells().size();
                     ++Asi) {
                    shell_atom.push_back(A);
                }
            }

            dJx = arma::zeros<arma::mat>(n_orbitals, n_orbitals);
            dJy = arma::zeros<arma::mat>(n_orbitals, n_orbitals);
            dJz = arma::zeros<arma::mat>(n_orbitals, n_orbitals);

            dKx = arma::zeros<arma::mat>(n_orbitals, n_orbitals);
            dKy = arma::zeros<arma::mat>(n_orbitals, n_orbitals);
            dKz = arma::zeros<arma::mat>(n_orbitals, n_orbitals);

            const core::SignificantShellQuartetIndexGenerator sq_end =
                sq_begin.make_end();

            for (core::SignificantShellQuartetIndexGenerator i = sq_begin;
                 i != sq_end;
                 ++i) {

                const double max_P = max_P2(*i, max_P_shells);
                const double max_integral = schwartz.max_integral(*i);

                if (max_P * max_integral < threshold)
                    continue;

                const double current_threshold = 1e-20;
                std::abs(max_P) < 1e-20 ? threshold / 1e-20
                                        : threshold / std::abs(max_P);

                const std::size_t I = (*i)[0];
                const std::size_t J = (*i)[1];
                const std::size_t K = (*i)[2];
                const std::size_t L = (*i)[3];

                // const std::size_t A = shell_atom[I];
                // const std::size_t B = shell_atom[J];
                // const std::size_t C = shell_atom[K];
                // const std::size_t D = shell_atom[L];

                const std::size_t bI = bs_info.m_first_contraction_in_shell[I];
                const std::size_t bJ = bs_info.m_first_contraction_in_shell[J];
                const std::size_t bK = bs_info.m_first_contraction_in_shell[K];
                const std::size_t bL = bs_info.m_first_contraction_in_shell[L];

                const std::size_t nI = bs_info.m_shell_sizes[I];
                const std::size_t nJ = bs_info.m_shell_sizes[J];
                const std::size_t nK = bs_info.m_shell_sizes[K];
                const std::size_t nL = bs_info.m_shell_sizes[L];

                const core::ShellQuartetType type =
                    core::shell_quartet_type(I, J, K, L);

                std::vector<std::size_t>::const_iterator it;

                g2x.assign(nI * nJ * nK * nL, 0);
                g2y.assign(nI * nJ * nK * nL, 0);
                g2z.assign(nI * nJ * nK * nL, 0);

                gradient_engine2.calc(
                    atom_ind, I, J, K, L, g2x.data(), g2y.data(), g2z.data());

                switch (type) {
                case core::SHELL_QUARTET_TYPE_ABCD: {
                    for (std::size_t i = bI; i < bI + nI; ++i)
                        for (std::size_t j = bJ; j < bJ + nJ; ++j)
                            for (std::size_t k = bK; k < bK + nK; ++k)
                                for (std::size_t l = bL; l < bL + nL; ++l) {
                                    double gx =
                                        g2x[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];
                                    double gy =
                                        g2y[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];
                                    double gz =
                                        g2z[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];

                                    if (std::abs(gx) < current_threshold &&
                                        std::abs(gy) < current_threshold &&
                                        std::abs(gz) < current_threshold)
                                        continue;

                                    contract_d_integral(
                                        gx, P, i, j, k, l, dJx, dKx);
                                    contract_d_integral(
                                        gy, P, i, j, k, l, dJy, dKy);
                                    contract_d_integral(
                                        gz, P, i, j, k, l, dJz, dKz);
                                }
                    break;
                }
                case core::SHELL_QUARTET_TYPE_AACD: {
                    for (std::size_t i = bI; i < bI + nI; ++i)
                        for (std::size_t j = std::max(i, bJ); j < bJ + nJ; ++j)
                            for (std::size_t k = bK; k < bK + nK; ++k)
                                for (std::size_t l = bL; l < bL + nL; ++l) {
                                    double gx =
                                        g2x[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];
                                    double gy =
                                        g2y[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];
                                    double gz =
                                        g2z[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];

                                    if (std::abs(gx) < current_threshold &&
                                        std::abs(gy) < current_threshold &&
                                        std::abs(gz) < current_threshold)
                                        continue;

                                    if (i == j) {
                                        gx *= 0.5;
                                        gy *= 0.5;
                                        gz *= 0.5;
                                    }

                                    contract_d_integral(
                                        gx, P, i, j, k, l, dJx, dKx);
                                    contract_d_integral(
                                        gy, P, i, j, k, l, dJy, dKy);
                                    contract_d_integral(
                                        gz, P, i, j, k, l, dJz, dKz);
                                }
                    break;
                }
                case core::SHELL_QUARTET_TYPE_ABCC: {
                    for (std::size_t i = bI; i < bI + nI; ++i)
                        for (std::size_t j = bJ; j < bJ + nJ; ++j)
                            for (std::size_t k = bK; k < bK + nK; ++k)
                                for (std::size_t l = std::max(k, bL);
                                     l < bL + nL;
                                     ++l) {
                                    double gx =
                                        g2x[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];
                                    double gy =
                                        g2y[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];
                                    double gz =
                                        g2z[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];

                                    if (std::abs(gx) < current_threshold &&
                                        std::abs(gy) < current_threshold &&
                                        std::abs(gz) < current_threshold)
                                        continue;

                                    if (k == l) {
                                        gx *= 0.5;
                                        gy *= 0.5;
                                        gz *= 0.5;
                                    }

                                    contract_d_integral(
                                        gx, P, i, j, k, l, dJx, dKx);
                                    contract_d_integral(
                                        gy, P, i, j, k, l, dJy, dKy);
                                    contract_d_integral(
                                        gz, P, i, j, k, l, dJz, dKz);
                                }
                    break;
                }
                default: {
                    for (std::size_t i = bI; i < bI + nI; ++i)
                        for (std::size_t j = std::max(i, bJ); j < bJ + nJ;
                             ++j) {
                            for (std::size_t k = std::max(i, bK); k < bK + nK;
                                 ++k) {
                                const std::size_t l0 =
                                    k == i ? std::max(j, bL) : std::max(k, bL);
                                for (std::size_t l = l0; l < bL + nL; ++l) {
                                    double gx =
                                        g2x[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];
                                    double gy =
                                        g2y[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];
                                    double gz =
                                        g2z[((((i - bI) * nJ + (j - bJ)) * nK +
                                              (k - bK)) *
                                             nL) +
                                            (l - bL)];

                                    if (std::abs(gx) < current_threshold &&
                                        std::abs(gy) < current_threshold &&
                                        std::abs(gz) < current_threshold)
                                        continue;

                                    if (i == j) {
                                        gx *= 0.5;
                                        gy *= 0.5;
                                        gz *= 0.5;
                                    }
                                    if (k == l) {
                                        gx *= 0.5;
                                        gy *= 0.5;
                                        gz *= 0.5;
                                    }
                                    if (i == k && j == l) {
                                        gx *= 0.5;
                                        gy *= 0.5;
                                        gz *= 0.5;
                                    }

                                    contract_d_integral(
                                        gx, P, i, j, k, l, dJx, dKx);
                                    contract_d_integral(
                                        gy, P, i, j, k, l, dJy, dKy);
                                    contract_d_integral(
                                        gz, P, i, j, k, l, dJz, dKz);
                                }
                            }
                        }
                    break;
                }
                }
            }
        }
    }
}
