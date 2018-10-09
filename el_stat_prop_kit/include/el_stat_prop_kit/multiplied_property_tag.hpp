/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef MULTIPLIED_TAG_HPP
#define MULTIPLIED_TAG_HPP

#include "el_stat_prop_kit/properties_tags.hpp"
#include "el_stat_prop_kit/tag_abstract_base.hpp"

namespace el_stat_prop {

    class MultipliedPropertyTag : public PropertyTag {
        typedef MultipliedPropertyTag type;

    public:
        MultipliedPropertyTag(
            const std::shared_ptr<PropertyTag> unit_property_tag,
            double factor);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;

    public:
        const std::shared_ptr<PropertyTag> m_unit_property_tag;
        const double m_factor;
    };

} // end of namespace el_stat_prop

#endif