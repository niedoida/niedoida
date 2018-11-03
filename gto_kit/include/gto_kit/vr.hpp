/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GTO_KIT_VR_HPP
#define NIEDOIDA_GTO_KIT_VR_HPP

namespace niedoida {
    namespace gto {
        void vr1_4(const double, const double, const unsigned,
                   const double, const double, const double,
                   const double, const double, const double,
                   double* NIEDOIDA_RESTRICT);

        void vr5_8(const double, const double, const unsigned,
                   const double, const double, const double,
                   const double, const double, const double,
                   double* NIEDOIDA_RESTRICT);

        void vr9_12(const double, const double, const unsigned,
                    const double, const double, const double,
                    const double, const double, const double,
                    double* NIEDOIDA_RESTRICT);

        void vr13_14(const double, const double, const unsigned,
                     const double, const double, const double,
                     const double, const double, const double,
                     double* NIEDOIDA_RESTRICT);

        void vr15_16(const double, const double, const unsigned,
                     const double, const double, const double,
                     const double, const double, const double,
                     double* NIEDOIDA_RESTRICT);

        void svr1_4(const double, const double, const unsigned,
                    const double, const double, const double,
                    double* NIEDOIDA_RESTRICT);

        void svr5_8(const double, const double, const unsigned,
                    const double, const double, const double,
                    double* NIEDOIDA_RESTRICT);

        void svr9_12(const double, const double, const unsigned,
                     const double, const double, const double,
                     double* NIEDOIDA_RESTRICT);

        void svr13_14(const double, const double, const unsigned,
                      const double, const double, const double,
                      double* NIEDOIDA_RESTRICT);

        void svr15_16(const double, const double, const unsigned,
                      const double, const double, const double,
                      double* NIEDOIDA_RESTRICT);

        void hvr1(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr1(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr2(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr2(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr3(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr3(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr4(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr4(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr5(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr5(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr6(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr6(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr7(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr7(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr8(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr8(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr7(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr7(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr8(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr8(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr9(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr9(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr10(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr10(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr11(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr11(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr12(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr12(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr13(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr13(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr14(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr14(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr15(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr15(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr16(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr16(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr17(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr17(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr18(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr18(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

        void hvr19(const double X_PA, const double Y_PA, const unsigned Z_PA,
                  const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                  const double one_over_two_p, const double wab,
                  double* NIEDOIDA_RESTRICT A);

        void hsvr19(const double X_PQ, const double Y_PQ, const unsigned Z_PQ,
                   const double one_over_two_p, const double wab,
                   double* NIEDOIDA_RESTRICT A);

    }
}

#endif
