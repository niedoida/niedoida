/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_IO_KIT_MISC_HPP
#define NIEDOIDA_IO_KIT_MISC_HPP

#include <iostream>

namespace niedoida {
    namespace io {
        class NullBuffer: public std::streambuf {
        public:
            int overflow(int c) { return c; }
        };
    }
}

#endif