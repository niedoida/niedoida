/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<el_stat_prop_kit/multiplied_property_tag.hpp>
#include<el_stat_prop_kit/fragment_property_tag.hpp>
#include<el_stat_prop_kit/tag_from_string.hpp>

namespace el_stat_prop {

    MultipliedPropertyTag::MultipliedPropertyTag(
            const std::shared_ptr<PropertyTag> unit_property_tag,
            double factor) :
    m_unit_property_tag(unit_property_tag),
    m_factor(factor) {
        if (!unit_property_tag)
            throw std::invalid_argument("Formal argument property_tag is nullptr.");
    }

    std::string MultipliedPropertyTag::to_string() const {
        return std::to_string(m_factor) + "*" + m_unit_property_tag->to_string();
    }

    auto MultipliedPropertyTag::from_string(const std::string& str) -> std::shared_ptr<type> {
        // token fragmentation:
        const auto pos = str.find("*");
        if (pos == std::string::npos)
            return nullptr;
        const std::string str_prefix(str, 0, pos);
        const std::string str_suffix(str, pos + 1);
        // str_prefix to double:
        double factor;
        try {
            factor = std::stod(str_prefix);
        } catch (...) {
            return nullptr;
        }
        // str_suffix to electron-density-property-tag:
        using PossiblePropertiesTagLists = PossibleTagList<
                ChargeTag,
                DipoleMomentTag,
                QuadrupoleMomentTag,
                FragmentPropertyTag>;
        auto unit_property_tag = tag_from_string<PropertyTag, PossiblePropertiesTagLists>(str_suffix);
        if (!unit_property_tag) return nullptr;
        // Wrapping into multiplied-property-tag aggregate:
        return std::make_shared<type>(unit_property_tag, factor);
    }

} // end of namespace el_stat_prop
