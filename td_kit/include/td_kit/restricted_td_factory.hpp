/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_TD_KIT_TD_FACTORY_HPP
#define NIEDOIDA_TD_KIT_TD_FACTORY_HPP

#include "td_kit/restricted_td.hpp"

namespace niedoida {
    namespace td {
        class RestrictedTDFactory: public core::Factory<RestrictedTD> {
        };
        
        class RCISFactory: public RestrictedTDFactory {
        public:
            RCISFactory();
        };

        class RTDKS_TDAFactory: public RestrictedTDFactory {
        };
    }
}


#endif
