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
    }
}

#endif
