/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/os1_integral_engine.hpp"

#include "gto_kit/gto_utils.hpp"
#include "gto_kit/hr.hpp"
#include "gto_kit/transfer.hpp"
#include "gto_kit/vr.hpp"

#include "misc_kit/special_functions.hpp"

namespace niedoida {
    namespace gto {
        OS1PoissonTwoElectronIntegralEngine::
            OS1PoissonTwoElectronIntegralEngine(
                const core::BasisSet& bs,
                const core::BasisSet& poisson_bs,
                const core::BasisSet& aux_bs,
                const double treshold) :
            m_fbs(bs),
            m_poisson_fbs(poisson_bs),
            m_aux_fbs(aux_bs),
            spherical_basis(true), // temporarily just dummy
            m_treshold(
                treshold /
                10), // to account for possible large density matrix elements
            memory_pool(
                new double[m_fbs.AAAA_max_size + m_fbs.BBBBBB_max_size +
                           2 * m_fbs.max_primitive_size * m_fbs.max_naive_size +
                           15 * m_fbs.max_primitive_size *
                               m_fbs.max_primitive_size +
                           2000000]) // copied

        {
        }

        std::size_t
        OS1PoissonTwoElectronIntegralEngine::preferred_no_pair_requests() const
        {
            return 1000;
        }

        std::size_t
        OS1PoissonTwoElectronIntegralEngine::preferred_no_ACD_requests() const
        {
            return 200;
        }

        void OS1PoissonTwoElectronIntegralEngine::calc_AC(
            std::vector<core::PairRequest>& requests) const
        {
            for (core::PairRequest& r : requests)
                if (!r.done)
                    calc_AC(r);
        }

        void OS1PoissonTwoElectronIntegralEngine::calc_ACD(
            std::vector<core::ACDRequest>& requests) const
        {
            for (core::ACDRequest& r : requests)
                if (!r.done)
                    calc_ACD(r);
        }

        void OS1PoissonTwoElectronIntegralEngine::calc_A_aux(
            std::vector<core::PairRequest>& requests) const
        {
            for (core::PairRequest& r : requests)
                if (!r.done)
                    calc_A_aux(r);
        }

        void OS1PoissonTwoElectronIntegralEngine::calc_AC(
            core::PairRequest& request) const
        {
            const FlatBasisSet::Shell& es1 =
                m_poisson_fbs.shells[request.shells[0]];
            const FlatBasisSet::Shell& es3 =
                m_poisson_fbs.shells[request.shells[1]];
            calc_AC(es1, es3, request.results);
            request.done = true;
        }

        void OS1PoissonTwoElectronIntegralEngine::calc_ACD(
            core::ACDRequest& request) const
        {
            const FlatBasisSet::Shell& es1 =
                m_poisson_fbs.shells[request.shells[0]];
            const FlatBasisSet::Shell& es3 = m_fbs.shells[request.shells[1]];
            const FlatBasisSet::Shell& es4 = m_fbs.shells[request.shells[2]];
            calc_ACD(es1, es3, es4, request.results);
            request.done = true;
        }

        void OS1PoissonTwoElectronIntegralEngine::calc_A_aux(
            core::PairRequest& request) const
        {
            const FlatBasisSet::Shell& es1 =
                m_poisson_fbs.shells[request.shells[0]];
            const FlatBasisSet::Shell& es3 =
                m_aux_fbs.shells[request.shells[1]];
            calc_mixed(es1, es3, request.results);
            request.done = true;
        }

        void OS1PoissonTwoElectronIntegralEngine::calc_AC(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es3,
            double* results) const
        {
            const unsigned l_1_max = es1.l_max;
            const unsigned l_3_max = es3.l_max;

            const unsigned l_1_min = es1.l_min;
            const unsigned l_3_min = es3.l_min;

            const unsigned m = es1.l_max + es3.l_max;
            const unsigned prim_size_1 = es1.primitive_exps.size();
            const unsigned prim_size_3 = es3.primitive_exps.size();
            const unsigned naive_size_1 = es1.naive_size;
            const unsigned naive_size_3 = es3.naive_size;

            const double* const CT_1_b =
                &es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &es3.prenormed_contraction_coeffs(0, 0);

            const double X_AC = es1.atom->coords[0] - es3.atom->coords[0];
            const double Y_AC = es1.atom->coords[1] - es3.atom->coords[1];
            const double Z_AC = es1.atom->coords[2] - es3.atom->coords[2];

            const double X_AC_2 = X_AC * X_AC;
            const double Y_AC_2 = Y_AC * Y_AC;
            const double Z_AC_2 = Z_AC * Z_AC;

            const unsigned i_index_begin =
                l_1_min * (l_1_min + 1) * (l_1_min + 2) / 6;
            const unsigned i_index_end =
                (l_1_max + 1) * (l_1_max + 2) * (l_1_max + 3) / 6;
            const unsigned k_index_begin =
                l_3_min * (l_3_min + 1) * (l_3_min + 2) / 6;
            const unsigned k_index_end =
                (l_3_max + 1) * (l_3_max + 2) * (l_3_max + 3) / 6;

            double* memory_pointer = memory_pool.get();
            double* const Ax = memory_pointer;
            memory_pointer += m + 3;
            double* const Ay = memory_pointer;
            memory_pointer += m + 3;
            double* const Az = memory_pointer;
            memory_pointer += m + 3;
            const unsigned B_s = l_3_max + 1;
            double* const Bx = memory_pointer;
            memory_pointer += (m + 3) * B_s;
            double* const By = memory_pointer;
            memory_pointer += (m + 3) * B_s;
            double* const Bz = memory_pointer;
            memory_pointer += (m + 3) * B_s;
            const unsigned D2_s = l_3_max + 1;
            double* const D2x = memory_pointer;
            memory_pointer += (l_1_max + 1) * D2_s;
            double* const D2y = memory_pointer;
            memory_pointer += (l_1_max + 1) * D2_s;
            double* const D2z = memory_pointer;
            memory_pointer += (l_1_max + 1) * D2_s;
            double* const PP = memory_pointer;
            unsigned PP_s =
                (i_index_end - i_index_begin) * (k_index_end - k_index_begin);
            memory_pointer += PP_s;
            double* const CT_13_b = memory_pointer;
            memory_pointer +=
                naive_size_1 * prim_size_1 * naive_size_3 * prim_size_3;
            unsigned PC_s = naive_size_1 * naive_size_3 * PP_s;
            double* const PC = memory_pointer;
            memory_pointer += PC_s;

            const unsigned size_1 = es1.size;
            const unsigned size_3 = es3.size;

            double* const CCC_b = memory_pointer;
            const unsigned CCC_s = i_index_end;
            memory_pointer += k_index_end * CCC_s;
            double* const DDD_b = memory_pointer;
            const unsigned DDD_s = k_index_end;
            memory_pointer += DDD_s * (es1.l_max + 1) * (es1.l_max + 2) / 2;

            std::memset(PC, 0, PC_s * sizeof(double));

            prepare_contraction(CT_1_b,
                                CT_3_b,
                                CT_13_b,
                                prim_size_1,
                                prim_size_3,
                                naive_size_1,
                                naive_size_3);

            const double* CT_13_cur = CT_13_b;

            for (unsigned i = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_3;
                     ++j, CT_13_cur += naive_size_1 * naive_size_3) {
                    const double a = es1.primitive_exps[i];
                    const double c = es3.primitive_exps[j];
                    const double p = a + c;
                    const double mu = a * c / p;
                    const double X_PA = -c / p * X_AC;
                    const double Y_PA = -c / p * Y_AC;
                    const double Z_PA = -c / p * Z_AC;
                    const double prefactor =
                        sqrt(boost::math::double_constants::pi / p);
                    Ax[0] = prefactor * exp(-mu * X_AC_2);
                    Ay[0] = prefactor * exp(-mu * Y_AC_2);
                    Az[0] = prefactor * exp(-mu * Z_AC_2);
                    Ax[1] = X_PA * Ax[0];
                    Ay[1] = Y_PA * Ay[0];
                    Az[1] = Z_PA * Az[0];
                    for (unsigned ii = 0; ii <= m; ++ii) {
                        Ax[ii + 2] =
                            X_PA * Ax[ii + 1] + (ii + 1) / (2 * p) * Ax[ii];
                        Ay[ii + 2] =
                            Y_PA * Ay[ii + 1] + (ii + 1) / (2 * p) * Ay[ii];
                        Az[ii + 2] =
                            Z_PA * Az[ii + 1] + (ii + 1) / (2 * p) * Az[ii];
                    }

                    for (unsigned ii = 0; ii <= m + 2; ++ii) {
                        Bx[ii * B_s] = Ax[ii];
                        By[ii * B_s] = Ay[ii];
                        Bz[ii * B_s] = Az[ii];
                    }

                    for (unsigned jj = 1; jj <= l_3_max; ++jj)
                        for (unsigned ii = 0; ii <= m + 2 - jj; ++ii) {
                            Bx[ii * B_s + jj] = Bx[(ii + 1) * B_s + jj - 1] +
                                                X_AC * Bx[ii * B_s + jj - 1];
                            By[ii * B_s + jj] = By[(ii + 1) * B_s + jj - 1] +
                                                Y_AC * By[ii * B_s + jj - 1];
                            Bz[ii * B_s + jj] = Bz[(ii + 1) * B_s + jj - 1] +
                                                Z_AC * Bz[ii * B_s + jj - 1];
                        }

                    for (unsigned jj = 0; jj <= l_3_max; ++jj) {
                        D2x[jj] = 4 * a * a * Bx[2 * B_s + jj] - 2 * a * Bx[jj];
                        D2y[jj] = 4 * a * a * By[2 * B_s + jj] - 2 * a * By[jj];
                        D2z[jj] = 4 * a * a * Bz[2 * B_s + jj] - 2 * a * Bz[jj];
                    }

                    if (l_1_max > 0) {
                        for (unsigned jj = 0; jj <= l_3_max; ++jj) {
                            D2x[D2_s + jj] = 4 * a * a * Bx[3 * B_s + jj] -
                                             6 * a * Bx[B_s + jj];
                            D2y[D2_s + jj] = 4 * a * a * By[3 * B_s + jj] -
                                             6 * a * By[B_s + jj];
                            D2z[D2_s + jj] = 4 * a * a * Bz[3 * B_s + jj] -
                                             6 * a * Bz[B_s + jj];
                        }
                        if (l_1_max > 1) {
                            for (unsigned ii = 2; ii <= l_1_max; ++ii)
                                for (unsigned jj = 0; jj <= l_3_max; ++jj) {
                                    D2x[ii * D2_s + jj] =
                                        4 * a * a * Bx[(ii + 2) * B_s + jj] -
                                        2 * a * (2 * ii + 1) *
                                            Bx[ii * B_s + jj] +
                                        ii * (ii - 1) * Bx[(ii - 2) * B_s + jj];
                                    D2y[ii * D2_s + jj] =
                                        4 * a * a * By[(ii + 2) * B_s + jj] -
                                        2 * a * (2 * ii + 1) *
                                            By[ii * B_s + jj] +
                                        ii * (ii - 1) * By[(ii - 2) * B_s + jj];
                                    D2z[ii * D2_s + jj] =
                                        4 * a * a * Bz[(ii + 2) * B_s + jj] -
                                        2 * a * (2 * ii + 1) *
                                            Bz[ii * B_s + jj] +
                                        ii * (ii - 1) * Bz[(ii - 2) * B_s + jj];
                                }
                        }
                    }

                    unsigned ij_index = 0;
                    for (unsigned l_1 = l_1_min; l_1 <= l_1_max; ++l_1)
                        for (int i_x = l_1; i_x >= 0; --i_x)
                            for (int i_y = l_1 - i_x; i_y >= 0; --i_y) {
                                int i_z = l_1 - i_x - i_y;
                                for (unsigned l_3 = l_3_min; l_3 <= l_3_max;
                                     ++l_3)
                                    for (int j_x = l_3; j_x >= 0; --j_x)
                                        for (int j_y = l_3 - j_x; j_y >= 0;
                                             --j_y, ++ij_index) {
                                            int j_z = l_3 - j_x - j_y;
                                            PP[ij_index] =
                                                -(D2x[i_x * D2_s + j_x] *
                                                      By[i_y * B_s + j_y] *
                                                      Bz[i_z * B_s + j_z] +
                                                  Bx[i_x * B_s + j_x] *
                                                      D2y[i_y * D2_s + j_y] *
                                                      Bz[i_z * B_s + j_z] +
                                                  Bx[i_x * B_s + j_x] *
                                                      By[i_y * B_s + j_y] *
                                                      D2z[i_z * D2_s + j_z]) /
                                                (4 * boost::math::
                                                         double_constants::pi);
                                        }
                            }
                    general_contraction(
                        CT_13_cur, PC, PP, PP_s, naive_size_1 * naive_size_3);
                }

            unsigned n_i = 0;
            const double* PPC = PC;
            for (unsigned i = 0; i < naive_size_1; ++i) {
                const unsigned l_i = es1.l[i];
                const unsigned i_size =
                    (spherical_basis ? l_i + l_i + 1
                                     : (l_i + 1) * (l_i + 2) / 2);
                const unsigned ii_index_begin = l_i * (l_i + 1) * (l_i + 2) / 6;
                const unsigned ii_index_end =
                    (l_i + 1) * (l_i + 2) * (l_i + 3) / 6;
                unsigned n_k = 0;
                for (unsigned k = 0; k < naive_size_3; ++k, PPC += PP_s) {
                    const unsigned l_k = es3.l[k];
                    const unsigned k_size =
                        (spherical_basis ? l_k + l_k + 1
                                         : (l_k + 1) * (l_k + 2) / 2);
                    const unsigned kk_index_begin =
                        l_k * (l_k + 1) * (l_k + 2) / 6;
                    const unsigned kk_index_end =
                        (l_k + 1) * (l_k + 2) * (l_k + 3) / 6;

                    // to working space for operations on the first contraction
                    for (unsigned k_index = kk_index_begin;
                         k_index < kk_index_end;
                         ++k_index)
                        for (unsigned i_index = ii_index_begin;
                             i_index < ii_index_end;
                             ++i_index)
                            *(CCC_b + k_index * CCC_s + i_index) =
                                *(PPC +
                                  (i_index - i_index_begin) *
                                      (k_index_end - k_index_begin) +
                                  k_index - k_index_begin);

                    // transformation to normalized cartesian/spherical
                    if (l_i > 0) {
                        if (l_i == 1) {
                            for (unsigned k_index = kk_index_begin;
                                 k_index < kk_index_end;
                                 ++k_index) {
                                *(CCC_b + k_index * CCC_s) =
                                    *(CCC_b + k_index * CCC_s + 1);
                                *(CCC_b + k_index * CCC_s + 1) =
                                    *(CCC_b + k_index * CCC_s + 2);
                                *(CCC_b + k_index * CCC_s + 2) =
                                    *(CCC_b + k_index * CCC_s + 3);
                            }
                        } else {
                            if (spherical_basis) {
                                cart_to_spher_1(l_i,
                                                1,
                                                kk_index_begin,
                                                kk_index_end,
                                                CCC_b,
                                                CCC_s,
                                                1);
                            } else {
                                cart_to_cart_1(l_i,
                                               1,
                                               kk_index_begin,
                                               kk_index_end,
                                               CCC_b,
                                               CCC_s,
                                               1);
                            }
                        }
                    }

                    // to working space for operations on the second pair of the
                    // current quartet
                    for (unsigned i_index = 0; i_index < i_size; ++i_index)
                        for (unsigned k_index = kk_index_begin;
                             k_index < kk_index_end;
                             ++k_index)
                            *(DDD_b + i_index * DDD_s + k_index) =
                                *(CCC_b + k_index * CCC_s + i_index);

                    // transformation to normalized cartesian/spherical for the
                    // third one
                    if (l_k > 0) {
                        if (l_k == 1) {
                            for (unsigned i_index = 0; i_index < i_size;
                                 ++i_index) {
                                *(DDD_b + i_index * DDD_s) =
                                    *(DDD_b + i_index * DDD_s + 1);
                                *(DDD_b + i_index * DDD_s + 1) =
                                    *(DDD_b + i_index * DDD_s + 2);
                                *(DDD_b + i_index * DDD_s + 2) =
                                    *(DDD_b + i_index * DDD_s + 3);
                            }
                        } else {
                            if (spherical_basis) {
                                cart_to_spher_1(
                                    l_k, 1, 0, i_size, DDD_b, DDD_s, 1);
                            } else {
                                cart_to_cart_1(
                                    l_k, 1, 0, i_size, DDD_b, DDD_s, 1);
                            }
                        }
                    }

                    // returning to the input order
                    unswap(DDD_b,
                           DDD_s,
                           1,
                           results,
                           i_size,
                           1,
                           k_size,
                           1,
                           size_1,
                           1,
                           size_3,
                           1,
                           n_i,
                           0,
                           n_k,
                           0,
                           false,
                           false,
                           false);
                    n_k += k_size;
                }
                n_i += i_size;
            }
        }

        void OS1PoissonTwoElectronIntegralEngine::calc_mixed(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es3,
            double* results) const
        {
            const unsigned l_1_max = es1.l_max;
            const unsigned l_3_max = es3.l_max;

            const unsigned l_1_min = es1.l_min;
            const unsigned l_3_min = es3.l_min;

            const unsigned m = es1.l_max + es3.l_max;
            const unsigned prim_size_1 = es1.primitive_exps.size();
            const unsigned prim_size_3 = es3.primitive_exps.size();
            const unsigned naive_size_1 = es1.naive_size;
            const unsigned naive_size_3 = es3.naive_size;

            const double* const CT_1_b =
                &es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &es3.prenormed_contraction_coeffs(0, 0);

            const double X_AC = es1.atom->coords[0] - es3.atom->coords[0];
            const double Y_AC = es1.atom->coords[1] - es3.atom->coords[1];
            const double Z_AC = es1.atom->coords[2] - es3.atom->coords[2];

            const double X_AC_2 = X_AC * X_AC;
            const double Y_AC_2 = Y_AC * Y_AC;
            const double Z_AC_2 = Z_AC * Z_AC;

            const unsigned i_index_begin =
                l_1_min * (l_1_min + 1) * (l_1_min + 2) / 6;
            const unsigned i_index_end =
                (l_1_max + 1) * (l_1_max + 2) * (l_1_max + 3) / 6;
            const unsigned k_index_begin =
                l_3_min * (l_3_min + 1) * (l_3_min + 2) / 6;
            const unsigned k_index_end =
                (l_3_max + 1) * (l_3_max + 2) * (l_3_max + 3) / 6;

            double* memory_pointer = memory_pool.get();
            double* const Ax = memory_pointer;
            memory_pointer += m + 1;
            double* const Ay = memory_pointer;
            memory_pointer += m + 1;
            double* const Az = memory_pointer;
            memory_pointer += m + 1;
            const unsigned B_s = l_3_max + 1;
            double* const Bx = memory_pointer;
            memory_pointer += (m + 1) * B_s;
            double* const By = memory_pointer;
            memory_pointer += (m + 1) * B_s;
            double* const Bz = memory_pointer;
            memory_pointer += (m + 1) * B_s;
            double* const PP = memory_pointer;
            unsigned PP_s =
                (i_index_end - i_index_begin) * (k_index_end - k_index_begin);
            memory_pointer += PP_s;
            double* const CT_13_b = memory_pointer;
            memory_pointer +=
                naive_size_1 * prim_size_1 * naive_size_3 * prim_size_3;
            unsigned PC_s = naive_size_1 * naive_size_3 * PP_s;
            double* const PC = memory_pointer;
            memory_pointer += PC_s;

            const unsigned size_1 = es1.size;
            const unsigned size_3 = es3.size;

            double* const CCC_b = memory_pointer;
            const unsigned CCC_s = i_index_end;
            memory_pointer += k_index_end * CCC_s;
            double* const DDD_b = memory_pointer;
            const unsigned DDD_s = k_index_end;
            memory_pointer += DDD_s * (es1.l_max + 1) * (es1.l_max + 2) / 2;

            std::memset(PC, 0, PC_s * sizeof(double));

            prepare_contraction(CT_1_b,
                                CT_3_b,
                                CT_13_b,
                                prim_size_1,
                                prim_size_3,
                                naive_size_1,
                                naive_size_3);

            const double* CT_13_cur = CT_13_b;

            for (unsigned i = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_3;
                     ++j, CT_13_cur += naive_size_1 * naive_size_3) {
                    const double a = es1.primitive_exps[i];
                    const double c = es3.primitive_exps[j];
                    const double p = a + c;
                    const double mu = a * c / p;
                    const double X_PA = -c / p * X_AC;
                    const double Y_PA = -c / p * Y_AC;
                    const double Z_PA = -c / p * Z_AC;
                    const double prefactor =
                        sqrt(boost::math::double_constants::pi / p);
                    Ax[0] = prefactor * exp(-mu * X_AC_2);
                    Ay[0] = prefactor * exp(-mu * Y_AC_2);
                    Az[0] = prefactor * exp(-mu * Z_AC_2);
                    if (m > 0) {
                        Ax[1] = X_PA * Ax[0];
                        Ay[1] = Y_PA * Ay[0];
                        Az[1] = Z_PA * Az[0];
                        if (m > 1) {
                            for (unsigned ii = 0; ii <= m - 2; ++ii) {
                                Ax[ii + 2] = X_PA * Ax[ii + 1] +
                                             (ii + 1) / (2 * p) * Ax[ii];
                                Ay[ii + 2] = Y_PA * Ay[ii + 1] +
                                             (ii + 1) / (2 * p) * Ay[ii];
                                Az[ii + 2] = Z_PA * Az[ii + 1] +
                                             (ii + 1) / (2 * p) * Az[ii];
                            }
                        }
                    }

                    for (unsigned ii = 0; ii <= m; ++ii) {
                        Bx[ii * B_s] = Ax[ii];
                        By[ii * B_s] = Ay[ii];
                        Bz[ii * B_s] = Az[ii];
                    }

                    for (unsigned jj = 1; jj <= l_3_max; ++jj)
                        for (unsigned ii = 0; ii <= m - jj; ++ii) {
                            Bx[ii * B_s + jj] = Bx[(ii + 1) * B_s + jj - 1] +
                                                X_AC * Bx[ii * B_s + jj - 1];
                            By[ii * B_s + jj] = By[(ii + 1) * B_s + jj - 1] +
                                                Y_AC * By[ii * B_s + jj - 1];
                            Bz[ii * B_s + jj] = Bz[(ii + 1) * B_s + jj - 1] +
                                                Z_AC * Bz[ii * B_s + jj - 1];
                        }

                    unsigned ij_index = 0;
                    for (unsigned l_1 = l_1_min; l_1 <= l_1_max; ++l_1)
                        for (int i_x = l_1; i_x >= 0; --i_x)
                            for (int i_y = l_1 - i_x; i_y >= 0; --i_y) {
                                int i_z = l_1 - i_x - i_y;
                                for (unsigned l_3 = l_3_min; l_3 <= l_3_max;
                                     ++l_3)
                                    for (int j_x = l_3; j_x >= 0; --j_x)
                                        for (int j_y = l_3 - j_x; j_y >= 0;
                                             --j_y, ++ij_index) {
                                            int j_z = l_3 - j_x - j_y;
                                            PP[ij_index] = Bx[i_x * B_s + j_x] *
                                                           By[i_y * B_s + j_y] *
                                                           Bz[i_z * B_s + j_z];
                                        }
                            }
                    general_contraction(
                        CT_13_cur, PC, PP, PP_s, naive_size_1 * naive_size_3);
                }

            unsigned n_i = 0;
            const double* PPC = PC;
            for (unsigned i = 0; i < naive_size_1; ++i) {
                const unsigned l_i = es1.l[i];
                const unsigned i_size =
                    (spherical_basis ? l_i + l_i + 1
                                     : (l_i + 1) * (l_i + 2) / 2);
                const unsigned ii_index_begin = l_i * (l_i + 1) * (l_i + 2) / 6;
                const unsigned ii_index_end =
                    (l_i + 1) * (l_i + 2) * (l_i + 3) / 6;
                unsigned n_k = 0;
                for (unsigned k = 0; k < naive_size_3; ++k, PPC += PP_s) {
                    const unsigned l_k = es3.l[k];
                    const unsigned k_size =
                        (spherical_basis ? l_k + l_k + 1
                                         : (l_k + 1) * (l_k + 2) / 2);
                    const unsigned kk_index_begin =
                        l_k * (l_k + 1) * (l_k + 2) / 6;
                    const unsigned kk_index_end =
                        (l_k + 1) * (l_k + 2) * (l_k + 3) / 6;

                    // to working space for operations on the first contraction
                    for (unsigned k_index = kk_index_begin;
                         k_index < kk_index_end;
                         ++k_index)
                        for (unsigned i_index = ii_index_begin;
                             i_index < ii_index_end;
                             ++i_index)
                            *(CCC_b + k_index * CCC_s + i_index) =
                                *(PPC +
                                  (i_index - i_index_begin) *
                                      (k_index_end - k_index_begin) +
                                  k_index - k_index_begin);

                    // transformation to normalized cartesian/spherical
                    if (l_i > 0) {
                        if (l_i == 1) {
                            for (unsigned k_index = kk_index_begin;
                                 k_index < kk_index_end;
                                 ++k_index) {
                                *(CCC_b + k_index * CCC_s) =
                                    *(CCC_b + k_index * CCC_s + 1);
                                *(CCC_b + k_index * CCC_s + 1) =
                                    *(CCC_b + k_index * CCC_s + 2);
                                *(CCC_b + k_index * CCC_s + 2) =
                                    *(CCC_b + k_index * CCC_s + 3);
                            }
                        } else {
                            if (spherical_basis) {
                                cart_to_spher_1(l_i,
                                                1,
                                                kk_index_begin,
                                                kk_index_end,
                                                CCC_b,
                                                CCC_s,
                                                1);
                            } else {
                                cart_to_cart_1(l_i,
                                               1,
                                               kk_index_begin,
                                               kk_index_end,
                                               CCC_b,
                                               CCC_s,
                                               1);
                            }
                        }
                    }

                    // to working space for operations on the second pair of the
                    // current quartet
                    for (unsigned i_index = 0; i_index < i_size; ++i_index)
                        for (unsigned k_index = kk_index_begin;
                             k_index < kk_index_end;
                             ++k_index)
                            *(DDD_b + i_index * DDD_s + k_index) =
                                *(CCC_b + k_index * CCC_s + i_index);

                    // transformation to normalized cartesian/spherical for the
                    // third one
                    if (l_k > 0) {
                        if (l_k == 1) {
                            for (unsigned i_index = 0; i_index < i_size;
                                 ++i_index) {
                                *(DDD_b + i_index * DDD_s) =
                                    *(DDD_b + i_index * DDD_s + 1);
                                *(DDD_b + i_index * DDD_s + 1) =
                                    *(DDD_b + i_index * DDD_s + 2);
                                *(DDD_b + i_index * DDD_s + 2) =
                                    *(DDD_b + i_index * DDD_s + 3);
                            }
                        } else {
                            if (spherical_basis) {
                                cart_to_spher_1(
                                    l_k, 1, 0, i_size, DDD_b, DDD_s, 1);
                            } else {
                                cart_to_cart_1(
                                    l_k, 1, 0, i_size, DDD_b, DDD_s, 1);
                            }
                        }
                    }

                    // returning to the input order
                    unswap(DDD_b,
                           DDD_s,
                           1,
                           results,
                           i_size,
                           1,
                           k_size,
                           1,
                           size_1,
                           1,
                           size_3,
                           1,
                           n_i,
                           0,
                           n_k,
                           0,
                           false,
                           false,
                           false);
                    n_k += k_size;
                }
                n_i += i_size;
            }
        }

        void OS1PoissonTwoElectronIntegralEngine::calc_ACD(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es3,
            const FlatBasisSet::Shell& es4,
            double* results) const
        {
            const unsigned l_1_max = es1.l_max;
            const unsigned l_3_max = es3.l_max;
            const unsigned l_4_max = es4.l_max;

            const unsigned l_1_min = es1.l_min;
            const unsigned l_3_min = es3.l_min;
            const unsigned l_4_min = es4.l_min;

            const unsigned m = es1.l_max + es3.l_max + es4.l_max;
            const unsigned prim_size_1 = es1.primitive_exps.size();
            const unsigned prim_size_3 = es3.primitive_exps.size();
            const unsigned prim_size_4 = es4.primitive_exps.size();
            const unsigned naive_size_1 = es1.naive_size;
            const unsigned naive_size_3 = es3.naive_size;
            const unsigned naive_size_4 = es4.naive_size;

            const unsigned size_1 = es1.size;
            const unsigned size_3 = es3.size;
            const unsigned size_4 = es4.size;

            const double* const CT_1_b =
                &es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &es3.prenormed_contraction_coeffs(0, 0);
            const double* const CT_4_b =
                &es4.prenormed_contraction_coeffs(0, 0);

            const double X_AC = es1.atom->coords[0] - es3.atom->coords[0];
            const double Y_AC = es1.atom->coords[1] - es3.atom->coords[1];
            const double Z_AC = es1.atom->coords[2] - es3.atom->coords[2];
            const double X_AD = es1.atom->coords[0] - es4.atom->coords[0];
            const double Y_AD = es1.atom->coords[1] - es4.atom->coords[1];
            const double Z_AD = es1.atom->coords[2] - es4.atom->coords[2];
            const double X_CD = es3.atom->coords[0] - es4.atom->coords[0];
            const double Y_CD = es3.atom->coords[1] - es4.atom->coords[1];
            const double Z_CD = es3.atom->coords[2] - es4.atom->coords[2];

            const double X_CD_2 = X_CD * X_CD;
            const double Y_CD_2 = Y_CD * Y_CD;
            const double Z_CD_2 = Z_CD * Z_CD;

            const unsigned i_index_begin =
                l_1_min * (l_1_min + 1) * (l_1_min + 2) / 6;
            const unsigned i_index_end =
                (l_1_max + 1) * (l_1_max + 2) * (l_1_max + 3) / 6;
            const unsigned k_index_begin =
                l_3_min * (l_3_min + 1) * (l_3_min + 2) / 6;
            const unsigned k_index_end =
                (l_3_max + 1) * (l_3_max + 2) * (l_3_max + 3) / 6;
            const unsigned l_index_begin =
                l_4_min * (l_4_min + 1) * (l_4_min + 2) / 6;
            const unsigned l_index_end =
                (l_4_max + 1) * (l_4_max + 2) * (l_4_max + 3) / 6;

            double* memory_pointer = memory_pool.get();
            double* const Ax = memory_pointer;
            memory_pointer += m + 1;
            double* const Ay = memory_pointer;
            memory_pointer += m + 1;
            double* const Az = memory_pointer;
            memory_pointer += m + 1;
            double* const CT_34_b = memory_pointer;
            memory_pointer +=
                naive_size_3 * prim_size_3 * naive_size_4 * prim_size_4;
            const unsigned B_s = l_4_max + 1;
            const unsigned B_s12 = B_s * (l_3_max + 1);
            double* const Bx = memory_pointer;
            memory_pointer += (m + 1) * B_s12;
            double* const By = memory_pointer;
            memory_pointer += (m + 1) * B_s12;
            double* const Bz = memory_pointer;
            memory_pointer += (m + 1) * B_s12;
            double* const PPP = memory_pointer;
            unsigned PPP_s = (i_index_end - i_index_begin) *
                             (k_index_end - k_index_begin) *
                             (l_index_end - l_index_begin);
            memory_pointer += PPP_s;
            double* const PPC = memory_pointer;
            unsigned PPC_s = naive_size_3 * naive_size_4 * PPP_s;
            memory_pointer += PPC_s;
            double* const PC = memory_pointer;
            unsigned PC_s = naive_size_1 * PPC_s;
            memory_pointer += PC_s;
            double* const CCC_b = memory_pointer;
            unsigned CCC_s = i_index_end;
            memory_pointer += (k_index_end - k_index_begin) *
                              (l_index_end - l_index_begin) * CCC_s;
            double* const DDD_b = memory_pointer;
            const unsigned DDD_s = l_index_end;
            const unsigned DDD_s12 = DDD_s * k_index_end;
            memory_pointer += DDD_s12 * (l_1_max + 1) * (l_1_max + 2) / 2;

            prepare_contraction(CT_3_b,
                                CT_4_b,
                                CT_34_b,
                                prim_size_3,
                                prim_size_4,
                                naive_size_3,
                                naive_size_4);

            const double* CT_1_cur = CT_1_b;

            std::memset(PC, 0, PC_s * sizeof(double));

            for (unsigned i = 0; i < prim_size_1;
                 ++i, CT_1_cur += naive_size_1) {
                const double* CT_34_cur = CT_34_b;
                std::memset(PPC, 0, PPC_s * sizeof(double));
                for (unsigned j = 0; j < prim_size_3; ++j)
                    for (unsigned k = 0; k < prim_size_4;
                         ++k, CT_34_cur += naive_size_3 * naive_size_4) {
                        const double a = es1.primitive_exps[i];
                        const double c = es3.primitive_exps[j];
                        const double d = es4.primitive_exps[k];
                        const double q = c + d;
                        const double nu = c * d / q;
                        const double a_plus_q = a + q;
                        const double alpha = a * q / a_plus_q;
                        const double prefactor =
                            sqrt(boost::math::double_constants::pi / (a + q));
                        const double X_AQ =
                            es1.atom->coords[0] - (c * es3.atom->coords[0] +
                                                   d * es4.atom->coords[0]) /
                                                      q;
                        const double Y_AQ =
                            es1.atom->coords[1] - (c * es3.atom->coords[1] +
                                                   d * es4.atom->coords[1]) /
                                                      q;
                        const double Z_AQ =
                            es1.atom->coords[2] - (c * es3.atom->coords[2] +
                                                   d * es4.atom->coords[2]) /
                                                      q;
                        const double X_AQ_2 = X_AQ * X_AQ;
                        const double Y_AQ_2 = Y_AQ * Y_AQ;
                        const double Z_AQ_2 = Z_AQ * Z_AQ;

                        Ax[0] = prefactor * exp(-nu * X_CD_2) *
                                exp(-alpha * X_AQ_2);
                        Ay[0] = prefactor * exp(-nu * Y_CD_2) *
                                exp(-alpha * Y_AQ_2);
                        Az[0] = prefactor * exp(-nu * Z_CD_2) *
                                exp(-alpha * Z_AQ_2);

                        if (m > 0) {
                            const double X_pref =
                                (c * X_AC + d * X_AD) / a_plus_q;
                            const double Y_pref =
                                (c * Y_AC + d * Y_AD) / a_plus_q;
                            const double Z_pref =
                                (c * Z_AC + d * Z_AD) / a_plus_q;
                            Ax[1] = -X_pref * Ax[0];
                            Ay[1] = -Y_pref * Ay[0];
                            Az[1] = -Z_pref * Az[0];
                            if (m > 1) {
                                for (unsigned ii = 2; ii <= m; ++ii) {
                                    Ax[ii] =
                                        (ii - 1) / (2 * a_plus_q) * Ax[ii - 2] -
                                        X_pref * Ax[ii - 1];
                                    Ay[ii] =
                                        (ii - 1) / (2 * a_plus_q) * Ay[ii - 2] -
                                        Y_pref * Ay[ii - 1];
                                    Az[ii] =
                                        (ii - 1) / (2 * a_plus_q) * Az[ii - 2] -
                                        Z_pref * Az[ii - 1];
                                }
                            }
                        }

                        for (unsigned ii = 0; ii <= m; ++ii) {
                            Bx[ii * B_s12] = Ax[ii];
                            By[ii * B_s12] = Ay[ii];
                            Bz[ii * B_s12] = Az[ii];
                        }

                        for (unsigned jj = 1; jj <= l_3_max; ++jj)
                            for (unsigned ii = 0; ii <= m - jj; ++ii) {
                                Bx[ii * B_s12 + jj * B_s] =
                                    Bx[(ii + 1) * B_s12 + (jj - 1) * B_s] +
                                    X_AC * Bx[ii * B_s12 + (jj - 1) * B_s];
                                By[ii * B_s12 + jj * B_s] =
                                    By[(ii + 1) * B_s12 + (jj - 1) * B_s] +
                                    Y_AC * By[ii * B_s12 + (jj - 1) * B_s];
                                Bz[ii * B_s12 + jj * B_s] =
                                    Bz[(ii + 1) * B_s12 + (jj - 1) * B_s] +
                                    Z_AC * Bz[ii * B_s12 + (jj - 1) * B_s];
                            }

                        for (unsigned kk = 1; kk <= l_4_max; ++kk)
                            for (unsigned jj = 0; jj <= l_3_max; ++jj)
                                for (unsigned ii = 0;
                                     ii <= l_1_max + l_4_max - kk;
                                     ++ii) {
                                    Bx[ii * B_s12 + jj * B_s + kk] =
                                        Bx[(ii + 1) * B_s12 + jj * B_s + kk -
                                           1] +
                                        X_AD *
                                            Bx[ii * B_s12 + jj * B_s + kk - 1];
                                    By[ii * B_s12 + jj * B_s + kk] =
                                        By[(ii + 1) * B_s12 + jj * B_s + kk -
                                           1] +
                                        Y_AD *
                                            By[ii * B_s12 + jj * B_s + kk - 1];
                                    Bz[ii * B_s12 + jj * B_s + kk] =
                                        Bz[(ii + 1) * B_s12 + jj * B_s + kk -
                                           1] +
                                        Z_AD *
                                            Bz[ii * B_s12 + jj * B_s + kk - 1];
                                }

                        unsigned ijk_index = 0;
                        for (unsigned l_1 = l_1_min; l_1 <= l_1_max; ++l_1)
                            for (int i_x = l_1; i_x >= 0; --i_x)
                                for (int i_y = l_1 - i_x; i_y >= 0; --i_y) {
                                    int i_z = l_1 - i_x - i_y;
                                    for (unsigned l_3 = l_3_min; l_3 <= l_3_max;
                                         ++l_3)
                                        for (int j_x = l_3; j_x >= 0; --j_x)
                                            for (int j_y = l_3 - j_x; j_y >= 0;
                                                 --j_y) {
                                                int j_z = l_3 - j_x - j_y;
                                                for (unsigned l_4 = l_4_min;
                                                     l_4 <= l_4_max;
                                                     ++l_4)
                                                    for (int k_x = l_4;
                                                         k_x >= 0;
                                                         --k_x)
                                                        for (int k_y =
                                                                 l_4 - k_x;
                                                             k_y >= 0;
                                                             --k_y,
                                                                 ++ijk_index) {
                                                            int k_z =
                                                                l_4 - k_x - k_y;
                                                            PPP[ijk_index] =
                                                                Bx[i_x * B_s12 +
                                                                   j_x * B_s +
                                                                   k_x] *
                                                                By[i_y * B_s12 +
                                                                   j_y * B_s +
                                                                   k_y] *
                                                                Bz[i_z * B_s12 +
                                                                   j_z * B_s +
                                                                   k_z];
                                                        }
                                            }
                                }
                        general_contraction(CT_34_cur,
                                            PPC,
                                            PPP,
                                            PPP_s,
                                            naive_size_3 * naive_size_4);
                    }
                general_contraction(CT_1_cur, PC, PPC, PPC_s, naive_size_1);
            }

            const double* BBBBBB_cur = PC;
            // loop over quartets of contractions
            unsigned n_i = 0;
            for (unsigned i = 0; i < naive_size_1; ++i) {
                const unsigned l_i = es1.l[i];
                const unsigned i_size =
                    (spherical_basis ? l_i + l_i + 1
                                     : (l_i + 1) * (l_i + 2) / 2);
                const unsigned ii_index_begin = l_i * (l_i + 1) * (l_i + 2) / 6;
                const unsigned ii_index_end =
                    (l_i + 1) * (l_i + 2) * (l_i + 3) / 6;
                unsigned n_k = 0;
                for (unsigned k = 0; k < naive_size_3; ++k) {
                    const unsigned l_k = es3.l[k];
                    const unsigned k_size =
                        (spherical_basis ? l_k + l_k + 1
                                         : (l_k + 1) * (l_k + 2) / 2);
                    unsigned n_l = 0;
                    for (unsigned l = 0; l < naive_size_4;
                         ++l, BBBBBB_cur += PPP_s) {
                        const unsigned l_l = es4.l[l];
                        const unsigned l_size =
                            (spherical_basis ? l_l + l_l + 1
                                             : (l_l + 1) * (l_l + 2) / 2);
                        const unsigned kk_index_begin = 0;
                        const unsigned kk_index_end =
                            (k_index_end - k_index_begin) *
                            (l_index_end - l_index_begin);

                        const unsigned kkk_index_begin =
                            l_k * (l_k + 1) * (l_k + 2) / 6;
                        const unsigned kkk_index_end =
                            (l_k + 1) * (l_k + 2) * (l_k + 3) / 6;
                        const unsigned lll_index_begin =
                            l_l * (l_l + 1) * (l_l + 2) / 6;
                        const unsigned lll_index_end =
                            (l_l + 1) * (l_l + 2) * (l_l + 3) / 6;

                        // to working space for operations on the first
                        // contraction
                        for (unsigned k_index = kk_index_begin;
                             k_index < kk_index_end;
                             ++k_index)
                            for (unsigned i_index = ii_index_begin;
                                 i_index < ii_index_end;
                                 ++i_index)
                                *(CCC_b + k_index * CCC_s + i_index) =
                                    *(BBBBBB_cur +
                                      (i_index - i_index_begin) *
                                          (kk_index_end - kk_index_begin) +
                                      k_index - kk_index_begin);

                        // transformation to normalized cartesian/spherical
                        if (l_i > 0) {
                            if (l_i == 1) {
                                for (unsigned k_index = kk_index_begin;
                                     k_index < kk_index_end;
                                     ++k_index) {
                                    *(CCC_b + k_index * CCC_s) =
                                        *(CCC_b + k_index * CCC_s + 1);
                                    *(CCC_b + k_index * CCC_s + 1) =
                                        *(CCC_b + k_index * CCC_s + 2);
                                    *(CCC_b + k_index * CCC_s + 2) =
                                        *(CCC_b + k_index * CCC_s + 3);
                                }
                            } else {
                                if (spherical_basis) {
                                    cart_to_spher_1(l_i,
                                                    1,
                                                    kk_index_begin,
                                                    kk_index_end,
                                                    CCC_b,
                                                    CCC_s,
                                                    1);
                                } else {
                                    cart_to_cart_1(l_i,
                                                   1,
                                                   kk_index_begin,
                                                   kk_index_end,
                                                   CCC_b,
                                                   CCC_s,
                                                   1);
                                }
                            }
                        }

                        // to do przerobki
                        for (unsigned i_index = 0; i_index < i_size;
                             ++i_index) {
                            unsigned kl_index = 0;
                            for (unsigned k_index = kkk_index_begin;
                                 k_index < kkk_index_end;
                                 ++k_index)
                                for (unsigned l_index = lll_index_begin;
                                     l_index < lll_index_end;
                                     ++l_index, ++kl_index)
                                    *(DDD_b + i_index * DDD_s12 +
                                      k_index * DDD_s + l_index) =
                                        *(CCC_b +
                                          ((k_index - k_index_begin) *
                                               (l_index_end - l_index_begin) +
                                           (l_index - l_index_begin)) *
                                              CCC_s +
                                          i_index);
                        }

                        // transformation to normalized cartesian/spherical for
                        // the fourth one
                        if (l_l > 0) {
                            if (l_l == 1) {
                                for (unsigned i_index = 0; i_index < i_size;
                                     ++i_index)
                                    for (unsigned k_index = kkk_index_begin;
                                         k_index < kkk_index_end;
                                         ++k_index) {
                                        *(DDD_b + i_index * DDD_s12 +
                                          k_index * DDD_s) =
                                            *(DDD_b + i_index * DDD_s12 +
                                              k_index * DDD_s + 1);
                                        *(DDD_b + i_index * DDD_s12 +
                                          k_index * DDD_s + 1) =
                                            *(DDD_b + i_index * DDD_s12 +
                                              k_index * DDD_s + 2);
                                        *(DDD_b + i_index * DDD_s12 +
                                          k_index * DDD_s + 2) =
                                            *(DDD_b + i_index * DDD_s12 +
                                              k_index * DDD_s + 3);
                                    }
                            } else {
                                if (spherical_basis) {
                                    cart_to_spher_2(l_l,
                                                    kkk_index_begin,
                                                    kkk_index_end,
                                                    0,
                                                    i_size,
                                                    DDD_b,
                                                    DDD_s12,
                                                    DDD_s);
                                } else {
                                    cart_to_cart_2(l_l,
                                                   kkk_index_begin,
                                                   kkk_index_end,
                                                   0,
                                                   i_size,
                                                   DDD_b,
                                                   DDD_s12,
                                                   DDD_s);
                                }
                            }
                        }

                        // transformation to normalized cartesian/spherical for
                        // the third one
                        if (l_k > 0) {
                            if (l_k == 1) {
                                for (unsigned i_index = 0; i_index < i_size;
                                     ++i_index)
                                    for (unsigned l_index = 0; l_index < l_size;
                                         ++l_index) {
                                        *(DDD_b + i_index * DDD_s12 + l_index) =
                                            *(DDD_b + i_index * DDD_s12 +
                                              DDD_s + l_index);
                                        *(DDD_b + i_index * DDD_s12 + DDD_s +
                                          l_index) =
                                            *(DDD_b + i_index * DDD_s12 +
                                              DDD_s + DDD_s + l_index);
                                        *(DDD_b + i_index * DDD_s12 + DDD_s +
                                          DDD_s + l_index) =
                                            *(DDD_b + i_index * DDD_s12 +
                                              DDD_s + DDD_s + DDD_s + l_index);
                                    }
                            } else {
                                if (spherical_basis) {
                                    cart_to_spher_1(l_k,
                                                    l_size,
                                                    0,
                                                    i_size,
                                                    DDD_b,
                                                    DDD_s12,
                                                    DDD_s);
                                } else {
                                    cart_to_cart_1(l_k,
                                                   l_size,
                                                   0,
                                                   i_size,
                                                   DDD_b,
                                                   DDD_s12,
                                                   DDD_s);
                                }
                            }
                        }

                        // returning to the input order
                        unswap(DDD_b,
                               DDD_s12,
                               DDD_s,
                               results,
                               i_size,
                               1,
                               k_size,
                               l_size,
                               size_1,
                               1,
                               size_3,
                               size_4,
                               n_i,
                               0,
                               n_k,
                               n_l,
                               false,
                               false,
                               false);

                        n_l += l_size;
                    }
                    n_k += k_size;
                }
                n_i += i_size;
            }
        }
    }
}
