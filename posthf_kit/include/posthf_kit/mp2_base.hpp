/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_POSTHF_KIT_MP2_BASE_HPP
#define NIEDOIDA_POSTHF_KIT_MP2_BASE_HPP

#include <boost/noncopyable.hpp>

namespace niedoida {

    namespace posthf {

        class MP2: public boost::noncopyable {
        public:
            virtual ~MP2() {}

            virtual double energy_correction() const = 0;
        };
    }
}
#endif
