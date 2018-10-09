/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_BASIC_2EL_INT_PROP_HPP
#define NIEDOIDA_CORE_KIT_BASIC_2EL_INT_PROP_HPP

#include <vector>

namespace niedoida {

    namespace core {

        struct Basic2elIntProp {
            double m_MaxGAA;
            double m_MaxGAB;
            std::vector<double> m_GMaxAA;
            std::vector<double> m_GMaxAB;
            std::vector<std::vector<double> > m_GAA; 
            std::vector<std::vector<double> > m_GAB;
        };
    }
}

#endif
