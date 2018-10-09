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
    }
}

#endif
