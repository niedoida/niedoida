/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/os1_integral_engine.hpp"

#include <algorithm>
#include <cmath>

#include <boost/math/constants/constants.hpp>

#include "gto_kit/gto_utils.hpp"
#include "misc_kit/phys_consts.hpp"
#include "misc_kit/special_functions.hpp"

#include "gto_kit/hr.hpp"
#include "gto_kit/vr.hpp"

#include <cstring>

namespace niedoida {
    namespace gto {
        OS1OneElectronIntegralEngine::OS1OneElectronIntegralEngine(
            const core::System& s) :
            m_system(s),
            m_fbs(s.basis_set),
            memory_pool(
                new double[(2 * m_fbs.max_l + 1) * (2 * m_fbs.max_l + 2) *
                               (2 * m_fbs.max_l + 3) / 6 * OS1_S1 +
                           m_fbs.max_primitive_size * m_fbs.max_primitive_size *
                               OS1_S1 +
                           (2 * m_fbs.max_l + 1) * (2 * m_fbs.max_l + 2) *
                               (2 * m_fbs.max_l + 3) / 6 +
                           (2 * m_fbs.max_l + 1) * (2 * m_fbs.max_l + 2) *
                               (2 * m_fbs.max_l + 3) / 6 * (m_fbs.max_l + 1) *
                               (m_fbs.max_l + 2) * (m_fbs.max_l + 3) / 6])
        {
            calc_noncoulombic_matrices();
            calc_external_matrix_from_ext_chrgs();
            calc_external_matrix_from_nucl();
        }

        void OS1OneElectronIntegralEngine::calc_noncoulombic_matrices()
        {
            A.resize(boost::extents[m_fbs.max_primitive_size]
                                   [m_fbs.max_primitive_size]
                                   [m_fbs.max_l + m_fbs.max_l + 3][3]);

            AA.resize(boost::extents[m_fbs.max_primitive_size]
                                    [m_fbs.max_primitive_size][m_fbs.max_l + 1]
                                    [m_fbs.max_l + m_fbs.max_l + 3][3]);

            B.resize(boost::extents[m_fbs.max_naive_size][m_fbs.max_naive_size]
                                   [(m_fbs.max_l + 1) * (m_fbs.max_l + 2) / 2]
                                   [(m_fbs.max_l + 1) * (m_fbs.max_l + 2) / 2]);

            C.resize(boost::extents[m_fbs.max_naive_size][m_fbs.max_naive_size]
                                   [(m_fbs.max_l + 1) * (m_fbs.max_l + 2) / 2]
                                   [(m_fbs.max_l + 1) * (m_fbs.max_l + 2) / 2]);

            D_2.resize(boost::extents[m_fbs.max_primitive_size]
                                     [m_fbs.max_primitive_size][m_fbs.max_l + 1]
                                     [m_fbs.max_l + 1][3]);

            m_overlap_matrix = arma::zeros<arma::mat>(m_fbs.size, m_fbs.size);
            m_kinetic_matrix = arma::zeros<arma::mat>(m_fbs.size, m_fbs.size);
            m_adiabatic_correction_matrix =
                arma::zeros<arma::mat>(m_fbs.size, m_fbs.size);

            for (unsigned i = 0; i < m_fbs.shells.size(); ++i)
                for (unsigned j = 0; j <= i; ++j)
                    update_shells_noncoulombic(m_fbs.shells[j],
                                               m_fbs.shells[i]);

            A.resize(boost::extents[0][0][0][0]);
            AA.resize(boost::extents[0][0][0][0][0]);
            B.resize(boost::extents[0][0][0][0]);
            C.resize(boost::extents[0][0][0][0]);
            D_2.resize(boost::extents[0][0][0][0][0]);

            m_overlap_matrix = symmatu(m_overlap_matrix);
            m_kinetic_matrix = symmatu(m_kinetic_matrix);
            m_adiabatic_correction_matrix =
                symmatu(m_adiabatic_correction_matrix);
        }

        void OS1OneElectronIntegralEngine::calc_external_matrix_from_nucl()
        {
            arma::mat positions(3, m_system.atoms.size());
            arma::vec charges(m_system.atoms.size());
            for (unsigned a = 0; a < m_system.atoms.size(); ++a) {
                const core::Atom* atom = m_system.atoms[a];
                positions(0, a) = atom->coords[0];
                positions(1, a) = atom->coords[1];
                positions(2, a) = atom->coords[2];
                charges(a) = atom->isotope->element->atomic_number;
            }
            calc_external_matrix(
                positions, charges, m_external_potential_matrix_from_nucl);
        }

        void OS1OneElectronIntegralEngine::calc_external_matrix_from_ext_chrgs()
        {
            arma::mat positions(3, m_system.ext_chrgs.size());
            arma::vec charges(m_system.ext_chrgs.size());
            for (unsigned i = 0; i < m_system.ext_chrgs.size(); ++i) {
                const core::Charge* charge = m_system.ext_chrgs[i];
                positions(0, i) = charge->coords[0];
                positions(1, i) = charge->coords[1];
                positions(2, i) = charge->coords[2];
                charges(i) = charge->charge_value;
            }
            calc_external_matrix(
                positions, charges, m_external_potential_matrix_from_ext_chrgs);
        }

        void OS1OneElectronIntegralEngine::calc_external_matrix(
            const arma::mat& positions,
            const arma::vec& charges,
            arma::mat& external_potential_matrix)
        {
            external_potential_matrix =
                arma::zeros<arma::mat>(m_fbs.size, m_fbs.size);

            for (unsigned j = 0; j < m_fbs.shells.size(); ++j)
                for (unsigned k = 0; k <= j; ++k)
                    update_shells_external(m_fbs.shells[k],
                                           m_fbs.shells[j],
                                           positions,
                                           charges,
                                           external_potential_matrix);

            external_potential_matrix = symmatu(external_potential_matrix);
        }

        void OS1OneElectronIntegralEngine::update_shells_external(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es2,
            const arma::mat& positions,
            const arma::vec& charges,
            arma::mat& external_potential_matrix)
        {
            const unsigned m = es1.l_max + es2.l_max;
            const unsigned prim_size_1 = es1.primitive_exps.size();
            const unsigned prim_size_2 = es2.primitive_exps.size();
            const unsigned naive_size_1 = es1.naive_size;
            const unsigned naive_size_2 = es2.naive_size;

            const unsigned i_index_begin =
                es1.l_min * (es1.l_min + 1) * (es1.l_min + 2) / 6;
            const unsigned i_index_end = (m + 1) * (m + 2) * (m + 3) / 6;

            double* memory_pointer = memory_pool.get();

            double* X_b = memory_pointer;
            const unsigned X_s = OS1_S1;
            memory_pointer += X_s * (m + 1) * (m + 2) * (m + 3) / 6;

            double* XX_b = memory_pointer;
            const unsigned XX_s = OS1_S1;
            memory_pointer += prim_size_1 * prim_size_2 * XX_s;
            double* XXij = XX_b;

            memset(XX_b, 0, prim_size_1 * prim_size_2 * XX_s * sizeof(double));

            double* YY_b = memory_pointer;
            const unsigned YY_s =
                (es2.l_max + 1) * (es2.l_max + 2) * (es2.l_max + 3) / 6;
            memory_pointer += (m + 1) * (m + 2) * (m + 3) / 6 * YY_s;

            std::vector<double> R_AB(3);
            double R_AB_2 = 0;
            for (unsigned i = 0; i < 3; ++i) {
                R_AB[i] = es1.atom->coords[i] - es2.atom->coords[i];
                R_AB_2 += R_AB[i] * R_AB[i];
            }

            // start
            for (unsigned i = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, XXij += XX_s) {
                    double p = es1.primitive_exps[i] + es2.primitive_exps[j];
                    double mu =
                        es1.primitive_exps[i] * es2.primitive_exps[j] / p;
                    std::vector<double> R_PA(3);
                    for (unsigned k = 0; k < 3; ++k) {
                        R_PA[k] =
                            ((es1.primitive_exps[i] * es1.atom->coords[k] +
                              es2.primitive_exps[j] * es2.atom->coords[k]) /
                             p) -
                            es1.atom->coords[k];
                    }

                    const double prefactor = 2 *
                                             boost::math::double_constants::pi /
                                             p * std::exp(-mu * R_AB_2);

                    if (prefactor < 1e-20)
                        continue;

                    for (unsigned a = 0; a < positions.n_cols; ++a) {
                        arma::vec position_for_a = positions.col(a);
                        double charge_for_a = charges(a);
                        std::vector<double> R_PC(3);
                        double R_PC_2 = 0;
                        for (unsigned k = 0; k < 3; ++k) {
                            R_PC[k] =
                                ((es1.primitive_exps[i] * es1.atom->coords[k] +
                                  es2.primitive_exps[j] * es2.atom->coords[k]) /
                                 p) -
                                position_for_a(k);

                            R_PC_2 += R_PC[k] * R_PC[k];
                        }

                        // Boys functions
                        misc::fast_boys.generalized_boys(
                            m, p * R_PC_2, prefactor * charge_for_a, X_b);
                        // vertical recursion
                        const double one_over_two_p = 1 / (2 * p);
                        if (m > 0) {
                            vr1_4(1,
                                  one_over_two_p,
                                  m,
                                  R_PA[0],
                                  R_PA[1],
                                  R_PA[2],
                                  -R_PC[0],
                                  -R_PC[1],
                                  -R_PC[2],
                                  X_b);
                            if (m > 4) {
                                vr5_8(1,
                                      one_over_two_p,
                                      m,
                                      R_PA[0],
                                      R_PA[1],
                                      R_PA[2],
                                      -R_PC[0],
                                      -R_PC[1],
                                      -R_PC[2],
                                      X_b);
                                if (m > 8)
                                    vr9_12(1,
                                           one_over_two_p,
                                           m,
                                           R_PA[0],
                                           R_PA[1],
                                           R_PA[2],
                                           -R_PC[0],
                                           -R_PC[1],
                                           -R_PC[2],
                                           X_b);
                            }
                        }

                        const double* Xij = X_b;

                        for (unsigned k = i_index_begin; k < i_index_end; ++k)
                            *(XXij + k) += *(Xij + k * X_s);
                    }
                }

            // contraction
            unsigned l_i, l_j, i_size, j_size;

            unsigned n_i = es1.contraction_starting_number;
            for (unsigned i = 0; i < naive_size_1; ++i) {
                l_i = es1.l[i];
                i_size = l_i + l_i + 1;
                unsigned n_j = es2.contraction_starting_number;
                for (unsigned j = 0; j < naive_size_2; ++j) {
                    l_j = es2.l[j];
                    j_size = l_j + l_j + 1;
                    unsigned l_ij = l_i + l_j;

                    for (unsigned i_index = l_i * (l_i + 1) * (l_i + 2) / 6;
                         i_index < (l_ij + 1) * (l_ij + 2) * (l_ij + 3) / 6;
                         ++i_index)
                        *(YY_b + i_index * YY_s) = 0;

                    const double* XXpq = XX_b;
                    for (unsigned p = 0; p < es1.primitive_exps.size(); ++p)
                        for (unsigned q = 0; q < es2.primitive_exps.size();
                             ++q, XXpq += XX_s)
                            for (unsigned i_index =
                                     l_i * (l_i + 1) * (l_i + 2) / 6;
                                 i_index <
                                 (l_ij + 1) * (l_ij + 2) * (l_ij + 3) / 6;
                                 ++i_index)
                                *(YY_b + i_index * YY_s) +=
                                    es1.prenormed_contraction_coeffs(i, p) *
                                    es2.prenormed_contraction_coeffs(j, q) *
                                    XXpq[i_index];

                    // horizontal
                    if (l_j > 0) {
                        const unsigned funny = l_i * 5 + l_j;
                        switch (funny) {
                        case 1:
                            hr_01(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 2:
                            hr_02(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 3:
                            hr_03(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 4:
                            hr_04(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 5:
                            hr_05(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 6:
                            hr_11(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 7:
                            hr_12(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 8:
                            hr_13(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 9:
                            hr_14(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 10:
                            hr_15(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 11:
                            hr_21(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 12:
                            hr_22(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 13:
                            hr_23(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 14:
                            hr_24(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 15:
                            hr_25(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 16:
                            hr_31(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 17:
                            hr_32(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 18:
                            hr_33(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 19:
                            hr_34(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 20:
                            hr_35(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 21:
                            hr_41(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 22:
                            hr_42(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 23:
                            hr_43(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 24:
                            hr_44(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 25:
                            hr_45(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 26:
                            hr_51(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 27:
                            hr_52(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 28:
                            hr_53(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 29:
                            hr_54(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        case 30:
                            hr_55(
                                R_AB[0], R_AB[1], R_AB[2], 0, 1, YY_b, 1, YY_s);
                            break;
                        }
                    }

                    // transformation to spherical and update of
                    // external_potential_matrix
                    for (unsigned m_i = 0; m_i < i_size; ++m_i)
                        for (unsigned m_j = 0; m_j < j_size; ++m_j) {
                            unsigned i_cart = 0;
                            for (int i_x = l_i; i_x >= 0; --i_x)
                                for (int i_y = l_i - i_x; i_y >= 0;
                                     --i_y, ++i_cart) {
                                    unsigned j_cart = 0;
                                    for (int j_x = l_j; j_x >= 0; --j_x)
                                        for (int j_y = l_j - j_x; j_y >= 0;
                                             --j_y, ++j_cart) {
                                            if (n_i + m_i <= n_j + m_j)
                                                external_potential_matrix(
                                                    n_i + m_i, n_j + m_j) +=
                                                    -(cartesian_to_spherical
                                                          [l_i](m_i, i_cart) *
                                                      cartesian_to_spherical
                                                          [l_j](m_j, j_cart) *
                                                      *(YY_b +
                                                        triple_index_map(
                                                            i_x,
                                                            i_y,
                                                            l_i - i_x - i_y) *
                                                            YY_s +
                                                        triple_index_map(
                                                            j_x,
                                                            j_y,
                                                            l_j - j_x - j_y)));
                                        }
                                }
                        }
                    n_j += j_size;
                }
                n_i += i_size;
            }
        }

        void OS1OneElectronIntegralEngine::update_shells_noncoulombic(
            const FlatBasisSet::Shell& es1, const FlatBasisSet::Shell& es2)
        {
            const unsigned prim_size_1 = es1.primitive_exps.size();
            const unsigned prim_size_2 = es2.primitive_exps.size();
            const unsigned l_1 = es1.l_max;
            const unsigned l_2 = es2.l_max;
            const unsigned m = l_1 + l_2 + 2;
            const unsigned naive_size_1 = es1.naive_size;
            const unsigned naive_size_2 = es2.naive_size;

            std::vector<double> R_AB(3);
            std::vector<double> R_AB_2(3);

            for (unsigned i = 0; i < 3; ++i)
                R_AB[i] = es1.atom->coords[i] - es2.atom->coords[i];

            for (unsigned i = 0; i < 3; ++i)
                R_AB_2[i] = pow(es1.atom->coords[i] - es2.atom->coords[i], 2);

            //start + vertical recursion
            for (unsigned i = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j) {
                    double p = es1.primitive_exps[i] + es2.primitive_exps[j];
                    double mu =
                        es1.primitive_exps[i] * es2.primitive_exps[j] / p;
                    std::vector<double> R_PB(3);
                    for (unsigned k = 0; k < 3; ++k) {
                        R_PB[k] =
                            ((es1.primitive_exps[i] * es1.atom->coords[k] +
                              es2.primitive_exps[j] * es2.atom->coords[k]) /
                             p) -
                            es2.atom->coords[k];

                        AA[i][j][0][0][k] =
                            std::sqrt(boost::math::double_constants::pi / p) *
                            std::exp(-(mu * R_AB_2[k]));
                    }
                    for (unsigned jj = 1; jj <= m; ++jj)
                        for (unsigned k = 0; k < 3; ++k)
                            AA[i][j][0][jj][k] =
                                R_PB[k] * AA[i][j][0][jj - 1][k] +
                                (jj > 1 ? 0.5 * (jj - 1) *
                                              AA[i][j][0][jj - 2][k] / p
                                        : 0);

                    // horizontal
                    for (unsigned jj = 0; jj <= m; ++jj)
                        for (unsigned ii = 1; ii <= std::min(jj, l_1); ++ii)
                            for (unsigned k = 0; k < 3; ++k)
                                AA[i][j][ii][jj - ii][k] =
                                    AA[i][j][ii - 1][jj - ii + 1][k] -
                                    R_AB[k] * AA[i][j][ii - 1][jj - ii][k];

                    // D_2
                    for (unsigned ii = 0; ii <= l_1; ++ii)
                        for (unsigned jj = 0; jj <= l_2; ++jj)
                            for (unsigned k = 0; k < 3; ++k)
                                D_2[i][j][ii][jj][k] =
                                    4 * es2.primitive_exps[j] *
                                        es2.primitive_exps[j] *
                                        AA[i][j][ii][jj + 2][k] -
                                    2 * es2.primitive_exps[j] * (2 * jj + 1) *
                                        AA[i][j][ii][jj][k] +
                                    (jj > 1 ? jj * (jj - 1) *
                                                  AA[i][j][ii][jj - 2][k]
                                            : 0);
                }

            // looping over contractions
            unsigned l_i, l_j, i_size, j_size;
            unsigned n_i = es1.contraction_starting_number;

            for (unsigned i = 0; i < naive_size_1; ++i) {
                unsigned n_j = es2.contraction_starting_number;
                ;
                l_i = es1.l[i];
                i_size = l_i + l_i + 1;
                for (unsigned j = 0; j < naive_size_2; ++j) {
                    l_j = es2.l[j];
                    j_size = l_j + l_j + 1;

                    unsigned tmp_i = 0;
                    for (int i_x = l_i; i_x >= 0; --i_x)
                        for (int i_y = l_i - i_x; i_y >= 0; --i_y, ++tmp_i) {
                            unsigned tmp_j = 0;
                            for (int j_x = l_j; j_x >= 0; --j_x)
                                for (int j_y = l_j - j_x; j_y >= 0;
                                     --j_y, ++tmp_j) {
                                    B[i][j][tmp_i][tmp_j] = 0;
                                    C[i][j][tmp_i][tmp_j] = 0;
                                    for (unsigned p = 0; p < prim_size_1; ++p)
                                        for (unsigned q = 0; q < prim_size_2;
                                             ++q) {
                                            C[i][j][tmp_i][tmp_j] +=
                                                -0.5 *
                                                es1.prenormed_contraction_coeffs(
                                                    i, p) *
                                                es2.prenormed_contraction_coeffs(
                                                    j, q) *
                                                (D_2[p][q][i_x][j_x][0] *
                                                     AA[p][q][i_y][j_y][1] *
                                                     AA[p][q][l_i - i_x - i_y]
                                                       [l_j - j_x - j_y][2] +
                                                 AA[p][q][i_x][j_x][0] *
                                                     D_2[p][q][i_y][j_y][1] *
                                                     AA[p][q][l_i - i_x - i_y]
                                                       [l_j - j_x - j_y][2] +
                                                 AA[p][q][i_x][j_x][0] *
                                                     AA[p][q][i_y][j_y][1] *
                                                     D_2[p][q][l_i - i_x - i_y]
                                                        [l_j - j_x - j_y][2]);
                                            B[i][j][tmp_i][tmp_j] +=
                                                es1.prenormed_contraction_coeffs(
                                                    i, p) *
                                                es2.prenormed_contraction_coeffs(
                                                    j, q) *
                                                AA[p][q][i_x][j_x][0] *
                                                AA[p][q][i_y][j_y][1] *
                                                AA[p][q][l_i - i_x - i_y]
                                                  [l_j - j_x - j_y][2];
                                        }
                                }
                        }

                    // transformation to spherical and update of overlap_matrix
                    for (unsigned m_i = 0; m_i < i_size; ++m_i)
                        for (unsigned m_j = 0; m_j < j_size; ++m_j)
                            for (unsigned i_cart = 0;
                                 i_cart < (l_i + 1) * (l_i + 2) / 2;
                                 ++i_cart)
                                for (unsigned j_cart = 0;
                                     j_cart < (l_j + 1) * (l_j + 2) / 2;
                                     ++j_cart) {
                                    if (n_i + m_i <= n_j + m_j) {
                                        const double tf =
                                            cartesian_to_spherical[l_i](
                                                m_i, i_cart) *
                                            cartesian_to_spherical[l_j](m_j,
                                                                        j_cart);

                                        m_kinetic_matrix(n_i + m_i,
                                                         n_j + m_j) +=
                                            tf * C[i][j][i_cart][j_cart];
                                        m_overlap_matrix(n_i + m_i,
                                                         n_j + m_j) +=
                                            tf * B[i][j][i_cart][j_cart];
                                    }
                                }
                    n_j += j_size;
                }
                n_i += i_size;
            }
        }
    }
}
