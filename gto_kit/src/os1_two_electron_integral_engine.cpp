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
        OS1TwoElectronIntegralEngine::OS1TwoElectronIntegralEngine(
            const core::BasisSet& bs, const double treshold) :
            m_fbs(bs),
            spherical_basis(true), // temporarily just dummy
            m_treshold(
                treshold /
                10), // to account for possible large density matrix elements
            memory_pool(
                new double[m_fbs.AAAA_max_size + m_fbs.BBBBBB_max_size +
                           2 * m_fbs.max_primitive_size * m_fbs.max_naive_size +
                           15 * m_fbs.max_primitive_size *
                               m_fbs.max_primitive_size +
                           2000000])
        // hope I can count, a little bit overestimated
        {
        }

        std::size_t OS1TwoElectronIntegralEngine::preferred_no_requests() const
        {
            return 100;
        }

        void OS1TwoElectronIntegralEngine::calc(
            std::vector<core::Request>& requests) const
        {
            for (core::Request& r : requests)
                if (!r.done)
                    calc(r);
        }

        inline void
        OS1TwoElectronIntegralEngine::calc(core::Request& request) const
        {
            const FlatBasisSet::Shell& es1 = m_fbs.shells[request.shells[0]];
            const FlatBasisSet::Shell& es2 = m_fbs.shells[request.shells[1]];

            const FlatBasisSet::Shell& es3 = m_fbs.shells[request.shells[2]];
            const FlatBasisSet::Shell& es4 = m_fbs.shells[request.shells[3]];

            const unsigned total_prim_size =
                es1.primitive_exps.size() * es2.primitive_exps.size() *
                es3.primitive_exps.size() * es4.primitive_exps.size();

            const unsigned total_naive_size = es1.naive_size * es2.naive_size *
                                              es3.naive_size * es4.naive_size;

            const bool contracted = (total_prim_size > total_naive_size);
            const unsigned bra_l =
                std::max(es1.l_max + es2.l_max, es3.l_max + es4.l_max);
            const unsigned ket_l =
                std::min(es1.l_max + es2.l_max, es3.l_max + es4.l_max);

            if (!contracted) {
                calc_ABCD_shells(es1, es2, es3, es4, request.results);
            } else {
                const unsigned braket_l = bra_l * (bra_l + 1) / 2 + ket_l;
                switch (braket_l) {
                case 0:
                    calc_ssss_shells(es1, es2, es3, es4, request.results);
                    break;
                case 1:
                    calc_total_l_1_shells(es1, es2, es3, es4, request.results);
                    break;
                case 2:
                    calc_bra_l_1_ket_l_1_shells(
                        es1, es2, es3, es4, request.results);
                    break;
                case 3:
                    calc_bra_l_2_ket_l_0_shells(
                        es1, es2, es3, es4, request.results);
                    break;
                case 4:
                    calc_bra_l_2_ket_l_1_shells(
                        es1, es2, es3, es4, request.results);
                    break;
                case 5:
                    calc_bra_l_2_ket_l_2_shells(
                        es1, es2, es3, es4, request.results);
                    break;
                default:
                    calc_ABCD_shells(es1, es2, es3, es4, request.results);
                    break;
                }
            }
            request.done = true;
        }

        void OS1TwoElectronIntegralEngine::calc_ABCD_shells(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es2,
            const FlatBasisSet::Shell& es3,
            const FlatBasisSet::Shell& es4,
            double* results) const
        { // general types
            /* swapping may be needed to perform better*/
            const FlatBasisSet::Shell *shell_1_pointer = &es1,
                                      *shell_2_pointer = &es2,
                                      *shell_3_pointer = &es3,
                                      *shell_4_pointer = &es4;
            const FlatBasisSet::Shell* tmp_pointer;

            const bool swapped_1 =
                ((es1.l_max < es2.l_max) && (es1.atom != es2.atom));
            const bool swapped_2 =
                ((es3.l_max < es4.l_max) && (es3.atom != es4.atom));
            const bool swapped_12 =
                (es1.l_max + es2.l_max < es3.l_max + es4.l_max);

            // swapping first pair
            if (swapped_1) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_2_pointer;
                shell_2_pointer = tmp_pointer;
            }
            // swapping second pair
            if (swapped_2) {
                tmp_pointer = shell_3_pointer;
                shell_3_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // swapping pairs
            if (swapped_12) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_3_pointer;
                shell_3_pointer = tmp_pointer;
                tmp_pointer = shell_2_pointer;
                shell_2_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // references initializing
            const FlatBasisSet::Shell &ref_es1 = *shell_1_pointer,
                                      &ref_es2 = *shell_2_pointer,
                                      &ref_es3 = *shell_3_pointer,
                                      &ref_es4 = *shell_4_pointer;
            // end of swapping

            // preparing some constants
            const bool same_AB = (ref_es1.atom == ref_es2.atom);
            const bool same_CD = (ref_es3.atom == ref_es4.atom);

            const unsigned l_1_min = ref_es1.l_min;
            const unsigned l_2_min = ref_es2.l_min;
            const unsigned l_3_min = ref_es3.l_min;
            const unsigned l_4_min = ref_es4.l_min;
            const unsigned l_12_min = l_1_min + l_2_min;
            const unsigned l_34_min = l_3_min + l_4_min;
            const unsigned l_12 = ref_es1.l_max + ref_es2.l_max;
            const unsigned l_34 = ref_es3.l_max + ref_es4.l_max;
            const unsigned m = l_12 + l_34;
            const unsigned prim_size_1 = ref_es1.primitive_exps.size();
            const unsigned prim_size_2 = ref_es2.primitive_exps.size();
            const unsigned prim_size_3 = ref_es3.primitive_exps.size();
            const unsigned prim_size_4 = ref_es4.primitive_exps.size();
            const unsigned naive_size_1 = ref_es1.naive_size;
            const unsigned naive_size_2 = ref_es2.naive_size;
            const unsigned naive_size_3 = ref_es3.naive_size;
            const unsigned naive_size_4 = ref_es4.naive_size;
            const unsigned size_1 = ref_es1.size;
            const unsigned size_2 = ref_es2.size;
            const unsigned size_3 = ref_es3.size;
            const unsigned size_4 = ref_es4.size;

            const unsigned first_pair_min = (same_AB ? l_12_min : l_1_min);
            const unsigned first_pair_max = l_12;

            const unsigned i_index_begin =
                (same_AB ? l_12_min * (l_12_min + 1) * (l_12_min + 2) / 6
                         : l_1_min * (l_1_min + 1) * (l_1_min + 2) / 6);
            const unsigned i_index_end =
                (l_12 + 1) * (l_12 + 2) * (l_12 + 3) / 6;
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
            const unsigned bra_naive_size = naive_size_1 * naive_size_2;
            const unsigned bra_prim_size = prim_size_1 * prim_size_2;
            const unsigned amount = ket_naive_size * angular_range;

            const bool segmented_ket = (ket_naive_size == 1);
            const bool segmented_bra = (bra_naive_size == 1);

            // setting up working arrays
            double* memory_pointer = memory_pool.get();

            double* const A_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_exp_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_P_b = memory_pointer;
            memory_pointer += 3 * bra_prim_size;
            double* const A_R_PA_b = memory_pointer;
            memory_pointer += 3 * bra_prim_size;
            double* const A_p_coeff_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_exp_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_R_Q_b = memory_pointer;
            memory_pointer += 3 * ket_prim_size;
            double* const A_q_coeff_b = memory_pointer;
            memory_pointer += ket_prim_size;

            double* const AA_b = memory_pointer;
            const unsigned AA_s = OS1_S1;
            //    const unsigned AA_s = max(m + 1, k_index_end);
            memory_pointer += AA_s * (m + 1) * (m + 2) * (m + 3) / 6;

            /*
                array_type_2 AA(memory_pointer, extents_2
                [(m + 1) * (m + 2) * (m + 3) / 6]
                [max(m + 1, k_index_end)]);
                memory_pointer += AA.num_elements();
                double* const AA_b = AA.data();
                const unsigned AA_s = AA.shape()[1];
            */
            double* const B_b = memory_pointer;
            memory_pointer += angular_range;
            /*
              array_type_1 B(memory_pointer, extents_1
              [angular_range]);
              memory_pointer += B.num_elements();
            */

            double* const CT_34_b = memory_pointer;
            memory_pointer += ket_naive_size * ket_prim_size;

            double* const AAAA_b = memory_pointer;
            const unsigned AAAA_total_size = ket_naive_size * angular_range;
            memory_pointer += AAAA_total_size;
            /*
              array_type_4 AAAA(memory_pointer, extents_4
              [naive_size_3]
              [naive_size_4]
              [i_range]
              [k_range]);
              memory_pointer += AAAA.num_elements();
            */
            double* const CT_12_b = memory_pointer;
            memory_pointer += bra_naive_size * bra_prim_size;

            double* const BBBBBB_b = memory_pointer;
            const unsigned BBBBBB_s = k_range;
            const unsigned BBBBBB_total_size = AAAA_total_size * bra_naive_size;
            memory_pointer += BBBBBB_total_size;
            std::memset(BBBBBB_b, 0, BBBBBB_total_size * sizeof(double));
            /*
              array_type_6 BBBBBB(memory_pointer, extents_6
              [naive_size_1]
              [naive_size_2]
              [naive_size_3]
              [naive_size_4]
              [i_range]
              [k_range]);
              memory_pointer += BBBBBB.num_elements();
              memset(BBBBBB.data(), 0, BBBBBB.num_elements() * sizeof(double));
            */

            double* const CCC_b = memory_pointer;
            const unsigned CCC_s = (ref_es2.l_max + 1) * (ref_es2.l_max + 2) *
                                   (ref_es2.l_max + 3) / 6;
            const unsigned CCC_s12 = i_index_end * CCC_s;
            memory_pointer += k_index_end * CCC_s12;
            /*
              array_type_3 CCC(memory_pointer, extents_3
              [k_index_end]
              [i_index_end]
              [(ref_es2.l_max + 1) * (ref_es2.l_max + 2) * (ref_es2.l_max + 3) /
              6]); memory_pointer += CCC.num_elements();
            */
            double* const DDD_b = memory_pointer;
            const unsigned DDD_s = (ref_es4.l_max + 1) * (ref_es4.l_max + 2) *
                                   (ref_es4.l_max + 3) / 6;
            const unsigned DDD_s12 = DDD_s * k_index_end;
            memory_pointer += DDD_s12 * (ref_es1.l_max + 1) *
                              (ref_es1.l_max + 2) * (ref_es2.l_max + 1) *
                              (ref_es2.l_max + 2) / 4;
            /*
              array_type_3 DDD(memory_pointer, extents_3
              [(ref_es1.l_max + 1) * (ref_es1.l_max + 2) * (ref_es2.l_max + 1) *
              (ref_es2.l_max + 2) / 4] [k_index_end]
              [(ref_es4.l_max + 1) * (ref_es4.l_max + 2) * (ref_es4.l_max + 3) /
              6]); memory_pointer += DDD.num_elements();
            */

            // setting two center (or pair of primitives) quantites
            const double X_AB =
                ref_es1.atom->coords[0] - ref_es2.atom->coords[0];
            const double Y_AB =
                ref_es1.atom->coords[1] - ref_es2.atom->coords[1];
            const double Z_AB =
                ref_es1.atom->coords[2] - ref_es2.atom->coords[2];
            const double R_AB_2 = X_AB * X_AB + Y_AB * Y_AB + Z_AB * Z_AB;
            const double X_CD =
                ref_es3.atom->coords[0] - ref_es4.atom->coords[0];
            const double Y_CD =
                ref_es3.atom->coords[1] - ref_es4.atom->coords[1];
            const double Z_CD =
                ref_es3.atom->coords[2] - ref_es4.atom->coords[2];
            const double R_CD_2 = X_CD * X_CD + Y_CD * Y_CD + Z_CD * Z_CD;

            const unsigned bra_l = ((l_12 & 1) ? l_12 / 2 + 1 : l_12 / 2);
            const unsigned ket_l = ((l_34 & 1) ? l_34 / 2 + 1 : l_34 / 2);

            const double global_bra_estimator =
                std::max(1e0, std::pow(R_AB_2, bra_l));
            const double global_ket_estimator =
                std::max(1e0, std::pow(R_CD_2, ket_l));
            double max_ket_estimator = 0;

            // preparing contractions
            const double* const CT_1_b =
                &ref_es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_2_b =
                &ref_es2.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &ref_es3.prenormed_contraction_coeffs(0, 0);
            const double* const CT_4_b =
                &ref_es4.prenormed_contraction_coeffs(0, 0);
            double* CT_12_cur = CT_12_b;
            double* CT_34_cur = CT_34_b;

            prepare_contraction(CT_1_b,
                                CT_2_b,
                                CT_12_cur,
                                prim_size_1,
                                prim_size_2,
                                naive_size_1,
                                naive_size_2);

            prepare_contraction(CT_3_b,
                                CT_4_b,
                                CT_34_cur,
                                prim_size_3,
                                prim_size_4,
                                naive_size_3,
                                naive_size_4);

            std::memset(A_p_coeff_b, 0, bra_prim_size * sizeof(double));
            std::memset(A_q_coeff_b, 0, ket_prim_size * sizeof(double));
            for (unsigned i = 0; i < bra_prim_size; ++i)
                for (unsigned j = 0; j < bra_naive_size; ++j)
                    if (std::abs(*(CT_12_b + i * bra_naive_size + j)) >
                        *(A_p_coeff_b + i))
                        *(A_p_coeff_b + i) =
                            std::abs(*(CT_12_b + i * bra_naive_size + j));

            for (unsigned i = 0; i < ket_prim_size; ++i)
                for (unsigned j = 0; j < ket_naive_size; ++j)
                    if (std::abs(*(CT_34_b + i * ket_naive_size + j)) >
                        *(A_q_coeff_b + i))
                        *(A_q_coeff_b + i) =
                            std::abs(*(CT_34_b + i * ket_naive_size + j));

            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double p =
                        ref_es1.primitive_exps[i] + ref_es2.primitive_exps[j];
                    const double one_over_p = 1 / p;
                    const double mu = ref_es1.primitive_exps[i] *
                                      ref_es2.primitive_exps[j] * one_over_p;
                    *(A_p_b + ij_index) = p;
                    const double est1 = two_pi_to_five_over_four *
                                        exp(-(mu * R_AB_2)) * one_over_p;
                    *(A_exp_p_b + ij_index) = est1;
                    *(A_p_coeff_b + ij_index) *=
                        est1 * std::max(global_bra_estimator,
                                        std::pow(one_over_p, bra_l));
                    for (unsigned kk = 0; kk < 3; ++kk) {
                        const double R_P = (ref_es1.primitive_exps[i] *
                                                ref_es1.atom->coords[kk] +
                                            ref_es2.primitive_exps[j] *
                                                ref_es2.atom->coords[kk]) *
                                           one_over_p;
                        *(A_R_P_b + 3 * ij_index + kk) = R_P;
                        *(A_R_PA_b + 3 * ij_index + kk) =
                            R_P - ref_es1.atom->coords[kk];
                    }
                }

            for (unsigned i = 0, ij_index = 0; i < prim_size_3; ++i)
                for (unsigned j = 0; j < prim_size_4; ++j, ++ij_index) {
                    const double q =
                        ref_es3.primitive_exps[i] + ref_es4.primitive_exps[j];
                    const double one_over_q = 1 / q;
                    const double nu = ref_es3.primitive_exps[i] *
                                      ref_es4.primitive_exps[j] * one_over_q;
                    *(A_q_b + ij_index) = q;
                    const double est1 = two_pi_to_five_over_four *
                                        exp(-(nu * R_CD_2)) * one_over_q;
                    *(A_exp_q_b + ij_index) = est1;
                    *(A_q_coeff_b + ij_index) *=
                        est1 * std::max(global_ket_estimator,
                                        std::pow(one_over_q, ket_l));
                    if (max_ket_estimator < *(A_q_coeff_b + ij_index))
                        max_ket_estimator = *(A_q_coeff_b + ij_index);
                    for (unsigned kk = 0; kk < 3; ++kk) {
                        *(A_R_Q_b + 3 * ij_index + kk) =
                            (ref_es3.primitive_exps[i] *
                                 ref_es3.atom->coords[kk] +
                             ref_es4.primitive_exps[j] *
                                 ref_es4.atom->coords[kk]) *
                            one_over_q;
                    }
                }
            double prim_treshold = m_treshold / (ket_prim_size * bra_prim_size);

            // quick hack to be on a safe side of Schwartz inequality
            if (&es1 == &es3 && &es2 == &es4)
                prim_treshold = 0;

            // loop over quartets of primitives
            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double coeff_ij = *(A_p_coeff_b + ij_index);
                    if (coeff_ij * max_ket_estimator < prim_treshold)
                        continue;
                    std::memset(AAAA_b, 0, AAAA_total_size * sizeof(double));
                    const double* CT_12_cur =
                        CT_12_b + ij_index * bra_naive_size;
                    const double p = *(A_p_b + ij_index);
                    const double one_over_p = 1 / p;
                    const double one_over_two_p = one_over_p / 2;
                    for (unsigned k = 0, kl_index = 0; k < prim_size_3; ++k)
                        for (unsigned l = 0; l < prim_size_4; ++l, ++kl_index) {
                            const double coeff_max =
                                coeff_ij * *(A_q_coeff_b + kl_index);
                            if (coeff_max < prim_treshold)
                                continue;
                            const double* CT_34_cur =
                                CT_34_b + kl_index * ket_naive_size;
                            const double estimator = *(A_exp_p_b + ij_index) *
                                                     *(A_exp_q_b + kl_index);
                            const double q = *(A_q_b + kl_index);
                            const double one_over_q = 1 / q;
                            const double alpha = 1 / (one_over_p + one_over_q);
                            const double alpha_over_p = alpha * one_over_p;
                            const double X_PQ = *(A_R_P_b + 3 * ij_index) -
                                                *(A_R_Q_b + 3 * kl_index);
                            const double Y_PQ = *(A_R_P_b + 3 * ij_index + 1) -
                                                *(A_R_Q_b + 3 * kl_index + 1);
                            const double Z_PQ = *(A_R_P_b + 3 * ij_index + 2) -
                                                *(A_R_Q_b + 3 * kl_index + 2);
                            const double R_PQ_2 =
                                X_PQ * X_PQ + Y_PQ * Y_PQ + Z_PQ * Z_PQ;

                            // Boys function evaluation and zero-th integrals
                            // computation
                            double prefactor = estimator / sqrt(p + q);
                            if (segmented_ket)
                                prefactor *= *CT_34_cur;
                            if (segmented_bra)
                                prefactor *= *CT_12_cur;
                            const double arg = alpha * R_PQ_2;
                            misc::fast_boys.generalized_boys(
                                m, arg, prefactor, AA_b);

                            // vertical recursion
                            if (m > 0) {
                                const double alpha_X = -alpha_over_p * X_PQ;
                                const double alpha_Y = -alpha_over_p * Y_PQ;
                                const double alpha_Z = -alpha_over_p * Z_PQ;
                                if (same_AB) {
                                    svr1_4(alpha_over_p,
                                           one_over_two_p,
                                           m,
                                           alpha_X,
                                           alpha_Y,
                                           alpha_Z,
                                           AA_b);
                                    if (m > 4) {
                                        svr5_8(alpha_over_p,
                                               one_over_two_p,
                                               m,
                                               alpha_X,
                                               alpha_Y,
                                               alpha_Z,
                                               AA_b);
                                        if (m > 8) {
                                            svr9_12(alpha_over_p,
                                                    one_over_two_p,
                                                    m,
                                                    alpha_X,
                                                    alpha_Y,
                                                    alpha_Z,
                                                    AA_b);
                                            if (m > 12) {
                                                svr13_14(alpha_over_p,
                                                         one_over_two_p,
                                                         m,
                                                         alpha_X,
                                                         alpha_Y,
                                                         alpha_Z,
                                                         AA_b);
                                                if (m > 14) {
                                                    svr15_16(alpha_over_p,
                                                             one_over_two_p,
                                                             m,
                                                             alpha_X,
                                                             alpha_Y,
                                                             alpha_Z,
                                                             AA_b);
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    const double X_PA =
                                        *(A_R_PA_b + 3 * ij_index);
                                    const double Y_PA =
                                        *(A_R_PA_b + 3 * ij_index + 1);
                                    const double Z_PA =
                                        *(A_R_PA_b + 3 * ij_index + 2);
                                    vr1_4(alpha_over_p,
                                          one_over_two_p,
                                          m,
                                          X_PA,
                                          Y_PA,
                                          Z_PA,
                                          alpha_X,
                                          alpha_Y,
                                          alpha_Z,
                                          AA_b);
                                    if (m > 4) {
                                        vr5_8(alpha_over_p,
                                              one_over_two_p,
                                              m,
                                              X_PA,
                                              Y_PA,
                                              Z_PA,
                                              alpha_X,
                                              alpha_Y,
                                              alpha_Z,
                                              AA_b);
                                        if (m > 8) {
                                            vr9_12(alpha_over_p,
                                                   one_over_two_p,
                                                   m,
                                                   X_PA,
                                                   Y_PA,
                                                   Z_PA,
                                                   alpha_X,
                                                   alpha_Y,
                                                   alpha_Z,
                                                   AA_b);
                                            if (m > 12) {
                                                vr13_14(alpha_over_p,
                                                        one_over_two_p,
                                                        m,
                                                        X_PA,
                                                        Y_PA,
                                                        Z_PA,
                                                        alpha_X,
                                                        alpha_Y,
                                                        alpha_Z,
                                                        AA_b);
                                                if (m > 14) {
                                                    vr15_16(alpha_over_p,
                                                            one_over_two_p,
                                                            m,
                                                            X_PA,
                                                            Y_PA,
                                                            Z_PA,
                                                            alpha_X,
                                                            alpha_Y,
                                                            alpha_Z,
                                                            AA_b);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            // electron transfer
                            if (l_34 >
                                0) { // anything to transfer? if so, first ...
                                //... preparation
                                const double one_over_two_q = one_over_q / 2;
                                const double prefactor_x =
                                    -(ref_es2.primitive_exps[j] * X_AB +
                                      ref_es4.primitive_exps[l] * X_CD) *
                                    one_over_q;
                                const double prefactor_y =
                                    -(ref_es2.primitive_exps[j] * Y_AB +
                                      ref_es4.primitive_exps[l] * Y_CD) *
                                    one_over_q;
                                const double prefactor_z =
                                    -(ref_es2.primitive_exps[j] * Z_AB +
                                      ref_es4.primitive_exps[l] * Z_CD) *
                                    one_over_q;
                                const double p_over_q = p * one_over_q;
                                // and now going on transfering one by one
                                unsigned underflow = l_34 - 1;
                                unsigned first_min =
                                    (first_pair_min > underflow
                                         ? first_pair_min - underflow
                                         : 0);
                                unsigned first_max = first_pair_max + underflow;
                                transfer_1(first_min,
                                           first_max,
                                           prefactor_x,
                                           prefactor_y,
                                           prefactor_z,
                                           p_over_q,
                                           one_over_two_q,
                                           AA_b);
                                if (l_34 > 1) {
                                    underflow--;
                                    first_min =
                                        (first_pair_min > underflow
                                             ? first_pair_min - underflow
                                             : 0);
                                    first_max--;
                                    transfer_2(first_min,
                                               first_max,
                                               prefactor_x,
                                               prefactor_y,
                                               prefactor_z,
                                               p_over_q,
                                               one_over_two_q,
                                               AA_b);
                                    if (l_34 > 2) {
                                        underflow--;
                                        first_min =
                                            (first_pair_min > underflow
                                                 ? first_pair_min - underflow
                                                 : 0);
                                        first_max--;
                                        transfer_3(first_min,
                                                   first_max,
                                                   prefactor_x,
                                                   prefactor_y,
                                                   prefactor_z,
                                                   p_over_q,
                                                   one_over_two_q,
                                                   AA_b);
                                        if (l_34 > 3) {
                                            underflow--;
                                            first_min =
                                                (first_pair_min > underflow
                                                     ? first_pair_min -
                                                           underflow
                                                     : 0);
                                            first_max--;
                                            transfer_4(first_min,
                                                       first_max,
                                                       prefactor_x,
                                                       prefactor_y,
                                                       prefactor_z,
                                                       p_over_q,
                                                       one_over_two_q,
                                                       AA_b);
                                            if (l_34 > 4) {
                                                underflow--;
                                                first_min =
                                                    (first_pair_min > underflow
                                                         ? first_pair_min -
                                                               underflow
                                                         : 0);
                                                first_max--;
                                                transfer_5(first_min,
                                                           first_max,
                                                           prefactor_x,
                                                           prefactor_y,
                                                           prefactor_z,
                                                           p_over_q,
                                                           one_over_two_q,
                                                           AA_b);
                                                if (l_34 > 5) {
                                                    underflow--;
                                                    first_min =
                                                        (first_pair_min >
                                                                 underflow
                                                             ? first_pair_min -
                                                                   underflow
                                                             : 0);
                                                    first_max--;
                                                    transfer_6(first_min,
                                                               first_max,
                                                               prefactor_x,
                                                               prefactor_y,
                                                               prefactor_z,
                                                               p_over_q,
                                                               one_over_two_q,
                                                               AA_b);
                                                    if (l_34 > 6) {
                                                        underflow--;
                                                        first_min =
                                                            (first_pair_min >
                                                                     underflow
                                                                 ? first_pair_min -
                                                                       underflow
                                                                 : 0);
                                                        first_max--;
                                                        transfer_7(
                                                            first_min,
                                                            first_max,
                                                            prefactor_x,
                                                            prefactor_y,
                                                            prefactor_z,
                                                            p_over_q,
                                                            one_over_two_q,
                                                            AA_b);
                                                        if (l_34 > 7) {
                                                            underflow--;
                                                            first_min =
                                                                (first_pair_min >
                                                                         underflow
                                                                     ? first_pair_min -
                                                                           underflow
                                                                     : 0);
                                                            first_max--;
                                                            transfer_8(
                                                                first_min,
                                                                first_max,
                                                                prefactor_x,
                                                                prefactor_y,
                                                                prefactor_z,
                                                                p_over_q,
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
                                for (unsigned ii = i_index_begin;
                                     ii < i_index_end;
                                     ++ii)
                                    for (unsigned kk = k_index_begin;
                                         kk < k_index_end;
                                         ++kk, ++AAAA_cur)
                                        *AAAA_cur += *(AA_b + ii * OS1_S1 + kk);
                            } else {
                                double* B_cur = B_b;
                                for (unsigned ii = i_index_begin;
                                     ii < i_index_end;
                                     ++ii)
                                    for (unsigned kk = k_index_begin;
                                         kk < k_index_end;
                                         ++kk, ++B_cur)
                                        *B_cur = *(AA_b + ii * OS1_S1 + kk);

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
                        general_contraction(CT_12_cur,
                                            BBBBBB_b,
                                            AAAA_b,
                                            amount,
                                            bra_naive_size);
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
                unsigned n_j = 0;
                for (unsigned j = 0; j < naive_size_2; ++j) {
                    const unsigned l_j = ref_es2.l[j];
                    const unsigned j_size =
                        (spherical_basis ? l_j + l_j + 1
                                         : (l_j + 1) * (l_j + 2) / 2);
                    const unsigned l_ij = l_i + l_j;
                    const unsigned ii_index_begin =
                        (same_AB ? l_ij * (l_ij + 1) * (l_ij + 2) / 6
                                 : l_i * (l_i + 1) * (l_i + 2) / 6);
                    const unsigned ii_index_end =
                        (l_ij + 1) * (l_ij + 2) * (l_ij + 3) / 6;
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

                            // to working space for operations on the first pair
                            // of the current quartet
                            for (unsigned k_index = kk_index_begin;
                                 k_index < kk_index_end;
                                 ++k_index)
                                for (unsigned i_index = ii_index_begin;
                                     i_index < ii_index_end;
                                     ++i_index)
                                    *(CCC_b + k_index * CCC_s12 +
                                      i_index * CCC_s) =
                                        *(BBBBBB_cur +
                                          (i_index - i_index_begin) * BBBBBB_s +
                                          k_index - k_index_begin);

                            //(pseudo-)horizontal recursion
                            if (l_j > 0) {
                                if (same_AB) {
                                    switch (l_ij) {
                                    case 1:
                                        pseudo_hr_tot_1(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 2:
                                        pseudo_hr_tot_2(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 3:
                                        pseudo_hr_tot_3(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 4:
                                        pseudo_hr_tot_4(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 5:
                                        pseudo_hr_tot_5(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 6:
                                        pseudo_hr_tot_6(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 7:
                                        pseudo_hr_tot_7(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 8:
                                        pseudo_hr_tot_8(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    }
                                } else {
                                    const unsigned funny = l_i * 4 + l_j;
                                    switch (funny) {
                                    case 1:
                                        hr_01(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 2:
                                        hr_02(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 3:
                                        hr_03(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 4:
                                        hr_04(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 5:
                                        hr_11(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 6:
                                        hr_12(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 7:
                                        hr_13(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 8:
                                        hr_14(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 9:
                                        hr_21(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 10:
                                        hr_22(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 11:
                                        hr_23(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 12:
                                        hr_24(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 13:
                                        hr_31(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 14:
                                        hr_32(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 15:
                                        hr_33(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 16:
                                        hr_34(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 17:
                                        hr_41(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 18:
                                        hr_42(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 19:
                                        hr_43(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 20:
                                        hr_44(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the second one
                            if (l_j > 0) {
                                const unsigned iii_index_begin =
                                    l_i * (l_i + 1) * (l_i + 2) / 6;
                                const unsigned iii_index_end =
                                    (l_i + 1) * (l_i + 2) * (l_i + 3) / 6;
                                if (l_j == 1) {
                                    for (unsigned k_index = kk_index_begin;
                                         k_index < kk_index_end;
                                         ++k_index)
                                        for (unsigned i_index = iii_index_begin;
                                             i_index < iii_index_end;
                                             ++i_index) {
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  i_index * CCC_s + 1);
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s + 1) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  i_index * CCC_s + 2);
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s + 2) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  i_index * CCC_s + 3);
                                        }
                                } else {
                                    if (spherical_basis) {
                                        cart_to_spher_2(l_j,
                                                        iii_index_begin,
                                                        iii_index_end,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                    } else {
                                        cart_to_cart_2(l_j,
                                                       iii_index_begin,
                                                       iii_index_end,
                                                       kk_index_begin,
                                                       kk_index_end,
                                                       CCC_b,
                                                       CCC_s12,
                                                       CCC_s);
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the first one
                            if (l_i > 0) {
                                if (l_i == 1) {
                                    for (unsigned k_index = kk_index_begin;
                                         k_index < kk_index_end;
                                         ++k_index)
                                        for (unsigned j_index = 0;
                                             j_index < j_size;
                                             ++j_index) {
                                            *(CCC_b + k_index * CCC_s12 +
                                              j_index) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  CCC_s + j_index);
                                            *(CCC_b + k_index * CCC_s12 +
                                              CCC_s + j_index) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  CCC_s + CCC_s + j_index);
                                            *(CCC_b + k_index * CCC_s12 +
                                              CCC_s + CCC_s + j_index) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  CCC_s + CCC_s + CCC_s +
                                                  j_index);
                                        }
                                } else {
                                    if (spherical_basis) {
                                        cart_to_spher_1(l_i,
                                                        j_size,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                    } else {
                                        cart_to_cart_1(l_i,
                                                       j_size,
                                                       kk_index_begin,
                                                       kk_index_end,
                                                       CCC_b,
                                                       CCC_s12,
                                                       CCC_s);
                                    }
                                }
                            }

                            // to working space for operations on the second
                            // pair of the current quartet
                            unsigned ij_index = 0;
                            for (unsigned i_index = 0; i_index < i_size;
                                 ++i_index)
                                for (unsigned j_index = 0; j_index < j_size;
                                     ++j_index, ++ij_index)
                                    for (unsigned k_index = kk_index_begin;
                                         k_index < kk_index_end;
                                         ++k_index)
                                        *(DDD_b + ij_index * DDD_s12 +
                                          k_index * DDD_s) =
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s + j_index);
                            const unsigned ij_index_end = ij_index;

                            //(pseudo-)horizontal recursion
                            if (l_l > 0) {
                                if (same_CD) {
                                    switch (l_kl) {
                                    case 1:
                                        pseudo_hr_tot_1(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 2:
                                        pseudo_hr_tot_2(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 3:
                                        pseudo_hr_tot_3(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 4:
                                        pseudo_hr_tot_4(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 5:
                                        pseudo_hr_tot_5(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 6:
                                        pseudo_hr_tot_6(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 7:
                                        pseudo_hr_tot_7(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 8:
                                        pseudo_hr_tot_8(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
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
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 2:
                                        hr_02(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 3:
                                        hr_03(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 4:
                                        hr_04(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 5:
                                        hr_11(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 6:
                                        hr_12(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 7:
                                        hr_13(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 8:
                                        hr_14(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 9:
                                        hr_21(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 10:
                                        hr_22(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 11:
                                        hr_23(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 12:
                                        hr_24(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 13:
                                        hr_31(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 14:
                                        hr_32(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 15:
                                        hr_33(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 16:
                                        hr_34(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 17:
                                        hr_41(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 18:
                                        hr_42(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 19:
                                        hr_43(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 20:
                                        hr_44(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the fourth one
                            if (l_l > 0) {
                                const unsigned kkk_index_begin =
                                    l_k * (l_k + 1) * (l_k + 2) / 6;
                                const unsigned kkk_index_end =
                                    (l_k + 1) * (l_k + 2) * (l_k + 3) / 6;
                                if (l_l == 1) {
                                    for (unsigned ij_index = 0;
                                         ij_index < ij_index_end;
                                         ++ij_index)
                                        for (unsigned k_index = kkk_index_begin;
                                             k_index < kkk_index_end;
                                             ++k_index) {
                                            *(DDD_b + ij_index * DDD_s12 +
                                              k_index * DDD_s) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  k_index * DDD_s + 1);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              k_index * DDD_s + 1) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  k_index * DDD_s + 2);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              k_index * DDD_s + 2) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  k_index * DDD_s + 3);
                                        }
                                } else {
                                    if (spherical_basis) {
                                        cart_to_spher_2(l_l,
                                                        kkk_index_begin,
                                                        kkk_index_end,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                    } else {
                                        cart_to_cart_2(l_l,
                                                       kkk_index_begin,
                                                       kkk_index_end,
                                                       0,
                                                       ij_index_end,
                                                       DDD_b,
                                                       DDD_s12,
                                                       DDD_s);
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the third one
                            if (l_k > 0) {
                                if (l_k == 1) {
                                    for (unsigned ij_index = 0;
                                         ij_index < ij_index_end;
                                         ++ij_index)
                                        for (unsigned l_index = 0;
                                             l_index < l_size;
                                             ++l_index) {
                                            *(DDD_b + ij_index * DDD_s12 +
                                              l_index) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  DDD_s + l_index);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              DDD_s + l_index) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  DDD_s + DDD_s + l_index);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              DDD_s + DDD_s + l_index) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  DDD_s + DDD_s + DDD_s +
                                                  l_index);
                                        }
                                } else {
                                    if (spherical_basis) {
                                        cart_to_spher_1(l_k,
                                                        l_size,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                    } else {
                                        cart_to_cart_1(l_k,
                                                       l_size,
                                                       0,
                                                       ij_index_end,
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
                                   j_size,
                                   k_size,
                                   l_size,
                                   size_1,
                                   size_2,
                                   size_3,
                                   size_4,
                                   n_i,
                                   n_j,
                                   n_k,
                                   n_l,
                                   swapped_1,
                                   swapped_2,
                                   swapped_12);

                            n_l += l_size;
                        }
                        n_k += k_size;
                    }
                    n_j += j_size;
                }
                n_i += i_size;
            }
        }

        void OS1TwoElectronIntegralEngine::calc_ssss_shells(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es2,
            const FlatBasisSet::Shell& es3,
            const FlatBasisSet::Shell& es4,
            double* results) const
        {
            const unsigned prim_size_1 = es1.primitive_exps.size();
            const unsigned prim_size_2 = es2.primitive_exps.size();
            const unsigned prim_size_3 = es3.primitive_exps.size();
            const unsigned prim_size_4 = es4.primitive_exps.size();
            const unsigned naive_size_1 = es1.naive_size;
            const unsigned naive_size_2 = es2.naive_size;
            const unsigned naive_size_3 = es3.naive_size;
            const unsigned naive_size_4 = es4.naive_size;

            const unsigned ket_prim_size = prim_size_3 * prim_size_4;
            const unsigned bra_prim_size = prim_size_1 * prim_size_2;
            const unsigned ket_naive_size = naive_size_3 * naive_size_4;
            const unsigned bra_naive_size = naive_size_1 * naive_size_2;

            const arma::vec& coords1 = es1.atom->coords;
            const arma::vec& coords2 = es2.atom->coords;
            const arma::vec& coords3 = es3.atom->coords;
            const arma::vec& coords4 = es4.atom->coords;

            double* memory_pointer = memory_pool.get();

            double* const A_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_exp_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_pq_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_p_coeff_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_exp_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_R_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_q_coeff_b = memory_pointer;
            memory_pointer += ket_prim_size;

            double* const CT_34_b = memory_pointer;
            memory_pointer += ket_naive_size * ket_prim_size;

            double* const A_b = memory_pointer;
            memory_pointer++;
            double* const AAAA_b = memory_pointer;
            memory_pointer += ket_naive_size;
            std::memset(
                results, 0, ket_naive_size * bra_naive_size * sizeof(double));

            double* const CT_12_b = memory_pointer;
            memory_pointer += bra_naive_size * bra_prim_size;

            const double* const CT_1_b =
                &es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_2_b =
                &es2.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &es3.prenormed_contraction_coeffs(0, 0);
            const double* const CT_4_b =
                &es4.prenormed_contraction_coeffs(0, 0);

            prepare_contraction(CT_1_b,
                                CT_2_b,
                                CT_12_b,
                                prim_size_1,
                                prim_size_2,
                                naive_size_1,
                                naive_size_2);

            prepare_contraction(CT_3_b,
                                CT_4_b,
                                CT_34_b,
                                prim_size_3,
                                prim_size_4,
                                naive_size_3,
                                naive_size_4);

            std::memset(A_p_coeff_b, 0, bra_prim_size * sizeof(double));
            std::memset(A_q_coeff_b, 0, ket_prim_size * sizeof(double));
            for (unsigned i = 0; i < bra_prim_size; ++i)
                for (unsigned j = 0; j < bra_naive_size; ++j)
                    if (std::abs(*(CT_12_b + i * bra_naive_size + j)) >
                        *(A_p_coeff_b + i))
                        *(A_p_coeff_b + i) =
                            std::abs(*(CT_12_b + i * bra_naive_size + j));

            for (unsigned i = 0; i < ket_prim_size; ++i)
                for (unsigned j = 0; j < ket_naive_size; ++j)
                    if (std::abs(*(CT_34_b + i * ket_naive_size + j)) >
                        *(A_q_coeff_b + i))
                        *(A_q_coeff_b + i) =
                            std::abs(*(CT_34_b + i * ket_naive_size + j));

            const double X_AB = coords1[0] - coords2[0];
            const double Y_AB = coords1[1] - coords2[1];
            const double Z_AB = coords1[2] - coords2[2];
            const double R_AB_2 = X_AB * X_AB + Y_AB * Y_AB + Z_AB * Z_AB;
            const double X_CD = coords3[0] - coords4[0];
            const double Y_CD = coords3[1] - coords4[1];
            const double Z_CD = coords3[2] - coords4[2];
            const double R_CD_2 = X_CD * X_CD + Y_CD * Y_CD + Z_CD * Z_CD;
            const double X_AC = coords1[0] - coords3[0];
            const double Y_AC = coords1[1] - coords3[1];
            const double Z_AC = coords1[2] - coords3[2];
            const double R_AC_2 = X_AC * X_AC + Y_AC * Y_AC + Z_AC * Z_AC;

            const double AB_dot_CD = X_AB * X_CD + Y_AB * Y_CD + Z_AB * Z_CD;
            const double AC_dot_CD = X_AC * X_CD + Y_AC * Y_CD + Z_AC * Z_CD;
            const double AB_dot_AC = X_AB * X_AC + Y_AB * Y_AC + Z_AB * Z_AC;

            double max_ket_estimator = 0;
            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double b = es2.primitive_exps[j];
                    const double p = es1.primitive_exps[i] + b;
                    const double b_over_p = b / p;
                    const double mu = es1.primitive_exps[i] * b_over_p;
                    *(A_p_b + ij_index) = p;
                    const double est1 =
                        two_pi_to_five_over_four * exp(-(mu * R_AB_2)) / p;
                    *(A_exp_p_b + ij_index) = est1;
                    *(A_p_coeff_b + ij_index) *= est1;
                    *(A_R_p_b + ij_index) =
                        R_AC_2 + b_over_p * (b_over_p * R_AB_2 - 2 * AB_dot_AC);
                    *(A_R_pq_b + ij_index) = -2 * b_over_p * AB_dot_CD;
                }
            for (unsigned i = 0, ij_index = 0; i < prim_size_3; ++i)
                for (unsigned j = 0; j < prim_size_4; ++j, ++ij_index) {
                    const double d = es4.primitive_exps[j];
                    const double q = es3.primitive_exps[i] + d;
                    const double d_over_q = d / q;
                    const double nu = es3.primitive_exps[i] * d_over_q;
                    *(A_q_b + ij_index) = q;
                    const double est1 =
                        two_pi_to_five_over_four * exp(-(nu * R_CD_2)) / q;
                    *(A_exp_q_b + ij_index) = est1;
                    *(A_q_coeff_b + ij_index) *= est1;
                    if (max_ket_estimator < *(A_q_coeff_b + ij_index))
                        max_ket_estimator = *(A_q_coeff_b + ij_index);
                    *(A_R_q_b + ij_index) =
                        d_over_q * (d_over_q * R_CD_2 + 2 * AC_dot_CD);
                }

            double prim_treshold = m_treshold / (ket_prim_size * bra_prim_size);

            // quick hack to be on a safe side of Schwartz inequality
            if (&es1 == &es3 && &es2 == &es4)
                prim_treshold = 0;

            // loop over primitives
            for (unsigned ij_index = 0; ij_index < bra_prim_size; ++ij_index) {
                const double coeff_ij = *(A_p_coeff_b + ij_index);
                if (coeff_ij * max_ket_estimator < prim_treshold)
                    continue;
                std::memset(AAAA_b, 0, ket_naive_size * sizeof(double));
                const double R_p = *(A_R_p_b + ij_index);
                const double R_pq = *(A_R_pq_b + ij_index);
                const double exp_ij = *(A_exp_p_b + ij_index);
                for (unsigned k = 0, kl_index = 0; k < prim_size_3; ++k)
                    for (unsigned l = 0; l < prim_size_4; ++l, ++kl_index) {
                        const double coeff_max =
                            coeff_ij * *(A_q_coeff_b + kl_index);
                        if (coeff_max < prim_treshold)
                            continue;
                        const double p = *(A_p_b + ij_index);
                        const double q = *(A_q_b + kl_index);
                        const double reverse_sqr_pq = 1 / sqrt(p + q);
                        const double prefactor =
                            exp_ij * *(A_exp_q_b + kl_index) * reverse_sqr_pq;
                        const double alpha =
                            p * q * reverse_sqr_pq * reverse_sqr_pq;
                        const double R_PQ_2 = R_p + *(A_R_q_b + kl_index) +
                                              es4.primitive_exps[l] * R_pq / q;
                        misc::fast_boys.generalized_boys(
                            0, alpha * R_PQ_2, prefactor, A_b);
                        const double* NIEDOIDA_RESTRICT CT_34_cur =
                            CT_34_b + kl_index * ket_naive_size;
                        double* NIEDOIDA_RESTRICT AAAA_cur = AAAA_b;
                        const double prim_int = *A_b;
                        const unsigned steps = ket_naive_size / 4;
                        const unsigned overflow = ket_naive_size % 4;
                        for (unsigned i = 0; i < overflow; ++i)
                            *AAAA_cur++ += prim_int * *CT_34_cur++;
                        for (unsigned i = 0; i < steps;
                             ++i, AAAA_cur += 4, CT_34_cur += 4) {
                            AAAA_cur[0] += prim_int * CT_34_cur[0];
                            AAAA_cur[1] += prim_int * CT_34_cur[1];
                            AAAA_cur[2] += prim_int * CT_34_cur[2];
                            AAAA_cur[3] += prim_int * CT_34_cur[3];
                        }
                    }
                general_contraction(CT_12_b + ij_index * bra_naive_size,
                                    results,
                                    AAAA_b,
                                    ket_naive_size,
                                    bra_naive_size);
            }
        }

        void OS1TwoElectronIntegralEngine::calc_total_l_1_shells(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es2,
            const FlatBasisSet::Shell& es3,
            const FlatBasisSet::Shell& es4,
            double* results) const
        {
            // swapping needed to assure proper order
            const FlatBasisSet::Shell *shell_1_pointer = &es1,
                                      *shell_2_pointer = &es2,
                                      *shell_3_pointer = &es3,
                                      *shell_4_pointer = &es4;
            const FlatBasisSet::Shell* tmp_pointer;

            const bool swapped_1 = (es1.l_max < es2.l_max);
            const bool swapped_2 = (es3.l_max < es4.l_max);
            const bool swapped_12 =
                (es1.l_max + es2.l_max < es3.l_max + es4.l_max);

            // swapping first pair
            if (swapped_1) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_2_pointer;
                shell_2_pointer = tmp_pointer;
            }
            // swapping second pair
            if (swapped_2) {
                tmp_pointer = shell_3_pointer;
                shell_3_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // swapping pairs
            if (swapped_12) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_3_pointer;
                shell_3_pointer = tmp_pointer;
                tmp_pointer = shell_2_pointer;
                shell_2_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // references initializing
            const FlatBasisSet::Shell &ref_es1 = *shell_1_pointer,
                                      &ref_es2 = *shell_2_pointer,
                                      &ref_es3 = *shell_3_pointer,
                                      &ref_es4 = *shell_4_pointer;
            // end of swapping

            // preparing some constants
            const unsigned prim_size_1 = ref_es1.primitive_exps.size();
            const unsigned prim_size_2 = ref_es2.primitive_exps.size();
            const unsigned prim_size_3 = ref_es3.primitive_exps.size();
            const unsigned prim_size_4 = ref_es4.primitive_exps.size();
            const unsigned naive_size_1 = ref_es1.naive_size;
            const unsigned naive_size_2 = ref_es2.naive_size;
            const unsigned naive_size_3 = ref_es3.naive_size;
            const unsigned naive_size_4 = ref_es4.naive_size;
            const unsigned size_1 = ref_es1.size;

            const unsigned ket_naive_size = naive_size_3 * naive_size_4;
            const unsigned ket_prim_size = prim_size_3 * prim_size_4;
            const unsigned bra_naive_size = naive_size_1 * naive_size_2;
            const unsigned bra_prim_size = prim_size_1 * prim_size_2;

            const bool segmented_ket = (ket_naive_size == 1);
            const bool segmented_bra = (bra_naive_size == 1);

            double* memory_pointer = memory_pool.get();
            double* const A_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_minus_b_over_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_exp_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_pq_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_p_coeff_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_d_over_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_exp_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_R_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_q_coeff_b = memory_pointer;
            memory_pointer += ket_prim_size;

            double* const A_b = memory_pointer;
            memory_pointer += 3;
            double* const CT_34_b = memory_pointer;
            memory_pointer += ket_naive_size * ket_prim_size;
            double* const AA_b = memory_pointer;
            const unsigned AA_total_size = ket_naive_size * 4;
            memory_pointer += AA_total_size;
            double* const CT_12_b = memory_pointer;
            memory_pointer += bra_naive_size * bra_prim_size;
            double* const BBB_b = memory_pointer;
            const unsigned BBB_total_size = AA_total_size * bra_naive_size;
            memory_pointer += BBB_total_size;
            std::memset(BBB_b, 0, BBB_total_size * sizeof(double));
            double* const C_b = memory_pointer;
            memory_pointer += 3;

            // setting two center (or pair of primitives) quantites
            const double X_AB =
                ref_es1.atom->coords[0] - ref_es2.atom->coords[0];
            const double Y_AB =
                ref_es1.atom->coords[1] - ref_es2.atom->coords[1];
            const double Z_AB =
                ref_es1.atom->coords[2] - ref_es2.atom->coords[2];
            const double R_AB_2 = X_AB * X_AB + Y_AB * Y_AB + Z_AB * Z_AB;
            const double X_CD =
                ref_es3.atom->coords[0] - ref_es4.atom->coords[0];
            const double Y_CD =
                ref_es3.atom->coords[1] - ref_es4.atom->coords[1];
            const double Z_CD =
                ref_es3.atom->coords[2] - ref_es4.atom->coords[2];
            const double R_CD_2 = X_CD * X_CD + Y_CD * Y_CD + Z_CD * Z_CD;
            const double X_AC =
                ref_es1.atom->coords[0] - ref_es3.atom->coords[0];
            const double Y_AC =
                ref_es1.atom->coords[1] - ref_es3.atom->coords[1];
            const double Z_AC =
                ref_es1.atom->coords[2] - ref_es3.atom->coords[2];
            const double R_AC_2 = X_AC * X_AC + Y_AC * Y_AC + Z_AC * Z_AC;

            const double AB_dot_CD = X_AB * X_CD + Y_AB * Y_CD + Z_AB * Z_CD;
            const double AC_dot_CD = X_AC * X_CD + Y_AC * Y_CD + Z_AC * Z_CD;
            const double AB_dot_AC = X_AB * X_AC + Y_AB * Y_AC + Z_AB * Z_AC;

            double max_ket_estimator = 0;
            const double global_bra_estimator = std::max(1e0, R_AB_2);
            // preparing contractions
            const double* const CT_1_b =
                &ref_es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_2_b =
                &ref_es2.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &ref_es3.prenormed_contraction_coeffs(0, 0);
            const double* const CT_4_b =
                &ref_es4.prenormed_contraction_coeffs(0, 0);
            double* CT_12_cur = CT_12_b;
            double* CT_34_cur = CT_34_b;

            prepare_contraction(CT_1_b,
                                CT_2_b,
                                CT_12_cur,
                                prim_size_1,
                                prim_size_2,
                                naive_size_1,
                                naive_size_2);

            prepare_contraction(CT_3_b,
                                CT_4_b,
                                CT_34_cur,
                                prim_size_3,
                                prim_size_4,
                                naive_size_3,
                                naive_size_4);

            std::memset(A_p_coeff_b, 0, bra_prim_size * sizeof(double));
            std::memset(A_q_coeff_b, 0, ket_prim_size * sizeof(double));
            for (unsigned i = 0; i < bra_prim_size; ++i)
                for (unsigned j = 0; j < bra_naive_size; ++j)
                    if (std::abs(*(CT_12_b + i * bra_naive_size + j)) >
                        *(A_p_coeff_b + i))
                        *(A_p_coeff_b + i) =
                            std::abs(*(CT_12_b + i * bra_naive_size + j));

            for (unsigned i = 0; i < ket_prim_size; ++i)
                for (unsigned j = 0; j < ket_naive_size; ++j)
                    if (std::abs(*(CT_34_b + i * ket_naive_size + j)) >
                        *(A_q_coeff_b + i))
                        *(A_q_coeff_b + i) =
                            std::abs(*(CT_34_b + i * ket_naive_size + j));

            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double b = ref_es2.primitive_exps[j];
                    const double p = ref_es1.primitive_exps[i] + b;
                    const double b_over_p = b / p;
                    const double mu = ref_es1.primitive_exps[i] * b_over_p;
                    *(A_p_b + ij_index) = p;
                    *(A_minus_b_over_p_b + ij_index) = -b_over_p;
                    const double est1 =
                        two_pi_to_five_over_four * exp(-(mu * R_AB_2)) / p;
                    *(A_exp_p_b + ij_index) = est1;
                    *(A_p_coeff_b + ij_index) *=
                        est1 * std::max(global_bra_estimator, 1 / p);
                    *(A_R_p_b + ij_index) =
                        R_AC_2 + b_over_p * (b_over_p * R_AB_2 - 2 * AB_dot_AC);
                    *(A_R_pq_b + ij_index) = -2 * b_over_p * AB_dot_CD;
                }
            for (unsigned i = 0, ij_index = 0; i < prim_size_3; ++i)
                for (unsigned j = 0; j < prim_size_4; ++j, ++ij_index) {
                    const double d = ref_es4.primitive_exps[j];
                    const double q = ref_es3.primitive_exps[i] + d;
                    const double d_over_q = d / q;
                    const double nu = ref_es3.primitive_exps[i] * d_over_q;
                    *(A_q_b + ij_index) = q;
                    *(A_d_over_q_b + ij_index) = d_over_q;
                    const double est1 =
                        two_pi_to_five_over_four * exp(-(nu * R_CD_2)) / q;
                    *(A_exp_q_b + ij_index) = est1;
                    *(A_q_coeff_b + ij_index) *= est1;
                    if (max_ket_estimator < *(A_q_coeff_b + ij_index))
                        max_ket_estimator = *(A_q_coeff_b + ij_index);
                    *(A_R_q_b + ij_index) =
                        d_over_q * (d_over_q * R_CD_2 + 2 * AC_dot_CD);
                }

            double prim_treshold = m_treshold / (ket_prim_size * bra_prim_size);

            // quick hack to be on a safe side of Schwartz inequality
            if (&es1 == &es3 && &es2 == &es4)
                prim_treshold = 0;

            // loop over quartets of primitives
            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double coeff_ij = *(A_p_coeff_b + ij_index);
                    if (coeff_ij * max_ket_estimator < prim_treshold)
                        continue;
                    const double exp_ij = *(A_exp_p_b + ij_index);
                    const double p = *(A_p_b + ij_index);
                    const double minus_b_over_p =
                        *(A_minus_b_over_p_b + ij_index);
                    const double R_p = *(A_R_p_b + ij_index);
                    const double R_pq = *(A_R_pq_b + ij_index);
                    const double* CT_12_cur =
                        CT_12_b + ij_index * bra_naive_size;
                    std::memset(AA_b, 0, AA_total_size * sizeof(double));
                    for (unsigned k = 0, kl_index = 0; k < prim_size_3; ++k)
                        for (unsigned l = 0; l < prim_size_4; ++l, ++kl_index) {
                            const double coeff_max =
                                coeff_ij * *(A_q_coeff_b + kl_index);
                            if (coeff_max < prim_treshold)
                                continue;
                            const double* CT_34_cur =
                                CT_34_b + kl_index * ket_naive_size;
                            const double q = *(A_q_b + kl_index);
                            const double reverse_pr = 1 / (p + q);
                            const double reverse_sqr_pr = sqrt(reverse_pr);
                            double prefactor = exp_ij *
                                               *(A_exp_q_b + kl_index) *
                                               reverse_sqr_pr;
                            const double d_over_q = *(A_d_over_q_b + kl_index);
                            const double alpha_over_p = q * reverse_pr;
                            const double arg =
                                alpha_over_p * p *
                                (R_p + *(A_R_q_b + kl_index) + d_over_q * R_pq);
                            if (segmented_ket)
                                prefactor *= *CT_34_cur;
                            if (segmented_bra)
                                prefactor *= *CT_12_cur;
                            misc::fast_boys.generalized_boys(
                                1, arg, prefactor, A_b);
                            const double f0 = *A_b;
                            const double f1 = -alpha_over_p * *(A_b + 1);
                            const double f2 = d_over_q * f1;

                            // contracting ket pair
                            if (segmented_ket) {
                                *AA_b += f0;
                                *(AA_b + 1) += f1;
                                *(AA_b + 2) += f2;
                            } else {
                                double* NIEDOIDA_RESTRICT AAkk = AA_b;
                                for (unsigned kk = 0; kk < ket_naive_size;
                                     ++kk, ++CT_34_cur) {
                                    const double factor = *CT_34_cur;
                                    *AAkk++ += factor * f0;
                                    *AAkk++ += factor * f1;
                                    *AAkk++ += factor * f2;
                                    AAkk++;
                                }
                            }
                        }
                    // bra loop
                    for (unsigned kk = 0; kk < ket_naive_size; ++kk) {
                        *(AA_b + kk * 4 + 3) =
                            minus_b_over_p *
                            (*(AA_b + kk * 4) + *(AA_b + kk * 4 + 1));
                    }
                    // contracting bra pair
                    if (segmented_bra) {
                        segmented_contraction(BBB_b, AA_b, ket_naive_size * 4);
                    } else {
                        general_contraction(CT_12_cur,
                                            BBB_b,
                                            AA_b,
                                            AA_total_size,
                                            bra_naive_size);
                    }
                }
            const double* BBB_cur = BBB_b;
            // loop over quartets of contractions
            unsigned n_i = 0;
            for (unsigned i = 0; i < naive_size_1; ++i) {
                const unsigned l_i = ref_es1.l[i];
                const unsigned i_size = 2 * l_i + 1;
                unsigned n_j = 0;
                for (unsigned j = 0; j < naive_size_2; ++j) {
                    unsigned n_k = 0;
                    for (unsigned k = 0; k < naive_size_3; ++k) {
                        unsigned n_l = 0;
                        for (unsigned l = 0; l < naive_size_4;
                             ++l, BBB_cur += 4) {
                            if (l_i) {
                                *C_b = X_AB * *(BBB_cur + 3) +
                                       X_AC * *(BBB_cur + 1) +
                                       X_CD * *(BBB_cur + 2);
                                *(C_b + 1) = Y_AB * *(BBB_cur + 3) +
                                             Y_AC * *(BBB_cur + 1) +
                                             Y_CD * *(BBB_cur + 2);
                                *(C_b + 2) = Z_AB * *(BBB_cur + 3) +
                                             Z_AC * *(BBB_cur + 1) +
                                             Z_CD * *(BBB_cur + 2);
                                unswap(C_b,
                                       1,
                                       1,
                                       results,
                                       3,
                                       1,
                                       1,
                                       1,
                                       size_1,
                                       naive_size_2,
                                       naive_size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                            } else {
                                *C_b = *BBB_cur;
                                unswap(C_b,
                                       1,
                                       1,
                                       results,
                                       1,
                                       1,
                                       1,
                                       1,
                                       size_1,
                                       naive_size_2,
                                       naive_size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                            }
                            n_l++;
                        }
                        n_k++;
                    }
                    n_j++;
                }
                n_i += i_size;
            }
        }

        void OS1TwoElectronIntegralEngine::calc_bra_l_2_ket_l_0_shells(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es2,
            const FlatBasisSet::Shell& es3,
            const FlatBasisSet::Shell& es4,
            double* results) const
        {
            // swapping needed to assure proper order
            const FlatBasisSet::Shell *shell_1_pointer = &es1,
                                      *shell_2_pointer = &es2,
                                      *shell_3_pointer = &es3,
                                      *shell_4_pointer = &es4;
            const FlatBasisSet::Shell* tmp_pointer;

            const bool swapped_1 = (es1.l_max < es2.l_max);
            const bool swapped_2 = (es3.l_max < es4.l_max);
            const bool swapped_12 =
                (es1.l_max + es2.l_max < es3.l_max + es4.l_max);

            // swapping first pair
            if (swapped_1) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_2_pointer;
                shell_2_pointer = tmp_pointer;
            }
            // swapping second pair
            if (swapped_2) {
                tmp_pointer = shell_3_pointer;
                shell_3_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // swapping pairs
            if (swapped_12) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_3_pointer;
                shell_3_pointer = tmp_pointer;
                tmp_pointer = shell_2_pointer;
                shell_2_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // references initializing
            const FlatBasisSet::Shell &ref_es1 = *shell_1_pointer,
                                      &ref_es2 = *shell_2_pointer,
                                      &ref_es3 = *shell_3_pointer,
                                      &ref_es4 = *shell_4_pointer;
            // end of swapping

            // preparing some constants
            const unsigned prim_size_1 = ref_es1.primitive_exps.size();
            const unsigned prim_size_2 = ref_es2.primitive_exps.size();
            const unsigned prim_size_3 = ref_es3.primitive_exps.size();
            const unsigned prim_size_4 = ref_es4.primitive_exps.size();
            const unsigned naive_size_1 = ref_es1.naive_size;
            const unsigned naive_size_2 = ref_es2.naive_size;
            const unsigned naive_size_3 = ref_es3.naive_size;
            const unsigned naive_size_4 = ref_es4.naive_size;
            const unsigned size_1 = ref_es1.size;
            const unsigned size_2 = ref_es2.size;

            const unsigned ket_naive_size = naive_size_3 * naive_size_4;
            const unsigned ket_prim_size = prim_size_3 * prim_size_4;
            const unsigned bra_naive_size = naive_size_1 * naive_size_2;
            const unsigned bra_prim_size = prim_size_1 * prim_size_2;

            const bool segmented_ket = (ket_naive_size == 1);
            const bool segmented_bra = (bra_naive_size == 1);
            double* memory_pointer = memory_pool.get();
            double* const A_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_minus_b_over_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_exp_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_pq_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_p_coeff_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_d_over_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_exp_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_R_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_q_coeff_b = memory_pointer;
            memory_pointer += ket_prim_size;

            double* const A_b = memory_pointer;
            memory_pointer += 6;
            double* const CT_34_b = memory_pointer;
            memory_pointer += ket_naive_size * ket_prim_size;
            double* const AA_b = memory_pointer;
            const unsigned AA_total_size = ket_naive_size * 11;
            memory_pointer += AA_total_size;
            double* const CT_12_b = memory_pointer;
            memory_pointer += bra_naive_size * bra_prim_size;
            double* const BBB_b = memory_pointer;
            const unsigned BBB_total_size = AA_total_size * bra_naive_size;
            memory_pointer += BBB_total_size;
            std::memset(BBB_b, 0, BBB_total_size * sizeof(double));
            double* const C_b = memory_pointer;
            memory_pointer += 10;

            // setting two center (or pair of primitives) quantites
            const double X_AB =
                ref_es1.atom->coords[0] - ref_es2.atom->coords[0];
            const double Y_AB =
                ref_es1.atom->coords[1] - ref_es2.atom->coords[1];
            const double Z_AB =
                ref_es1.atom->coords[2] - ref_es2.atom->coords[2];
            const double R_AB_2 = X_AB * X_AB + Y_AB * Y_AB + Z_AB * Z_AB;
            const double X_CD =
                ref_es3.atom->coords[0] - ref_es4.atom->coords[0];
            const double Y_CD =
                ref_es3.atom->coords[1] - ref_es4.atom->coords[1];
            const double Z_CD =
                ref_es3.atom->coords[2] - ref_es4.atom->coords[2];
            const double R_CD_2 = X_CD * X_CD + Y_CD * Y_CD + Z_CD * Z_CD;
            const double X_AC =
                ref_es1.atom->coords[0] - ref_es3.atom->coords[0];
            const double Y_AC =
                ref_es1.atom->coords[1] - ref_es3.atom->coords[1];
            const double Z_AC =
                ref_es1.atom->coords[2] - ref_es3.atom->coords[2];
            const double R_AC_2 = X_AC * X_AC + Y_AC * Y_AC + Z_AC * Z_AC;

            const double AB_dot_CD = X_AB * X_CD + Y_AB * Y_CD + Z_AB * Z_CD;
            const double AC_dot_CD = X_AC * X_CD + Y_AC * Y_CD + Z_AC * Z_CD;
            const double AB_dot_AC = X_AB * X_AC + Y_AB * Y_AC + Z_AB * Z_AC;

            const double global_bra_estimator = std::max(1e0, R_AB_2);
            double max_ket_estimator = 0;

            // preparing contractions
            const double* const CT_1_b =
                &ref_es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_2_b =
                &ref_es2.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &ref_es3.prenormed_contraction_coeffs(0, 0);
            const double* const CT_4_b =
                &ref_es4.prenormed_contraction_coeffs(0, 0);
            double* CT_12_c = CT_12_b;
            double* CT_34_c = CT_34_b;

            prepare_contraction(CT_1_b,
                                CT_2_b,
                                CT_12_c,
                                prim_size_1,
                                prim_size_2,
                                naive_size_1,
                                naive_size_2);

            prepare_contraction(CT_3_b,
                                CT_4_b,
                                CT_34_c,
                                prim_size_3,
                                prim_size_4,
                                naive_size_3,
                                naive_size_4);

            std::memset(A_p_coeff_b, 0, bra_prim_size * sizeof(double));
            std::memset(A_q_coeff_b, 0, ket_prim_size * sizeof(double));
            for (unsigned i = 0; i < bra_prim_size; ++i)
                for (unsigned j = 0; j < bra_naive_size; ++j)
                    if (std::abs(*(CT_12_b + i * bra_naive_size + j)) >
                        *(A_p_coeff_b + i))
                        *(A_p_coeff_b + i) =
                            std::abs(*(CT_12_b + i * bra_naive_size + j));

            for (unsigned i = 0; i < ket_prim_size; ++i)
                for (unsigned j = 0; j < ket_naive_size; ++j)
                    if (std::abs(*(CT_34_b + i * ket_naive_size + j)) >
                        *(A_q_coeff_b + i))
                        *(A_q_coeff_b + i) =
                            std::abs(*(CT_34_b + i * ket_naive_size + j));

            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double b = ref_es2.primitive_exps[j];
                    const double p = ref_es1.primitive_exps[i] + b;
                    const double b_over_p = b / p;
                    const double mu = ref_es1.primitive_exps[i] * b_over_p;
                    *(A_p_b + ij_index) = p;
                    *(A_minus_b_over_p_b + ij_index) = -b_over_p;
                    const double est1 =
                        two_pi_to_five_over_four * exp(-(mu * R_AB_2)) / p;
                    *(A_exp_p_b + ij_index) = est1;
                    *(A_p_coeff_b + ij_index) *=
                        est1 * std::max(global_bra_estimator, 1 / p);
                    *(A_R_p_b + ij_index) =
                        R_AC_2 + b_over_p * (b_over_p * R_AB_2 - 2 * AB_dot_AC);
                    *(A_R_pq_b + ij_index) = -2 * b_over_p * AB_dot_CD;
                }
            for (unsigned i = 0, ij_index = 0; i < prim_size_3; ++i)
                for (unsigned j = 0; j < prim_size_4; ++j, ++ij_index) {
                    const double d = ref_es4.primitive_exps[j];
                    const double q = ref_es3.primitive_exps[i] + d;
                    const double d_over_q = d / q;
                    const double nu = ref_es3.primitive_exps[i] * d_over_q;
                    *(A_q_b + ij_index) = q;
                    const double est1 =
                        two_pi_to_five_over_four * exp(-(nu * R_CD_2)) / q;
                    *(A_exp_q_b + ij_index) = est1;
                    *(A_q_coeff_b + ij_index) *= est1;
                    if (max_ket_estimator < *(A_q_coeff_b + ij_index))
                        max_ket_estimator = *(A_q_coeff_b + ij_index);
                    *(A_d_over_q_b + ij_index) = d_over_q;
                    *(A_R_q_b + ij_index) =
                        d_over_q * (d_over_q * R_CD_2 + 2 * AC_dot_CD);
                }

            double prim_treshold = m_treshold / (ket_prim_size * bra_prim_size);

            // quick hack to be on a safe side of Schwartz inequality
            if (&es1 == &es3 && &es2 == &es4)
                prim_treshold = 0;

            // loop over quartets of primitives
            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double coeff_ij = *(A_p_coeff_b + ij_index);
                    if (coeff_ij * max_ket_estimator < prim_treshold)
                        continue;
                    const double exp_ij = *(A_exp_p_b + ij_index);
                    const double p = *(A_p_b + ij_index);
                    const double minus_b_over_p =
                        *(A_minus_b_over_p_b + ij_index);
                    const double R_p = *(A_R_p_b + ij_index);
                    const double R_pq = *(A_R_pq_b + ij_index);
                    const double* CT_12_cur =
                        CT_12_b + ij_index * bra_naive_size;
                    std::memset(AA_b, 0, AA_total_size * sizeof(double));
                    for (unsigned k = 0, kl_index = 0; k < prim_size_3; ++k)
                        for (unsigned l = 0; l < prim_size_4; ++l, ++kl_index) {
                            const double coeff_max =
                                coeff_ij * *(A_q_coeff_b + kl_index);
                            if (coeff_max < prim_treshold)
                                continue;
                            const double* CT_34_cur =
                                CT_34_b + kl_index * ket_naive_size;
                            const double q = *(A_q_b + kl_index);
                            const double reverse_pr = 1 / (p + q);
                            const double reverse_sqr_pr = sqrt(reverse_pr);
                            double prefactor = exp_ij *
                                               *(A_exp_q_b + kl_index) *
                                               reverse_sqr_pr;
                            const double d_over_q = *(A_d_over_q_b + kl_index);
                            const double alpha_over_p = q * reverse_pr;
                            const double arg =
                                alpha_over_p * p *
                                (R_p + *(A_R_q_b + kl_index) + d_over_q * R_pq);
                            if (segmented_ket)
                                prefactor *= *CT_34_cur;
                            if (segmented_bra)
                                prefactor *= *CT_12_cur;
                            misc::fast_boys.generalized_boys(
                                2, arg, prefactor, A_b);
                            const double f0 = *A_b;
                            const double f1 = -alpha_over_p * *(A_b + 1);
                            const double f2 =
                                alpha_over_p * alpha_over_p * *(A_b + 2);
                            const double f3 = d_over_q * f1;
                            const double f4 = d_over_q * f2;
                            const double f5 = d_over_q * f4;

                            // contracting ket pair
                            if (segmented_ket) {
                                *AA_b += f0;
                                *(AA_b + 1) += f1;
                                *(AA_b + 2) += f2;
                                *(AA_b + 3) += f3;
                                *(AA_b + 4) += f4;
                                *(AA_b + 5) += f5;
                            } else {
                                for (unsigned kk = 0; kk < ket_naive_size;
                                     ++kk, ++CT_34_cur) {
                                    const double factor = *CT_34_cur;
                                    *(AA_b + 11 * kk) += factor * f0;
                                    *(AA_b + 11 * kk + 1) += factor * f1;
                                    *(AA_b + 11 * kk + 2) += factor * f2;
                                    *(AA_b + 11 * kk + 3) += factor * f3;
                                    *(AA_b + 11 * kk + 4) += factor * f4;
                                    *(AA_b + 11 * kk + 5) += factor * f5;
                                }
                            }
                        }
                    // bra loop
                    for (unsigned kk = 0; kk < ket_naive_size; ++kk) {
                        const double tmp =
                            *(AA_b + kk * 11) + *(AA_b + kk * 11 + 1);
                        const double tmp1 =
                            *(AA_b + kk * 11 + 1) + *(AA_b + kk * 11 + 2);
                        *(AA_b + kk * 11 + 6) = tmp / (2 * p);
                        *(AA_b + kk * 11 + 7) = minus_b_over_p * tmp;
                        *(AA_b + kk * 11 + 8) =
                            (tmp + tmp1) * minus_b_over_p * minus_b_over_p;
                        *(AA_b + kk * 11 + 9) = minus_b_over_p * tmp1;
                        *(AA_b + kk * 11 + 10) =
                            minus_b_over_p *
                            (*(AA_b + kk * 11 + 3) + *(AA_b + kk * 11 + 4));
                    }
                    // contracting bra pair
                    if (segmented_bra) {
                        segmented_contraction(BBB_b, AA_b, ket_naive_size * 11);
                    } else {
                        general_contraction(CT_12_cur,
                                            BBB_b,
                                            AA_b,
                                            AA_total_size,
                                            bra_naive_size);
                    }
                }

            const double* BBB_cur = BBB_b;
            // loop over quartets of contractions
            unsigned n_i = 0;
            for (unsigned i = 0; i < naive_size_1; ++i) {
                const unsigned l_i = ref_es1.l[i];
                const unsigned i_size =
                    (spherical_basis ? l_i + l_i + 1
                                     : (l_i + 1) * (l_i + 2) / 2);
                unsigned n_j = 0;
                for (unsigned j = 0; j < naive_size_2; ++j) {
                    const unsigned l_j = ref_es2.l[j];
                    const unsigned j_size = l_j + l_j + 1;
                    unsigned n_k = 0;
                    for (unsigned k = 0; k < naive_size_3; ++k) {
                        unsigned n_l = 0;
                        for (unsigned l = 0; l < naive_size_4;
                             ++l, BBB_cur += 11) {
                            const unsigned funny = 2 * l_i + l_j;
                            double C1, C2, C3, C4, C5, C6, C7, C8, C9;
                            double D1, D2, D3, D4, D5, D6, D7, D8, D9;

                            switch (funny) {
                            case 0:
                                *C_b = *BBB_cur;
                                unswap(C_b,
                                       1,
                                       1,
                                       results,
                                       1,
                                       1,
                                       1,
                                       1,
                                       size_1,
                                       size_2,
                                       naive_size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                                break;
                            case 1:
                                *C_b = X_AB * (*BBB_cur + *(BBB_cur + 7)) +
                                       X_AC * *(BBB_cur + 1) +
                                       X_CD * *(BBB_cur + 3);
                                *(C_b + 1) =
                                    Y_AB * (*BBB_cur + *(BBB_cur + 7)) +
                                    Y_AC * *(BBB_cur + 1) +
                                    Y_CD * *(BBB_cur + 3);
                                *(C_b + 2) =
                                    Z_AB * (*BBB_cur + *(BBB_cur + 7)) +
                                    Z_AC * *(BBB_cur + 1) +
                                    Z_CD * *(BBB_cur + 3);
                                unswap(C_b,
                                       1,
                                       1,
                                       results,
                                       1,
                                       3,
                                       1,
                                       1,
                                       size_1,
                                       size_2,
                                       naive_size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                                break;
                            case 2:
                                *C_b = X_AB * *(BBB_cur + 7) +
                                       X_AC * *(BBB_cur + 1) +
                                       X_CD * *(BBB_cur + 3);
                                *(C_b + 1) = Y_AB * *(BBB_cur + 7) +
                                             Y_AC * *(BBB_cur + 1) +
                                             Y_CD * *(BBB_cur + 3);
                                *(C_b + 2) = Z_AB * *(BBB_cur + 7) +
                                             Z_AC * *(BBB_cur + 1) +
                                             Z_CD * *(BBB_cur + 3);
                                unswap(C_b,
                                       1,
                                       1,
                                       results,
                                       3,
                                       1,
                                       1,
                                       1,
                                       size_1,
                                       size_2,
                                       naive_size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                                break;
                            case 3:
                                D1 = X_AB * *(BBB_cur + 7) +
                                     X_AC * *(BBB_cur + 1) +
                                     X_CD * *(BBB_cur + 3);
                                D2 = Y_AB * *(BBB_cur + 7) +
                                     Y_AC * *(BBB_cur + 1) +
                                     Y_CD * *(BBB_cur + 3);
                                D3 = Z_AB * *(BBB_cur + 7) +
                                     Z_AC * *(BBB_cur + 1) +
                                     Z_CD * *(BBB_cur + 3);
                                C1 = X_AB * *(BBB_cur + 8) +
                                     X_AC * *(BBB_cur + 9) +
                                     X_CD * *(BBB_cur + 10);
                                C2 = Y_AB * *(BBB_cur + 8) +
                                     Y_AC * *(BBB_cur + 9) +
                                     Y_CD * *(BBB_cur + 10);
                                C3 = Z_AB * *(BBB_cur + 8) +
                                     Z_AC * *(BBB_cur + 9) +
                                     Z_CD * *(BBB_cur + 10);
                                C4 = X_AB * *(BBB_cur + 9) +
                                     X_AC * *(BBB_cur + 2) +
                                     X_CD * *(BBB_cur + 4);
                                C5 = Y_AB * *(BBB_cur + 9) +
                                     Y_AC * *(BBB_cur + 2) +
                                     Y_CD * *(BBB_cur + 4);
                                C6 = Z_AB * *(BBB_cur + 9) +
                                     Z_AC * *(BBB_cur + 2) +
                                     Z_CD * *(BBB_cur + 4);
                                C7 = X_AB * *(BBB_cur + 10) +
                                     X_AC * *(BBB_cur + 4) +
                                     X_CD * *(BBB_cur + 5);
                                C8 = Y_AB * *(BBB_cur + 10) +
                                     Y_AC * *(BBB_cur + 4) +
                                     Y_CD * *(BBB_cur + 5);
                                C9 = Z_AB * *(BBB_cur + 10) +
                                     Z_AC * *(BBB_cur + 4) +
                                     Z_CD * *(BBB_cur + 5);
                                D4 = X_AB * C1 + X_AC * C4 + X_CD * C7 +
                                     *(BBB_cur + 6);
                                D5 = Y_AB * C1 + Y_AC * C4 + Y_CD * C7;
                                D6 = Z_AB * C1 + Z_AC * C4 + Z_CD * C7;
                                D7 = Y_AB * C2 + Y_AC * C5 + Y_CD * C8 +
                                     *(BBB_cur + 6);
                                D8 = Z_AB * C2 + Z_AC * C5 + Z_CD * C8;
                                D9 = Z_AB * C3 + Z_AC * C6 + Z_CD * C9 +
                                     *(BBB_cur + 6);

                                *C_b = D4 + X_AB * D1;
                                *(C_b + 1) = D5 + Y_AB * D1;
                                *(C_b + 2) = D6 + Z_AB * D1;
                                *(C_b + 3) = D5 + X_AB * D2;
                                *(C_b + 4) = D7 + Y_AB * D2;
                                *(C_b + 5) = D8 + Z_AB * D2;
                                *(C_b + 6) = D6 + X_AB * D3;
                                *(C_b + 7) = D8 + Y_AB * D3;
                                *(C_b + 8) = D9 + Z_AB * D3;
                                unswap(C_b,
                                       1,
                                       1,
                                       results,
                                       3,
                                       3,
                                       1,
                                       1,
                                       size_1,
                                       size_2,
                                       naive_size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                                break;
                            case 4:
                                C1 = X_AB * *(BBB_cur + 8) +
                                     X_AC * *(BBB_cur + 9) +
                                     X_CD * *(BBB_cur + 10);
                                C2 = Y_AB * *(BBB_cur + 8) +
                                     Y_AC * *(BBB_cur + 9) +
                                     Y_CD * *(BBB_cur + 10);
                                C3 = Z_AB * *(BBB_cur + 8) +
                                     Z_AC * *(BBB_cur + 9) +
                                     Z_CD * *(BBB_cur + 10);
                                C4 = X_AB * *(BBB_cur + 9) +
                                     X_AC * *(BBB_cur + 2) +
                                     X_CD * *(BBB_cur + 4);
                                C5 = Y_AB * *(BBB_cur + 9) +
                                     Y_AC * *(BBB_cur + 2) +
                                     Y_CD * *(BBB_cur + 4);
                                C6 = Z_AB * *(BBB_cur + 9) +
                                     Z_AC * *(BBB_cur + 2) +
                                     Z_CD * *(BBB_cur + 4);
                                C7 = X_AB * *(BBB_cur + 10) +
                                     X_AC * *(BBB_cur + 4) +
                                     X_CD * *(BBB_cur + 5);
                                C8 = Y_AB * *(BBB_cur + 10) +
                                     Y_AC * *(BBB_cur + 4) +
                                     Y_CD * *(BBB_cur + 5);
                                C9 = Z_AB * *(BBB_cur + 10) +
                                     Z_AC * *(BBB_cur + 4) +
                                     Z_CD * *(BBB_cur + 5);
                                *(C_b + 4) = X_AB * C1 + X_AC * C4 + X_CD * C7 +
                                             *(BBB_cur + 6);
                                *(C_b + 5) = Y_AB * C1 + Y_AC * C4 + Y_CD * C7;
                                *(C_b + 6) = Z_AB * C1 + Z_AC * C4 + Z_CD * C7;
                                *(C_b + 7) = Y_AB * C2 + Y_AC * C5 + Y_CD * C8 +
                                             *(BBB_cur + 6);
                                *(C_b + 8) = Z_AB * C2 + Z_AC * C5 + Z_CD * C8;
                                *(C_b + 9) = Z_AB * C3 + Z_AC * C6 + Z_CD * C9 +
                                             *(BBB_cur + 6);
                                if (spherical_basis) {
                                    cart_to_spher_1(2, 1, 0, 1, C_b, 1, 1);
                                } else {
                                    cart_to_cart_1(2, 1, 0, 1, C_b, 1, 1);
                                }
                                unswap(C_b,
                                       1,
                                       1,
                                       results,
                                       i_size,
                                       1,
                                       1,
                                       1,
                                       size_1,
                                       size_2,
                                       naive_size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                                break;
                            }
                            n_l++;
                        }
                        n_k++;
                    }
                    n_j += j_size;
                }
                n_i += i_size;
            }
        }

        void OS1TwoElectronIntegralEngine::calc_bra_l_1_ket_l_1_shells(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es2,
            const FlatBasisSet::Shell& es3,
            const FlatBasisSet::Shell& es4,
            double* results) const
        {
            // swapping needed to assure proper order
            const FlatBasisSet::Shell *shell_1_pointer = &es1,
                                      *shell_2_pointer = &es2,
                                      *shell_3_pointer = &es3,
                                      *shell_4_pointer = &es4;
            const FlatBasisSet::Shell* tmp_pointer;

            const bool swapped_1 = (es1.l_max < es2.l_max);
            const bool swapped_2 = (es3.l_max < es4.l_max);
            const bool swapped_12 =
                (es1.l_max + es2.l_max < es3.l_max + es4.l_max);

            // swapping first pair
            if (swapped_1) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_2_pointer;
                shell_2_pointer = tmp_pointer;
            }
            // swapping second pair
            if (swapped_2) {
                tmp_pointer = shell_3_pointer;
                shell_3_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // swapping pairs
            if (swapped_12) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_3_pointer;
                shell_3_pointer = tmp_pointer;
                tmp_pointer = shell_2_pointer;
                shell_2_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // references initializing
            const FlatBasisSet::Shell &ref_es1 = *shell_1_pointer,
                                      &ref_es2 = *shell_2_pointer,
                                      &ref_es3 = *shell_3_pointer,
                                      &ref_es4 = *shell_4_pointer;
            // end of swapping

            // preparing some constants
            const unsigned prim_size_1 = ref_es1.primitive_exps.size();
            const unsigned prim_size_2 = ref_es2.primitive_exps.size();
            const unsigned prim_size_3 = ref_es3.primitive_exps.size();
            const unsigned prim_size_4 = ref_es4.primitive_exps.size();
            const unsigned naive_size_1 = ref_es1.naive_size;
            const unsigned naive_size_2 = ref_es2.naive_size;
            const unsigned naive_size_3 = ref_es3.naive_size;
            const unsigned naive_size_4 = ref_es4.naive_size;
            const unsigned size_1 = ref_es1.size;
            const unsigned size_3 = ref_es3.size;

            const unsigned ket_naive_size = naive_size_3 * naive_size_4;
            const unsigned ket_prim_size = prim_size_3 * prim_size_4;
            const unsigned bra_naive_size = naive_size_1 * naive_size_2;
            const unsigned bra_prim_size = prim_size_1 * prim_size_2;

            const bool segmented_ket = (ket_naive_size == 1);
            const bool segmented_bra = (bra_naive_size == 1);

            double* memory_pointer = memory_pool.get();
            double* const A_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_minus_b_over_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_exp_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_pq_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_p_coeff_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_d_over_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_exp_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_R_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_q_coeff_b = memory_pointer;
            memory_pointer += ket_prim_size;

            double* const A_b = memory_pointer;
            memory_pointer += 8;
            double* const CT_34_b = memory_pointer;
            memory_pointer += ket_naive_size * ket_prim_size;
            double* const AA_b = memory_pointer;
            const unsigned AA_total_size = ket_naive_size * 15;
            memory_pointer += AA_total_size;
            double* const CT_12_b = memory_pointer;
            memory_pointer += bra_naive_size * bra_prim_size;
            double* const BBB_b = memory_pointer;
            const unsigned BBB_total_size = AA_total_size * bra_naive_size;
            memory_pointer += BBB_total_size;
            std::memset(BBB_b, 0, BBB_total_size * sizeof(double));
            double* const C_b = memory_pointer;
            memory_pointer += 9;

            // setting two center (or pair of primitives) quantites
            const double X_AB =
                ref_es1.atom->coords[0] - ref_es2.atom->coords[0];
            const double Y_AB =
                ref_es1.atom->coords[1] - ref_es2.atom->coords[1];
            const double Z_AB =
                ref_es1.atom->coords[2] - ref_es2.atom->coords[2];
            const double R_AB_2 = X_AB * X_AB + Y_AB * Y_AB + Z_AB * Z_AB;
            const double X_CD =
                ref_es3.atom->coords[0] - ref_es4.atom->coords[0];
            const double Y_CD =
                ref_es3.atom->coords[1] - ref_es4.atom->coords[1];
            const double Z_CD =
                ref_es3.atom->coords[2] - ref_es4.atom->coords[2];
            const double R_CD_2 = X_CD * X_CD + Y_CD * Y_CD + Z_CD * Z_CD;
            const double X_AC =
                ref_es1.atom->coords[0] - ref_es3.atom->coords[0];
            const double Y_AC =
                ref_es1.atom->coords[1] - ref_es3.atom->coords[1];
            const double Z_AC =
                ref_es1.atom->coords[2] - ref_es3.atom->coords[2];
            const double R_AC_2 = X_AC * X_AC + Y_AC * Y_AC + Z_AC * Z_AC;

            const double AB_dot_CD = X_AB * X_CD + Y_AB * Y_CD + Z_AB * Z_CD;
            const double AC_dot_CD = X_AC * X_CD + Y_AC * Y_CD + Z_AC * Z_CD;
            const double AB_dot_AC = X_AB * X_AC + Y_AB * Y_AC + Z_AB * Z_AC;

            double max_ket_estimator = 0;
            const double global_bra_estimator = std::max(1e0, R_AB_2);
            const double global_ket_estimator = std::max(1e0, R_CD_2);
            // preparing contractions
            const double* const CT_1_b =
                &ref_es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_2_b =
                &ref_es2.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &ref_es3.prenormed_contraction_coeffs(0, 0);
            const double* const CT_4_b =
                &ref_es4.prenormed_contraction_coeffs(0, 0);
            double* CT_12_c = CT_12_b;
            double* CT_34_c = CT_34_b;

            prepare_contraction(CT_1_b,
                                CT_2_b,
                                CT_12_c,
                                prim_size_1,
                                prim_size_2,
                                naive_size_1,
                                naive_size_2);

            prepare_contraction(CT_3_b,
                                CT_4_b,
                                CT_34_c,
                                prim_size_3,
                                prim_size_4,
                                naive_size_3,
                                naive_size_4);

            std::memset(A_p_coeff_b, 0, bra_prim_size * sizeof(double));
            std::memset(A_q_coeff_b, 0, ket_prim_size * sizeof(double));
            for (unsigned i = 0; i < bra_prim_size; ++i)
                for (unsigned j = 0; j < bra_naive_size; ++j)
                    if (std::abs(*(CT_12_b + i * bra_naive_size + j)) >
                        *(A_p_coeff_b + i))
                        *(A_p_coeff_b + i) =
                            std::abs(*(CT_12_b + i * bra_naive_size + j));

            for (unsigned i = 0; i < ket_prim_size; ++i)
                for (unsigned j = 0; j < ket_naive_size; ++j)
                    if (std::abs(*(CT_34_b + i * ket_naive_size + j)) >
                        *(A_q_coeff_b + i))
                        *(A_q_coeff_b + i) =
                            std::abs(*(CT_34_b + i * ket_naive_size + j));

            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double b = ref_es2.primitive_exps[j];
                    const double p = ref_es1.primitive_exps[i] + b;
                    const double b_over_p = b / p;
                    const double mu = ref_es1.primitive_exps[i] * b_over_p;
                    *(A_p_b + ij_index) = p;
                    *(A_minus_b_over_p_b + ij_index) = -b_over_p;
                    const double est1 =
                        two_pi_to_five_over_four * exp(-(mu * R_AB_2)) / p;
                    *(A_exp_p_b + ij_index) = est1;
                    *(A_p_coeff_b + ij_index) *=
                        est1 * std::max(global_bra_estimator, 1 / p);
                    *(A_R_p_b + ij_index) =
                        R_AC_2 + b_over_p * (b_over_p * R_AB_2 - 2 * AB_dot_AC);
                    *(A_R_pq_b + ij_index) = -2 * b_over_p * AB_dot_CD;
                }
            for (unsigned i = 0, ij_index = 0; i < prim_size_3; ++i)
                for (unsigned j = 0; j < prim_size_4; ++j, ++ij_index) {
                    const double d = ref_es4.primitive_exps[j];
                    const double q = ref_es3.primitive_exps[i] + d;
                    const double d_over_q = d / q;
                    const double nu = ref_es3.primitive_exps[i] * d_over_q;
                    *(A_q_b + ij_index) = q;
                    *(A_d_over_q_b + ij_index) = d_over_q;
                    const double est1 =
                        two_pi_to_five_over_four * exp(-(nu * R_CD_2)) / q;
                    *(A_exp_q_b + ij_index) = est1;
                    *(A_q_coeff_b + ij_index) *=
                        est1 * std::max(global_ket_estimator, 1 / q);
                    if (max_ket_estimator < *(A_q_coeff_b + ij_index))
                        max_ket_estimator = *(A_q_coeff_b + ij_index);
                    *(A_R_q_b + ij_index) =
                        d_over_q * (d_over_q * R_CD_2 + 2 * AC_dot_CD);
                }

            double prim_treshold = m_treshold / (ket_prim_size * bra_prim_size);

            // quick hack to be on a safe side of Schwartz inequality
            if (&es1 == &es3 && &es2 == &es4)
                prim_treshold = 0;

            // loop over quartets of primitives
            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double coeff_ij = *(A_p_coeff_b + ij_index);
                    if (coeff_ij * max_ket_estimator < prim_treshold)
                        continue;
                    std::memset(AA_b, 0, AA_total_size * sizeof(double));
                    const double p = *(A_p_b + ij_index);
                    const double minus_b_over_p =
                        *(A_minus_b_over_p_b + ij_index);
                    const double R_p = *(A_R_p_b + ij_index);
                    const double R_pq = *(A_R_pq_b + ij_index);
                    const double* CT_12_cur =
                        CT_12_b + ij_index * bra_naive_size;
                    for (unsigned k = 0, kl_index = 0; k < prim_size_3; ++k)
                        for (unsigned l = 0; l < prim_size_4; ++l, ++kl_index) {
                            const double coeff_max =
                                coeff_ij * *(A_q_coeff_b + kl_index);
                            if (coeff_max < prim_treshold)
                                continue;
                            const double* CT_34_cur =
                                CT_34_b + kl_index * ket_naive_size;
                            const double estimator = *(A_exp_p_b + ij_index) *
                                                     *(A_exp_q_b + kl_index);
                            const double q = *(A_q_b + kl_index);
                            const double d_over_q = *(A_d_over_q_b + kl_index);
                            const double p_over_q = p / q;
                            const double alpha_over_p = q / (p + q);
                            const double alpha_over_q = p_over_q * alpha_over_p;
                            const double R_PQ_2 =
                                R_p + *(A_R_q_b + kl_index) + d_over_q * R_pq;
                            double prefactor = estimator / sqrt(p + q);
                            if (segmented_ket)
                                prefactor *= *CT_34_cur;
                            if (segmented_bra)
                                prefactor *= *CT_12_cur;
                            const double arg = alpha_over_p * p * R_PQ_2;
                            misc::fast_boys.generalized_boys(
                                2, arg, prefactor, A_b);
                            const double f0 = *A_b;
                            const double f1 = -alpha_over_p * *(A_b + 1);
                            const double f2 =
                                -alpha_over_p * alpha_over_q * *(A_b + 2);
                            const double f3 = d_over_q * f1;
                            const double f4 = -p_over_q * f1;
                            const double f5 = d_over_q * f2;
                            const double f6 = -d_over_q * f0 + d_over_q * f4;
                            const double f7 = d_over_q * f5 - d_over_q * f3;

                            // contracting ket pair
                            if (segmented_ket) {
                                *AA_b += f0;
                                *(AA_b + 1) += f1;
                                *(AA_b + 2) += f2;
                                *(AA_b + 3) += f3;
                                *(AA_b + 4) += f4;
                                *(AA_b + 5) += f5;
                                *(AA_b + 6) += f6;
                                *(AA_b + 7) += f7;
                            } else {
                                for (unsigned kk = 0; kk < ket_naive_size;
                                     ++kk, ++CT_34_cur) {
                                    const double factor = *CT_34_cur;
                                    *(AA_b + 15 * kk) += factor * f0;
                                    *(AA_b + 15 * kk + 1) += factor * f1;
                                    *(AA_b + 15 * kk + 2) += factor * f2;
                                    *(AA_b + 15 * kk + 3) += factor * f3;
                                    *(AA_b + 15 * kk + 4) += factor * f4;
                                    *(AA_b + 15 * kk + 5) += factor * f5;
                                    *(AA_b + 15 * kk + 6) += factor * f6;
                                    *(AA_b + 15 * kk + 7) += factor * f7;
                                }
                            }
                        }
                    // bra loop
                    const double one_over_p = 1 / p;

                    for (unsigned kk = 0; kk < ket_naive_size; ++kk) {
                        *(AA_b + kk * 15 + 8) =
                            minus_b_over_p *
                            (*(AA_b + kk * 15 + 1) + *(AA_b + kk * 15));
                        *(AA_b + kk * 15 + 9) =
                            minus_b_over_p * *(AA_b + kk * 15 + 4);
                        *(AA_b + kk * 15 + 10) =
                            minus_b_over_p * *(AA_b + kk * 15 + 2);
                        *(AA_b + kk * 15 + 11) =
                            minus_b_over_p * *(AA_b + kk * 15 + 5);
                        *(AA_b + kk * 15 + 12) =
                            minus_b_over_p *
                            (*(AA_b + kk * 15 + 6) - *(AA_b + kk * 15 + 3));
                        *(AA_b + kk * 15 + 13) =
                            minus_b_over_p *
                            (*(AA_b + kk * 15 + 9) + *(AA_b + kk * 15 + 10));
                        *(AA_b + kk * 15 + 14) =
                            one_over_p * *(AA_b + kk * 15 + 4);
                    }
                    // contracting bra pair
                    if (segmented_bra) {
                        segmented_contraction(BBB_b, AA_b, ket_naive_size * 15);
                    } else {
                        general_contraction(CT_12_cur,
                                            BBB_b,
                                            AA_b,
                                            AA_total_size,
                                            bra_naive_size);
                    }
                }

            const double* BBB_cur = BBB_b;
            // loop over quartets of contractions
            unsigned n_i = 0;
            for (unsigned i = 0; i < naive_size_1; ++i) {
                const unsigned l_i = ref_es1.l[i];
                const unsigned i_size = l_i + l_i + 1;
                unsigned n_j = 0;
                for (unsigned j = 0; j < naive_size_2; ++j) {
                    unsigned n_k = 0;
                    for (unsigned k = 0; k < naive_size_3; ++k) {
                        const unsigned l_k = ref_es3.l[k];
                        const unsigned k_size = l_k + l_k + 1;
                        unsigned n_l = 0;
                        for (unsigned l = 0; l < naive_size_4;
                             ++l, BBB_cur += 15) {
                            double C1, C2, C3, C4, C5, C6, C7, C8, C9;
                            const unsigned funny = 2 * l_i + l_k;

                            switch (funny) {
                            case 0:
                                *C_b = *BBB_cur;
                                unswap(C_b,
                                       1,
                                       1,
                                       results,
                                       1,
                                       1,
                                       1,
                                       1,
                                       size_1,
                                       naive_size_2,
                                       size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                                break;
                            case 1:
                                *C_b = X_AB * *(BBB_cur + 9) +
                                       X_AC * *(BBB_cur + 4) +
                                       X_CD * *(BBB_cur + 6);
                                *(C_b + 1) = Y_AB * *(BBB_cur + 9) +
                                             Y_AC * *(BBB_cur + 4) +
                                             Y_CD * *(BBB_cur + 6);
                                *(C_b + 2) = Z_AB * *(BBB_cur + 9) +
                                             Z_AC * *(BBB_cur + 4) +
                                             Z_CD * *(BBB_cur + 6);
                                unswap(C_b,
                                       3,
                                       1,
                                       results,
                                       1,
                                       1,
                                       3,
                                       1,
                                       size_1,
                                       naive_size_2,
                                       size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                                break;
                            case 2:
                                *C_b = X_AB * *(BBB_cur + 8) +
                                       X_AC * *(BBB_cur + 1) +
                                       X_CD * *(BBB_cur + 3);
                                *(C_b + 1) = Y_AB * *(BBB_cur + 8) +
                                             Y_AC * *(BBB_cur + 1) +
                                             Y_CD * *(BBB_cur + 3);
                                *(C_b + 2) = Z_AB * *(BBB_cur + 8) +
                                             Z_AC * *(BBB_cur + 1) +
                                             Z_CD * *(BBB_cur + 3);
                                unswap(C_b,
                                       1,
                                       1,
                                       results,
                                       3,
                                       1,
                                       1,
                                       1,
                                       size_1,
                                       naive_size_2,
                                       size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                                break;
                            case 3:
                                C1 = X_AB * *(BBB_cur + 13) +
                                     X_AC * *(BBB_cur + 10) +
                                     X_CD * *(BBB_cur + 11);
                                C2 = Y_AB * *(BBB_cur + 13) +
                                     Y_AC * *(BBB_cur + 10) +
                                     Y_CD * *(BBB_cur + 11);
                                C3 = Z_AB * *(BBB_cur + 13) +
                                     Z_AC * *(BBB_cur + 10) +
                                     Z_CD * *(BBB_cur + 11);
                                C4 = X_AB * (*(BBB_cur + 9) + *(BBB_cur + 10)) +
                                     X_AC * *(BBB_cur + 2) +
                                     X_CD * *(BBB_cur + 5);
                                C5 = Y_AB * (*(BBB_cur + 9) + *(BBB_cur + 10)) +
                                     Y_AC * *(BBB_cur + 2) +
                                     Y_CD * *(BBB_cur + 5);
                                C6 = Z_AB * (*(BBB_cur + 9) + *(BBB_cur + 10)) +
                                     Z_AC * *(BBB_cur + 2) +
                                     Z_CD * *(BBB_cur + 5);
                                C7 =
                                    X_AB * (*(BBB_cur + 12) + *(BBB_cur + 11)) +
                                    X_AC * (-*(BBB_cur + 3) + *(BBB_cur + 5)) +
                                    X_CD * *(BBB_cur + 7);
                                C8 =
                                    Y_AB * (*(BBB_cur + 12) + *(BBB_cur + 11)) +
                                    Y_AC * (-*(BBB_cur + 3) + *(BBB_cur + 5)) +
                                    Y_CD * *(BBB_cur + 7);
                                C9 =
                                    Z_AB * (*(BBB_cur + 12) + *(BBB_cur + 11)) +
                                    Z_AC * (-*(BBB_cur + 3) + *(BBB_cur + 5)) +
                                    Z_CD * *(BBB_cur + 7);

                                *C_b = X_AB * C1 + X_AC * C4 + X_CD * C7 +
                                       *(BBB_cur + 14) / 2;
                                *(C_b + 1) = Y_AB * C1 + Y_AC * C4 + Y_CD * C7;
                                *(C_b + 2) = Z_AB * C1 + Z_AC * C4 + Z_CD * C7;
                                *(C_b + 3) = X_AB * C2 + X_AC * C5 + X_CD * C8;
                                *(C_b + 4) = Y_AB * C2 + Y_AC * C5 + Y_CD * C8 +
                                             *(BBB_cur + 14) / 2;
                                *(C_b + 5) = Z_AB * C2 + Z_AC * C5 + Z_CD * C8;
                                *(C_b + 6) = X_AB * C3 + X_AC * C6 + X_CD * C9;
                                *(C_b + 7) = Y_AB * C3 + Y_AC * C6 + Y_CD * C9;
                                *(C_b + 8) = Z_AB * C3 + Z_AC * C6 + Z_CD * C9 +
                                             *(BBB_cur + 14) / 2;
                                unswap(C_b,
                                       3,
                                       1,
                                       results,
                                       3,
                                       1,
                                       3,
                                       1,
                                       size_1,
                                       naive_size_2,
                                       size_3,
                                       naive_size_4,
                                       n_i,
                                       n_j,
                                       n_k,
                                       n_l,
                                       swapped_1,
                                       swapped_2,
                                       swapped_12);
                                break;
                            }
                            n_l++;
                        }
                        n_k += k_size;
                    }
                    n_j++;
                }
                n_i += i_size;
            }
        }

        void OS1TwoElectronIntegralEngine::calc_bra_l_2_ket_l_1_shells(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es2,
            const FlatBasisSet::Shell& es3,
            const FlatBasisSet::Shell& es4,
            double* results) const
        { // general types
            /* swapping may be needed to perform better*/
            const FlatBasisSet::Shell *shell_1_pointer = &es1,
                                      *shell_2_pointer = &es2,
                                      *shell_3_pointer = &es3,
                                      *shell_4_pointer = &es4;
            const FlatBasisSet::Shell* tmp_pointer;

            const bool swapped_1 = (es1.l_max < es2.l_max);
            const bool swapped_2 = (es3.l_max < es4.l_max);
            const bool swapped_12 =
                (es1.l_max + es2.l_max < es3.l_max + es4.l_max);

            // swapping first pair
            if (swapped_1) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_2_pointer;
                shell_2_pointer = tmp_pointer;
            }
            // swapping second pair
            if (swapped_2) {
                tmp_pointer = shell_3_pointer;
                shell_3_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // swapping pairs
            if (swapped_12) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_3_pointer;
                shell_3_pointer = tmp_pointer;
                tmp_pointer = shell_2_pointer;
                shell_2_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // references initializing
            const FlatBasisSet::Shell &ref_es1 = *shell_1_pointer,
                                      &ref_es2 = *shell_2_pointer,
                                      &ref_es3 = *shell_3_pointer,
                                      &ref_es4 = *shell_4_pointer;
            // end of swapping

            // preparing some constants
            const bool same_AB = (ref_es1.atom == ref_es2.atom);
            const bool same_CD = (ref_es3.atom == ref_es4.atom);

            const unsigned l_1_min = ref_es1.l_min;
            const unsigned l_2_min = ref_es2.l_min;
            const unsigned l_3_min = ref_es3.l_min;
            const unsigned l_4_min = ref_es4.l_min;
            const unsigned l_12_min = l_1_min + l_2_min;
            const unsigned l_34_min = l_3_min + l_4_min;
            const unsigned l_12 = ref_es1.l_max + ref_es2.l_max;
            const unsigned l_34 = ref_es3.l_max + ref_es4.l_max;
            const unsigned m = l_12 + l_34;
            const unsigned prim_size_1 = ref_es1.primitive_exps.size();
            const unsigned prim_size_2 = ref_es2.primitive_exps.size();
            const unsigned prim_size_3 = ref_es3.primitive_exps.size();
            const unsigned prim_size_4 = ref_es4.primitive_exps.size();
            const unsigned naive_size_1 = ref_es1.naive_size;
            const unsigned naive_size_2 = ref_es2.naive_size;
            const unsigned naive_size_3 = ref_es3.naive_size;
            const unsigned naive_size_4 = ref_es4.naive_size;
            const unsigned size_1 = ref_es1.size;
            const unsigned size_2 = ref_es2.size;
            const unsigned size_3 = ref_es3.size;
            const unsigned size_4 = ref_es4.size;

            const unsigned first_pair_min = (same_AB ? l_12_min : l_1_min);

            const unsigned i_index_begin =
                (same_AB ? l_12_min * (l_12_min + 1) * (l_12_min + 2) / 6
                         : l_1_min * (l_1_min + 1) * (l_1_min + 2) / 6);
            const unsigned i_index_end =
                (l_12 + 1) * (l_12 + 2) * (l_12 + 3) / 6;
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
            const unsigned bra_naive_size = naive_size_1 * naive_size_2;
            const unsigned bra_prim_size = prim_size_1 * prim_size_2;
            const unsigned amount = ket_naive_size * angular_range;

            const bool segmented_ket = (ket_naive_size == 1);
            const bool segmented_bra = (bra_naive_size == 1);

            // setting up working arrays
            double* memory_pointer = memory_pool.get();

            double* const A_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_exp_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_P_b = memory_pointer;
            memory_pointer += 3 * bra_prim_size;
            double* const A_R_PA_b = memory_pointer;
            memory_pointer += 3 * bra_prim_size;
            double* const A_p_coeff_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_exp_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_R_Q_b = memory_pointer;
            memory_pointer += 3 * ket_prim_size;
            double* const A_q_coeff_b = memory_pointer;
            memory_pointer += ket_prim_size;

            double* const AA_b = memory_pointer;
            const unsigned AA_s = 4;
            //    const unsigned AA_s = max(m + 1, k_index_end);
            memory_pointer += AA_s * (m + 1) * (m + 2) * (m + 3) / 6;

            /*
                array_type_2 AA(memory_pointer, extents_2
                [(m + 1) * (m + 2) * (m + 3) / 6]
                [max(m + 1, k_index_end)]);
                memory_pointer += AA.num_elements();
                double* const AA_b = AA.data();
                const unsigned AA_s = AA.shape()[1];
            */
            double* const B_b = memory_pointer;
            memory_pointer += angular_range;
            /*
              array_type_1 B(memory_pointer, extents_1
              [angular_range]);
              memory_pointer += B.num_elements();
            */

            double* const CT_34_b = memory_pointer;
            memory_pointer += ket_naive_size * ket_prim_size;

            double* const AAAA_b = memory_pointer;
            const unsigned AAAA_total_size = ket_naive_size * angular_range;
            memory_pointer += AAAA_total_size;
            /*
              array_type_4 AAAA(memory_pointer, extents_4
              [naive_size_3]
              [naive_size_4]
              [i_range]
              [k_range]);
              memory_pointer += AAAA.num_elements();
            */
            double* const CT_12_b = memory_pointer;
            memory_pointer += bra_naive_size * bra_prim_size;

            double* const BBBBBB_b = memory_pointer;
            const unsigned BBBBBB_s = k_range;
            const unsigned BBBBBB_total_size = AAAA_total_size * bra_naive_size;
            memory_pointer += BBBBBB_total_size;
            std::memset(BBBBBB_b, 0, BBBBBB_total_size * sizeof(double));
            /*
              array_type_6 BBBBBB(memory_pointer, extents_6
              [naive_size_1]
              [naive_size_2]
              [naive_size_3]
              [naive_size_4]
              [i_range]
              [k_range]);
              memory_pointer += BBBBBB.num_elements();
              memset(BBBBBB.data(), 0, BBBBBB.num_elements() * sizeof(double));
            */

            double* const CCC_b = memory_pointer;
            const unsigned CCC_s = (ref_es2.l_max + 1) * (ref_es2.l_max + 2) *
                                   (ref_es2.l_max + 3) / 6;
            const unsigned CCC_s12 = i_index_end * CCC_s;
            memory_pointer += k_index_end * CCC_s12;
            /*
              array_type_3 CCC(memory_pointer, extents_3
              [k_index_end]
              [i_index_end]
              [(ref_es2.l_max + 1) * (ref_es2.l_max + 2) * (ref_es2.l_max + 3) /
              6]); memory_pointer += CCC.num_elements();
            */
            double* const DDD_b = memory_pointer;
            const unsigned DDD_s = (ref_es4.l_max + 1) * (ref_es4.l_max + 2) *
                                   (ref_es4.l_max + 3) / 6;
            const unsigned DDD_s12 = DDD_s * k_index_end;
            memory_pointer += DDD_s12 * (ref_es1.l_max + 1) *
                              (ref_es1.l_max + 2) * (ref_es2.l_max + 1) *
                              (ref_es2.l_max + 2) / 4;
            /*
              array_type_3 DDD(memory_pointer, extents_3
              [(ref_es1.l_max + 1) * (ref_es1.l_max + 2) * (ref_es2.l_max + 1) *
              (ref_es2.l_max + 2) / 4] [k_index_end]
              [(ref_es4.l_max + 1) * (ref_es4.l_max + 2) * (ref_es4.l_max + 3) /
              6]); memory_pointer += DDD.num_elements();
            */

            // setting two center (or pair of primitives) quantites
            const double X_AB =
                ref_es1.atom->coords[0] - ref_es2.atom->coords[0];
            const double Y_AB =
                ref_es1.atom->coords[1] - ref_es2.atom->coords[1];
            const double Z_AB =
                ref_es1.atom->coords[2] - ref_es2.atom->coords[2];
            const double R_AB_2 = X_AB * X_AB + Y_AB * Y_AB + Z_AB * Z_AB;
            const double X_CD =
                ref_es3.atom->coords[0] - ref_es4.atom->coords[0];
            const double Y_CD =
                ref_es3.atom->coords[1] - ref_es4.atom->coords[1];
            const double Z_CD =
                ref_es3.atom->coords[2] - ref_es4.atom->coords[2];
            const double R_CD_2 = X_CD * X_CD + Y_CD * Y_CD + Z_CD * Z_CD;

            const unsigned bra_l = ((l_12 & 1) ? l_12 / 2 + 1 : l_12 / 2);
            const unsigned ket_l = ((l_34 & 1) ? l_34 / 2 + 1 : l_34 / 2);

            const double global_bra_estimator =
                std::max(1e0, std::pow(R_AB_2, bra_l));
            const double global_ket_estimator =
                std::max(1e0, std::pow(R_CD_2, ket_l));
            double max_ket_estimator = 0;

            // preparing contractions
            const double* const CT_1_b =
                &ref_es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_2_b =
                &ref_es2.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &ref_es3.prenormed_contraction_coeffs(0, 0);
            const double* const CT_4_b =
                &ref_es4.prenormed_contraction_coeffs(0, 0);
            double* CT_12_cur = CT_12_b;
            double* CT_34_cur = CT_34_b;

            prepare_contraction(CT_1_b,
                                CT_2_b,
                                CT_12_cur,
                                prim_size_1,
                                prim_size_2,
                                naive_size_1,
                                naive_size_2);

            prepare_contraction(CT_3_b,
                                CT_4_b,
                                CT_34_cur,
                                prim_size_3,
                                prim_size_4,
                                naive_size_3,
                                naive_size_4);

            std::memset(A_p_coeff_b, 0, bra_prim_size * sizeof(double));
            std::memset(A_q_coeff_b, 0, ket_prim_size * sizeof(double));
            for (unsigned i = 0; i < bra_prim_size; ++i)
                for (unsigned j = 0; j < bra_naive_size; ++j)
                    if (std::abs(*(CT_12_b + i * bra_naive_size + j)) >
                        *(A_p_coeff_b + i))
                        *(A_p_coeff_b + i) =
                            std::abs(*(CT_12_b + i * bra_naive_size + j));

            for (unsigned i = 0; i < ket_prim_size; ++i)
                for (unsigned j = 0; j < ket_naive_size; ++j)
                    if (std::abs(*(CT_34_b + i * ket_naive_size + j)) >
                        *(A_q_coeff_b + i))
                        *(A_q_coeff_b + i) =
                            std::abs(*(CT_34_b + i * ket_naive_size + j));

            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double p =
                        ref_es1.primitive_exps[i] + ref_es2.primitive_exps[j];
                    const double one_over_p = 1 / p;
                    const double mu = ref_es1.primitive_exps[i] *
                                      ref_es2.primitive_exps[j] * one_over_p;
                    *(A_p_b + ij_index) = p;
                    const double est1 = two_pi_to_five_over_four *
                                        exp(-(mu * R_AB_2)) * one_over_p;
                    *(A_exp_p_b + ij_index) = est1;
                    *(A_p_coeff_b + ij_index) *=
                        est1 * std::max(global_bra_estimator,
                                        std::pow(one_over_p, bra_l));
                    for (unsigned kk = 0; kk < 3; ++kk) {
                        const double R_P = (ref_es1.primitive_exps[i] *
                                                ref_es1.atom->coords[kk] +
                                            ref_es2.primitive_exps[j] *
                                                ref_es2.atom->coords[kk]) *
                                           one_over_p;
                        *(A_R_P_b + 3 * ij_index + kk) = R_P;
                        *(A_R_PA_b + 3 * ij_index + kk) =
                            R_P - ref_es1.atom->coords[kk];
                    }
                }

            for (unsigned i = 0, ij_index = 0; i < prim_size_3; ++i)
                for (unsigned j = 0; j < prim_size_4; ++j, ++ij_index) {
                    const double q =
                        ref_es3.primitive_exps[i] + ref_es4.primitive_exps[j];
                    const double one_over_q = 1 / q;
                    const double nu = ref_es3.primitive_exps[i] *
                                      ref_es4.primitive_exps[j] * one_over_q;
                    *(A_q_b + ij_index) = q;
                    const double est1 = two_pi_to_five_over_four *
                                        exp(-(nu * R_CD_2)) * one_over_q;
                    *(A_exp_q_b + ij_index) = est1;
                    *(A_q_coeff_b + ij_index) *=
                        est1 * std::max(global_ket_estimator,
                                        std::pow(one_over_q, ket_l));
                    if (max_ket_estimator < *(A_q_coeff_b + ij_index))
                        max_ket_estimator = *(A_q_coeff_b + ij_index);
                    for (unsigned kk = 0; kk < 3; ++kk) {
                        *(A_R_Q_b + 3 * ij_index + kk) =
                            (ref_es3.primitive_exps[i] *
                                 ref_es3.atom->coords[kk] +
                             ref_es4.primitive_exps[j] *
                                 ref_es4.atom->coords[kk]) *
                            one_over_q;
                    }
                }
            double prim_treshold = m_treshold / (ket_prim_size * bra_prim_size);

            // quick hack to be on a safe side of Schwartz inequality
            if (&es1 == &es3 && &es2 == &es4)
                prim_treshold = 0;

            // loop over quartets of primitives
            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double coeff_ij = *(A_p_coeff_b + ij_index);
                    if (coeff_ij * max_ket_estimator < prim_treshold)
                        continue;
                    std::memset(AAAA_b, 0, AAAA_total_size * sizeof(double));
                    const double* CT_12_cur =
                        CT_12_b + ij_index * bra_naive_size;
                    const double p = *(A_p_b + ij_index);
                    const double one_over_p = 1 / p;
                    const double one_over_two_p = one_over_p / 2;
                    for (unsigned k = 0, kl_index = 0; k < prim_size_3; ++k)
                        for (unsigned l = 0; l < prim_size_4; ++l, ++kl_index) {
                            const double coeff_max =
                                coeff_ij * *(A_q_coeff_b + kl_index);
                            if (coeff_max < prim_treshold)
                                continue;
                            const double* CT_34_cur =
                                CT_34_b + kl_index * ket_naive_size;
                            const double estimator = *(A_exp_p_b + ij_index) *
                                                     *(A_exp_q_b + kl_index);
                            const double q = *(A_q_b + kl_index);
                            const double one_over_q = 1 / q;
                            const double alpha = 1 / (one_over_p + one_over_q);
                            const double alpha_over_p = alpha * one_over_p;
                            const double X_PQ = *(A_R_P_b + 3 * ij_index) -
                                                *(A_R_Q_b + 3 * kl_index);
                            const double Y_PQ = *(A_R_P_b + 3 * ij_index + 1) -
                                                *(A_R_Q_b + 3 * kl_index + 1);
                            const double Z_PQ = *(A_R_P_b + 3 * ij_index + 2) -
                                                *(A_R_Q_b + 3 * kl_index + 2);
                            const double R_PQ_2 =
                                X_PQ * X_PQ + Y_PQ * Y_PQ + Z_PQ * Z_PQ;

                            // Boys function evaluation and zero-th integrals
                            // computation
                            double prefactor = estimator / sqrt(p + q);
                            if (segmented_ket)
                                prefactor *= *CT_34_cur;
                            if (segmented_bra)
                                prefactor *= *CT_12_cur;
                            const double arg = alpha * R_PQ_2;
                            misc::fast_boys.generalized_boys(
                                3, arg, prefactor, AA_b);
                            double* NIEDOIDA_RESTRICT b = AA_b;
                            // vertical recursion
                            const double alpha_X = -alpha_over_p * X_PQ;
                            const double alpha_Y = -alpha_over_p * Y_PQ;
                            const double alpha_Z = -alpha_over_p * Z_PQ;
                            if (same_AB) {
                                *(b + 1 * 4 + 0) = alpha_X * *(b + 0 * 4 + 1);
                                *(b + 2 * 4 + 0) = alpha_Y * *(b + 0 * 4 + 1);
                                *(b + 3 * 4 + 0) = alpha_Z * *(b + 0 * 4 + 1);
                                *(b + 1 * 4 + 1) = alpha_X * *(b + 0 * 4 + 2);
                                *(b + 2 * 4 + 1) = alpha_Y * *(b + 0 * 4 + 2);
                                *(b + 3 * 4 + 1) = alpha_Z * *(b + 0 * 4 + 2);
                                *(b + 1 * 4 + 2) = alpha_X * *(b + 0 * 4 + 3);
                                *(b + 2 * 4 + 2) = alpha_Y * *(b + 0 * 4 + 3);
                                *(b + 3 * 4 + 2) = alpha_Z * *(b + 0 * 4 + 3);
                                *(b + 4 * 4 + 0) =
                                    alpha_X * *(b + 1 * 4 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 0) -
                                         alpha_over_p * *(b + 0 * 4 + 1));
                                *(b + 5 * 4 + 0) = alpha_Y * *(b + 1 * 4 + 1);
                                *(b + 6 * 4 + 0) = alpha_Z * *(b + 1 * 4 + 1);
                                *(b + 7 * 4 + 0) =
                                    alpha_Y * *(b + 2 * 4 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 0) -
                                         alpha_over_p * *(b + 0 * 4 + 1));
                                *(b + 8 * 4 + 0) = alpha_Z * *(b + 2 * 4 + 1);
                                *(b + 9 * 4 + 0) =
                                    alpha_Z * *(b + 3 * 4 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 0) -
                                         alpha_over_p * *(b + 0 * 4 + 1));
                                *(b + 4 * 4 + 1) =
                                    alpha_X * *(b + 1 * 4 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 1) -
                                         alpha_over_p * *(b + 0 * 4 + 2));
                                *(b + 5 * 4 + 1) = alpha_Y * *(b + 1 * 4 + 2);
                                *(b + 7 * 4 + 1) =
                                    alpha_Y * *(b + 2 * 4 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 1) -
                                         alpha_over_p * *(b + 0 * 4 + 2));
                                *(b + 9 * 4 + 1) =
                                    alpha_Z * *(b + 3 * 4 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 1) -
                                         alpha_over_p * *(b + 0 * 4 + 2));
                                *(b + 10 * 4 + 0) =
                                    alpha_X * *(b + 4 * 4 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 1 * 4 + 0) -
                                         alpha_over_p * *(b + 1 * 4 + 1));
                                *(b + 11 * 4 + 0) = alpha_Y * *(b + 4 * 4 + 1);
                                *(b + 12 * 4 + 0) = alpha_Z * *(b + 4 * 4 + 1);
                                *(b + 13 * 4 + 0) = alpha_X * *(b + 7 * 4 + 1);
                                *(b + 14 * 4 + 0) = alpha_Z * *(b + 5 * 4 + 1);
                                *(b + 15 * 4 + 0) = alpha_X * *(b + 9 * 4 + 1);
                                *(b + 16 * 4 + 0) =
                                    alpha_Y * *(b + 7 * 4 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 2 * 4 + 0) -
                                         alpha_over_p * *(b + 2 * 4 + 1));
                                *(b + 17 * 4 + 0) = alpha_Z * *(b + 7 * 4 + 1);
                                *(b + 18 * 4 + 0) = alpha_Y * *(b + 9 * 4 + 1);
                                *(b + 19 * 4 + 0) =
                                    alpha_Z * *(b + 9 * 4 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 3 * 4 + 0) -
                                         alpha_over_p * *(b + 3 * 4 + 1));
                            } else {
                                const double X_PA = *(A_R_PA_b + 3 * ij_index);
                                const double Y_PA =
                                    *(A_R_PA_b + 3 * ij_index + 1);
                                const double Z_PA =
                                    *(A_R_PA_b + 3 * ij_index + 2);
                                *(b + 1 * 4 + 0) = X_PA * *(b + 0 * 4 + 0) +
                                                   alpha_X * *(b + 0 * 4 + 1);
                                *(b + 2 * 4 + 0) = Y_PA * *(b + 0 * 4 + 0) +
                                                   alpha_Y * *(b + 0 * 4 + 1);
                                *(b + 3 * 4 + 0) = Z_PA * *(b + 0 * 4 + 0) +
                                                   alpha_Z * *(b + 0 * 4 + 1);
                                *(b + 1 * 4 + 1) = X_PA * *(b + 0 * 4 + 1) +
                                                   alpha_X * *(b + 0 * 4 + 2);
                                *(b + 2 * 4 + 1) = Y_PA * *(b + 0 * 4 + 1) +
                                                   alpha_Y * *(b + 0 * 4 + 2);
                                *(b + 3 * 4 + 1) = Z_PA * *(b + 0 * 4 + 1) +
                                                   alpha_Z * *(b + 0 * 4 + 2);
                                *(b + 1 * 4 + 2) = X_PA * *(b + 0 * 4 + 2) +
                                                   alpha_X * *(b + 0 * 4 + 3);
                                *(b + 2 * 4 + 2) = Y_PA * *(b + 0 * 4 + 2) +
                                                   alpha_Y * *(b + 0 * 4 + 3);
                                *(b + 3 * 4 + 2) = Z_PA * *(b + 0 * 4 + 2) +
                                                   alpha_Z * *(b + 0 * 4 + 3);
                                *(b + 4 * 4 + 0) =
                                    X_PA * *(b + 1 * 4 + 0) +
                                    alpha_X * *(b + 1 * 4 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 0) -
                                         alpha_over_p * *(b + 0 * 4 + 1));
                                *(b + 5 * 4 + 0) = Y_PA * *(b + 1 * 4 + 0) +
                                                   alpha_Y * *(b + 1 * 4 + 1);
                                *(b + 6 * 4 + 0) = Z_PA * *(b + 1 * 4 + 0) +
                                                   alpha_Z * *(b + 1 * 4 + 1);
                                *(b + 7 * 4 + 0) =
                                    Y_PA * *(b + 2 * 4 + 0) +
                                    alpha_Y * *(b + 2 * 4 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 0) -
                                         alpha_over_p * *(b + 0 * 4 + 1));
                                *(b + 8 * 4 + 0) = Z_PA * *(b + 2 * 4 + 0) +
                                                   alpha_Z * *(b + 2 * 4 + 1);
                                *(b + 9 * 4 + 0) =
                                    Z_PA * *(b + 3 * 4 + 0) +
                                    alpha_Z * *(b + 3 * 4 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 0) -
                                         alpha_over_p * *(b + 0 * 4 + 1));
                                *(b + 4 * 4 + 1) =
                                    X_PA * *(b + 1 * 4 + 1) +
                                    alpha_X * *(b + 1 * 4 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 1) -
                                         alpha_over_p * *(b + 0 * 4 + 2));
                                *(b + 5 * 4 + 1) = Y_PA * *(b + 1 * 4 + 1) +
                                                   alpha_Y * *(b + 1 * 4 + 2);
                                *(b + 7 * 4 + 1) =
                                    Y_PA * *(b + 2 * 4 + 1) +
                                    alpha_Y * *(b + 2 * 4 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 1) -
                                         alpha_over_p * *(b + 0 * 4 + 2));
                                *(b + 9 * 4 + 1) =
                                    Z_PA * *(b + 3 * 4 + 1) +
                                    alpha_Z * *(b + 3 * 4 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 4 + 1) -
                                         alpha_over_p * *(b + 0 * 4 + 2));
                                *(b + 10 * 4 + 0) =
                                    X_PA * *(b + 4 * 4 + 0) +
                                    alpha_X * *(b + 4 * 4 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 1 * 4 + 0) -
                                         alpha_over_p * *(b + 1 * 4 + 1));
                                *(b + 11 * 4 + 0) = Y_PA * *(b + 4 * 4 + 0) +
                                                    alpha_Y * *(b + 4 * 4 + 1);
                                *(b + 12 * 4 + 0) = Z_PA * *(b + 4 * 4 + 0) +
                                                    alpha_Z * *(b + 4 * 4 + 1);
                                *(b + 13 * 4 + 0) = X_PA * *(b + 7 * 4 + 0) +
                                                    alpha_X * *(b + 7 * 4 + 1);
                                *(b + 14 * 4 + 0) = Z_PA * *(b + 5 * 4 + 0) +
                                                    alpha_Z * *(b + 5 * 4 + 1);
                                *(b + 15 * 4 + 0) = X_PA * *(b + 9 * 4 + 0) +
                                                    alpha_X * *(b + 9 * 4 + 1);
                                *(b + 16 * 4 + 0) =
                                    Y_PA * *(b + 7 * 4 + 0) +
                                    alpha_Y * *(b + 7 * 4 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 2 * 4 + 0) -
                                         alpha_over_p * *(b + 2 * 4 + 1));
                                *(b + 17 * 4 + 0) = Z_PA * *(b + 7 * 4 + 0) +
                                                    alpha_Z * *(b + 7 * 4 + 1);
                                *(b + 18 * 4 + 0) = Y_PA * *(b + 9 * 4 + 0) +
                                                    alpha_Y * *(b + 9 * 4 + 1);
                                *(b + 19 * 4 + 0) =
                                    Z_PA * *(b + 9 * 4 + 0) +
                                    alpha_Z * *(b + 9 * 4 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 3 * 4 + 0) -
                                         alpha_over_p * *(b + 3 * 4 + 1));
                            }
                            // electron transfer
                            //... preparation
                            const double one_over_two_q = one_over_q / 2;
                            const double prefactor_x =
                                -(ref_es2.primitive_exps[j] * X_AB +
                                  ref_es4.primitive_exps[l] * X_CD) *
                                one_over_q;
                            const double prefactor_y =
                                -(ref_es2.primitive_exps[j] * Y_AB +
                                  ref_es4.primitive_exps[l] * Y_CD) *
                                one_over_q;
                            const double prefactor_z =
                                -(ref_es2.primitive_exps[j] * Z_AB +
                                  ref_es4.primitive_exps[l] * Z_CD) *
                                one_over_q;
                            const double p_over_q = p * one_over_q;
                            // and now going on transfering one by one
                            switch (first_pair_min) {
                            case 0:
                                *(b + 0 * 4 + 1) =
                                    prefactor_x * *(b + 0 * 4 + 0) -
                                    p_over_q * *(b + 1 * 4 + 0);
                                *(b + 0 * 4 + 2) =
                                    prefactor_y * *(b + 0 * 4 + 0) -
                                    p_over_q * *(b + 2 * 4 + 0);
                                *(b + 0 * 4 + 3) =
                                    prefactor_z * *(b + 0 * 4 + 0) -
                                    p_over_q * *(b + 3 * 4 + 0);
                            case 1:
                                *(b + 1 * 4 + 1) =
                                    prefactor_x * *(b + 1 * 4 + 0) -
                                    p_over_q * *(b + 4 * 4 + 0) +
                                    one_over_two_q * *(b + 0 * 4 + 0);

                                *(b + 1 * 4 + 2) =
                                    prefactor_y * *(b + 1 * 4 + 0) -
                                    p_over_q * *(b + 5 * 4 + 0);

                                *(b + 1 * 4 + 3) =
                                    prefactor_z * *(b + 1 * 4 + 0) -
                                    p_over_q * *(b + 6 * 4 + 0);

                                *(b + 2 * 4 + 1) =
                                    prefactor_x * *(b + 2 * 4 + 0) -
                                    p_over_q * *(b + 5 * 4 + 0);

                                *(b + 2 * 4 + 2) =
                                    prefactor_y * *(b + 2 * 4 + 0) -
                                    p_over_q * *(b + 7 * 4 + 0) +
                                    one_over_two_q * *(b + 0 * 4 + 0);

                                *(b + 2 * 4 + 3) =
                                    prefactor_z * *(b + 2 * 4 + 0) -
                                    p_over_q * *(b + 8 * 4 + 0);

                                *(b + 3 * 4 + 1) =
                                    prefactor_x * *(b + 3 * 4 + 0) -
                                    p_over_q * *(b + 6 * 4 + 0);

                                *(b + 3 * 4 + 2) =
                                    prefactor_y * *(b + 3 * 4 + 0) -
                                    p_over_q * *(b + 8 * 4 + 0);

                                *(b + 3 * 4 + 3) =
                                    prefactor_z * *(b + 3 * 4 + 0) -
                                    p_over_q * *(b + 9 * 4 + 0) +
                                    one_over_two_q * *(b + 0 * 4 + 0);
                            case 2:
                                *(b + 4 * 4 + 1) =
                                    prefactor_x * *(b + 4 * 4 + 0) -
                                    p_over_q * *(b + 10 * 4 + 0) +
                                    2 * one_over_two_q * *(b + 1 * 4 + 0);
                                *(b + 4 * 4 + 2) =
                                    prefactor_y * *(b + 4 * 4 + 0) -
                                    p_over_q * *(b + 11 * 4 + 0);
                                *(b + 4 * 4 + 3) =
                                    prefactor_z * *(b + 4 * 4 + 0) -
                                    p_over_q * *(b + 12 * 4 + 0);
                                *(b + 5 * 4 + 1) =
                                    prefactor_x * *(b + 5 * 4 + 0) -
                                    p_over_q * *(b + 11 * 4 + 0) +
                                    one_over_two_q * *(b + 2 * 4 + 0);
                                *(b + 5 * 4 + 2) =
                                    prefactor_y * *(b + 5 * 4 + 0) -
                                    p_over_q * *(b + 13 * 4 + 0) +
                                    one_over_two_q * *(b + 1 * 4 + 0);
                                *(b + 5 * 4 + 3) =
                                    prefactor_z * *(b + 5 * 4 + 0) -
                                    p_over_q * *(b + 14 * 4 + 0);
                                *(b + 6 * 4 + 1) =
                                    prefactor_x * *(b + 6 * 4 + 0) -
                                    p_over_q * *(b + 12 * 4 + 0) +
                                    one_over_two_q * *(b + 3 * 4 + 0);
                                *(b + 6 * 4 + 2) =
                                    prefactor_y * *(b + 6 * 4 + 0) -
                                    p_over_q * *(b + 14 * 4 + 0);
                                *(b + 6 * 4 + 3) =
                                    prefactor_z * *(b + 6 * 4 + 0) -
                                    p_over_q * *(b + 15 * 4 + 0) +
                                    one_over_two_q * *(b + 1 * 4 + 0);
                                *(b + 7 * 4 + 1) =
                                    prefactor_x * *(b + 7 * 4 + 0) -
                                    p_over_q * *(b + 13 * 4 + 0);
                                *(b + 7 * 4 + 2) =
                                    prefactor_y * *(b + 7 * 4 + 0) -
                                    p_over_q * *(b + 16 * 4 + 0) +
                                    2 * one_over_two_q * *(b + 2 * 4 + 0);
                                *(b + 7 * 4 + 3) =
                                    prefactor_z * *(b + 7 * 4 + 0) -
                                    p_over_q * *(b + 17 * 4 + 0);
                                *(b + 8 * 4 + 1) =
                                    prefactor_x * *(b + 8 * 4 + 0) -
                                    p_over_q * *(b + 14 * 4 + 0);
                                *(b + 8 * 4 + 2) =
                                    prefactor_y * *(b + 8 * 4 + 0) -
                                    p_over_q * *(b + 17 * 4 + 0) +
                                    one_over_two_q * *(b + 3 * 4 + 0);
                                *(b + 8 * 4 + 3) =
                                    prefactor_z * *(b + 8 * 4 + 0) -
                                    p_over_q * *(b + 18 * 4 + 0) +
                                    one_over_two_q * *(b + 2 * 4 + 0);
                                *(b + 9 * 4 + 1) =
                                    prefactor_x * *(b + 9 * 4 + 0) -
                                    p_over_q * *(b + 15 * 4 + 0);
                                *(b + 9 * 4 + 2) =
                                    prefactor_y * *(b + 9 * 4 + 0) -
                                    p_over_q * *(b + 18 * 4 + 0);
                                *(b + 9 * 4 + 3) =
                                    prefactor_z * *(b + 9 * 4 + 0) -
                                    p_over_q * *(b + 19 * 4 + 0) +
                                    2 * one_over_two_q * *(b + 3 * 4 + 0);
                            }

                            if (segmented_ket) {
                                double* AAAA_cur = AAAA_b;
                                for (unsigned ii = i_index_begin;
                                     ii < i_index_end;
                                     ++ii)
                                    for (unsigned kk = k_index_begin;
                                         kk < k_index_end;
                                         ++kk, ++AAAA_cur)
                                        *AAAA_cur += *(AA_b + ii * 4 + kk);
                            } else {
                                double* NIEDOIDA_RESTRICT B_cur = B_b;
                                for (unsigned ii = i_index_begin;
                                     ii < i_index_end;
                                     ++ii)
                                    for (unsigned kk = k_index_begin;
                                         kk < k_index_end;
                                         ++kk, ++B_cur)
                                        *B_cur = *(AA_b + ii * 4 + kk);

                                if (i_index_begin == 1 && k_index_begin == 1) {
                                    // contracting ket pair
                                    general_contraction(CT_34_cur,
                                                        AAAA_b,
                                                        B_b,
                                                        27,
                                                        ket_naive_size);
                                } else {
                                    general_contraction(CT_34_cur,
                                                        AAAA_b,
                                                        B_b,
                                                        angular_range,
                                                        ket_naive_size);
                                }
                            }
                        }
                    if (segmented_bra) {
                        segmented_contraction(BBBBBB_b, AAAA_b, amount);
                    } else {
                        // contracting bra pair
                        general_contraction(CT_12_cur,
                                            BBBBBB_b,
                                            AAAA_b,
                                            amount,
                                            bra_naive_size);
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
                unsigned n_j = 0;
                for (unsigned j = 0; j < naive_size_2; ++j) {
                    const unsigned l_j = ref_es2.l[j];
                    const unsigned j_size =
                        (spherical_basis ? l_j + l_j + 1
                                         : (l_j + 1) * (l_j + 2) / 2);
                    const unsigned l_ij = l_i + l_j;
                    const unsigned ii_index_begin =
                        (same_AB ? l_ij * (l_ij + 1) * (l_ij + 2) / 6
                                 : l_i * (l_i + 1) * (l_i + 2) / 6);
                    const unsigned ii_index_end =
                        (l_ij + 1) * (l_ij + 2) * (l_ij + 3) / 6;
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

                            // to working space for operations on the first pair
                            // of the current quartet
                            for (unsigned k_index = kk_index_begin;
                                 k_index < kk_index_end;
                                 ++k_index)
                                for (unsigned i_index = ii_index_begin;
                                     i_index < ii_index_end;
                                     ++i_index)
                                    *(CCC_b + k_index * CCC_s12 +
                                      i_index * CCC_s) =
                                        *(BBBBBB_cur +
                                          (i_index - i_index_begin) * BBBBBB_s +
                                          k_index - k_index_begin);

                            //(pseudo-)horizontal recursion
                            if (l_j > 0) {
                                if (same_AB) {
                                    switch (l_ij) {
                                    case 1:
                                        pseudo_hr_tot_1(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 2:
                                        pseudo_hr_tot_2(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    }
                                } else {
                                    const unsigned funny = l_i * 4 + l_j;
                                    switch (funny) {
                                    case 1:
                                        hr_01(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 5:
                                        hr_11(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the second one
                            if (l_j > 0) {
                                const unsigned iii_index_begin =
                                    l_i * (l_i + 1) * (l_i + 2) / 6;
                                const unsigned iii_index_end =
                                    (l_i + 1) * (l_i + 2) * (l_i + 3) / 6;
                                if (l_j == 1) {
                                    for (unsigned k_index = kk_index_begin;
                                         k_index < kk_index_end;
                                         ++k_index)
                                        for (unsigned i_index = iii_index_begin;
                                             i_index < iii_index_end;
                                             ++i_index) {
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  i_index * CCC_s + 1);
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s + 1) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  i_index * CCC_s + 2);
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s + 2) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  i_index * CCC_s + 3);
                                        }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the first one
                            if (l_i > 0) {
                                if (l_i == 1) {
                                    for (unsigned k_index = kk_index_begin;
                                         k_index < kk_index_end;
                                         ++k_index)
                                        for (unsigned j_index = 0;
                                             j_index < j_size;
                                             ++j_index) {
                                            *(CCC_b + k_index * CCC_s12 +
                                              j_index) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  CCC_s + j_index);
                                            *(CCC_b + k_index * CCC_s12 +
                                              CCC_s + j_index) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  CCC_s + CCC_s + j_index);
                                            *(CCC_b + k_index * CCC_s12 +
                                              CCC_s + CCC_s + j_index) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  CCC_s + CCC_s + CCC_s +
                                                  j_index);
                                        }
                                } else {
                                    if (spherical_basis) {
                                        cart_to_spher_1(2,
                                                        j_size,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                    } else {
                                        cart_to_cart_1(2,
                                                       j_size,
                                                       kk_index_begin,
                                                       kk_index_end,
                                                       CCC_b,
                                                       CCC_s12,
                                                       CCC_s);
                                    }
                                }
                            }

                            // to working space for operations on the second
                            // pair of the current quartet
                            unsigned ij_index = 0;
                            for (unsigned i_index = 0; i_index < i_size;
                                 ++i_index)
                                for (unsigned j_index = 0; j_index < j_size;
                                     ++j_index, ++ij_index)
                                    for (unsigned k_index = kk_index_begin;
                                         k_index < kk_index_end;
                                         ++k_index)
                                        *(DDD_b + ij_index * DDD_s12 +
                                          k_index * DDD_s) =
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s + j_index);
                            const unsigned ij_index_end = ij_index;

                            //(pseudo-)horizontal recursion
                            if (l_l > 0) {
                                if (same_CD) {
                                    switch (l_kl) {
                                    case 1:
                                        pseudo_hr_tot_1(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
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
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the fourth one
                            if (l_l > 0) {
                                const unsigned kkk_index_begin =
                                    l_k * (l_k + 1) * (l_k + 2) / 6;
                                const unsigned kkk_index_end =
                                    (l_k + 1) * (l_k + 2) * (l_k + 3) / 6;
                                if (l_l == 1) {
                                    for (unsigned ij_index = 0;
                                         ij_index < ij_index_end;
                                         ++ij_index)
                                        for (unsigned k_index = kkk_index_begin;
                                             k_index < kkk_index_end;
                                             ++k_index) {
                                            *(DDD_b + ij_index * DDD_s12 +
                                              k_index * DDD_s) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  k_index * DDD_s + 1);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              k_index * DDD_s + 1) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  k_index * DDD_s + 2);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              k_index * DDD_s + 2) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  k_index * DDD_s + 3);
                                        }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the third one
                            if (l_k > 0) {
                                if (l_k == 1) {
                                    for (unsigned ij_index = 0;
                                         ij_index < ij_index_end;
                                         ++ij_index)
                                        for (unsigned l_index = 0;
                                             l_index < l_size;
                                             ++l_index) {
                                            *(DDD_b + ij_index * DDD_s12 +
                                              l_index) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  DDD_s + l_index);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              DDD_s + l_index) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  DDD_s + DDD_s + l_index);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              DDD_s + DDD_s + l_index) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  DDD_s + DDD_s + DDD_s +
                                                  l_index);
                                        }
                                }
                            }

                            // returning to the input order
                            unswap(DDD_b,
                                   DDD_s12,
                                   DDD_s,
                                   results,
                                   i_size,
                                   j_size,
                                   k_size,
                                   l_size,
                                   size_1,
                                   size_2,
                                   size_3,
                                   size_4,
                                   n_i,
                                   n_j,
                                   n_k,
                                   n_l,
                                   swapped_1,
                                   swapped_2,
                                   swapped_12);

                            n_l += l_size;
                        }
                        n_k += k_size;
                    }
                    n_j += j_size;
                }
                n_i += i_size;
            }
        }

        void OS1TwoElectronIntegralEngine::calc_bra_l_2_ket_l_2_shells(
            const FlatBasisSet::Shell& es1,
            const FlatBasisSet::Shell& es2,
            const FlatBasisSet::Shell& es3,
            const FlatBasisSet::Shell& es4,
            double* results) const
        { // general types
            /* swapping may be needed to perform better*/
            const FlatBasisSet::Shell *shell_1_pointer = &es1,
                                      *shell_2_pointer = &es2,
                                      *shell_3_pointer = &es3,
                                      *shell_4_pointer = &es4;
            const FlatBasisSet::Shell* tmp_pointer;

            const bool swapped_1 = (es1.l_max < es2.l_max);
            const bool swapped_2 = (es3.l_max < es4.l_max);
            const bool swapped_12 =
                (es1.l_max + es2.l_max < es3.l_max + es4.l_max);

            // swapping first pair
            if (swapped_1) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_2_pointer;
                shell_2_pointer = tmp_pointer;
            }
            // swapping second pair
            if (swapped_2) {
                tmp_pointer = shell_3_pointer;
                shell_3_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // swapping pairs
            if (swapped_12) {
                tmp_pointer = shell_1_pointer;
                shell_1_pointer = shell_3_pointer;
                shell_3_pointer = tmp_pointer;
                tmp_pointer = shell_2_pointer;
                shell_2_pointer = shell_4_pointer;
                shell_4_pointer = tmp_pointer;
            }
            // references initializing
            const FlatBasisSet::Shell &ref_es1 = *shell_1_pointer,
                                      &ref_es2 = *shell_2_pointer,
                                      &ref_es3 = *shell_3_pointer,
                                      &ref_es4 = *shell_4_pointer;
            // end of swapping

            // preparing some constants
            const bool same_AB = (ref_es1.atom == ref_es2.atom);
            const bool same_CD = (ref_es3.atom == ref_es4.atom);

            const unsigned l_1_min = ref_es1.l_min;
            const unsigned l_2_min = ref_es2.l_min;
            const unsigned l_3_min = ref_es3.l_min;
            const unsigned l_4_min = ref_es4.l_min;
            const unsigned l_12_min = l_1_min + l_2_min;
            const unsigned l_34_min = l_3_min + l_4_min;
            const unsigned l_12 = ref_es1.l_max + ref_es2.l_max;
            const unsigned l_34 = ref_es3.l_max + ref_es4.l_max;
            const unsigned m = l_12 + l_34;
            const unsigned prim_size_1 = ref_es1.primitive_exps.size();
            const unsigned prim_size_2 = ref_es2.primitive_exps.size();
            const unsigned prim_size_3 = ref_es3.primitive_exps.size();
            const unsigned prim_size_4 = ref_es4.primitive_exps.size();
            const unsigned naive_size_1 = ref_es1.naive_size;
            const unsigned naive_size_2 = ref_es2.naive_size;
            const unsigned naive_size_3 = ref_es3.naive_size;
            const unsigned naive_size_4 = ref_es4.naive_size;
            const unsigned size_1 = ref_es1.size;
            const unsigned size_2 = ref_es2.size;
            const unsigned size_3 = ref_es3.size;
            const unsigned size_4 = ref_es4.size;

            const unsigned first_pair_min = (same_AB ? l_12_min : l_1_min);

            const unsigned i_index_begin =
                (same_AB ? l_12_min * (l_12_min + 1) * (l_12_min + 2) / 6
                         : l_1_min * (l_1_min + 1) * (l_1_min + 2) / 6);
            const unsigned i_index_end =
                (l_12 + 1) * (l_12 + 2) * (l_12 + 3) / 6;
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
            const unsigned bra_naive_size = naive_size_1 * naive_size_2;
            const unsigned bra_prim_size = prim_size_1 * prim_size_2;
            const unsigned amount = ket_naive_size * angular_range;

            const bool segmented_ket = (ket_naive_size == 1);
            const bool segmented_bra = (bra_naive_size == 1);

            // setting up working arrays
            double* memory_pointer = memory_pool.get();

            double* const A_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_exp_p_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_R_P_b = memory_pointer;
            memory_pointer += 3 * bra_prim_size;
            double* const A_R_PA_b = memory_pointer;
            memory_pointer += 3 * bra_prim_size;
            double* const A_p_coeff_b = memory_pointer;
            memory_pointer += bra_prim_size;
            double* const A_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_exp_q_b = memory_pointer;
            memory_pointer += ket_prim_size;
            double* const A_R_Q_b = memory_pointer;
            memory_pointer += 3 * ket_prim_size;
            double* const A_q_coeff_b = memory_pointer;
            memory_pointer += ket_prim_size;

            double* const AA_b = memory_pointer;
            const unsigned AA_s = 10;
            //    const unsigned AA_s = max(m + 1, k_index_end);
            memory_pointer += AA_s * (m + 1) * (m + 2) * (m + 3) / 6;

            /*
                array_type_2 AA(memory_pointer, extents_2
                [(m + 1) * (m + 2) * (m + 3) / 6]
                [max(m + 1, k_index_end)]);
                memory_pointer += AA.num_elements();
                double* const AA_b = AA.data();
                const unsigned AA_s = AA.shape()[1];
            */
            double* const B_b = memory_pointer;
            memory_pointer += angular_range;
            /*
              array_type_1 B(memory_pointer, extents_1
              [angular_range]);
              memory_pointer += B.num_elements();
            */

            double* const CT_34_b = memory_pointer;
            memory_pointer += ket_naive_size * ket_prim_size;

            double* const AAAA_b = memory_pointer;
            const unsigned AAAA_total_size = ket_naive_size * angular_range;
            memory_pointer += AAAA_total_size;
            /*
              array_type_4 AAAA(memory_pointer, extents_4
              [naive_size_3]
              [naive_size_4]
              [i_range]
              [k_range]);
              memory_pointer += AAAA.num_elements();
            */
            double* const CT_12_b = memory_pointer;
            memory_pointer += bra_naive_size * bra_prim_size;

            double* const BBBBBB_b = memory_pointer;
            const unsigned BBBBBB_s = k_range;
            const unsigned BBBBBB_total_size = AAAA_total_size * bra_naive_size;
            memory_pointer += BBBBBB_total_size;
            std::memset(BBBBBB_b, 0, BBBBBB_total_size * sizeof(double));
            /*
              array_type_6 BBBBBB(memory_pointer, extents_6
              [naive_size_1]
              [naive_size_2]
              [naive_size_3]
              [naive_size_4]
              [i_range]
              [k_range]);
              memory_pointer += BBBBBB.num_elements();
              memset(BBBBBB.data(), 0, BBBBBB.num_elements() * sizeof(double));
            */

            double* const CCC_b = memory_pointer;
            const unsigned CCC_s = (ref_es2.l_max + 1) * (ref_es2.l_max + 2) *
                                   (ref_es2.l_max + 3) / 6;
            const unsigned CCC_s12 = i_index_end * CCC_s;
            memory_pointer += k_index_end * CCC_s12;
            /*
              array_type_3 CCC(memory_pointer, extents_3
              [k_index_end]
              [i_index_end]
              [(ref_es2.l_max + 1) * (ref_es2.l_max + 2) * (ref_es2.l_max + 3) /
              6]); memory_pointer += CCC.num_elements();
            */
            double* const DDD_b = memory_pointer;
            const unsigned DDD_s = (ref_es4.l_max + 1) * (ref_es4.l_max + 2) *
                                   (ref_es4.l_max + 3) / 6;
            const unsigned DDD_s12 = DDD_s * k_index_end;
            memory_pointer += DDD_s12 * (ref_es1.l_max + 1) *
                              (ref_es1.l_max + 2) * (ref_es2.l_max + 1) *
                              (ref_es2.l_max + 2) / 4;
            /*
              array_type_3 DDD(memory_pointer, extents_3
              [(ref_es1.l_max + 1) * (ref_es1.l_max + 2) * (ref_es2.l_max + 1) *
              (ref_es2.l_max + 2) / 4] [k_index_end]
              [(ref_es4.l_max + 1) * (ref_es4.l_max + 2) * (ref_es4.l_max + 3) /
              6]); memory_pointer += DDD.num_elements();
            */

            // setting two center (or pair of primitives) quantites
            const double X_AB =
                ref_es1.atom->coords[0] - ref_es2.atom->coords[0];
            const double Y_AB =
                ref_es1.atom->coords[1] - ref_es2.atom->coords[1];
            const double Z_AB =
                ref_es1.atom->coords[2] - ref_es2.atom->coords[2];
            const double R_AB_2 = X_AB * X_AB + Y_AB * Y_AB + Z_AB * Z_AB;
            const double X_CD =
                ref_es3.atom->coords[0] - ref_es4.atom->coords[0];
            const double Y_CD =
                ref_es3.atom->coords[1] - ref_es4.atom->coords[1];
            const double Z_CD =
                ref_es3.atom->coords[2] - ref_es4.atom->coords[2];
            const double R_CD_2 = X_CD * X_CD + Y_CD * Y_CD + Z_CD * Z_CD;

            const unsigned bra_l = ((l_12 & 1) ? l_12 / 2 + 1 : l_12 / 2);
            const unsigned ket_l = ((l_34 & 1) ? l_34 / 2 + 1 : l_34 / 2);

            const double global_bra_estimator =
                std::max(1e0, std::pow(R_AB_2, bra_l));
            const double global_ket_estimator =
                std::max(1e0, std::pow(R_CD_2, ket_l));
            double max_ket_estimator = 0;

            // preparing contractions
            const double* const CT_1_b =
                &ref_es1.prenormed_contraction_coeffs(0, 0);
            const double* const CT_2_b =
                &ref_es2.prenormed_contraction_coeffs(0, 0);
            const double* const CT_3_b =
                &ref_es3.prenormed_contraction_coeffs(0, 0);
            const double* const CT_4_b =
                &ref_es4.prenormed_contraction_coeffs(0, 0);
            double* CT_12_cur = CT_12_b;
            double* CT_34_cur = CT_34_b;

            prepare_contraction(CT_1_b,
                                CT_2_b,
                                CT_12_cur,
                                prim_size_1,
                                prim_size_2,
                                naive_size_1,
                                naive_size_2);

            prepare_contraction(CT_3_b,
                                CT_4_b,
                                CT_34_cur,
                                prim_size_3,
                                prim_size_4,
                                naive_size_3,
                                naive_size_4);

            std::memset(A_p_coeff_b, 0, bra_prim_size * sizeof(double));
            std::memset(A_q_coeff_b, 0, ket_prim_size * sizeof(double));
            for (unsigned i = 0; i < bra_prim_size; ++i)
                for (unsigned j = 0; j < bra_naive_size; ++j)
                    if (std::abs(*(CT_12_b + i * bra_naive_size + j)) >
                        *(A_p_coeff_b + i))
                        *(A_p_coeff_b + i) =
                            std::abs(*(CT_12_b + i * bra_naive_size + j));

            for (unsigned i = 0; i < ket_prim_size; ++i)
                for (unsigned j = 0; j < ket_naive_size; ++j)
                    if (std::abs(*(CT_34_b + i * ket_naive_size + j)) >
                        *(A_q_coeff_b + i))
                        *(A_q_coeff_b + i) =
                            std::abs(*(CT_34_b + i * ket_naive_size + j));

            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double p =
                        ref_es1.primitive_exps[i] + ref_es2.primitive_exps[j];
                    const double one_over_p = 1 / p;
                    const double mu = ref_es1.primitive_exps[i] *
                                      ref_es2.primitive_exps[j] * one_over_p;
                    *(A_p_b + ij_index) = p;
                    const double est1 = two_pi_to_five_over_four *
                                        exp(-(mu * R_AB_2)) * one_over_p;
                    *(A_exp_p_b + ij_index) = est1;
                    *(A_p_coeff_b + ij_index) *=
                        est1 * std::max(global_bra_estimator,
                                        std::pow(one_over_p, bra_l));
                    for (unsigned kk = 0; kk < 3; ++kk) {
                        const double R_P = (ref_es1.primitive_exps[i] *
                                                ref_es1.atom->coords[kk] +
                                            ref_es2.primitive_exps[j] *
                                                ref_es2.atom->coords[kk]) *
                                           one_over_p;
                        *(A_R_P_b + 3 * ij_index + kk) = R_P;
                        *(A_R_PA_b + 3 * ij_index + kk) =
                            R_P - ref_es1.atom->coords[kk];
                    }
                }

            for (unsigned i = 0, ij_index = 0; i < prim_size_3; ++i)
                for (unsigned j = 0; j < prim_size_4; ++j, ++ij_index) {
                    const double q =
                        ref_es3.primitive_exps[i] + ref_es4.primitive_exps[j];
                    const double one_over_q = 1 / q;
                    const double nu = ref_es3.primitive_exps[i] *
                                      ref_es4.primitive_exps[j] * one_over_q;
                    *(A_q_b + ij_index) = q;
                    const double est1 = two_pi_to_five_over_four *
                                        exp(-(nu * R_CD_2)) * one_over_q;
                    *(A_exp_q_b + ij_index) = est1;
                    *(A_q_coeff_b + ij_index) *=
                        est1 * std::max(global_ket_estimator,
                                        std::pow(one_over_q, ket_l));
                    if (max_ket_estimator < *(A_q_coeff_b + ij_index))
                        max_ket_estimator = *(A_q_coeff_b + ij_index);
                    for (unsigned kk = 0; kk < 3; ++kk) {
                        *(A_R_Q_b + 3 * ij_index + kk) =
                            (ref_es3.primitive_exps[i] *
                                 ref_es3.atom->coords[kk] +
                             ref_es4.primitive_exps[j] *
                                 ref_es4.atom->coords[kk]) *
                            one_over_q;
                    }
                }
            double prim_treshold = m_treshold / (ket_prim_size * bra_prim_size);

            // quick hack to be on a safe side of Schwartz inequality
            if (&es1 == &es3 && &es2 == &es4)
                prim_treshold = 0;

            // loop over quartets of primitives
            for (unsigned i = 0, ij_index = 0; i < prim_size_1; ++i)
                for (unsigned j = 0; j < prim_size_2; ++j, ++ij_index) {
                    const double coeff_ij = *(A_p_coeff_b + ij_index);
                    if (coeff_ij * max_ket_estimator < prim_treshold)
                        continue;
                    std::memset(AAAA_b, 0, AAAA_total_size * sizeof(double));
                    const double* CT_12_cur =
                        CT_12_b + ij_index * bra_naive_size;
                    const double p = *(A_p_b + ij_index);
                    const double one_over_p = 1 / p;
                    const double one_over_two_p = one_over_p / 2;
                    for (unsigned k = 0, kl_index = 0; k < prim_size_3; ++k)
                        for (unsigned l = 0; l < prim_size_4; ++l, ++kl_index) {
                            const double coeff_max =
                                coeff_ij * *(A_q_coeff_b + kl_index);
                            if (coeff_max < prim_treshold)
                                continue;
                            const double* CT_34_cur =
                                CT_34_b + kl_index * ket_naive_size;
                            const double estimator = *(A_exp_p_b + ij_index) *
                                                     *(A_exp_q_b + kl_index);
                            const double q = *(A_q_b + kl_index);
                            const double one_over_q = 1 / q;
                            const double alpha = 1 / (one_over_p + one_over_q);
                            const double alpha_over_p = alpha * one_over_p;
                            const double X_PQ = *(A_R_P_b + 3 * ij_index) -
                                                *(A_R_Q_b + 3 * kl_index);
                            const double Y_PQ = *(A_R_P_b + 3 * ij_index + 1) -
                                                *(A_R_Q_b + 3 * kl_index + 1);
                            const double Z_PQ = *(A_R_P_b + 3 * ij_index + 2) -
                                                *(A_R_Q_b + 3 * kl_index + 2);
                            const double R_PQ_2 =
                                X_PQ * X_PQ + Y_PQ * Y_PQ + Z_PQ * Z_PQ;

                            // Boys function evaluation and zero-th integrals
                            // computation
                            double prefactor = estimator / sqrt(p + q);
                            if (segmented_ket)
                                prefactor *= *CT_34_cur;
                            if (segmented_bra)
                                prefactor *= *CT_12_cur;
                            const double arg = alpha * R_PQ_2;
                            misc::fast_boys.generalized_boys(
                                4, arg, prefactor, AA_b);
                            double* NIEDOIDA_RESTRICT b = AA_b;
                            // vertical recursion
                            const double alpha_X = -alpha_over_p * X_PQ;
                            const double alpha_Y = -alpha_over_p * Y_PQ;
                            const double alpha_Z = -alpha_over_p * Z_PQ;
                            if (same_AB) {
                                *(b + 1 * 10 + 0) = alpha_X * *(b + 0 * 10 + 1);
                                *(b + 2 * 10 + 0) = alpha_Y * *(b + 0 * 10 + 1);
                                *(b + 3 * 10 + 0) = alpha_Z * *(b + 0 * 10 + 1);
                                *(b + 1 * 10 + 1) = alpha_X * *(b + 0 * 10 + 2);
                                *(b + 2 * 10 + 1) = alpha_Y * *(b + 0 * 10 + 2);
                                *(b + 3 * 10 + 1) = alpha_Z * *(b + 0 * 10 + 2);
                                *(b + 1 * 10 + 2) = alpha_X * *(b + 0 * 10 + 3);
                                *(b + 2 * 10 + 2) = alpha_Y * *(b + 0 * 10 + 3);
                                *(b + 3 * 10 + 2) = alpha_Z * *(b + 0 * 10 + 3);
                                *(b + 4 * 10 + 0) =
                                    alpha_X * *(b + 1 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 0) -
                                         alpha_over_p * *(b + 0 * 10 + 1));
                                *(b + 5 * 10 + 0) = alpha_Y * *(b + 1 * 10 + 1);
                                *(b + 6 * 10 + 0) = alpha_Z * *(b + 1 * 10 + 1);
                                *(b + 7 * 10 + 0) =
                                    alpha_Y * *(b + 2 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 0) -
                                         alpha_over_p * *(b + 0 * 10 + 1));
                                *(b + 8 * 10 + 0) = alpha_Z * *(b + 2 * 10 + 1);
                                *(b + 9 * 10 + 0) =
                                    alpha_Z * *(b + 3 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 0) -
                                         alpha_over_p * *(b + 0 * 10 + 1));
                                *(b + 4 * 10 + 1) =
                                    alpha_X * *(b + 1 * 10 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 1) -
                                         alpha_over_p * *(b + 0 * 10 + 2));
                                *(b + 5 * 10 + 1) = alpha_Y * *(b + 1 * 10 + 2);
                                *(b + 7 * 10 + 1) =
                                    alpha_Y * *(b + 2 * 10 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 1) -
                                         alpha_over_p * *(b + 0 * 10 + 2));
                                *(b + 9 * 10 + 1) =
                                    alpha_Z * *(b + 3 * 10 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 1) -
                                         alpha_over_p * *(b + 0 * 10 + 2));
                                *(b + 10 * 10 + 0) =
                                    alpha_X * *(b + 4 * 10 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 1 * 10 + 0) -
                                         alpha_over_p * *(b + 1 * 10 + 1));
                                *(b + 11 * 10 + 0) =
                                    alpha_Y * *(b + 4 * 10 + 1);
                                *(b + 12 * 10 + 0) =
                                    alpha_Z * *(b + 4 * 10 + 1);
                                *(b + 13 * 10 + 0) =
                                    alpha_X * *(b + 7 * 10 + 1);
                                *(b + 14 * 10 + 0) =
                                    alpha_Z * *(b + 5 * 10 + 1);
                                *(b + 15 * 10 + 0) =
                                    alpha_X * *(b + 9 * 10 + 1);
                                *(b + 16 * 10 + 0) =
                                    alpha_Y * *(b + 7 * 10 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 2 * 10 + 0) -
                                         alpha_over_p * *(b + 2 * 10 + 1));
                                *(b + 17 * 10 + 0) =
                                    alpha_Z * *(b + 7 * 10 + 1);
                                *(b + 18 * 10 + 0) =
                                    alpha_Y * *(b + 9 * 10 + 1);
                                *(b + 19 * 10 + 0) =
                                    alpha_Z * *(b + 9 * 10 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 3 * 10 + 0) -
                                         alpha_over_p * *(b + 3 * 10 + 1));
                                *(b + 1 * 10 + 3) = alpha_X * *(b + 0 * 10 + 4);
                                *(b + 2 * 10 + 3) = alpha_Y * *(b + 0 * 10 + 4);
                                *(b + 3 * 10 + 3) = alpha_Z * *(b + 0 * 10 + 4);
                                *(b + 4 * 10 + 2) =
                                    alpha_X * *(b + 1 * 10 + 3) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 2) -
                                         alpha_over_p * *(b + 0 * 10 + 3));
                                *(b + 7 * 10 + 2) =
                                    alpha_Y * *(b + 2 * 10 + 3) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 2) -
                                         alpha_over_p * *(b + 0 * 10 + 3));
                                *(b + 9 * 10 + 2) =
                                    alpha_Z * *(b + 3 * 10 + 3) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 2) -
                                         alpha_over_p * *(b + 0 * 10 + 3));
                                *(b + 10 * 10 + 1) =
                                    alpha_X * *(b + 4 * 10 + 2) +
                                    2 * one_over_two_p *
                                        (*(b + 1 * 10 + 1) -
                                         alpha_over_p * *(b + 1 * 10 + 2));
                                *(b + 11 * 10 + 1) =
                                    alpha_Y * *(b + 4 * 10 + 2);
                                *(b + 12 * 10 + 1) =
                                    alpha_Z * *(b + 4 * 10 + 2);
                                *(b + 13 * 10 + 1) =
                                    alpha_X * *(b + 7 * 10 + 2);
                                *(b + 15 * 10 + 1) =
                                    alpha_X * *(b + 9 * 10 + 2);
                                *(b + 16 * 10 + 1) =
                                    alpha_Y * *(b + 7 * 10 + 2) +
                                    2 * one_over_two_p *
                                        (*(b + 2 * 10 + 1) -
                                         alpha_over_p * *(b + 2 * 10 + 2));
                                *(b + 17 * 10 + 1) =
                                    alpha_Z * *(b + 7 * 10 + 2);
                                *(b + 19 * 10 + 1) =
                                    alpha_Z * *(b + 9 * 10 + 2) +
                                    2 * one_over_two_p *
                                        (*(b + 3 * 10 + 1) -
                                         alpha_over_p * *(b + 3 * 10 + 2));
                                *(b + 20 * 10 + 0) =
                                    alpha_X * *(b + 10 * 10 + 1) +
                                    3 * one_over_two_p *
                                        (*(b + 4 * 10 + 0) -
                                         alpha_over_p * *(b + 4 * 10 + 1));
                                *(b + 21 * 10 + 0) =
                                    alpha_Y * *(b + 10 * 10 + 1);
                                *(b + 22 * 10 + 0) =
                                    alpha_Z * *(b + 10 * 10 + 1);
                                *(b + 23 * 10 + 0) =
                                    alpha_Y * *(b + 11 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 4 * 10 + 0) -
                                         alpha_over_p * *(b + 4 * 10 + 1));
                                *(b + 24 * 10 + 0) =
                                    alpha_Z * *(b + 11 * 10 + 1);
                                *(b + 25 * 10 + 0) =
                                    alpha_Z * *(b + 12 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 4 * 10 + 0) -
                                         alpha_over_p * *(b + 4 * 10 + 1));
                                *(b + 26 * 10 + 0) =
                                    alpha_X * *(b + 16 * 10 + 1);
                                *(b + 27 * 10 + 0) =
                                    alpha_Z * *(b + 13 * 10 + 1);
                                *(b + 28 * 10 + 0) =
                                    alpha_Y * *(b + 15 * 10 + 1);
                                *(b + 29 * 10 + 0) =
                                    alpha_X * *(b + 19 * 10 + 1);
                                *(b + 30 * 10 + 0) =
                                    alpha_Y * *(b + 16 * 10 + 1) +
                                    3 * one_over_two_p *
                                        (*(b + 7 * 10 + 0) -
                                         alpha_over_p * *(b + 7 * 10 + 1));
                                *(b + 31 * 10 + 0) =
                                    alpha_Z * *(b + 16 * 10 + 1);
                                *(b + 32 * 10 + 0) =
                                    alpha_Z * *(b + 17 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 7 * 10 + 0) -
                                         alpha_over_p * *(b + 7 * 10 + 1));
                                *(b + 33 * 10 + 0) =
                                    alpha_Y * *(b + 19 * 10 + 1);
                                *(b + 34 * 10 + 0) =
                                    alpha_Z * *(b + 19 * 10 + 1) +
                                    3 * one_over_two_p *
                                        (*(b + 9 * 10 + 0) -
                                         alpha_over_p * *(b + 9 * 10 + 1));
                            } else {
                                const double X_PA = *(A_R_PA_b + 3 * ij_index);
                                const double Y_PA =
                                    *(A_R_PA_b + 3 * ij_index + 1);
                                const double Z_PA =
                                    *(A_R_PA_b + 3 * ij_index + 2);
                                *(b + 1 * 10 + 0) = X_PA * *(b + 0 * 10 + 0) +
                                                    alpha_X * *(b + 0 * 10 + 1);
                                *(b + 2 * 10 + 0) = Y_PA * *(b + 0 * 10 + 0) +
                                                    alpha_Y * *(b + 0 * 10 + 1);
                                *(b + 3 * 10 + 0) = Z_PA * *(b + 0 * 10 + 0) +
                                                    alpha_Z * *(b + 0 * 10 + 1);
                                *(b + 1 * 10 + 1) = X_PA * *(b + 0 * 10 + 1) +
                                                    alpha_X * *(b + 0 * 10 + 2);
                                *(b + 2 * 10 + 1) = Y_PA * *(b + 0 * 10 + 1) +
                                                    alpha_Y * *(b + 0 * 10 + 2);
                                *(b + 3 * 10 + 1) = Z_PA * *(b + 0 * 10 + 1) +
                                                    alpha_Z * *(b + 0 * 10 + 2);
                                *(b + 1 * 10 + 2) = X_PA * *(b + 0 * 10 + 2) +
                                                    alpha_X * *(b + 0 * 10 + 3);
                                *(b + 2 * 10 + 2) = Y_PA * *(b + 0 * 10 + 2) +
                                                    alpha_Y * *(b + 0 * 10 + 3);
                                *(b + 3 * 10 + 2) = Z_PA * *(b + 0 * 10 + 2) +
                                                    alpha_Z * *(b + 0 * 10 + 3);
                                *(b + 4 * 10 + 0) =
                                    X_PA * *(b + 1 * 10 + 0) +
                                    alpha_X * *(b + 1 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 0) -
                                         alpha_over_p * *(b + 0 * 10 + 1));
                                *(b + 5 * 10 + 0) = Y_PA * *(b + 1 * 10 + 0) +
                                                    alpha_Y * *(b + 1 * 10 + 1);
                                *(b + 6 * 10 + 0) = Z_PA * *(b + 1 * 10 + 0) +
                                                    alpha_Z * *(b + 1 * 10 + 1);
                                *(b + 7 * 10 + 0) =
                                    Y_PA * *(b + 2 * 10 + 0) +
                                    alpha_Y * *(b + 2 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 0) -
                                         alpha_over_p * *(b + 0 * 10 + 1));
                                *(b + 8 * 10 + 0) = Z_PA * *(b + 2 * 10 + 0) +
                                                    alpha_Z * *(b + 2 * 10 + 1);
                                *(b + 9 * 10 + 0) =
                                    Z_PA * *(b + 3 * 10 + 0) +
                                    alpha_Z * *(b + 3 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 0) -
                                         alpha_over_p * *(b + 0 * 10 + 1));
                                *(b + 4 * 10 + 1) =
                                    X_PA * *(b + 1 * 10 + 1) +
                                    alpha_X * *(b + 1 * 10 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 1) -
                                         alpha_over_p * *(b + 0 * 10 + 2));
                                *(b + 5 * 10 + 1) = Y_PA * *(b + 1 * 10 + 1) +
                                                    alpha_Y * *(b + 1 * 10 + 2);
                                *(b + 7 * 10 + 1) =
                                    Y_PA * *(b + 2 * 10 + 1) +
                                    alpha_Y * *(b + 2 * 10 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 1) -
                                         alpha_over_p * *(b + 0 * 10 + 2));
                                *(b + 9 * 10 + 1) =
                                    Z_PA * *(b + 3 * 10 + 1) +
                                    alpha_Z * *(b + 3 * 10 + 2) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 1) -
                                         alpha_over_p * *(b + 0 * 10 + 2));
                                *(b + 10 * 10 + 0) =
                                    X_PA * *(b + 4 * 10 + 0) +
                                    alpha_X * *(b + 4 * 10 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 1 * 10 + 0) -
                                         alpha_over_p * *(b + 1 * 10 + 1));
                                *(b + 11 * 10 + 0) =
                                    Y_PA * *(b + 4 * 10 + 0) +
                                    alpha_Y * *(b + 4 * 10 + 1);
                                *(b + 12 * 10 + 0) =
                                    Z_PA * *(b + 4 * 10 + 0) +
                                    alpha_Z * *(b + 4 * 10 + 1);
                                *(b + 13 * 10 + 0) =
                                    X_PA * *(b + 7 * 10 + 0) +
                                    alpha_X * *(b + 7 * 10 + 1);
                                *(b + 14 * 10 + 0) =
                                    Z_PA * *(b + 5 * 10 + 0) +
                                    alpha_Z * *(b + 5 * 10 + 1);
                                *(b + 15 * 10 + 0) =
                                    X_PA * *(b + 9 * 10 + 0) +
                                    alpha_X * *(b + 9 * 10 + 1);
                                *(b + 16 * 10 + 0) =
                                    Y_PA * *(b + 7 * 10 + 0) +
                                    alpha_Y * *(b + 7 * 10 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 2 * 10 + 0) -
                                         alpha_over_p * *(b + 2 * 10 + 1));
                                *(b + 17 * 10 + 0) =
                                    Z_PA * *(b + 7 * 10 + 0) +
                                    alpha_Z * *(b + 7 * 10 + 1);
                                *(b + 18 * 10 + 0) =
                                    Y_PA * *(b + 9 * 10 + 0) +
                                    alpha_Y * *(b + 9 * 10 + 1);
                                *(b + 19 * 10 + 0) =
                                    Z_PA * *(b + 9 * 10 + 0) +
                                    alpha_Z * *(b + 9 * 10 + 1) +
                                    2 * one_over_two_p *
                                        (*(b + 3 * 10 + 0) -
                                         alpha_over_p * *(b + 3 * 10 + 1));
                                *(b + 1 * 10 + 3) = X_PA * *(b + 0 * 10 + 3) +
                                                    alpha_X * *(b + 0 * 10 + 4);
                                *(b + 2 * 10 + 3) = Y_PA * *(b + 0 * 10 + 3) +
                                                    alpha_Y * *(b + 0 * 10 + 4);
                                *(b + 3 * 10 + 3) = Z_PA * *(b + 0 * 10 + 3) +
                                                    alpha_Z * *(b + 0 * 10 + 4);
                                *(b + 4 * 10 + 2) =
                                    X_PA * *(b + 1 * 10 + 2) +
                                    alpha_X * *(b + 1 * 10 + 3) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 2) -
                                         alpha_over_p * *(b + 0 * 10 + 3));
                                *(b + 7 * 10 + 2) =
                                    Y_PA * *(b + 2 * 10 + 2) +
                                    alpha_Y * *(b + 2 * 10 + 3) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 2) -
                                         alpha_over_p * *(b + 0 * 10 + 3));
                                *(b + 9 * 10 + 2) =
                                    Z_PA * *(b + 3 * 10 + 2) +
                                    alpha_Z * *(b + 3 * 10 + 3) +
                                    one_over_two_p *
                                        (*(b + 0 * 10 + 2) -
                                         alpha_over_p * *(b + 0 * 10 + 3));
                                *(b + 10 * 10 + 1) =
                                    X_PA * *(b + 4 * 10 + 1) +
                                    alpha_X * *(b + 4 * 10 + 2) +
                                    2 * one_over_two_p *
                                        (*(b + 1 * 10 + 1) -
                                         alpha_over_p * *(b + 1 * 10 + 2));
                                *(b + 11 * 10 + 1) =
                                    Y_PA * *(b + 4 * 10 + 1) +
                                    alpha_Y * *(b + 4 * 10 + 2);
                                *(b + 12 * 10 + 1) =
                                    Z_PA * *(b + 4 * 10 + 1) +
                                    alpha_Z * *(b + 4 * 10 + 2);
                                *(b + 13 * 10 + 1) =
                                    X_PA * *(b + 7 * 10 + 1) +
                                    alpha_X * *(b + 7 * 10 + 2);
                                *(b + 15 * 10 + 1) =
                                    X_PA * *(b + 9 * 10 + 1) +
                                    alpha_X * *(b + 9 * 10 + 2);
                                *(b + 16 * 10 + 1) =
                                    Y_PA * *(b + 7 * 10 + 1) +
                                    alpha_Y * *(b + 7 * 10 + 2) +
                                    2 * one_over_two_p *
                                        (*(b + 2 * 10 + 1) -
                                         alpha_over_p * *(b + 2 * 10 + 2));
                                *(b + 17 * 10 + 1) =
                                    Z_PA * *(b + 7 * 10 + 1) +
                                    alpha_Z * *(b + 7 * 10 + 2);
                                *(b + 19 * 10 + 1) =
                                    Z_PA * *(b + 9 * 10 + 1) +
                                    alpha_Z * *(b + 9 * 10 + 2) +
                                    2 * one_over_two_p *
                                        (*(b + 3 * 10 + 1) -
                                         alpha_over_p * *(b + 3 * 10 + 2));
                                *(b + 20 * 10 + 0) =
                                    X_PA * *(b + 10 * 10 + 0) +
                                    alpha_X * *(b + 10 * 10 + 1) +
                                    3 * one_over_two_p *
                                        (*(b + 4 * 10 + 0) -
                                         alpha_over_p * *(b + 4 * 10 + 1));
                                *(b + 21 * 10 + 0) =
                                    Y_PA * *(b + 10 * 10 + 0) +
                                    alpha_Y * *(b + 10 * 10 + 1);
                                *(b + 22 * 10 + 0) =
                                    Z_PA * *(b + 10 * 10 + 0) +
                                    alpha_Z * *(b + 10 * 10 + 1);
                                *(b + 23 * 10 + 0) =
                                    Y_PA * *(b + 11 * 10 + 0) +
                                    alpha_Y * *(b + 11 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 4 * 10 + 0) -
                                         alpha_over_p * *(b + 4 * 10 + 1));
                                *(b + 24 * 10 + 0) =
                                    Z_PA * *(b + 11 * 10 + 0) +
                                    alpha_Z * *(b + 11 * 10 + 1);
                                *(b + 25 * 10 + 0) =
                                    Z_PA * *(b + 12 * 10 + 0) +
                                    alpha_Z * *(b + 12 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 4 * 10 + 0) -
                                         alpha_over_p * *(b + 4 * 10 + 1));
                                *(b + 26 * 10 + 0) =
                                    X_PA * *(b + 16 * 10 + 0) +
                                    alpha_X * *(b + 16 * 10 + 1);
                                *(b + 27 * 10 + 0) =
                                    Z_PA * *(b + 13 * 10 + 0) +
                                    alpha_Z * *(b + 13 * 10 + 1);
                                *(b + 28 * 10 + 0) =
                                    Y_PA * *(b + 15 * 10 + 0) +
                                    alpha_Y * *(b + 15 * 10 + 1);
                                *(b + 29 * 10 + 0) =
                                    X_PA * *(b + 19 * 10 + 0) +
                                    alpha_X * *(b + 19 * 10 + 1);
                                *(b + 30 * 10 + 0) =
                                    Y_PA * *(b + 16 * 10 + 0) +
                                    alpha_Y * *(b + 16 * 10 + 1) +
                                    3 * one_over_two_p *
                                        (*(b + 7 * 10 + 0) -
                                         alpha_over_p * *(b + 7 * 10 + 1));
                                *(b + 31 * 10 + 0) =
                                    Z_PA * *(b + 16 * 10 + 0) +
                                    alpha_Z * *(b + 16 * 10 + 1);
                                *(b + 32 * 10 + 0) =
                                    Z_PA * *(b + 17 * 10 + 0) +
                                    alpha_Z * *(b + 17 * 10 + 1) +
                                    one_over_two_p *
                                        (*(b + 7 * 10 + 0) -
                                         alpha_over_p * *(b + 7 * 10 + 1));
                                *(b + 33 * 10 + 0) =
                                    Y_PA * *(b + 19 * 10 + 0) +
                                    alpha_Y * *(b + 19 * 10 + 1);
                                *(b + 34 * 10 + 0) =
                                    Z_PA * *(b + 19 * 10 + 0) +
                                    alpha_Z * *(b + 19 * 10 + 1) +
                                    3 * one_over_two_p *
                                        (*(b + 9 * 10 + 0) -
                                         alpha_over_p * *(b + 9 * 10 + 1));
                            }
                            // electron transfer
                            //... preparation
                            const double one_over_two_q = one_over_q / 2;
                            const double prefactor_x =
                                -(ref_es2.primitive_exps[j] * X_AB +
                                  ref_es4.primitive_exps[l] * X_CD) *
                                one_over_q;
                            const double prefactor_y =
                                -(ref_es2.primitive_exps[j] * Y_AB +
                                  ref_es4.primitive_exps[l] * Y_CD) *
                                one_over_q;
                            const double prefactor_z =
                                -(ref_es2.primitive_exps[j] * Z_AB +
                                  ref_es4.primitive_exps[l] * Z_CD) *
                                one_over_q;
                            const double p_over_q = p * one_over_q;
                            // and now going on transfering one by one
                            switch (first_pair_min) {
                            case 0:
                                *(b + 0 * 10 + 1) =
                                    prefactor_x * *(b + 0 * 10 + 0) -
                                    p_over_q * *(b + 1 * 10 + 0);
                                *(b + 0 * 10 + 2) =
                                    prefactor_y * *(b + 0 * 10 + 0) -
                                    p_over_q * *(b + 2 * 10 + 0);
                                *(b + 0 * 10 + 3) =
                                    prefactor_z * *(b + 0 * 10 + 0) -
                                    p_over_q * *(b + 3 * 10 + 0);
                                *(b + 1 * 10 + 1) =
                                    prefactor_x * *(b + 1 * 10 + 0) -
                                    p_over_q * *(b + 4 * 10 + 0) +
                                    one_over_two_q * *(b + 0 * 10 + 0);

                                *(b + 1 * 10 + 2) =
                                    prefactor_y * *(b + 1 * 10 + 0) -
                                    p_over_q * *(b + 5 * 10 + 0);

                                *(b + 1 * 10 + 3) =
                                    prefactor_z * *(b + 1 * 10 + 0) -
                                    p_over_q * *(b + 6 * 10 + 0);

                                *(b + 2 * 10 + 1) =
                                    prefactor_x * *(b + 2 * 10 + 0) -
                                    p_over_q * *(b + 5 * 10 + 0);

                                *(b + 2 * 10 + 2) =
                                    prefactor_y * *(b + 2 * 10 + 0) -
                                    p_over_q * *(b + 7 * 10 + 0) +
                                    one_over_two_q * *(b + 0 * 10 + 0);

                                *(b + 2 * 10 + 3) =
                                    prefactor_z * *(b + 2 * 10 + 0) -
                                    p_over_q * *(b + 8 * 10 + 0);

                                *(b + 3 * 10 + 1) =
                                    prefactor_x * *(b + 3 * 10 + 0) -
                                    p_over_q * *(b + 6 * 10 + 0);

                                *(b + 3 * 10 + 2) =
                                    prefactor_y * *(b + 3 * 10 + 0) -
                                    p_over_q * *(b + 8 * 10 + 0);

                                *(b + 3 * 10 + 3) =
                                    prefactor_z * *(b + 3 * 10 + 0) -
                                    p_over_q * *(b + 9 * 10 + 0) +
                                    one_over_two_q * *(b + 0 * 10 + 0);
                                *(b + 4 * 10 + 1) =
                                    prefactor_x * *(b + 4 * 10 + 0) -
                                    p_over_q * *(b + 10 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 4 * 10 + 2) =
                                    prefactor_y * *(b + 4 * 10 + 0) -
                                    p_over_q * *(b + 11 * 10 + 0);
                                *(b + 4 * 10 + 3) =
                                    prefactor_z * *(b + 4 * 10 + 0) -
                                    p_over_q * *(b + 12 * 10 + 0);
                                *(b + 5 * 10 + 1) =
                                    prefactor_x * *(b + 5 * 10 + 0) -
                                    p_over_q * *(b + 11 * 10 + 0) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 5 * 10 + 2) =
                                    prefactor_y * *(b + 5 * 10 + 0) -
                                    p_over_q * *(b + 13 * 10 + 0) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 5 * 10 + 3) =
                                    prefactor_z * *(b + 5 * 10 + 0) -
                                    p_over_q * *(b + 14 * 10 + 0);
                                *(b + 6 * 10 + 1) =
                                    prefactor_x * *(b + 6 * 10 + 0) -
                                    p_over_q * *(b + 12 * 10 + 0) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 6 * 10 + 2) =
                                    prefactor_y * *(b + 6 * 10 + 0) -
                                    p_over_q * *(b + 14 * 10 + 0);
                                *(b + 6 * 10 + 3) =
                                    prefactor_z * *(b + 6 * 10 + 0) -
                                    p_over_q * *(b + 15 * 10 + 0) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 7 * 10 + 1) =
                                    prefactor_x * *(b + 7 * 10 + 0) -
                                    p_over_q * *(b + 13 * 10 + 0);
                                *(b + 7 * 10 + 2) =
                                    prefactor_y * *(b + 7 * 10 + 0) -
                                    p_over_q * *(b + 16 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 7 * 10 + 3) =
                                    prefactor_z * *(b + 7 * 10 + 0) -
                                    p_over_q * *(b + 17 * 10 + 0);
                                *(b + 8 * 10 + 1) =
                                    prefactor_x * *(b + 8 * 10 + 0) -
                                    p_over_q * *(b + 14 * 10 + 0);
                                *(b + 8 * 10 + 2) =
                                    prefactor_y * *(b + 8 * 10 + 0) -
                                    p_over_q * *(b + 17 * 10 + 0) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 8 * 10 + 3) =
                                    prefactor_z * *(b + 8 * 10 + 0) -
                                    p_over_q * *(b + 18 * 10 + 0) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 9 * 10 + 1) =
                                    prefactor_x * *(b + 9 * 10 + 0) -
                                    p_over_q * *(b + 15 * 10 + 0);
                                *(b + 9 * 10 + 2) =
                                    prefactor_y * *(b + 9 * 10 + 0) -
                                    p_over_q * *(b + 18 * 10 + 0);
                                *(b + 9 * 10 + 3) =
                                    prefactor_z * *(b + 9 * 10 + 0) -
                                    p_over_q * *(b + 19 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 10 * 10 + 1) =
                                    prefactor_x * *(b + 10 * 10 + 0) -
                                    p_over_q * *(b + 20 * 10 + 0) +
                                    3 * one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 10 * 10 + 2) =
                                    prefactor_y * *(b + 10 * 10 + 0) -
                                    p_over_q * *(b + 21 * 10 + 0);
                                *(b + 10 * 10 + 3) =
                                    prefactor_z * *(b + 10 * 10 + 0) -
                                    p_over_q * *(b + 22 * 10 + 0);
                                *(b + 11 * 10 + 1) =
                                    prefactor_x * *(b + 11 * 10 + 0) -
                                    p_over_q * *(b + 21 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 11 * 10 + 2) =
                                    prefactor_y * *(b + 11 * 10 + 0) -
                                    p_over_q * *(b + 23 * 10 + 0) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 11 * 10 + 3) =
                                    prefactor_z * *(b + 11 * 10 + 0) -
                                    p_over_q * *(b + 24 * 10 + 0);
                                *(b + 12 * 10 + 1) =
                                    prefactor_x * *(b + 12 * 10 + 0) -
                                    p_over_q * *(b + 22 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 12 * 10 + 2) =
                                    prefactor_y * *(b + 12 * 10 + 0) -
                                    p_over_q * *(b + 24 * 10 + 0);
                                *(b + 12 * 10 + 3) =
                                    prefactor_z * *(b + 12 * 10 + 0) -
                                    p_over_q * *(b + 25 * 10 + 0) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 13 * 10 + 1) =
                                    prefactor_x * *(b + 13 * 10 + 0) -
                                    p_over_q * *(b + 23 * 10 + 0) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 13 * 10 + 2) =
                                    prefactor_y * *(b + 13 * 10 + 0) -
                                    p_over_q * *(b + 26 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 13 * 10 + 3) =
                                    prefactor_z * *(b + 13 * 10 + 0) -
                                    p_over_q * *(b + 27 * 10 + 0);
                                *(b + 14 * 10 + 1) =
                                    prefactor_x * *(b + 14 * 10 + 0) -
                                    p_over_q * *(b + 24 * 10 + 0) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 14 * 10 + 2) =
                                    prefactor_y * *(b + 14 * 10 + 0) -
                                    p_over_q * *(b + 27 * 10 + 0) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 14 * 10 + 3) =
                                    prefactor_z * *(b + 14 * 10 + 0) -
                                    p_over_q * *(b + 28 * 10 + 0) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 15 * 10 + 1) =
                                    prefactor_x * *(b + 15 * 10 + 0) -
                                    p_over_q * *(b + 25 * 10 + 0) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 15 * 10 + 2) =
                                    prefactor_y * *(b + 15 * 10 + 0) -
                                    p_over_q * *(b + 28 * 10 + 0);
                                *(b + 15 * 10 + 3) =
                                    prefactor_z * *(b + 15 * 10 + 0) -
                                    p_over_q * *(b + 29 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 16 * 10 + 1) =
                                    prefactor_x * *(b + 16 * 10 + 0) -
                                    p_over_q * *(b + 26 * 10 + 0);
                                *(b + 16 * 10 + 2) =
                                    prefactor_y * *(b + 16 * 10 + 0) -
                                    p_over_q * *(b + 30 * 10 + 0) +
                                    3 * one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 16 * 10 + 3) =
                                    prefactor_z * *(b + 16 * 10 + 0) -
                                    p_over_q * *(b + 31 * 10 + 0);
                                *(b + 17 * 10 + 1) =
                                    prefactor_x * *(b + 17 * 10 + 0) -
                                    p_over_q * *(b + 27 * 10 + 0);
                                *(b + 17 * 10 + 2) =
                                    prefactor_y * *(b + 17 * 10 + 0) -
                                    p_over_q * *(b + 31 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 17 * 10 + 3) =
                                    prefactor_z * *(b + 17 * 10 + 0) -
                                    p_over_q * *(b + 32 * 10 + 0) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 18 * 10 + 1) =
                                    prefactor_x * *(b + 18 * 10 + 0) -
                                    p_over_q * *(b + 28 * 10 + 0);
                                *(b + 18 * 10 + 2) =
                                    prefactor_y * *(b + 18 * 10 + 0) -
                                    p_over_q * *(b + 32 * 10 + 0) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 18 * 10 + 3) =
                                    prefactor_z * *(b + 18 * 10 + 0) -
                                    p_over_q * *(b + 33 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 19 * 10 + 1) =
                                    prefactor_x * *(b + 19 * 10 + 0) -
                                    p_over_q * *(b + 29 * 10 + 0);
                                *(b + 19 * 10 + 2) =
                                    prefactor_y * *(b + 19 * 10 + 0) -
                                    p_over_q * *(b + 33 * 10 + 0);
                                *(b + 19 * 10 + 3) =
                                    prefactor_z * *(b + 19 * 10 + 0) -
                                    p_over_q * *(b + 34 * 10 + 0) +
                                    3 * one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 0 * 10 + 4) =
                                    prefactor_x * *(b + 0 * 10 + 1) -
                                    p_over_q * *(b + 1 * 10 + 1) +
                                    one_over_two_q * *(b + 0 * 10 + 0);
                                *(b + 0 * 10 + 5) =
                                    prefactor_y * *(b + 0 * 10 + 1) -
                                    p_over_q * *(b + 2 * 10 + 1);
                                *(b + 0 * 10 + 6) =
                                    prefactor_z * *(b + 0 * 10 + 1) -
                                    p_over_q * *(b + 3 * 10 + 1);
                                *(b + 0 * 10 + 7) =
                                    prefactor_y * *(b + 0 * 10 + 2) -
                                    p_over_q * *(b + 2 * 10 + 2) +
                                    one_over_two_q * *(b + 0 * 10 + 0);
                                *(b + 0 * 10 + 8) =
                                    prefactor_z * *(b + 0 * 10 + 2) -
                                    p_over_q * *(b + 3 * 10 + 2);
                                *(b + 0 * 10 + 9) =
                                    prefactor_z * *(b + 0 * 10 + 3) -
                                    p_over_q * *(b + 3 * 10 + 3) +
                                    one_over_two_q * *(b + 0 * 10 + 0);
                                *(b + 1 * 10 + 4) =
                                    prefactor_x * *(b + 1 * 10 + 1) -
                                    p_over_q * *(b + 4 * 10 + 1) +
                                    one_over_two_q * *(b + 0 * 10 + 1) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 1 * 10 + 5) =
                                    prefactor_y * *(b + 1 * 10 + 1) -
                                    p_over_q * *(b + 5 * 10 + 1);
                                *(b + 1 * 10 + 6) =
                                    prefactor_z * *(b + 1 * 10 + 1) -
                                    p_over_q * *(b + 6 * 10 + 1);
                                *(b + 1 * 10 + 7) =
                                    prefactor_y * *(b + 1 * 10 + 2) -
                                    p_over_q * *(b + 5 * 10 + 2) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 1 * 10 + 8) =
                                    prefactor_z * *(b + 1 * 10 + 2) -
                                    p_over_q * *(b + 6 * 10 + 2);
                                *(b + 1 * 10 + 9) =
                                    prefactor_z * *(b + 1 * 10 + 3) -
                                    p_over_q * *(b + 6 * 10 + 3) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 2 * 10 + 4) =
                                    prefactor_x * *(b + 2 * 10 + 1) -
                                    p_over_q * *(b + 5 * 10 + 1) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 2 * 10 + 5) =
                                    prefactor_x * *(b + 2 * 10 + 2) -
                                    p_over_q * *(b + 5 * 10 + 2);
                                *(b + 2 * 10 + 6) =
                                    prefactor_z * *(b + 2 * 10 + 1) -
                                    p_over_q * *(b + 8 * 10 + 1);
                                *(b + 2 * 10 + 7) =
                                    prefactor_y * *(b + 2 * 10 + 2) -
                                    p_over_q * *(b + 7 * 10 + 2) +
                                    one_over_two_q * *(b + 0 * 10 + 2) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 2 * 10 + 8) =
                                    prefactor_z * *(b + 2 * 10 + 2) -
                                    p_over_q * *(b + 8 * 10 + 2);
                                *(b + 2 * 10 + 9) =
                                    prefactor_z * *(b + 2 * 10 + 3) -
                                    p_over_q * *(b + 8 * 10 + 3) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 3 * 10 + 4) =
                                    prefactor_x * *(b + 3 * 10 + 1) -
                                    p_over_q * *(b + 6 * 10 + 1) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 3 * 10 + 5) =
                                    prefactor_y * *(b + 3 * 10 + 1) -
                                    p_over_q * *(b + 8 * 10 + 1);
                                *(b + 3 * 10 + 6) =
                                    prefactor_x * *(b + 3 * 10 + 3) -
                                    p_over_q * *(b + 6 * 10 + 3);
                                *(b + 3 * 10 + 7) =
                                    prefactor_y * *(b + 3 * 10 + 2) -
                                    p_over_q * *(b + 8 * 10 + 2) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 3 * 10 + 8) =
                                    prefactor_y * *(b + 3 * 10 + 3) -
                                    p_over_q * *(b + 8 * 10 + 3);
                                *(b + 3 * 10 + 9) =
                                    prefactor_z * *(b + 3 * 10 + 3) -
                                    p_over_q * *(b + 9 * 10 + 3) +
                                    one_over_two_q * *(b + 0 * 10 + 3) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 4 * 10 + 4) =
                                    prefactor_x * *(b + 4 * 10 + 1) -
                                    p_over_q * *(b + 10 * 10 + 1) +
                                    2 * one_over_two_q * *(b + 1 * 10 + 1) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 4 * 10 + 5) =
                                    prefactor_y * *(b + 4 * 10 + 1) -
                                    p_over_q * *(b + 11 * 10 + 1);
                                *(b + 4 * 10 + 6) =
                                    prefactor_z * *(b + 4 * 10 + 1) -
                                    p_over_q * *(b + 12 * 10 + 1);
                                *(b + 4 * 10 + 7) =
                                    prefactor_y * *(b + 4 * 10 + 2) -
                                    p_over_q * *(b + 11 * 10 + 2) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 4 * 10 + 8) =
                                    prefactor_z * *(b + 4 * 10 + 2) -
                                    p_over_q * *(b + 12 * 10 + 2);
                                *(b + 4 * 10 + 9) =
                                    prefactor_z * *(b + 4 * 10 + 3) -
                                    p_over_q * *(b + 12 * 10 + 3) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 5 * 10 + 4) =
                                    prefactor_x * *(b + 5 * 10 + 1) -
                                    p_over_q * *(b + 11 * 10 + 1) +
                                    one_over_two_q * *(b + 2 * 10 + 1) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 5 * 10 + 5) =
                                    prefactor_y * *(b + 5 * 10 + 1) -
                                    p_over_q * *(b + 13 * 10 + 1) +
                                    one_over_two_q * *(b + 1 * 10 + 1);
                                *(b + 5 * 10 + 6) =
                                    prefactor_z * *(b + 5 * 10 + 1) -
                                    p_over_q * *(b + 14 * 10 + 1);
                                *(b + 5 * 10 + 7) =
                                    prefactor_y * *(b + 5 * 10 + 2) -
                                    p_over_q * *(b + 13 * 10 + 2) +
                                    one_over_two_q * *(b + 1 * 10 + 2) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 5 * 10 + 8) =
                                    prefactor_z * *(b + 5 * 10 + 2) -
                                    p_over_q * *(b + 14 * 10 + 2);
                                *(b + 5 * 10 + 9) =
                                    prefactor_z * *(b + 5 * 10 + 3) -
                                    p_over_q * *(b + 14 * 10 + 3) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 6 * 10 + 4) =
                                    prefactor_x * *(b + 6 * 10 + 1) -
                                    p_over_q * *(b + 12 * 10 + 1) +
                                    one_over_two_q * *(b + 3 * 10 + 1) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 6 * 10 + 5) =
                                    prefactor_y * *(b + 6 * 10 + 1) -
                                    p_over_q * *(b + 14 * 10 + 1);
                                *(b + 6 * 10 + 6) =
                                    prefactor_z * *(b + 6 * 10 + 1) -
                                    p_over_q * *(b + 15 * 10 + 1) +
                                    one_over_two_q * *(b + 1 * 10 + 1);
                                *(b + 6 * 10 + 7) =
                                    prefactor_y * *(b + 6 * 10 + 2) -
                                    p_over_q * *(b + 14 * 10 + 2) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 6 * 10 + 8) =
                                    prefactor_y * *(b + 6 * 10 + 3) -
                                    p_over_q * *(b + 14 * 10 + 3);
                                *(b + 6 * 10 + 9) =
                                    prefactor_z * *(b + 6 * 10 + 3) -
                                    p_over_q * *(b + 15 * 10 + 3) +
                                    one_over_two_q * *(b + 1 * 10 + 3) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 7 * 10 + 4) =
                                    prefactor_x * *(b + 7 * 10 + 1) -
                                    p_over_q * *(b + 13 * 10 + 1) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 7 * 10 + 5) =
                                    prefactor_x * *(b + 7 * 10 + 2) -
                                    p_over_q * *(b + 13 * 10 + 2);
                                *(b + 7 * 10 + 6) =
                                    prefactor_z * *(b + 7 * 10 + 1) -
                                    p_over_q * *(b + 17 * 10 + 1);
                                *(b + 7 * 10 + 7) =
                                    prefactor_y * *(b + 7 * 10 + 2) -
                                    p_over_q * *(b + 16 * 10 + 2) +
                                    2 * one_over_two_q * *(b + 2 * 10 + 2) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 7 * 10 + 8) =
                                    prefactor_z * *(b + 7 * 10 + 2) -
                                    p_over_q * *(b + 17 * 10 + 2);
                                *(b + 7 * 10 + 9) =
                                    prefactor_z * *(b + 7 * 10 + 3) -
                                    p_over_q * *(b + 17 * 10 + 3) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 8 * 10 + 4) =
                                    prefactor_x * *(b + 8 * 10 + 1) -
                                    p_over_q * *(b + 14 * 10 + 1) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 8 * 10 + 5) =
                                    prefactor_x * *(b + 8 * 10 + 2) -
                                    p_over_q * *(b + 14 * 10 + 2);
                                *(b + 8 * 10 + 6) =
                                    prefactor_x * *(b + 8 * 10 + 3) -
                                    p_over_q * *(b + 14 * 10 + 3);
                                *(b + 8 * 10 + 7) =
                                    prefactor_y * *(b + 8 * 10 + 2) -
                                    p_over_q * *(b + 17 * 10 + 2) +
                                    one_over_two_q * *(b + 3 * 10 + 2) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 8 * 10 + 8) =
                                    prefactor_z * *(b + 8 * 10 + 2) -
                                    p_over_q * *(b + 18 * 10 + 2) +
                                    one_over_two_q * *(b + 2 * 10 + 2);
                                *(b + 8 * 10 + 9) =
                                    prefactor_z * *(b + 8 * 10 + 3) -
                                    p_over_q * *(b + 18 * 10 + 3) +
                                    one_over_two_q * *(b + 2 * 10 + 3) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 9 * 10 + 4) =
                                    prefactor_x * *(b + 9 * 10 + 1) -
                                    p_over_q * *(b + 15 * 10 + 1) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 9 * 10 + 5) =
                                    prefactor_y * *(b + 9 * 10 + 1) -
                                    p_over_q * *(b + 18 * 10 + 1);
                                *(b + 9 * 10 + 6) =
                                    prefactor_x * *(b + 9 * 10 + 3) -
                                    p_over_q * *(b + 15 * 10 + 3);
                                *(b + 9 * 10 + 7) =
                                    prefactor_y * *(b + 9 * 10 + 2) -
                                    p_over_q * *(b + 18 * 10 + 2) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 9 * 10 + 8) =
                                    prefactor_y * *(b + 9 * 10 + 3) -
                                    p_over_q * *(b + 18 * 10 + 3);
                                *(b + 9 * 10 + 9) =
                                    prefactor_z * *(b + 9 * 10 + 3) -
                                    p_over_q * *(b + 19 * 10 + 3) +
                                    2 * one_over_two_q * *(b + 3 * 10 + 3) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                break;
                            case 1:
                                *(b + 0 * 10 + 1) =
                                    prefactor_x * *(b + 0 * 10 + 0) -
                                    p_over_q * *(b + 1 * 10 + 0);
                                *(b + 0 * 10 + 2) =
                                    prefactor_y * *(b + 0 * 10 + 0) -
                                    p_over_q * *(b + 2 * 10 + 0);
                                *(b + 0 * 10 + 3) =
                                    prefactor_z * *(b + 0 * 10 + 0) -
                                    p_over_q * *(b + 3 * 10 + 0);
                                *(b + 1 * 10 + 1) =
                                    prefactor_x * *(b + 1 * 10 + 0) -
                                    p_over_q * *(b + 4 * 10 + 0) +
                                    one_over_two_q * *(b + 0 * 10 + 0);

                                *(b + 1 * 10 + 2) =
                                    prefactor_y * *(b + 1 * 10 + 0) -
                                    p_over_q * *(b + 5 * 10 + 0);

                                *(b + 1 * 10 + 3) =
                                    prefactor_z * *(b + 1 * 10 + 0) -
                                    p_over_q * *(b + 6 * 10 + 0);

                                *(b + 2 * 10 + 1) =
                                    prefactor_x * *(b + 2 * 10 + 0) -
                                    p_over_q * *(b + 5 * 10 + 0);

                                *(b + 2 * 10 + 2) =
                                    prefactor_y * *(b + 2 * 10 + 0) -
                                    p_over_q * *(b + 7 * 10 + 0) +
                                    one_over_two_q * *(b + 0 * 10 + 0);

                                *(b + 2 * 10 + 3) =
                                    prefactor_z * *(b + 2 * 10 + 0) -
                                    p_over_q * *(b + 8 * 10 + 0);

                                *(b + 3 * 10 + 1) =
                                    prefactor_x * *(b + 3 * 10 + 0) -
                                    p_over_q * *(b + 6 * 10 + 0);

                                *(b + 3 * 10 + 2) =
                                    prefactor_y * *(b + 3 * 10 + 0) -
                                    p_over_q * *(b + 8 * 10 + 0);

                                *(b + 3 * 10 + 3) =
                                    prefactor_z * *(b + 3 * 10 + 0) -
                                    p_over_q * *(b + 9 * 10 + 0) +
                                    one_over_two_q * *(b + 0 * 10 + 0);
                                *(b + 4 * 10 + 1) =
                                    prefactor_x * *(b + 4 * 10 + 0) -
                                    p_over_q * *(b + 10 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 4 * 10 + 2) =
                                    prefactor_y * *(b + 4 * 10 + 0) -
                                    p_over_q * *(b + 11 * 10 + 0);
                                *(b + 4 * 10 + 3) =
                                    prefactor_z * *(b + 4 * 10 + 0) -
                                    p_over_q * *(b + 12 * 10 + 0);
                                *(b + 5 * 10 + 1) =
                                    prefactor_x * *(b + 5 * 10 + 0) -
                                    p_over_q * *(b + 11 * 10 + 0) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 5 * 10 + 2) =
                                    prefactor_y * *(b + 5 * 10 + 0) -
                                    p_over_q * *(b + 13 * 10 + 0) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 5 * 10 + 3) =
                                    prefactor_z * *(b + 5 * 10 + 0) -
                                    p_over_q * *(b + 14 * 10 + 0);
                                *(b + 6 * 10 + 1) =
                                    prefactor_x * *(b + 6 * 10 + 0) -
                                    p_over_q * *(b + 12 * 10 + 0) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 6 * 10 + 2) =
                                    prefactor_y * *(b + 6 * 10 + 0) -
                                    p_over_q * *(b + 14 * 10 + 0);
                                *(b + 6 * 10 + 3) =
                                    prefactor_z * *(b + 6 * 10 + 0) -
                                    p_over_q * *(b + 15 * 10 + 0) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 7 * 10 + 1) =
                                    prefactor_x * *(b + 7 * 10 + 0) -
                                    p_over_q * *(b + 13 * 10 + 0);
                                *(b + 7 * 10 + 2) =
                                    prefactor_y * *(b + 7 * 10 + 0) -
                                    p_over_q * *(b + 16 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 7 * 10 + 3) =
                                    prefactor_z * *(b + 7 * 10 + 0) -
                                    p_over_q * *(b + 17 * 10 + 0);
                                *(b + 8 * 10 + 1) =
                                    prefactor_x * *(b + 8 * 10 + 0) -
                                    p_over_q * *(b + 14 * 10 + 0);
                                *(b + 8 * 10 + 2) =
                                    prefactor_y * *(b + 8 * 10 + 0) -
                                    p_over_q * *(b + 17 * 10 + 0) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 8 * 10 + 3) =
                                    prefactor_z * *(b + 8 * 10 + 0) -
                                    p_over_q * *(b + 18 * 10 + 0) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 9 * 10 + 1) =
                                    prefactor_x * *(b + 9 * 10 + 0) -
                                    p_over_q * *(b + 15 * 10 + 0);
                                *(b + 9 * 10 + 2) =
                                    prefactor_y * *(b + 9 * 10 + 0) -
                                    p_over_q * *(b + 18 * 10 + 0);
                                *(b + 9 * 10 + 3) =
                                    prefactor_z * *(b + 9 * 10 + 0) -
                                    p_over_q * *(b + 19 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 10 * 10 + 1) =
                                    prefactor_x * *(b + 10 * 10 + 0) -
                                    p_over_q * *(b + 20 * 10 + 0) +
                                    3 * one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 10 * 10 + 2) =
                                    prefactor_y * *(b + 10 * 10 + 0) -
                                    p_over_q * *(b + 21 * 10 + 0);
                                *(b + 10 * 10 + 3) =
                                    prefactor_z * *(b + 10 * 10 + 0) -
                                    p_over_q * *(b + 22 * 10 + 0);
                                *(b + 11 * 10 + 1) =
                                    prefactor_x * *(b + 11 * 10 + 0) -
                                    p_over_q * *(b + 21 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 11 * 10 + 2) =
                                    prefactor_y * *(b + 11 * 10 + 0) -
                                    p_over_q * *(b + 23 * 10 + 0) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 11 * 10 + 3) =
                                    prefactor_z * *(b + 11 * 10 + 0) -
                                    p_over_q * *(b + 24 * 10 + 0);
                                *(b + 12 * 10 + 1) =
                                    prefactor_x * *(b + 12 * 10 + 0) -
                                    p_over_q * *(b + 22 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 12 * 10 + 2) =
                                    prefactor_y * *(b + 12 * 10 + 0) -
                                    p_over_q * *(b + 24 * 10 + 0);
                                *(b + 12 * 10 + 3) =
                                    prefactor_z * *(b + 12 * 10 + 0) -
                                    p_over_q * *(b + 25 * 10 + 0) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 13 * 10 + 1) =
                                    prefactor_x * *(b + 13 * 10 + 0) -
                                    p_over_q * *(b + 23 * 10 + 0) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 13 * 10 + 2) =
                                    prefactor_y * *(b + 13 * 10 + 0) -
                                    p_over_q * *(b + 26 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 13 * 10 + 3) =
                                    prefactor_z * *(b + 13 * 10 + 0) -
                                    p_over_q * *(b + 27 * 10 + 0);
                                *(b + 14 * 10 + 1) =
                                    prefactor_x * *(b + 14 * 10 + 0) -
                                    p_over_q * *(b + 24 * 10 + 0) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 14 * 10 + 2) =
                                    prefactor_y * *(b + 14 * 10 + 0) -
                                    p_over_q * *(b + 27 * 10 + 0) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 14 * 10 + 3) =
                                    prefactor_z * *(b + 14 * 10 + 0) -
                                    p_over_q * *(b + 28 * 10 + 0) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 15 * 10 + 1) =
                                    prefactor_x * *(b + 15 * 10 + 0) -
                                    p_over_q * *(b + 25 * 10 + 0) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 15 * 10 + 2) =
                                    prefactor_y * *(b + 15 * 10 + 0) -
                                    p_over_q * *(b + 28 * 10 + 0);
                                *(b + 15 * 10 + 3) =
                                    prefactor_z * *(b + 15 * 10 + 0) -
                                    p_over_q * *(b + 29 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 16 * 10 + 1) =
                                    prefactor_x * *(b + 16 * 10 + 0) -
                                    p_over_q * *(b + 26 * 10 + 0);
                                *(b + 16 * 10 + 2) =
                                    prefactor_y * *(b + 16 * 10 + 0) -
                                    p_over_q * *(b + 30 * 10 + 0) +
                                    3 * one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 16 * 10 + 3) =
                                    prefactor_z * *(b + 16 * 10 + 0) -
                                    p_over_q * *(b + 31 * 10 + 0);
                                *(b + 17 * 10 + 1) =
                                    prefactor_x * *(b + 17 * 10 + 0) -
                                    p_over_q * *(b + 27 * 10 + 0);
                                *(b + 17 * 10 + 2) =
                                    prefactor_y * *(b + 17 * 10 + 0) -
                                    p_over_q * *(b + 31 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 17 * 10 + 3) =
                                    prefactor_z * *(b + 17 * 10 + 0) -
                                    p_over_q * *(b + 32 * 10 + 0) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 18 * 10 + 1) =
                                    prefactor_x * *(b + 18 * 10 + 0) -
                                    p_over_q * *(b + 28 * 10 + 0);
                                *(b + 18 * 10 + 2) =
                                    prefactor_y * *(b + 18 * 10 + 0) -
                                    p_over_q * *(b + 32 * 10 + 0) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 18 * 10 + 3) =
                                    prefactor_z * *(b + 18 * 10 + 0) -
                                    p_over_q * *(b + 33 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 19 * 10 + 1) =
                                    prefactor_x * *(b + 19 * 10 + 0) -
                                    p_over_q * *(b + 29 * 10 + 0);
                                *(b + 19 * 10 + 2) =
                                    prefactor_y * *(b + 19 * 10 + 0) -
                                    p_over_q * *(b + 33 * 10 + 0);
                                *(b + 19 * 10 + 3) =
                                    prefactor_z * *(b + 19 * 10 + 0) -
                                    p_over_q * *(b + 34 * 10 + 0) +
                                    3 * one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 1 * 10 + 4) =
                                    prefactor_x * *(b + 1 * 10 + 1) -
                                    p_over_q * *(b + 4 * 10 + 1) +
                                    one_over_two_q * *(b + 0 * 10 + 1) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 1 * 10 + 5) =
                                    prefactor_y * *(b + 1 * 10 + 1) -
                                    p_over_q * *(b + 5 * 10 + 1);
                                *(b + 1 * 10 + 6) =
                                    prefactor_z * *(b + 1 * 10 + 1) -
                                    p_over_q * *(b + 6 * 10 + 1);
                                *(b + 1 * 10 + 7) =
                                    prefactor_y * *(b + 1 * 10 + 2) -
                                    p_over_q * *(b + 5 * 10 + 2) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 1 * 10 + 8) =
                                    prefactor_z * *(b + 1 * 10 + 2) -
                                    p_over_q * *(b + 6 * 10 + 2);
                                *(b + 1 * 10 + 9) =
                                    prefactor_z * *(b + 1 * 10 + 3) -
                                    p_over_q * *(b + 6 * 10 + 3) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 2 * 10 + 4) =
                                    prefactor_x * *(b + 2 * 10 + 1) -
                                    p_over_q * *(b + 5 * 10 + 1) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 2 * 10 + 5) =
                                    prefactor_x * *(b + 2 * 10 + 2) -
                                    p_over_q * *(b + 5 * 10 + 2);
                                *(b + 2 * 10 + 6) =
                                    prefactor_z * *(b + 2 * 10 + 1) -
                                    p_over_q * *(b + 8 * 10 + 1);
                                *(b + 2 * 10 + 7) =
                                    prefactor_y * *(b + 2 * 10 + 2) -
                                    p_over_q * *(b + 7 * 10 + 2) +
                                    one_over_two_q * *(b + 0 * 10 + 2) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 2 * 10 + 8) =
                                    prefactor_z * *(b + 2 * 10 + 2) -
                                    p_over_q * *(b + 8 * 10 + 2);
                                *(b + 2 * 10 + 9) =
                                    prefactor_z * *(b + 2 * 10 + 3) -
                                    p_over_q * *(b + 8 * 10 + 3) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 3 * 10 + 4) =
                                    prefactor_x * *(b + 3 * 10 + 1) -
                                    p_over_q * *(b + 6 * 10 + 1) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 3 * 10 + 5) =
                                    prefactor_y * *(b + 3 * 10 + 1) -
                                    p_over_q * *(b + 8 * 10 + 1);
                                *(b + 3 * 10 + 6) =
                                    prefactor_x * *(b + 3 * 10 + 3) -
                                    p_over_q * *(b + 6 * 10 + 3);
                                *(b + 3 * 10 + 7) =
                                    prefactor_y * *(b + 3 * 10 + 2) -
                                    p_over_q * *(b + 8 * 10 + 2) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 3 * 10 + 8) =
                                    prefactor_y * *(b + 3 * 10 + 3) -
                                    p_over_q * *(b + 8 * 10 + 3);
                                *(b + 3 * 10 + 9) =
                                    prefactor_z * *(b + 3 * 10 + 3) -
                                    p_over_q * *(b + 9 * 10 + 3) +
                                    one_over_two_q * *(b + 0 * 10 + 3) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 4 * 10 + 4) =
                                    prefactor_x * *(b + 4 * 10 + 1) -
                                    p_over_q * *(b + 10 * 10 + 1) +
                                    2 * one_over_two_q * *(b + 1 * 10 + 1) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 4 * 10 + 5) =
                                    prefactor_y * *(b + 4 * 10 + 1) -
                                    p_over_q * *(b + 11 * 10 + 1);
                                *(b + 4 * 10 + 6) =
                                    prefactor_z * *(b + 4 * 10 + 1) -
                                    p_over_q * *(b + 12 * 10 + 1);
                                *(b + 4 * 10 + 7) =
                                    prefactor_y * *(b + 4 * 10 + 2) -
                                    p_over_q * *(b + 11 * 10 + 2) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 4 * 10 + 8) =
                                    prefactor_z * *(b + 4 * 10 + 2) -
                                    p_over_q * *(b + 12 * 10 + 2);
                                *(b + 4 * 10 + 9) =
                                    prefactor_z * *(b + 4 * 10 + 3) -
                                    p_over_q * *(b + 12 * 10 + 3) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 5 * 10 + 4) =
                                    prefactor_x * *(b + 5 * 10 + 1) -
                                    p_over_q * *(b + 11 * 10 + 1) +
                                    one_over_two_q * *(b + 2 * 10 + 1) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 5 * 10 + 5) =
                                    prefactor_y * *(b + 5 * 10 + 1) -
                                    p_over_q * *(b + 13 * 10 + 1) +
                                    one_over_two_q * *(b + 1 * 10 + 1);
                                *(b + 5 * 10 + 6) =
                                    prefactor_z * *(b + 5 * 10 + 1) -
                                    p_over_q * *(b + 14 * 10 + 1);
                                *(b + 5 * 10 + 7) =
                                    prefactor_y * *(b + 5 * 10 + 2) -
                                    p_over_q * *(b + 13 * 10 + 2) +
                                    one_over_two_q * *(b + 1 * 10 + 2) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 5 * 10 + 8) =
                                    prefactor_z * *(b + 5 * 10 + 2) -
                                    p_over_q * *(b + 14 * 10 + 2);
                                *(b + 5 * 10 + 9) =
                                    prefactor_z * *(b + 5 * 10 + 3) -
                                    p_over_q * *(b + 14 * 10 + 3) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 6 * 10 + 4) =
                                    prefactor_x * *(b + 6 * 10 + 1) -
                                    p_over_q * *(b + 12 * 10 + 1) +
                                    one_over_two_q * *(b + 3 * 10 + 1) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 6 * 10 + 5) =
                                    prefactor_y * *(b + 6 * 10 + 1) -
                                    p_over_q * *(b + 14 * 10 + 1);
                                *(b + 6 * 10 + 6) =
                                    prefactor_z * *(b + 6 * 10 + 1) -
                                    p_over_q * *(b + 15 * 10 + 1) +
                                    one_over_two_q * *(b + 1 * 10 + 1);
                                *(b + 6 * 10 + 7) =
                                    prefactor_y * *(b + 6 * 10 + 2) -
                                    p_over_q * *(b + 14 * 10 + 2) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 6 * 10 + 8) =
                                    prefactor_y * *(b + 6 * 10 + 3) -
                                    p_over_q * *(b + 14 * 10 + 3);
                                *(b + 6 * 10 + 9) =
                                    prefactor_z * *(b + 6 * 10 + 3) -
                                    p_over_q * *(b + 15 * 10 + 3) +
                                    one_over_two_q * *(b + 1 * 10 + 3) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 7 * 10 + 4) =
                                    prefactor_x * *(b + 7 * 10 + 1) -
                                    p_over_q * *(b + 13 * 10 + 1) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 7 * 10 + 5) =
                                    prefactor_x * *(b + 7 * 10 + 2) -
                                    p_over_q * *(b + 13 * 10 + 2);
                                *(b + 7 * 10 + 6) =
                                    prefactor_z * *(b + 7 * 10 + 1) -
                                    p_over_q * *(b + 17 * 10 + 1);
                                *(b + 7 * 10 + 7) =
                                    prefactor_y * *(b + 7 * 10 + 2) -
                                    p_over_q * *(b + 16 * 10 + 2) +
                                    2 * one_over_two_q * *(b + 2 * 10 + 2) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 7 * 10 + 8) =
                                    prefactor_z * *(b + 7 * 10 + 2) -
                                    p_over_q * *(b + 17 * 10 + 2);
                                *(b + 7 * 10 + 9) =
                                    prefactor_z * *(b + 7 * 10 + 3) -
                                    p_over_q * *(b + 17 * 10 + 3) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 8 * 10 + 4) =
                                    prefactor_x * *(b + 8 * 10 + 1) -
                                    p_over_q * *(b + 14 * 10 + 1) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 8 * 10 + 5) =
                                    prefactor_x * *(b + 8 * 10 + 2) -
                                    p_over_q * *(b + 14 * 10 + 2);
                                *(b + 8 * 10 + 6) =
                                    prefactor_x * *(b + 8 * 10 + 3) -
                                    p_over_q * *(b + 14 * 10 + 3);
                                *(b + 8 * 10 + 7) =
                                    prefactor_y * *(b + 8 * 10 + 2) -
                                    p_over_q * *(b + 17 * 10 + 2) +
                                    one_over_two_q * *(b + 3 * 10 + 2) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 8 * 10 + 8) =
                                    prefactor_z * *(b + 8 * 10 + 2) -
                                    p_over_q * *(b + 18 * 10 + 2) +
                                    one_over_two_q * *(b + 2 * 10 + 2);
                                *(b + 8 * 10 + 9) =
                                    prefactor_z * *(b + 8 * 10 + 3) -
                                    p_over_q * *(b + 18 * 10 + 3) +
                                    one_over_two_q * *(b + 2 * 10 + 3) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 9 * 10 + 4) =
                                    prefactor_x * *(b + 9 * 10 + 1) -
                                    p_over_q * *(b + 15 * 10 + 1) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 9 * 10 + 5) =
                                    prefactor_y * *(b + 9 * 10 + 1) -
                                    p_over_q * *(b + 18 * 10 + 1);
                                *(b + 9 * 10 + 6) =
                                    prefactor_x * *(b + 9 * 10 + 3) -
                                    p_over_q * *(b + 15 * 10 + 3);
                                *(b + 9 * 10 + 7) =
                                    prefactor_y * *(b + 9 * 10 + 2) -
                                    p_over_q * *(b + 18 * 10 + 2) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 9 * 10 + 8) =
                                    prefactor_y * *(b + 9 * 10 + 3) -
                                    p_over_q * *(b + 18 * 10 + 3);
                                *(b + 9 * 10 + 9) =
                                    prefactor_z * *(b + 9 * 10 + 3) -
                                    p_over_q * *(b + 19 * 10 + 3) +
                                    2 * one_over_two_q * *(b + 3 * 10 + 3) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                break;
                            case 2:
                                *(b + 1 * 10 + 1) =
                                    prefactor_x * *(b + 1 * 10 + 0) -
                                    p_over_q * *(b + 4 * 10 + 0) +
                                    one_over_two_q * *(b + 0 * 10 + 0);

                                *(b + 1 * 10 + 2) =
                                    prefactor_y * *(b + 1 * 10 + 0) -
                                    p_over_q * *(b + 5 * 10 + 0);

                                *(b + 1 * 10 + 3) =
                                    prefactor_z * *(b + 1 * 10 + 0) -
                                    p_over_q * *(b + 6 * 10 + 0);

                                *(b + 2 * 10 + 1) =
                                    prefactor_x * *(b + 2 * 10 + 0) -
                                    p_over_q * *(b + 5 * 10 + 0);

                                *(b + 2 * 10 + 2) =
                                    prefactor_y * *(b + 2 * 10 + 0) -
                                    p_over_q * *(b + 7 * 10 + 0) +
                                    one_over_two_q * *(b + 0 * 10 + 0);

                                *(b + 2 * 10 + 3) =
                                    prefactor_z * *(b + 2 * 10 + 0) -
                                    p_over_q * *(b + 8 * 10 + 0);

                                *(b + 3 * 10 + 1) =
                                    prefactor_x * *(b + 3 * 10 + 0) -
                                    p_over_q * *(b + 6 * 10 + 0);

                                *(b + 3 * 10 + 2) =
                                    prefactor_y * *(b + 3 * 10 + 0) -
                                    p_over_q * *(b + 8 * 10 + 0);

                                *(b + 3 * 10 + 3) =
                                    prefactor_z * *(b + 3 * 10 + 0) -
                                    p_over_q * *(b + 9 * 10 + 0) +
                                    one_over_two_q * *(b + 0 * 10 + 0);
                                *(b + 4 * 10 + 1) =
                                    prefactor_x * *(b + 4 * 10 + 0) -
                                    p_over_q * *(b + 10 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 4 * 10 + 2) =
                                    prefactor_y * *(b + 4 * 10 + 0) -
                                    p_over_q * *(b + 11 * 10 + 0);
                                *(b + 4 * 10 + 3) =
                                    prefactor_z * *(b + 4 * 10 + 0) -
                                    p_over_q * *(b + 12 * 10 + 0);
                                *(b + 5 * 10 + 1) =
                                    prefactor_x * *(b + 5 * 10 + 0) -
                                    p_over_q * *(b + 11 * 10 + 0) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 5 * 10 + 2) =
                                    prefactor_y * *(b + 5 * 10 + 0) -
                                    p_over_q * *(b + 13 * 10 + 0) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 5 * 10 + 3) =
                                    prefactor_z * *(b + 5 * 10 + 0) -
                                    p_over_q * *(b + 14 * 10 + 0);
                                *(b + 6 * 10 + 1) =
                                    prefactor_x * *(b + 6 * 10 + 0) -
                                    p_over_q * *(b + 12 * 10 + 0) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 6 * 10 + 2) =
                                    prefactor_y * *(b + 6 * 10 + 0) -
                                    p_over_q * *(b + 14 * 10 + 0);
                                *(b + 6 * 10 + 3) =
                                    prefactor_z * *(b + 6 * 10 + 0) -
                                    p_over_q * *(b + 15 * 10 + 0) +
                                    one_over_two_q * *(b + 1 * 10 + 0);
                                *(b + 7 * 10 + 1) =
                                    prefactor_x * *(b + 7 * 10 + 0) -
                                    p_over_q * *(b + 13 * 10 + 0);
                                *(b + 7 * 10 + 2) =
                                    prefactor_y * *(b + 7 * 10 + 0) -
                                    p_over_q * *(b + 16 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 7 * 10 + 3) =
                                    prefactor_z * *(b + 7 * 10 + 0) -
                                    p_over_q * *(b + 17 * 10 + 0);
                                *(b + 8 * 10 + 1) =
                                    prefactor_x * *(b + 8 * 10 + 0) -
                                    p_over_q * *(b + 14 * 10 + 0);
                                *(b + 8 * 10 + 2) =
                                    prefactor_y * *(b + 8 * 10 + 0) -
                                    p_over_q * *(b + 17 * 10 + 0) +
                                    one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 8 * 10 + 3) =
                                    prefactor_z * *(b + 8 * 10 + 0) -
                                    p_over_q * *(b + 18 * 10 + 0) +
                                    one_over_two_q * *(b + 2 * 10 + 0);
                                *(b + 9 * 10 + 1) =
                                    prefactor_x * *(b + 9 * 10 + 0) -
                                    p_over_q * *(b + 15 * 10 + 0);
                                *(b + 9 * 10 + 2) =
                                    prefactor_y * *(b + 9 * 10 + 0) -
                                    p_over_q * *(b + 18 * 10 + 0);
                                *(b + 9 * 10 + 3) =
                                    prefactor_z * *(b + 9 * 10 + 0) -
                                    p_over_q * *(b + 19 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 3 * 10 + 0);
                                *(b + 10 * 10 + 1) =
                                    prefactor_x * *(b + 10 * 10 + 0) -
                                    p_over_q * *(b + 20 * 10 + 0) +
                                    3 * one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 10 * 10 + 2) =
                                    prefactor_y * *(b + 10 * 10 + 0) -
                                    p_over_q * *(b + 21 * 10 + 0);
                                *(b + 10 * 10 + 3) =
                                    prefactor_z * *(b + 10 * 10 + 0) -
                                    p_over_q * *(b + 22 * 10 + 0);
                                *(b + 11 * 10 + 1) =
                                    prefactor_x * *(b + 11 * 10 + 0) -
                                    p_over_q * *(b + 21 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 11 * 10 + 2) =
                                    prefactor_y * *(b + 11 * 10 + 0) -
                                    p_over_q * *(b + 23 * 10 + 0) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 11 * 10 + 3) =
                                    prefactor_z * *(b + 11 * 10 + 0) -
                                    p_over_q * *(b + 24 * 10 + 0);
                                *(b + 12 * 10 + 1) =
                                    prefactor_x * *(b + 12 * 10 + 0) -
                                    p_over_q * *(b + 22 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 12 * 10 + 2) =
                                    prefactor_y * *(b + 12 * 10 + 0) -
                                    p_over_q * *(b + 24 * 10 + 0);
                                *(b + 12 * 10 + 3) =
                                    prefactor_z * *(b + 12 * 10 + 0) -
                                    p_over_q * *(b + 25 * 10 + 0) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 13 * 10 + 1) =
                                    prefactor_x * *(b + 13 * 10 + 0) -
                                    p_over_q * *(b + 23 * 10 + 0) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 13 * 10 + 2) =
                                    prefactor_y * *(b + 13 * 10 + 0) -
                                    p_over_q * *(b + 26 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 13 * 10 + 3) =
                                    prefactor_z * *(b + 13 * 10 + 0) -
                                    p_over_q * *(b + 27 * 10 + 0);
                                *(b + 14 * 10 + 1) =
                                    prefactor_x * *(b + 14 * 10 + 0) -
                                    p_over_q * *(b + 24 * 10 + 0) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 14 * 10 + 2) =
                                    prefactor_y * *(b + 14 * 10 + 0) -
                                    p_over_q * *(b + 27 * 10 + 0) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 14 * 10 + 3) =
                                    prefactor_z * *(b + 14 * 10 + 0) -
                                    p_over_q * *(b + 28 * 10 + 0) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 15 * 10 + 1) =
                                    prefactor_x * *(b + 15 * 10 + 0) -
                                    p_over_q * *(b + 25 * 10 + 0) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 15 * 10 + 2) =
                                    prefactor_y * *(b + 15 * 10 + 0) -
                                    p_over_q * *(b + 28 * 10 + 0);
                                *(b + 15 * 10 + 3) =
                                    prefactor_z * *(b + 15 * 10 + 0) -
                                    p_over_q * *(b + 29 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 16 * 10 + 1) =
                                    prefactor_x * *(b + 16 * 10 + 0) -
                                    p_over_q * *(b + 26 * 10 + 0);
                                *(b + 16 * 10 + 2) =
                                    prefactor_y * *(b + 16 * 10 + 0) -
                                    p_over_q * *(b + 30 * 10 + 0) +
                                    3 * one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 16 * 10 + 3) =
                                    prefactor_z * *(b + 16 * 10 + 0) -
                                    p_over_q * *(b + 31 * 10 + 0);
                                *(b + 17 * 10 + 1) =
                                    prefactor_x * *(b + 17 * 10 + 0) -
                                    p_over_q * *(b + 27 * 10 + 0);
                                *(b + 17 * 10 + 2) =
                                    prefactor_y * *(b + 17 * 10 + 0) -
                                    p_over_q * *(b + 31 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 17 * 10 + 3) =
                                    prefactor_z * *(b + 17 * 10 + 0) -
                                    p_over_q * *(b + 32 * 10 + 0) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 18 * 10 + 1) =
                                    prefactor_x * *(b + 18 * 10 + 0) -
                                    p_over_q * *(b + 28 * 10 + 0);
                                *(b + 18 * 10 + 2) =
                                    prefactor_y * *(b + 18 * 10 + 0) -
                                    p_over_q * *(b + 32 * 10 + 0) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 18 * 10 + 3) =
                                    prefactor_z * *(b + 18 * 10 + 0) -
                                    p_over_q * *(b + 33 * 10 + 0) +
                                    2 * one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 19 * 10 + 1) =
                                    prefactor_x * *(b + 19 * 10 + 0) -
                                    p_over_q * *(b + 29 * 10 + 0);
                                *(b + 19 * 10 + 2) =
                                    prefactor_y * *(b + 19 * 10 + 0) -
                                    p_over_q * *(b + 33 * 10 + 0);
                                *(b + 19 * 10 + 3) =
                                    prefactor_z * *(b + 19 * 10 + 0) -
                                    p_over_q * *(b + 34 * 10 + 0) +
                                    3 * one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 4 * 10 + 4) =
                                    prefactor_x * *(b + 4 * 10 + 1) -
                                    p_over_q * *(b + 10 * 10 + 1) +
                                    2 * one_over_two_q * *(b + 1 * 10 + 1) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 4 * 10 + 5) =
                                    prefactor_y * *(b + 4 * 10 + 1) -
                                    p_over_q * *(b + 11 * 10 + 1);
                                *(b + 4 * 10 + 6) =
                                    prefactor_z * *(b + 4 * 10 + 1) -
                                    p_over_q * *(b + 12 * 10 + 1);
                                *(b + 4 * 10 + 7) =
                                    prefactor_y * *(b + 4 * 10 + 2) -
                                    p_over_q * *(b + 11 * 10 + 2) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 4 * 10 + 8) =
                                    prefactor_z * *(b + 4 * 10 + 2) -
                                    p_over_q * *(b + 12 * 10 + 2);
                                *(b + 4 * 10 + 9) =
                                    prefactor_z * *(b + 4 * 10 + 3) -
                                    p_over_q * *(b + 12 * 10 + 3) +
                                    one_over_two_q * *(b + 4 * 10 + 0);
                                *(b + 5 * 10 + 4) =
                                    prefactor_x * *(b + 5 * 10 + 1) -
                                    p_over_q * *(b + 11 * 10 + 1) +
                                    one_over_two_q * *(b + 2 * 10 + 1) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 5 * 10 + 5) =
                                    prefactor_y * *(b + 5 * 10 + 1) -
                                    p_over_q * *(b + 13 * 10 + 1) +
                                    one_over_two_q * *(b + 1 * 10 + 1);
                                *(b + 5 * 10 + 6) =
                                    prefactor_z * *(b + 5 * 10 + 1) -
                                    p_over_q * *(b + 14 * 10 + 1);
                                *(b + 5 * 10 + 7) =
                                    prefactor_y * *(b + 5 * 10 + 2) -
                                    p_over_q * *(b + 13 * 10 + 2) +
                                    one_over_two_q * *(b + 1 * 10 + 2) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 5 * 10 + 8) =
                                    prefactor_z * *(b + 5 * 10 + 2) -
                                    p_over_q * *(b + 14 * 10 + 2);
                                *(b + 5 * 10 + 9) =
                                    prefactor_z * *(b + 5 * 10 + 3) -
                                    p_over_q * *(b + 14 * 10 + 3) +
                                    one_over_two_q * *(b + 5 * 10 + 0);
                                *(b + 6 * 10 + 4) =
                                    prefactor_x * *(b + 6 * 10 + 1) -
                                    p_over_q * *(b + 12 * 10 + 1) +
                                    one_over_two_q * *(b + 3 * 10 + 1) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 6 * 10 + 5) =
                                    prefactor_y * *(b + 6 * 10 + 1) -
                                    p_over_q * *(b + 14 * 10 + 1);
                                *(b + 6 * 10 + 6) =
                                    prefactor_z * *(b + 6 * 10 + 1) -
                                    p_over_q * *(b + 15 * 10 + 1) +
                                    one_over_two_q * *(b + 1 * 10 + 1);
                                *(b + 6 * 10 + 7) =
                                    prefactor_y * *(b + 6 * 10 + 2) -
                                    p_over_q * *(b + 14 * 10 + 2) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 6 * 10 + 8) =
                                    prefactor_y * *(b + 6 * 10 + 3) -
                                    p_over_q * *(b + 14 * 10 + 3);
                                *(b + 6 * 10 + 9) =
                                    prefactor_z * *(b + 6 * 10 + 3) -
                                    p_over_q * *(b + 15 * 10 + 3) +
                                    one_over_two_q * *(b + 1 * 10 + 3) +
                                    one_over_two_q * *(b + 6 * 10 + 0);
                                *(b + 7 * 10 + 4) =
                                    prefactor_x * *(b + 7 * 10 + 1) -
                                    p_over_q * *(b + 13 * 10 + 1) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 7 * 10 + 5) =
                                    prefactor_x * *(b + 7 * 10 + 2) -
                                    p_over_q * *(b + 13 * 10 + 2);
                                *(b + 7 * 10 + 6) =
                                    prefactor_z * *(b + 7 * 10 + 1) -
                                    p_over_q * *(b + 17 * 10 + 1);
                                *(b + 7 * 10 + 7) =
                                    prefactor_y * *(b + 7 * 10 + 2) -
                                    p_over_q * *(b + 16 * 10 + 2) +
                                    2 * one_over_two_q * *(b + 2 * 10 + 2) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 7 * 10 + 8) =
                                    prefactor_z * *(b + 7 * 10 + 2) -
                                    p_over_q * *(b + 17 * 10 + 2);
                                *(b + 7 * 10 + 9) =
                                    prefactor_z * *(b + 7 * 10 + 3) -
                                    p_over_q * *(b + 17 * 10 + 3) +
                                    one_over_two_q * *(b + 7 * 10 + 0);
                                *(b + 8 * 10 + 4) =
                                    prefactor_x * *(b + 8 * 10 + 1) -
                                    p_over_q * *(b + 14 * 10 + 1) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 8 * 10 + 5) =
                                    prefactor_x * *(b + 8 * 10 + 2) -
                                    p_over_q * *(b + 14 * 10 + 2);
                                *(b + 8 * 10 + 6) =
                                    prefactor_x * *(b + 8 * 10 + 3) -
                                    p_over_q * *(b + 14 * 10 + 3);
                                *(b + 8 * 10 + 7) =
                                    prefactor_y * *(b + 8 * 10 + 2) -
                                    p_over_q * *(b + 17 * 10 + 2) +
                                    one_over_two_q * *(b + 3 * 10 + 2) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 8 * 10 + 8) =
                                    prefactor_z * *(b + 8 * 10 + 2) -
                                    p_over_q * *(b + 18 * 10 + 2) +
                                    one_over_two_q * *(b + 2 * 10 + 2);
                                *(b + 8 * 10 + 9) =
                                    prefactor_z * *(b + 8 * 10 + 3) -
                                    p_over_q * *(b + 18 * 10 + 3) +
                                    one_over_two_q * *(b + 2 * 10 + 3) +
                                    one_over_two_q * *(b + 8 * 10 + 0);
                                *(b + 9 * 10 + 4) =
                                    prefactor_x * *(b + 9 * 10 + 1) -
                                    p_over_q * *(b + 15 * 10 + 1) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 9 * 10 + 5) =
                                    prefactor_y * *(b + 9 * 10 + 1) -
                                    p_over_q * *(b + 18 * 10 + 1);
                                *(b + 9 * 10 + 6) =
                                    prefactor_x * *(b + 9 * 10 + 3) -
                                    p_over_q * *(b + 15 * 10 + 3);
                                *(b + 9 * 10 + 7) =
                                    prefactor_y * *(b + 9 * 10 + 2) -
                                    p_over_q * *(b + 18 * 10 + 2) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                *(b + 9 * 10 + 8) =
                                    prefactor_y * *(b + 9 * 10 + 3) -
                                    p_over_q * *(b + 18 * 10 + 3);
                                *(b + 9 * 10 + 9) =
                                    prefactor_z * *(b + 9 * 10 + 3) -
                                    p_over_q * *(b + 19 * 10 + 3) +
                                    2 * one_over_two_q * *(b + 3 * 10 + 3) +
                                    one_over_two_q * *(b + 9 * 10 + 0);
                                break;
                            }

                            if (segmented_ket) {
                                double* AAAA_cur = AAAA_b;
                                for (unsigned ii = i_index_begin;
                                     ii < i_index_end;
                                     ++ii)
                                    for (unsigned kk = k_index_begin;
                                         kk < k_index_end;
                                         ++kk, ++AAAA_cur)
                                        *AAAA_cur += *(AA_b + ii * 10 + kk);
                            } else {
                                double* B_cur = B_b;
                                for (unsigned ii = i_index_begin;
                                     ii < i_index_end;
                                     ++ii)
                                    for (unsigned kk = k_index_begin;
                                         kk < k_index_end;
                                         ++kk, ++B_cur)
                                        *B_cur = *(AA_b + ii * 10 + kk);

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
                        general_contraction(CT_12_cur,
                                            BBBBBB_b,
                                            AAAA_b,
                                            amount,
                                            bra_naive_size);
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
                unsigned n_j = 0;
                for (unsigned j = 0; j < naive_size_2; ++j) {
                    const unsigned l_j = ref_es2.l[j];
                    const unsigned j_size =
                        (spherical_basis ? l_j + l_j + 1
                                         : (l_j + 1) * (l_j + 2) / 2);
                    const unsigned l_ij = l_i + l_j;
                    const unsigned ii_index_begin =
                        (same_AB ? l_ij * (l_ij + 1) * (l_ij + 2) / 6
                                 : l_i * (l_i + 1) * (l_i + 2) / 6);
                    const unsigned ii_index_end =
                        (l_ij + 1) * (l_ij + 2) * (l_ij + 3) / 6;
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

                            // to working space for operations on the first pair
                            // of the current quartet
                            for (unsigned k_index = kk_index_begin;
                                 k_index < kk_index_end;
                                 ++k_index)
                                for (unsigned i_index = ii_index_begin;
                                     i_index < ii_index_end;
                                     ++i_index)
                                    *(CCC_b + k_index * CCC_s12 +
                                      i_index * CCC_s) =
                                        *(BBBBBB_cur +
                                          (i_index - i_index_begin) * BBBBBB_s +
                                          k_index - k_index_begin);

                            //(pseudo-)horizontal recursion
                            if (l_j > 0) {
                                if (same_AB) {
                                    switch (l_ij) {
                                    case 1:
                                        pseudo_hr_tot_1(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 2:
                                        pseudo_hr_tot_2(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 3:
                                        pseudo_hr_tot_3(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 4:
                                        pseudo_hr_tot_4(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 5:
                                        pseudo_hr_tot_5(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 6:
                                        pseudo_hr_tot_6(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 7:
                                        pseudo_hr_tot_7(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    case 8:
                                        pseudo_hr_tot_8(l_j,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                        break;
                                    }
                                } else {
                                    const unsigned funny = l_i * 4 + l_j;
                                    switch (funny) {
                                    case 1:
                                        hr_01(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 2:
                                        hr_02(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 3:
                                        hr_03(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 4:
                                        hr_04(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 5:
                                        hr_11(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 6:
                                        hr_12(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 7:
                                        hr_13(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 8:
                                        hr_14(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 9:
                                        hr_21(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 10:
                                        hr_22(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 11:
                                        hr_23(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 12:
                                        hr_24(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 13:
                                        hr_31(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 14:
                                        hr_32(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 15:
                                        hr_33(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 16:
                                        hr_34(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 17:
                                        hr_41(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 18:
                                        hr_42(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 19:
                                        hr_43(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    case 20:
                                        hr_44(X_AB,
                                              Y_AB,
                                              Z_AB,
                                              kk_index_begin,
                                              kk_index_end,
                                              CCC_b,
                                              CCC_s12,
                                              CCC_s);
                                        break;
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the second one
                            if (l_j > 0) {
                                const unsigned iii_index_begin =
                                    l_i * (l_i + 1) * (l_i + 2) / 6;
                                const unsigned iii_index_end =
                                    (l_i + 1) * (l_i + 2) * (l_i + 3) / 6;
                                if (l_j == 1) {
                                    for (unsigned k_index = kk_index_begin;
                                         k_index < kk_index_end;
                                         ++k_index)
                                        for (unsigned i_index = iii_index_begin;
                                             i_index < iii_index_end;
                                             ++i_index) {
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  i_index * CCC_s + 1);
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s + 1) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  i_index * CCC_s + 2);
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s + 2) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  i_index * CCC_s + 3);
                                        }
                                } else {
                                    if (spherical_basis) {
                                        cart_to_spher_2(l_j,
                                                        iii_index_begin,
                                                        iii_index_end,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                    } else {
                                        cart_to_cart_2(l_j,
                                                       iii_index_begin,
                                                       iii_index_end,
                                                       kk_index_begin,
                                                       kk_index_end,
                                                       CCC_b,
                                                       CCC_s12,
                                                       CCC_s);
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the first one
                            if (l_i > 0) {
                                if (l_i == 1) {
                                    for (unsigned k_index = kk_index_begin;
                                         k_index < kk_index_end;
                                         ++k_index)
                                        for (unsigned j_index = 0;
                                             j_index < j_size;
                                             ++j_index) {
                                            *(CCC_b + k_index * CCC_s12 +
                                              j_index) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  CCC_s + j_index);
                                            *(CCC_b + k_index * CCC_s12 +
                                              CCC_s + j_index) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  CCC_s + CCC_s + j_index);
                                            *(CCC_b + k_index * CCC_s12 +
                                              CCC_s + CCC_s + j_index) =
                                                *(CCC_b + k_index * CCC_s12 +
                                                  CCC_s + CCC_s + CCC_s +
                                                  j_index);
                                        }
                                } else {
                                    if (spherical_basis) {
                                        cart_to_spher_1(l_i,
                                                        j_size,
                                                        kk_index_begin,
                                                        kk_index_end,
                                                        CCC_b,
                                                        CCC_s12,
                                                        CCC_s);
                                    } else {
                                        cart_to_cart_1(l_i,
                                                       j_size,
                                                       kk_index_begin,
                                                       kk_index_end,
                                                       CCC_b,
                                                       CCC_s12,
                                                       CCC_s);
                                    }
                                }
                            }

                            // to working space for operations on the second
                            // pair of the current quartet
                            unsigned ij_index = 0;
                            for (unsigned i_index = 0; i_index < i_size;
                                 ++i_index)
                                for (unsigned j_index = 0; j_index < j_size;
                                     ++j_index, ++ij_index)
                                    for (unsigned k_index = kk_index_begin;
                                         k_index < kk_index_end;
                                         ++k_index)
                                        *(DDD_b + ij_index * DDD_s12 +
                                          k_index * DDD_s) =
                                            *(CCC_b + k_index * CCC_s12 +
                                              i_index * CCC_s + j_index);
                            const unsigned ij_index_end = ij_index;

                            //(pseudo-)horizontal recursion
                            if (l_l > 0) {
                                if (same_CD) {
                                    switch (l_kl) {
                                    case 1:
                                        pseudo_hr_tot_1(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 2:
                                        pseudo_hr_tot_2(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 3:
                                        pseudo_hr_tot_3(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 4:
                                        pseudo_hr_tot_4(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 5:
                                        pseudo_hr_tot_5(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 6:
                                        pseudo_hr_tot_6(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 7:
                                        pseudo_hr_tot_7(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                        break;
                                    case 8:
                                        pseudo_hr_tot_8(l_l,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
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
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 2:
                                        hr_02(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 3:
                                        hr_03(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 4:
                                        hr_04(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 5:
                                        hr_11(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 6:
                                        hr_12(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 7:
                                        hr_13(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 8:
                                        hr_14(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 9:
                                        hr_21(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 10:
                                        hr_22(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 11:
                                        hr_23(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 12:
                                        hr_24(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 13:
                                        hr_31(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 14:
                                        hr_32(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 15:
                                        hr_33(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 16:
                                        hr_34(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 17:
                                        hr_41(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 18:
                                        hr_42(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 19:
                                        hr_43(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    case 20:
                                        hr_44(X_CD,
                                              Y_CD,
                                              Z_CD,
                                              0,
                                              ij_index_end,
                                              DDD_b,
                                              DDD_s12,
                                              DDD_s);
                                        break;
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the fourth one
                            if (l_l > 0) {
                                const unsigned kkk_index_begin =
                                    l_k * (l_k + 1) * (l_k + 2) / 6;
                                const unsigned kkk_index_end =
                                    (l_k + 1) * (l_k + 2) * (l_k + 3) / 6;
                                if (l_l == 1) {
                                    for (unsigned ij_index = 0;
                                         ij_index < ij_index_end;
                                         ++ij_index)
                                        for (unsigned k_index = kkk_index_begin;
                                             k_index < kkk_index_end;
                                             ++k_index) {
                                            *(DDD_b + ij_index * DDD_s12 +
                                              k_index * DDD_s) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  k_index * DDD_s + 1);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              k_index * DDD_s + 1) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  k_index * DDD_s + 2);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              k_index * DDD_s + 2) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  k_index * DDD_s + 3);
                                        }
                                } else {
                                    if (spherical_basis) {
                                        cart_to_spher_2(l_l,
                                                        kkk_index_begin,
                                                        kkk_index_end,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                    } else {
                                        cart_to_cart_2(l_l,
                                                       kkk_index_begin,
                                                       kkk_index_end,
                                                       0,
                                                       ij_index_end,
                                                       DDD_b,
                                                       DDD_s12,
                                                       DDD_s);
                                    }
                                }
                            }

                            // transformation to normalized cartesian/spherical
                            // for the third one
                            if (l_k > 0) {
                                if (l_k == 1) {
                                    for (unsigned ij_index = 0;
                                         ij_index < ij_index_end;
                                         ++ij_index)
                                        for (unsigned l_index = 0;
                                             l_index < l_size;
                                             ++l_index) {
                                            *(DDD_b + ij_index * DDD_s12 +
                                              l_index) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  DDD_s + l_index);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              DDD_s + l_index) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  DDD_s + DDD_s + l_index);
                                            *(DDD_b + ij_index * DDD_s12 +
                                              DDD_s + DDD_s + l_index) =
                                                *(DDD_b + ij_index * DDD_s12 +
                                                  DDD_s + DDD_s + DDD_s +
                                                  l_index);
                                        }
                                } else {
                                    if (spherical_basis) {
                                        cart_to_spher_1(l_k,
                                                        l_size,
                                                        0,
                                                        ij_index_end,
                                                        DDD_b,
                                                        DDD_s12,
                                                        DDD_s);
                                    } else {
                                        cart_to_cart_1(l_k,
                                                       l_size,
                                                       0,
                                                       ij_index_end,
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
                                   j_size,
                                   k_size,
                                   l_size,
                                   size_1,
                                   size_2,
                                   size_3,
                                   size_4,
                                   n_i,
                                   n_j,
                                   n_k,
                                   n_l,
                                   swapped_1,
                                   swapped_2,
                                   swapped_12);

                            n_l += l_size;
                        }
                        n_k += k_size;
                    }
                    n_j += j_size;
                }
                n_i += i_size;
            }
        }
    }
}
