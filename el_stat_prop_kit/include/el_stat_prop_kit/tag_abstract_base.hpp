/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef TAG_ABSTRACT_BASE_HPP
#define TAG_ABSTRACT_BASE_HPP

#include <string>

namespace el_stat_prop {

    class TagAbstractBase {
    public:
        virtual std::string to_string() const = 0;
        virtual ~TagAbstractBase() = 0;
    };

    inline TagAbstractBase::~TagAbstractBase() = default;

} // end of namespace el_stat_prop

#endif
