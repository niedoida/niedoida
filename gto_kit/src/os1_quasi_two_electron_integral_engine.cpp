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
        /* Main machinery for (A|1/r_12|CD) integrals,
           A: Gaussian shell from density fitting basis set
           C, D: Gaussian shells from standard basis set
        */
        OS1QuasiTwoElectronIntegralEngine::OS1QuasiTwoElectronIntegralEngine(
            const core::BasisSet& bs,
            const core::BasisSet& aux_bs,
            const double treshold) :
            m_fbs(bs),
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
        OS1QuasiTwoElectronIntegralEngine::preferred_no_pair_requests() const
        {
            return 1000;
        }

        std::size_t
        OS1QuasiTwoElectronIntegralEngine::preferred_no_ACD_requests() const
        {
            return 200;
        }

        void OS1QuasiTwoElectronIntegralEngine::calc_AC(
            std::vector<core::PairRequest>& requests) const
        {
            for (core::PairRequest& r : requests)
                if (!r.done)
                    calc_AC(r);
        }

        void OS1QuasiTwoElectronIntegralEngine::calc_pair(
            std::vector<core::PairRequest>& requests) const
        {
            for (core::PairRequest& r : requests)
                if (!r.done)
                    calc_pair(r);
        }

        void OS1QuasiTwoElectronIntegralEngine::calc_ACD(
            std::vector<core::ACDRequest>& requests) const
        {
            for (core::ACDRequest& r : requests)
                if (!r.done)
                    calc_ACD(r);
        }

        void OS1QuasiTwoElectronIntegralEngine::calc_AC(
            core::PairRequest& request) const
        {
            const FlatBasisSet::Shell& es1 =
                m_aux_fbs.shells[request.shells[0]];
            const FlatBasisSet::Shell& es3 =
                m_aux_fbs.shells[request.shells[1]];
            calc_AC(es1, es3, request.results);
            request.done = true;
        }

        void OS1QuasiTwoElectronIntegralEngine::calc_pair(
            core::PairRequest& request) const
        {
            const FlatBasisSet::Shell& es1 = m_fbs.shells[request.shells[0]];
            const FlatBasisSet::Shell& es3 = m_fbs.shells[request.shells[1]];
            calc_AC(es1, es3, request.results);
            request.done = true;
        }

        void OS1QuasiTwoElectronIntegralEngine::calc_ACD(
            core::ACDRequest& request) const
        {
            const FlatBasisSet::Shell& es1 =
                m_aux_fbs.shells[request.shells[0]];
            const FlatBasisSet::Shell& es3 = m_fbs.shells[request.shells[1]];
            const FlatBasisSet::Shell& es4 = m_fbs.shells[request.shells[2]];
            calc_ACD(es1, es3, es4, request.results);
            request.done = true;
        }

        void OS1QuasiTwoElectronIntegralEngine::calc_ACD(
            const FlatBasisSet::Shell& ref_es1,
            const FlatBasisSet::Shell& es3,
            const FlatBasisSet::Shell& es4,
            double* results) const
        {
            /* swapping in CD pair may be needed to perform better*/
            const FlatBasisSet::Shell *shell_3_pointer = &es3,
                                      *shell_4_pointer = &es4;
            const FlatBasisSet::Shell* tmp_pointer;

            const bool swapped = (es3.l_max < es4.l_max);
            if (swapped) {
                tmp_pointer = shell_3_pointer;
                shell_3_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // references initializing
            const FlatBasisSet::Shell &ref_es3 = *shell_3_pointer,
                                      &ref_es4 = *shell_4_pointer;
            // end of swapping

            // preparing some constants
            const bool same_CD = (ref_es3.atom == ref_es4.atom);
            const unsigned l_1_min = ref_es1.l_min;
            const unsigned l_3_min = ref_es3.l_min;
            const unsigned l_4_min = ref_es4.l_min;
            const unsigned l_34_min = l_3_min + l_4_min;
            const unsigned l_1 = ref_es1.l_max;
            const unsigned l_34 = ref_es3.l_max + ref_es4.l_max;
            const unsigned m = l_1 + l_34;
            const unsigned prim_size_1 = ref_es1.primitive_exps.size();
            const unsigned prim_size_3 = ref_es3.primitive_exps.size();
            const unsigned prim_size_4 = ref_es4.primitive_exps.size();
            const unsigned naive_size_1 = ref_es1.naive_size;
            const unsigned naive_size_3 = ref_es3.naive_size;
            const unsigned naive_size_4 = ref_es4.naive_size;
            const unsigned size_1 = ref_es1.size;
            const unsigned size_3 = ref_es3.size;
            const unsigned size_4 = ref_es4.size;

            const unsigned i_index_begin =
                l_1_min * (l_1_min + 1) * (l_1_min + 2) / 6;
            const unsigned i_index_end = (l_1 + 1) * (l_1 + 2) * (l_1 + 3) / 6;
            const unsigned k_index_begin =
                (same_CD ? l_34_min * (l_34_min + 1) * (l_34_min + 2) / 6
                         : l_3_min * (l_3_min + 1) * (l_3_min + 2) / 6);
            const unsigned k_index_end =
                (l_34 + 1) * (l_34 + 2) * (l_34 + 3) / 6;
            const unsigned i_range = i_index_end - i_index_begin;
            const unsigned k_range = k_index_end - k_index_begin;
            const unsigned angular_range = i_range * k_range;

            const unsigned ket_naive_size = naive_size_3 * naive_size_4;
            const unsigned ket_prim_size = prim_size_3 * prim_size_4;
            const unsigned amount = ket_naive_size * angular_range;

            const bool segmented_ket = (ket_naive_size == 1);
            const bool segmented_bra = (naive_size_1 == 1);

            // setting up working arrays
            double* memory_pointer = memory_pool.get();
            double* const A_exp_a_b = memory_pointer;
            memory_pointer += prim_size_1;
            double* const A_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_exp_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_R_Q_b = memory_pointer;
            memory_pointer += 3 * ket_prim_size;
            double* const A_prefactor_b = memory_pointer;
            memory_pointer += 3 * ket_prim_size;

            double* const AA_b = memory_pointer;
            const unsigned AA_s = OS1_S1;
            memory_pointer += AA_s * (m + 1) * (m + 2) * (m + 3) / 6;
            double* const B_b = memory_pointer;
            memory_pointer += angular_range;
            double* const CT_34_b = memory_pointer;
            memory_pointer += ket_naive_size * ket_prim_size;
            double* const AAAA_b = memory_pointer;
            const unsigned AAAA_total_size = ket_naive_size * angular_range;
            memory_pointer += AAAA_total_size;
            double* const BBBBBB_b = memory_pointer;
            const unsigned BBBBBB_s = k_range;
            const unsigned BBBBBB_total_size = AAAA_total_size * naive_size_1;
            memory_pointer += BBBBBB_total_size;
            memset(BBBBBB_b, 0, BBBBBB_total_size * sizeof(double));
            double* const CCC_b = memory_pointer;
            const unsigned CCC_s = i_index_end;
            memory_pointer += k_index_end * CCC_s;
            double* const DDD_b = memory_pointer;
            const unsigned DDD_s = (ref_es4.l_max + 1) * (ref_es4.l_max + 2) *
                                   (ref_es4.l_max + 3) / 6;
            const unsigned DDD_s12 = DDD_s * k_index_end;
            memory_pointer +=
                DDD_s12 * (ref_es1.l_max + 1) * (ref_es1.l_max + 2) / 2;

            // setting two(one) center quantites
            const double X_A = ref_es1.atom->coords[0];
            const double Y_A = ref_es1.atom->coords[1];
            const double Z_A = ref_es1.atom->coords[2];
            const double X_CD =
                ref_es3.atom->coords[0] - ref_es4.atom->coords[0];
            const double Y_CD =
                ref_es3.atom->coords[1] - ref_es4.atom->coords[1];
            const double Z_CD =
                ref_es3.atom->coords[2] - ref_es4.atom->coords[2];
            const double R_CD_2 = X_CD * X_CD + Y_CD * Y_CD + Z_CD * Z_CD;

            // preparing contractions
            const double* CT_1_b = &ref_es1.prenormed_contraction_coeffs(0, 0);
            const double* CT_3_b = &ref_es3.prenormed_contraction_coeffs(0, 0);
            const double* CT_4_b = &ref_es4.prenormed_contraction_coeffs(0, 0);
            double* CT_34_cur = CT_34_b;
            prepare_contraction(CT_3_b,
                                CT_4_b,
                                CT_34_cur,
                                prim_size_3,
                                prim_size_4,
                                naive_size_3,
                                naive_size_4);

            for (unsigned i = 0; i < prim_size_1; ++i)
                *(A_exp_a_b + i) =
                    two_pi_to_five_over_four / ref_es1.primitive_exps[i];

            for (unsigned i = 0, ij_index = 0; i < prim_size_3; ++i)
                for (unsigned j = 0; j < prim_size_4; ++j, ++ij_index) {
                    const double q =
                        ref_es3.primitive_exps[i] + ref_es4.primitive_exps[j];
                    const double one_over_q = 1 / q;
                    const double nu = ref_es3.primitive_exps[i] *
                                      ref_es4.primitive_exps[j] * one_over_q;
                    *(A_q_b + ij_index) = q;
                    *(A_exp_q_b + ij_index) = two_pi_to_five_over_four *
                                              exp(-(nu * R_CD_2)) * one_over_q;
                    for (unsigned kk = 0; kk < 3; ++kk)
                        *(A_R_Q_b + 3 * ij_index + kk) =
                            (ref_es3.primitive_exps[i] *
                                 ref_es3.atom->coords[kk] +
                             ref_es4.primitive_exps[j] *
                                 ref_es4.atom->coords[kk]) *
                            one_over_q;
                    *(A_prefactor_b + 3 * ij_index) =
                        -ref_es4.primitive_exps[j] * X_CD * one_over_q;
                    *(A_prefactor_b + 3 * ij_index + 1) =
                        -ref_es4.primitive_exps[j] * Y_CD * one_over_q;
                    *(A_prefactor_b + 3 * ij_index + 2) =
                        -ref_es4.primitive_exps[j] * Z_CD * one_over_q;
                }

            // loop over primitives
            for (unsigned i = 0; i < prim_size_1; ++i) {
                memset(AAAA_b, 0, AAAA_total_size * sizeof(double));
                const double* CT_1_cur = CT_1_b + i * naive_size_1;
                const double a = ref_es1.primitive_exps[i];
                const double one_over_a = 1 / a;
                const double one_over_two_a = one_over_a / 2;
                for (unsigned k = 0, kl_index = 0; k < prim_size_3; ++k)
                    for (unsigned l = 0; l < prim_size_4; ++l, ++kl_index) {
                        const double* CT_34_cur =
                            CT_34_b + kl_index * ket_naive_size;
                        const double estimator =
                            *(A_exp_a_b + i) * *(A_exp_q_b + kl_index);
                        const double q = *(A_q_b + kl_index);
                        const double one_over_q = 1 / q;
                        const double alpha = 1 / (one_over_a + one_over_q);
                        const double alpha_over_a = alpha * one_over_a;
                        const double X_AQ = X_A - *(A_R_Q_b + 3 * kl_index);
                        const double Y_AQ = Y_A - *(A_R_Q_b + 3 * kl_index + 1);
                        const double Z_AQ = Z_A - *(A_R_Q_b + 3 * kl_index + 2);
                        const double R_AQ_2 =
                            X_AQ * X_AQ + Y_AQ * Y_AQ + Z_AQ * Z_AQ;

                        // Boys function evaluation and zero-th integrals
                        // computation
                        double prefactor = estimator / sqrt(a + q);
                        if (segmented_ket)
                            prefactor *= *CT_34_cur;
                        if (segmented_bra)
                            prefactor *= *CT_1_cur;
                        const double arg = alpha * R_AQ_2;
                        misc::fast_boys.generalized_boys(
                            m, arg, prefactor, AA_b);

                        // vertical recursion
                        if (m > 0) {
                            const double alpha_X = -alpha_over_a * X_AQ;
                            const double alpha_Y = -alpha_over_a * Y_AQ;
                            const double alpha_Z = -alpha_over_a * Z_AQ;
                            svr1_4(alpha_over_a,
                                   one_over_two_a,
                                   m,
                                   alpha_X,
                                   alpha_Y,
                                   alpha_Z,
                                   AA_b);
                            if (m > 4) {
                                svr5_8(alpha_over_a,
                                       one_over_two_a,
                                       m,
                                       alpha_X,
                                       alpha_Y,
                                       alpha_Z,
                                       AA_b);
                                if (m > 8) {
                                    svr9_12(alpha_over_a,
                                            one_over_two_a,
                                            m,
                                            alpha_X,
                                            alpha_Y,
                                            alpha_Z,
                                            AA_b);
                                    if (m > 12) {
                                        svr13_14(alpha_over_a,
                                                 one_over_two_a,
                                                 m,
                                                 alpha_X,
                                                 alpha_Y,
                                                 alpha_Z,
                                                 AA_b);
                                        if (m > 14) {
                                            svr15_16(alpha_over_a,
                                                     one_over_two_a,
                                                     m,
                                                     alpha_X,
                                                     alpha_Y,
                                                     alpha_Z,
                                                     AA_b);
                                        }
                                    }
                                }
                            }
                        }
                        // electron transfer
                        if (l_34 > 0) { // anything to transfer? if so, first
                                        // ...
                            //... preparation
                            const double one_over_two_q = one_over_q / 2;
                            const double prefactor_x =
                                *(A_prefactor_b + 3 * kl_index);
                            const double prefactor_y =
                                *(A_prefactor_b + 3 * kl_index + 1);
                            const double prefactor_z =
                                *(A_prefactor_b + 3 * kl_index + 2);
                            const double a_over_q = a * one_over_q;
                            // and now going on transfering one by one
                            unsigned underflow = l_34 - 1;
                            unsigned first_min =
                                (l_1_min > underflow ? l_1_min - underflow : 0);
                            unsigned first_max = l_1 + underflow;
                            transfer_1(first_min,
                                       first_max,
                                       prefactor_x,
                                       prefactor_y,
                                       prefactor_z,
                                       a_over_q,
                                       one_over_two_q,
                                       AA_b);
                            if (l_34 > 1) {
                                underflow--;
                                first_min =
                                    (l_1_min > underflow ? l_1_min - underflow
                                                         : 0);
                                first_max--;
                                transfer_2(first_min,
                                           first_max,
                                           prefactor_x,
                                           prefactor_y,
                                           prefactor_z,
                                           a_over_q,
                                           one_over_two_q,
                                           AA_b);
                                if (l_34 > 2) {
                                    underflow--;
                                    first_min = (l_1_min > underflow
                                                     ? l_1_min - underflow
                                                     : 0);
                                    first_max--;
                                    transfer_3(first_min,
                                               first_max,
                                               prefactor_x,
                                               prefactor_y,
                                               prefactor_z,
                                               a_over_q,
                                               one_over_two_q,
                                               AA_b);
                                    if (l_34 > 3) {
                                        underflow--;
                                        first_min = (l_1_min > underflow
                                                         ? l_1_min - underflow
                                                         : 0);
                                        first_max--;
                                        transfer_4(first_min,
                                                   first_max,
                                                   prefactor_x,
                                                   prefactor_y,
                                                   prefactor_z,
                                                   a_over_q,
                                                   one_over_two_q,
                                                   AA_b);
                                        if (l_34 > 4) {
                                            underflow--;
                                            first_min =
                                                (l_1_min > underflow
                                                     ? l_1_min - underflow
                                                     : 0);
                                            first_max--;
                                            transfer_5(first_min,
                                                       first_max,
                                                       prefactor_x,
                                                       prefactor_y,
                                                       prefactor_z,
                                                       a_over_q,
                                                       one_over_two_q,
                                                       AA_b);
                                            if (l_34 > 5) {
                                                underflow--;
                                                first_min =
                                                    (l_1_min > underflow
                                                         ? l_1_min - underflow
                                                         : 0);
                                                first_max--;
                                                transfer_6(first_min,
                                                           first_max,
                                                           prefactor_x,
                                                           prefactor_y,
                                                           prefactor_z,
                                                           a_over_q,
                                                           one_over_two_q,
                                                           AA_b);
                                                if (l_34 > 6) {
                                                    underflow--;
                                                    first_min =
                                                        (l_1_min > underflow
                                                             ? l_1_min -
                                                                   underflow
                                                             : 0);
                                                    first_max--;
                                                    transfer_7(first_min,
                                                               first_max,
                                                               prefactor_x,
                                                               prefactor_y,
                                                               prefactor_z,
                                                               a_over_q,
                                                               one_over_two_q,
                                                               AA_b);
                                                    if (l_34 > 7) {
                                                        underflow--;
                                                        first_min =
                                                            (l_1_min > underflow
                                                                 ? l_1_min -
                                                                       underflow
                                                                 : 0);
                                                        first_max--;
                                                        transfer_8(
                                                            first_min,
                                                            first_max,
                                                            prefactor_x,
                                                            prefactor_y,
                                                            prefactor_z,
                                                            a_over_q,
                                                            one_over_two_q,
                                                            AA_b);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        if (segmented_ket) {
                            double* AAAA_cur = AAAA_b;
                            for (unsigned ii = i_index_begin; ii < i_index_end;
                                 ++ii)
                                for (unsigned kk = k_index_begin;
                                     kk < k_index_end;
                                     ++kk, ++AAAA_cur)
                                    *AAAA_cur += *(AA_b + ii * AA_s + kk);
                        } else {
                            double* B_cur = B_b;
                            for (unsigned ii = i_index_begin; ii < i_index_end;
                                 ++ii)
                                for (unsigned kk = k_index_begin;
                                     kk < k_index_end;
                                     ++kk, ++B_cur)
                                    *B_cur = *(AA_b + ii * AA_s + kk);

                            // contracting ket pair
                            general_contraction(CT_34_cur,
                                                AAAA_b,
                                                B_b,
                                                angular_range,
                                                ket_naive_size);
                        }
                    }
                if (segmented_bra) {
                    segmented_contraction(BBBBBB_b, AAAA_b, amount);
                } else {
                    // contracting bra pair
                    general_contraction(
                        CT_1_cur, BBBBBB_b, AAAA_b, amount, naive_size_1);
                }
            }

            const double* BBBBBB_cur = BBBBBB_b;
            // loop over quartets of contractions
            unsigned n_i = 0;
            for (unsigned i = 0; i < naive_size_1; ++i) {
                const unsigned l_i = ref_es1.l[i];
                const unsigned i_size =
                    (spherical_basis ? l_i + l_i + 1
                                     : (l_i + 1) * (l_i + 2) / 2);
                const unsigned ii_index_begin = l_i * (l_i + 1) * (l_i + 2) / 6;
                const unsigned ii_index_end =
                    (l_i + 1) * (l_i + 2) * (l_i + 3) / 6;
                unsigned n_k = 0;
                for (unsigned k = 0; k < naive_size_3; ++k) {
                    const unsigned l_k = ref_es3.l[k];
                    const unsigned k_size =
                        (spherical_basis ? l_k + l_k + 1
                                         : (l_k + 1) * (l_k + 2) / 2);
                    unsigned n_l = 0;
                    for (unsigned l = 0; l < naive_size_4;
                         ++l, BBBBBB_cur += angular_range) {
                        const unsigned l_l = ref_es4.l[l];
                        const unsigned l_size =
                            (spherical_basis ? l_l + l_l + 1
                                             : (l_l + 1) * (l_l + 2) / 2);
                        const unsigned l_kl = l_k + l_l;
                        const unsigned kk_index_begin =
                            (same_CD ? l_kl * (l_kl + 1) * (l_kl + 2) / 6
                                     : l_k * (l_k + 1) * (l_k + 2) / 6);
                        const unsigned kk_index_end =
                            (l_kl + 1) * (l_kl + 2) * (l_kl + 3) / 6;

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
                                      (i_index - i_index_begin) * BBBBBB_s +
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

                        // to working space for operations on the second pair
                        for (unsigned i_index = 0; i_index < i_size; ++i_index)
                            for (unsigned k_index = kk_index_begin;
                                 k_index < kk_index_end;
                                 ++k_index)
                                *(DDD_b + i_index * DDD_s12 + k_index * DDD_s) =
                                    *(CCC_b + k_index * CCC_s + i_index);

                        //(pseudo-)horizontal recursion
                        if (l_l > 0) {
                            if (same_CD) {
                                switch (l_kl) {
                                case 1:
                                    pseudo_hr_tot_1(
                                        l_l, 0, i_size, DDD_b, DDD_s12, DDD_s);
                                    break;
                                case 2:
                                    pseudo_hr_tot_2(
                                        l_l, 0, i_size, DDD_b, DDD_s12, DDD_s);
                                    break;
                                case 3:
                                    pseudo_hr_tot_3(
                                        l_l, 0, i_size, DDD_b, DDD_s12, DDD_s);
                                    break;
                                case 4:
                                    pseudo_hr_tot_4(
                                        l_l, 0, i_size, DDD_b, DDD_s12, DDD_s);
                                    break;
                                case 5:
                                    pseudo_hr_tot_5(
                                        l_l, 0, i_size, DDD_b, DDD_s12, DDD_s);
                                    break;
                                case 6:
                                    pseudo_hr_tot_6(
                                        l_l, 0, i_size, DDD_b, DDD_s12, DDD_s);
                                    break;
                                case 7:
                                    pseudo_hr_tot_7(
                                        l_l, 0, i_size, DDD_b, DDD_s12, DDD_s);
                                    break;
                                case 8:
                                    pseudo_hr_tot_8(
                                        l_l, 0, i_size, DDD_b, DDD_s12, DDD_s);
                                    break;
                                }
                            } else {
                                const unsigned funny = l_k * 4 + l_l;
                                switch (funny) {
                                case 1:
                                    hr_01(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 2:
                                    hr_02(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 3:
                                    hr_03(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 4:
                                    hr_04(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 5:
                                    hr_11(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 6:
                                    hr_12(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 7:
                                    hr_13(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 8:
                                    hr_14(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 9:
                                    hr_21(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 10:
                                    hr_22(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 11:
                                    hr_23(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 12:
                                    hr_24(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 13:
                                    hr_31(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 14:
                                    hr_32(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 15:
                                    hr_33(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 16:
                                    hr_34(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 17:
                                    hr_41(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 18:
                                    hr_42(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 19:
                                    hr_43(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                case 20:
                                    hr_44(X_CD,
                                          Y_CD,
                                          Z_CD,
                                          0,
                                          i_size,
                                          DDD_b,
                                          DDD_s12,
                                          DDD_s);
                                    break;
                                }
                            }
                        }

                        // transformation to normalized cartesian/spherical for
                        // the fourth one
                        if (l_l > 0) {
                            const unsigned kkk_index_begin =
                                l_k * (l_k + 1) * (l_k + 2) / 6;
                            const unsigned kkk_index_end =
                                (l_k + 1) * (l_k + 2) * (l_k + 3) / 6;
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
                               swapped,
                               false);

                        n_l += l_size;
                    }
                    n_k += k_size;
                }
                n_i += i_size;
            }
        }

        /* Main machinery for (A|1/r_12|C) integrals,
           A, C: Gaussian shell from density fitting basis set
        */
        void OS1QuasiTwoElectronIntegralEngine::calc_AC(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es3,
            double* results) const
        {
            /* swapping may be needed to perform better*/
            const FlatBasisSet::Shell *shell_1_pointer = &es1,
                                      *shell_3_pointer = &es3;
            const FlatBasisSet::Shell* tmp_pointer;
            const bool swapped = (es1.l_max < es3.l_max);
            if (swapped) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_3_pointer;
                shell_3_pointer = tmp_pointer;
            }
            // references initializing
            const FlatBasisSet::Shell &ref_es1 = *shell_1_pointer,
                                      &ref_es3 = *shell_3_pointer;
            // end of swapping

            // preparing some constants
            const unsigned l_1_min = ref_es1.l_min;
            const unsigned l_3_min = ref_es3.l_min;
            const unsigned l_1 = ref_es1.l_max;
            const unsigned l_3 = ref_es3.l_max;
            const unsigned l_34 = ref_es3.l_max;
            const unsigned m = l_1 + l_3;
            const unsigned prim_size_1 = ref_es1.primitive_exps.size();
            const unsigned prim_size_3 = ref_es3.primitive_exps.size();
            const unsigned naive_size_1 = ref_es1.naive_size;
            const unsigned naive_size_3 = ref_es3.naive_size;
            const unsigned size_1 = ref_es1.size;
            const unsigned size_3 = ref_es3.size;

            const unsigned i_index_begin =
                l_1_min * (l_1_min + 1) * (l_1_min + 2) / 6;
            const unsigned i_index_end = (l_1 + 1) * (l_1 + 2) * (l_1 + 3) / 6;
            const unsigned k_index_begin =
                l_3_min * (l_3_min + 1) * (l_3_min + 2) / 6;
            const unsigned k_index_end =
                (l_34 + 1) * (l_34 + 2) * (l_34 + 3) / 6;
            const unsigned i_range = i_index_end - i_index_begin;
            const unsigned k_range = k_index_end - k_index_begin;
            const unsigned angular_range = i_range * k_range;

            const unsigned amount = naive_size_3 * angular_range;

            const bool segmented_ket = (naive_size_3 == 1);
            const bool segmented_bra = (naive_size_1 == 1);

            // setting up working arrays
            double* memory_pointer = memory_pool.get();
            double* const A_exp_a_b = memory_pointer;
            memory_pointer += prim_size_1;
            double* const A_exp_c_b = memory_pointer;
            memory_pointer += prim_size_3;

            double* const AA_b = memory_pointer;
            const unsigned AA_s = OS1_S1;
            memory_pointer += AA_s * (m + 1) * (m + 2) * (m + 3) / 6;
            double* const B_b = memory_pointer;
            memory_pointer += angular_range;
            double* const AAAA_b = memory_pointer;
            const unsigned AAAA_total_size = naive_size_3 * angular_range;
            memory_pointer += AAAA_total_size;
            double* const BBBBBB_b = memory_pointer;
            const unsigned BBBBBB_s = k_range;
            const unsigned BBBBBB_total_size = AAAA_total_size * naive_size_1;
            memory_pointer += BBBBBB_total_size;
            memset(BBBBBB_b, 0, BBBBBB_total_size * sizeof(double));
            double* const CCC_b = memory_pointer;
            const unsigned CCC_s = i_index_end;
            memory_pointer += k_index_end * CCC_s;
            double* const DDD_b = memory_pointer;
            const unsigned DDD_s = k_index_end;
            memory_pointer +=
                DDD_s * (ref_es1.l_max + 1) * (ref_es1.l_max + 2) / 2;

            // setting two(one) center quantites
            const double X_AC =
                ref_es1.atom->coords[0] - ref_es3.atom->coords[0];
            const double Y_AC =
                ref_es1.atom->coords[1] - ref_es3.atom->coords[1];
            const double Z_AC =
                ref_es1.atom->coords[2] - ref_es3.atom->coords[2];
            const double R_AC_2 = X_AC * X_AC + Y_AC * Y_AC + Z_AC * Z_AC;

            // preparing contractions
            const double* CT_1_b = &ref_es1.prenormed_contraction_coeffs(0, 0);
            const double* CT_3_b = &ref_es3.prenormed_contraction_coeffs(0, 0);

            for (unsigned i = 0; i < prim_size_1; ++i)
                *(A_exp_a_b + i) =
                    two_pi_to_five_over_four / ref_es1.primitive_exps[i];
            for (unsigned i = 0; i < prim_size_3; ++i)
                *(A_exp_c_b + i) =
                    two_pi_to_five_over_four / ref_es3.primitive_exps[i];

            // loop over primitives
            for (unsigned i = 0; i < prim_size_1; ++i) {
                memset(AAAA_b, 0, AAAA_total_size * sizeof(double));
                const double* CT_1_cur = CT_1_b + i * naive_size_1;
                const double a = ref_es1.primitive_exps[i];
                const double one_over_a = 1 / a;
                const double one_over_two_a = one_over_a / 2;
                for (unsigned k = 0; k < prim_size_3; ++k) {
                    const double* CT_3_cur = CT_3_b + k * naive_size_3;
                    const double estimator =
                        *(A_exp_a_b + i) * *(A_exp_c_b + k);
                    const double c = ref_es3.primitive_exps[k];
                    const double one_over_c = 1 / c;
                    const double alpha = 1 / (one_over_a + one_over_c);
                    const double alpha_over_a = alpha * one_over_a;

                    // Boys function evaluation and zero-th integrals
                    // computation
                    double prefactor = estimator / sqrt(a + c);
                    if (segmented_ket)
                        prefactor *= *CT_3_cur;
                    if (segmented_bra)
                        prefactor *= *CT_1_cur;
                    const double arg = alpha * R_AC_2;
                    misc::fast_boys.generalized_boys(m, arg, prefactor, AA_b);

                    // vertical recursion
                    if (m > 0) {
                        const double alpha_X = -alpha_over_a * X_AC;
                        const double alpha_Y = -alpha_over_a * Y_AC;
                        const double alpha_Z = -alpha_over_a * Z_AC;
                        svr1_4(alpha_over_a,
                               one_over_two_a,
                               m,
                               alpha_X,
                               alpha_Y,
                               alpha_Z,
                               AA_b);
                        if (m > 4) {
                            svr5_8(alpha_over_a,
                                   one_over_two_a,
                                   m,
                                   alpha_X,
                                   alpha_Y,
                                   alpha_Z,
                                   AA_b);
                            if (m > 8) {
                                svr9_12(alpha_over_a,
                                        one_over_two_a,
                                        m,
                                        alpha_X,
                                        alpha_Y,
                                        alpha_Z,
                                        AA_b);
                                if (m > 12) {
                                    svr13_14(alpha_over_a,
                                             one_over_two_a,
                                             m,
                                             alpha_X,
                                             alpha_Y,
                                             alpha_Z,
                                             AA_b);
                                    if (m > 14) {
                                        svr15_16(alpha_over_a,
                                                 one_over_two_a,
                                                 m,
                                                 alpha_X,
                                                 alpha_Y,
                                                 alpha_Z,
                                                 AA_b);
                                    }
                                }
                            }
                        }
                    }
                    // electron transfer
                    if (l_3 > 0) { // anything to transfer? if so, first ...
                        //... preparation
                        const double one_over_two_c = one_over_c / 2;
                        const double a_over_c = a * one_over_c;
                        // and now going on transfering one by one
                        unsigned underflow = l_3 - 1;
                        unsigned first_min =
                            (l_1_min > underflow ? l_1_min - underflow : 0);
                        unsigned first_max = l_1 + underflow;
                        transfer_1(first_min,
                                   first_max,
                                   0,
                                   0,
                                   0,
                                   a_over_c,
                                   one_over_two_c,
                                   AA_b);
                        if (l_3 > 1) {
                            underflow--;
                            first_min =
                                (l_1_min > underflow ? l_1_min - underflow : 0);
                            first_max--;
                            transfer_2(first_min,
                                       first_max,
                                       0,
                                       0,
                                       0,
                                       a_over_c,
                                       one_over_two_c,
                                       AA_b);
                            if (l_3 > 2) {
                                underflow--;
                                first_min =
                                    (l_1_min > underflow ? l_1_min - underflow
                                                         : 0);
                                first_max--;
                                transfer_3(first_min,
                                           first_max,
                                           0,
                                           0,
                                           0,
                                           a_over_c,
                                           one_over_two_c,
                                           AA_b);
                                if (l_3 > 3) {
                                    underflow--;
                                    first_min = (l_1_min > underflow
                                                     ? l_1_min - underflow
                                                     : 0);
                                    first_max--;
                                    transfer_4(first_min,
                                               first_max,
                                               0,
                                               0,
                                               0,
                                               a_over_c,
                                               one_over_two_c,
                                               AA_b);
                                    if (l_3 > 4) {
                                        underflow--;
                                        first_min = (l_1_min > underflow
                                                         ? l_1_min - underflow
                                                         : 0);
                                        first_max--;
                                        transfer_5(first_min,
                                                   first_max,
                                                   0,
                                                   0,
                                                   0,
                                                   a_over_c,
                                                   one_over_two_c,
                                                   AA_b);
                                        if (l_3 > 5) {
                                            underflow--;
                                            first_min =
                                                (l_1_min > underflow
                                                     ? l_1_min - underflow
                                                     : 0);
                                            first_max--;
                                            transfer_6(first_min,
                                                       first_max,
                                                       0,
                                                       0,
                                                       0,
                                                       a_over_c,
                                                       one_over_two_c,
                                                       AA_b);
                                            if (l_3 > 6) {
                                                underflow--;
                                                first_min =
                                                    (l_1_min > underflow
                                                         ? l_1_min - underflow
                                                         : 0);
                                                first_max--;
                                                transfer_7(first_min,
                                                           first_max,
                                                           0,
                                                           0,
                                                           0,
                                                           a_over_c,
                                                           one_over_two_c,
                                                           AA_b);
                                                if (l_3 > 7) {
                                                    underflow--;
                                                    first_min =
                                                        (l_1_min > underflow
                                                             ? l_1_min -
                                                                   underflow
                                                             : 0);
                                                    first_max--;
                                                    transfer_8(first_min,
                                                               first_max,
                                                               0,
                                                               0,
                                                               0,
                                                               a_over_c,
                                                               one_over_two_c,
                                                               AA_b);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }

                    if (segmented_ket) {
                        double* AAAA_cur = AAAA_b;
                        for (unsigned ii = i_index_begin; ii < i_index_end;
                             ++ii)
                            for (unsigned kk = k_index_begin; kk < k_index_end;
                                 ++kk, ++AAAA_cur)
                                *AAAA_cur += *(AA_b + ii * AA_s + kk);
                    } else {
                        double* B_cur = B_b;
                        for (unsigned ii = i_index_begin; ii < i_index_end;
                             ++ii)
                            for (unsigned kk = k_index_begin; kk < k_index_end;
                                 ++kk, ++B_cur)
                                *B_cur = *(AA_b + ii * AA_s + kk);

                        // contracting ket pair
                        general_contraction(
                            CT_3_cur, AAAA_b, B_b, angular_range, naive_size_3);
                    }
                }
                if (segmented_bra) {
                    segmented_contraction(BBBBBB_b, AAAA_b, amount);
                } else {
                    // contracting bra pair
                    general_contraction(
                        CT_1_cur, BBBBBB_b, AAAA_b, amount, naive_size_1);
                }
            }

            const double* BBBBBB_cur = BBBBBB_b;
            // loop over quartets of contractions
            unsigned n_i = 0;
            for (unsigned i = 0; i < naive_size_1; ++i) {
                const unsigned l_i = ref_es1.l[i];
                const unsigned i_size =
                    (spherical_basis ? l_i + l_i + 1
                                     : (l_i + 1) * (l_i + 2) / 2);
                const unsigned ii_index_begin = l_i * (l_i + 1) * (l_i + 2) / 6;
                const unsigned ii_index_end =
                    (l_i + 1) * (l_i + 2) * (l_i + 3) / 6;
                unsigned n_k = 0;
                for (unsigned k = 0; k < naive_size_3;
                     ++k, BBBBBB_cur += angular_range) {
                    const unsigned l_k = ref_es3.l[k];
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
                                *(BBBBBB_cur +
                                  (i_index - i_index_begin) * BBBBBB_s +
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
                           swapped);
                    n_k += k_size;
                }
                n_i += i_size;
            }
        }
    }
}
