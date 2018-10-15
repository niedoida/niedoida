/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

// Auto-generated file, do not modify
#include "xc_kit/xc_functionals.hpp"

#include <cmath>
#include <limits>

/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

// Auto-generated, do not modify
namespace niedoida {
    namespace xc {
        XCFunctionalData slater_x_functional(
            double rhoa, double rhob, 
            unsigned n)
        {
            const double eps = std::numeric_limits<double>::epsilon();
            const double Pi = 3.1415926535897932384626433832795028842;

            XCFunctionalData result;

            if (rhoa + rhob < 2 * eps)
                return result;

            // Value of the functional itself

            if (rhoa >= eps && rhob >= eps) {
                const double C47 = 4. / 3.;

                result.e =  - ( ( std::pow(rhoa, C47) + std::pow(rhob, C47))  * 3. * std::pow(6. / Pi, 1. / 3.))  / 4.;
            } else if (rhoa < eps) {

                result.e =  - ( std::pow(rhob, 4. / 3.) * 3. * std::pow(6. / Pi, 1. / 3.))  / 4.;
            } else if (rhob < eps) {

                result.e =  - ( std::pow(rhoa, 4. / 3.) * 3. * std::pow(6. / Pi, 1. / 3.))  / 4.;
            }

            if (n < 1)
                return result;

            // First derivatives with respect to density

            if (rhoa >= eps) {
                const double C54 = 1. / 3.;

                result.de_dra =  - ( 3. * std::pow(6. / Pi, C54) * 4. * std::pow(rhoa, C54))  / 12.;
            }

            if (rhob >= eps) {
                const double C56 = 1. / 3.;

                result.de_drb =  - ( 3. * std::pow(6. / Pi, C56) * 4. * std::pow(rhob, C56))  / 12.;
            }

            if (n < 2)
                return result;

            // Second derivatives with respect to density

            if (rhoa >= eps) {
                const double C54 = 1. / 3.;

                result.d2e_drara =  - ( 3. * std::pow(6. / Pi, C54) * 4. * std::pow(rhoa, -2. / 3.))  / 36.;
            }

            if (rhoa >= eps && rhob >= eps) {
                const double C54 = 1. / 3.;
                const double C56 = 1. / 3.;

                result.d2e_drarb = 0;
            }

            if (rhob >= eps) {
                const double C56 = 1. / 3.;

                result.d2e_drbrb =  - ( 3. * std::pow(6. / Pi, C56) * 4. * std::pow(rhob, -2. / 3.))  / 36.;
            }

            if (n < 3)
                return result;

            // Third derivatives with respect to density

            if (rhoa >= eps) {
                const double C54 = 1. / 3.;

                result.d3e_drarara =  - ( 3. * std::pow(6. / Pi, C54) * -8. * std::pow(rhoa, -5. / 3.))  / 108.;
            }

            if (rhoa >= eps && rhob >= eps) {
                const double C54 = 1. / 3.;
                const double C56 = 1. / 3.;

                result.d3e_drararb = 0;
                result.d3e_drarbrb = 0;
            }

            if (rhob >= eps) {
                const double C56 = 1. / 3.;

                result.d3e_drbrbrb =  - ( 3. * std::pow(6. / Pi, C56) * -8. * std::pow(rhob, -5. / 3.))  / 108.;
            }

            return result;
        }
    }
}

