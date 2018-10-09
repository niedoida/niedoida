/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_XC_KIT_XC_FUNCTIONAL_HPP
#define NIEDOIDA_XC_KIT_XC_FUNCTIONAL_HPP

#include "xc_kit/xc_functional_data.hpp"

#include <boost/variant.hpp>

namespace niedoida {
    namespace xc {
        typedef XCFunctionalData (*NoneXCFunctional)(void);

        typedef XCFunctionalData (*LocalXCFunctional)(
            double rhoa, 
            double rhob,
            unsigned n);

        typedef XCFunctionalData (*GGAXCFunctional)(
            double rhoa, 
            double rhob,
            double gammaaa,
            double gammaab,
            double gammabb,
            unsigned n);
        
        typedef boost::variant<
            xc::NoneXCFunctional,
            xc::LocalXCFunctional,
            xc::GGAXCFunctional> XCFunctional;
    }
}

#endif
