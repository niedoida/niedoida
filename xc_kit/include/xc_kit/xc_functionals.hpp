/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_XC_KIT_XC_FUNCTIONALS_HPP
#define NIEDOIDA_XC_KIT_XC_FUNCTIONALS_HPP

#include "xc_kit/xc_functional.hpp"

namespace niedoida {
    namespace xc {
        XCFunctionalData slater_x_functional(
            double rhoa, 
            double rhob,
            unsigned n);

        XCFunctionalData vwn_c_functional(
            double rhoa, 
            double rhob,
            unsigned n);

        XCFunctionalData vwn_rpa_c_functional(
            double rhoa, 
            double rhob,
            unsigned n);

        XCFunctionalData vwn3_c_functional(
            double rhoa, 
            double rhob,
            unsigned n);

        inline
        XCFunctionalData svwn_xc_functional(
            double rhoa, 
            double rhob,
            unsigned n)
        {
            return slater_x_functional(rhoa, rhob, n) + vwn_c_functional(rhoa, rhob, n);
        }

        XCFunctionalData becke88_x_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n);

        inline
        XCFunctionalData becke3_x_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return 
                0.80 * slater_x_functional(rhoa, rhob, n) + 
                0.72 * becke88_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData b3_x_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return becke3_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        XCFunctionalData pw91_x_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n);

        XCFunctionalData mpw91_x_functional(
            double rhoa,
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n);

        XCFunctionalData pbe_x_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n);

        XCFunctionalData revpbe_x_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n);

        XCFunctionalData lyp_c_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n);

        XCFunctionalData pbe_c_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n);

        XCFunctionalData pw91_c_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n);

        XCFunctionalData pw92_c_functional(
            double rhoa, 
            double rhob,
            unsigned n);

        inline
        XCFunctionalData slyp_xc_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return 
                slater_x_functional(rhoa, rhob, n) + 
                lyp_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData blyp_xc_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return 
                becke88_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) + 
                lyp_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData pw91_xc_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return 
                pw91_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) + 
                pw91_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData pbe_xc_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return 
                pbe_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) + 
                pbe_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData revpbe_xc_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return 
                revpbe_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) + 
                pbe_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }


        inline
        XCFunctionalData b3lyp_xc_functional(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return 
                0.81 * lyp_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) + 
                0.19 * vwn3_c_functional(rhoa, rhob, n) + 
                0.08 * slater_x_functional(rhoa, rhob, n) + 
                0.72 * becke88_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData pbe0_xc_functional(
            double rhoa,
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return
                0.75 * pbe_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) +
                pbe_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData mpw91_xc_functional(
            double rhoa,
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return
                mpw91_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) +
                pw91_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData mpw91lyp_xc_functional(
            double rhoa,
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return
                mpw91_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) +
                lyp_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData modb3lyp_xc_functional(
            double rhoa,
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return
                0.81 * lyp_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) +
                0.19 * vwn3_c_functional(rhoa, rhob, n) +
                0.08 * slater_x_functional(rhoa, rhob, n) +
                0.72 * becke88_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData b3lyp5_xc_functional(
            double rhoa,
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return
                0.81 * lyp_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) +
                0.19 * vwn_c_functional(rhoa, rhob, n) +
                0.08 * slater_x_functional(rhoa, rhob, n) +
                0.72 * becke88_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData b3pw91_xc_functional(
            double rhoa,
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return
                0.81 * pw91_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) +
                0.19 * pw92_c_functional(rhoa, rhob, n) +
                0.08 * slater_x_functional(rhoa, rhob, n) +
                0.72 * becke88_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData b2plyp_xc_functional(    
            double rhoa,
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return
                0.47 * becke88_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) + 
                0.73 * lyp_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }

        inline
        XCFunctionalData mpw2plyp_xc_functional(
            double rhoa,
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n)
        {
            return
                0.45 * mpw91_x_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n) +
                0.75 * lyp_c_functional(rhoa, rhob, gammaaa, gammaab, gammabb, n);
        }    
    }
}

#endif
