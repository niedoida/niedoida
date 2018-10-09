/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/fock_matrix_generator.hpp"

#include "core_kit/shell_quartet_index_generator.hpp"
#include <cassert>

#include <boost/multi_array.hpp>

#include "misc_kit/dispatcher.hpp"
#include "misc_kit/threadpool.hpp"

#include "io_kit/io_kit.hpp"

namespace {
    void zero_vector_cube(std::vector<arma::cube>& vector_cube)
    {
        for (std::vector<arma::cube>::iterator it = vector_cube.begin();
             it != vector_cube.end();
             it++)
            it->zeros();
    }
}

namespace niedoida {

    namespace core {

        StandardKMatrixCoreGradientGenerator::
            StandardKMatrixCoreGradientGenerator(
                std::shared_ptr<const System> system,
                double threshold,
                std::size_t cache_size) :
            m_system(system),
            m_bs_info(system->basis_set),
            m_gradient_engine2(m_system),
            m_prescreening(threshold, *system),
            m_sspg(m_bs_info.m_shell_sizes.size(),
                   m_prescreening.schwartz,
                   m_prescreening.threshold * 0.01),
            m_batch(m_sspg)
        {
            if (!m_system->integral_cache)
                m_system->integral_cache.reset(
                    new IntegralCache(m_system, cache_size));

            const std::size_t no_shells = m_bs_info.m_shell_sizes.size();

            // shell compressed density matrices
            m_max_P_shells = arma::zeros<arma::mat>(no_shells, no_shells);

            m_no_shell_quartets = m_batch.end;

            m_P = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                         m_bs_info.m_no_contractions);
        }

        double StandardKMatrixCoreGradientGenerator::max_P2(
            const niedoida::core::ShellQuartetIndex& sq,
            const arma::mat& max_P_shells)
        {
            const unsigned s1 = sq[0];
            const unsigned s2 = sq[1];
            const unsigned s3 = sq[2];
            const unsigned s4 = sq[3];

            double max = 0;

            const double P_1234 =
                16 * max_P_shells(s1, s2) * max_P_shells(s3, s4);
            const double P_1324 =
                4 * max_P_shells(s1, s3) * max_P_shells(s2, s4);
            const double P_1423 =
                4 * max_P_shells(s1, s4) * max_P_shells(s2, s3);

            if (P_1234 > max)
                max = P_1234;
            if (P_1324 > max)
                max = P_1324;
            if (P_1423 > max)
                max = P_1423;

            return max;
        }
        void StandardKMatrixCoreGradientGenerator::calc_matrix_core_gradient(
            std::vector<unsigned>& atoms, const arma::mat& P)
        {

            m_dK =
                std::vector<arma::cube>(atoms.size(),
                                        arma::cube(m_bs_info.m_no_contractions,
                                                   m_bs_info.m_no_contractions,
                                                   3,
                                                   arma::fill::zeros));
            const SignificantShellQuartetIndexGenerator sq_begin(m_sspg);

            std::vector<double> g2x;
            std::vector<double> g2y;
            std::vector<double> g2z;

            const std::size_t no_shells = m_bs_info.m_shell_sizes.size();

            // shell compressed density matrices
            arma::mat max_P_shells =
                arma::zeros<arma::mat>(no_shells, no_shells);
            for (std::size_t i = 0; i < no_shells; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    double max = 0;
                    const std::size_t b1 =
                        m_bs_info.m_first_contraction_in_shell[i];
                    const std::size_t b2 =
                        m_bs_info.m_first_contraction_in_shell[j];
                    const std::size_t n1 = m_bs_info.m_shell_sizes[i];
                    const std::size_t n2 = m_bs_info.m_shell_sizes[j];
                    for (std::size_t k = b1; k < b1 + n1; ++k)
                        for (std::size_t l = b2; l < b2 + n2; ++l)
                            if (std::abs(P(k, l)) > max)
                                max = std::abs(P(k, l));

                    max_P_shells(i, j) = max;
                    max_P_shells(j, i) = max;
                }

            const std::size_t no_atoms = atoms.size();
            std::vector<std::size_t> shell_atom;
            for (std::size_t A = 0; A < no_atoms; ++A) {
                const AtomicBasisSet& Abs =
                    *m_system->basis_set.atomic_basis_sets()[A];
                for (std::size_t Asi = 0; Asi < Abs.valence_shells().size();
                     ++Asi) {
                    shell_atom.push_back(A);
                }
            }

            const SignificantShellQuartetIndexGenerator sq_end =
                sq_begin.make_end();

            for (SignificantShellQuartetIndexGenerator i = sq_begin;
                 i != sq_end;
                 ++i) {

                const double max_P = max_P2(*i, max_P_shells);
                const double max_integral =
                    m_prescreening.schwartz.max_integral(*i);

                if (max_P * max_integral < m_prescreening.threshold)
                    continue;

                const double current_threshold =
                    std::abs(max_P) < 1e-20
                        ? m_prescreening.threshold / 1e-20
                        : m_prescreening.threshold / std::abs(max_P);

                const std::size_t I = (*i)[0];
                const std::size_t J = (*i)[1];
                const std::size_t K = (*i)[2];
                const std::size_t L = (*i)[3];

                const std::size_t A = shell_atom[I];
                const std::size_t B = shell_atom[J];
                const std::size_t C = shell_atom[K];
                const std::size_t D = shell_atom[L];

                const std::size_t bI =
                    m_bs_info.m_first_contraction_in_shell[I];
                const std::size_t bJ =
                    m_bs_info.m_first_contraction_in_shell[J];
                const std::size_t bK =
                    m_bs_info.m_first_contraction_in_shell[K];
                const std::size_t bL =
                    m_bs_info.m_first_contraction_in_shell[L];

                const std::size_t nI = m_bs_info.m_shell_sizes[I];
                const std::size_t nJ = m_bs_info.m_shell_sizes[J];
                const std::size_t nK = m_bs_info.m_shell_sizes[K];
                const std::size_t nL = m_bs_info.m_shell_sizes[L];

                const ShellQuartetType type = shell_quartet_type(I, J, K, L);

                std::vector<unsigned> unique;
                std::vector<unsigned>::iterator it;

                it = std::find(atoms.begin(), atoms.end(), A);
                if (it != atoms.end())
                    unique.push_back(std::distance(atoms.begin(), it));

                it = std::find(atoms.begin(), atoms.end(), B);
                if (it != atoms.end() && B != A)
                    unique.push_back(std::distance(atoms.begin(), it));

                it = std::find(atoms.begin(), atoms.end(), C);
                if (it != atoms.end() && C != B && C != A)
                    unique.push_back(std::distance(atoms.begin(), it));

                it = std::find(atoms.begin(), atoms.end(), D);
                if (it != atoms.end() && D != C && D != B && D != A)
                    unique.push_back(std::distance(atoms.begin(), it));

                for (std::size_t i = 0; i < unique.size(); ++i) {
                    const std::size_t a = unique[i];
                    g2x.assign(nI * nJ * nK * nL, 0);
                    g2y.assign(nI * nJ * nK * nL, 0);
                    g2z.assign(nI * nJ * nK * nL, 0);

                    m_gradient_engine2.calc(atoms[a],
                                            I,
                                            J,
                                            K,
                                            L,
                                            g2x.data(),
                                            g2y.data(),
                                            g2z.data());

                    switch (type) {
                    case SHELL_QUARTET_TYPE_ABCD: {
                        for (std::size_t i = bI; i < bI + nI; ++i)
                            for (std::size_t j = bJ; j < bJ + nJ; ++j)
                                for (std::size_t k = bK; k < bK + nK; ++k)
                                    for (std::size_t l = bL; l < bL + nL; ++l) {
                                        double gx =
                                            g2x[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
                                                  (k - bK)) *
                                                 nL) +
                                                (l - bL)];
                                        double gy =
                                            g2y[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
                                                  (k - bK)) *
                                                 nL) +
                                                (l - bL)];
                                        double gz =
                                            g2z[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
                                                  (k - bK)) *
                                                 nL) +
                                                (l - bL)];

                                        if (std::abs(gx) < current_threshold &&
                                            std::abs(gy) < current_threshold &&
                                            std::abs(gz) < current_threshold)
                                            continue;

                                        contract_d_integral(
                                            gx, P, i, j, k, l, a, 0);
                                        contract_d_integral(
                                            gy, P, i, j, k, l, a, 1);
                                        contract_d_integral(
                                            gz, P, i, j, k, l, a, 2);
                                    }
                        break;
                    }
                    case SHELL_QUARTET_TYPE_AACD: {
                        for (std::size_t i = bI; i < bI + nI; ++i)
                            for (std::size_t j = std::max(i, bJ); j < bJ + nJ;
                                 ++j)
                                for (std::size_t k = bK; k < bK + nK; ++k)
                                    for (std::size_t l = bL; l < bL + nL; ++l) {
                                        double gx =
                                            g2x[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
                                                  (k - bK)) *
                                                 nL) +
                                                (l - bL)];
                                        double gy =
                                            g2y[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
                                                  (k - bK)) *
                                                 nL) +
                                                (l - bL)];
                                        double gz =
                                            g2z[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
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
                                            gx, P, i, j, k, l, a, 0);
                                        contract_d_integral(
                                            gy, P, i, j, k, l, a, 1);
                                        contract_d_integral(
                                            gz, P, i, j, k, l, a, 2);
                                    }
                        break;
                    }
                    case SHELL_QUARTET_TYPE_ABCC: {
                        for (std::size_t i = bI; i < bI + nI; ++i)
                            for (std::size_t j = bJ; j < bJ + nJ; ++j)
                                for (std::size_t k = bK; k < bK + nK; ++k)
                                    for (std::size_t l = std::max(k, bL);
                                         l < bL + nL;
                                         ++l) {
                                        double gx =
                                            g2x[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
                                                  (k - bK)) *
                                                 nL) +
                                                (l - bL)];
                                        double gy =
                                            g2y[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
                                                  (k - bK)) *
                                                 nL) +
                                                (l - bL)];
                                        double gz =
                                            g2z[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
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
                                            gx, P, i, j, k, l, a, 0);
                                        contract_d_integral(
                                            gy, P, i, j, k, l, a, 1);
                                        contract_d_integral(
                                            gz, P, i, j, k, l, a, 2);
                                    }
                        break;
                    }
                    default: {
                        for (std::size_t i = bI; i < bI + nI; ++i)
                            for (std::size_t j = std::max(i, bJ); j < bJ + nJ;
                                 ++j) {
                                for (std::size_t k = std::max(i, bK);
                                     k < bK + nK;
                                     ++k) {
                                    const std::size_t l0 =
                                        k == i ? std::max(j, bL)
                                               : std::max(k, bL);
                                    for (std::size_t l = l0; l < bL + nL; ++l) {
                                        double gx =
                                            g2x[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
                                                  (k - bK)) *
                                                 nL) +
                                                (l - bL)];
                                        double gy =
                                            g2y[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
                                                  (k - bK)) *
                                                 nL) +
                                                (l - bL)];
                                        double gz =
                                            g2z[((((i - bI) * nJ + (j - bJ)) *
                                                      nK +
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
                                            gx, P, i, j, k, l, a, 0);
                                        contract_d_integral(
                                            gy, P, i, j, k, l, a, 1);
                                        contract_d_integral(
                                            gz, P, i, j, k, l, a, 2);
                                    }
                                }
                            }
                        break;
                    }
                    }
                }
            }
        }

        void StandardKMatrixCoreGradientGenerator::set_max_P_shells(
            const std::size_t no_shells, const arma::mat& P)
        {
            for (unsigned i = 0; i < no_shells; ++i)
                for (unsigned j = 0; j <= i; ++j) {
                    double max = 0;
                    const unsigned b1 =
                        m_bs_info.m_first_contraction_in_shell[i];
                    const unsigned b2 =
                        m_bs_info.m_first_contraction_in_shell[j];
                    const unsigned n1 = m_bs_info.m_shell_sizes[i];
                    const unsigned n2 = m_bs_info.m_shell_sizes[j];
                    for (unsigned k = b1; k < b1 + n1; ++k)
                        for (unsigned l = b2; l < b2 + n2; ++l)
                            if (std::abs(P(k, l)) > max)
                                max = std::abs(P(k, l));
                    m_max_P_shells(i, j) = max;
                }

            m_max_P_shells = symmatl(m_max_P_shells);
        }
    }
}
