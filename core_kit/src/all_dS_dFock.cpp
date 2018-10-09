/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/dFock.hpp"
#include "core_kit/os1_integral_gradient_engine.hpp"

#include "cphf_kit/cphf_linear_response.hpp"

//#include "misc/linear_algebra.hpp"
#include "scf_kit/scf_utils.hpp"

#include <cstdio>

//#include "misc/math_consts.hpp"

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

    void calc_dS_dFock_one_electron(
        std::shared_ptr<const niedoida::core::System> system,
        std::size_t n_orbitals,
        std::size_t n_occ,
        std::size_t a,
        const arma::mat& C_mol,
        const arma::mat& C_mol_t,
        const std::vector<unsigned>& atoms,
        std::vector<arma::mat>& dS_x_occ_occ,
        std::vector<arma::mat>& dS_y_occ_occ,
        std::vector<arma::mat>& dS_z_occ_occ,
        std::vector<arma::mat>& dFock_x,
        std::vector<arma::mat>& dFock_y,
        std::vector<arma::mat>& dFock_z,
        std::vector<arma::mat>& dS_x_occ_virt,
        std::vector<arma::mat>& dS_y_occ_virt,
        std::vector<arma::mat>& dS_z_occ_virt,
        std::vector<arma::mat>& dS_x_virt_virt,
        std::vector<arma::mat>& dS_y_virt_virt,
        std::vector<arma::mat>& dS_z_virt_virt)
    {

        niedoida::core::OS1OneElectronIntegralGradientEngine gradient_engine(
            system);
        arma::mat dsx;
        arma::mat dsy;
        arma::mat dsz;

        arma::mat dTx;
        arma::mat dTy;
        arma::mat dTz;

        arma::mat dVnex;
        arma::mat dVney;
        arma::mat dVnez;

        arma::mat dsx_mo;
        arma::mat dsy_mo;
        arma::mat dsz_mo;

        gradient_engine.kinetic_gradient(atoms[a], dTx, dTy, dTz);
        gradient_engine.ne_gradient(atoms[a], dVnex, dVney, dVnez);

        // summing up T and Vne gradient matrices
        dTx -= dVnex;
        dTy -= dVney;
        dTz -= dVnez;

        gradient_engine.overlap_gradient(atoms[a], dsx, dsy, dsz);

        arma::mat u_x_temp = C_mol_t * dsx;
        arma::mat u_y_temp = C_mol_t * dsy;
        arma::mat u_z_temp = C_mol_t * dsz;

        u_x_temp = u_x_temp * C_mol;
        u_y_temp = u_y_temp * C_mol;
        u_z_temp = u_z_temp * C_mol;

        dS_x_occ_occ.push_back(u_x_temp.submat(arma::span(0, n_occ - 1),
                                               arma::span(0, n_occ - 1)));
        dS_y_occ_occ.push_back(u_y_temp.submat(arma::span(0, n_occ - 1),
                                               arma::span(0, n_occ - 1)));
        dS_z_occ_occ.push_back(u_z_temp.submat(arma::span(0, n_occ - 1),
                                               arma::span(0, n_occ - 1)));

        dS_x_occ_virt.push_back(u_x_temp.submat(
            arma::span(0, n_occ - 1), arma::span(n_occ, n_orbitals - 1)));
        dS_y_occ_virt.push_back(u_y_temp.submat(
            arma::span(0, n_occ - 1), arma::span(n_occ, n_orbitals - 1)));
        dS_z_occ_virt.push_back(u_z_temp.submat(
            arma::span(0, n_occ - 1), arma::span(n_occ, n_orbitals - 1)));

        dS_x_virt_virt.push_back(
            u_x_temp.submat(arma::span(n_occ, n_orbitals - 1),
                            arma::span(n_occ, n_orbitals - 1)));
        dS_y_virt_virt.push_back(
            u_y_temp.submat(arma::span(n_occ, n_orbitals - 1),
                            arma::span(n_occ, n_orbitals - 1)));
        dS_z_virt_virt.push_back(
            u_z_temp.submat(arma::span(n_occ, n_orbitals - 1),
                            arma::span(n_occ, n_orbitals - 1)));

        dFock_x[a] += dTx;
        dFock_y[a] += dTy;
        dFock_z[a] += dTz;
    }
}

namespace niedoida {
    namespace core {

        void calc_all_dS_dFock(std::shared_ptr<const core::System> system,
                               const arma::mat& C_mol,
                               const arma::vec& eps,
                               const std::vector<unsigned>& atoms,
                               std::vector<arma::mat>& dS_x_occ_occ,
                               std::vector<arma::mat>& dS_y_occ_occ,
                               std::vector<arma::mat>& dS_z_occ_occ,
                               std::vector<arma::mat>& dFock_x_occ_occ,
                               std::vector<arma::mat>& dFock_y_occ_occ,
                               std::vector<arma::mat>& dFock_z_occ_occ,
                               std::vector<arma::mat>& dS_x_occ_virt,
                               std::vector<arma::mat>& dS_y_occ_virt,
                               std::vector<arma::mat>& dS_z_occ_virt,
                               std::vector<arma::mat>& dFock_x_occ_virt,
                               std::vector<arma::mat>& dFock_y_occ_virt,
                               std::vector<arma::mat>& dFock_z_occ_virt,
                               std::vector<arma::mat>& dS_x_virt_virt,
                               std::vector<arma::mat>& dS_y_virt_virt,
                               std::vector<arma::mat>& dS_z_virt_virt,
                               std::vector<arma::mat>& dFock_x_virt_virt,
                               std::vector<arma::mat>& dFock_y_virt_virt,
                               std::vector<arma::mat>& dFock_z_virt_virt)
        {

            const std::size_t n = atoms.size();
            const std::size_t no_atoms = system->atoms.size();
            std::size_t n_occ_alpha = system->no_electrons(core::SPIN_ALPHA);
            // std::size_t n_occ_beta = system->no_electrons(core::SPIN_BETA);

            std::size_t n_orbitals = eps.size();
            // std::size_t n_virt_alpha = n_orbitals - n_occ_alpha;

            arma::mat C_occ = C_mol.submat(arma::span(0, n_orbitals - 1),
                                           arma::span(0, n_occ_alpha - 1));
            arma::mat C_occ_t = trans(C_occ);

            arma::mat C_mol_t = trans(C_mol);

            std::vector<arma::mat> dFock_x(
                n, arma::zeros<arma::mat>(n_orbitals, n_orbitals));
            std::vector<arma::mat> dFock_y(
                n, arma::zeros<arma::mat>(n_orbitals, n_orbitals));
            std::vector<arma::mat> dFock_z(
                n, arma::zeros<arma::mat>(n_orbitals, n_orbitals));

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

            const std::size_t lumo_idx = system->no_electrons(core::SPIN_ALPHA);
            const arma::mat P = scf::density_matrix(C_mol, lumo_idx);

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

            arma::mat e_gradient = arma::zeros<arma::mat>(n, 3);

            arma::mat dJx = arma::zeros<arma::mat>(n_orbitals, n_orbitals);
            arma::mat dJy = arma::zeros<arma::mat>(n_orbitals, n_orbitals);
            arma::mat dJz = arma::zeros<arma::mat>(n_orbitals, n_orbitals);

            arma::mat dKx = arma::zeros<arma::mat>(n_orbitals, n_orbitals);
            arma::mat dKy = arma::zeros<arma::mat>(n_orbitals, n_orbitals);
            arma::mat dKz = arma::zeros<arma::mat>(n_orbitals, n_orbitals);

            const core::SignificantShellQuartetIndexGenerator sq_end =
                sq_begin.make_end();

            for (core::SignificantShellQuartetIndexGenerator i = sq_begin;
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

                std::vector<unsigned> unique = atoms;
                std::vector<unsigned>::const_iterator it;

                for (std::size_t i = 0; i < unique.size(); ++i) {
                    const std::size_t a = unique[i];

                    g2x.assign(nI * nJ * nK * nL, 0);
                    g2y.assign(nI * nJ * nK * nL, 0);
                    g2z.assign(nI * nJ * nK * nL, 0);

                    dJx.zeros();
                    dJy.zeros();
                    dJz.zeros();

                    dKx.zeros();
                    dKy.zeros();
                    dKz.zeros();

                    gradient_engine2.calc(atoms[a],
                                          I,
                                          J,
                                          K,
                                          L,
                                          g2x.data(),
                                          g2y.data(),
                                          g2z.data());
                    // std::size_t atomInd = atoms[a];

                    switch (type) {
                    case core::SHELL_QUARTET_TYPE_ABCD: {
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

                                        dJx(i, j) += 4 * gx * P(k, l);
                                        dJx(k, l) += 4 * gx * P(i, j);

                                        dJy(i, j) += 4 * gy * P(k, l);
                                        dJy(k, l) += 4 * gy * P(i, j);

                                        dJz(i, j) += 4 * gz * P(k, l);
                                        dJz(k, l) += 4 * gz * P(i, j);

                                        dKx(i, k) -= gx * P(j, l);
                                        dKx(i, l) -= gx * P(j, k);
                                        dKx(j, k) -= gx * P(i, l);
                                        dKx(j, l) -= gx * P(i, k);

                                        dKy(i, k) -= gy * P(j, l);
                                        dKy(i, l) -= gy * P(j, k);
                                        dKy(j, k) -= gy * P(i, l);
                                        dKy(j, l) -= gy * P(i, k);

                                        dKz(i, k) -= gz * P(j, l);
                                        dKz(i, l) -= gz * P(j, k);
                                        dKz(j, k) -= gz * P(i, l);
                                        dKz(j, l) -= gz * P(i, k);
                                    }
                        break;
                    }
                    case core::SHELL_QUARTET_TYPE_AACD: {
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

                                        dJx(i, j) += 4 * gx * P(k, l);
                                        dJx(k, l) += 4 * gx * P(i, j);

                                        dJy(i, j) += 4 * gy * P(k, l);
                                        dJy(k, l) += 4 * gy * P(i, j);

                                        dJz(i, j) += 4 * gz * P(k, l);
                                        dJz(k, l) += 4 * gz * P(i, j);

                                        dKx(i, k) -= gx * P(j, l);
                                        dKx(i, l) -= gx * P(j, k);
                                        dKx(j, k) -= gx * P(i, l);
                                        dKx(j, l) -= gx * P(i, k);

                                        dKy(i, k) -= gy * P(j, l);
                                        dKy(i, l) -= gy * P(j, k);
                                        dKy(j, k) -= gy * P(i, l);
                                        dKy(j, l) -= gy * P(i, k);

                                        dKz(i, k) -= gz * P(j, l);
                                        dKz(i, l) -= gz * P(j, k);
                                        dKz(j, k) -= gz * P(i, l);
                                        dKz(j, l) -= gz * P(i, k);
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

                                        dJx(i, j) += 4 * gx * P(k, l);
                                        dJx(k, l) += 4 * gx * P(i, j);

                                        dJy(i, j) += 4 * gy * P(k, l);
                                        dJy(k, l) += 4 * gy * P(i, j);

                                        dJz(i, j) += 4 * gz * P(k, l);
                                        dJz(k, l) += 4 * gz * P(i, j);

                                        dKx(i, k) -= gx * P(j, l);
                                        dKx(i, l) -= gx * P(j, k);
                                        dKx(j, k) -= gx * P(i, l);
                                        dKx(j, l) -= gx * P(i, k);

                                        dKy(i, k) -= gy * P(j, l);
                                        dKy(i, l) -= gy * P(j, k);
                                        dKy(j, k) -= gy * P(i, l);
                                        dKy(j, l) -= gy * P(i, k);

                                        dKz(i, k) -= gz * P(j, l);
                                        dKz(i, l) -= gz * P(j, k);
                                        dKz(j, k) -= gz * P(i, l);
                                        dKz(j, l) -= gz * P(i, k);
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

                                        dJx(i, j) += 4 * gx * P(k, l);
                                        dJx(k, l) += 4 * gx * P(i, j);

                                        dJy(i, j) += 4 * gy * P(k, l);
                                        dJy(k, l) += 4 * gy * P(i, j);

                                        dJz(i, j) += 4 * gz * P(k, l);
                                        dJz(k, l) += 4 * gz * P(i, j);

                                        dKx(i, k) -= gx * P(j, l);
                                        dKx(i, l) -= gx * P(j, k);
                                        dKx(j, k) -= gx * P(i, l);
                                        dKx(j, l) -= gx * P(i, k);

                                        dKy(i, k) -= gy * P(j, l);
                                        dKy(i, l) -= gy * P(j, k);
                                        dKy(j, k) -= gy * P(i, l);
                                        dKy(j, l) -= gy * P(i, k);

                                        dKz(i, k) -= gz * P(j, l);
                                        dKz(i, l) -= gz * P(j, k);
                                        dKz(j, k) -= gz * P(i, l);
                                        dKz(j, l) -= gz * P(i, k);
                                    }
                                }
                            }
                        break;
                    }
                    }

                    dFock_x[i] += (arma::symmatu(dJx) + arma::symmatl(dJx)) +
                                  (arma::symmatu(dKx) + arma::symmatl(dKx));
                    dFock_y[i] += (arma::symmatu(dJy) + arma::symmatl(dJy)) +
                                  (arma::symmatu(dKy) + arma::symmatl(dKy));
                    dFock_z[i] += (arma::symmatu(dJz) + arma::symmatl(dJz)) +
                                  (arma::symmatu(dKz) + arma::symmatl(dKz));
                }
            }

            for (std::size_t atomIt = 0; atomIt < n; atomIt++) {
                // std::size_t atomInd = atoms[ atomIt ];

                calc_dS_dFock_one_electron(system,
                                           n_orbitals,
                                           n_occ_alpha,
                                           atomIt,
                                           C_mol,
                                           C_mol_t,
                                           atoms,
                                           dS_x_occ_occ,
                                           dS_y_occ_occ,
                                           dS_z_occ_occ,
                                           dFock_x,
                                           dFock_y,
                                           dFock_z,
                                           dS_x_occ_virt,
                                           dS_y_occ_virt,
                                           dS_z_occ_virt,
                                           dS_x_virt_virt,
                                           dS_y_virt_virt,
                                           dS_z_virt_virt);

                arma::mat Fx_temp = C_mol_t * dFock_x[atomIt];
                arma::mat Fy_temp = C_mol_t * dFock_y[atomIt];
                arma::mat Fz_temp = C_mol_t * dFock_z[atomIt];

                Fx_temp = Fx_temp * C_mol;
                Fy_temp = Fy_temp * C_mol;
                Fz_temp = Fz_temp * C_mol;

                dFock_x_occ_occ.push_back(
                    Fx_temp.submat(arma::span(0, n_occ_alpha - 1),
                                   arma::span(0, n_occ_alpha - 1)));
                dFock_y_occ_occ.push_back(
                    Fy_temp.submat(arma::span(0, n_occ_alpha - 1),
                                   arma::span(0, n_occ_alpha - 1)));
                dFock_z_occ_occ.push_back(
                    Fz_temp.submat(arma::span(0, n_occ_alpha - 1),
                                   arma::span(0, n_occ_alpha - 1)));

                dFock_x_occ_virt.push_back(
                    Fx_temp.submat(arma::span(0, n_occ_alpha - 1),
                                   arma::span(n_occ_alpha, n_orbitals - 1)));
                dFock_y_occ_virt.push_back(
                    Fy_temp.submat(arma::span(0, n_occ_alpha - 1),
                                   arma::span(n_occ_alpha, n_orbitals - 1)));
                dFock_z_occ_virt.push_back(
                    Fz_temp.submat(arma::span(0, n_occ_alpha - 1),
                                   arma::span(n_occ_alpha, n_orbitals - 1)));

                dFock_x_virt_virt.push_back(
                    Fx_temp.submat(arma::span(n_occ_alpha, n_orbitals - 1),
                                   arma::span(n_occ_alpha, n_orbitals - 1)));
                dFock_y_virt_virt.push_back(
                    Fy_temp.submat(arma::span(n_occ_alpha, n_orbitals - 1),
                                   arma::span(n_occ_alpha, n_orbitals - 1)));
                dFock_z_virt_virt.push_back(
                    Fz_temp.submat(arma::span(n_occ_alpha, n_orbitals - 1),
                                   arma::span(n_occ_alpha, n_orbitals - 1)));
            }
        }
    }
}
