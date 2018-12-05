/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GTO_KIT_HR_HPP
#define NIEDOIDA_GTO_KIT_HR_HPP

namespace niedoida {
    namespace gto {
        void hr_01(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_11(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_21(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_31(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_41(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_51(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_02(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_12(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_22(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_32(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_42(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_52(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_03(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_13(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_23(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_33(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_43(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_53(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_04(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_14(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_24(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_34(const double, const double, const double,
                     const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_44(const double, const double, const double,
                     const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_54(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_05(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_15(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_25(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_35(const double, const double, const double,
                     const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_45(const double, const double, const double,
                     const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hr_55(const double, const double, const double,
                   const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_1(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_2(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_3(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_4(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_5(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_6(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_7(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_8(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_9(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void pseudo_hr_tot_10(const unsigned,
                             const unsigned, const unsigned, double* const, const unsigned, const unsigned);

        void hhr_01(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_11(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_21(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_31(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_41(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_51(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_61(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_71(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_02(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_12(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_22(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_32(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_42(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_52(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_62(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_72(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_03(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_13(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_23(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_33(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_43(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_53(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_63(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_73(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_04(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_14(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_24(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_34(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_44(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_54(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_64(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_74(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_05(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_15(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_25(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_35(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_45(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_55(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);

        void hhr_65(const double X_AB, const double Y_AB, const double Z_AB,
                    const unsigned k_begin, const unsigned k_end, double* const A, const unsigned s, const unsigned s_12,
                    const double one_over_two_a, const double one_over_two_b);
    }
}

#endif
