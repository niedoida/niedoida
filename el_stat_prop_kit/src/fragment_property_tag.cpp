/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<el_stat_prop_kit/fragment_property_tag.hpp>
#include<el_stat_prop_kit/tag_from_string.hpp>

namespace el_stat_prop {

    FragmentPropertyTag::FragmentPropertyTag(
            const std::shared_ptr<PropertyTag> property_tag,
            const std::shared_ptr<FragmentTag> fragment_tag) :
    m_property_tag(property_tag),
    m_fragment_tag(fragment_tag) {
        if (!m_property_tag)
            throw std::invalid_argument("Formal argument property_tag is nullptr.");
        if (!m_fragment_tag)
            throw std::invalid_argument("Formal argument fragment_tag is nullptr.");
    }

    std::string FragmentPropertyTag::to_string() const {
        return m_property_tag->to_string() + "@" + m_fragment_tag->to_string();
    }

    auto FragmentPropertyTag::from_string(const std::string& str) -> std::shared_ptr<type> {
        // token fragmentation:
        const auto pos = str.find("@");
        if (pos == std::string::npos)
            return nullptr;
        const std::string str_prefix(str, 0, pos);
        const std::string str_suffix(str, pos + 1);
        // str_prefix to electron-density-property-tag:
        using PossiblePropertiesTagLists = PossibleTagList<
                ChargeTag,
                DipoleMomentTag,
                QuadrupoleMomentTag>;
        auto property_tag = tag_from_string<PropertyTag, PossiblePropertiesTagLists>(str_prefix);
        if (!property_tag) return nullptr;
        // str_suffix to electron-density-fragment-tag:
        using PossiblePopulationsTagLists = PossibleTagList<
                MullikenTag,
                LowdinTag >;
        auto fragment_tag = tag_from_string<FragmentTag, PossiblePopulationsTagLists>(str_suffix);
        if (!fragment_tag) return nullptr;
        // Wrapping into electron-density-property-fragment-tag aggregate:
        return std::make_shared<type>(property_tag, fragment_tag);
    }

} // end of namespace el_stat_prop
