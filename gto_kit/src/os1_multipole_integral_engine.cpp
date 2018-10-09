/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/os1_integral_engine.hpp"

#include "gto_kit/gto_utils.hpp"

#include <algorithm>
#include <cmath>

#include <boost/math/constants/constants.hpp>

namespace niedoida {
    namespace gto {
        OS1MultipoleIntegralEngine::OS1MultipoleIntegralEngine(
            const core::System& s)
        {
            FlatBasisSet fbs(s.basis_set);

            A.resize(
                boost::extents[fbs.max_primitive_size][fbs.max_primitive_size]
                              [fbs.max_l + fbs.max_l + 3][3]);

            AA.resize(
                boost::extents[fbs.max_primitive_size][fbs.max_primitive_size]
                              [fbs.max_l + 1][fbs.max_l + fbs.max_l + 3][3]);

            D.resize(boost::extents[3][fbs.max_naive_size][fbs.max_naive_size]
                                   [(fbs.max_l + 1) * (fbs.max_l + 2) / 2]
                                   [(fbs.max_l + 1) * (fbs.max_l + 2) / 2]);

            Q.resize(
                boost::extents[3][3][fbs.max_naive_size][fbs.max_naive_size]
                              [(fbs.max_l + 1) * (fbs.max_l + 2) / 2]
                              [(fbs.max_l + 1) * (fbs.max_l + 2) / 2]);

            M_1.resize(
                boost::extents[fbs.max_primitive_size][fbs.max_primitive_size]
                              [fbs.max_l + 2][fbs.max_l + 2][3]);

            M_2.resize(
                boost::extents[fbs.max_primitive_size][fbs.max_primitive_size]
                              [fbs.max_l + 1][fbs.max_l + 1][3]);

            m_dipole_matrices.resize(3);
            m_quadrupole_matrices.set_size(3, 3);

            for (unsigned i = 0; i < 3; ++i) {
                m_dipole_matrices[i] =
                    arma::zeros<arma::mat>(fbs.size, fbs.size);
                for (unsigned j = 0; j <= i; ++j)
                    m_quadrupole_matrices(i, j) =
                        arma::zeros<arma::mat>(fbs.size, fbs.size);
            }

            for (unsigned i = 0; i < fbs.shells.size(); ++i)
                diagonal(fbs.shells[i]);

            for (unsigned i = 0; i < fbs.shells.size(); ++i)
                for (unsigned j = i + 1; j < fbs.shells.size(); ++j)
                    nondiagonal(fbs.shells[i], fbs.shells[j]);

            A.resize(boost::extents[0][0][0][0]);
            AA.resize(boost::extents[0][0][0][0][0]);
            D.resize(boost::extents[0][0][0][0][0]);
            Q.resize(boost::extents[0][0][0][0][0][0]);
            M_1.resize(boost::extents[0][0][0][0][0]);
            M_2.resize(boost::extents[0][0][0][0][0]);

            for (unsigned i = 0; i < 3; ++i) {
                m_dipole_matrices[i] = symmatu(m_dipole_matrices[i]);
                for (unsigned j = 0; j <= i; ++j) {
                    m_quadrupole_matrices(i, j) =
                        symmatu(m_quadrupole_matrices(i, j));
                    m_quadrupole_matrices(j, i) = m_quadrupole_matrices(i, j);
                }
            }
        }

        void OS1MultipoleIntegralEngine::diagonal(const FlatBasisSet::Shell& es)
        {
            // assuming that reference point is C = (0, 0, 0)
            std::vector<double> R_AC(3);
            for (unsigned i = 0; i < 3; ++i)
                R_AC[i] = es.atom->coords[i];

            // start + vertical recursion
            const unsigned prim_size = es.primitive_exps.size();
            const unsigned l_1 = es.l_max;
            const unsigned m = l_1 + l_1 + 2;
            const unsigned naive_size = es.naive_size;

            for (unsigned i = 0; i < prim_size; ++i)
                for (unsigned j = 0; j < prim_size; ++j) {

                    const double p =
                        es.primitive_exps[i] + es.primitive_exps[j];

                    for (unsigned k = 0; k < 3; ++k)
                        A[i][j][0][k] =
                            std::sqrt(boost::math::double_constants::pi / p);

                    for (unsigned ii = 1; ii <= m; ++ii)
                        for (unsigned k = 0; k < 3; ++k)
                            A[i][j][ii][k] =
                                ii > 1 ? 0.5 * (ii - 1) * A[i][j][ii - 2][k] / p
                                       : 0;

                    // horizontal for dipoles
                    for (unsigned ii = 0; ii <= l_1 + 1; ++ii)
                        for (unsigned jj = 0; jj <= l_1; ++jj)
                            for (unsigned k = 0; k < 3; ++k)
                                M_1[i][j][ii][jj][k] =
                                    A[i][j][ii + jj + 1][k] +
                                    R_AC[k] * A[i][j][ii + jj][k];

                    // horizontal for quadrupoles
                    for (unsigned ii = 0; ii <= l_1; ++ii)
                        for (unsigned jj = 0; jj <= l_1; ++jj)
                            for (unsigned k = 0; k < 3; ++k)
                                M_2[i][j][ii][jj][k] =
                                    M_1[i][j][ii + 1][jj][k] +
                                    R_AC[k] * M_1[i][j][ii][jj][k];
                }

            // looping over contractions
            unsigned n_i = es.contraction_starting_number;

            for (unsigned i = 0; i < naive_size; ++i) {
                unsigned n_j = n_i;
                const unsigned l_i = es.l[i];
                const unsigned i_size = l_i + l_i + 1;
                for (unsigned j = i; j < naive_size; ++j) {
                    const unsigned l_j = es.l[j];
                    const unsigned j_size = l_j + l_j + 1;

                    contract_same(es, i, es, j);

                    // transformation to spherical and update
                    c2s(es, i, n_i, es, j, n_j);

                    n_j += j_size;
                }
                n_i += i_size;
            }
        }

        void
        OS1MultipoleIntegralEngine::nondiagonal(const FlatBasisSet::Shell& es1,
                                                const FlatBasisSet::Shell& es2)
        {
         
            std::vector<double> R_BC(3);
            for (unsigned i = 0; i < 3; ++i)
                R_BC[i] = es2.atom->coords[i];

            const unsigned prim_size_1 = es1.primitive_exps.size();
            const unsigned prim_size_2 = es2.primitive_exps.size();
            const unsigned l_1 = es1.l_max;
            const unsigned l_2 = es2.l_max;
            const unsigned m = l_1 + l_2 + 2;
            const unsigned naive_size_1 = es1.naive_size;
            const unsigned naive_size_2 = es2.naive_size;

            if (es1.atom == es2.atom) {
                for (unsigned i = 0; i < prim_size_1; ++i)
                    for (unsigned j = 0; j < prim_size_2; ++j) {

                        const double p =
                            es1.primitive_exps[i] + es2.primitive_exps[j];

                        for (unsigned k = 0; k < 3; ++k)
                            A[i][j][0][k] = std::sqrt(
                                boost::math::double_constants::pi / p);

                        for (unsigned ii = 1; ii <= m; ++ii)
                            for (unsigned k = 0; k < 3; ++k)
                                A[i][j][ii][k] =
                                    ii > 1 ? 0.5 * (ii - 1) *
                                                 A[i][j][ii - 2][k] / p
                                           : 0;

                        for (unsigned ii = 0; ii <= l_1; ++ii)
                            for (unsigned jj = 0; jj <= l_2 + 1; ++jj)
                                for (unsigned k = 0; k < 3; ++k)
                                    M_1[i][j][ii][jj][k] =
                                        A[i][j][ii + jj + 1][k] +
                                        R_BC[k] * A[i][j][ii + jj][k];

                        for (unsigned ii = 0; ii <= l_1; ++ii)
                            for (unsigned jj = 0; jj <= l_2; ++jj)
                                for (unsigned k = 0; k < 3; ++k)
                                    M_2[i][j][ii][jj][k] =
                                        M_1[i][j][ii][jj + 1][k] +
                                        R_BC[k] * M_1[i][j][ii][jj][k];
                    }

                unsigned n_i = es1.contraction_starting_number;

                for (unsigned i = 0; i < naive_size_1; ++i) {
                    unsigned n_j = es2.contraction_starting_number;
                    ;
                    const unsigned l_i = es1.l[i];
                    const unsigned i_size = l_i + l_i + 1;
                    for (unsigned j = 0; j < naive_size_2; ++j) {
                        const unsigned l_j = es2.l[j];
                        const unsigned j_size = l_j + l_j + 1;

                        contract_same(es1, i, es2, j);

                        c2s(es1, i, n_i, es2, j, n_j);

                        n_j += j_size;
                    }
                    n_i += i_size;
                }
            } else {
                std::vector<double> R_AB(3);
                std::vector<double> R_AB_2(3);

                for (unsigned i = 0; i < 3; ++i)
                    R_AB[i] = es1.atom->coords[i] - es2.atom->coords[i];

                for (unsigned i = 0; i < 3; ++i)
                    R_AB_2[i] = R_AB[i] * R_AB[i];

                for (unsigned i = 0; i < prim_size_1; ++i)
                    for (unsigned j = 0; j < prim_size_2; ++j) {
                        double p =
                            es1.primitive_exps[i] + es2.primitive_exps[j];
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
                                std::sqrt(boost::math::double_constants::pi /
                                          p) *
                                std::exp(-(mu * R_AB_2[k]));
                        }
                        for (unsigned jj = 1; jj <= m; ++jj)
                            for (unsigned k = 0; k < 3; ++k)
                                AA[i][j][0][jj][k] =
                                    R_PB[k] * AA[i][j][0][jj - 1][k] +
                                    (jj > 1 ? 0.5 * (jj - 1) *
                                                  AA[i][j][0][jj - 2][k] / p
                                            : 0);

                        for (unsigned jj = 0; jj <= m; ++jj)
                            for (unsigned ii = 1; ii <= std::min(jj, l_1); ++ii)
                                for (unsigned k = 0; k < 3; ++k)
                                    AA[i][j][ii][jj - ii][k] =
                                        AA[i][j][ii - 1][jj - ii + 1][k] -
                                        R_AB[k] * AA[i][j][ii - 1][jj - ii][k];

                        for (unsigned ii = 0; ii <= l_1; ++ii)
                            for (unsigned jj = 0; jj <= l_2 + 1; ++jj)
                                for (unsigned k = 0; k < 3; ++k)
                                    M_1[i][j][ii][jj][k] =
                                        AA[i][j][ii][jj + 1][k] +
                                        R_BC[k] * AA[i][j][ii][jj][k];

                        for (unsigned ii = 0; ii <= l_1; ++ii)
                            for (unsigned jj = 0; jj <= l_2; ++jj)
                                for (unsigned k = 0; k < 3; ++k)
                                    M_2[i][j][ii][jj][k] =
                                        M_1[i][j][ii][jj + 1][k] +
                                        R_BC[k] * M_1[i][j][ii][jj][k];
                    }

                unsigned n_i = es1.contraction_starting_number;

                for (unsigned i = 0; i < naive_size_1; ++i) {
                    unsigned n_j = es2.contraction_starting_number;
                    ;
                    const unsigned l_i = es1.l[i];
                    const unsigned i_size = l_i + l_i + 1;
                    for (unsigned j = 0; j < naive_size_2; ++j) {
                        const unsigned l_j = es2.l[j];
                        const unsigned j_size = l_j + l_j + 1;

                        contract_diff(es1, i, es2, j);

                        c2s(es1, i, n_i, es2, j, n_j);

                        n_j += j_size;
                    }
                    n_i += i_size;
                }
            }
        }

        void OS1MultipoleIntegralEngine::contract_same(
            const FlatBasisSet::Shell& es1,
            unsigned i,
            const FlatBasisSet::Shell& es2,
            unsigned j)
        {
            assert(es1.atom == es2.atom);

            const unsigned prim_size_1 = es1.primitive_exps.size();
            const unsigned prim_size_2 = es2.primitive_exps.size();

            const unsigned l_i = es1.l[i];
            const unsigned l_j = es2.l[j];
            const unsigned l_ij = l_i + l_j;

            unsigned tmp_i = 0;
            for (int i_x = l_i; i_x >= 0; --i_x)
                for (int i_y = l_i - i_x; i_y >= 0; --i_y, ++tmp_i) {
                    unsigned tmp_j = 0;
                    for (int j_x = l_j; j_x >= 0; --j_x)
                        for (int j_y = l_j - j_x; j_y >= 0; --j_y, ++tmp_j) {

                            D[0][i][j][tmp_i][tmp_j] = 0;
                            D[1][i][j][tmp_i][tmp_j] = 0;
                            D[2][i][j][tmp_i][tmp_j] = 0;
                            Q[0][0][i][j][tmp_i][tmp_j] = 0;
                            Q[1][1][i][j][tmp_i][tmp_j] = 0;
                            Q[2][2][i][j][tmp_i][tmp_j] = 0;
                            Q[1][0][i][j][tmp_i][tmp_j] = 0;
                            Q[2][0][i][j][tmp_i][tmp_j] = 0;
                            Q[2][1][i][j][tmp_i][tmp_j] = 0;

                            for (unsigned p = 0; p < prim_size_1; ++p) {

                                const double c_ip =
                                    es1.prenormed_contraction_coeffs(i, p);

                                for (unsigned q = 0; q < prim_size_2; ++q) {

                                    const double c_jq =
                                        es2.prenormed_contraction_coeffs(j, q);

                                    const double cc = c_ip * c_jq;

                                    D[0][i][j][tmp_i][tmp_j] +=
                                        cc * M_1[p][q][i_x][j_x][0] *
                                        A[p][q][i_y + j_y][1] *
                                        A[p][q][l_ij - i_x - i_y - j_x - j_y]
                                         [2];
                                    D[1][i][j][tmp_i][tmp_j] +=
                                        cc * M_1[p][q][i_y][j_y][1] *
                                        A[p][q][i_x + j_x][0] *
                                        A[p][q][l_ij - i_x - i_y - j_x - j_y]
                                         [2];
                                    D[2][i][j][tmp_i][tmp_j] +=
                                        cc *
                                        M_1[p][q][l_i - i_x - i_y]
                                           [l_j - j_x - j_y][2] *
                                        A[p][q][i_y + j_y][1] *
                                        A[p][q][i_x + j_x][0];
                                    Q[0][0][i][j][tmp_i][tmp_j] +=
                                        cc * M_2[p][q][i_x][j_x][0] *
                                        A[p][q][i_y + j_y][1] *
                                        A[p][q][l_ij - i_x - i_y - j_x - j_y]
                                         [2];
                                    Q[1][1][i][j][tmp_i][tmp_j] +=
                                        cc * M_2[p][q][i_y][j_y][1] *
                                        A[p][q][i_x + j_x][0] *
                                        A[p][q][l_ij - i_x - i_y - j_x - j_y]
                                         [2];
                                    Q[2][2][i][j][tmp_i][tmp_j] +=
                                        cc *
                                        M_2[p][q][l_i - i_x - i_y]
                                           [l_j - j_x - j_y][2] *
                                        A[p][q][i_y + j_y][1] *
                                        A[p][q][i_x + j_x][0];
                                    Q[1][0][i][j][tmp_i][tmp_j] +=
                                        cc * M_1[p][q][i_x][j_x][0] *
                                        M_1[p][q][i_y][j_y][1] *
                                        A[p][q][l_ij - i_x - i_y - j_x - j_y]
                                         [2];
                                    Q[2][1][i][j][tmp_i][tmp_j] +=
                                        cc *
                                        M_1[p][q][l_i - i_x - i_y]
                                           [l_j - j_x - j_y][2] *
                                        M_1[p][q][i_y][j_y][1] *
                                        A[p][q][i_x + j_x][0];
                                    Q[2][0][i][j][tmp_i][tmp_j] +=
                                        cc *
                                        M_1[p][q][l_i - i_x - i_y]
                                           [l_j - j_x - j_y][2] *
                                        M_1[p][q][i_x][j_x][0] *
                                        A[p][q][i_y + j_y][1];
                                }
                            }
                        }
                }
        }

        void OS1MultipoleIntegralEngine::contract_diff(
            const FlatBasisSet::Shell& es1,
            unsigned i,
            const FlatBasisSet::Shell& es2,
            unsigned j)
        {
            assert(es1.atom != es2.atom);

            const unsigned prim_size_1 = es1.primitive_exps.size();
            const unsigned prim_size_2 = es2.primitive_exps.size();

            const unsigned l_i = es1.l[i];
            const unsigned l_j = es2.l[j];

            unsigned tmp_i = 0;
            for (int i_x = l_i; i_x >= 0; --i_x)
                for (int i_y = l_i - i_x; i_y >= 0; --i_y, ++tmp_i) {
                    unsigned tmp_j = 0;
                    for (int j_x = l_j; j_x >= 0; --j_x)
                        for (int j_y = l_j - j_x; j_y >= 0; --j_y, ++tmp_j) {

                            D[0][i][j][tmp_i][tmp_j] = 0;
                            D[1][i][j][tmp_i][tmp_j] = 0;
                            D[2][i][j][tmp_i][tmp_j] = 0;
                            Q[0][0][i][j][tmp_i][tmp_j] = 0;
                            Q[1][1][i][j][tmp_i][tmp_j] = 0;
                            Q[2][2][i][j][tmp_i][tmp_j] = 0;
                            Q[1][0][i][j][tmp_i][tmp_j] = 0;
                            Q[2][0][i][j][tmp_i][tmp_j] = 0;
                            Q[2][1][i][j][tmp_i][tmp_j] = 0;

                            for (unsigned p = 0; p < prim_size_1; ++p) {

                                const double c_ip =
                                    es1.prenormed_contraction_coeffs(i, p);

                                for (unsigned q = 0; q < prim_size_2; ++q) {

                                    const double c_jq =
                                        es2.prenormed_contraction_coeffs(j, q);

                                    const double cc = c_ip * c_jq;

                                    D[0][i][j][tmp_i][tmp_j] +=
                                        cc * M_1[p][q][i_x][j_x][0] *
                                        AA[p][q][i_y][j_y][1] *
                                        AA[p][q][l_i - i_x - i_y]
                                          [l_j - j_x - j_y][2];
                                    D[1][i][j][tmp_i][tmp_j] +=
                                        cc * M_1[p][q][i_y][j_y][1] *
                                        AA[p][q][i_x][j_x][0] *
                                        AA[p][q][l_i - i_x - i_y]
                                          [l_j - j_x - j_y][2];
                                    D[2][i][j][tmp_i][tmp_j] +=
                                        cc *
                                        M_1[p][q][l_i - i_x - i_y]
                                           [l_j - j_x - j_y][2] *
                                        AA[p][q][i_y][j_y][1] *
                                        AA[p][q][i_x][j_x][0];
                                    Q[0][0][i][j][tmp_i][tmp_j] +=
                                        cc * M_2[p][q][i_x][j_x][0] *
                                        AA[p][q][i_y][j_y][1] *
                                        AA[p][q][l_i - i_x - i_y]
                                          [l_j - j_x - j_y][2];
                                    Q[1][1][i][j][tmp_i][tmp_j] +=
                                        cc * M_2[p][q][i_y][j_y][1] *
                                        AA[p][q][i_x][j_x][0] *
                                        AA[p][q][l_i - i_x - i_y]
                                          [l_j - j_x - j_y][2];
                                    Q[2][2][i][j][tmp_i][tmp_j] +=
                                        cc *
                                        M_2[p][q][l_i - i_x - i_y]
                                           [l_j - j_x - j_y][2] *
                                        AA[p][q][i_y][j_y][1] *
                                        AA[p][q][i_x][j_x][0];
                                    Q[1][0][i][j][tmp_i][tmp_j] +=
                                        cc * M_1[p][q][i_x][j_x][0] *
                                        M_1[p][q][i_y][j_y][1] *
                                        AA[p][q][l_i - i_x - i_y]
                                          [l_j - j_x - j_y][2];
                                    Q[2][1][i][j][tmp_i][tmp_j] +=
                                        cc *
                                        M_1[p][q][l_i - i_x - i_y]
                                           [l_j - j_x - j_y][2] *
                                        M_1[p][q][i_y][j_y][1] *
                                        AA[p][q][i_x][j_x][0];
                                    Q[2][0][i][j][tmp_i][tmp_j] +=
                                        cc *
                                        M_1[p][q][l_i - i_x - i_y]
                                           [l_j - j_x - j_y][2] *
                                        M_1[p][q][i_x][j_x][0] *
                                        AA[p][q][i_y][j_y][1];
                                }
                            }
                        }
                }
        }

        void OS1MultipoleIntegralEngine::c2s(const FlatBasisSet::Shell& es1,
                                             unsigned i,
                                             unsigned n_i,
                                             const FlatBasisSet::Shell& es2,
                                             unsigned j,
                                             unsigned n_j)
        {
            const unsigned l_i = es1.l[i];
            const unsigned i_size = l_i + l_i + 1;
            const unsigned l_j = es2.l[j];
            const unsigned j_size = l_j + l_j + 1;

            for (unsigned m_i = 0; m_i < i_size; ++m_i)
                for (unsigned m_j = 0; m_j < j_size; ++m_j)
                    for (unsigned i_cart = 0; i_cart < sum1n(l_i + 1); ++i_cart)
                        for (unsigned j_cart = 0; j_cart < sum1n(l_j + 1);
                             ++j_cart) {
                            if (n_i + m_i <= n_j + m_j) {
                                const double tf =
                                    cartesian_to_spherical[l_i](m_i, i_cart) *
                                    cartesian_to_spherical[l_j](m_j, j_cart);

                                for (unsigned k = 0; k < 3; ++k) {
                                    m_dipole_matrices[k](n_i + m_i,
                                                         n_j + m_j) +=
                                        tf * D[k][i][j][i_cart][j_cart];
                                    for (unsigned l = 0; l <= k; ++l) {
                                        m_quadrupole_matrices(k, l)(
                                            n_i + m_i, n_j + m_j) +=
                                            tf * Q[k][l][i][j][i_cart][j_cart];
                                    }
                                }
                            }
                        }
        }
    }
}
