/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/fock_matrix_generator.hpp"

#include "core_kit/os1_integral_gradient_engine.hpp"

#include "scf_kit/scf_utils.hpp"

#include "io_kit/log.hpp"

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
}

namespace niedoida {
    namespace core {

        PureKSFockMatrixGenerator::PureKSFockMatrixGenerator(
            std::shared_ptr<const System> system,
            std::unique_ptr<JMatrixGenerator> J_matrix_generator,
            std::unique_ptr<QuasiOneElectronIntegralEngine>
                xc_integral_engine) :
            m_system(system),
            m_J_matrix_generator(std::move(J_matrix_generator)),
            m_xc_integral_engine(std::move(xc_integral_engine))
        {

            m_J_matrix_core_gradient_generator =
                std::unique_ptr<JMatrixCoreGradientGenerator>(
                    new StandardJMatrixCoreGradientGenerator(
                        m_system, 1e-10, 64));
            const std::size_t s = system->basis_set.real_size();

            m_K[SPIN_ALPHA] = arma::zeros<arma::mat>(s, s);
            m_K[SPIN_BETA] = arma::zeros<arma::mat>(s, s);

            m_K_dC[SPIN_ALPHA] = arma::zeros<arma::mat>(s, s);
            m_K_dC[SPIN_BETA] = arma::zeros<arma::mat>(s, s);
        }

        void PureKSFockMatrixGenerator::set_density_matrix(
            const arma::mat& P_alpha, const arma::mat& P_beta, bool incremental)
        {
            m_P[SPIN_ALPHA] = P_alpha;
            m_P[SPIN_BETA] = P_beta;

            // J
            m_J_matrix_generator->set_density_matrix(P_alpha, P_beta);

            // KS exchange-correlation
            m_xc_integral_engine->set_density_matrix(P_alpha, P_beta);

            // exchange-correlation potential
            m_K[SPIN_ALPHA] = m_xc_integral_engine->integrals(SPIN_ALPHA);

            m_K[SPIN_BETA] = m_xc_integral_engine->integrals(SPIN_BETA);
        }

        void PureKSFockMatrixGenerator::set_density_matrix_for_CPHF(
            const arma::mat& P_alpha,
            const arma::mat& P_beta,
            const arma::mat& P_alpha_for_CPHF,
            const arma::mat& P_beta_for_CPHF)
        {
            m_P[SPIN_ALPHA] = P_alpha;
            m_P[SPIN_BETA] = P_beta;
            m_P_for_CPHF[SPIN_ALPHA] = P_alpha_for_CPHF;
            m_P_for_CPHF[SPIN_BETA] = P_beta_for_CPHF;

            // J
            m_J_matrix_generator->set_density_matrix(P_alpha_for_CPHF,
                                                     P_beta_for_CPHF);

            // KS exchange-correlation
            m_xc_integral_engine->set_density_matrix_for_CPHF(
                P_alpha, P_beta, P_alpha_for_CPHF, P_beta_for_CPHF);

            // exchange-correlation potential
            // m_K[SPIN_ALPHA] =
            m_xc_integral_engine->integrals(SPIN_ALPHA);

            // m_K[SPIN_BETA] =
            m_xc_integral_engine->integrals(SPIN_BETA);

            m_K_dC[SPIN_ALPHA] = m_xc_integral_engine->integrals_dC(SPIN_ALPHA);

            m_K_dC[SPIN_BETA] = m_xc_integral_engine->integrals_dC(SPIN_BETA);
        }

        void PureKSFockMatrixGenerator::calc_matrix_core_gradient(
            std::vector<unsigned>& atoms, const arma::mat& P)
        {
            m_J_matrix_core_gradient_generator->calc_matrix_core_gradient(atoms,
                                                                          P);
            m_xc_integral_engine->calc_matrix_core_gradient(P, atoms);
        }

        arma::mat PureKSFockMatrixGenerator::energy_gradient(
            std::shared_ptr<const System> system,
            const arma::mat& C,
            const arma::vec& eps,
            const std::vector<unsigned>& atoms) const
        {
            const std::size_t n = atoms.size();
            arma::mat g = arma::zeros<arma::mat>(n, 3);

            //  1-el gradient + Pulay term + nuclear gradient
            for (std::size_t index = 0; index < n; ++index) {
                const std::size_t a = atoms[index];

                OS1OneElectronIntegralGradientEngine gradient_engine(system);

                arma::mat dsx;
                arma::mat dsy;
                arma::mat dsz;

                arma::mat dTx;
                arma::mat dTy;
                arma::mat dTz;

                arma::mat dVnex;
                arma::mat dVney;
                arma::mat dVnez;

                arma::vec eps_occ = eps;
                const std::size_t lumo_idx = system->no_electrons(SPIN_ALPHA);
                std::fill_n(
                    eps_occ.begin() + lumo_idx, eps_occ.size() - lumo_idx, 0);

                const arma::mat P_eps = scf::density_matrix(C, eps_occ);

                const arma::mat P = scf::density_matrix(C, lumo_idx);

                const std::size_t no_atoms = system->atoms.size();

                arma::vec e_gradient(3, arma::fill::zeros);

                arma::vec ra(3);
                ra(0) = system->atoms[a]->coords[0];
                ra(1) = system->atoms[a]->coords[1];
                ra(2) = system->atoms[a]->coords[2];
                const double qa =
                    system->atoms[a]->isotope->element->atomic_number;

                for (std::size_t b = 0; b < no_atoms; ++b) {
                    if (b == a)
                        continue;
                    arma::vec rb(3);
                    rb(0) = system->atoms[b]->coords[0];
                    rb(1) = system->atoms[b]->coords[1];
                    rb(2) = system->atoms[b]->coords[2];
                    const double qb =
                        system->atoms[b]->isotope->element->atomic_number;
                    const arma::vec rab = rb - ra;

                    const double nrab = norm(rab, 2);
                    const double nrab3 = nrab * nrab * nrab;
                    e_gradient += qa * qb * rab / nrab3;
                }

                const std::size_t size = system->basis_set.real_size();

                double trT_x = 0;
                double trT_y = 0;
                double trT_z = 0;

                double pulay_x = 0;
                double pulay_y = 0;
                double pulay_z = 0;

                gradient_engine.kinetic_gradient(a, dTx, dTy, dTz);

                gradient_engine.ne_gradient(a, dVnex, dVney, dVnez);

                // summing up T and Vne gradient matrices
                dTx -= dVnex;
                dTy -= dVney;
                dTz -= dVnez;

                for (std::size_t i = 0; i < size; ++i)
                    for (std::size_t j = 0; j < size; ++j) {
                        trT_x += P(i, j) * dTx(i, j);
                        trT_y += P(i, j) * dTy(i, j);
                        trT_z += P(i, j) * dTz(i, j);
                    }

                gradient_engine.overlap_gradient(a, dsx, dsy, dsz);

                pulay_x = trace(P_eps * dsx);
                pulay_y = trace(P_eps * dsy);
                pulay_z = trace(P_eps * dsz);

                double z_overlap = -2 * pulay_z;
                double z_1e = 2 * trT_z;

                double x_overlap = -2 * pulay_x;
                double x_1e = 2 * trT_x;

                double y_overlap = -2 * pulay_y;
                double y_1e = 2 * trT_y;

                e_gradient(0) += x_overlap + x_1e;
                e_gradient(1) += y_overlap + y_1e;
                e_gradient(2) += z_overlap + z_1e;

                for (std::size_t i = 0; i < 3; i++)
                    g(index, i) += e_gradient(i);
            }

            // 2-el gradient

            OS1TwoElectronIntegralGradientEngine gradient_engine2(system);

            const double threshold = 1e-10;
            const BasisSetInfo bs_info(system->basis_set);
            const SchwartzEstimator& schwartz =
                *(system->basis_set.schwartz_estimator);
            const SignificantShellPairsGenerator sspg(
                bs_info.m_shell_sizes.size(), schwartz, threshold * 0.01);
            const SignificantShellQuartetIndexGenerator sq_begin(sspg);

            std::vector<double> g2x;
            std::vector<double> g2y;
            std::vector<double> g2z;

            const std::size_t lumo_idx = system->no_electrons(SPIN_ALPHA);
            const arma::mat P = scf::density_matrix(C, lumo_idx);

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

            const std::size_t no_atoms = system->atoms.size();
            std::vector<std::size_t> shell_atom;
            for (std::size_t A = 0; A < no_atoms; ++A) {
                const AtomicBasisSet& Abs =
                    *system->basis_set.atomic_basis_sets()[A];
                for (std::size_t Asi = 0; Asi < Abs.valence_shells().size();
                     ++Asi) {
                    shell_atom.push_back(A);
                }
            }

            arma::mat e_gradient = arma::zeros<arma::mat>(n, 3);

            arma::mat trJ = arma::zeros<arma::mat>(n, 3);

            const SignificantShellQuartetIndexGenerator sq_end =
                sq_begin.make_end();

            for (SignificantShellQuartetIndexGenerator i = sq_begin;
                 i != sq_end;
                 ++i) {

                const double max_P = max_P2(*i, max_P_shells);
                const double max_integral = schwartz.max_integral(*i);

                if (max_P * max_integral < threshold)
                    continue;

                const double current_threshold =
                    std::abs(max_P) < 1e-20 ? threshold / 1e-20
                                            : threshold / std::abs(max_P);

                const std::size_t I = (*i)[0];
                const std::size_t J = (*i)[1];
                const std::size_t K = (*i)[2];
                const std::size_t L = (*i)[3];

                const std::size_t A = shell_atom[I];
                const std::size_t B = shell_atom[J];
                const std::size_t C = shell_atom[K];
                const std::size_t D = shell_atom[L];

                const std::size_t bI = bs_info.m_first_contraction_in_shell[I];
                const std::size_t bJ = bs_info.m_first_contraction_in_shell[J];
                const std::size_t bK = bs_info.m_first_contraction_in_shell[K];
                const std::size_t bL = bs_info.m_first_contraction_in_shell[L];

                const std::size_t nI = bs_info.m_shell_sizes[I];
                const std::size_t nJ = bs_info.m_shell_sizes[J];
                const std::size_t nK = bs_info.m_shell_sizes[K];
                const std::size_t nL = bs_info.m_shell_sizes[L];

                const ShellQuartetType type = shell_quartet_type(I, J, K, L);

                std::vector<unsigned> unique;
                std::vector<unsigned>::const_iterator it;

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

                    gradient_engine2.calc(atoms[a],
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

                                        trJ(a, 0) +=
                                            16 * gx * P(k, l) * P(i, j);
                                        trJ(a, 1) +=
                                            16 * gy * P(k, l) * P(i, j);
                                        trJ(a, 2) +=
                                            16 * gz * P(k, l) * P(i, j);
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

                                        trJ(a, 0) +=
                                            16 * gx * P(k, l) * P(i, j);
                                        trJ(a, 1) +=
                                            16 * gy * P(k, l) * P(i, j);
                                        trJ(a, 2) +=
                                            16 * gz * P(k, l) * P(i, j);
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

                                        trJ(a, 0) +=
                                            16 * gx * P(k, l) * P(i, j);
                                        trJ(a, 1) +=
                                            16 * gy * P(k, l) * P(i, j);
                                        trJ(a, 2) +=
                                            16 * gz * P(k, l) * P(i, j);
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

                                        trJ(a, 0) +=
                                            16 * gx * P(k, l) * P(i, j);
                                        trJ(a, 1) +=
                                            16 * gy * P(k, l) * P(i, j);
                                        trJ(a, 2) +=
                                            16 * gz * P(k, l) * P(i, j);
                                    }
                                }
                            }
                        break;
                    }
                    }
                }
            }

            e_gradient += trJ;

            g += e_gradient;

            m_xc_integral_engine->set_density_matrix(P, P);

            e_gradient = m_xc_integral_engine->energy_gradient(atoms);

            g += trans(e_gradient);

            return g;
        }
    }
}
